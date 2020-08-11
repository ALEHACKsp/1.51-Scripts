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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	struct<110> Local_49 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_102 = 3;
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
	var uLocal_199 = 16;
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
	var uLocal_364 = 16;
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
	var uLocal_530 = 3;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 1092616192;
	var uLocal_537 = 1101004800;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 3;
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
	var uLocal_594 = 5;
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
	var uLocal_611 = 5;
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
	var uLocal_671 = 3;
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
	var uLocal_690 = 13;
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
	var uLocal_719 = 4;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 4;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 4;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 4;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 4;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 4;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 4;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 8;
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
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_803 = 0;
	var uLocal_804 = 16;
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
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	vector3 vLocal_971 = { 0f, 0f, 0f };
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	bool bLocal_980 = 0;
	int iLocal_981 = 0;
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	vector3 vLocal_984 = { 0f, 0f, 0f };
	vector3 vLocal_985 = { 0f, 0f, 0f };
	struct<2> Local_986 = { 0, 0 } ;
	var uLocal_987 = 0;
	struct<2> Local_988 = { 0, 0 } ;
	var uLocal_989 = 0;
	int iLocal_990 = 0;
	char[] cLocal_991[8] = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	char[] cLocal_995[8] = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	bool bLocal_999 = 0;
	int iLocal_1000 = 0;
	char cLocal_1001[48] = "";
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	iLocal_48 = joaat("p_amb_phone_01");
	vLocal_971 = { 693.1158f, -1012.418f, 21.72802f };
	vLocal_984 = { 692.8695f, -998.7867f, 22.3201f };
	vLocal_985 = { 693.3784f, -1025.671f, 21.506f };
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_111();
		func_109();
		func_107();
	}
	func_99();
	unk_0x7798376279BB5369(0x00000001);
	while (0x00000001)
	{
		unk_0x1A6DFFFEEC27BF4F("M_TheAgencyHeistPrep1", 0x00000000);
		if (!iLocal_974)
		{
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_971, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x8E28E832BEAC3DCE(vLocal_971, 50f))
			{
				unk_0x536F1BE96C726C4B(vLocal_971, 50f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iLocal_974 = 0x00000001;
			}
		}
		else if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_971, 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_974 = 0x00000000;
		}
		if (!iLocal_979)
		{
			if (Global_17409.f_166 == unk_0x12AB0310C2281427("AHP1_TRUCKCALLED") || Global_173C3)
			{
				func_98(0x0000021F);
				Global_17409.f_166 = 0x00000000;
				iLocal_979 = 0x00000001;
			}
		}
		func_97();
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000007)
		{
			if ((unk_0xC844350D5D58C99A(iLocal_802[iVar0]) && !unk_0xEB6A8945D1AC98A1(iLocal_802[iVar0])) && unk_0xC844350D5D58C99A(iLocal_800))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_802[iVar0], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 2500f)
				{
					unk_0xFADC0A217229F6B5(iLocal_802[iVar0], 0x00000001);
					unk_0xF3268524E9BE6D6E(iLocal_802[iVar0], unk_0x16F2683693E537C9(), 300f, 0x00004E20, 0x00000001, 0x00000000);
					unk_0x6DAD7906B73F064D(&(iLocal_802[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1004 < 0x00000008 && iLocal_969 >= 0x00000000)
		{
			func_95();
		}
		switch (iLocal_969)
		{
			case 0xFFFFFFFF:
				iVar1 = 0x00000000;
				while (iVar1 < iLocal_802)
				{
					if (unk_0xC844350D5D58C99A(iLocal_802[iVar1]))
					{
						if (unk_0xC844350D5D58C99A(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))
						{
							iVar2 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
							if ((unk_0xDF1306B443CD3D15(iVar2, 0x00000000) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iVar2, 0x00000001)) < 30f) && unk_0x4906F8A34E9F4814(iVar2, 0x73920F8E))
							{
								unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_803);
								unk_0x0E2400AB9174FA81(0x00000005, iLocal_803, 0x6F0783F5);
								unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
								unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_94())
				{
					unk_0x8B4C4CA774181102(15f, 15f, 0x00000004);
					unk_0xC92DB9682A650680("AHP1_START");
					iLocal_969++;
				}
				break;
			
			case 0x00000000:
				if (!unk_0xC844350D5D58C99A(iLocal_800))
				{
					func_94();
					if ((unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()) && unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0x00000000)) && unk_0x134B62B726CEC8E6(unk_0x728870EB733D12A1()) == 0x73920F8E)
					{
						iLocal_800 = unk_0x728870EB733D12A1();
						unk_0x73270B3C9CC833FD(iLocal_800, 0x00000001, 0x00000001);
					}
				}
				else
				{
					func_45();
					if (!iLocal_975 && unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000))
					{
						func_44(iLocal_800, 0xFFFFFFFF);
						func_43(iLocal_800, 0xFFFFFFFF);
						func_42(0x0000021D, 0x00000000);
						iLocal_975 = 0x00000001;
					}
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_971) < SYSTEM::POW(100f, 2f))
					{
						unk_0x5C2EBB66AD2EA5FF(0x00000001);
					}
					func_94();
					if (bLocal_980)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000) && unk_0xDF1306B443CD3D15(iLocal_801, 0x00000000))
						{
							func_36(iLocal_801);
							if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_801) && unk_0x5A91F08DF773C39D(iLocal_800, vLocal_971, Global_13, 0x00000001, 0x00000001, 0x00000000))
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_798))
								{
									unk_0x142CC44DB769B57E(&iLocal_798);
								}
								unk_0x8B4C4CA774181102(5f, 15f, 0x00000004);
								iLocal_969++;
							}
						}
					}
					else if (unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000))
					{
						func_36(iLocal_800);
						if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_800) && unk_0x5A91F08DF773C39D(iLocal_800, vLocal_971, Global_13, 0x00000001, 0x00000001, 0x00000000))
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_798))
							{
								unk_0x142CC44DB769B57E(&iLocal_798);
							}
							unk_0x8B4C4CA774181102(5f, 15f, 0x00000004);
							iLocal_969++;
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
				{
					unk_0x8B4C4CA774181102(5f, 10f, 0x00000004);
					iLocal_969 = 0x00000064;
				}
				if (!unk_0xC844350D5D58C99A(iLocal_800))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000))
				{
					if ((SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_800, 0x00000001)) > 22500f && unk_0x03068588A1FCED1A(iLocal_800)) || SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_800, 0x00000001)) > 90000f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
			
			case 0x00000001:
				if (unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000))
				{
					if (func_12(iLocal_800, 0x41280000, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!iLocal_978)
						{
							func_11("AHP_GETOUT", 0x00001D4C, 0x00000001);
							iLocal_978 = 0x00000001;
						}
						unk_0xC92DB9682A650680("AHP1_STOP");
						unk_0x8B4C4CA774181102(10f, 10f, 0x00000004);
						iLocal_969++;
					}
				}
				break;
			
			case 0x00000002:
				if (unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000))
				{
					if (!unk_0x5A91F08DF773C39D(iLocal_800, vLocal_971, Global_13 + Vector(2f, 2f, 2f), 0x00000001, 0x00000001, 0x00000000))
					{
						iLocal_969 = 0x00000000;
					}
					else if (bLocal_980)
					{
						if (unk_0xC844350D5D58C99A(iLocal_801))
						{
							if (!unk_0x50B5F6F3C29E9380(iLocal_801, iLocal_800))
							{
								unk_0x9A8BCD43DBDDCDCA(iLocal_800, 0x00000000, 0x00000000);
								if (unk_0xB9F5AD0599FD42F7(iLocal_800))
								{
									unk_0xAA280AF45BCCCF21(iLocal_800, 0x00000000);
								}
								unk_0x71EDC33E5A423750(iLocal_800, 0x00000002);
								unk_0x790015DC92C918E2();
								SYSTEM::SETTIMERA(0x00000000);
								iLocal_969++;
							}
							else
							{
								unk_0xA1D5A8611E9DC1DD(iLocal_801, iLocal_800);
							}
						}
					}
					else if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_800, 0x00000000))
					{
						if (unk_0xB9F5AD0599FD42F7(iLocal_800))
						{
							unk_0xAA280AF45BCCCF21(iLocal_800, 0x00000000);
						}
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						unk_0x71EDC33E5A423750(iLocal_800, 0x00000002);
						unk_0x790015DC92C918E2();
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_969++;
					}
				}
				break;
			
			case 0x00000003:
				if (unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000))
				{
					if (SYSTEM::TIMERA() > 0x00000BB8)
					{
						unk_0x8B4C4CA774181102(5f, 5f, 0x00000004);
						func_6();
					}
				}
				break;
			
			case 0x00000064:
				if (unk_0xE4EDC4B0E92C078B(iLocal_798))
				{
					unk_0x142CC44DB769B57E(&iLocal_798);
				}
				if (!func_5(0x0000000D))
				{
					func_4(0x0000000D, 0x00000001);
				}
				iLocal_969++;
				break;
			
			case 0x00000065:
				func_94();
				if (bLocal_980)
				{
					func_36(iLocal_801);
				}
				else
				{
					func_36(iLocal_800);
				}
				if (!iLocal_981)
				{
					if ((unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_800, 0x00000000)) || (unk_0xDF1306B443CD3D15(iLocal_801, 0x00000000) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_801, 0x00000000)))
					{
						if ((unk_0x0A72D28CE8A2CB55(unk_0x16F2683693E537C9(), "DAVIS") && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 5f) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
						{
							if (func_3())
							{
								unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_981 = 0x00000001;
						}
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_800))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
					{
						unk_0x790015DC92C918E2();
						iLocal_969 = 0x00000000;
					}
					else if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_800))
					{
						if (!iLocal_977)
						{
							func_11("AHP_LOSECOPS", 0x00001D4C, 0x00000001);
							iLocal_977 = 0x00000001;
							iLocal_970 = unk_0x1C0640BA9A7327B3();
						}
					}
					else if ((iLocal_977 && (unk_0x1C0640BA9A7327B3() - iLocal_970) < 0x00001D4C) && unk_0xD17F06053799A7CA())
					{
						unk_0x790015DC92C918E2();
					}
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_800, 0x00000001)) > 22500f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
		}
		if (unk_0xC844350D5D58C99A(iLocal_800))
		{
			if (!func_2(iLocal_800))
			{
				func_1(iLocal_800, 0x00000000);
			}
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(int iParam0, int iParam1)
{
	Global_181B8.f_16[iParam1] = iParam0;
}

int func_2(int iParam0)
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

int func_3()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_3A[iParam0] = iParam1;
}

