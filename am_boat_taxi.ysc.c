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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	struct<22> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	vector3 vLocal_64[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 12;
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
	var uLocal_771 = 1065353216;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	vector3 vLocal_774 = { 0f, 0f, 0f };
	float fLocal_775 = 0f;
	var uLocal_776 = 16;
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
	bool bLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	int iLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	float fLocal_947 = 0f;
	float fLocal_948 = 0f;
	float fLocal_949 = 0f;
	float fLocal_950 = 0f;
	struct<21> Local_951 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_944 = 0x00003A98;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_153(ScriptParam_951))
		{
			func_148();
		}
	}
	while (0x00000001)
	{
		func_147();
		if (func_136())
		{
			func_148();
		}
		if (unk_0x09BE1E6DF7B80B43() != bLocal_941)
		{
			func_148();
		}
		switch (func_135(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_134() == 0x00000001)
				{
					func_133();
					func_132();
					vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 0x00000001;
				}
				else if (func_134() == 0x00000004)
				{
					vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				break;
			
			case 0x00000001:
				func_100();
				if (func_134() == 0x00000001)
				{
					func_74();
				}
				else if (func_134() == 0x00000004)
				{
					vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				if (func_72(Local_63.f_2))
				{
					if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001), 200f, 200f, 200f, 0x00000000, 0x00000001, 0x00000000))
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
					}
				}
				break;
			
			case 0x00000003:
				func_71(&(Local_63.f_12));
				if (func_70(&(Local_63.f_12)))
				{
					vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
				}
				break;
			
			case 0x00000002:
				vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
			
			case 0x00000004:
				func_148();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_134())
			{
				case 0x00000000:
					if (func_68(&(Local_63.f_10), 0x00002710, 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63, 0x0000000C))
						{
							Local_63.f_4 = unk_0xD803B885F5E47A62();
							Local_63.f_5 = func_67();
							Local_63.f_A = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) + Vector(0f, 5f, 0f) };
							Local_63.f_7 = { func_65(Local_63.f_5) };
							unk_0x5D96D8530B3D0904(&Local_63, 0x0000000C);
						}
						if (func_38())
						{
							func_133();
							Local_63.f_1 = 0x00000001;
						}
					}
					func_34();
					break;
				
				case 0x00000001:
					func_33();
					func_32();
					func_30();
					func_34();
					if (func_1())
					{
						Local_63.f_1 = 0x00000004;
					}
					break;
				
				case 0x00000004:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_2()
{
	var uVar0;
	var uVar1;
	
	if (func_29())
	{
		if (Local_63.f_15 >= 0x00000000 || Local_63.f_15 <= 0x00000003)
		{
			func_6(func_23(0x00000009), 0x00000007, 0x00000003, 0x00000001);
		}
		return 0x00000001;
	}
	if (Local_63.f_15 >= 0x00000000 || Local_63.f_15 <= 0x00000003)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
		{
			if (!func_72(Local_63.f_2))
			{
				if (unk_0x39DDAA68EF6A6BF4(Local_63.f_2, &uVar0) == unk_0xD803B885F5E47A62())
				{
					func_5(0x00000001, 0x000927C0);
				}
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_3))
		{
			if (func_4(Local_63.f_3))
			{
				if (unk_0x39DDAA68EF6A6BF4(Local_63.f_3, &uVar1) == unk_0xD803B885F5E47A62())
				{
					func_5(0x00000001, 0x000927C0);
				}
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
		if (!func_3(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_3(int iParam0, bool bParam1, bool bParam2)
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

int func_4(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

void func_5(int iParam0, int iParam1)
{
	if (Global_2537E2.f_F33[iParam0] < iParam1)
	{
		Global_2537E2.f_F33[iParam0] = iParam1;
	}
	unk_0x5D96D8530B3D0904(&(Global_2537E2.f_F32), iParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_22(iParam1), 16);
	StringCopy(&Var1, func_21(iParam2), 32);
	switch (iParam1)
	{
		case 0x00000000:
			iVar2 = 0x4CBAC3AA;
			break;
		
		case 0x00000001:
			iVar2 = 0x29358006;
			break;
		
		case 0x00000002:
			iVar2 = 0x5841CC24;
			break;
		
		case 0x00000003:
			iVar2 = 0x5A26EAEF;
			break;
		
		case 0x00000004:
			iVar2 = 0x2183C4D7;
			break;
		
		case 0x00000005:
			iVar2 = 0xF6C6F8D3;
			break;
		
		case 0x00000006:
			iVar2 = 0xAEC77375;
			break;
		
		case 0x00000007:
			iVar2 = 0x267CBC1B;
			break;
		
		case 0x00000008:
			iVar2 = 0x2DC5587F;
			break;
		
		case 0x00000009:
			iVar2 = 0x8A91E076;
			break;
		
		case 0x0000000A:
			iVar2 = 0x2AD8ED30;
			break;
		
		case 0x0000000B:
			iVar2 = 0x8B70731D;
			break;
		
		case 0x0000000C:
			iVar2 = 0x3530C574;
			break;
		
		case 0x0000000D:
			iVar2 = 0xAAF2EA7A;
			break;
		
		case 0x0000000E:
			iVar2 = 0xD8630BC3;
			break;
		
		case 0x0000000F:
			iVar2 = 0x6F225978;
			break;
		
		case 0x00000010:
			iVar2 = 0x0CD9EBA6;
			break;
		
		case 0x00000011:
			iVar2 = 0xBE60A029;
			break;
	}
	if (func_20())
	{
		func_7(iVar2, iParam0, &iVar3, bParam3, bParam3, 0x00000000);
		Global_411012[iVar3 /*85*/].f_E.f_28 = { Var0 };
		Global_411012[iVar3 /*85*/].f_E.f_2C = { Var1 };
	}
	else
	{
		unk_0x70C6C7E43DEB92C4(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_7(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_20())
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
				func_8(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_8(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_8(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_8(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_20())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_14(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_9(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_20())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_11(var uParam0)
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
	func_12(&(uParam0->f_E));
	func_12(&(uParam0->f_E.f_D));
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

void func_12(var uParam0)
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

int func_13(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_14(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_20())
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
				func_16(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_16(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_18(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_17();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_17()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_18(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_19()
{
	return Global_1407E9;
}

int func_20()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "NOTREACHTARGET";
			break;
		
		case 0x00000001:
			return "TARGET_ESCAPE";
			break;
		
		case 0x00000002:
			return "DELIVERY_FAIL";
			break;
		
		case 0x00000003:
			return "NOT_USED";
			break;
		
		case 0x00000004:
			return "TEAM_QUIT";
			break;
		
		case 0x00000005:
			return "SERVER_ERROR";
			break;
		
		case 0x00000006:
			return "RECEIVE_LJ_L";
			break;
		
		case 0x00000008:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "BACKUP_VAGOS";
		
		case 0x00000001:
			return "BACKUP_LOST";
		
		case 0x00000002:
			return "BACKUP_FAMILIES";
		
		case 0x00000003:
			return "HIRE_MUGGER";
		
		case 0x00000004:
			return "HIRE_MERCENARY";
		
		case 0x00000005:
			return "BUY_CARDROPOFF";
		
		case 0x00000006:
			return "HELI_PICKUP";
		
		case 0x00000007:
			return "BOAT_PICKUP";
		
		case 0x00000008:
			return "CLEAR_WANTED";
		
		case 0x00000009:
			return "HEAD_2_HEAD";
		
		case 0x0000000A:
			return "CHALLENGE";
		
		case 0x0000000B:
			return "SHARE_LAST_JOB";
		
		case 0x0000000D:
			return "REFUNDAPPEA";
		
		case 0x0000000E:
			return "AMMO_DROP_REF";
		
		case 0x0000000F:
			return "ORBITAL_MANUAL";
		
		case 0x00000010:
			return "ORBITAL_AUTO";
		
		case 0x00000011:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

int func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_28(iParam0) >= 0x00000000)
	{
		iVar0 = func_28(iParam0);
	}
	else
	{
		iVar0 = func_24(iParam0);
	}
	return iVar0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x000003E8;
			break;
		
		case 0x0000000A:
			return 0x00001388;
			break;
		
		case 0x0000000B:
			return 0x00001F40;
			break;
		
		case 0x00000008:
			return 0x000003E8;
			break;
		
		case 0x00000000:
			return 0x000001F4;
			break;
		
		case 0x00000009:
			return 0x000000FA;
			break;
		
		case 0x0000000D:
			return 0x000003E8;
			break;
		
		case 0x0000000C:
			return 0x00001D4C;
			break;
		
		case 0x00000002:
			return 0x000003E8;
			break;
		
		case 0x0000000E:
			return 0x000001F4;
			break;
		
		case 0x00000014:
			if (func_25())
			{
				return 0x00000000;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000001)
			{
				return 0x000000C8;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000002)
			{
				return 0x00000190;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000003)
			{
				return 0x00000258;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000004)
			{
				return 0x00000320;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000005)
			{
				return 0x000003E8;
			}
			break;
		
		case 0x00000006:
			return 0x000001F4;
			break;
		
		case 0x00000016:
			return 0x000000C8;
			break;
		
		case 0x00000017:
			return 0x00000190;
			break;
		
		case 0x00000018:
			return 0x000002BC;
			break;
		
		case 0x00000019:
			return 0x00000064;
			break;
		
		case 0x0000001A:
			return 0x000003E8;
			break;
		
		case 0x00000039:
			return 0x000002BC;
			break;
		
		case 0x00000023:
			return 0x00001388;
			break;
		
		case 0x0000000F:
			return 0x00000000;
			break;
		
		case 0x00000011:
			return 0x00000000;
			break;
		
		case 0x00000012:
			return 0x00000000;
			break;
		
		case 0x00000013:
			return 0x00000000;
			break;
		
		case 0x00000015:
			return 0x00000000;
			break;
		
		case 0x00000024:
			return 0x00000000;
			break;
		
		case 0x00000027:
			return 0x000000C8;
			break;
		
		case 0x00000028:
			return 0x000003E8;
		
		case 0x00000029:
			return 0x000002EE;
		
		case 0x0000002A:
			return 0x00000000;
	}
	return 0x00000000;
}

bool func_25()
{
	return unk_0xEAE0D21A50E6C7F4(func_26(0x00001918, 0xFFFFFFFF, 0x00000000), 0x00000013);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_27(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_19();
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

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_40001.f_19F5;
			break;
		
		case 0x0000000A:
			return Global_40001.f_1016;
			break;
		
		case 0x0000000B:
			return Global_40001.f_1017;
			break;
		
		case 0x00000008:
			return Global_40001.f_1014;
			break;
		
		case 0x00000000:
			return Global_40001.f_1006;
			break;
		
		case 0x00000009:
			return Global_40001.f_1015;
			break;
		
		case 0x0000000D:
			return Global_40001.f_1019;
			break;
		
		case 0x0000000C:
			return Global_40001.f_1018;
			break;
		
		case 0x00000002:
			return Global_40001.f_1010;
			break;
		
		case 0x0000000E:
			return Global_40001.f_101A;
			break;
		
		case 0x00000014:
			if (func_25())
			{
				return 0x00000000;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000001)
			{
				return Global_40001.f_19FC;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000002)
			{
				return Global_40001.f_19FD;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000003)
			{
				return Global_40001.f_19FE;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000004)
			{
				return Global_40001.f_19FF;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000005)
			{
				return Global_40001.f_1A00;
			}
			break;
		
		case 0x00000006:
			return Global_40001.f_1013;
			break;
		
		case 0x00000016:
			return Global_40001.f_1020;
			break;
		
		case 0x00000017:
			return Global_40001.f_1021;
			break;
		
		case 0x00000018:
			return Global_40001.f_1022;
			break;
		
		case 0x00000019:
			return Global_40001.f_1023;
			break;
		
		case 0x0000001A:
			return Global_40001.f_1024;
			break;
		
		case 0x00000023:
			return Global_40001.f_1C35;
			break;
		
		case 0x0000000F:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000011:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000012:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000013:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000015:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000024:
			return Global_40001.f_1E08;
			break;
		
		case 0x00000027:
			return 0xFFFFFFFF;
			break;
		
		case 0x00000028:
			return Global_40001.f_3254;
			break;
		
		case 0x00000029:
			return Global_40001.f_3255;
			break;
		
		case 0x0000002A:
			return Global_40001.f_3256;
			break;
		
		case 0x0000002B:
			return Global_40001.f_3C45;
			break;
		
		case 0x0000002C:
			return Global_40001.f_3C47;
			break;
		
		case 0x00000039:
			return Global_40001.f_1022;
			break;
		
		case 0x0000003A:
			return Global_40001.f_61A6;
			break;
		
		case 0x0000003E:
			return Global_40001.f_61A7;
			break;
		
		case 0x0000003F:
			return Global_40001.f_6F29;
			break;
		
		case 0x00000040:
			return Global_40001.f_19F6;
			break;
	}
	return 0x00000000;
}

bool func_29()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

void func_30()
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	if (Local_63.f_14 != 0x00000007)
	{
		if (func_4(Local_63.f_3) || !func_72(Local_63.f_2))
		{
			Local_63.f_14 = 0x00000007;
		}
		else if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_63.f_3), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000))
		{
			Local_63.f_14 = 0x00000007;
		}
	}
	if (!func_4(Local_63.f_3) && func_72(Local_63.f_2))
	{
		if (Local_63.f_14 != 0x00000001)
		{
			if (unk_0x7F6DC62EA9922664(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0x00000258 || unk_0x7F6DC62EA9922664(unk_0x1B50683925F00106(Local_63.f_3)) <= 0x00000096)
			{
				Local_63.f_14 = 0x00000001;
			}
		}
		switch (Local_63.f_14)
		{
			case 0x00000002:
				if (Local_63.f_15 == 0x00000003)
				{
					Local_63.f_14 = 0x00000004;
				}
				else if (Local_63.f_15 == 0x00000005)
				{
					Local_63.f_14 = 0x00000007;
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_63, 0x00000007) && unk_0x12DE711B1C681E9E(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_63.f_14 = 0x00000003;
				}
				break;
			
			case 0x00000004:
				unk_0x5D96D8530B3D0904(&iLocal_65, 0x00000008);
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0x00000000)
				{
					Local_63.f_14 = 0x00000003;
					unk_0x0674E58A79778E99(&iLocal_65, 0x00000008);
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_63, 0x00000007) && unk_0x5A91F08DF773C39D(unk_0x1B50683925F00106(Local_63.f_3), Local_63.f_7, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_63.f_14 = 0x00000005;
				}
				break;
			
			case 0x00000005:
				if ((unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0x00000000 && !unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2))) && func_31(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001) >= 10f)
				{
					Local_63.f_14 = 0x00000006;
				}
				break;
			
			case 0x00000003:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) >= 0x00000001)
				{
					Local_63.f_14 = 0x00000004;
				}
				break;
			
			case 0x00000006:
				if ((unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0x00000000 && !unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2))) && func_31(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001) >= 10f)
				{
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0x0E763797) == 0x00000001)
					{
						Local_63.f_14 = 0x00000007;
					}
				}
				break;
			
			case 0x00000001:
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0x0E763797) == 0x00000001 && func_31(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(Local_63.f_3), 0x00000001) >= 10f)
				{
					Local_63.f_14 = 0x00000007;
				}
				break;
			
			case 0x00000007:
				break;
			}
	}
}

float func_31(int iParam0, int iParam1, bool bParam2)
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

void func_32()
{
	switch (Local_63.f_15)
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(Local_63, 0x00000008) || unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) > 0x00000000)
			{
				Local_63.f_15 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) > 0x00000000)
				{
					Local_63.f_15 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) > 0x00000000)
			{
				Local_63.f_15 = 0x00000003;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_63, 0x0000000A))
			{
				Local_63.f_15 = 0x00000004;
			}
			break;
		
		case 0x00000003:
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0x00000000)
				{
					Local_63.f_15 = 0x00000001;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_63, 0x0000000A))
				{
					Local_63.f_15 = 0x00000004;
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if ((unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0x00000000 && !unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2))) && func_31(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001) >= 10f)
				{
					Local_63.f_15 = 0x00000005;
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
}

