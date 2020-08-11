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
	struct<110> Local_28[4];
	struct<94> Local_29 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = -1;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	struct<8> Local_46[5];
	int iLocal_47[1] = { 0 };
	struct<4> Local_48 = { 0, 0, 0, 0 } ;
	char cLocal_49[64] = "";
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59[24] = "";
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 30;
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
	var uLocal_221 = 10;
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
	var uLocal_272 = 10;
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
	var uLocal_343 = 20;
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
	var uLocal_444 = 20;
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
	var uLocal_545 = 30;
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
	var uLocal_726 = 5;
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
	var uLocal_757 = 7;
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
	var uLocal_807 = 5;
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
	var uLocal_833 = 3;
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
	var uLocal_849 = 16;
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
	var uLocal_949 = 10;
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
	var uLocal_965 = 0;
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
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 5;
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
	var uLocal_1026 = 5;
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
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	int iLocal_1055 = 0;
	var uLocal_1056 = 3;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 1092616192;
	var uLocal_1063 = 1101004800;
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
	struct<8> Local_1080[5];
	struct<32> Local_1081[20];
	char cLocal_1082[32] = "";
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 16;
	var uLocal_1088 = 0;
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
	bool bLocal_1252 = 0;
	int iLocal_1253 = 0;
	int iLocal_1254 = 0;
	var uLocal_1255 = 0;
	int iLocal_1256 = 0;
	int iLocal_1257 = 0;
	int iLocal_1258 = 0;
	char cLocal_1259[16] = "";
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	char cLocal_1262[16] = "";
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	int iLocal_1265 = 0;
	float fLocal_1266 = 0f;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	int iLocal_1270 = 0;
	int iLocal_1271 = 0;
	int iLocal_1272 = 0;
	char cLocal_1273[16] = "";
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	bool bLocal_1278 = 0;
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	struct<2> Local_1283 = { 0, 0 } ;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	struct<2> Local_1286 = { 0, 0 } ;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	int iLocal_1289 = 0;
	bool bLocal_1290 = 0;
	int iLocal_1291 = 0;
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	bool bLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	int iLocal_1298 = 0;
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
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
	StringCopy(&Local_48, "JHP1ADS", 16);
	StringCopy(&cLocal_49, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	vLocal_58 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_59, "jhp1a_sec_arrive", 24);
	iLocal_63 = 0x00000000;
	iLocal_69 = 0x00000006;
	iLocal_1253 = 0xFFFFFFFF;
	iLocal_1257 = 0xFFFFFFFF;
	iLocal_1258 = 0xFFFFFFFF;
	StringCopy(&cLocal_1259, "", 16);
	StringCopy(&cLocal_1262, "", 16);
	fLocal_1266 = 1E+08f;
	iLocal_1269 = 0x00000001;
	iLocal_1272 = 0xFFFFFFFF;
	StringCopy(&cLocal_1273, "", 16);
	iLocal_1276 = 0xFFFFFFFF;
	iLocal_1277 = 0x00000001;
	iLocal_1281 = 0xFFFFFFFF;
	iLocal_1282 = 0xFFFFFFFF;
	StringCopy(&Local_1283, "", 16);
	StringCopy(&Local_1286, "", 16);
	iLocal_1289 = 0x00000001;
	iLocal_1291 = 0x00000001;
	iLocal_1295 = 0xFFFFFFFF;
	iLocal_1297 = 0xFFFFFFFF;
	iLocal_1298 = 0xFFFFFFFF;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_289(0x00000006);
	}
	unk_0x7798376279BB5369(0x00000001);
	func_282();
	func_241();
	while (0x00000001)
	{
		unk_0x1A6DFFFEEC27BF4F("M_JewelStoreJobPrep1A", 0x00000000);
		if (bLocal_68)
		{
			func_239();
		}
		func_236(&uLocal_70);
		func_187();
		if (!bLocal_66)
		{
			func_185();
			func_174();
			func_173(&Local_1080);
		}
		func_1();
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	switch (iLocal_63)
	{
		case 0x00000000:
			if (func_25())
			{
				func_24(0x00000001);
			}
			break;
		
		case 0x00000001:
			func_2();
			break;
	}
}