int func_5(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_6()
{
	unk_0x5413873D3F67BF93(0x00000000, 0x00000000);
	func_7(0x00000000, 0x00000000);
	func_107();
}

void func_7(bool bParam0, int iParam1)
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
		if ((func_10(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_9(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_10(0x00000000))
	{
		iVar0 = func_8();
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

int func_8()
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

int func_9(int iParam0)
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

bool func_10(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_11(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_13(iParam0);
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

void func_13(int iParam0)
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

void func_14(char* sParam0)
{
	int iVar0;
	
	unk_0x5413873D3F67BF93(0x00000000, 0x00000000);
	func_20(sParam0);
	while (!func_19())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (unk_0xC844350D5D58C99A(iLocal_800))
	{
		if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_800, 0x00000000))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_800);
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_802)
	{
		if (unk_0xC844350D5D58C99A(iLocal_802[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_802[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_17409.f_9)
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(Global_17409.f_9[iVar0]));
		}
		iVar0++;
	}
	unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 100f, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
	unk_0xC92DB9682A650680("AHP1_FAIL");
	if (func_18())
	{
		func_111();
	}
	else if (func_17())
	{
		func_15(229.1676f, -1614.979f, 28.2892f, 142.5156f);
	}
	func_107();
}

void func_15(vector3 vParam0, float fParam1)
{
	if (func_16(Global_12C3E, 0f, 0f, 0f, 0x00000000))
	{
		Global_12C3E = { vParam0 };
		Global_12C41 = fParam1;
	}
}

bool func_16(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_17()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 226.6765f, -1668.942f, 25.46082f, 185.6446f, -1635.836f, 39.29184f, 57.75f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_18()
{
	if (Global_181B8 == 0x00000007)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_19()
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

void func_20(char* sParam0)
{
	func_35(sParam0);
	func_21(0x00000000);
}

void func_21(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_10(0x00000000))
	{
		iVar0 = func_8();
		if (!func_22(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_27();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_26(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_23(&(Global_1B416.f_936.f_21B), iVar1);
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

void func_23(var uParam0, int iParam1)
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
			if (!func_25(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_24(&(uParam0->f_8F8[iVar0]));
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

void func_24(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_25(int iParam0, var uParam1, float fParam2)
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
			return func_25(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_25(0x00000008, uParam1, fParam2);
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

void func_26(int iParam0, bool bParam1)
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

void func_27()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_28())
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
			switch (func_28())
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

int func_28()
{
	func_29();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_29()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_33(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_32(unk_0x16F2683693E537C9());
			if (func_31(iVar0) && (!func_30(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_31(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_30(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_34(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_35(char* sParam0)
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

void func_36(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
		{
			if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_799))
					{
						unk_0x142CC44DB769B57E(&iLocal_799);
					}
				}
				else if (!unk_0xE4EDC4B0E92C078B(iLocal_799))
				{
					iLocal_799 = func_40(iParam0, 0x00000000, 0x00000000);
				}
			}
		}
		else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_799))
			{
				unk_0x142CC44DB769B57E(&iLocal_799);
			}
			if (!unk_0xE4EDC4B0E92C078B(iLocal_798))
			{
				unk_0x790015DC92C918E2();
				if (!iLocal_973)
				{
					func_39("AHP_DROPOFF", 0x00001D4C, 0x00000001);
					iLocal_973 = 0x00000001;
				}
				iLocal_798 = func_37(vLocal_971, 0x00000001);
				unk_0x8B4C4CA774181102(3f, 2f, 0x00000003);
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_798))
			{
				unk_0x142CC44DB769B57E(&iLocal_798);
			}
			if (!unk_0xE4EDC4B0E92C078B(iLocal_799))
			{
				unk_0x790015DC92C918E2();
				if (!iLocal_972)
				{
					func_39("AHP_GETBAKIN", 0x00001D4C, 0x00000001);
					iLocal_972 = 0x00000001;
				}
				iLocal_799 = func_40(iParam0, 0x00000000, 0x00000000);
			}
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_799))
		{
			unk_0x142CC44DB769B57E(&iLocal_799);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_798))
		{
			unk_0x142CC44DB769B57E(&iLocal_798);
		}
	}
}

int func_37(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_38(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_38(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000000);
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_38(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_38(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_38(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_42(int iParam0, bool bParam1)
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

void func_43(int iParam0, int iParam1)
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

void func_44(int iParam0, int iParam1)
{
	Global_F053 = iParam0;
	Global_F054 = iParam1;
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_980)
	{
		iVar0 = iLocal_801;
	}
	else
	{
		iVar0 = iLocal_800;
	}
	if (!unk_0x991B1F0980C62628())
	{
		switch (iLocal_982)
		{
			case 0x00000000:
				if ((unk_0xDF1306B443CD3D15(iVar0, 0x00000000) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x00000003)
					{
						iVar2 = func_92(iVar1);
						if ((!unk_0xEB6A8945D1AC98A1(iVar2) && unk_0xC42A92762C58E1B9(iVar2, iVar0, 0x00000000)) && unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == iVar2)
						{
							if (!func_91(iVar2) && func_90(iVar2, 0x00000000))
							{
								if (func_89(iVar2, 0x00000000))
								{
									iLocal_1003 = 0x00000000;
									iLocal_983 = iVar1;
									iLocal_982 = 0x00000001;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 0x00000001:
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					if ((((unk_0xEB6A8945D1AC98A1(func_92(iLocal_983)) || unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != func_92(iLocal_983)) || !unk_0xC42A92762C58E1B9(func_92(iLocal_983), iVar0, 0x00000000)) || !func_91(func_92(iLocal_983))) || !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
					{
						func_88(func_92(iLocal_983));
						iLocal_982 = 0x00000000;
					}
					else
					{
						switch (iLocal_1003)
						{
							case 0x00000000:
								iLocal_1003 = 0x00000002;
								break;
							
							case 0x00000001:
								if (unk_0xD1B4D22E0BA9B0C8(Local_986, Local_986.f_1, Local_988, Local_988.f_1))
								{
									iLocal_1003++;
								}
								break;
							
							case 0x00000002:
								unk_0xE9362E4D600DD12A(func_92(iLocal_983), iVar0, vLocal_971, 15f, 0x00000000, 0x73920F8E, 0x000C0034, 5f, 5f);
								if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), vLocal_971) > 250f)
								{
									unk_0x07FBA474CBC0C266(iVar0, SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_800, 0x00000001), vLocal_971));
								}
								iLocal_1003++;
								break;
							
							case 0x00000003:
								if (unk_0x3D1053F9EB43B7AD(iVar0, 697.6884f, -1013.364f, 27.4968f, 688.3482f, -1013.179f, 22.32968f, 29.25f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), vLocal_984) < SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), vLocal_985))
									{
										if (bLocal_980)
										{
											unk_0xE9362E4D600DD12A(func_92(iLocal_983), iVar0, vLocal_985, 5f, 0x00000000, unk_0x134B62B726CEC8E6(iVar0), 0x00040000, 2f, 2f);
										}
										else
										{
											unk_0x27F3789FF35EEDF1(func_92(iLocal_983), iVar0, vLocal_971, 180f, 0x00000001, 15f, 0x00000000);
										}
									}
									else if (bLocal_980)
									{
										unk_0xE9362E4D600DD12A(func_92(iLocal_983), iVar0, vLocal_984, 5f, 0x00000000, unk_0x134B62B726CEC8E6(iVar0), 0x00040000, 2f, 2f);
									}
									else
									{
										unk_0x27F3789FF35EEDF1(func_92(iLocal_983), iVar0, vLocal_971, 0f, 0x00000001, 15f, 0x00000000);
									}
									iLocal_1003++;
								}
								break;
							
							case 0x00000004:
								break;
							}
						}
				}
				func_46();
				break;
		}
	}
	else if (iLocal_982 != 0x00000000)
	{
		if (func_88(func_92(iLocal_983)))
		{
			iLocal_982 = 0x00000000;
		}
	}
}

void func_46()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(func_92(iLocal_983)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
	{
		if ((((unk_0xC844350D5D58C99A(iLocal_800) && unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_800, 0x00000000)) && unk_0xC42A92762C58E1B9(func_92(iLocal_983), iLocal_800, 0x00000000)) || (((unk_0xC844350D5D58C99A(iLocal_801) && unk_0xDF1306B443CD3D15(iLocal_801, 0x00000000)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_801, 0x00000000)) && unk_0xC42A92762C58E1B9(func_92(iLocal_983), iLocal_801, 0x00000000)))
		{
			bVar0 = 0x00000001;
		}
	}
	switch (iLocal_990)
	{
		case 0x00000000:
			iVar1 = func_85();
			if (func_71(0x00000000, 0x00000001, 0x00000091, 0x00000000, iVar1, &cLocal_991, &cLocal_995, 0x00000001))
			{
				func_70(&uLocal_804, 0x00000000);
				func_70(&uLocal_804, 0x00000001);
				func_70(&uLocal_804, 0x00000002);
				if (func_28() == 0x00000001)
				{
					func_69(&uLocal_804, 0x00000000, func_92(0x00000000), "MICHAEL", 0x00000000, 0x00000001);
					func_69(&uLocal_804, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
				}
				else
				{
					func_69(&uLocal_804, 0x00000001, func_92(0x00000001), "FRANKLIN", 0x00000000, 0x00000001);
					func_69(&uLocal_804, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
				}
				if (!iLocal_1000)
				{
					iLocal_1002 = unk_0x1C0640BA9A7327B3();
				}
				iLocal_990 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_1002) > 0x00001388 || iLocal_1000)
				{
					if (func_68(&uLocal_804, &cLocal_991, &cLocal_995, 0x00000008, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_1000 = 0x00000001;
						iLocal_990 = 0x00000002;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!bLocal_999)
			{
				if (!bVar0)
				{
					cLocal_1001 = { func_67() };
					func_66();
					bLocal_999 = 0x00000001;
				}
			}
			else if (bVar0)
			{
				if (func_50(&uLocal_804, &cLocal_991, &cLocal_995, &cLocal_1001, 0x00000008, 0x00000000, 0x00000000))
				{
					bLocal_999 = 0x00000000;
				}
			}
			if (unk_0x991B1F0980C62628() || (!bLocal_999 && !func_49()))
			{
				func_47();
				iLocal_990 = 0x00000003;
				iLocal_1002 = unk_0x1C0640BA9A7327B3();
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_1002) > 0x00002710)
			{
				iLocal_990 = 0x00000000;
			}
			break;
	}
}

void func_47()
{
	Global_4CD7 = 0x00000000;
	func_48();
}

void func_48()
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

int func_49()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_50(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_65(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_51(sParam2, iParam4, 0x00000000);
}

int func_51(char* sParam0, int iParam1, bool bParam2)
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
					func_64();
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
		if (func_63(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_62();
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
				func_61();
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
				if (func_60())
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
			if (func_59())
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
			func_58();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_57();
		func_52();
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
		func_64();
	}
	return 0x00000000;
}

void func_52()
{
	if (!func_53())
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

int func_53()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_56())
	{
		return 0x00000000;
	}
	if (func_54(unk_0xD803B885F5E47A62()))
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

bool func_54(int iParam0)
{
	return func_55(iParam0, 0x00000014);
}

bool func_55(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_56()
{
	return 0xFFFFFFFF;
}

void func_57()
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

void func_58()
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

int func_59()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_60()
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

void func_61()
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
		Global_4C1E = func_28();
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

void func_62()
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

bool func_63(int iParam0, int iParam1)
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

void func_64()
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

void func_65(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_66()
{
	Global_4CD7 = 0x00000000;
	func_64();
}

struct<6> func_67()
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

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_65(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_51(sParam2, iParam3, 0x00000000);
}

void func_69(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_70(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	iVar2 = func_82(iParam2);
	if ((iVar0 == 0x00000007 || iVar1 == 0x00000007) || (iVar2 == 0x00000007 && iParam2 != 0x00000091))
	{
		return 0x00000000;
	}
	if (iVar2 == 0x00000007)
	{
		iVar5 = func_81(iVar0, iVar1);
		if (iVar5 >= 0x00000009)
		{
			return 0x00000000;
		}
		if (((iParam0 == 0x00000001 && iParam1 == 0x00000013) && func_5(0x00000089)) && iParam3 == 0x00000001)
		{
			if (func_80(&(Global_1B416.f_46B2.f_184), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_75(&(Global_1B416.f_46B2.f_184), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (func_80(&(Global_1B416.f_46B2.f_AF[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_75(&(Global_1B416.f_46B2.f_AF[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar6 = func_74(iVar0, iVar1, iVar2);
		if (iVar6 >= 0x00000002)
		{
			return 0x00000000;
		}
		if (func_80(&(Global_1B416.f_46B2.f_15B[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_75(&(Global_1B416.f_46B2.f_15B[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	*sParam6 = { func_72(iVar0, iVar1, iVar2, 0x00000002) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0x00000000)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 0x00000001)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 0x00000002)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 0x00000003)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 0x00000004)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 0x00000005)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 0x00000006)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 0x00000007)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 0x00000008)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 0x00000009)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 0x0000000A)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 0x0000000B)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0x00000000;
	}
	if (iParam3 == 0x00000000)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 0x00000001)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 0x00000002)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0x00000000;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 0x00000001;
}

struct<4> func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0x00000000)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
	}
	else if (iParam3 == 0x00000001)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
	}
	else if (iParam3 == 0x00000002)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar1 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar1;
		}
		if (iParam1 < iParam0)
		{
			iVar2 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar2;
		}
		if (iParam2 < iParam1)
		{
			iVar3 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar3;
		}
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
		if (iParam2 != 0x00000007)
		{
			StringConCat(&Var0, func_73(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_73(iParam0), 16);
		StringConCat(&Var0, func_73(iParam1), 16);
		if (iParam2 != 0x00000007)
		{
			StringConCat(&Var0, func_73(iParam2), 16);
		}
	}
	return Var0;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "M";
			break;
		
		case 0x00000001:
			return "F";
			break;
		
		case 0x00000002:
			return "T";
			break;
		
		case 0x00000003:
			return "L";
			break;
		
		case 0x00000004:
			return "J";
			break;
		
		case 0x00000005:
			return "A";
			break;
	}
	return "X";
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 0x00000003;
	}
	if (((iParam0 == 0x00000001 || iParam1 == 0x00000001) || iParam2 == 0x00000001) && ((iParam0 == 0x00000002 || iParam1 == 0x00000002) || iParam2 == 0x00000002))
	{
		if ((iParam0 == 0x00000000 || iParam1 == 0x00000000) || iParam2 == 0x00000000)
		{
			return 0x00000000;
		}
		if ((iParam0 == 0x00000003 || iParam1 == 0x00000003) || iParam2 == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000003;
}

void func_75(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0x00000000;
	iVar6 = 0x00000000;
	func_79((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_78((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_77((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0x00000000)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 0x00000001)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 0x00000002)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_76(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_76(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0x00000000;
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 & 0x0000000F, 0x0000001C));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam2 & 0x0000000F, 0x00000018));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3 & 0x0000000F, 0x00000014));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam4 & 0x0000000F, 0x00000010));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam5 & 0x0000000F, 0x0000000C));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam6 & 0x0000000F, 0x00000008));
	*uParam0 = (*uParam0 || iParam7 & 0x000000FF);
}

void func_77(var uParam0, int iParam1)
{
	*iParam1 = uParam0 & 0x000000FF;
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 0x00000010) & 0x0000000F;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000C) & 0x0000000F;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 0x00000008) & 0x0000000F;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001C) & 0x0000000F;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 0x00000018) & 0x0000000F;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000000F;
}

int func_80(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = 0x00000000;
	while (*iParam2 < 0x00000006)
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000000;
		iVar2 = 0x00000000;
		iVar3 = 0x00000000;
		iVar4 = 0x00000000;
		iVar5 = 0x00000000;
		iVar6 = 0x00000000;
		func_77((*uParam0)[*iParam2], &iVar6);
		if (unk_0xEAE0D21A50E6C7F4(iParam4, iVar6))
		{
			func_79((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_78((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0x00000000)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 0x00000001;
				}
			}
			else if (iParam1 == 0x00000001)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 0x00000001;
				}
			}
			else if (iParam1 == 0x00000002)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 0x00000001;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0x00000000;
	*uParam3 = 0x00000000;
	return 0x00000000;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0x00000000 && iParam0 != 0x00000001) && iParam0 != 0x00000002)
	{
		if ((iParam1 == 0x00000000 || iParam1 == 0x00000001) || iParam1 == 0x00000002)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000000;
					break;
				
				case 0x00000002:
					return 0x00000002;
					break;
				
				case 0x00000003:
					return 0x0000000A;
					break;
				
				case 0x00000004:
					return 0x00000005;
					break;
				
				case 0x00000005:
					return 0x00000008;
					break;
				
				default:
					return 0x0000000A;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000000A;
					break;
				
				case 0x00000002:
					return 0x00000001;
					break;
				
				case 0x00000003:
					return 0x00000003;
					break;
				
				case 0x00000004:
					return 0x00000006;
					break;
				
				case 0x00000005:
					return 0x0000000A;
					break;
				
				default:
					return 0x0000000A;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000002;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000002:
					return 0x0000000A;
					break;
				
				case 0x00000003:
					return 0x00000004;
					break;
				
				case 0x00000004:
					return 0x00000007;
					break;
				
				case 0x00000005:
					return 0x0000000A;
					break;
				
				default:
					return 0x0000000A;
					break;
			}
			break;
	}
	return 0x0000000A;
}

int func_82(int iParam0)
{
	if (iParam0 == 0x00000091)
	{
		return 0x00000007;
	}
	if (iParam0 < func_84())
	{
		return func_83(iParam0);
	}
	if (iParam0 == 0x00000090)
	{
		return 0x00000007;
	}
	if (iParam0 == func_84())
	{
		return 0x00000006;
	}
	if (iParam0 == 0x000000A8)
	{
		return 0x00000006;
	}
	return 0x00000006;
}

var func_83(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_B;
}

int func_84()
{
	if (Global_7830 == 0x00000000 || Global_7830 == 0x00000002)
	{
		return 0x000000A7;
	}
	return 0x000000A1;
}

int func_85()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	if (Local_49.f_6D == 0x00000000)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	}
	if (func_5(0x00000080))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
		if (!func_87(0x00000018))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000015);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	}
	if (func_5(0x00000083))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000005);
	}
	if (func_5(0x00000089))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000009);
	}
	else if (func_5(0x0000007E))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000007);
	}
	if (func_5(0x00000089))
	{
		if (!func_5(0x00000087) && !func_5(0x00000088))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000A);
		}
		if (func_5(0x00000087))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000B);
		}
		else
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000D);
		}
		if (func_5(0x00000088))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000C);
		}
		else
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000E);
		}
	}
	if (!func_87(0x00000014))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x0000000F);
	}
	if (!func_87(0x0000002E))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000010);
	}
	if (func_5(0x00000081) && !unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000009))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000011);
	}
	if (func_87(0x00000028) && !func_87(0x0000002B))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000012);
	}
	if (func_87(0x0000002B) && !func_87(0x0000002A))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000013);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_86(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000014);
		}
	}
	return iVar0;
}