void func_33()
{
	int iVar0;
	int iVar1;
	
	unk_0x0674E58A79778E99(&Local_63, 0x00000009);
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (func_3(iVar1, 0x00000001, 0x00000001))
			{
				if (func_72(Local_63.f_2))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_63, 0x00000008))
					{
						if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_A, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&Local_63, 0x00000008);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_63, 0x00000007) || unk_0xEAE0D21A50E6C7F4(Local_63, 0x0000000B))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63, 0x0000000A))
						{
							if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_7, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0x00000000, 0x00000001, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&Local_63, 0x0000000A);
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_63, 0x00000009))
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_64[iVar0 /*3*/].f_1, 0x00000006))
						{
							unk_0x5D96D8530B3D0904(&Local_63, 0x00000009);
							unk_0x0674E58A79778E99(&(vLocal_64[iVar0 /*3*/].f_1), 0x00000006);
						}
					}
					if (Local_63.f_14 != 0x00000003)
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_64[iVar0 /*3*/].f_1, 0x00000005))
						{
							Local_63.f_14 = 0x00000003;
							unk_0x0674E58A79778E99(&(vLocal_64[iVar0 /*3*/].f_1), 0x00000005);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_34()
{
	vector3 vVar0;
	var uVar1;
	
	if ((Local_63.f_15 <= 0x00000002 || Local_63.f_14 == 0x00000002) || Local_63.f_14 == 0x00000003)
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		if ((!unk_0xEB69695E080217B5(vVar0, &uVar1) || func_36()) || func_35())
		{
			Local_63.f_1 = 0x00000004;
		}
	}
}