void func_2()
{
	int iVar0;
	
	if ((iLocal_1298 != 0xFFFFFFFF && unk_0xC844350D5D58C99A(Local_46[iLocal_1298 /*8*/])) && unk_0xDF1306B443CD3D15(Local_46[iLocal_1298 /*8*/], 0x00000000))
	{
		iVar0 = unk_0x7F6DC62EA9922664(Local_46[iLocal_1298 /*8*/]);
		func_23(Local_46[iLocal_1298 /*8*/], 0xFFFFFFFF);
	}
	if (iVar0 >= 0x000002EE || iVar0 <= 0x00000000)
	{
		Global_173C1 = 0x000003E8;
	}
	else
	{
		Global_173C1 = iVar0;
	}
	if (!func_22(&(Local_1080[0x00000003 /*8*/])))
	{
		func_21(0x000002BB);
	}
	func_8(0x00000000);
	if (func_7(0x00000058))
	{
		func_3(0x00000000, 0x00000001);
	}
	else
	{
		func_3(0x00000000, 0x00000000);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_3(bool bParam0, int iParam1)
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
		if ((func_6(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_5(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_6(0x00000000))
	{
		iVar0 = func_4();
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

int func_4()
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

int func_5(int iParam0)
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

bool func_6(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_7(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(0x00000001);
	if (bParam0)
	{
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
		unk_0xC92DB9682A650680("JHP1A_FAIL");
	}
	else
	{
		unk_0x51B096AAC60548C1(1f);
		unk_0x0FFE8B6DB75A4C39(unk_0xD803B885F5E47A62(), 1f);
	}
	unk_0x34D79252800B23FF(0x00000005);
	unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000001);
	unk_0x060F249A9A3E3F4E(0x00000001);
	func_18(&Local_1080);
	func_13(&iLocal_1055, 0x00000001, 0x00000000);
	bLocal_1252 = 0x00000000;
	iLocal_1253 = 0xFFFFFFFF;
	iLocal_1292 = 0x00000000;
	iLocal_1293 = 0x00000000;
	bLocal_1294 = 0x00000000;
	iLocal_1295 = 0xFFFFFFFF;
	iLocal_1297 = 0xFFFFFFFF;
	iLocal_1298 = 0xFFFFFFFF;
	iLocal_1299 = 0x00000000;
	iLocal_1300 = 0x00000000;
	iLocal_1296 = 0x00000000;
	if (bParam0)
	{
		func_11();
		unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
		unk_0x745CE398A4B0A3C6(158.78f, -3100.44f, 6.0019f, 100f, 0x00000000);
		unk_0x0002EE0323037BB6(158.78f, -3100.44f, 6.0019f, 100f, 0x00000000);
		unk_0x75CFD6AD66ADFDD1(158.78f, -3100.44f, 6.0019f, 100f, 0x00000000);
		unk_0x28F5E4DA506AC0CA(158.78f, -3100.44f, 6.0019f, 100f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x679C321F8CAA2CFA(158.78f, -3100.44f, 6.0019f, 100f, 0x00000000);
		unk_0x58B5D6A0F1D7754D(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_47)
	{
		if (unk_0xC844350D5D58C99A(iLocal_47[iVar0]))
		{
			if (bParam0)
			{
				unk_0xF690C84DADBB3551(&(iLocal_47[iVar0]));
			}
			else
			{
				unk_0xEEEE2E5FA6F78DF0(&(iLocal_47[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_28)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_29, bParam0);
	iVar0 = 0x00000000;
	while (iVar0 < Local_46)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0xEBA53F35D0085654(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0x6DAD7906B73F064D(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0xA954465BA6FDEFE2(&(Local_46[iVar0 /*8*/]));
			}
			else
			{
				unk_0x046C362CF15F1935(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0xEA16CBEF43A5CA3C(&cLocal_49))
	{
		unk_0x7B35981153AECDBE(&cLocal_49, bParam0);
	}
	if (iLocal_1302 != 0x00000000)
	{
		unk_0x2952D66A502EA873(iLocal_1302, 0x00000000);
	}
	func_9();
}

void func_9()
{
	Global_17187 = 0x00000000;
}

void func_10(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (bParam1)
		{
			unk_0xEBA53F35D0085654(iParam0);
		}
		else
		{
			unk_0x6DAD7906B73F064D(iParam0);
		}
	}
	iParam0->f_5 = 0x00000000;
	iParam0->f_6 = 0xFFFFFFFF;
	iParam0->f_7 = 0xFFFFFFFF;
	iParam0->f_27 = 0x00000000;
	iParam0->f_29 = 0x00000000;
	iParam0->f_5D = 0x00000001;
	iParam0->f_66 = 0x00000000;
	iParam0->f_2F = 0x00000000;
	iParam0->f_2E = 0x00000000;
	iParam0->f_30 = 0x00000000;
	iParam0->f_25 = 0xFFFFFFFF;
	iParam0->f_67 = 0xFFFFFFFF;
	iParam0->f_28 = 0x00000000;
	iParam0->f_5C = 0xFFFFFFFF;
	iParam0->f_2B = { 0f, 0f, 0f };
	iParam0->f_58 = { 0f, 0f, 0f };
	iParam0->f_5B = 0x00000000;
	if (unk_0xC844350D5D58C99A(iParam0->f_69))
	{
		if (unk_0xD59B17D2DFF98E26(iParam0->f_69))
		{
			unk_0x15AFB6CBDE990FB6(iParam0->f_69, 0x00000001, 0x00000001);
		}
		if (bParam1)
		{
			unk_0xF690C84DADBB3551(&(iParam0->f_69));
		}
		else
		{
			unk_0xEEEE2E5FA6F78DF0(&(iParam0->f_69));
		}
	}
	iParam0->f_6A = 0xFFFFFFFF;
	iParam0->f_6B = 0x00000000;
	iParam0->f_6D = 0x00000000;
	iParam0->f_68 = 0x00000000;
}

void func_11()
{
	Global_4CD7 = 0x00000000;
	func_12();
}

void func_12()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000001E))
	{
		bParam1 = 0x00000001;
	}
	func_17(iParam0);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1[iVar0]));
		}
		func_16(iVar0, iParam0);
		func_15(iVar0, iParam0);
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
				if (unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar0], func_14()) && iParam0->f_11[iVar0] != unk_0x16F2683693E537C9())
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

var func_14()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_15(int iParam0, var uParam1)
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

void func_16(int iParam0, var uParam1)
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

void func_17(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_5));
	}
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0x00000000;
	}
}

int func_20(var uParam0)
{
	if (*uParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_21(int iParam0)
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

int func_22(var uParam0)
{
	if (*uParam0 != 0x00000000 && (*uParam0 != 0x00000002 || uParam0->f_1 > 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_23(int iParam0, int iParam1)
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

void func_24(int iParam0)
{
	if (iParam0 == 0x00000002)
	{
	}
	else
	{
		iLocal_64 = 0x00000000;
		bLocal_65 = 0x00000000;
		iLocal_63 = iParam0;
	}
}

int func_25()
{
	bool bVar0;
	
	if (!bLocal_65)
	{
		func_172(&uLocal_70, "SCRIPT\JWL_HA_RAID_STORE");
		func_171(&uLocal_70, joaat("s_m_m_security_01"));
		func_170(&(Local_1080[0x00000001 /*8*/]), 0x00000000, 0x00000000, 0x00000001);
		func_170(&(Local_1080[0x00000000 /*8*/]), 0x00000000, 0x00000000, 0x00000001);
		func_170(&(Local_1080[0x00000004 /*8*/]), 0x00000000, 0x00000000, 0x00000001);
		func_111(0f, 0f, 0f, 0f, 0x00000001, func_165());
		Global_173C1 = 0x000003E8;
		unk_0x51B096AAC60548C1(0.1f);
		func_110("JHP1A_STEAL_BSV", 0x00001D4C, 0x00000001);
		bLocal_65 = 0x00000001;
	}
	if (bLocal_65)
	{
		switch (iLocal_64)
		{
			case 0x00000000:
				if (func_105(0x00000001) == 0x00000000)
				{
					func_13(&iLocal_1055, 0x00000001, 0x00000000);
					func_23(0x00000000, 0xFFFFFFFF);
					func_104(0x00000000, 0xFFFFFFFF);
				}
				else if ((func_103() && unk_0xC844350D5D58C99A(Local_46[func_102() /*8*/])) && unk_0xDF1306B443CD3D15(Local_46[func_102() /*8*/], 0x00000000))
				{
					unk_0x7DE464FD26F7E7E7(0.5f);
					if (iLocal_1298 != func_102())
					{
						unk_0x8B4C4CA774181102(5f, 10f, 0x00000004);
						func_23(Local_46[func_102() /*8*/], 0xFFFFFFFF);
						func_104(Local_46[func_102() /*8*/], 0xFFFFFFFF);
						iLocal_1298 = func_102();
					}
					if (func_100(&iLocal_1055, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0x00000001, Local_46[func_102() /*8*/], "", "", "", 0x00000001, 0x00000000, 0x00000001, 0xFFFFFFFF))
					{
						iLocal_64++;
					}
				}
				else if (func_99())
				{
					unk_0x7DE464FD26F7E7E7(0.5f);
					func_55(&iLocal_1055, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 0x00000001, iLocal_1299, "", "", "", 0x00000001, 0x00000000, 0x00000001, 0xFFFFFFFF);
					if (unk_0x3D1053F9EB43B7AD(Local_46[func_54() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_64++;
					}
				}
				else
				{
					func_17(&iLocal_1055);
					func_23(0x00000000, 0xFFFFFFFF);
					func_104(0x00000000, 0xFFFFFFFF);
				}
				break;
			
			case 0x00000001:
				if (func_103())
				{
					if (func_52(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 5f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
					{
						bVar0 = 0x00000001;
					}
				}
				else if (func_99())
				{
					if (func_52(iLocal_1299, 5f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
					{
						bVar0 = 0x00000001;
					}
				}
				if (bVar0)
				{
					if (func_7(0x00000058))
					{
						unk_0x8B4C4CA774181102(5f, 10f, 0x00000004);
						unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000001);
						func_51(0x00000001);
						func_50(0x00000001, 0x00000000);
						iLocal_64 = 0x000003E8;
					}
					else
					{
						unk_0x8B4C4CA774181102(5f, 10f, 0x00000004);
						iLocal_64++;
					}
					if (func_103())
					{
						unk_0x05EC10F460C3A4AF(Local_46[iLocal_1298 /*8*/], 0x00000000);
					}
					else if (func_99())
					{
						unk_0x05EC10F460C3A4AF(Local_46[func_54() /*8*/], 0x00000000);
						unk_0xF3F7BF451A720FDF(Local_46[func_54() /*8*/], 0x00000001);
						unk_0x4C3F954E2F66DAE2(Local_46[func_54() /*8*/]);
					}
					unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000002:
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000003E8:
				func_50(0x00000001, 0x00000000);
				if (!func_48())
				{
					func_46();
				}
				else
				{
					func_45(&uLocal_1087, 0x00000003, 0x00000000, "LESTER", 0x00000000, 0x00000001);
					if (func_28(&uLocal_1087, 0x0000000C, "JHFAUD", "JHF_P10c", 0x00000008, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_64++;
					}
				}
				break;
			
			case 0x000003E9:
				func_50(0x00000001, 0x00000000);
				if (func_27())
				{
					unk_0x8B4C4CA774181102(5f, 10f, 0x00000004);
					iLocal_64++;
				}
				break;
			
			case 0x000003EA:
				func_50(0x00000001, 0x00000000);
				if (!func_27())
				{
					func_26();
					return 0x00000001;
				}
				break;
			}
	}
	return 0x00000000;
}

void func_26()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000009D, 0x00000001);
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_17771[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(Global_17771[iVar0], 0x00000000))
			{
				unk_0xAA6B3A4292417750(Global_17771[iVar0], 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xE121AE1BBF90E186(Global_17771[iVar0], 0x00000000);
			}
		}
		iVar0++;
	}
	if ((Global_A1D7 != 0x00000000 && Global_A1D7 != 0x00000003) && Global_A1D7 != 0x00000002)
	{
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x51B096AAC60548C1(1f);
	}
}

int func_27()
{
	if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_44(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
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
	if (iParam5 == 0x00000001)
	{
		Global_5151 = 0x00000001;
	}
	else
	{
		Global_5151 = 0x00000000;
	}
	Global_280001 = 0x00000000;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					func_43();
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
		if (func_42(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_41();
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
				func_39();
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
				if (func_38())
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
			if (func_37())
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
			func_36();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_35();
		func_30();
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
		func_43();
	}
	return 0x00000000;
}

void func_30()
{
	if (!func_31())
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

int func_31()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_34())
	{
		return 0x00000000;
	}
	if (func_32(unk_0xD803B885F5E47A62()))
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

bool func_32(int iParam0)
{
	return func_33(iParam0, 0x00000014);
}

bool func_33(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_34()
{
	return 0xFFFFFFFF;
}

void func_35()
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

void func_36()
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

int func_37()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_38()
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

void func_39()
{
	if (func_40(0x0000000E))
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
		Global_4C1E = func_165();
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

bool func_40(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_41()
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

bool func_42(int iParam0, int iParam1)
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

void func_43()
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

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_45(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_46()
{
	Global_4CD7 = 0x00000000;
	func_47();
}

void func_47()
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

int func_48()
{
	if (func_49())
	{
		return 0x00000000;
	}
	if (unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_49()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_50(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000101, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000017, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002F, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000024, 0x00000001);
	if (bParam0)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (bParam1)
		{
			unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), 2f);
		}
		else
		{
			unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), 1f);
		}
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000066, 0x00000001);
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
	}
}

void func_51(bool bParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000009D, 0x00000000);
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000001);
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		if (bParam0)
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000000);
		}
		unk_0xE731059548189243(unk_0x16F2683693E537C9(), 0x00000000);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
	}
	unk_0x34D79252800B23FF(0x00000000);
	unk_0x51B096AAC60548C1(0f);
}

int func_52(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_53(iParam0);
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

void func_53(int iParam0)
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

int func_54()
{
	int iVar0;
	
	if (func_99())
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
			{
				if (unk_0x6D18156F72BE0773(iLocal_1299, Local_46[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_55(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_56(iParam0, vParam1, vParam2, func_98(), func_98(), bParam3, 0x00000005, 0x00000000, 0x00000000, 0x00000000, iParam4, sParam5, func_97(), func_97(), func_97(), func_97(), sParam6, 0x00000000, bParam8, sParam7, 0x00000000, iParam9, bParam10, iParam11, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x3F800000);
}

int func_56(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_11[0x00000000] = iParam7;
	iParam0->f_11[0x00000001] = iParam8;
	iParam0->f_11[0x00000002] = iParam9;
	iParam0->f_10 = iParam7;
	func_96(iParam0);
	func_95(iParam0);
	func_94();
	if (func_78(iParam0, iParam0->f_11[0x00000000], iParam0->f_11[0x00000001], iParam0->f_11[0x00000002], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0x00000000, 0x00000000, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_77(sParam12);
		func_77(sParam13);
		func_77(sParam14);
		func_77(sParam15);
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
				if (func_75(iParam0, iParam21))
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
				func_77(sParam16);
				func_77(sParam19);
				func_77("MORE_SEATS");
				if (bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						func_77(sParam11);
					}
					if (unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(iParam0);
					}
					if ((!func_72(iParam0, 0x00000001) && !func_71(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						if (bParam22)
						{
							func_70(iParam0, "LOSE_WANTED", 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_68(iParam0->f_11[0x00000000], "VEHICLE_POLICE_PURSUIT", 0x00000003);
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
						func_77("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000001);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000001))
					{
						if (!func_72(iParam0, 0x00000001))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_68(iParam0->f_11[0x00000000], "LOSE_WANTED_LEVEL", 0x00000003);
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
						iParam0->f_5 = func_67(vVar3, 0x00000000);
						if (!iParam23 == 0xFFFFFFFF)
						{
							unk_0xBC8E0A7390523199(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_66(iParam0->f_5, iParam0);
						}
					}
					else if (!func_65(vVar3, unk_0xAC14F6E4B17D7835(iParam0->f_5), 0.1f, 0x00000000))
					{
						unk_0x2F9282246F89FFD1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_66(iParam0->f_5, iParam0);
						}
					}
					if (!func_72(iParam0, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000002))
						{
							func_70(iParam0, sParam11, 0x00000000);
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
					iVar4 = 0x00000000;
					iVar5 = 0x00000000;
					if ((iParam6 == 0x00000001 || iParam6 == 0x00000003) || iParam6 == 0x00000005)
					{
						iVar4 = 0x00000001;
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
						unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, bParam5, iVar4, iVar5);
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vParam3, vParam4, fParam28, 0x00000000, iVar4, iVar5))
						{
							bVar1 = 0x00000001;
						}
					}
					else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, bParam5, iVar4, iVar5))
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
								else if (!unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar2], func_14()) || !func_63(iParam0->f_11[iVar2], 0x00000001))
								{
									bVar1 = 0x00000000;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_60(iParam0))
							{
								func_77(sParam11);
								func_77(sParam16);
								func_77(sParam12);
								func_77(sParam13);
								func_77(sParam14);
								func_77(sParam15);
								func_77("LOSE_WANTED");
								func_77("MORE_SEATS");
								func_77(sParam19);
								func_13(iParam0, 0x00000001, 0x00000000);
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
					func_77(sParam16);
					func_77(sParam19);
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5) || unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						unk_0x142CC44DB769B57E(iParam0);
						func_77(sParam11);
					}
					if ((!func_72(iParam0, 0x00000001) && !func_71(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						if (bParam22)
						{
							func_70(iParam0, "LOSE_WANTED", 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_68(iParam0->f_11[0x00000000], "VEHICLE_POLICE_PURSUIT", 0x00000003);
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
						func_77("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000001);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000001))
					{
						if (!func_72(iParam0, 0x00000001))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_68(iParam0->f_11[0x00000000], "LOSE_WANTED_LEVEL", 0x00000003);
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
								func_77(sParam11);
							}
							*iParam0 = func_57(iParam10, 0x00000000, 0x00000000);
							unk_0x9D7CDDB4B55142AF(*iParam0, 0x00000002);
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								func_66(*iParam0, iParam0);
							}
						}
						if (!func_72(iParam0, 0x00000002))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
							{
								func_70(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
								unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
							}
							else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
							{
								if (!unk_0x2EBF5002C6B6A06C(sParam19))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
									{
										func_70(iParam0, sParam19, 0x00000000);
										unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
								{
									func_70(iParam0, sParam16, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000017))
								{
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
									{
										func_68(iParam0->f_11[0x00000000], "GET_IN_CAR", 0x00000003);
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
					func_77(sParam11);
				}
				if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
				{
					if (iParam21 > 0x00000000)
					{
						if (!func_72(iParam0, 0x00000002))
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
										func_68(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 0x00000003);
									}
									func_70(iParam0, "MORE_SEATS", 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x0000000D);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
							{
								func_70(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
								unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
								{
									func_70(iParam0, sParam19, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
							}
						}
					}
					else if (!func_72(iParam0, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
						{
							func_70(iParam0, sParam16, 0x00000000);
							unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
						}
						else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
						{
							if (!unk_0x2EBF5002C6B6A06C(sParam19))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
								{
									func_70(iParam0, sParam19, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								func_70(iParam0, sParam16, 0x00000000);
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
		func_77(sParam11);
		func_77(sParam16);
		func_77(sParam19);
		func_77(sParam16);
		func_77("LOSE_WANTED");
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

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	return func_58(iParam0, !bParam1, bParam2);
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_59(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_59(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_59(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_59(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_60(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000C))
	{
		if (func_62(unk_0x16F2683693E537C9()))
		{
			if (func_61(0x00000001, 0x00000000, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000007))
			{
				return 0x00000001;
			}
		}
	}
	else if (func_61(0x00000001, 0x00000000, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000007))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_61(bool bParam0, bool bParam1, bool bParam2)
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

int func_62(int iParam0)
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

int func_63(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && iParam1)
		{
			if (func_64(unk_0x16F2683693E537C9(), iParam0))
			{
				unk_0x7C27693C5112825F(func_14(), 50f);
				return 0x00000001;
			}
		}
		else if (unk_0xBFDE4EE64C4BF2D6(iParam0, func_14()))
		{
			unk_0x7C27693C5112825F(func_14(), 50f);
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_64(int iParam0, int iParam1)
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

int func_65(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_66(int iParam0, int iParam1)
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

int func_67(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_59(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

void func_68(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_69(iParam2), 0x00000001);
}

int func_69(int iParam0)
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

void func_70(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_110(sParam1, 0x00001D4C, 0x00000001);
			}
		}
	}
	iParam0->f_A = unk_0x1C0640BA9A7327B3();
}

int func_71(int iParam0)
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

int func_72(int iParam0, int iParam1)
{
	if (iParam1 != 0x00000001 || unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 0x00000001;
		}
		if (func_74(iParam0))
		{
			return 0x00000001;
		}
	}
	if (iParam1 != 0x00000002 || unk_0x04E6B3EAA8742BFA())
	{
		if (func_49() && !func_73())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_73()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_74(var uParam0)
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

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_76(iVar0, uParam0, iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_76(int iParam0, var uParam1, int iParam2)
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

void func_77(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		unk_0x2F23E8033F1ADDD9(sParam0);
	}
}

int func_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
						if (func_76(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0x00000000;
							while (iVar0 < 0x00000003)
							{
								if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
								{
									unk_0xCAF7AE54F764D5AA(uParam0->f_11[iVar0], 1f);
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
									{
										unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
									}
									if (unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492) == 0x00000007 && !func_93(uParam0->f_11[iVar0], uParam0->f_15))
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
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
					{
						if (func_91(uParam0, uParam0->f_11[iVar0], fParam8, 0x00000001))
						{
							unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001A))
	{
		if ((!func_90(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9())) && !unk_0xC844350D5D58C99A(iParam10))
		{
			iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar10, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000D))
				{
					if (iParam16 == 0x00000004 || iParam16 == 0x00000005)
					{
					}
					if (!func_72(uParam0, 0x00000002))
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
							func_68(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 0x00000003);
						}
						func_70(uParam0, "MORE_SEATS", 0x00000000);
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
			func_77("MORE_SEATS");
		}
		if (!unk_0xC844350D5D58C99A(iParam10))
		{
			if ((!unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000000]) || !unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000001])) || !unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000002]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001F))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && !func_72(uParam0, 0x00000002))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (func_89(iVar10, uParam0))
						{
							func_70(uParam0, "CMN_VEHSUIT", 0x00000000);
							unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001F);
						}
					}
				}
				else if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001F);
					func_77("CMN_VEHSUIT");
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
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
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
							if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
							{
								if (!func_90(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
								{
									if (!func_88(uParam0->f_11[iVar0]))
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
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
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
					if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
					{
						iVar21 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xC844350D5D58C99A(iVar21))
						{
							if (func_76(iVar21, uParam0, 0x00000000))
							{
								if (func_87(iVar0, uParam0) || !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001B))
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001B);
									}
								}
							}
							else if (!func_87(iVar0, uParam0))
							{
								if (unk_0x134B62B726CEC8E6(iVar21) == joaat("sentinel2"))
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], 0x00000004);
								}
								else
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], 0x00000002);
								}
								func_86(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()) && !func_85(uParam0->f_11[iVar0], iParam10)) && !func_84(uParam0->f_11[iVar0], iParam10))
					{
						if (func_91(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
							{
								if (((!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
									if (iVar11 == 0x00000007)
									{
										unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
									}
									unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_14());
									bVar8 = 0x00000000;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x1C0640BA9A7327B3();
								uParam0->f_1[iVar0] = func_57(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
								unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 0x00000002);
								if (bParam9)
								{
									func_66(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0x00000000;
					}
					else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
					{
						if (((func_63(uParam0->f_11[iVar0], 0x00000001) || func_85(uParam0->f_11[iVar0], iParam10)) || iParam12) || (unk_0xDF1306B443CD3D15(iParam10, 0x00000000) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000)))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
								func_77(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_66(uParam0->f_1[iVar0], uParam0);
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
										if (!func_63(uParam0->f_11[iVar0], 0x00000001))
										{
											if (func_62(uParam0->f_11[iVar0]))
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
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
									{
										if ((((!unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0]) && !unk_0x869EFD0BC0868856(uParam0->f_11[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_11[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
									if (iVar11 == 0x00000007 && !func_93(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0]) && !unk_0x7F69A7C512ACACFD(unk_0x16F2683693E537C9())) && !func_83(uParam0->f_11[iVar0], 2f)) && !unk_0x869EFD0BC0868856(uParam0->f_11[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
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
										uParam0->f_1[iVar0] = func_57(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
										unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 0x00000002);
										iVar6 = 0x00000000;
									}
								}
							}
							else if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
							{
								if (func_91(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0]))
									{
										iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
										if (iVar11 == 0x00000007)
										{
											unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
										}
										unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000000);
										unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
								{
									unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_14());
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
							{
								unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
								unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000015);
							}
						}
						else if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_14()) && !unk_0x4E861BC5B1EDA7BD(iParam10))
						{
							unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_77(uVar12[iVar0]);
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
		if (!func_72(uParam0, 0x00000002))
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
							if (func_88(uParam0->f_11[iVar0]) || unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], unk_0x16F2683693E537C9(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0x00000000, 0x00000001, 0x00000000))
							{
								iVar1 = (iVar1 - 0x00000001);
								iVar7[iVar0] = 0x00000000;
							}
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
					{
						if (!unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], unk_0x16F2683693E537C9(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0x00000000, 0x00000001, 0x00000000) && !func_88(uParam0->f_11[iVar0]))
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
								func_70(uParam0, sParam7, 0x00000000);
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
									if (!func_82(iVar0, uParam0))
									{
										if (!unk_0x2EBF5002C6B6A06C(uVar13[iVar0]))
										{
											if (!unk_0x7F8A39872A07D2CE(uVar13[iVar0], ""))
											{
												func_80(uParam0, uVar12[iVar0], uVar13[iVar0], 0x00000000);
												func_79(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_82(iVar0, uParam0))
										{
											func_70(uParam0, uVar12[iVar0], 0x00000000);
											func_79(iVar0, uParam0);
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
					func_77(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_77("MORE_SEATS");
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_79(int iParam0, var uParam1)
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

void func_80(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_81(sParam1, sParam2, 0x00001D4C, 0x00000001);
			}
		}
	}
	uParam0->f_A = unk_0x1C0640BA9A7327B3();
}

void func_81(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 0x00000001);
}

int func_82(int iParam0, var uParam1)
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

int func_83(int iParam0, float fParam1)
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

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_14()))
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

int func_85(int iParam0, int iParam1)
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

void func_86(int iParam0, var uParam1)
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

int func_87(int iParam0, var uParam1)
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

int func_88(int iParam0)
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

int func_89(int iParam0, var uParam1)
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

int func_90(var uParam0)
{
	int iVar0;
	
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_76(iVar0, uParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_91(var uParam0, int iParam1, float fParam2, bool bParam3)
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
						if (func_90(uParam0))
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
					if (func_76(iVar0, uParam0, 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
						{
							if (func_92(iVar0))
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

int func_92(int iParam0)
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

int func_93(int iParam0, int iParam1)
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

void func_94()
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

void func_95(var uParam0)
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

void func_96(var uParam0)
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

var func_97()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_98()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_99()
{
	if (unk_0xC844350D5D58C99A(iLocal_1299) && unk_0xDF1306B443CD3D15(iLocal_1299, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_100(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)
{
	return func_56(iParam0, vParam1, func_101(), vParam2, vParam3, bParam5, 0x00000005, 0x00000000, 0x00000000, 0x00000000, iParam6, sParam7, func_97(), func_97(), func_97(), func_97(), sParam8, 0x00000000, bParam10, sParam9, 0x00000001, iParam11, bParam12, iParam13, func_97(), func_97(), func_97(), 0x00000001, fParam4);
}

Vector3 func_101()
{
	return 0f, 0f, 2f;
}

int func_102()
{
	int iVar0;
	
	if (func_103())
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_46[iVar0 /*8*/], 0x00000001))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_103()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_46[iVar0 /*8*/], 0x00000000))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_104(int iParam0, int iParam1)
{
	Global_F053 = iParam0;
	Global_F054 = iParam1;
}

int func_105(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000002)
	{
		if (((unk_0xC844350D5D58C99A(Local_46[iVar1 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar1 /*8*/], 0x00000000)) && !func_109(Local_46[iVar1 /*8*/])) && (!bParam0 || func_106(Local_46[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_106(int iParam0)
{
	if (unk_0x4D570FEF9D230CE7(iParam0) == iLocal_1256)
	{
		if (func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) < 500f)
		{
			return 0x00000001;
		}
	}
	else if (func_107(iParam0, unk_0x16F2683693E537C9(), 0x00000001) < 300f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_107(int iParam0, int iParam1, int iParam2)
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
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, iParam2);
}

float func_108(int iParam0, vector3 vParam1, int iParam2)
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
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, iParam2);
}

int func_109(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if ((unk_0x7B5606C651AB51B5(iParam0, 0x00000000, 0x00001B58) || unk_0x7B5606C651AB51B5(iParam0, 0x00000001, 0x00001B58)) || unk_0x7B5606C651AB51B5(iParam0, 0x00000002, 0x00001B58))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_110(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

void func_111(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0xC844350D5D58C99A(Global_18F3B.f_4))
	{
		if (unk_0xDF1306B443CD3D15(Global_18F3B.f_4, 0x00000000))
		{
			if (func_164(0x00000018) != Global_18F3B.f_4)
			{
				if (iParam2 == 0x00000001)
				{
					if (func_161(unk_0x68F4C0EC296D3901(Global_18F3B.f_4, 0x00000001), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_112(Global_18F3B.f_4, vParam0, fParam1, 0x00000018, 0x00000000);
			}
		}
	}
}

void func_112(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_160(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_155(iParam0, &Var0);
		if (func_154(vParam1, 0f, 0f, 0f, 0x00000000))
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
		func_147(iParam3, &Var0, vParam1, fParam2, func_153(iParam0));
		func_113(iParam3, iParam0, 0x00000000);
	}
}

void func_113(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_143(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
				Global_1B416.f_7FE8.f_12C1 = func_132();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_164(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_114(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_115(iParam0))
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
	func_155(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_115(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_130(iParam0, 0x00000000, 0x00000000)) || func_130(iParam0, 0x00000001, 0x00000000)) || func_130(iParam0, 0x00000002, 0x00000000)) || func_153(iParam0) != 0x00000091) || func_129(iParam0)) || func_128(iParam0)) || func_127(iParam0)) || func_126(iParam0)) || !func_116(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_128(iParam0))
		{
		}
		if (func_128(iParam0))
		{
		}
		if (func_130(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_130(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_130(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_153(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_116(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_117(iParam0, 0x00000000))
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

int func_117(int iParam0, bool bParam1)
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
		if (!func_125())
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
		if ((((!func_124() && !func_123()) && !func_122()) && !func_121()) && !func_125())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_122())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_120(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_118(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_118(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_119())
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

int func_119()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_120(int iParam0)
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

int func_121()
{
	return 0x00000000;
}

int func_122()
{
	return 0x00000001;
}

int func_123()
{
	return 0x00000001;
}

int func_124()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_125()
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

int func_126(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_117(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_127(int iParam0)
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

int func_128(int iParam0)
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

int func_129(int iParam0)
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

int func_130(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_131(iParam1, iVar0, &sVar1, &iVar2))
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

int func_131(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_132()
{
	var uVar0;
	
	func_142(&uVar0, unk_0x4460E481B9E33ADA());
	func_141(&uVar0, unk_0x8D199E381D262EEF());
	func_140(&uVar0, unk_0xD8A54335F18763BA());
	func_135(&uVar0, unk_0x972A296334C9D57B());
	func_134(&uVar0, unk_0x118229AD063C3C1D());
	func_133(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_133(var uParam0, int iParam1)
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

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_136(int iParam0, int iParam1)
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

var func_137(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_138(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_143(var uParam0, int iParam1)
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
			uParam0->f_4 = func_144(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_144(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_144(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_144(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_144(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_144(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_144(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_144(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_144(0x00000002, 0x00000001);
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
			if (func_125())
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
			if (func_125())
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
		if (!func_154(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_154(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_154(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_144(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_146(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_145(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_145(int iParam0, var uParam1, int iParam2)
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

bool func_146(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_147(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_143(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_152(iParam0);
			func_151(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
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
			func_148(iParam0, 0x00000001);
		}
	}
}

void func_148(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_150(iParam0, 0x00000000))
		{
			func_149(iParam0, 0x00000001, 0x00000000);
			func_149(iParam0, 0x00000002, 0x00000000);
			func_149(iParam0, 0x00000003, 0x00000000);
			func_149(iParam0, 0x00000004, 0x00000000);
			func_149(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_149(iParam0, 0x00000000, 0x00000000);
	}
}

void func_149(int iParam0, int iParam1, bool bParam2)
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

bool func_150(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_151(var uParam0, var uParam1)
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

void func_152(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_143(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_148(iParam0, 0x00000000);
		}
	}
}

int func_153(int iParam0)
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

bool func_154(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_155(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_159(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_158(uParam1->f_42))
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
		func_157(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_156(iVar0 + 1));
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

int func_156(int iParam0)
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

int func_157(int iParam0, var uParam1, var uParam2)
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

int func_158(int iParam0)
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

void func_159(var uParam0)
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

void func_160(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_152(iParam0);
	func_148(iParam0, 0x00000000);
}

int func_161(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_162(vParam0, iParam1, 0x00000001);
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

int func_162(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_163(iVar0) || iParam2 == 0x00000000)
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

bool func_163(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_164(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

int func_165()
{
	func_166();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_166()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_168(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_167(unk_0x16F2683693E537C9());
			if (func_146(iVar0) && (!func_40(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_146(Global_1B416.f_936.f_21B.f_10E1))
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

int func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_168(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_168(int iParam0)
{
	if (func_146(iParam0))
	{
		return func_169(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_169(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_170(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else if (*uParam0 == 0x00000001)
	{
		return 0x00000001;
	}
	else if (*uParam0 == 0x00000000 || ((*uParam0 == 0x00000002 && uParam0->f_1 == 0x00000001) && iParam2))
	{
		if (iParam1 > 0x00000000)
		{
			*uParam0 = 0x00000002;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 0x00000001;
			uParam0->f_6 = 0x00000000;
		}
		uParam0->f_4 = unk_0x1C0640BA9A7327B3();
		uParam0->f_5 = unk_0x1C0640BA9A7327B3();
		uParam0->f_1 = iParam3;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_171(var uParam0, int iParam1)
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

int func_172(var uParam0, char* sParam1)
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

void func_173(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 0x00000001:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 0x00000002:
				if ((unk_0x1C0640BA9A7327B3() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 0x00000001;
					(uParam0[iVar0 /*8*/])->f_6 = 0x00000000;
				}
				break;
		}
		iVar0++;
	}
}

void func_174()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = 0x00000000;
	if (func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) < 70f)
	{
		unk_0xA80942BEA6D69B21();
	}
	if (iLocal_1297 == 0x00000009)
	{
		if (!iLocal_1296)
		{
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_1296 = 0x00000001;
			}
		}
		if (unk_0xC844350D5D58C99A(Local_29))
		{
			if (func_107(Local_29, unk_0x16F2683693E537C9(), 0x00000001) > 300f)
			{
				unk_0x6DAD7906B73F064D(&Local_29);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_1299) && unk_0xDF1306B443CD3D15(iLocal_1299, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
			{
				if (unk_0x6D18156F72BE0773(iLocal_1299, Local_46[iVar0 /*8*/]))
				{
					bVar2 = 0x00000001;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_1299 = 0x00000000;
		}
	}
	if (func_184())
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
			{
				if (unk_0x6D18156F72BE0773(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), Local_46[iVar0 /*8*/]))
				{
					iLocal_1299 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				}
			}
			iVar0++;
		}
	}
	func_177();
	if (iLocal_63 == 0x00000000)
	{
		if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, 0x00000000, 0x00000001, 0x00000000))
		{
			bVar3 = 0x00000001;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Local_28)
		{
			if (unk_0xC844350D5D58C99A(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 0x00000005 && func_107(unk_0x16F2683693E537C9(), Local_28[iVar1 /*110*/], 0x00000001) > 300f) && func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) > 300f)
				{
					unk_0xEBA53F35D0085654(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 0x00000006;
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]))
			{
				if (!unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
				{
					unk_0x046C362CF15F1935(&(Local_46[iVar0 /*8*/]));
					if (unk_0xE4EDC4B0E92C078B(Local_46[iVar0 /*8*/].f_1))
					{
						unk_0x142CC44DB769B57E(&(Local_46[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 0x00000001;
					}
					else
					{
						iVar4 = 0x00000002;
					}
				}
				else if (func_109(Local_46[iVar0 /*8*/]))
				{
					if (unk_0xE4EDC4B0E92C078B(Local_46[iVar0 /*8*/].f_1))
					{
						unk_0x142CC44DB769B57E(&(Local_46[iVar0 /*8*/].f_1));
					}
					iVar4 = 0x00000003;
				}
				else if (!func_106(Local_46[iVar0 /*8*/]))
				{
					if (unk_0x4D570FEF9D230CE7(Local_46[iVar0 /*8*/]) == iLocal_1256)
					{
						if (iVar4 != 0x00000004)
						{
							iVar4 = 0x00000005;
						}
					}
					else
					{
						iVar4 = 0x00000004;
					}
				}
			}
			if (((((iLocal_1297 == 0x00000009 && func_102() != 0xFFFFFFFF) && unk_0xC844350D5D58C99A(Local_46[func_102() /*8*/])) && unk_0xDF1306B443CD3D15(Local_46[func_102() /*8*/], 0x00000000)) && !func_109(Local_46[func_102() /*8*/])) || (((iLocal_1297 == 0x0000000A && func_54() != 0xFFFFFFFF) && unk_0xC844350D5D58C99A(Local_46[func_54() /*8*/])) && unk_0xDF1306B443CD3D15(Local_46[func_54() /*8*/], 0x00000000)))
			{
				if (unk_0xE4EDC4B0E92C078B(Local_46[iVar0 /*8*/].f_1))
				{
					unk_0x142CC44DB769B57E(&(Local_46[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000)) && !func_109(Local_46[iVar0 /*8*/])) && func_106(Local_46[iVar0 /*8*/])) && iLocal_64 == 0x00000000)
			{
				if (!unk_0xE4EDC4B0E92C078B(Local_46[iVar0 /*8*/].f_1))
				{
					Local_46[iVar0 /*8*/].f_1 = func_176(Local_46[iVar0 /*8*/], 0x00000000, 0x00000000);
					unk_0x2A065371C9D96655(Local_46[iVar0 /*8*/].f_1, 0x00000001);
				}
			}
			iVar0++;
		}
		if (iLocal_1297 == 0x00000009 || iLocal_1297 == 0x0000000A)
		{
			if (func_175("JHP1A_BKIN", 0x00000000, 0x00000000) || func_175("JHP1A_BKINANY", 0x00000000, 0x00000000))
			{
				unk_0x790015DC92C918E2();
			}
		}
		else if (iLocal_64 == 0x00000000)
		{
			if (!iLocal_1291)
			{
				if (func_105(0x00000001) == 0x00000001)
				{
					func_110("JHP1A_BKIN", 0x00001D4C, 0x00000001);
				}
				iLocal_1291 = 0x00000001;
			}
		}
		if (func_105(0x00000001) == 0x00000000)
		{
			if (iVar4 != 0x00000006)
			{
				func_289(iVar4);
			}
		}
	}
}

var func_175(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

int func_176(int iParam0, bool bParam1, bool bParam2)
{
	return func_58(iParam0, !bParam1, bParam2);
}

void func_177()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_46[0x00000003 /*8*/], 0x00000001))
		{
			iLocal_1297 = 0x0000000B;
		}
		else if (func_183())
		{
			iLocal_1297 = 0x00000007;
		}
		else if (func_182())
		{
			iLocal_1297 = 0x00000006;
		}
		else if (func_103())
		{
			iLocal_1297 = 0x00000009;
			iLocal_1291 = 0x00000000;
		}
		else if (func_99())
		{
			iLocal_1297 = 0x0000000A;
		}
		else if (func_181())
		{
			iLocal_1297 = 0x00000008;
		}
		else if (((unk_0xC844350D5D58C99A(iLocal_1300) && unk_0xDF1306B443CD3D15(iLocal_1300, 0x00000000)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1300, 0x00000001)) && unk_0x3D1053F9EB43B7AD(iLocal_1300, vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_1297 = 0x00000005;
		}
		else if (((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1())) && !func_180()) && unk_0x3D1053F9EB43B7AD(unk_0x728870EB733D12A1(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_1300 = unk_0x728870EB733D12A1();
			iLocal_1297 = 0x00000005;
		}
		else if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_1297 = 0x00000002;
		}
		else if (((unk_0xC844350D5D58C99A(iLocal_1300) && unk_0xDF1306B443CD3D15(iLocal_1300, 0x00000000)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1300, 0x00000001)) && (unk_0x3D1053F9EB43B7AD(iLocal_1300, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(iLocal_1300, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0x00000000, 0x00000001, 0x00000000)))
		{
			iLocal_1297 = 0x00000004;
		}
		else if (((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1())) && !func_180()) && (unk_0x3D1053F9EB43B7AD(unk_0x728870EB733D12A1(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(unk_0x728870EB733D12A1(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0x00000000, 0x00000001, 0x00000000)))
		{
			iLocal_1300 = unk_0x728870EB733D12A1();
			iLocal_1297 = 0x00000004;
		}
		else if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && !func_180()) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_1300 = unk_0x728870EB733D12A1();
			iLocal_1297 = 0x00000003;
		}
		else if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && !func_180()) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_1300 = unk_0x728870EB733D12A1();
			iLocal_1297 = 0x00000001;
		}
		else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_1297 = 0x00000001;
		}
		else
		{
			iLocal_1300 = 0x00000000;
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, 0x00000000, 0x00000001, 0x00000000))
			{
				iLocal_1297 = 0x00000000;
			}
			else if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0x00000000, 0x00000001, 0x00000000))
			{
				iLocal_1297 = 0x00000000;
			}
			else
			{
				iLocal_1297 = 0xFFFFFFFF;
			}
		}
		if (iLocal_1297 == 0x00000001)
		{
			if (func_179(Local_28[0x00000000 /*110*/]))
			{
				func_178(Local_28[0x00000000 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_179(Local_28[0x00000000 /*110*/]))
		{
			func_178(Local_28[0x00000000 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_1294)
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x0000009B, 0x00000001);
		}
		if ((iLocal_1297 != 0xFFFFFFFF && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) && unk_0x029064EA9141FCC2(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_178(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x9FA191B317572861(iParam0, fParam1);
		unk_0xB21189153A095FA1(iParam0, fParam2);
		unk_0xCF443519BC24A3CB(iParam0, (fParam3 / 2f));
		unk_0x8979D9784F39DF46(iParam0, fParam4);
		unk_0xBEC9D6BBD21A735F(iParam0, fParam5);
	}
}

int func_179(int iParam0)
{
	if (iParam0 != 0x00000000 && unk_0xC844350D5D58C99A(iParam0))
	{
		switch (unk_0xBBCAD76F60334F95(iParam0))
		{
			case 0x00000001:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000002:
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0x00000000))
				{
					return 0x00000001;
				}
				break;
			
			default:
				if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
				{
					return 0x00000001;
				}
				break;
			}
	}
	return 0x00000000;
}

int func_180()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
		{
			if (unk_0x728870EB733D12A1() == Local_46[iVar0 /*8*/])
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_181()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xB87D13D0C064E9D1(Local_46[iVar0 /*8*/], unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_182()
{
	int iVar0;
	
	if (unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if ((unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000)) && unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()) == Local_46[iVar0 /*8*/])
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_183()
{
	int iVar0;
	
	if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && !unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9())) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_46[iVar0 /*8*/], 0x00000001))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_184()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000) && (unk_0x134B62B726CEC8E6(iVar0) == joaat("towtruck") || unk_0x134B62B726CEC8E6(iVar0) == joaat("towtruck2")))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_185()
{
	int iVar0;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_289(0x00000006);
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_28)
	{
		if (unk_0xC844350D5D58C99A(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_5D)
			{
				if (Local_28[iVar0 /*110*/].f_66)
				{
					func_186(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_5E), 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
				}
				else
				{
					func_186(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_5E), 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
				}
			}
			if (!func_179(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_67 == 0xFFFFFFFF)
				{
					Local_28[iVar0 /*110*/].f_67 = unk_0x1C0640BA9A7327B3();
				}
				else if ((unk_0x1C0640BA9A7327B3() - Local_28[iVar0 /*110*/].f_67) >= 0x00001388)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_46)
	{
		if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && Local_46[iVar0 /*8*/].f_7)
		{
			if (!func_179(Local_46[iVar0 /*8*/]))
			{
				if (unk_0xE4EDC4B0E92C078B(Local_46[iVar0 /*8*/].f_1))
				{
					unk_0x142CC44DB769B57E(&(Local_46[iVar0 /*8*/].f_1));
				}
				unk_0x046C362CF15F1935(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_186(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

void func_187()
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_66 == 0x00000001)
	{
		if (!unk_0x757EF87A33649210())
		{
			if (!unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(0x000003E8);
			}
		}
		else
		{
			if (unk_0x39B7A3CCD2467CAB())
			{
				unk_0x55BE34EDDEA0AC9E(0x00000000);
				unk_0x5C8D148FC238F38A();
			}
			func_24(iLocal_67);
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(0x00000001);
			func_8(0x00000001);
			if (!func_235())
			{
				func_234(iLocal_63, &vVar0, &fVar1);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fVar1);
				unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
				func_232(&uLocal_70, vVar0, 50f, 0x00000000);
			}
			func_231(&uLocal_70);
			switch (iLocal_63)
			{
				case 0x00000000:
					func_171(&uLocal_70, joaat("burrito2"));
					func_171(&uLocal_70, joaat("s_m_y_pestcont_01"));
					func_171(&uLocal_70, joaat("s_m_m_security_01"));
					func_171(&uLocal_70, joaat("dilettante2"));
					func_171(&uLocal_70, joaat("p_amb_clipboard_01"));
					func_230(&uLocal_70, &cLocal_59);
					func_229(&uLocal_70, "misslsdhsclipboard@base");
					func_229(&uLocal_70, "misslsdhsclipboard@idle_a");
					func_229(&uLocal_70, "misstrevor3");
					func_228(&uLocal_70, iLocal_1256);
					if (((func_227() && !unk_0xA7082C42B8809BF2(func_226())) && !unk_0xC41A9202669A24C4(func_226())) && !unk_0xAFB8495D36825275(func_226()))
					{
						func_171(&uLocal_70, func_226());
					}
					break;
				
				case 0x00000001:
					func_171(&uLocal_70, joaat("burrito2"));
					break;
			}
			while (!func_225(&uLocal_70))
			{
				SYSTEM::WAIT(0x00000000);
				func_185();
			}
			switch (iLocal_63)
			{
				case 0x00000000:
					if (((func_227() && !unk_0xA7082C42B8809BF2(func_226())) && !unk_0xC41A9202669A24C4(func_226())) && !unk_0xAFB8495D36825275(func_226()))
					{
						while (!func_224())
						{
							SYSTEM::WAIT(0x00000000);
						}
						Local_46[0x00000004 /*8*/] = func_194(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_235())
					{
						if (unk_0xC844350D5D58C99A(Local_46[0x00000004 /*8*/]))
						{
							func_191(Local_46[0x00000004 /*8*/], 0xFFFFFFFF, 0x00000001);
						}
						else
						{
							func_191(0x00000000, 0xFFFFFFFF, 0x00000001);
						}
					}
					else
					{
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xC844350D5D58C99A(Local_46[0x00000004 /*8*/]))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_46[0x00000004 /*8*/], 0xFFFFFFFF);
						}
					}
					while (!func_188(0x00000000))
					{
						SYSTEM::WAIT(0x00000000);
					}
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					break;
				
				case 0x00000001:
					if (!func_7(0x00000058))
					{
						Local_46[0x00000000 /*8*/] = unk_0x122AAB0B1D6F55AD(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 0x00000001, 0x00000001, 0x00000000);
						unk_0x05EC10F460C3A4AF(Local_46[0x00000000 /*8*/], 0x00000000);
						unk_0xB9FD7450C0DAB575(Local_46[0x00000000 /*8*/], 0x40A00000);
					}
					if (func_235())
					{
						func_191(0x00000000, 0xFFFFFFFF, 0x00000001);
					}
					else
					{
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
					}
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 692.067f, -1004.812f, 21.9059f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 359.5735f);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					break;
			}
			if (unk_0x757EF87A33649210() || !unk_0x7BCE0E6DD4A1F749())
			{
				if (!func_7(0x00000058) || iLocal_63 != 0x00000001)
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
			bLocal_66 = 0x00000000;
		}
	}
}

int func_188(bool bParam0)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = 0x00000000;
	iVar1 = 0x00000001;
	if (bParam0)
	{
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000000]))
		{
			Local_46[0x00000000 /*8*/] = Global_17409[0x00000000];
			unk_0x73270B3C9CC833FD(Local_46[0x00000000 /*8*/], 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000001]))
		{
			Local_46[0x00000001 /*8*/] = Global_17409[0x00000001];
			unk_0x73270B3C9CC833FD(Local_46[0x00000001 /*8*/], 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000002]))
		{
			Local_46[0x00000002 /*8*/] = Global_17409[0x00000002];
			unk_0x73270B3C9CC833FD(Local_46[0x00000002 /*8*/], 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000000]))
		{
			Local_28[0x00000001 /*110*/] = Global_17409.f_9[0x00000000];
			if (!unk_0xEB6A8945D1AC98A1(Local_28[0x00000001 /*110*/]))
			{
				unk_0xE8832A9E16A57A1F(Local_28[0x00000001 /*110*/], 0x00000000, 0x00000001);
			}
			unk_0x73270B3C9CC833FD(Local_28[0x00000001 /*110*/], 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409.f_1C[0x00000000]))
		{
			Local_28[0x00000001 /*110*/].f_69 = Global_17409.f_1C[0x00000000];
			unk_0x73270B3C9CC833FD(Local_28[0x00000001 /*110*/].f_69, 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000002]))
		{
			Local_28[0x00000000 /*110*/] = Global_17409.f_9[0x00000002];
			if (!unk_0xEB6A8945D1AC98A1(Local_28[0x00000000 /*110*/]))
			{
				unk_0xE8832A9E16A57A1F(Local_28[0x00000000 /*110*/], 0x00000000, 0x00000001);
			}
			unk_0x73270B3C9CC833FD(Local_28[0x00000000 /*110*/], 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000003]))
		{
			Local_28[0x00000002 /*110*/] = Global_17409.f_9[0x00000003];
			if (!unk_0xEB6A8945D1AC98A1(Local_28[0x00000003 /*110*/]))
			{
				unk_0xE8832A9E16A57A1F(Local_28[0x00000002 /*110*/], 0x00000000, 0x00000001);
			}
			unk_0x73270B3C9CC833FD(Local_28[0x00000002 /*110*/], 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000004]))
		{
			Local_28[0x00000003 /*110*/] = Global_17409.f_9[0x00000004];
			if (!unk_0xEB6A8945D1AC98A1(Local_28[0x00000003 /*110*/]))
			{
				unk_0xE8832A9E16A57A1F(Local_28[0x00000003 /*110*/], 0x00000000, 0x00000001);
			}
			unk_0x73270B3C9CC833FD(Local_28[0x00000003 /*110*/], 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000005]))
		{
			Local_29 = Global_17409.f_9[0x00000005];
			if (!unk_0xEB6A8945D1AC98A1(Local_29))
			{
				unk_0xE8832A9E16A57A1F(Local_29, 0x00000000, 0x00000001);
			}
			unk_0x73270B3C9CC833FD(Local_29, 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000003]))
		{
			Local_46[0x00000003 /*8*/] = Global_17409[0x00000003];
			unk_0x73270B3C9CC833FD(Local_46[0x00000003 /*8*/], 0x00000001, 0x00000001);
		}
		else
		{
			bVar0 = 0x00000001;
		}
	}
	else
	{
		if (!unk_0xC844350D5D58C99A(Local_46[0x00000000 /*8*/]))
		{
			Local_46[0x00000000 /*8*/] = unk_0x122AAB0B1D6F55AD(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 0x00000001, 0x00000001, 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(Local_46[0x00000001 /*8*/]))
		{
			Local_46[0x00000001 /*8*/] = unk_0x122AAB0B1D6F55AD(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 0x00000001, 0x00000001, 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(Local_46[0x00000002 /*8*/]))
		{
			Local_46[0x00000002 /*8*/] = unk_0x122AAB0B1D6F55AD(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 0x00000001, 0x00000001, 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(Local_28[0x00000001 /*110*/]))
		{
			Local_28[0x00000001 /*110*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 0x00000001, 0x00000001);
			unk_0xD458AC1C1D29C3B4(Local_28[0x00000001 /*110*/], 0x00000096, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000001 /*110*/], 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000001 /*110*/], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000001 /*110*/], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000001 /*110*/], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000001 /*110*/], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000001 /*110*/], 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(Local_28[0x00000001 /*110*/], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(Local_28[0x00000001 /*110*/], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x8B66ED74C2DC2E98(Local_28[0x00000001 /*110*/], 2f);
		}
		if (!unk_0xC844350D5D58C99A(Local_28[0x00000001 /*110*/].f_69))
		{
			Local_28[0x00000001 /*110*/].f_69 = unk_0x7707E48765093646(joaat("p_amb_clipboard_01"), unk_0x64430C979F516F7A(Local_28[0x00000001 /*110*/], 0x0000EB95, 0f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000);
			unk_0x9F528B1B53FBC5D9(Local_28[0x00000001 /*110*/].f_69, Local_28[0x00000001 /*110*/], unk_0x4A089F2B762B8D33(Local_28[0x00000001 /*110*/], 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
		}
		if (!unk_0xC844350D5D58C99A(Local_28[0x00000000 /*110*/]))
		{
			Local_28[0x00000000 /*110*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 0x00000001, 0x00000001);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000000 /*110*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000000 /*110*/], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000000 /*110*/], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000000 /*110*/], 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000000 /*110*/], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(Local_28[0x00000000 /*110*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x8B66ED74C2DC2E98(Local_28[0x00000000 /*110*/], 2f);
		}
		if (!unk_0xC844350D5D58C99A(Local_28[0x00000002 /*110*/]))
		{
			Local_28[0x00000002 /*110*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 0x00000001, 0x00000001);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000002 /*110*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000002 /*110*/], 0x00000003, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000002 /*110*/], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000002 /*110*/], 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000002 /*110*/], 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(Local_28[0x00000002 /*110*/], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x8B66ED74C2DC2E98(Local_28[0x00000002 /*110*/], 2f);
		}
		if (!unk_0xC844350D5D58C99A(Local_28[0x00000003 /*110*/]))
		{
			Local_28[0x00000003 /*110*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 0x00000001, 0x00000001);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000003 /*110*/], 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000003 /*110*/], 0x00000003, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000003 /*110*/], 0x00000004, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000003 /*110*/], 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_28[0x00000003 /*110*/], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(Local_28[0x00000003 /*110*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x8B66ED74C2DC2E98(Local_28[0x00000003 /*110*/], 2f);
		}
		if (!unk_0xC844350D5D58C99A(Local_29) && !unk_0xC844350D5D58C99A(Local_46[0x00000003 /*8*/]))
		{
			if (unk_0xD8A54335F18763BA() >= 0x00000005 && unk_0xD8A54335F18763BA() < 0x00000015)
			{
				Local_46[0x00000003 /*8*/] = unk_0x122AAB0B1D6F55AD(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 0x00000001, 0x00000001, 0x00000000);
				Local_29 = unk_0x852A19533F896693(Local_46[0x00000003 /*8*/], 0x0000001A, joaat("s_m_m_security_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			}
			else
			{
				Local_46[0x00000003 /*8*/] = unk_0x122AAB0B1D6F55AD(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 0x00000001, 0x00000001, 0x00000000);
				Local_29 = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 0x00000001, 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Local_46[0x00000000 /*8*/]))
	{
		func_190(Local_46[0x00000000 /*8*/], 0x00000000);
		unk_0x71EDC33E5A423750(Local_46[0x00000000 /*8*/], 0x00000007);
		unk_0xAACF4BD59CB35944(Local_46[0x00000000 /*8*/], 0x00000001);
		unk_0x44A200C9B6E1CEA6(Local_46[0x00000000 /*8*/], 0x00000001);
		Local_46[0x00000000 /*8*/].f_7 = 0x00000000;
	}
	if (unk_0xC844350D5D58C99A(Local_46[0x00000001 /*8*/]))
	{
		func_190(Local_46[0x00000001 /*8*/], 0x00000001);
		unk_0x56FDC9ADE35F7DB0(Local_46[0x00000001 /*8*/], 0x00000001, 0x00000001, 0x00000000);
		unk_0x2E81FA494A883541(Local_46[0x00000001 /*8*/], 0x00000004, 0x00000000);
		unk_0x611DFA9294B339CA(Local_46[0x00000001 /*8*/], 0x00000000, 0x00000001, 0x00000000);
		unk_0x611DFA9294B339CA(Local_46[0x00000001 /*8*/], 0x00000004, 0x00000000, 0x00000001);
		unk_0x44A200C9B6E1CEA6(Local_46[0x00000001 /*8*/], 0x00000001);
		Local_46[0x00000001 /*8*/].f_7 = 0x00000000;
	}
	if (unk_0xC844350D5D58C99A(Local_46[0x00000002 /*8*/]))
	{
		func_190(Local_46[0x00000002 /*8*/], 0x00000002);
		unk_0x611DFA9294B339CA(Local_46[0x00000002 /*8*/], 0x00000002, 0x00000001, 0x00000000);
		unk_0x611DFA9294B339CA(Local_46[0x00000002 /*8*/], 0x00000003, 0x00000001, 0x00000000);
		unk_0x44A200C9B6E1CEA6(Local_46[0x00000002 /*8*/], 0x00000001);
		Local_46[0x00000002 /*8*/].f_7 = 0x00000000;
	}
	if (unk_0xC844350D5D58C99A(Local_28[0x00000001 /*110*/]))
	{
		unk_0x5F2AA9E2843E9403(Local_28[0x00000001 /*110*/], &(Local_28[0x00000001 /*110*/].f_1));
		unk_0x11AD11297DC58CC7(Local_28[0x00000001 /*110*/], 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_28[0x00000001 /*110*/], iLocal_1254);
		unk_0x33CE5A9E32EA10B2(Local_28[0x00000001 /*110*/], 0x00000001);
		func_178(Local_28[0x00000001 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x967762C930C0C5FD(Local_28[0x00000001 /*110*/], 50f);
		StringCopy(&(Local_28[0x00000001 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[0x00000001 /*110*/].f_2A = 20f;
		Local_28[0x00000001 /*110*/].f_56 = 0x00000001;
		Local_28[0x00000001 /*110*/].f_57 = 0x00000001;
		Local_28[0x00000001 /*110*/].f_6B = joaat("p_amb_clipboard_01");
		Local_28[0x00000001 /*110*/].f_6A = 0x0000EB95;
		Local_28[0x00000001 /*110*/].f_6C = 0x00000000;
	}
	if (unk_0xC844350D5D58C99A(Local_28[0x00000000 /*110*/]))
	{
		unk_0x5F2AA9E2843E9403(Local_28[0x00000000 /*110*/], &(Local_28[0x00000000 /*110*/].f_1));
		unk_0x11AD11297DC58CC7(Local_28[0x00000000 /*110*/], 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_28[0x00000000 /*110*/], iLocal_1254);
		unk_0x33CE5A9E32EA10B2(Local_28[0x00000000 /*110*/], 0x00000001);
		func_178(Local_28[0x00000000 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0x967762C930C0C5FD(Local_28[0x00000000 /*110*/], 50f);
		StringCopy(&(Local_28[0x00000000 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0x00000000 /*110*/].f_56 = 0x00000001;
		Local_28[0x00000000 /*110*/].f_57 = 0x00000001;
		Local_28[0x00000000 /*110*/].f_2A = 17.5f;
	}
	if (unk_0xC844350D5D58C99A(Local_28[0x00000002 /*110*/]))
	{
		unk_0x5F2AA9E2843E9403(Local_28[0x00000002 /*110*/], &(Local_28[0x00000002 /*110*/].f_1));
		unk_0x11AD11297DC58CC7(Local_28[0x00000002 /*110*/], 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_28[0x00000002 /*110*/], iLocal_1254);
		func_178(Local_28[0x00000002 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x33CE5A9E32EA10B2(Local_28[0x00000002 /*110*/], 0x00000001);
		unk_0x967762C930C0C5FD(Local_28[0x00000002 /*110*/], 50f);
		StringCopy(&(Local_28[0x00000002 /*110*/].f_1), "front 1", 16);
		Local_28[0x00000002 /*110*/].f_56 = 0x00000000;
		Local_28[0x00000002 /*110*/].f_57 = 0x00000000;
		Local_28[0x00000002 /*110*/].f_2A = 17.5f;
	}
	if (unk_0xC844350D5D58C99A(Local_28[0x00000003 /*110*/]))
	{
		unk_0x5F2AA9E2843E9403(Local_28[0x00000003 /*110*/], &(Local_28[0x00000003 /*110*/].f_1));
		unk_0x11AD11297DC58CC7(Local_28[0x00000003 /*110*/], 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_28[0x00000003 /*110*/], iLocal_1254);
		unk_0x967762C930C0C5FD(Local_28[0x00000003 /*110*/], 50f);
		func_178(Local_28[0x00000003 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x33CE5A9E32EA10B2(Local_28[0x00000003 /*110*/], 0x00000001);
		StringCopy(&(Local_28[0x00000003 /*110*/].f_1), "front 2", 16);
		Local_28[0x00000003 /*110*/].f_56 = 0x00000000;
		Local_28[0x00000003 /*110*/].f_57 = 0x00000000;
		Local_28[0x00000003 /*110*/].f_2A = 17.5f;
	}
	if (unk_0xC844350D5D58C99A(Local_29) && unk_0xC844350D5D58C99A(Local_46[0x00000003 /*8*/]))
	{
		unk_0x5F2AA9E2843E9403(Local_29, &(Local_29.f_1));
		unk_0x11AD11297DC58CC7(Local_29, 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_29, iLocal_1254);
		unk_0x26A6B1686E33113F(Local_29, 0x00000002);
		unk_0xAFF39FB306F8E232(Local_29, 0x00000002, 0x00000000);
		unk_0x262EF6C6306BEA6C(Local_29, joaat("weapon_nightstick"), 0xFFFFFFFF, 0x00000000, 0x00000001);
		unk_0x298903DD96203C2C(Local_29, 0x00000005);
		func_178(Local_29, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_29.f_1), "sec", 16);
		Local_29.f_56 = 0x00000001;
		Local_29.f_57 = 0x00000001;
		Local_29.f_5D = 0x00000000;
		if (Global_17409.f_165 == 0x00000001)
		{
			if (!func_189(Local_29, 0x0E763797, 0x00000001))
			{
				if (unk_0xDB27A414FA5965A7(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 0x00000001))
				{
					iLocal_1301 = 0x00000000;
					unk_0xDD353D0E9C789D0E(&uVar2);
					unk_0x1B901F542DF070CF(0x00000000, Local_46[0x00000003 /*8*/], &cLocal_59, 0x000C00A7, 0x00000000, 0x00000000, 0xFFFFFFFF, -1f, 0x00000000, 2f);
					unk_0x45F014B3D0466974(0x00000000, Local_46[0x00000003 /*8*/], 0x00000000);
					unk_0x4A35AD9FC803369E(0x00000000, 203.68f, -3132.46f, 4.79f, 1f, 0x00000000);
					unk_0x75ABDC5F81978924(uVar2);
					unk_0x78ADC381772E3D54(Local_29, uVar2);
					unk_0xF82EA857DA10E0CD(&uVar2);
				}
				else
				{
					iVar1 = 0x00000000;
				}
			}
		}
		else if (!func_189(Local_29, 0x9BD19AE7, 0x00000001))
		{
			if (unk_0xDB27A414FA5965A7(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 0x00000001))
			{
				iLocal_1301 = 0x00000001;
				unk_0x819251B8C1EB686D(Local_29, 162.69f, -3115.67f, 4.95f, 1f, 0x00000000);
			}
			else
			{
				iVar1 = 0x00000000;
			}
		}
	}
	if (((((((((unk_0xC844350D5D58C99A(Local_46[0x00000000 /*8*/]) && unk_0xC844350D5D58C99A(Local_46[0x00000001 /*8*/])) && unk_0xC844350D5D58C99A(Local_46[0x00000002 /*8*/])) && unk_0xC844350D5D58C99A(Local_46[0x00000003 /*8*/])) && unk_0xC844350D5D58C99A(Local_28[0x00000001 /*110*/])) && unk_0xC844350D5D58C99A(Local_28[0x00000000 /*110*/])) && unk_0xC844350D5D58C99A(Local_28[0x00000002 /*110*/])) && unk_0xC844350D5D58C99A(Local_28[0x00000003 /*110*/])) && unk_0xC844350D5D58C99A(Local_29)) && iVar1)
	{
		return 0x00000001;
	}
	else if (bVar0)
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_189(int iParam0, int iParam1, bool bParam2)
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

void func_190(var uParam0, int iParam1)
{
	Global_181B8.f_16[iParam1] = uParam0;
}

void func_191(int iParam0, int iParam1, int iParam2)
{
	if (func_193() && func_235())
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
		func_192(0x00000000);
	}
}

void func_192(int iParam0)
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

int func_193()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_194(vector3 vParam0, float fParam1)
{
	return func_195(&(Global_19AE3.f_B4A), vParam0, fParam1, 0x00000000);
}

int func_195(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_223(uParam0))
	{
		if (func_154(vParam1, 0f, 0f, 0f, 0x00000000))
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
		if (func_222(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_221(vParam1, 5f, 0x00000000);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_C.f_42, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0x00000000, 0x00000000, 0x00000001);
				}
				func_204(iVar0, &(uParam0->f_C), 0x00000000, 0x00000001);
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
							func_203(uParam0->f_B, 0x00000001);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_203(uParam0->f_B, 0x00000002);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0x00000000);
					unk_0x626D5ADA3EFAE431(iVar0, 0x00000000);
					unk_0x44A200C9B6E1CEA6(iVar0, 0x00000001);
					func_202(iVar0, uParam0->f_B);
				}
				else if ((!func_200(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar4 = func_199(iVar0);
					if (iVar4 == 0xFFFFFFFF)
					{
						uParam0->f_A = 0x00000000;
					}
					else
					{
						func_196(iVar4);
					}
				}
				if (((Global_181B8 != 0x0000000D && Global_181B8 != 0x0000000A) && Global_181B8 != 0x0000000B) && Global_181B8 != 0x0000000C)
				{
					if (unk_0x12AB0310C2281427(&(Global_181B8.f_3)) == Global_12A8D)
					{
						if (uParam0->f_C.f_42 == Global_1B416.f_7FE8.f_45[0x00000015 /*78*/].f_42)
						{
							func_148(0x00000018, 0x00000000);
							func_196(0x00000018);
						}
					}
				}
				if (uParam0->f_9 == 0x00000001)
				{
					func_114(iVar0, uParam0->f_B);
				}
				unk_0x71199B01895C6202(uParam0->f_C.f_42);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_196(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_143(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
			if (((((iParam0 == 0x00000018 && func_150(iParam0, 0x00000000)) && Global_12A3E.f_42 == 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] > 0x00000003) && (!func_197(0x00000000, Global_126B1.f_22B[0x00000000 /*21*/].f_C) || !func_197(0x00000001, Global_126B1.f_22B[0x00000000 /*21*/].f_C)))
			{
				func_151(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_148(iParam0, 0x00000000);
		}
	}
}

int func_197(int iParam0, int iParam1)
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
	if (iParam0 < 0x00000000 || iParam0 >= func_198(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0x00000000;
	}
	return func_117(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0x00000000);
}

int func_198(var uParam0)
{
	return *uParam0;
}

int func_199(int iParam0)
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

int func_200(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_201(iParam0, Global_126B1.f_8B[0x00000026], 0x00000000))
			{
				func_196(0x00000026);
				return 0x00000001;
			}
			break;
		
		case 0x73920F8E:
			if (func_201(iParam0, Global_126B1.f_8B[0x0000002B], 0x00000001))
			{
				func_196(0x0000002B);
				return 0x00000001;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar3 = 0x00000000;
			while (iVar3 <= (iVar2 - 0x00000001))
			{
				if (func_201(iParam0, uVar1[iVar3], 0x00000001) && func_65(unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 2136.133f, 4780.563f, 39.9702f, 5f, 0x00000000))
				{
					if ((!bParam2 || func_154(vParam1, 0f, 0f, 0f, 0x00000000)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 0x00000001) < 10f)
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
					func_196(0x0000000E);
					return 0x00000001;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000014]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000014], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x00000014]) == joaat("swift2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x00000014]))
				{
					func_196(0x00000014);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_201(int iParam0, int iParam1, bool bParam2)
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

void func_202(int iParam0, int iParam1)
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

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (iParam0 == 0x00000091 || Global_17755[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000000 || unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == func_144(iParam0, iParam1))
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

void func_204(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (!func_213(iParam0))
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
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_156(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_156(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_156(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_156(iVar1 + 1));
			}
		}
		else if (uParam1->f_42 == 0x1446590A || uParam1->f_42 == 0x8B213907)
		{
			iVar2 = 0x00000001;
			while (iVar2 <= 0x00000009)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_156(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_156(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_42 == 0x58F77553)
		{
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_156(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_156(iVar3));
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
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_156(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_156(iVar4));
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
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000F) || func_212(iParam0)) || (((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000) && uParam1->f_9[0x00000014] > 0x00000000)) && func_211())
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_158(uParam1->f_42))
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
						func_210(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_210(iParam0, uParam1->f_45);
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
			func_205(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_42) && !unk_0xA7082C42B8809BF2(uParam1->f_42))
		{
			iVar5 = 0x00000000;
			while (iVar5 <= 0x0000000B)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_156(iVar5 + 1)))
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

int func_205(int iParam0, var uParam1, var uParam2)
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
	if (func_209(unk_0x134B62B726CEC8E6(*iParam0), 0x00000001) && unk_0x0ECB5CA5140957AD(*iParam0, 0x00000018) != func_208(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 0x00000018, func_208(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)), 0x00000000);
	}
	func_207(iParam0);
	if (func_206(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 0x00000001);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
	}
	return 0x00000001;
}

int func_206(int iParam0)
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

void func_207(var uParam0)
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

int func_208(int iParam0, int iParam1)
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

int func_209(int iParam0, int iParam1)
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

void func_210(int iParam0, int iParam1)
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

bool func_211()
{
	return unk_0xC146D5FBD23C6954(0x9B328228);
}

int func_212(int iParam0)
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

int func_213(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_219(unk_0xD803B885F5E47A62(), 0xFFFFFFFF))
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
	if (func_215(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_214(iParam0) != 0xFFFFFFFF)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_214(int iParam0)
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

int func_215(int iParam0)
{
	if (func_218(iParam0) == 0x000000E9)
	{
		return func_216(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_216(int iParam0)
{
	if (func_217(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_217(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_218(int iParam0)
{
	if (func_217(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_219(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_220(iParam0, 0x00000001, 0x00000001))
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

int func_220(int iParam0, bool bParam1, bool bParam2)
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

void func_221(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (func_143(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0x00000000 /*21*/], iParam2) <= fParam1)
			{
				func_196(iVar0);
			}
		}
		iVar0++;
	}
}

int func_222(var uParam0)
{
	if (func_223(uParam0))
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

int func_223(var uParam0)
{
	if (uParam0->f_C.f_42 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_117(uParam0->f_C.f_42, 0x00000000))
	{
		return 0x00000000;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_65(*uParam0, 1694.62f, 3276.27f, 41.31f, 0x3F000000, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_224()
{
	return func_222(&(Global_19AE3.f_B4A));
}

int func_225(var uParam0)
{
	if (func_236(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_226()
{
	return Global_19AE3.f_B4A.f_C.f_42;
}

int func_227()
{
	return func_223(&(Global_19AE3.f_B4A));
}

int func_228(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x31609A585163CBAC(iParam1))
	{
		return 0x00000000;
	}
	iVar1 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_2FB)
	{
		if (uParam0->f_2FB[iVar0 /*5*/])
		{
			if (uParam0->f_2FB[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_2FB[iVar0 /*5*/].f_2 = 0x00000000;
				if (!uParam0->f_2FB[iVar0 /*5*/].f_1)
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
		unk_0x0007C2367F4F23F3(iParam1);
		uParam0->f_2FB[iVar1 /*5*/] = 0x00000001;
		uParam0->f_2FB[iVar1 /*5*/].f_3 = unk_0x1C0640BA9A7327B3();
		uParam0->f_2FB[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_3D6 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_229(var uParam0, char* sParam1)
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

int func_230(var uParam0, char* sParam1)
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

void func_231(var uParam0)
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

int func_232(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (func_233(vParam1) || fParam2 <= 0f)
	{
		return 0x00000000;
	}
	if (uParam0->f_364)
	{
		if (func_154(uParam0->f_364.f_4, vParam1, 0x00000000) && uParam0->f_364.f_A == fParam2)
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

int func_233(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_234(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 0x00000001:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

bool func_235()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

int func_236(var uParam0)
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
						func_238(uParam0[iVar1 /*5*/]);
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
						func_238(&(uParam0->f_111[iVar1 /*5*/]));
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
						func_238(&(uParam0->f_176[iVar1 /*5*/]));
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
						func_238(&(uParam0->f_290[iVar1 /*6*/]));
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
						func_238(&(uParam0->f_1DB[iVar1 /*6*/]));
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
						func_238(&(uParam0->f_CA[iVar1 /*7*/]));
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
						func_238(&(uParam0->f_97[iVar1 /*5*/]));
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
						func_238(&(uParam0->f_2E1[iVar1 /*5*/]));
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
						func_238(&(uParam0->f_2FB[iVar1 /*5*/]));
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
								func_238(&(uParam0->f_2AF[iVar1 /*7*/]));
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
							func_238(&(uParam0->f_2AF[iVar1 /*7*/]));
							uParam0->f_2AF[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = 0x00000000;
						}
					}
					else
					{
						func_238(&(uParam0->f_2AF[iVar1 /*7*/]));
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
						func_238(&(uParam0->f_36F[iVar1 /*5*/]));
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
						func_238(&(uParam0->f_3A2[iVar1 /*5*/]));
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
						func_238(&(uParam0->f_30B[iVar1 /*5*/]));
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
					func_238(&(uParam0->f_35C));
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
					func_238(&(uParam0->f_360));
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
						func_237(uParam0);
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
				func_238(&(uParam0->f_364));
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
						func_238(&(uParam0->f_3BC[iVar1 /*5*/]));
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

void func_237(var uParam0)
{
	if (unk_0xEB880D98B5988D0C())
	{
		unk_0x486B4ADE317F0689();
		func_238(&(uParam0->f_364));
	}
}

void func_238(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0xFFFFFFFF;
}

void func_239()
{
	if (func_240())
	{
		func_8(0x00000001);
		unk_0x10FAF14A60A0DBE1();
	}
}

int func_240()
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

void func_241()
{
	func_259(&(Local_1080[0x00000001 /*8*/]), 0x0001001A/*func_260*/, "AI Controller");
	func_259(&(Local_1080[0x00000000 /*8*/]), 0x0000F9B6/*func_251*/, "Dialogue");
	func_259(&(Local_1080[0x00000003 /*8*/]), 0x0000F5E9/*func_246*/, "Alarms & Wanted Level");
	func_259(&(Local_1080[0x00000004 /*8*/]), 0x0000F3C1/*func_242*/, "Music Manager");
}

void func_242(var uParam0)
{
	if (!func_245(uParam0))
	{
		if (uParam0->f_1 <= 0x00000004)
		{
			if ((unk_0xEA16CBEF43A5CA3C(&cLocal_49) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || func_22(&(Local_1080[0x00000003 /*8*/])))
			{
				unk_0xC92DB9682A650680("JHP1A_ATTACK");
				func_244(uParam0, 0x00000005, 0x00000000);
			}
		}
		switch (uParam0->f_1)
		{
			case 0x00000001:
				if (func_108(unk_0x16F2683693E537C9(), 137.7f, -3092.81f, 4.9f, 0x00000001) < 60f)
				{
					unk_0xC92DB9682A650680("JHP1A_START");
					func_244(uParam0, 0x00000002, 0x00000000);
				}
				break;
			
			case 0x00000002:
				if (iLocal_1297 == 0x00000003 || iLocal_1297 == 0x00000002)
				{
					unk_0xC92DB9682A650680("JHP1A_WAREHOUSE");
					func_244(uParam0, 0x00000003, 0x00000000);
				}
				break;
			
			case 0x00000003:
				if (iLocal_1297 == 0x00000006 || iLocal_1297 == 0x00000009)
				{
					unk_0xC92DB9682A650680("JHP1A_VAN");
					func_244(uParam0, 0x00000004, 0x00000000);
				}
				break;
			
			case 0x00000004:
				if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (iLocal_1297 == 0x00000009 && func_108(unk_0x16F2683693E537C9(), 137.7f, -3092.81f, 4.9f, 0x00000001) >= 500f)
					{
						if (unk_0x13896FDECC859926("JHP1A_RADIO_1"))
						{
							unk_0xC92DB9682A650680("JHP1A_RADIO_1");
							func_243(uParam0);
						}
					}
				}
				break;
			
			case 0x00000005:
				if ((unk_0xEA16CBEF43A5CA3C(&cLocal_49) && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) && iLocal_1293)
				{
					func_244(uParam0, 0x00000006, 0x00000000);
				}
				break;
			
			case 0x00000006:
				if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (unk_0x13896FDECC859926("JHP1A_RADIO_2"))
					{
						unk_0xC92DB9682A650680("JHP1A_RADIO_2");
						func_244(uParam0, 0x00000006, 0x00000000);
						func_243(uParam0);
					}
				}
				break;
			}
	}
	if (func_245(uParam0))
	{
		unk_0x51B096AAC60548C1(1f);
	}
}

void func_243(var uParam0)
{
	if (*uParam0 != 0x00000004)
	{
		*uParam0 = 0x00000004;
		uParam0->f_4 = unk_0x1C0640BA9A7327B3();
		uParam0->f_6 = 0x00000000;
		uParam0->f_1 = 0xFFFFFFFF;
	}
}

void func_244(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0x00000000)
	{
		*uParam0 = 0x00000002;
		uParam0->f_5 = unk_0x1C0640BA9A7327B3();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_245(var uParam0)
{
	if (*uParam0 == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_246(var uParam0)
{
	if (!func_245(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 0x00000001:
				func_244(uParam0, 0x00000002, 0x000007D0);
				break;
			
			case 0x00000002:
				if (unk_0x93776B156FD8804A(&cLocal_49))
				{
					unk_0x6021F0389B7BAA70(&cLocal_49, 0x00000000);
					func_249(&cLocal_1082, vLocal_58, 30f, 0xFFFFFFFF, 0x000001F4, 0x00000001, 0x00000000);
					StringCopy(&cLocal_1082, "", 32);
					func_244(uParam0, 0x00000003, 0x00001388);
				}
				break;
			
			case 0x00000003:
				func_247(&Local_29, 0x00000003, 0x00000001, "ALARM EVENT SET IT", 0x00000001, 0x00000000);
				unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
				unk_0x34D79252800B23FF(0x00000002);
				unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000000);
				unk_0x060F249A9A3E3F4E(0x00000000);
				unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
				unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
				uParam0->f_2 = unk_0x1C0640BA9A7327B3() + 15000;
				func_244(uParam0, 0x00000004, 0x00000000);
				break;
			
			case 0x00000004:
				if (unk_0x1C0640BA9A7327B3() > uParam0->f_2)
				{
					unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000001);
					unk_0x060F249A9A3E3F4E(0x00000001);
					unk_0x34D79252800B23FF(0x00000005);
					iLocal_1293 = 0x00000001;
					func_243(uParam0);
				}
				unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
				unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
				break;
			}
	}
}

int func_247(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_248(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0x00000000, bParam2, iParam4, bParam5);
}

int func_248(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (func_179(*uParam0))
	{
		if (!bParam5 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_26 = unk_0x1C0640BA9A7327B3();
			if (iParam1 != uParam0->f_5 || !unk_0x7F8A39872A07D2CE(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_11 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam7)
				{
					uParam0->f_24 = 0x00000001;
					uParam0->f_23 = 0x00000000;
				}
				else
				{
					uParam0->f_24 = 0x00000000;
					uParam0->f_23 = uParam6;
				}
				uParam0->f_2F = 0x00000000;
				uParam0->f_2E = 0x00000000;
				uParam0->f_30 = 0x00000000;
				uParam0->f_25 = unk_0x1C0640BA9A7327B3();
				if (!func_233(vParam3))
				{
					uParam0->f_58 = { vParam3 };
				}
				if (iParam4 != 0x00000000 && unk_0xC844350D5D58C99A(iParam4))
				{
					uParam0->f_5B = iParam4;
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_249(char* sParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<32> Var0;
	
	Var0 = 0xFFFFFFFF;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_11), "", 24);
	Var0.f_1C = iParam3;
	Var0.f_1A = fParam2;
	Var0.f_1D = iParam4;
	Var0.f_1E = iParam5;
	Var0.f_1F = iParam6;
	Var0.f_17 = { vParam1 };
	func_250(&Var0, 0x00000000);
}

int func_250(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xEA6BC48857E0AC4C(&(uParam0->f_1)) && *uParam0 != 0xFFFFFFFF) && (!unk_0xC844350D5D58C99A(Local_28[*uParam0 /*110*/]) || unk_0xEB6A8945D1AC98A1(Local_28[*uParam0 /*110*/])))
	{
		return 0x00000000;
	}
	while (iVar0 != 0xFFFFFFFF && !unk_0xEA6BC48857E0AC4C(&(Local_1081[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1081 - 0x00000001))
		{
			iVar0 = 0xFFFFFFFF;
		}
	}
	if (iVar0 != 0xFFFFFFFF)
	{
		if (*uParam0 == 0xFFFFFFFF || (unk_0xEA6BC48857E0AC4C(sParam1) || unk_0x7F8A39872A07D2CE(sParam1, &(uParam0->f_11))))
		{
			Local_1081[iVar0 /*32*/] = *uParam0;
			Local_1081[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != 0xFFFFFFFF)
			{
				Local_1081[iVar0 /*32*/].f_17 = { unk_0x68F4C0EC296D3901(Local_28[*uParam0 /*110*/], 0x00000001) };
			}
			else
			{
				Local_1081[iVar0 /*32*/].f_17 = { uParam0->f_17 };
			}
			Local_1081[iVar0 /*32*/].f_1A = uParam0->f_1A;
			Local_1081[iVar0 /*32*/].f_1C = uParam0->f_1C;
			Local_1081[iVar0 /*32*/].f_1D = uParam0->f_1D;
			Local_1081[iVar0 /*32*/].f_1B = unk_0x1C0640BA9A7327B3();
			Local_1081[iVar0 /*32*/].f_1E = uParam0->f_1E;
			Local_1081[iVar0 /*32*/].f_1F = uParam0->f_1F;
			iVar1 = 0x00000001;
		}
		else
		{
			iVar1 = 0x00000000;
		}
		*uParam0 = 0xFFFFFFFF;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_17 = { 0f, 0f, 0f };
		uParam0->f_1A = 0f;
		uParam0->f_1C = 0x00000000;
		uParam0->f_1D = 0x00000000;
		uParam0->f_1B = 0x00000000;
		uParam0->f_1E = 0x00000000;
		uParam0->f_1F = 0x00000000;
		return iVar1;
	}
	return 0x00000000;
}

void func_251(var uParam0)
{
	vector3 vVar0[24];
	bool bVar1;
	vector3 vVar2;
	
	if (!func_245(uParam0))
	{
		if (func_49())
		{
			iLocal_1253 = 0xFFFFFFFF;
		}
		else if (iLocal_1253 == 0xFFFFFFFF)
		{
			iLocal_1253 = unk_0x1C0640BA9A7327B3();
			iLocal_1276 = 0xFFFFFFFF;
			iLocal_1277 = 0x00000001;
		}
		if (iLocal_1257 != 0xFFFFFFFF && !unk_0xEA6BC48857E0AC4C(&cLocal_1259))
		{
			if (((Local_28[iLocal_1257 /*110*/] != 0x00000000 && unk_0xC844350D5D58C99A(Local_28[iLocal_1257 /*110*/])) && !unk_0xEB6A8945D1AC98A1(Local_28[iLocal_1257 /*110*/])) && !unk_0x2C5F61A6EA7B6E03(Local_28[iLocal_1257 /*110*/]))
			{
				if (!unk_0x869EFD0BC0868856(Local_28[iLocal_1257 /*110*/]))
				{
					if (func_49())
					{
						if (iLocal_1267 && (iLocal_1277 || iLocal_1258 > iLocal_1276))
						{
							if (bLocal_1278)
							{
								iLocal_1281 = iLocal_1272;
								iLocal_1282 = iLocal_1276;
								MemCopy(&Local_1283, {func_258()}, 0x00000004);
								MemCopy(&Local_1286, {func_257()}, 0x00000004);
								iLocal_1289 = iLocal_1277;
								bLocal_1290 = iLocal_1279;
							}
							if (iLocal_1268)
							{
								func_11();
							}
							else
							{
								func_46();
							}
						}
					}
					if (func_48())
					{
						if ((unk_0x1C0640BA9A7327B3() - iLocal_1253) > iLocal_1265)
						{
							if (func_256(iLocal_1257))
							{
								MemCopy(&cVar0, {Local_48}, 0x00000006);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_1257)
							{
								case 0x00000000:
									func_45(&uLocal_1087, 0x00000004, Local_28[0x00000000 /*110*/], "JHP1A_FOREMAN", 0x00000000, 0x00000001);
									break;
								
								case 0x00000001:
									func_45(&uLocal_1087, 0x00000005, Local_28[0x00000001 /*110*/], "JHP1A_FOREMAN2", 0x00000000, 0x00000001);
									break;
								
								case 0x00000002:
									func_45(&uLocal_1087, 0x00000004, Local_28[0x00000002 /*110*/], "CONSTRUCTION1", 0x00000000, 0x00000001);
									break;
								
								case 0x00000003:
									func_45(&uLocal_1087, 0x00000003, Local_28[0x00000003 /*110*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
									break;
							}
							if (unk_0xEA6BC48857E0AC4C(&cLocal_1262))
							{
								if (func_255(&uLocal_1087, &cVar0, &cLocal_1259, 0x00000008, 0x00000000, 0x00000000, 0x00000000))
								{
									bVar1 = 0x00000001;
								}
							}
							else if (func_254(&uLocal_1087, &cVar0, &cLocal_1259, &cLocal_1262, 0x00000008, 0x00000000, 0x00000000))
							{
								bVar1 = 0x00000001;
							}
							if (bVar1)
							{
								func_250(&(Local_28[iLocal_1257 /*110*/].f_32), &cLocal_1259);
								iLocal_1276 = iLocal_1258;
								iLocal_1277 = iLocal_1269;
								bLocal_1278 = iLocal_1271;
								iLocal_1279 = iLocal_1270;
								iLocal_1257 = 0xFFFFFFFF;
								iLocal_1258 = 0xFFFFFFFF;
								StringCopy(&cLocal_1259, "", 16);
								iLocal_1265 = 0x00000000;
								fLocal_1266 = 9999999f;
								iLocal_1267 = 0x00000000;
								iLocal_1268 = 0x00000000;
								iLocal_1269 = 0x00000001;
								iLocal_1271 = 0x00000000;
								iLocal_1270 = 0x00000000;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1257 = 0xFFFFFFFF;
				iLocal_1258 = 0xFFFFFFFF;
				StringCopy(&cLocal_1259, "", 16);
				iLocal_1265 = 0x00000000;
				fLocal_1266 = 9999999f;
				iLocal_1267 = 0x00000000;
				iLocal_1268 = 0x00000000;
				iLocal_1269 = 0x00000001;
				iLocal_1270 = 0x00000000;
			}
		}
		if (((func_49() && iLocal_1272 != 0xFFFFFFFF) && iLocal_1279) && !unk_0xEA6BC48857E0AC4C(&cLocal_1273))
		{
			vVar2 = { unk_0x68F4C0EC296D3901(Local_28[iLocal_1272 /*110*/], 0x00000001) };
			if (func_108(unk_0x16F2683693E537C9(), vVar2, 0x00000001) >= 25f)
			{
				iLocal_1281 = iLocal_1272;
				iLocal_1282 = iLocal_1276;
				MemCopy(&Local_1283, {func_258()}, 0x00000004);
				MemCopy(&Local_1286, {func_257()}, 0x00000004);
				iLocal_1289 = iLocal_1277;
				bLocal_1290 = iLocal_1279;
				func_11();
				iLocal_1272 = 0xFFFFFFFF;
				iLocal_1276 = 0xFFFFFFFF;
				StringCopy(&cLocal_1273, "", 16);
				iLocal_1277 = 0x00000000;
				iLocal_1279 = 0x00000000;
			}
		}
		if (iLocal_1281 != 0xFFFFFFFF && !unk_0xEA6BC48857E0AC4C(&Local_1283))
		{
			if (Local_28[iLocal_1281 /*110*/].f_5 > iLocal_1282)
			{
				iLocal_1281 = 0xFFFFFFFF;
				iLocal_1282 = 0xFFFFFFFF;
				StringCopy(&Local_1283, "", 16);
				StringCopy(&Local_1286, "", 16);
				iLocal_1289 = 0x00000001;
			}
		}
		if (iLocal_1257 == 0xFFFFFFFF && unk_0xEA6BC48857E0AC4C(&cLocal_1259))
		{
			if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00002710)
			{
				if (iLocal_1281 != 0xFFFFFFFF && !unk_0xEA6BC48857E0AC4C(&Local_1283))
				{
					func_253(iLocal_1281, &Local_1283, iLocal_1282, 0x00000000, 0x00000000, iLocal_1289, 0x00000000, 0x00000001, &Local_1286, bLocal_1290);
					iLocal_1281 = 0xFFFFFFFF;
					iLocal_1282 = 0xFFFFFFFF;
					StringCopy(&Local_1283, "", 16);
					StringCopy(&Local_1286, "", 16);
					iLocal_1289 = 0x00000001;
				}
			}
		}
	}
	func_252(bLocal_1290);
}

void func_252(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_253(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_107(Local_28[iParam0 /*110*/], unk_0x16F2683693E537C9(), 0x00000001);
	if ((iParam2 > iLocal_1258 || iParam2 == 0x00000004) || ((iParam2 == iLocal_1258 && (fVar0 < fLocal_1266 || (func_256(iParam0) && !func_256(iLocal_1257)))) && iParam2 != 0x00000005))
	{
		switch (iParam2)
		{
			case 0x00000000:
				if (fVar0 < 20f)
				{
					bVar1 = 0x00000001;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = 0x00000001;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_1257 = iParam0;
			iLocal_1258 = iParam2;
			StringCopy(&cLocal_1259, sParam1, 16);
			StringCopy(&cLocal_1262, sParam8, 16);
			fLocal_1266 = fVar0;
			iLocal_1267 = iParam3;
			iLocal_1268 = iParam4;
			iLocal_1265 = iParam6;
			iLocal_1269 = iParam5;
			iLocal_1271 = iParam7;
			iLocal_1270 = iParam9;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_254(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_29(sParam2, iParam4, 0x00000000);
}

bool func_255(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0x00000000);
}

int func_256(int iParam0)
{
	if (iParam0 == 0x00000000 || iParam0 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<6> func_257()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_5537);
		iVar2 = iVar1 + 1;
		if (iVar2 > 0xFFFFFFFF && iVar1 > 0xFFFFFFFF)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar2 /*6*/])))
			{
				return Global_4CD9[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 0x00000046)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar3 /*6*/])))
					{
						return Global_4CD9[iVar3 /*6*/];
						iVar3 = 0x00000046;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_4CD9[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_258()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

int func_259(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000000;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 0x00000001;
}

void func_260(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	
	if (!func_245(uParam0))
	{
		bLocal_1294 = 0x00000001;
		if (!iLocal_1292)
		{
			if (func_181())
			{
				iLocal_1292 = 0x00000001;
				iLocal_1295 = unk_0x1C0640BA9A7327B3();
			}
		}
		else if ((unk_0x1C0640BA9A7327B3() - iLocal_1295) > 0x00000BB8)
		{
			iLocal_1292 = 0x00000000;
			iLocal_1295 = 0xFFFFFFFF;
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_28)
		{
			if (func_179(Local_28[iVar0 /*110*/]))
			{
				func_280(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_179(Local_29))
		{
			func_280(&Local_29);
		}
		iVar1 = 0x00000000;
		while (iVar1 < Local_1081)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Local_1081[iVar1 /*32*/].f_1)) && Local_1081[iVar1 /*32*/].f_1B != 0xFFFFFFFF)
			{
				if (Local_1081[iVar1 /*32*/].f_1C == 0xFFFFFFFF || (unk_0x1C0640BA9A7327B3() - Local_1081[iVar1 /*32*/].f_1B) < Local_1081[iVar1 /*32*/].f_1C)
				{
					if (Local_1081[iVar1 /*32*/].f_1D <= 0x00000000 || (unk_0x1C0640BA9A7327B3() - Local_1081[iVar1 /*32*/].f_1B) > Local_1081[iVar1 /*32*/].f_1D)
					{
						if (Local_1081[iVar1 /*32*/] != 0xFFFFFFFF && func_179(Local_28[Local_1081[iVar1 /*32*/] /*110*/]))
						{
							vVar2 = { unk_0x68F4C0EC296D3901(Local_28[Local_1081[iVar1 /*32*/] /*110*/], 0x00000001) };
							Local_1081[iVar1 /*32*/].f_17 = { vVar2 };
						}
						else
						{
							vVar2 = { Local_1081[iVar1 /*32*/].f_17 };
						}
						if (!func_22(&(Local_1080[0x00000003 /*8*/])))
						{
							if (Local_1081[iVar1 /*32*/].f_1F && unk_0x0EB28750412C3A5A(vVar2, vLocal_58, 0x00000001) < 35f)
							{
								func_170(&(Local_1080[0x00000003 /*8*/]), 0x00000000, 0x00000000, 0x00000001);
							}
						}
						iVar0 = 0x00000000;
						while (iVar0 < Local_28)
						{
							if (Local_1081[iVar1 /*32*/] == 0xFFFFFFFF || (iVar0 != Local_1081[iVar1 /*32*/] && Local_28[Local_1081[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (unk_0xC844350D5D58C99A(Local_28[iVar0 /*110*/]) && !unk_0xEB6A8945D1AC98A1(Local_28[iVar0 /*110*/]))
								{
									if (func_108(Local_28[iVar0 /*110*/], vVar2, 0x00000001) < (Local_1081[iVar1 /*32*/].f_1A + Local_28[iVar0 /*110*/].f_2A))
									{
										Local_28[iVar0 /*110*/].f_22 = iVar1;
										if (Local_1081[iVar1 /*32*/].f_1E)
										{
											if (!func_22(&(Local_1080[0x00000003 /*8*/])))
											{
												func_170(&(Local_1080[0x00000003 /*8*/]), 0x00000000, 0x00000000, 0x00000001);
												MemCopy(&cLocal_1082, {Local_1081[iVar1 /*32*/].f_1}, 0x00000008);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() - Local_1081[iVar1 /*32*/].f_1B) > Local_1081[iVar1 /*32*/].f_1C + 2000)
				{
					StringCopy(&(Local_1081[iVar1 /*32*/].f_1), "", 64);
					Local_1081[iVar1 /*32*/] = 0xFFFFFFFF;
					Local_1081[iVar1 /*32*/].f_17 = { 0f, 0f, 0f };
					Local_1081[iVar1 /*32*/].f_1A = 0f;
					Local_1081[iVar1 /*32*/].f_1B = 0xFFFFFFFF;
					Local_1081[iVar1 /*32*/].f_1C = 0xFFFFFFFF;
					Local_1081[iVar1 /*32*/].f_1D = 0xFFFFFFFF;
				}
			}
			iVar1++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_28)
		{
			if (func_179(Local_28[iVar0 /*110*/]))
			{
				func_274(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_179(Local_29))
		{
			func_265(&Local_29);
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_28)
		{
			if (func_179(Local_28[iVar0 /*110*/]))
			{
				func_264(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_179(Local_29))
		{
			func_262(&Local_29);
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_28)
		{
			if (unk_0xC844350D5D58C99A(Local_28[iVar0 /*110*/].f_69))
			{
				if (((!unk_0xC844350D5D58C99A(Local_28[iVar0 /*110*/]) || unk_0xEB6A8945D1AC98A1(Local_28[iVar0 /*110*/])) || unk_0x4580010DFDF4D53F(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_6C && Local_28[iVar0 /*110*/].f_5 != 0x00000000))
				{
					bVar3 = 0x00000001;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0x00000000)
				{
					bVar4 = 0x00000001;
				}
				if (bVar3 || bVar4)
				{
					if (unk_0x50B5F6F3C29E9380(Local_28[iVar0 /*110*/].f_69, Local_28[iVar0 /*110*/]))
					{
						unk_0x15AFB6CBDE990FB6(Local_28[iVar0 /*110*/].f_69, 0x00000001, 0x00000001);
					}
					if (bVar3)
					{
						unk_0xEEEE2E5FA6F78DF0(&(Local_28[iVar0 /*110*/].f_69));
					}
					else if (bVar4)
					{
						unk_0xF690C84DADBB3551(&(Local_28[iVar0 /*110*/].f_69));
					}
					Local_28[iVar0 /*110*/].f_6D = 0x00000000;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_6B != 0x00000000 && Local_28[iVar0 /*110*/].f_6A != 0xFFFFFFFF)
			{
				if (Local_28[iVar0 /*110*/].f_6D && unk_0xB87F6CF6E5628C67(Local_28[iVar0 /*110*/].f_6B))
				{
					Local_28[iVar0 /*110*/].f_69 = unk_0x7707E48765093646(Local_28[iVar0 /*110*/].f_6B, unk_0x64430C979F516F7A(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_6A, 0f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000);
					unk_0x9F528B1B53FBC5D9(Local_28[iVar0 /*110*/].f_69, Local_28[iVar0 /*110*/], unk_0x4A089F2B762B8D33(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_6A), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
					Local_28[iVar0 /*110*/].f_6D = 0x00000000;
				}
			}
			iVar0++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Local_28)
		{
			if (unk_0xC844350D5D58C99A(Local_28[iVar1 /*110*/]) && !unk_0xEB6A8945D1AC98A1(Local_28[iVar1 /*110*/]))
			{
				unk_0xE910A68AA670B4AA(Local_28[iVar1 /*110*/]);
				unk_0x432CE6C256EE1D4A(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_261();
	}
	if (func_245(uParam0))
	{
	}
}

void func_261()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		if (func_179(Local_46[iVar0 /*8*/]))
		{
			unk_0xE910A68AA670B4AA(Local_46[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x2ECF845953E95D1B(*iParam0);
	if (func_263(*iParam0))
	{
		Local_29.f_2E = 0x00000000;
	}
	switch (iParam0->f_5)
	{
		case 0x00000000:
			if (unk_0xD8A54335F18763BA() >= 0x00000005 && unk_0xD8A54335F18763BA() < 0x00000015)
			{
				if ((!func_189(*iParam0, 0x623A5EFE, 0x00000001) && !func_189(*iParam0, 0x0E763797, 0x00000001)) || iLocal_1301)
				{
					if (unk_0x4742C50E93110B10(203.68f, -3132.46f, 4.79f, 1f, 0x00000001))
					{
						unk_0x4A35AD9FC803369E(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0x00000000);
						iLocal_1301 = 0x00000000;
					}
				}
			}
			else if (!func_189(*iParam0, 0x9BD19AE7, 0x00000001) || !iLocal_1301)
			{
				if (unk_0x4742C50E93110B10(162.69f, -3115.67f, 4.95f, 1f, 0x00000001))
				{
					unk_0x3003D662BC385BD6(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0x00000000);
					iLocal_1301 = 0x00000001;
				}
			}
			break;
		
		case 0x00000003:
			unk_0xD5EF6A937E06E46F(*iParam0, 0x00000001, 0xFFFFFFFF, "DEFAULT_ACTION");
			switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
			{
				case 0x52095082:
				case 0x6436CD2D:
				case 0x44EA7A77:
					if (unk_0x440C646F2F11A2A1(*iParam0, joaat("weapon_pistol"), 0x00000000))
					{
						unk_0x650567883F5E3136(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0x440C646F2F11A2A1(*iParam0, joaat("weapon_nightstick"), 0x00000000))
					{
						unk_0x262EF6C6306BEA6C(*iParam0, joaat("weapon_nightstick"), 0xFFFFFFFF, 0x00000001, 0x00000001);
					}
					if (unk_0xCAE036C45E7FC720(*iParam0, &iVar0, 0x00000001))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0x5745EA6329A91E29(*iParam0, joaat("weapon_nightstick"), 0x00000000);
						}
					}
					break;
				
				case 0x38D45DD2:
				case 0x5A7F7661:
				case 0xB29739ED:
				case 0x0B160F55:
				case 0x9DEB2189:
				case 0x347D9E8E:
				case 0x0915FF2E:
				case 0x728F0315:
				case 0x6447EB64:
				case 0xC8E98AD4:
				case 0x23C3E368:
					if (unk_0x440C646F2F11A2A1(*iParam0, joaat("weapon_nightstick"), 0x00000000))
					{
						unk_0x650567883F5E3136(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0x440C646F2F11A2A1(*iParam0, joaat("weapon_pistol"), 0x00000000))
					{
						unk_0x262EF6C6306BEA6C(*iParam0, joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
					}
					if (unk_0xCAE036C45E7FC720(*iParam0, &iVar0, 0x00000001))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0x5745EA6329A91E29(*iParam0, joaat("weapon_pistol"), 0x00000000);
						}
					}
					break;
			}
			if (!func_189(*iParam0, 0x2E85A751, 0x00000001) || func_263(*iParam0))
			{
				unk_0x6C3AE6E278DB3D0E(*iParam0, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				unk_0x0C8C0C840C2D1AD2(*iParam0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
			}
			break;
		
		case 0x00000001:
			switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
			{
				case 0x28ED60F7:
					if (unk_0xC844350D5D58C99A(iParam0->f_5B))
					{
						if (!unk_0xBFDF2644D7CBD7C5(*iParam0, unk_0x68F4C0EC296D3901(iParam0->f_5B, 0x00000001), 180f) && (unk_0x1C0640BA9A7327B3() - iParam0->f_25) < 0x00001388)
						{
							if (!func_189(*iParam0, 0xCBCE4595, 0x00000001) || func_263(*iParam0))
							{
								unk_0xF96A174EE26D7588(*iParam0, iParam0->f_5B, 0xFFFFFFFF);
								unk_0x0C8C0C840C2D1AD2(*iParam0, iParam0->f_5B, 0xFFFFFFFF, 0x00000800, 0x00000002);
							}
						}
						else if (!func_189(*iParam0, 0x87E3E0A8, 0x00000001) || func_263(*iParam0))
						{
							unk_0xB5F6ECE04E1BA9FF(*iParam0, iParam0->f_5B, 0xFFFFFFFF, 2f, -1f, 2.5f, 1f, 0x00000001);
						}
					}
					break;
				
				case 0xB6ED7607:
					if (iParam0->f_29 && !func_65(iParam0->f_58, iParam0->f_2B, 1f, 0x00000000))
					{
						iParam0->f_58 = { iParam0->f_2B };
						iVar1 = 0x00000001;
					}
					if (!func_233(iParam0->f_58))
					{
						if (!unk_0xBFDF2644D7CBD7C5(*iParam0, iParam0->f_58, 90f) && (unk_0x1C0640BA9A7327B3() - iParam0->f_25) < 0x00001388)
						{
							if ((!func_189(*iParam0, 0x574BB8F5, 0x00000001) || func_263(*iParam0)) || iVar1)
							{
								unk_0x796BDF31572BB055(*iParam0, iParam0->f_58, 0x00000000);
								unk_0xDBE4EC9C88839074(*iParam0, iParam0->f_58, 0xFFFFFFFF, 0x00000800, 0x00000002);
							}
						}
						else if ((!func_189(*iParam0, 0x2A89B8A7, 0x00000001) || func_263(*iParam0)) || iVar1)
						{
							unk_0x96167B03C5A77156(*iParam0, iParam0->f_2B, 1f, 0xFFFFFFFF, 3f, 0x00000000, 0x471C4000);
						}
					}
					break;
				
				case 0x8C55786C:
					break;
				
				case 0xC8B6D779:
					if (!func_233(iParam0->f_58))
					{
						if (!func_189(*iParam0, 0x574BB8F5, 0x00000001) || func_263(*iParam0))
						{
							unk_0x796BDF31572BB055(*iParam0, iParam0->f_58, 0xFFFFFFFF);
							unk_0xDBE4EC9C88839074(*iParam0, iParam0->f_58, 0xFFFFFFFF, 0x00000800, 0x00000002);
						}
					}
					else
					{
						unk_0x93D47DFD0AE94949(*iParam0, 0xFFFFFFFF);
					}
					break;
				
				case 0x037993BB:
					if (unk_0xC844350D5D58C99A(iParam0->f_5B))
					{
						if (!func_189(*iParam0, 0xCBCE4595, 0x00000001) || func_263(*iParam0))
						{
							unk_0xF96A174EE26D7588(*iParam0, iParam0->f_5B, 0xFFFFFFFF);
							unk_0x0C8C0C840C2D1AD2(*iParam0, iParam0->f_5B, 0xFFFFFFFF, 0x00000800, 0x00000002);
						}
					}
					else
					{
						unk_0x93D47DFD0AE94949(*iParam0, 0xFFFFFFFF);
					}
					break;
			}
			break;
	}
}

int func_263(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0x7F8A39872A07D2CE(&(Param0.f_9), &(Param0.f_19)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_264(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	unk_0x2ECF845953E95D1B(*uParam0);
	if (func_263(*uParam0))
	{
		uParam0->f_2E = 0x00000000;
	}
	switch (uParam0->f_5)
	{
		case 0x00000000:
			iVar1 = 0x00000000;
			while (iVar1 < Local_28)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != 0xFFFFFFFF)
			{
				switch (iVar0)
				{
					case 0x00000000:
						if (!func_189(*uParam0, 0x623A5EFE, 0x00000001))
						{
							if (unk_0x4742C50E93110B10(155.74f, -3098.89f, 4.93f, 0.5f, 0x00000001))
							{
								unk_0x4A35AD9FC803369E(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, 0xFFFFFFFF);
							}
						}
						break;
					
					case 0x00000001:
						if ((!func_189(*uParam0, 0x0E763797, 0x00000001) || func_263(*uParam0)) && unk_0xB4AE0788C1587752("misslsdhsclipboard@base"))
						{
							if (!unk_0xB4ECF989E2C1DAC8(*uParam0, "misslsdhsclipboard@base", "base", 0x00000003))
							{
								unk_0xDD353D0E9C789D0E(&uLocal_1255);
								if (!func_65(unk_0x68F4C0EC296D3901(*uParam0, 0x00000001), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0x00000000))
								{
									unk_0x96167B03C5A77156(0x00000000, 126.8496f, -3089.249f, 4.9141f, 1f, 0xFFFFFFFF, 0.5f, 0x00000000, 264.2812f);
								}
								unk_0xE655C47E46F9A7E4(0x00000000, 264.2812f, 0x00000000);
								unk_0xC6EB89C59F2AF6B8(0x00000000, "misslsdhsclipboard@base", "base", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(uLocal_1255);
								unk_0x78ADC381772E3D54(*uParam0, uLocal_1255);
								unk_0xF82EA857DA10E0CD(&uLocal_1255);
							}
							if (unk_0xC844350D5D58C99A(Local_46[0x00000002 /*8*/]))
							{
								unk_0xDBE4EC9C88839074(*uParam0, unk_0xBF584557291FDD31(Local_46[0x00000002 /*8*/], unk_0xF653B9B22DA806A9(Local_46[0x00000002 /*8*/], "engine")), 0xFFFFFFFF, 0x00000000, 0x00000002);
							}
							uParam0->f_2E = 0x00000000;
						}
						else if (unk_0xB4AE0788C1587752("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_2E)
							{
								case 0x00000000:
								case 0x00000002:
									if (uParam0->f_2E == 0x00000000 && unk_0x4F1B602325013CC2(*uParam0) == 0x00000002)
									{
										uParam0->f_6D = 0x00000001;
									}
									if (((uParam0->f_2E == 0x00000000 && unk_0x4F1B602325013CC2(*uParam0) == 0x00000002) || uParam0->f_2E == 0x00000002) && unk_0x1C0640BA9A7327B3() > uParam0->f_25)
									{
										unk_0xDD353D0E9C789D0E(&uLocal_1255);
										switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
										{
											case 0x00000000:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 0x00000001:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 0x00000002:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										unk_0xC6EB89C59F2AF6B8(0x00000000, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										unk_0xC6EB89C59F2AF6B8(0x00000000, "misslsdhsclipboard@base", "base", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										unk_0x75ABDC5F81978924(uLocal_1255);
										unk_0x78ADC381772E3D54(*uParam0, uLocal_1255);
										unk_0xF82EA857DA10E0CD(&uLocal_1255);
										uParam0->f_2E = 0x00000001;
									}
									break;
								
								case 0x00000001:
									if (unk_0x4F1B602325013CC2(*uParam0) == 0x00000001)
									{
										uParam0->f_2E++;
									}
									break;
								}
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (!func_189(*uParam0, 0x623A5EFE, 0x00000001))
						{
							if (unk_0x4742C50E93110B10(159.82f, -3085.93f, 5f, 0.1f, 0x00000001))
							{
								unk_0x4A35AD9FC803369E(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, 0xFFFFFFFF);
							}
							else if (unk_0x4742C50E93110B10(160.15f, -3084.79f, 4.99f, 0.1f, 0x00000001))
							{
								unk_0x4A35AD9FC803369E(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, 0xFFFFFFFF);
							}
							else if (unk_0x4742C50E93110B10(159.09f, -3085.02f, 5.01f, 0.1f, 0x00000001))
							{
								unk_0x4A35AD9FC803369E(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, 0xFFFFFFFF);
							}
						}
						break;
					}
			}
			break;
		
		case 0x00000001:
			switch (unk_0x12AB0310C2281427(&(uParam0->f_9)))
			{
				case 0x7BA553CD:
				case 0x153F8D6F:
				case 0xE749CBA9:
				case 0x4B1F6CF6:
					if (unk_0xC844350D5D58C99A(uParam0->f_5B))
					{
						if (!unk_0xBFDF2644D7CBD7C5(*uParam0, unk_0x68F4C0EC296D3901(uParam0->f_5B, 0x00000001), 180f) && (unk_0x1C0640BA9A7327B3() - uParam0->f_25) < 0x00001388)
						{
							if (!func_189(*uParam0, 0xCBCE4595, 0x00000001) || func_263(*uParam0))
							{
								unk_0xF96A174EE26D7588(*uParam0, uParam0->f_5B, 0xFFFFFFFF);
								unk_0x0C8C0C840C2D1AD2(*uParam0, uParam0->f_5B, 0xFFFFFFFF, 0x00000800, 0x00000002);
							}
						}
						else if (!func_189(*uParam0, 0x87E3E0A8, 0x00000001) || func_263(*uParam0))
						{
							unk_0xB5F6ECE04E1BA9FF(*uParam0, uParam0->f_5B, 0xFFFFFFFF, 2f, -1f, 2.5f, 1f, 0x00000001);
						}
					}
					break;
				
				case 0xB6ED7607:
					if (uParam0->f_29 && !func_65(uParam0->f_58, uParam0->f_2B, 1f, 0x00000000))
					{
						uParam0->f_58 = { uParam0->f_2B };
						iVar3 = 0x00000001;
					}
					if (!func_233(uParam0->f_58))
					{
						if (!unk_0xBFDF2644D7CBD7C5(*uParam0, uParam0->f_58, 90f) && (unk_0x1C0640BA9A7327B3() - uParam0->f_25) < 0x00001388)
						{
							if ((!func_189(*uParam0, 0x574BB8F5, 0x00000001) || func_263(*uParam0)) || iVar3)
							{
								unk_0x796BDF31572BB055(*uParam0, uParam0->f_58, 0x00000000);
								unk_0xDBE4EC9C88839074(*uParam0, uParam0->f_58, 0xFFFFFFFF, 0x00000800, 0x00000002);
							}
						}
						else if ((!func_189(*uParam0, 0x2A89B8A7, 0x00000001) || func_263(*uParam0)) || iVar3)
						{
							unk_0x96167B03C5A77156(*uParam0, uParam0->f_2B, 1f, 0xFFFFFFFF, 3f, 0x00000000, 0x471C4000);
						}
					}
					break;
				
				case 0x8C55786C:
					break;
				
				case 0xC8B6D779:
					if (!func_233(uParam0->f_58))
					{
						if (!func_189(*uParam0, 0x574BB8F5, 0x00000001) || func_263(*uParam0))
						{
							unk_0x796BDF31572BB055(*uParam0, uParam0->f_58, 0xFFFFFFFF);
							unk_0xDBE4EC9C88839074(*uParam0, uParam0->f_58, 0xFFFFFFFF, 0x00000800, 0x00000002);
						}
					}
					else
					{
						unk_0x93D47DFD0AE94949(*uParam0, 0xFFFFFFFF);
					}
					break;
				
				case 0x037993BB:
					if (unk_0xC844350D5D58C99A(uParam0->f_5B))
					{
						if (!func_189(*uParam0, 0xCBCE4595, 0x00000001) || func_263(*uParam0))
						{
							unk_0xF96A174EE26D7588(*uParam0, uParam0->f_5B, 0xFFFFFFFF);
							unk_0x0C8C0C840C2D1AD2(*uParam0, uParam0->f_5B, 0xFFFFFFFF, 0x00000800, 0x00000002);
						}
					}
					else
					{
						unk_0x93D47DFD0AE94949(*uParam0, 0xFFFFFFFF);
					}
					break;
			}
			break;
		
		case 0x00000002:
			if (((unk_0x7F8A39872A07D2CE(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0x7F8A39872A07D2CE(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0x7F8A39872A07D2CE(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0x7F8A39872A07D2CE(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_189(*uParam0, 0x0E763797, 0x00000001) || !unk_0x7069CC4DE1EA3FAA(*uParam0, unk_0x16F2683693E537C9(), 90f)) || func_263(*uParam0))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_1255);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x93D47DFD0AE94949(0x00000000, 0x000007D0);
					unk_0x25644C31B4B6E9F3(uLocal_1255, 0x00000001);
					unk_0x75ABDC5F81978924(uLocal_1255);
					unk_0x78ADC381772E3D54(*uParam0, uLocal_1255);
					unk_0xF82EA857DA10E0CD(&uLocal_1255);
					unk_0x0C8C0C840C2D1AD2(*uParam0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
				}
			}
			else
			{
				if (unk_0xC844350D5D58C99A(iLocal_1300) && unk_0xDF1306B443CD3D15(iLocal_1300, 0x00000000))
				{
					fVar6 = func_107(unk_0x16F2683693E537C9(), iLocal_1300, 0x00000001);
				}
				if ((iLocal_1297 == 0x00000003 || iLocal_1297 == 0x00000002) || iLocal_1297 == 0x00000008)
				{
					iVar4 = unk_0x16F2683693E537C9();
					fVar7 = 2f;
				}
				else if (iLocal_1297 == 0x00000000 || iLocal_1297 == 0x00000001)
				{
					iVar4 = unk_0x16F2683693E537C9();
					fVar7 = 1f;
				}
				else if (iLocal_1297 == 0x00000005 && unk_0xC844350D5D58C99A(iLocal_1300))
				{
					if (fVar6 > 10f)
					{
						iVar4 = unk_0x16F2683693E537C9();
						fVar7 = 2f;
					}
					else
					{
						iVar4 = iLocal_1300;
						fVar7 = 2f;
					}
				}
				else if (iLocal_1297 == 0x00000004 && unk_0xC844350D5D58C99A(iLocal_1300))
				{
					iVar4 = iLocal_1300;
					fVar7 = 1f;
				}
				if (unk_0xC844350D5D58C99A(iVar4))
				{
					fVar5 = func_107(*uParam0, iVar4, 0x00000001);
				}
				if (fVar5 <= 7.5f)
				{
					if (((!func_189(*uParam0, 0x0E763797, 0x00000001) && !func_189(*uParam0, 0x4924437D, 0x00000001)) || !unk_0x7069CC4DE1EA3FAA(*uParam0, unk_0x16F2683693E537C9(), 90f)) || func_263(*uParam0))
					{
						unk_0xDD353D0E9C789D0E(&uLocal_1255);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
						unk_0x93D47DFD0AE94949(0x00000000, 0x000007D0);
						unk_0x25644C31B4B6E9F3(uLocal_1255, 0x00000001);
						unk_0x75ABDC5F81978924(uLocal_1255);
						unk_0x78ADC381772E3D54(*uParam0, uLocal_1255);
						unk_0xF82EA857DA10E0CD(&uLocal_1255);
						unk_0x0C8C0C840C2D1AD2(*uParam0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
					}
				}
				else if (!func_189(*uParam0, 0x4924437D, 0x00000001) || func_263(*uParam0))
				{
					if (fVar7 > 1f)
					{
						fVar8 = 6f;
					}
					else
					{
						fVar8 = 3f;
					}
					unk_0xE185F110925D87DB(*uParam0, iVar4, 0xFFFFFFFF, fVar8, fVar7, 0x40000000, 0x00000000);
					unk_0x0C8C0C840C2D1AD2(*uParam0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
				}
			}
			break;
		
		case 0x00000003:
			switch (unk_0x12AB0310C2281427(&(uParam0->f_9)))
			{
				case 0x52095082:
				case 0x6436CD2D:
				case 0x44EA7A77:
				case 0x5D7843E6:
				case 0x6447EB64:
				case 0xC8E98AD4:
				case 0x7A8C93A1:
				case 0x0B160F55:
					if (unk_0xCAE036C45E7FC720(*uParam0, &iVar9, 0x00000001))
					{
						if (iVar9 != joaat("weapon_unarmed"))
						{
							unk_0x5745EA6329A91E29(*uParam0, joaat("weapon_unarmed"), 0x00000000);
						}
					}
					if (!func_189(*uParam0, 0x2E85A751, 0x00000001))
					{
						unk_0x6C3AE6E278DB3D0E(*uParam0, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					}
					break;
				
				case 0x41336912:
					if ((!func_189(*uParam0, 0x0E763797, 0x00000001) || !unk_0x7069CC4DE1EA3FAA(*uParam0, unk_0x16F2683693E537C9(), 90f)) || func_263(*uParam0))
					{
						unk_0xDD353D0E9C789D0E(&uLocal_1255);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
						unk_0x93D47DFD0AE94949(0x00000000, 0x000007D0);
						unk_0x25644C31B4B6E9F3(uLocal_1255, 0x00000001);
						unk_0x75ABDC5F81978924(uLocal_1255);
						unk_0x78ADC381772E3D54(*uParam0, uLocal_1255);
						unk_0xF82EA857DA10E0CD(&uLocal_1255);
						unk_0x0C8C0C840C2D1AD2(*uParam0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (func_108(*uParam0, 177.7484f, -3240.897f, 4.6079f, 0x00000001) < 15f)
			{
				if (!func_189(*uParam0, 0x6BA30179, 0x00000001))
				{
					unk_0xF3268524E9BE6D6E(*uParam0, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
			}
			else if ((!func_189(*uParam0, 0x6BA30179, 0x00000001) && !func_189(*uParam0, 0x2A89B8A7, 0x00000001)) || func_263(*uParam0))
			{
				unk_0x96167B03C5A77156(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, 0xFFFFFFFF, 0.25f, 0x00000001, 0x471C4000);
			}
			break;
		
		case 0x00000004:
			switch (unk_0x12AB0310C2281427(&(uParam0->f_9)))
			{
				case 0x9DEB2189:
					if (!func_189(*uParam0, 0xA573B67C, 0x00000001) || func_263(*uParam0))
					{
						unk_0xF9B5DB58254657F1(*uParam0, 0xFFFFFFFF, unk_0x16F2683693E537C9(), 0x00000000, 0x00000001);
					}
					break;
			}
			break;
	}
}

void func_265(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &uVar0, 0x00000001);
	fVar1 = func_107(unk_0x16F2683693E537C9(), *iParam0, 0x00000001);
	if (unk_0xE147126C9AD09A60(*iParam0))
	{
		iVar3 = 0x00000001;
	}
	if (unk_0xB87D13D0C064E9D1(*iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		if (unk_0x54648B774DB42A3A(*iParam0, joaat("weapon_unarmed"), 0x00000000))
		{
			iVar2 = 0x00000001;
		}
	}
	uVar4 = func_272(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "PLAYER_KILLED", 0x00000001, 0x00000000);
		}
		else
		{
			func_247(iParam0, 0x00000003, 0x00000001, "KILLED", 0x00000001, 0x00000000);
		}
	}
	else if (((((unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000007C) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000007D)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000007E)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000016)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000017)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000058))
	{
		func_247(iParam0, 0x00000003, 0x00000001, "GUNSHOT", 0x00000001, 0x00000000);
	}
	else if (iParam0->f_27 && func_271(0x00000004))
	{
		func_247(iParam0, 0x00000003, 0x00000001, "GUN_AIMED", 0x00000001, 0x00000000);
	}
	else if (iParam0->f_27 && func_270(*iParam0, 0x00000002))
	{
		func_247(iParam0, 0x00000003, 0x00000001, "PROJ_AIMED", 0x00000001, 0x00000000);
	}
	else if (((iParam0->f_27 && fVar1 < 8f) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000005))
	{
		func_247(iParam0, 0x00000003, 0x00000001, "SEEN_WEAPON", 0x00000001, 0x00000000);
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 0x0000000B)
	{
		if (iParam0->f_27)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "STEALING_SEC_CAR", 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_269(iParam0, 0x00000001, "HEARD_SEC_CAR", Local_46[0x00000003 /*8*/], 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 0x00000006)
	{
		if (iParam0->f_27)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "GET_IN_VAN", 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_269(iParam0, 0x00000001, "HEARD_VAN", Local_46[func_102() /*8*/], 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 0x0000000A)
	{
		if (iParam0->f_27)
		{
			func_269(iParam0, 0x00000003, "STEALING_VAN", Local_46[func_54() /*8*/], 0x00000001, 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_269(iParam0, 0x00000001, "HEARD_VAN", Local_46[func_54() /*8*/], 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if (((iVar2 || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000002A)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000072)) || func_267(*iParam0, 0x00000000))
	{
		func_247(iParam0, 0x00000003, 0x00000001, "FIGHT", 0x00000001, 0x00000000);
	}
	else if ((iVar3 || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000067)) || func_267(*iParam0, 0x00000001))
	{
		func_247(iParam0, 0x00000003, 0x00000001, "RAN_OVER", 0x00000001, 0x00000000);
	}
	else if (((iParam0->f_5 != 0x00000003 && iParam0->f_54) && (iParam0->f_27 || iParam0->f_29)) && (fVar1 < 8f || func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) < 40f))
	{
		if (iParam0->f_27)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "FIGHT_RETURN", 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_266(iParam0, 0x00000001, "HEARD_PLAYER", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if (iParam0->f_5 != 0x00000005 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "PLAYER_KO", 0x00000001, 0x00000000);
		}
		else if (!bVar6)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "DEAD_BODY", 0x00000001, 0x00000000);
		}
	}
	if (iParam0->f_22 > 0xFFFFFFFF && iParam0->f_22 < (Local_1081 - 0x00000001))
	{
		bVar8 = Local_1081[iParam0->f_22 /*32*/].f_1E;
		switch (unk_0x12AB0310C2281427(&(Local_1081[iParam0->f_22 /*32*/].f_1)))
		{
			case 0x38D45DD2:
			case 0x5A7F7661:
			case 0xB29739ED:
			case 0x0B160F55:
			case 0x9DEB2189:
			case 0x347D9E8E:
			case 0x728F0315:
			case 0x52095082:
			case 0x6436CD2D:
			case 0x44EA7A77:
			case 0x6447EB64:
			case 0xC8E98AD4:
			case 0x0915FF2E:
			case 0x23C3E368:
				func_247(iParam0, 0x00000003, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar8);
				break;
			
			case 0xB6ED7607:
				func_266(iParam0, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000000, bVar8);
				break;
			
			case 0x7BA553CD:
			case 0x28ED60F7:
				func_269(iParam0, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), Local_46[func_102() /*8*/], 0x00000001, 0x00000000, bVar8);
				break;
			}
	}
	iParam0->f_22 = 0xFFFFFFFF;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 0x00000001;
	}
	else
	{
		iParam0->f_8 = 0x00000000;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x7F8A39872A07D2CE(&(iParam0->f_19), &(iParam0->f_9)))
	{
		iParam0->f_21 = 0x00000001;
	}
	else
	{
		iParam0->f_21 = 0x00000000;
	}
	iParam0->f_19 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
			{
				case 0x037993BB:
					if ((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x00000BB8)
					{
						func_247(iParam0, 0x00000000, 0x00000000, "BACK_TO_WORK", 0x00000001, 0x00000000);
					}
					break;
				
				case 0xB6ED7607:
					if (((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x00000FA0 && func_108(*iParam0, iParam0->f_58, 0x00000001) < 3f) && unk_0xA91A066C1723AE72(*iParam0))
					{
						func_247(iParam0, 0x00000001, 0x00000000, "SOUND_LOST", 0x00000001, 0x00000000);
					}
					break;
				
				case 0xC8B6D779:
					if ((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x00000FA0 && !unk_0x82FE7F11C00330B0(*iParam0))
					{
						func_247(iParam0, 0x00000000, 0x00000000, "BACK_TO_WORK", 0x00000001, 0x00000000);
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
			{
				case 0x52095082:
				case 0x6436CD2D:
				case 0x44EA7A77:
					if ((((unk_0x1C0640BA9A7327B3() - iParam0->f_26) > 0x00001F40 && func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) > 65f) && (func_107(unk_0x16F2683693E537C9(), *iParam0, 0x00000001) > 10f || (unk_0x1C0640BA9A7327B3() - iParam0->f_26) > 0x00003E80)) && !unk_0x82FE7F11C00330B0(*iParam0))
					{
						func_247(iParam0, 0x00000003, 0x00000000, "FIGHT_ESC", 0x00000001, 0x00000000);
					}
					break;
				
				case 0x38D45DD2:
				case 0x5A7F7661:
				case 0xB29739ED:
				case 0x0B160F55:
				case 0x9DEB2189:
				case 0x347D9E8E:
				case 0x0915FF2E:
				case 0x728F0315:
				case 0x6447EB64:
				case 0xC8E98AD4:
				case 0x23C3E368:
					if (func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) > 300f && func_107(unk_0x16F2683693E537C9(), *iParam0, 0x00000001) > 150f)
					{
						func_247(iParam0, 0x00000003, 0x00000000, "FIGHT_ESC", 0x00000001, 0x00000000);
					}
					break;
			}
			break;
	}
}

int func_266(int iParam0, int iParam1, char* sParam2, vector3 vParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_248(iParam0, iParam1, sParam2, vParam3, 0x00000000, bParam4, iParam5, bParam6);
}

int func_267(struct<110> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_28)
	{
		if (func_268(Param0, Local_28[iVar0 /*110*/], iParam1))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_268(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (unk_0xC844350D5D58C99A(iParam110) && unk_0xB87D13D0C064E9D1(iParam110, unk_0x16F2683693E537C9(), iParam220))
	{
		if (func_107(iParam0, iParam110, 0x00000001) < 15f)
		{
			if (unk_0x6AB6A474D29FA7D8(iParam0, iParam110))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_269(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_248(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_270(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0x00000000 && unk_0xC844350D5D58C99A(iParam0)) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), iParam110) && (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0)))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_271(int iParam0)
{
	if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), iParam0) && (unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_272(struct<110> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_28)
	{
		if (func_273(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_55 = 0x00000001;
			}
			if (!bVar1)
			{
				bVar1 = 0x00000001;
				*uParam1 = bVar2;
				*uParam2 = bVar3;
				*uParam3 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam1 = 0x00000001;
				}
				if (bVar3)
				{
					*uParam2 = 0x00000001;
				}
				if (bVar4)
				{
					*uParam3 = 0x00000001;
				}
			}
			if (Local_28[iVar0 /*110*/].f_55)
			{
				*uParam2 = 0x00000001;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 0x00000001;
	}
	*uParam1 = 0x00000000;
	*uParam2 = 0x00000000;
	*uParam3 = 0x00000000;
	return 0x00000000;
}

int func_273(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(Param71) && unk_0xEB6A8945D1AC98A1(Param71))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(Param71, 0x00000000) };
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Param0, 0x00000001), vVar0, 0x00000001) < 10f)
		{
			if (unk_0x6AB6A474D29FA7D8(Param0, Param71))
			{
				if ((unk_0x1C0640BA9A7327B3() - Param71.f_67) < 0x00000BB8)
				{
					*uParam78 = 0x00000001;
				}
				else
				{
					*uParam78 = 0x00000000;
				}
				if (*uParam78)
				{
					iVar1 = unk_0xA390E7DD86EDBEA0(Param71);
					if (unk_0xEC560E589DF8370E(iVar1))
					{
						iVar2 = unk_0x940C1429253D3B1B(iVar1);
						if ((iVar2 == unk_0x16F2683693E537C9() && !unk_0xEB6A8945D1AC98A1(iVar2)) && Param0.f_27)
						{
							*uParam79 = 0x00000001;
						}
						else
						{
							*uParam79 = 0x00000000;
						}
					}
					else
					{
						*uParam79 = 0x00000000;
					}
				}
				else
				{
					*uParam79 = 0x00000000;
				}
				iVar3 = unk_0xF71162D1C14C71E7(Param71);
				if (iVar3 == joaat("weapon_unarmed") || (iVar3 != joaat("weapon_unarmed") && unk_0xEAAE5E58EF8421BD(iVar3) == 0x00000002))
				{
					*uParam80 = 0x00000001;
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_274(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<6> Var12;
	bool bVar13;
	var uVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar17;
	struct<4> Var18;
	
	unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &uVar0, 0x00000001);
	fVar1 = func_107(unk_0x16F2683693E537C9(), *iParam0, 0x00000001);
	if (unk_0xE147126C9AD09A60(*iParam0))
	{
		iVar3 = 0x00000001;
	}
	if (unk_0xB87D13D0C064E9D1(*iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		if (unk_0x54648B774DB42A3A(*iParam0, joaat("weapon_unarmed"), 0x00000000))
		{
			iVar2 = 0x00000001;
		}
	}
	uVar5 = func_272(*iParam0, &uVar6, &bVar7, &bVar8);
	if (((iParam0->f_5 != 0x00000005 && uVar5) && uVar6) && !bVar8)
	{
		if (bVar7)
		{
			func_247(iParam0, 0x00000005, 0x00000001, "PLAYER_KILLED", 0x00000001, 0x00000000);
		}
		else
		{
			func_247(iParam0, 0x00000005, 0x00000001, "KILLED", 0x00000001, 0x00000000);
		}
	}
	else if (((((unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000007C) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000007D)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000007E)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000016)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000017)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000058))
	{
		func_247(iParam0, 0x00000005, 0x00000001, "GUNSHOT", 0x00000001, 0x00000000);
	}
	else if ((iParam0->f_27 && iParam0->f_5 != 0x00000004) && func_271(0x00000004))
	{
		func_247(iParam0, 0x00000004, 0x00000001, "GUN_AIMED", 0x00000001, 0x00000000);
	}
	else if (iParam0->f_27 && func_270(*iParam0, 0x00000002))
	{
		func_247(iParam0, 0x00000005, 0x00000001, "PROJ_AIMED", 0x00000001, 0x00000000);
	}
	else if ((((iParam0->f_27 && fVar1 < 8f) && iParam0->f_5 != 0x00000004) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000005))
	{
		func_247(iParam0, 0x00000005, 0x00000001, "SEEN_WEAPON", 0x00000001, 0x00000000);
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 0x00000007)
	{
		if (iParam0->f_27)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "EXIT_VAN", 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_266(iParam0, 0x00000001, "HEARD_PLAYER", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 0x00000006)
	{
		if (iParam0->f_27)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "GET_IN_VAN", 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_266(iParam0, 0x00000001, "HEARD_PLAYER", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if ((iParam0->f_27 || iParam0->f_29) && iLocal_1297 == 0x0000000A)
	{
		if (iParam0->f_27)
		{
			func_269(iParam0, 0x00000003, "STEALING_VAN", Local_46[func_54() /*8*/], 0x00000001, 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_269(iParam0, 0x00000001, "HEARD_VAN", Local_46[func_54() /*8*/], 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if (((iVar2 || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000002A)) || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000072)) || func_267(*iParam0, 0x00000000))
	{
		func_247(iParam0, 0x00000003, 0x00000001, "FIGHT", 0x00000001, 0x00000000);
	}
	else if ((iVar3 || unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000067)) || func_267(*iParam0, 0x00000001))
	{
		func_247(iParam0, 0x00000003, 0x00000001, "RAN_OVER", 0x00000001, 0x00000000);
	}
	else if (((iParam0->f_5 != 0x00000003 && iParam0->f_54) && (iParam0->f_27 || iParam0->f_29)) && (fVar1 < 8f || func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) < 40f))
	{
		if (iParam0->f_27)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "FIGHT_RETURN", 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_266(iParam0, 0x00000001, "HEARD_PLAYER", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if (iParam0->f_5 != 0x00000005 && uVar5)
	{
		if ((uVar6 && bVar7) && bVar8)
		{
			func_247(iParam0, 0x00000003, 0x00000001, "PLAYER_KO", 0x00000001, 0x00000000);
		}
		else if (!bVar7)
		{
			func_247(iParam0, 0x00000005, 0x00000001, "DEAD_BODY", 0x00000001, 0x00000000);
		}
	}
	else if (((((((iParam0->f_27 || iParam0->f_29) && (iParam0->f_56 || iParam0->f_57)) && iLocal_1297 == 0x00000009) && !unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "CHECK_DRIVER")) && func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) < 15f)
	{
		if (iParam0->f_27)
		{
			func_269(iParam0, 0x00000001, "SEE_VAN_LEAVING", Local_46[func_102() /*8*/], 0x00000001, 0x00000001, 0x00000000);
		}
		else if (iParam0->f_29)
		{
			func_269(iParam0, 0x00000001, "HEARD_VAN", Local_46[func_102() /*8*/], 0x00000001, 0x00000001, 0x00000000);
		}
	}
	else if (iLocal_1297 != 0x00000009)
	{
		if ((iParam0->f_56 && (((iLocal_1297 == 0x00000000 || iLocal_1297 == 0x00000001) || iLocal_1297 == 0x00000004) || iParam0->f_5 == 0x00000001)) || (iParam0->f_57 && ((iLocal_1297 == 0x00000003 || iLocal_1297 == 0x00000002) || iLocal_1297 == 0x00000005)))
		{
			if ((iLocal_1297 == 0x00000005 || iLocal_1297 == 0x00000004) && unk_0xF649DD3BF44195C7(*iParam0, iLocal_1300, 0x00000013))
			{
				switch (iLocal_1297)
				{
					case 0x00000005:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 0x00000004:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_247(iParam0, 0x00000002, 0x00000001, &Var4, 0x00000001, 0x00000000);
			}
			else if (iParam0->f_27)
			{
				switch (iLocal_1297)
				{
					case 0x00000000:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 0x00000001:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 0x00000002:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 0x00000003:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 0x00000005:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 0x00000004:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case 0xFFFFFFFF:
						if (iParam0->f_5 == 0x00000001)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_247(iParam0, 0x00000002, 0x00000001, &Var4, 0x00000001, 0x00000000);
			}
			else if (iParam0->f_29)
			{
				func_266(iParam0, 0x00000001, "HEARD_PLAYER", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
			}
		}
	}
	if (iParam0->f_22 > 0xFFFFFFFF && iParam0->f_22 < (Local_1081 - 0x00000001))
	{
		bVar9 = Local_1081[iParam0->f_22 /*32*/].f_1E;
		switch (unk_0x12AB0310C2281427(&(Local_1081[iParam0->f_22 /*32*/].f_1)))
		{
			case 0x38D45DD2:
			case 0x5A7F7661:
			case 0xB29739ED:
				if (iParam0->f_5 != 0x00000004)
				{
					func_247(iParam0, 0x00000005, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0x0B160F55:
				if (iParam0->f_5 != 0x00000004)
				{
					func_247(iParam0, 0x00000003, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0x9DEB2189:
				if (iParam0->f_5 != 0x00000004)
				{
					if (func_108(*iParam0, Local_1081[iParam0->f_22 /*32*/].f_17, 0x00000001) < 5f)
					{
						func_247(iParam0, 0x00000004, 0x00000001, "GUN_AIMED_AT", 0x00000000, bVar9);
					}
					else
					{
						func_247(iParam0, 0x00000005, 0x00000001, "SEEN_WEAPON", 0x00000000, bVar9);
					}
				}
				break;
			
			case 0x347D9E8E:
				if (iParam0->f_5 != 0x00000004)
				{
					func_247(iParam0, 0x00000005, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0x728F0315:
				if (iParam0->f_5 != 0x00000004)
				{
					func_247(iParam0, 0x00000005, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0x52095082:
			case 0x6436CD2D:
			case 0x44EA7A77:
			case 0xE6F954DF:
				if (iParam0->f_5 != 0x00000004)
				{
					func_247(iParam0, 0x00000003, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0x6447EB64:
			case 0xC8E98AD4:
			case 0x7A8C93A1:
				if (((iParam0->f_5 != 0x00000004 && !unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "STEALING_VAN")) && !unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_247(iParam0, 0x00000003, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0x0915FF2E:
				if (iParam0->f_5 != 0x00000004)
				{
					func_247(iParam0, 0x00000005, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0xE68E2482:
				if (iParam0->f_56)
				{
					func_247(iParam0, 0x00000002, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0xA8E44433:
				if (iParam0->f_56)
				{
					func_247(iParam0, 0x00000002, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0xC6067AC4:
				if (iParam0->f_57)
				{
					func_247(iParam0, 0x00000002, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0xE0F7F21E:
				if (iParam0->f_57)
				{
					func_247(iParam0, 0x00000002, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0xAF88B987:
				if (iParam0->f_57)
				{
					func_247(iParam0, 0x00000002, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), 0x00000000, bVar9);
				}
				break;
			
			case 0xB6ED7607:
				if (iParam0->f_57)
				{
					func_266(iParam0, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000000, bVar9);
				}
				break;
			
			case 0x7BA553CD:
				if (iParam0->f_57)
				{
					func_269(iParam0, 0x00000001, &(Local_1081[iParam0->f_22 /*32*/].f_1), Local_46[func_102() /*8*/], 0x00000001, 0x00000000, bVar9);
				}
				break;
			}
	}
	iParam0->f_22 = 0xFFFFFFFF;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 0x00000001;
	}
	else
	{
		iParam0->f_8 = 0x00000000;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x7F8A39872A07D2CE(&(iParam0->f_19), &(iParam0->f_9)))
	{
		iParam0->f_21 = 0x00000001;
	}
	else
	{
		iParam0->f_21 = 0x00000000;
	}
	iParam0->f_19 = { iParam0->f_9 };
	iVar10 = 0x00000000;
	while (iVar10 < Local_28)
	{
		if (Local_28[iVar10 /*110*/] == *iParam0)
		{
			iVar11 = iVar10;
		}
		iVar10++;
	}
	switch (iParam0->f_5)
	{
		case 0x00000005:
			switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
			{
				case 0x0915FF2E:
				case 0x728F0315:
				case 0x347D9E8E:
				case 0x38D45DD2:
				case 0x5A7F7661:
				case 0xB29739ED:
					if ((func_279(*iParam0) || (iParam0->f_30 % 0x00000002) == 0x00000000) || !func_179(Local_29))
					{
						if ((unk_0x12AB0310C2281427(&(iParam0->f_9)) == 0x0915FF2E || unk_0x12AB0310C2281427(&(iParam0->f_9)) == 0x728F0315) || unk_0x12AB0310C2281427(&(iParam0->f_9)) == 0x347D9E8E)
						{
							if (func_256(iVar11))
							{
								Var12 = { func_278(iVar11, "JS_GUN1") };
								if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000000))
								{
									func_277(iParam0, &(iParam0->f_9), &Var12, 15f, 0x00000BB8, 0x000000FA, 0x00000000, 0x00000001, 0x00000000);
								}
								else if (iParam0->f_30 == 0x00000000)
								{
									func_277(iParam0, &(iParam0->f_9), "", 15f, 0x00000BB8, 0x000000FA, 0x00000001, 0x00000001, 0x00000000);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 0x00000002:
										StringCopy(&Var12, "SOL1_ARM1", 24);
										break;
									
									case 0x00000003:
										StringCopy(&Var12, "SOL1_ARM2", 24);
										break;
								}
								if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000000))
								{
									func_277(iParam0, &(iParam0->f_9), &Var12, 15f, 0x00000BB8, 0x000000FA, 0x00000000, 0x00000001, 0x00000000);
								}
								else if (iParam0->f_30 == 0x00000000)
								{
									func_277(iParam0, &(iParam0->f_9), "", 15f, 0x00000BB8, 0x000000FA, 0x00000001, 0x00000001, 0x00000000);
								}
							}
						}
						else if ((unk_0x12AB0310C2281427(&(iParam0->f_9)) == 0x38D45DD2 || unk_0x12AB0310C2281427(&(iParam0->f_9)) == 0x5A7F7661) || unk_0x12AB0310C2281427(&(iParam0->f_9)) == 0xB29739ED)
						{
							if (func_256(iVar11))
							{
								Var12 = { func_278(iVar11, "JS_KILL") };
								if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000007D0, 0x00000000, 0x00000000, 0x00000000))
								{
									func_277(iParam0, &(iParam0->f_9), &Var12, 15f, 0x00000BB8, 0x000000FA, 0x00000000, 0x00000001, 0x00000000);
								}
								else if (iParam0->f_30 == 0x00000000)
								{
									func_277(iParam0, &(iParam0->f_9), "", 15f, 0x00000BB8, 0x000000FA, 0x00000001, 0x00000001, 0x00000000);
								}
							}
							else if (iParam0->f_30 == 0x00000000)
							{
								func_277(iParam0, &(iParam0->f_9), "", 15f, 0x00000BB8, 0x000000FA, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						iParam0->f_30++;
					}
					else
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_GETSEC") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000007D0, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 15f, 0x00000BB8, 0x000000FA, 0x00000000, 0x00000001, 0x00000001);
							}
							else if (iParam0->f_30 == 0x00000000)
							{
								func_277(iParam0, &(iParam0->f_9), "", 15f, 0x00000BB8, 0x000000FA, 0x00000001, 0x00000001, 0x00000001);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 0x00000002:
									StringCopy(&Var12, "SOL1_SECIN1", 24);
									break;
								
								case 0x00000003:
									StringCopy(&Var12, "SOL1_SECIN2", 24);
									break;
							}
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000007D0, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 15f, 0x00000BB8, 0x000000FA, 0x00000000, 0x00000001, 0x00000001);
							}
							else if (iParam0->f_30 == 0x00000000)
							{
								func_277(iParam0, &(iParam0->f_9), "", 15f, 0x00000BB8, 0x000000FA, 0x00000001, 0x00000001, 0x00000001);
							}
						}
						iParam0->f_30++;
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
			{
				case 0x49005FA4:
					if (func_270(*iParam0, 0x00000004))
					{
						func_247(iParam0, 0x00000004, 0x00000000, "GUN_AIMED_AT", 0x00000001, 0x00000000);
					}
					else if ((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x000003E8)
					{
						func_247(iParam0, 0x00000005, 0x00000001, "SEEN_WEAPON", 0x00000001, 0x00000000);
					}
					break;
				
				case 0x9DEB2189:
					if (func_270(*iParam0, 0x00000004))
					{
						func_247(iParam0, 0x00000004, 0x00000001, "GUN_AIMED_AT", 0x00000001, 0x00000000);
					}
					if (((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x00003A98 || (unk_0x1C0640BA9A7327B3() - iParam0->f_26) > 0x00000BB8) && !unk_0x82FE7F11C00330B0(*iParam0))
					{
						func_247(iParam0, 0x00000005, 0x00000001, "SEEN_WEAPON", 0x00000001, 0x00000000);
					}
					else if (func_279(*iParam0) || iParam0->f_30 == 0x00000000)
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_HND1") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000001, 0x00000000);
							}
							else if (iParam0->f_30 == 0x00000000)
							{
								func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 0x00000002:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 0x00000003:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000001, 0x00000000);
							}
							else if (iParam0->f_30 == 0x00000000)
							{
								func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						iParam0->f_30++;
					}
					else
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_HND1") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x000007D0, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000001, 0x00000000);
							}
							else if (iParam0->f_30 == 0x00000000)
							{
								func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 0x00000002:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 0x00000003:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x000007D0, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000001, 0x00000000);
							}
							else if (iParam0->f_30 == 0x00000000)
							{
								func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						iParam0->f_30++;
					}
					break;
			}
			break;
		
		case 0x00000000:
			switch (iVar11)
			{
				case 0x00000001:
					if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00001388)
					{
						switch (iLocal_1280)
						{
							case 0x00000000:
								func_253(iVar11, "JS_STOCK", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000001:
								func_253(iVar11, "JS_STOCKb", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000002:
								func_253(iVar11, "JS_STOCKc", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000003:
								func_253(iVar11, "JS_STOCKd", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000004:
								func_253(iVar11, "JS_STOCKe", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000005:
								func_253(iVar11, "JS_STOCKf", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000006:
								func_253(iVar11, "JS_STOCKg", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000007:
								func_253(iVar11, "JS_STOCKh", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000008:
								func_253(iVar11, "JS_STOCKi", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x00000009:
								func_253(iVar11, "JS_STOCKj", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280++;
								break;
							
							case 0x0000000A:
								func_253(iVar11, "JS_STOCKk", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_1280 = 0x00000000;
								break;
							}
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_31)
					{
						if (func_253(iVar11, "SOL1_AMB1", iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
						{
							func_45(&uLocal_1087, 0x00000004, Local_28[0x00000002 /*110*/], "CONSTRUCTION1", 0x00000000, 0x00000001);
							func_45(&uLocal_1087, 0x00000003, Local_28[0x00000003 /*110*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
							iParam0->f_31 = 0x00000001;
						}
					}
					break;
			}
			break;
		
		case 0x00000001:
			if (unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				vVar16 = { func_276(unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, 1f, 0f) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) };
				vVar17 = { func_276(unk_0x68F4C0EC296D3901(Local_28[iVar11 /*110*/], 0x00000001) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) };
				uVar14 = func_275(vVar16, vVar17);
				fVar15 = unk_0x3DCA5D50DD292443(uVar14);
				if ((fVar15 < 90f && fVar1 < 8f) && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 1f)
				{
					bVar13 = 0x00000001;
				}
			}
			switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
			{
				case 0xE749CBA9:
				case 0x4B1F6CF6:
					if (func_279(*iParam0) && unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_VAN_LVE1") };
							func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000000, 0x00000001, 0x000003E8, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (bVar13)
					{
						func_269(iParam0, 0x00000001, "CHECK_DRIVER", Local_46[func_102() /*8*/], 0x00000000, 0x00000001, 0x00000000);
					}
					else if (func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_247(iParam0, 0x00000001, 0x00000000, "VAN_LOST", 0x00000001, 0x00000000);
						}
					}
					break;
				
				case 0x037993BB:
					if (func_279(*iParam0))
					{
						Var12 = { func_278(iVar11, "JS_VAN_LVE2") };
						func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else if ((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x00000BB8)
					{
						func_247(iParam0, 0x00000000, 0x00000000, "BACK_TO_WORK", 0x00000001, 0x00000000);
					}
					break;
				
				case 0x153F8D6F:
					if (bVar13)
					{
						if ((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x000007D0 && !unk_0x82FE7F11C00330B0(*iParam0))
						{
							func_247(iParam0, 0x00000003, 0x00000001, "STEALING_VAN", 0x00000001, 0x00000000);
						}
					}
					else
					{
						func_269(iParam0, 0x00000001, "SEE_VAN_LEAVING_1", Local_46[func_102() /*8*/], 0x00000000, 0x00000001, 0x00000000);
					}
					break;
				
				case 0xB6ED7607:
					if (((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x00000FA0 && func_108(*iParam0, iParam0->f_58, 0x00000001) < 3f) && unk_0xA91A066C1723AE72(*iParam0))
					{
						func_247(iParam0, 0x00000001, 0x00000000, "SOUND_LOST", 0x00000001, 0x00000000);
					}
					else if (func_279(*iParam0))
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_SND_INV") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 3f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
					break;
				
				case 0xC8B6D779:
					if ((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x00000FA0 && !unk_0x82FE7F11C00330B0(*iParam0))
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_SNDLOST2") };
							func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x000003E8, 0x00000000, 0x00000000, 0x00000000);
						}
						func_247(iParam0, 0x00000000, 0x00000000, "BACK_TO_WORK", 0x00000001, 0x00000000);
					}
					else if (func_279(*iParam0))
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_SNDLOST1") };
							func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x000003E8, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
			{
				case 0x52095082:
				case 0x6436CD2D:
				case 0x44EA7A77:
				case 0xE6F954DF:
					if ((((unk_0x1C0640BA9A7327B3() - iParam0->f_26) > 0x00001F40 && func_108(unk_0x16F2683693E537C9(), vLocal_58, 0x00000001) > 65f) && (func_107(unk_0x16F2683693E537C9(), *iParam0, 0x00000001) > 10f || (unk_0x1C0640BA9A7327B3() - iParam0->f_26) > 0x00003E80)) && !unk_0x82FE7F11C00330B0(*iParam0))
					{
						func_247(iParam0, 0x00000003, 0x00000000, "FIGHT_ESC", 0x00000001, 0x00000000);
					}
					else if (func_279(*iParam0) && iParam0->f_23)
					{
						if (!iParam0->f_54)
						{
							if (func_256(iVar11))
							{
								Var12 = { func_278(iVar11, "JS_MELE_1") };
								if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000))
								{
									func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 0x00000002:
										StringCopy(&Var12, "SOL1_FIGHT1", 24);
										break;
									
									case 0x00000003:
										StringCopy(&Var12, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000))
								{
									func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							iParam0->f_54 = 0x00000001;
						}
						else if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_MELE_2") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 0x00000002:
									StringCopy(&Var12, "SOL1_FIGHT1", 24);
									break;
								
								case 0x00000003:
									StringCopy(&Var12, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
					break;
				
				case 0x41336912:
					if ((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x00000FA0)
					{
						func_247(iParam0, 0x00000000, 0x00000000, "BACK_TO_WORK", 0x00000001, 0x00000000);
					}
					if (func_279(*iParam0))
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_MELE_ESC") };
							func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					break;
				
				case 0x6447EB64:
					if (((((unk_0x1C0640BA9A7327B3() - iParam0->f_25) > 0x000007D0 && iParam0->f_27) && !unk_0x82FE7F11C00330B0(*iParam0)) && iLocal_1297 != 0x00000009) && iLocal_1297 != 0x0000000A)
					{
						func_247(iParam0, 0x00000003, 0x00000000, "EXIT_VAN", 0x00000001, 0x00000000);
					}
					if (func_279(*iParam0))
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_VAN_IN2") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
							}
							else
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 0x00000002:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 0x00000003:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
							}
							else
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000001, 0x00000001, 0x00000000);
							}
						}
					}
					else if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x000007D0)
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_VAN_TK") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
							}
						}
					}
					break;
				
				case 0xC8E98AD4:
					if (func_279(*iParam0))
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_VAN_IN1") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
							}
							else
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 0x00000002:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 0x00000003:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
							}
							else
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000001, 0x00000001, 0x00000000);
							}
						}
					}
					else if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x000007D0)
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_VAN_TK") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
							}
							else
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000001, 0x00000001, 0x00000000);
							}
						}
					}
					break;
				
				case 0x7A8C93A1:
					if (func_279(*iParam0))
					{
						if (func_256(iVar11))
						{
							Var12 = { func_278(iVar11, "JS_VAN_IN2") };
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
							}
							else
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 0x00000002:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 0x00000003:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
							}
							else
							{
								func_277(iParam0, &(iParam0->f_9), &Var12, 25f, 0x00000BB8, 0x000003E8, 0x00000001, 0x00000001, 0x00000000);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000002:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_26) > 0x00001388 && !unk_0x82FE7F11C00330B0(*iParam0))
			{
				if (iVar11 == 0x00000001)
				{
					func_253(iVar11, "JS_STOCK2", 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x000003E8, 0x00000000, 0x00000000, 0x00000000);
					iLocal_1280 = 0x00000000;
				}
				func_247(iParam0, 0x00000000, 0x00000000, "BACK_TO_WORK", 0x00000001, 0x00000000);
			}
			else
			{
				if (iParam0->f_27)
				{
					if ((unk_0x1C0640BA9A7327B3() - iParam0->f_26) > 0x000003E8 && !unk_0x82FE7F11C00330B0(*iParam0))
					{
						if (((unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "ENT_FOOT") || unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "ENT_VEH")) || unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "WH_FOOT")) || unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "WH_VEH"))
						{
							Var18 = { iParam0->f_9 };
							StringConCat(&Var18, "_LEAVE", 32);
							func_247(iParam0, 0x00000002, 0x00000000, &Var18, 0x00000001, 0x00000000);
						}
					}
					if ((unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "WH_FOOT") || unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "WH_VEH")) || (unk_0x7F8A39872A07D2CE(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x82FE7F11C00330B0(*iParam0)))
					{
						if (((iParam0->f_68 >= 0x00000006 && iLocal_1253 != 0xFFFFFFFF) && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00001B58) && (unk_0x1C0640BA9A7327B3() - iParam0->f_26) == 0x00000000)
						{
							func_247(iParam0, 0x00000003, 0x00000000, "WH_FAILED_LEAVE", 0x00000001, 0x00000000);
						}
					}
				}
				switch (unk_0x12AB0310C2281427(&(iParam0->f_9)))
				{
					case 0xE68E2482:
						if (func_279(*iParam0))
						{
							if (!iParam0->f_52)
							{
								if (func_256(iVar11))
								{
									if (!iParam0->f_53)
									{
										Var12 = { func_278(iVar11, "JS_ENT_F1") };
										func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000000, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										Var12 = { func_278(iVar11, "JS_ENT_F1_P") };
										func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000000, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
								}
							}
							else if (func_256(iVar11))
							{
								if (!iParam0->f_53)
								{
									Var12 = { func_278(iVar11, "JS_ENT_F2") };
									func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									Var12 = { func_278(iVar11, "JS_ENT_F2_P") };
									func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							iParam0->f_52 = 0x00000001;
						}
						else if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00001388)
						{
							if (func_256(iVar11))
							{
								if (!iParam0->f_53)
								{
									Var12 = { func_278(iVar11, "JS_ENT_F") };
									func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									Var12 = { func_278(iVar11, "JS_ENT_F_P") };
									func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
						}
						break;
					
					case 0xA8E44433:
						if (func_279(*iParam0) || iParam0->f_30 == 0x00000000)
						{
							if (!iParam0->f_52)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_ENT_V1") };
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000000))
									{
										iParam0->f_30++;
									}
								}
								iParam0->f_52 = 0x00000001;
							}
							else if (unk_0x7F8A39872A07D2CE(&(iParam0->f_11), "WH_VEH"))
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_ENT_V") };
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000000))
									{
										iParam0->f_30++;
									}
								}
							}
							else if (func_256(iVar11))
							{
								Var12 = { func_278(iVar11, "JS_ENT_V3") };
								if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000000))
								{
									iParam0->f_30++;
								}
							}
						}
						else if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00001388)
						{
							if (func_256(iVar11))
							{
								Var12 = { func_278(iVar11, "JS_ENT_V3") };
								func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						break;
					
					case 0xC6067AC4:
						if (func_279(*iParam0))
						{
							if (iParam0->f_68 == 0x00000000)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_WH1") };
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0x00000000)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_WH2") };
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 0x00000001;
						}
						else if (iParam0->f_68 < 0x00000006)
						{
							if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00001388)
							{
								if (func_256(iVar11))
								{
									if (iParam0->f_68 < 0x00000005)
									{
										Var12 = { func_278(iVar11, "JS_WH") };
									}
									else
									{
										Var12 = { func_278(iVar11, "JS_WH_F") };
									}
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 10f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 10f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case 0xD9CDBEEC:
						if (func_279(*iParam0))
						{
							if (iParam0->f_68 == 0x00000000)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_WH1") };
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0x00000000)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_WH2") };
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 0x00000001;
						}
						else if (iParam0->f_68 < 0x00000006)
						{
							if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00001388)
							{
								if (func_256(iVar11))
								{
									if (iParam0->f_68 < 0x00000005)
									{
										if (((iParam0->f_68 - 0x00000001) % 0x00000002) == 0x00000000)
										{
											Var12 = { func_278(iVar11, "JS_ENT_V4") };
										}
										else
										{
											Var12 = { func_278(iVar11, "JS_ENT_V3") };
										}
									}
									else
									{
										Var12 = { func_278(iVar11, "JS_WH_F") };
									}
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 10f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 10f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case 0xE0F7F21E:
						if (func_279(*iParam0))
						{
							if (iParam0->f_68 == 0x00000000)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_WH1") };
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
							else if (iParam0->f_68 > 0x00000000)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_WH2") };
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 5f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 5f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
							iParam0->f_52 = 0x00000001;
						}
						else if (iParam0->f_68 < 0x00000006)
						{
							if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00001388)
							{
								if (func_256(iVar11))
								{
									if (iParam0->f_68 < 0x00000005)
									{
										if (((iParam0->f_68 - 0x00000001) % 0x00000002) == 0x00000000)
										{
											Var12 = { func_278(iVar11, "JS_ENT_V3") };
										}
										else
										{
											Var12 = { func_278(iVar11, "JS_WH") };
										}
									}
									else
									{
										Var12 = { func_278(iVar11, "JS_WH_F") };
									}
									if (func_253(iVar11, &Var12, iParam0->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
									{
										func_277(iParam0, &(iParam0->f_9), &Var12, 10f, 0x00000BB8, 0x000001F4, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										func_277(iParam0, &(iParam0->f_9), "", 10f, 0x00000BB8, 0x000001F4, 0x00000001, 0x00000000, 0x00000000);
									}
									iParam0->f_68++;
								}
							}
						}
						break;
					
					case 0x2E6B041A:
						if (iParam0->f_30 == 0x00000000)
						{
							if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x000003E8)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_ENT_V4") };
									func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								iParam0->f_30++;
							}
						}
						else if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x00001388)
						{
							if (((iParam0->f_30 - 0x00000001) % 0x00000003) == 0x00000000)
							{
								Var12 = { func_278(iVar11, "JS_ENT_V4") };
							}
							else
							{
								Var12 = { func_278(iVar11, "JS_ENT_V3") };
							}
							func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iParam0->f_30++;
						}
						break;
					
					case 0x5E356020:
						if (iParam0->f_30 == 0x00000000)
						{
							if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x000003E8)
							{
								if (func_256(iVar11))
								{
									if (!iParam0->f_53)
									{
										Var12 = { func_278(iVar11, "JS_ENT_F3") };
										func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										Var12 = { func_278(iVar11, "JS_ENT_F3_P") };
										func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									}
								}
								iParam0->f_30++;
							}
						}
						break;
					
					case 0x9ACF4F12:
					case 0xDA8D7F87:
					case 0x8F44297A:
						if (iParam0->f_30 == 0x00000000)
						{
							if (func_48() && (unk_0x1C0640BA9A7327B3() - iLocal_1253) > 0x000003E8)
							{
								if (func_256(iVar11))
								{
									Var12 = { func_278(iVar11, "JS_ENT_V5") };
									func_253(iVar11, &Var12, iParam0->f_5, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								iParam0->f_30++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_275(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_276(vector3 vParam0)
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

void func_277(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_28)
	{
		if (Local_28[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_32 = iVar1;
	StringCopy(&(iParam0->f_32.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_32.f_11), sParam2, 24);
	iParam0->f_32.f_1C = iParam4;
	iParam0->f_32.f_1A = fParam3;
	iParam0->f_32.f_1D = iParam5;
	iParam0->f_32.f_1E = iParam7;
	iParam0->f_32.f_1F = iParam8;
	if (bParam6)
	{
		func_250(&(iParam0->f_32), 0x00000000);
	}
}

struct<6> func_278(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 0x00000001)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_279(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)
{
	if (Param0.f_8 || Param0.f_21)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_280(int iParam0)
{
	if (unk_0xE115347EA59F7B86(*iParam0, unk_0x16F2683693E537C9()))
	{
		iParam0->f_28 = unk_0x1C0640BA9A7327B3();
		iParam0->f_27 = 0x00000001;
	}
	else if ((unk_0x1C0640BA9A7327B3() - iParam0->f_28) > 0x000007D0 || !unk_0x7069CC4DE1EA3FAA(*iParam0, unk_0x16F2683693E537C9(), 90f))
	{
		iParam0->f_28 = unk_0x1C0640BA9A7327B3();
		iParam0->f_27 = 0x00000000;
	}
	if (iParam0->f_27)
	{
		bLocal_1294 = 0x00000000;
	}
	if (bLocal_1294)
	{
		unk_0x9DD8618CA5BF832D(*iParam0, 0x000000BC, 0x00000001);
	}
	if (!func_281())
	{
		iParam0->f_29 = unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), *iParam0);
		if (iParam0->f_29)
		{
			iParam0->f_2B = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
	}
	else
	{
		iParam0->f_29 = 0x00000000;
	}
	switch (iParam0->f_5)
	{
		case 0x00000005:
		case 0x00000004:
		case 0x00000003:
			iParam0->f_66 = 0x00000001;
			break;
		
		default:
			iParam0->f_66 = 0x00000000;
			break;
	}
}

int func_281()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(Local_46[iVar0 /*8*/]) && unk_0xDF1306B443CD3D15(Local_46[iVar0 /*8*/], 0x00000000))
		{
			if (unk_0x63DF57B5632952E5(Local_46[iVar0 /*8*/]))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_282()
{
	vector3 vVar0;
	var uVar1;
	
	unk_0xF63400DBE3303D26("BUGSTAR", &iLocal_1254);
	unk_0x0E2400AB9174FA81(0x00000003, 0x6F0783F5, iLocal_1254);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_1254, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_1254);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_1254, 0xA49E591C);
	unk_0xE342F209E49C5314(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0x00000000, 0x00000001);
	unk_0x21688103CC7F9B19(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0x00000000);
	unk_0x536F1BE96C726C4B(138.43f, -3092.47f, 4.9f, 28.375f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	if (func_193() || func_6(0x00000000))
	{
		iLocal_67 = 0x00000000;
		if (func_193())
		{
			if (Global_16AF9)
			{
				iLocal_67++;
			}
		}
		if (func_193())
		{
			func_234(iLocal_67, &vVar0, &uVar1);
			func_288(vVar0, uVar1, 0x00000001, 0x00000000);
		}
		bLocal_66 = 0x00000001;
	}
	else
	{
		while (!func_188(0x00000001))
		{
			SYSTEM::WAIT(0x00000000);
			func_287(&uLocal_70);
		}
	}
	func_286(&uLocal_70, "JHP1A", 0x00000000);
	func_229(&uLocal_70, "misslsdhsclipboard@base");
	func_229(&uLocal_70, "misslsdhsclipboard@idle_a");
	func_229(&uLocal_70, "misstrevor3");
	func_171(&uLocal_70, joaat("p_amb_clipboard_01"));
	func_228(&uLocal_70, iLocal_1256);
	func_230(&uLocal_70, &cLocal_59);
	unk_0x0FFE8B6DB75A4C39(unk_0xD803B885F5E47A62(), 0.15f);
	func_284(0x00000057);
	func_45(&uLocal_1087, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	func_45(&uLocal_1087, 0x00000003, 0x00000000, "LESTER", 0x00000000, 0x00000001);
	func_252(bLocal_1252);
	func_283();
	iLocal_1256 = unk_0x0D1736C2E221BCEA(vLocal_58, "po1_08_warehouseint1");
	unk_0x93776B156FD8804A(&cLocal_49);
	iLocal_1302 = unk_0x7D6CA5F52B3748BF(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	while (!unk_0x67C1D9E5B91B2E37(0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

void func_283()
{
	Global_16AFA = 0x00000001;
}

void func_284(int iParam0)
{
	Global_17187 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000048:
			func_285(0x00000002);
			func_285(0x00000004);
			break;
		
		case 0x00000049:
			func_285(0x00000000);
			func_285(0x00000001);
			func_285(0x00000007);
			break;
		
		case 0x0000005C:
			func_285(0x0000000A);
			func_285(0x00000009);
			func_285(0x0000000D);
			func_285(0x00000006);
			break;
		
		case 0x00000044:
			func_285(0x0000000B);
			break;
		
		case 0x0000004E:
			func_285(0x0000000E);
			break;
		
		case 0x0000004F:
			func_285(0x00000003);
			break;
		
		default:
			break;
	}
}

void func_285(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_17187, iParam0);
}

int func_286(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_30B[iParam2 /*5*/].f_1 || uParam0->f_30B[iParam2 /*5*/])
	{
		if (unk_0x7F8A39872A07D2CE(uParam0->f_30B[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_30B[iParam2 /*5*/].f_2 = 0x00000000;
			uParam0->f_3D6 = 0x00000001;
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	else
	{
		if (iParam2 >= 0x0000000B)
		{
			unk_0x23249A21DED9ADF1(sParam1, iParam2);
		}
		else
		{
			unk_0xD7992BEF7A9D109E(sParam1, iParam2);
		}
		uParam0->f_30B[iParam2 /*5*/] = 0x00000001;
		uParam0->f_30B[iParam2 /*5*/].f_3 = unk_0x1C0640BA9A7327B3();
		uParam0->f_30B[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_287(var uParam0)
{
	func_236(uParam0);
}

void func_288(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_193())
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
		func_192(0x00000001);
	}
}

void func_289(int iParam0)
{
	vector3 vVar0;
	char[] cVar1[8];
	
	if (iParam0 == 0x00000006)
	{
		func_301();
		func_8(0x00000000);
		unk_0xC92DB9682A650680("JHP1A_FAIL");
		unk_0x10FAF14A60A0DBE1();
	}
	else if (!bLocal_68)
	{
		bLocal_68 = 0x00000001;
		iLocal_69 = iParam0;
		switch (iLocal_69)
		{
			case 0x00000001:
				StringCopy(&vVar0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 0x00000003:
				StringCopy(&vVar0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 0x00000002:
				StringCopy(&vVar0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 0x00000004:
				StringCopy(&vVar0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 0x00000005:
				StringCopy(&vVar0, "JHP1A_ABAN", 24);
				break;
			
			case 0x00000000:
			default:
				StringCopy(&vVar0, "JHP1A_FF", 24);
				break;
		}
		if (unk_0xEA6BC48857E0AC4C(&cVar1))
		{
			func_299(&vVar0);
		}
		else
		{
			func_290(&vVar0, &cVar1);
		}
		unk_0xC92DB9682A650680("JHP1A_FAIL");
	}
}

void func_290(char* sParam0, char* sParam1)
{
	func_298(sParam0, sParam1);
	func_291(0x00000000);
}

void func_291(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_6(0x00000000))
	{
		iVar0 = func_4();
		if (!func_292(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_292(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_297();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_296(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_293(&(Global_1B416.f_936.f_21B), iVar1);
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

void func_293(var uParam0, int iParam1)
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
			if (!func_295(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_294(&(uParam0->f_8F8[iVar0]));
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

void func_294(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_295(int iParam0, var uParam1, float fParam2)
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
			return func_295(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_295(0x00000008, uParam1, fParam2);
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

void func_296(int iParam0, bool bParam1)
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

void func_297()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_165())
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
			switch (func_165())
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

void func_298(char* sParam0, char* sParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 0x00000010)
		{
			if (unk_0x4880526EC51D1C27(sParam1) <= 0x00000010)
			{
				StringCopy(&Global_12C36, sParam0, 16);
				StringCopy(&Global_12C3A, sParam1, 16);
			}
		}
	}
}

void func_299(char* sParam0)
{
	func_300(sParam0);
	func_291(0x00000000);
}

void func_300(char* sParam0)
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

void func_301()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_6(0x00000000))
	{
		if (!func_302())
		{
			iVar0 = func_4();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_292(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_297();
		}
	}
}

int func_302()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