int func_86(struct<2> Param0, float fParam1)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_87(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

int func_88(int iParam0)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_17186, iVar0))
		{
			return 0x00000000;
		}
		unk_0x0674E58A79778E99(&Global_17186, iVar0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_17186, iVar0))
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
			unk_0xDAB3108F02A4255A(iParam0, 0x00000000, 0x00000000);
			unk_0xE8832A9E16A57A1F(iParam0, 0x00000000, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_17186, iVar0);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_92(iVar0) != iParam0)
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

int func_91(int iParam0)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_32(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_92(iVar0) != iParam0)
		{
			return 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_17186, iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_92(int iParam0)
{
	if (iParam0 > 0x00000003)
	{
		return 0x00000000;
	}
	if (iParam0 == func_28())
	{
		return unk_0x16F2683693E537C9();
	}
	return Global_177DE[func_93(iParam0)];
}

int func_93(int iParam0)
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

int func_94()
{
	if (((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) != iLocal_800) && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) != iLocal_801)
	{
		if (unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x73920F8E))
		{
			iLocal_800 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			unk_0x73270B3C9CC833FD(iLocal_800, 0x00000001, 0x00000001);
			iLocal_975 = 0x00000000;
			return 0x00000001;
		}
		if (unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("towtruck")) || unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("towtruck2")))
		{
			if (unk_0xC844350D5D58C99A(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))), 0x00000000))
				{
					iLocal_801 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					unk_0x73270B3C9CC833FD(iLocal_801, 0x00000001, 0x00000001);
					if (unk_0x96A5FE5834B81CE7(unk_0xC102CE429C03E382(iLocal_801)) != iLocal_800)
					{
						iLocal_800 = unk_0x96A5FE5834B81CE7(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)));
						iLocal_975 = 0x00000000;
						unk_0x73270B3C9CC833FD(iLocal_800, 0x00000001, 0x00000001);
					}
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_95()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	if (iLocal_1004 < 0x00000008)
	{
		if (iLocal_1004 < 0x00000004)
		{
			if (unk_0xC844350D5D58C99A(Global_17409.f_9[iLocal_1004]))
			{
				if (!unk_0xEB6A8945D1AC98A1(Global_17409.f_9[iLocal_1004]))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Global_17409.f_9[iLocal_1004], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 900f)
					{
						unk_0x73270B3C9CC833FD(Global_17409.f_9[iLocal_1004], 0x00000001, 0x00000001);
						iLocal_802[iLocal_1004] = Global_17409.f_9[iLocal_1004];
						bVar0 = 0x00000001;
						Global_17409.f_9[iLocal_1004] = 0x00000000;
					}
					else if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Global_17409.f_9[iLocal_1004], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 2500f && unk_0x03068588A1FCED1A(Global_17409.f_9[iLocal_1004]))
					{
						unk_0x73270B3C9CC833FD(Global_17409.f_9[iLocal_1004], 0x00000001, 0x00000001);
						unk_0xEBA53F35D0085654(&(Global_17409.f_9[iLocal_1004]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (unk_0xE51E576EA6B739AC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 30f, 0x00000001, 0x00000001, &iVar1, 0x00000000, 0x00000001, 0x00000015))
			{
				if ((unk_0xC844350D5D58C99A(iVar1) && !unk_0xEB6A8945D1AC98A1(iVar1)) && !func_96(iVar1, &iLocal_802))
				{
					unk_0x73270B3C9CC833FD(iVar1, 0x00000001, 0x00000001);
					iLocal_802[iLocal_1004] = iVar1;
					bVar0 = 0x00000001;
				}
			}
		}
		if (bVar0)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_802[iLocal_1004]))
			{
				unk_0x6DF7BF67E86AAE86(iLocal_802[iLocal_1004], iLocal_803);
				unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0xAFF39FB306F8E232(iLocal_802[iLocal_1004], 0x00000011, 0x00000000);
				unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
			}
			iLocal_1004++;
		}
	}
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 < *iParam1)
		{
			if (unk_0xC844350D5D58C99A((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_97()
{
	if (bLocal_980)
	{
		if (((!unk_0xDF1306B443CD3D15(iLocal_801, 0x00000000) || (unk_0xDF1306B443CD3D15(iLocal_801, 0x00000000) && !unk_0x50B5F6F3C29E9380(iLocal_800, iLocal_801))) || (unk_0xDF1306B443CD3D15(iLocal_800, 0x00000000) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_800, 0x00000000))) || (unk_0xC844350D5D58C99A(iLocal_801) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_801, 0x00000001)) > 250f))
		{
			bLocal_980 = 0x00000000;
		}
	}
	else if ((unk_0xDF1306B443CD3D15(iLocal_801, 0x00000000) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_801, 0x00000000)) && unk_0x50B5F6F3C29E9380(iLocal_800, iLocal_801))
	{
		bLocal_980 = 0x00000001;
	}
}