int func_35()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2631.833f, 4526.624f, -10f, -380.1435f, 3906.702f, 78.484f, 1200f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1731.902f, -123.8468f, 137.2596f, 2079.203f, 798.3421f, 249.3267f, 600f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 252.5025f, 855.094f, 148.1213f, -393.3539f, 695.785f, 272.1867f, 500f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000015)
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_37(iVar0), 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 709.8127f, 6699.78f, 0f;
		
		case 0x00000001:
			return 1551.805f, 6686.052f, 0f;
		
		case 0x00000002:
			return 3260.507f, 5309.454f, 0f;
		
		case 0x00000003:
			return 3788.334f, 3812.693f, 0f;
		
		case 0x00000004:
			return 2945.665f, 1773.192f, 0f;
		
		case 0x00000005:
			return 2866.816f, -658.5848f, 0f;
		
		case 0x00000006:
			return 2342.881f, -2167.953f, 0f;
		
		case 0x00000007:
			return 1215.167f, -2728.054f, 0f;
		
		case 0x00000008:
			return 1305.229f, -3364.572f, 0f;
		
		case 0x00000009:
			return 293.8953f, -3361.616f, 0f;
		
		case 0x0000000A:
			return -484.948f, -2940.643f, 0f;
		
		case 0x0000000B:
			return -1387.61f, -1704.374f, 0f;
		
		case 0x0000000C:
			return -1566.04f, -1312.232f, 0f;
		
		case 0x0000000D:
			return -1920.23f, -849.6466f, 0f;
		
		case 0x0000000E:
			return -2876.76f, -74.3269f, 0f;
		
		case 0x0000000F:
			return -3133.45f, 604.7179f, 0f;
		
		case 0x00000010:
			return -3286.57f, 1285.372f, 0f;
		
		case 0x00000011:
			return -3205.53f, 3285.199f, 0f;
		
		case 0x00000012:
			return -2520.42f, 4240.671f, 0f;
		
		case 0x00000013:
			return -909.632f, 5830.909f, 0f;
		
		case 0x00000014:
			return -325.109f, 6584.622f, 0f;
		
		default:
	}
	return -673.5316f, 6175.048f, 0f;
}