void func_98(int iParam0)
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

void func_99()
{
	vector3 vVar0;
	int iVar1;
	
	if ((unk_0xC844350D5D58C99A(Global_17409[0x00000000]) && unk_0xDF1306B443CD3D15(Global_17409[0x00000000], 0x00000000)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_17409[0x00000000], 0x00000000))
	{
		unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000001, 0x00000001);
		iLocal_800 = Global_17409[0x00000000];
		Global_17409[0x00000000] = 0x00000000;
	}
	if ((unk_0xC844350D5D58C99A(Global_17409[0x00000001]) && unk_0xDF1306B443CD3D15(Global_17409[0x00000001], 0x00000000)) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_17409[0x00000001], 0x00000000))
	{
		if (unk_0xC844350D5D58C99A(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))) && unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))), 0x00000000))
		{
			unk_0x73270B3C9CC833FD(Global_17409[0x00000001], 0x00000001, 0x00000001);
			iLocal_801 = Global_17409[0x00000001];
			Global_17409[0x00000001] = 0x00000000;
			unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000001, 0x00000001);
			iLocal_800 = Global_17409[0x00000000];
			Global_17409[0x00000000] = 0x00000000;
			bLocal_980 = 0x00000001;
		}
	}
	unk_0xD7992BEF7A9D109E("AHPREP1", 0x00000000);
	while (!unk_0x67C1D9E5B91B2E37(0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	unk_0xF63400DBE3303D26("FireMen", &iLocal_803);
	unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_803);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_803, 0x6F0783F5);
	if (func_10(0x00000000))
	{
		unk_0x523BCC9DC80CD82F(joaat("s_m_y_fireman_01"));
		while (!unk_0xB87F6CF6E5628C67(joaat("s_m_y_fireman_01")))
		{
			SYSTEM::WAIT(0x00000000);
		}
		vVar0 = { 202.0504f, -1655.773f, 28.8031f };
		iLocal_1005 = unk_0x7D6CA5F52B3748BF(vVar0 - Vector(10f, 30f, 30f), vVar0 + Vector(10f, 30f, 30f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		unk_0x536F1BE96C726C4B(vVar0, 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		iLocal_802[0x00000000] = unk_0x36F2404464202779(0x00000015, joaat("s_m_y_fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, 0x00000001, 0x00000001);
		iLocal_802[0x00000001] = unk_0x36F2404464202779(0x00000015, joaat("s_m_y_fireman_01"), 214.4446f, -1643.72f, 28.7776f, 279.1055f, 0x00000001, 0x00000001);
		iLocal_802[0x00000002] = unk_0x36F2404464202779(0x00000015, joaat("s_m_y_fireman_01"), 217.0826f, -1644.117f, 28.7155f, 72.8262f, 0x00000001, 0x00000001);
		iVar1 = 0x00000000;
		while (iVar1 <= (iLocal_802 - 0x00000001))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_802[iVar1]))
			{
				unk_0x509B8296EBA9B408(iLocal_802[iVar1], "WORLD_HUMAN_HANG_OUT_STREET", 0x00000000, 0x00000000);
				unk_0xAFF39FB306F8E232(iLocal_802[iVar1], 0x00000011, 0x00000000);
				unk_0x6DF7BF67E86AAE86(iLocal_802[iVar1], iLocal_803);
			}
			iVar1++;
		}
		unk_0x0E2400AB9174FA81(0x000000FF, 0x6F0783F5, iLocal_803);
		unk_0x0E2400AB9174FA81(0x000000FF, iLocal_803, 0x6F0783F5);
		iLocal_969 = 0xFFFFFFFF;
		if (func_106())
		{
			func_105(354.3055f, -1722.206f, 28.259f, 109.6154f, 0x00000001, 0x00000000);
			func_102(0x00000000, 0xFFFFFFFF, 0x00000001);
		}
	}
	if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
	{
		unk_0x82E51BCA72537B6C(0x000001F4);
	}
	if (func_17())
	{
		iLocal_976 = 0x00000001;
	}
	if (!func_10(0x00000000))
	{
		unk_0xC92DB9682A650680("AHP1_START");
	}
	iLocal_975 = 0x00000000;
	func_100(0x00000044);
}

void func_100(int iParam0)
{
	Global_17187 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000048:
			func_101(0x00000002);
			func_101(0x00000004);
			break;
		
		case 0x00000049:
			func_101(0x00000000);
			func_101(0x00000001);
			func_101(0x00000007);
			break;
		
		case 0x0000005C:
			func_101(0x0000000A);
			func_101(0x00000009);
			func_101(0x0000000D);
			func_101(0x00000006);
			break;
		
		case 0x00000044:
			func_101(0x0000000B);
			break;
		
		case 0x0000004E:
			func_101(0x0000000E);
			break;
		
		case 0x0000004F:
			func_101(0x00000003);
			break;
		
		default:
			break;
	}
}

void func_101(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_17187, iParam0);
}

void func_102(int iParam0, int iParam1, int iParam2)
{
	if (func_106() && func_104())
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
		func_103(0x00000000);
	}
}

void func_103(int iParam0)
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

bool func_104()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_105(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_106())
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
		func_103(0x00000001);
	}
}

int func_106()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_107()
{
	func_108();
	if (unk_0xC844350D5D58C99A(iLocal_800))
	{
		unk_0x046C362CF15F1935(&iLocal_800);
	}
	unk_0x2952D66A502EA873(iLocal_1005, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_108()
{
	Global_17187 = 0x00000000;
}

void func_109()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_10(0x00000000))
	{
		if (!func_110())
		{
			iVar0 = func_8();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_22(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_27();
		}
	}
}

int func_110()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_111()
{
	if (iLocal_976 == 0x00000001)
	{
		func_15(354.3055f, -1722.206f, 28.259f, 109.6154f);
	}
}