int func_38()
{
	if (unk_0x2358623ECCDB11B3(0x00000001, 0x00000001, 0x00000000, 0x00000000))
	{
		if (func_64(joaat("dinghy2")) && func_64(joaat("s_m_y_blackops_01")))
		{
			if (func_41() && func_39())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_39()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_63.f_3) && func_64(joaat("s_m_y_blackops_01"))) && unk_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		if (func_72(Local_63.f_2))
		{
			if (func_40(&(Local_63.f_3), Local_63.f_2, 0x00000016, joaat("s_m_y_blackops_01"), 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 0x00000000, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 0x00000002, 0x00000001, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 0x00000003, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 0x00000004, 0x00000000, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 0x00000008, 0x00000001, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000000)
				{
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_63.f_3), Global_180858);
				}
				else
				{
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_63.f_3), Global_18071B[0x00000002 /*94*/][0x00000002 /*31*/][0x00000002 /*10*/][0x00000002 /*3*/][0x00000000]);
				}
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_63.f_3), 0x00000001);
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_63.f_3), 0x00000001);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_63.f_3), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
				unk_0x5507FCD92D15E617(unk_0x1B50683925F00106(Local_63.f_3), 0x00000000);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_3), 0x000000FF, 0x00000001);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_63.f_3))
	{
		return 0x00000000;
	}
	unk_0x71199B01895C6202(joaat("s_m_y_blackops_01"));
	return 0x00000001;
}

int func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_41()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		if (func_64(joaat("dinghy2")))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 0x0000000A))
			{
				func_61(&vLocal_774, &fLocal_775);
				if (unk_0xA267CBB20C26B1B9(vLocal_774 + Vector(2f, 0f, 0f), vLocal_774 - Vector(10f, 0f, 0f), &vLocal_774))
				{
					if (func_45(vLocal_774, 6f, 1f, 1f, 5f, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
					{
						vVar2 = { vLocal_774 + Vector(12f, 0f, 0f) };
						iLocal_772 = unk_0xA50E81FC2F15181B(vVar2, 10f, 10f, 25f, 0f, 0f, -1f, 0x00000002, 0x00000001, 0x00000000, 0x00000004);
						if (iLocal_772 == 0x00000000)
						{
							return 0x00000000;
						}
						else
						{
							unk_0x5D96D8530B3D0904(&iLocal_65, 0x0000000A);
						}
					}
				}
			}
			else if (unk_0x1EC301670B54C6DE(iLocal_772, &iLocal_773, &uVar0, &uVar0, &uVar1) == 0x00000002)
			{
				iLocal_772 = 0x00000000;
				if (iLocal_773 == 0x00000000)
				{
					if (func_42(&(Local_63.f_2), joaat("dinghy2"), vLocal_774, fLocal_775, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x79E38224B223335B(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001);
						unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001, 0x00000001, 0x00000000);
						unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_63.f_2), 12f);
						unk_0xDC2C59BD0989562B(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001);
						unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000);
					}
				}
				else
				{
					iLocal_773 = 0x00000000;
					unk_0x0674E58A79778E99(&iLocal_65, 0x0000000A);
				}
			}
			else if (unk_0x1EC301670B54C6DE(iLocal_772, &iLocal_773, &uVar0, &uVar0, &uVar1) == 0x00000000)
			{
				iLocal_772 = 0x00000000;
				unk_0x0674E58A79778E99(&iLocal_65, 0x0000000A);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		return 0x00000000;
	}
	unk_0x71199B01895C6202(joaat("dinghy2"));
	return 0x00000001;
}

int func_42(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, iParam4, bParam12);
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
			func_43(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_43(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_44(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
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

int func_44(int iParam0, vector3 vParam1, int iParam2)
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

int func_45(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_24B2D0.f_2 = 0x00000000;
	if (fParam1 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam1))
		{
			return 0x00000000;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xEA19D5D9230DBB67(vParam0, fParam2))
		{
			return 0x00000000;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, iParam16))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam11)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (fParam12 > 0f)
	{
		if (func_54(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_46(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_46(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_3(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_50(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (func_3(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_48(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_47(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0x00000000 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x0EB28750412C3A5A(func_50(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
									{
										return 0x00000001;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam6 || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0x0EB28750412C3A5A(func_50(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_47(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_48(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_49(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_49(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_19();
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

Vector3 func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_184507[iVar0 /*876*/].f_34F) && !func_52(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_51(iParam0);
}

Vector3 func_51(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_52(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_53()
{
	return Global_2564C8.f_11;
}

int func_54(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_3(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_47(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_55(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_51(iVar1), vParam0, 0x00000001) < fParam1)
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_55(int iParam0)
{
	if (func_60(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_59(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_56(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (!iVar0 == func_57())
	{
		if (iVar0 == func_58(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_57()
{
	return 0xFFFFFFFF;
}

int func_58(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_57();
}

struct<13> func_59(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_60(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_59(iParam0) };
		Global_26594F = { func_59(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_265942))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_26594F))
			{
				unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942);
				unk_0xD9DA83C40D038174(&Global_26591F, 0x00000023, &Global_26594F);
				if (Global_2658FC == Global_26591F)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_61(var uParam0, var uParam1)
{
	*uParam0 = { func_62(Local_63.f_A, (100f / 2f), 100f, 10f) };
	*uParam1 = unk_0xE7D606C557C86100((Local_63.f_A - *uParam0), (Local_63.f_A.f_1 - uParam0->f_1));
}

Vector3 func_62(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_63(vVar0, unk_0x79833B02DBD2A244(fParam1, fParam2)) };
	vVar0.z = unk_0x79833B02DBD2A244(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_63(vector3 vParam0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_64(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

Vector3 func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000004)
			{
				fVar3 = unk_0x0EB28750412C3A5A(Local_63.f_A, func_37(iVar0), 0x00000001);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_D = { Local_63.f_A, 8000f, 0f };
			return vVar2;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000005;
			while (iVar0 <= 0x00000009)
			{
				fVar3 = unk_0x0EB28750412C3A5A(Local_63.f_A, func_37(iVar0), 0x00000001);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_D = { 5000f, Local_63.f_A.f_1, 0f };
			return vVar2;
			break;
		
		case 0x00000002:
			iVar0 = 0x0000000A;
			while (iVar0 <= 0x0000000E)
			{
				fVar3 = unk_0x0EB28750412C3A5A(Local_63.f_A, func_37(iVar0), 0x00000001);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_D = { Local_63.f_A, -5000f, 0f };
			return vVar2;
			break;
		
		case 0x00000003:
			iVar0 = 0x0000000F;
			while (iVar0 <= 0x00000014)
			{
				fVar3 = unk_0x0EB28750412C3A5A(Local_63.f_A, func_37(iVar0), 0x00000001);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_D = { -5000f, Local_63.f_A.f_1, 0f };
			return vVar2;
			break;
	}
	return -1392.428f, -1661.61f, 0f;
}

float func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 156.0512f;
		
		case 0x00000001:
			return 186.4808f;
		
		case 0x00000002:
			return 65.4787f;
		
		case 0x00000003:
			return 56.421f;
		
		case 0x00000004:
			return 76.4749f;
		
		case 0x00000005:
			return 79.1503f;
		
		case 0x00000006:
			return 24.8224f;
		
		case 0x00000007:
			return 27.7851f;
		
		case 0x00000008:
			return 32.1401f;
		
		case 0x00000009:
			return 329.6803f;
		
		case 0x0000000A:
			return 328.7837f;
		
		case 0x0000000B:
			return 283.9666f;
		
		case 0x0000000C:
			return 295.5786f;
		
		case 0x0000000D:
			return 314.4354f;
		
		case 0x0000000E:
			return 0.4088f;
		
		case 0x0000000F:
			return 287.0804f;
		
		case 0x00000010:
			return 249.5385f;
		
		case 0x00000011:
			return 270.7522f;
		
		case 0x00000012:
			return 260.8947f;
		
		case 0x00000013:
			return 248.4225f;
		
		case 0x00000014:
			return 233.6563f;
		
		default:
	}
	return 228.6098f;
}

int func_67()
{
	vector3 vVar0;
	
	vVar0 = { func_51(unk_0xD803B885F5E47A62()) };
	if (vVar0.y >= 0f && vVar0.x >= 0f)
	{
		return 0x00000000;
	}
	else if (vVar0.y < 0f && vVar0.x >= 0f)
	{
		return 0x00000001;
	}
	else if (vVar0.y < 0f && vVar0.x < 0f)
	{
		return 0x00000002;
	}
	else if (vVar0.y >= 0f && vVar0.x < 0f)
	{
		return 0x00000003;
	}
	return 0xFFFFFFFF;
}

int func_68(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_69(uParam0, bParam2, 0x00000000);
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

void func_69(var uParam0, bool bParam1, bool bParam2)
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

int func_70(var uParam0)
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

void func_71(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_69(uParam0, 0x00000000, 0x00000000);
		}
	}
}

int func_72(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_73(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_73(int iParam0)
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

void func_74()
{
	if (func_3(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (Local_63.f_15 == 0x00000005)
		{
			vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000005;
		}
		switch (vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2)
		{
			case 0x00000000:
				func_97();
				if (Local_63.f_15 > 0x00000000)
				{
					vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_72(Local_63.f_2))
				{
					func_132();
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000))
					{
						func_96();
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000003;
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x0674E58A79778E99(&(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000000);
					}
				}
				break;
			
			case 0x00000002:
				if (func_72(Local_63.f_2))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000))
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000003;
						unk_0x0674E58A79778E99(&(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000005);
						unk_0x5D96D8530B3D0904(&(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000006);
						if (Local_63.f_15 >= 0x00000004)
						{
							vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000004;
						}
					}
					else
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000003:
				if (func_72(Local_63.f_2))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000))
					{
						if (Local_63.f_15 >= 0x00000004)
						{
							vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000004;
						}
						func_95();
					}
					else
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000004:
				if (func_72(Local_63.f_2))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 0x00000003))
					{
						if (unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_63.f_2)) < 3f)
						{
							unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&iLocal_65, 0x00000003);
						}
					}
					if ((!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000) && !unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2))) && func_31(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001) >= 10f)
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000005;
					}
				}
				break;
			
			case 0x00000005:
				func_148();
				break;
		}
		func_75();
	}
}

void func_75()
{
	int iVar0;
	struct<9> Var1;
	
	if (unk_0x83D8570832F172A7(iLocal_71))
	{
		if (func_90(0x00000001, 0x00000001))
		{
			if (((vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000001 || vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000002) || vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000003) || vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000004)
			{
				iVar0 = 0x00000001;
				Var1 = { func_89() };
				func_87(&uLocal_72);
				if (vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000001)
				{
					if (func_72(Local_63.f_2))
					{
						if ((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 10f, 10f, 3f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && !func_86(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000))
						{
							func_85(unk_0xF59058FCB716F903(0x00000002, 0x00000017, 0x00000001), "BTX_ENTER", &uLocal_72, 0x00000000);
						}
					}
				}
				else
				{
					iVar0 = 0x00000000;
				}
				if (iVar0 == 0x00000001)
				{
					func_95();
					func_84(0x00000001);
					func_76(&iLocal_71, &Var1, &uLocal_72, func_83(&uLocal_72));
				}
			}
		}
	}
	else
	{
		iLocal_71 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
	}
}

void func_76(int iParam0, var uParam1, var uParam2, int iParam3)
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
		func_82(uParam2);
	}
	if (Global_141384 < 0x00000002)
	{
		func_81(0x00000001);
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
						func_80(unk_0xF59058FCB716F903(iVar1, iVar2, 0x00000001));
						if (iVar3 < 0x00000169)
						{
							func_80(unk_0xF59058FCB716F903(iVar1, iVar3, 0x00000001));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_37;
						func_80(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, 0x00000001));
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
						func_79(&(uParam2->f_1[iVar0 /*57*/].f_20));
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
					func_80(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_10)))
					{
						func_80(&(uParam2->f_1[iVar0 /*57*/].f_10));
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
						func_79(&(uParam2->f_1[iVar0 /*57*/].f_20));
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
		func_78(*iParam0, uParam1);
	}
	func_77();
}

void func_77()
{
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
}

void func_78(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0x00000000);
}

void func_79(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_80(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_81(int iParam0)
{
	Global_141384 = iParam0;
}

void func_82(var uParam0)
{
	uParam0->f_2B4 = 0x00000000;
}

int func_83(var uParam0)
{
	return uParam0->f_2B4;
}

void func_84(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_85(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_2B5 >= 0x0000000C)
	{
		return;
	}
	iVar0 = uParam2->f_2B5;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_10), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_20), sParam1, 16);
	uParam2->f_2B5++;
}

int func_86(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			if (unk_0xBBA8A868118C90ED(iParam0, (iVar0 - 0x00000001), 0x00000000))
			{
				return 0x00000000;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0xA30B8362589C124A(iParam0, (iVar0 - 0x00000001), 0x00000000);
				if (unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0x00000000;
				}
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

void func_87(var uParam0)
{
	func_88(uParam0);
	uParam0->f_2B4 = 0x00000001;
}

void func_88(var uParam0)
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

struct<9> func_89()
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

int func_90(int iParam0, int iParam1)
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (func_94())
		{
			return 0x00000000;
		}
	}
	if (func_29())
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000001)
	{
		if (func_93(0x00000000))
		{
			return 0x00000000;
		}
	}
	if (func_92(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return 0x00000000;
	}
	if (func_91())
	{
		return 0x00000000;
	}
	if (Global_E545)
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return 0x00000000;
	}
	if (Global_140817)
	{
		return 0x00000000;
	}
	if (Global_18052F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_91()
{
	return Global_14086D;
}

bool func_92(int iParam0, int iParam1)
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

int func_93(int iParam0)
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

bool func_94()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_95()
{
	Global_26E1B2.f_102 = 0x00000001;
}

void func_96()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_67))
	{
		unk_0x142CC44DB769B57E(&iLocal_67);
	}
}

void func_97()
{
	int iVar0;
	
	if (!unk_0xFEBC1E4EC9E001F0())
	{
		iVar0 = func_26(0x000004A6, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000F))
		{
			func_99("BTX_HELP1", 0xFFFFFFFF);
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000F);
			func_98(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
}

void func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_27(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_99(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_100()
{
	if (!func_4(Local_63.f_3) && func_72(Local_63.f_2))
	{
		if (unk_0x526BC32A660C89E6(Local_63.f_3) || (!unk_0x83F012E6200426DB(Local_63.f_3) && unk_0xBFF81ED3B99522C7()))
		{
			func_130();
			func_104();
			if (func_103(Local_63.f_3))
			{
				unk_0x9DD8618CA5BF832D(unk_0x1B50683925F00106(Local_63.f_3), 0x00000143, 0x00000001);
			}
			switch (Local_63.f_14)
			{
				case 0x00000000:
					break;
				
				case 0x00000002:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0xB41F1A34) != 0x00000000)
					{
						unk_0x5B54B463A4225B9F(unk_0x1B50683925F00106(Local_63.f_3), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000004, 12f, 0x000C0025, 10f, 0x0000042F);
					}
					break;
				
				case 0x00000004:
					func_102(unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000), Local_63.f_7);
					unk_0x10FEEAFF01E32639(fLocal_947, fLocal_949, fLocal_948, fLocal_950);
					if (unk_0xD1B4D22E0BA9B0C8(fLocal_947, fLocal_949, fLocal_948, fLocal_950))
					{
						if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0x0E763797) != 0x00000000)
						{
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), iLocal_70);
						}
					}
					break;
				
				case 0x00000005:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0xB41F1A34) != 0x00000000)
					{
						unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_63.f_3), unk_0xB177666FAB6F4417(Local_63.f_2), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001), 0x00000005, 5f, 0x402C00AB, 2f, 1f, 0x00000001);
					}
					break;
				
				case 0x00000003:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0xB41F1A34) != 0x00000000)
					{
						unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_63.f_3), unk_0xB177666FAB6F4417(Local_63.f_2), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000001), 0x00000005, 5f, 0x402C00AB, 2f, 1f, 0x00000001);
					}
					break;
				
				case 0x00000001:
					if (!unk_0xEAE0D21A50E6C7F4(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000007))
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000) || unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2)))
						{
							unk_0xFCCF7611216AE801(unk_0x1B50683925F00106(Local_63.f_3), 0x00000000);
							unk_0x35126F52AFE6E6CA(unk_0x1B50683925F00106(Local_63.f_3), 0x00000000);
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_3), 0x00000002, 0x00000000);
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), iLocal_68);
						}
						else
						{
							unk_0xFCCF7611216AE801(unk_0x1B50683925F00106(Local_63.f_3), 0x00000000);
							unk_0x35126F52AFE6E6CA(unk_0x1B50683925F00106(Local_63.f_3), 0x00000000);
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_3), 0x00000002, 0x00000001);
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), iLocal_69);
						}
						unk_0x5D96D8530B3D0904(&(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000007);
					}
					break;
				
				case 0x00000006:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 0x0E763797) != 0x00000000)
					{
						unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), iLocal_69);
					}
					break;
				
				case 0x00000007:
					if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
					{
						func_101(&(Local_63.f_2));
					}
					if (unk_0xE9F78D191AD5EDBA(Local_63.f_3))
					{
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_63.f_3), 0x00000001);
						func_101(&(Local_63.f_3));
					}
					break;
				}
			}
	}
}

void func_101(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

void func_102(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	if (Param0 < Param2)
	{
		fLocal_947 = (Param0 - 25f);
		fLocal_948 = (Param2 + 25f);
	}
	else if (Param0 > Param2)
	{
		fLocal_947 = (Param2 - 25f);
		fLocal_948 = (Param0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_949 = (Param0.f_1 - 25f);
		fLocal_950 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_949 = (Param2.f_1 - 25f);
		fLocal_950 = (Param0.f_1 + 25f);
	}
}

int func_103(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0x00000000;
}

void func_104()
{
	int iVar0;
	struct<2> Var1;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 0x00000004))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(Local_63.f_3), 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
		{
			func_129(&uLocal_776, 0x00000008, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0x00000000, 0x00000001);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA", 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 0x00001388, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&iLocal_65, 0x00000004);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 0x00000006))
	{
		if (Local_63.f_14 == 0x00000004)
		{
			func_129(&uLocal_776, 0x00000008, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0x00000000, 0x00000001);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA3", 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 0x00001388, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&iLocal_65, 0x00000006);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 0x00000005))
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_63.f_7, (10f * 2f), (10f * 2f), (10f * 2f), 0x00000000, 0x00000001, 0x00000000))
		{
			func_129(&uLocal_776, 0x00000008, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0x00000000, 0x00000001);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA6", 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 0x00001388, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&iLocal_65, 0x00000005);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 0x00000007))
	{
		if (Local_63.f_14 == 0x00000005)
		{
			func_129(&uLocal_776, 0x00000008, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0x00000000, 0x00000001);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA7", 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 0x00001388, 0x00000000, 0x00000002);
				unk_0x5D96D8530B3D0904(&iLocal_65, 0x00000007);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 0x00000008))
	{
		func_129(&uLocal_776, 0x00000008, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0x00000000, 0x00000001);
		if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA4", 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
		{
			unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 0x00001388, 0x00000000, 0x00000002);
			unk_0x5D96D8530B3D0904(&iLocal_65, 0x00000008);
		}
	}
	if (Local_63.f_14 == 0x00000003)
	{
		if (func_68(&uLocal_942, 0x00007530, 0x00000000))
		{
			func_129(&uLocal_776, 0x00000008, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0x00000000, 0x00000001);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA2", 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 0x00001388, 0x00000000, 0x00000002);
				func_107(&uLocal_942, 0x00000000, 0x00000000);
			}
		}
	}
	if (Local_63.f_14 == 0x00000004)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0x00000000)
		{
			if (func_68(&uLocal_945, iLocal_944, 0x00000000))
			{
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000011);
				StringCopy(&Var1, "", 16);
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, iVar0))
				{
					switch (iVar0)
					{
						case 0x00000000:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 0x00000001:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 0x00000002:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 0x00000003:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 0x00000004:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 0x00000005:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 0x00000006:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 0x00000007:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 0x00000008:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 0x00000009:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 0x0000000A:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 0x0000000B:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 0x0000000C:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 0x0000000D:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 0x0000000E:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 0x0000000F:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 0x00000010:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!unk_0xEA6BC48857E0AC4C(&Var1))
					{
						func_129(&uLocal_776, 0x00000008, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0x00000000, 0x00000001);
						if (func_108(&uLocal_776, "FMAMBAU", &Var1, 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
						{
							func_107(&uLocal_945, 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&iLocal_66, iVar0);
							unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 0x00001388, 0x00000000, 0x00000002);
							iLocal_944 = (unk_0x09AC81E49EA267F7(0x00004E20, 0x00007531) + iVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_63.f_3))
	{
		if (func_72(Local_63.f_2))
		{
			if (!unk_0x65636D4556D82155(unk_0x1B50683925F00106(Local_63.f_3)) && !unk_0x2A325BF7BC6DD316(unk_0x1B50683925F00106(Local_63.f_3)))
			{
				if (unk_0xB87D13D0C064E9D1(unk_0xB177666FAB6F4417(Local_63.f_2), unk_0x16F2683693E537C9(), 0x00000001) || unk_0xB87D13D0C064E9D1(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 0x00000001))
				{
					switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000006))
					{
						case 0x00000000:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_SHOCKED_MED", 0x00000003);
							break;
						
						case 0x00000001:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_SHOCKED_HIGH", 0x00000003);
							break;
						
						case 0x00000002:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_FRIGHTENED_MED", 0x00000003);
							break;
						
						case 0x00000003:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_FRIGHTENED_HIGH", 0x00000003);
							break;
						
						case 0x00000004:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_CURSE_MED", 0x00000003);
							break;
						
						case 0x00000005:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_CURSE_HIGH", 0x00000003);
							break;
					}
					unk_0xE910A68AA670B4AA(unk_0xB177666FAB6F4417(Local_63.f_2));
					unk_0xE910A68AA670B4AA(unk_0x1B50683925F00106(Local_63.f_3));
				}
			}
			else
			{
				unk_0xE910A68AA670B4AA(unk_0xB177666FAB6F4417(Local_63.f_2));
				unk_0xE910A68AA670B4AA(unk_0x1B50683925F00106(Local_63.f_3));
			}
		}
	}
}

void func_105(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_106(iParam2), 0x00000001);
}

int func_106(int iParam0)
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

void func_107(var uParam0, bool bParam1, bool bParam2)
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

bool func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_128(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 0x00000001;
	return func_109(sParam2, iParam3, 0x00000000);
}

int func_109(char* sParam0, int iParam1, bool bParam2)
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
					func_127();
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
		if (func_92(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_126();
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
				func_118();
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
				if (func_117())
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
			if (func_116())
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
			func_115();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_114();
		func_110();
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
		func_127();
	}
	return 0x00000000;
}

void func_110()
{
	if (!func_111())
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

int func_111()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_57())
	{
		return 0x00000000;
	}
	if (func_112(unk_0xD803B885F5E47A62()))
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

bool func_112(int iParam0)
{
	return func_113(iParam0, 0x00000014);
}

bool func_113(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_114()
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

void func_115()
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

int func_116()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_117()
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

void func_118()
{
	if (func_125(0x0000000E))
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
		Global_4C1E = func_119();
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

var func_119()
{
	func_120();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_120()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_123(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_122(unk_0x16F2683693E537C9());
			if (func_121(iVar0) && (!func_125(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_121(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_121(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_123(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_123(int iParam0)
{
	if (func_121(iParam0))
	{
		return func_124(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_124(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_125(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_126()
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

void func_127()
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

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_129(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_130()
{
	unk_0x7352ACF3368DF65F("MobileRadioInGame", 0x00000000);
	if (func_3(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2)) && !func_131(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0xFFFFFFFF))
		{
			unk_0x7352ACF3368DF65F("MobileRadioInGame", 0x00000001);
		}
	}
}

int func_131(int iParam0, int iParam1, int iParam2)
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

void func_132()
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_67))
	{
		if (func_72(Local_63.f_2))
		{
			iLocal_67 = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_63.f_2));
			unk_0xBC8E0A7390523199(iLocal_67, 0x00000164);
			unk_0xDC5B2F9D0CCE3A10(iLocal_67, "BTX_BLIP");
			unk_0xF412DD40DE84CE72(iLocal_67, 0x00000001);
			unk_0x5C75F8C0E612F520(iLocal_67, 0x00000006);
		}
	}
}

void func_133()
{
	if (func_72(Local_63.f_2))
	{
		unk_0xDD353D0E9C789D0E(&iLocal_70);
		unk_0x5B54B463A4225B9F(0x00000000, unk_0xB177666FAB6F4417(Local_63.f_2), 0x00000000, 0x00000000, Local_63.f_7, 0x00000004, 12f, 0x000C0025, 10f, 0x0000042F);
		unk_0x75ABDC5F81978924(iLocal_70);
		unk_0xDD353D0E9C789D0E(&iLocal_69);
		unk_0x132B85BCE016BCA0(0x00000000, unk_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_D, 0x00000004, 12f, 0x000C0025, 0f, 0f, 0x00000001);
		unk_0xE072601B4380E9DF(0x00000000, unk_0xB177666FAB6F4417(Local_63.f_2), 12f, 0x000C0025);
		unk_0x75ABDC5F81978924(iLocal_69);
		unk_0xDD353D0E9C789D0E(&iLocal_68);
		unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000040);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
		}
		unk_0x75ABDC5F81978924(iLocal_68);
	}
}

int func_134()
{
	return Local_63.f_1;
}

int func_135(int iParam0)
{
	return vLocal_64[iParam0 /*3*/];
}

int func_136()
{
	var uVar0;
	
	func_144(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_143())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_142())
	{
		return 0x00000001;
	}
	if (func_141(0x0000009F))
	{
		if (!func_140())
		{
			return 0x00000001;
		}
	}
	if (func_141(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_137() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_137()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_137()
{
	switch (func_139())
	{
		case 0x00000000:
			return func_138();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_138()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_139()
{
	return Global_7830;
}

bool func_140()
{
	return Global_2564C8.f_256;
}

int func_141(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_142()
{
	return Global_258C08;
}

bool func_143()
{
	return Global_2564C8.f_251;
}

void func_144(var uParam0)
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
					func_145(iVar0);
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

void func_145(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_3(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_146(iVar2, &bVar3))
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

int func_146(int iParam0, var uParam1)
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

void func_147()
{
	SYSTEM::WAIT(0x00000000);
}

void func_148()
{
	func_96();
	if (unk_0x8CD06866876216F2())
	{
		if (Local_63.f_14 == 0x00000007)
		{
			if (func_72(Local_63.f_2) && !func_4(Local_63.f_3))
			{
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), iLocal_69);
			}
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (unk_0x526BC32A660C89E6(Local_63.f_2))
				{
					func_101(&(Local_63.f_2));
				}
			}
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_3))
			{
				if (unk_0x526BC32A660C89E6(Local_63.f_3))
				{
					func_101(&(Local_63.f_3));
				}
			}
		}
	}
	func_151(func_152(0x00000001, 0x00000001), 0x00000009, func_57());
	func_150();
	unk_0xE17FDF9E3068281B(&iLocal_71);
	func_149();
}

void func_149()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_150()
{
	unk_0xF82EA857DA10E0CD(&iLocal_68);
	unk_0xF82EA857DA10E0CD(&iLocal_69);
	unk_0xF82EA857DA10E0CD(&iLocal_70);
}

void func_151(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = 0xD217E93D;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000006, iParam0);
	}
}

int func_152(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_3(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_48(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_153(struct<21> Param0)
{
	func_157(0x00000020, Param0);
	unk_0x0BEC04ECA8485A3A(0x00000001);
	unk_0x28E5F00F131890E3(0x00000001);
	func_155(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_63, 0x00000016);
	unk_0x35B62793EAE9ADDF(&vLocal_64, 0x00000061);
	if (!func_154())
	{
		return 0x00000000;
	}
	unk_0x256D93AFAE851A7A(0x00000000);
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_63.f_4 = unk_0xD803B885F5E47A62();
		Local_63.f_5 = func_67();
		Local_63.f_A = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) + Vector(0f, 5f, 0f) };
		Local_63.f_7 = { func_65(Local_63.f_5) };
	}
	unk_0x5D96D8530B3D0904(&iLocal_65, 0x00000008);
	bLocal_941 = unk_0x09BE1E6DF7B80B43();
	vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 0x00000000;
	return 0x00000001;
}

int func_154()
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
		if (func_143())
		{
			return 0x00000000;
		}
		if (func_141(0x0000009D))
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

int func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_149();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_156())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_143())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_141(0x0000009D))
				{
					if (!bParam2)
					{
						func_149();
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
					func_149();
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
				func_149();
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
			func_149();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_156()
{
	return Global_140856;
}

void func_157(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_149();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

