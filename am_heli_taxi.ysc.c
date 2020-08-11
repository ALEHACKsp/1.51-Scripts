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
	var uLocal_75 = -1;
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
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_126 = 0;
	bool bLocal_127 = 0;
	bool bLocal_128 = 0;
	var uLocal_129[5] = { 0, 0, 0, 0, 0 };
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	struct<10> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<30> Local_133 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	bool bLocal_136 = 0;
	vector3 vLocal_137[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 12;
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
	var uLocal_846 = 1065353216;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	var uLocal_853 = 16;
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
	int iLocal_1024 = 0;
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
	int iLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	bool bLocal_1044 = 0;
	int iLocal_1045 = 0;
	int iLocal_1046 = 0;
	var uLocal_1047 = 0;
	int iLocal_1048 = 0;
	int iLocal_1049 = 0;
	int iLocal_1050 = 0;
	vector3 vLocal_1051 = { 0f, 0f, 0f };
	vector3 vLocal_1052[1] = {{ 0f, 0f, 0f } };
	var uLocal_1053[1] = { 0 };
	var uLocal_1054[1] = { 0 };
	int iLocal_1055 = 0;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	struct<21> Local_1060 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_140 = 0x00000006;
	iLocal_1035 = 0x00002710;
	func_504();
	if (unk_0x8CD06866876216F2())
	{
		if (!func_500(ScriptParam_1060))
		{
			if (unk_0xBFF81ED3B99522C7())
			{
				Local_133.f_18 = 0x00000008;
			}
			func_494(0x00000001);
		}
	}
	while (0x00000001)
	{
		func_493();
		if (func_483())
		{
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					Local_133.f_18 = 0x00000008;
				}
			}
			func_494(0x00000001);
		}
		if (unk_0x09BE1E6DF7B80B43() != iLocal_847 && !unk_0xBFF81ED3B99522C7())
		{
			if (unk_0xBFF81ED3B99522C7())
			{
				Local_133.f_18 = 0x00000008;
			}
			func_494(0x00000001);
		}
		if (unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()) != Local_133.f_5)
		{
			if (unk_0xBFF81ED3B99522C7())
			{
				Local_133.f_18 = 0x00000008;
			}
			func_494(0x00000001);
		}
		unk_0x0F6D9B8ED0147392();
		iLocal_1058 = 0x00000000;
		iLocal_1059 = 0x00000000;
		switch (func_482(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_481() == 0x00000001)
				{
					func_480();
					func_479();
					vLocal_137[unk_0x57270EE11514DC67() /*3*/] = 0x00000001;
				}
				else if (func_481() == 0x00000005)
				{
					vLocal_137[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				break;
			
			case 0x00000001:
				func_459();
				if (func_481() == 0x00000001)
				{
					func_337();
				}
				else if (func_481() == 0x00000005)
				{
					vLocal_137[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_336(&(Local_133.f_19));
				if (func_335(&(Local_133.f_19)))
				{
					vLocal_137[unk_0x57270EE11514DC67() /*3*/] = 0x00000005;
				}
				break;
			
			case 0x00000002:
				vLocal_137[unk_0x57270EE11514DC67() /*3*/] = 0x00000005;
			
			case 0x00000005:
				func_494(0x00000001);
				break;
		}
		func_334();
		if (func_333())
		{
			func_322();
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_481())
			{
				case 0x00000000:
					if (func_294())
					{
						func_480();
						Local_133 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					func_274();
					func_268();
					func_158();
					if (func_150())
					{
						Local_133 = 0x00000005;
					}
					break;
				
				case 0x00000004:
					func_1();
					break;
				
				case 0x00000005:
					break;
				}
		}
	}
}

void func_1()
{
	func_144();
	if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000007))
		{
			if (!func_142(0x00000000))
			{
				if (!func_333())
				{
					func_140(0x0000000D);
					func_120(func_136(0x0000000D), 0x00000006, 0x00000002, 0x00000001);
				}
				else
				{
					func_140(0x0000002C);
					func_120(func_136(0x0000002C), 0x00000006, 0x00000002, 0x00000001);
				}
				unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000007);
				Local_133 = 0x00000005;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000005) && !unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000006))
		{
			if (func_142(0x00000000))
			{
				unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000006);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000005))
		{
			if (func_118(&uLocal_1020, 0x00001388, 0x00000000))
			{
				if (!func_333())
				{
					func_117(&uLocal_853, 0x00000003, 0x00000000, "FM_MERRYWEATHER", 0x00000000, 0x00000001);
					if (func_13(&uLocal_853, 0x00000055, "CT_AUD", "MPCT_9", 0x00000000, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000005);
					}
				}
				else
				{
					func_12(0x00000001);
					if (func_7(0x00000001))
					{
						func_117(&uLocal_853, 0x00000003, 0x00000000, "EXECPA_MALE", 0x00000000, 0x00000001);
						if (func_13(&uLocal_853, func_2(0x00000001), "EXCALAU", "EXCAL_HPROBM", 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000005);
						}
					}
					else
					{
						func_117(&uLocal_853, 0x00000002, 0x00000000, "EXECPA_FEMALE", 0x00000000, 0x00000001);
						if (func_13(&uLocal_853, func_2(0x00000001), "EXCALAU", "EXCAL_HPROBF", 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000005);
						}
					}
				}
			}
		}
	}
}

int func_2(bool bParam0)
{
	if (func_7(bParam0))
	{
		if (bParam0 && func_4())
		{
			func_3(0x00000016, Global_4C1E, 0x00000001);
			return 0x00000016;
		}
		else
		{
			return 0x0000004B;
		}
	}
	if (bParam0 && func_4())
	{
		func_3(0x00000016, Global_4C1E, 0x00000001);
		return 0x00000016;
	}
	return 0x0000004A;
}

void func_3(int iParam0, int iParam1, int iParam2)
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

int func_4()
{
	int iVar0;
	
	iVar0 = func_6(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_5()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_5()
{
	return 0xFFFFFFFF;
}

int func_6(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_5();
}

bool func_7(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_6(unk_0xD803B885F5E47A62());
		if (func_4())
		{
			if (func_11(iVar0))
			{
				return 0x00000001;
			}
			return 0x00000000;
		}
	}
	return func_8(0x00000C96, 0xFFFFFFFF, 0x00000000) != 0x00000000;
}

int func_8(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		uVar0 = Global_26E2D2[iParam0 /*3*/][func_9(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_10();
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

int func_10()
{
	return Global_1407E9;
}

bool func_11(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000001D);
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		Global_1801E4 = 0x00000001;
	}
	else
	{
		Global_1801E4 = 0x00000000;
	}
}

int func_13(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_115())
	{
		return 0x00000000;
	}
	if (func_114())
	{
		return 0x00000000;
	}
	sVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iVar2 = 0xFFFFFF9D;
	return func_14(uParam0, iParam1, sParam2, sParam3, 0x00000001, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, 0xFFFFFFFF);
}

int func_14(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_113(sParam2, sParam3);
	iVar2 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_112(iVar0, iVar1, iVar2))
	{
		return 0x00000001;
	}
	if (!func_107(iParam6))
	{
		return 0x00000000;
	}
	if (func_104(iVar0, iVar1, iVar2))
	{
		if (func_103())
		{
			return 0x00000000;
		}
		func_102();
		return func_21(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_20(iParam4))
	{
		return 0x00000000;
	}
	func_15(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0x00000000;
}

void func_15(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_14E99F.f_28.f_1 = iParam0;
	Global_14E99F.f_28.f_2 = iParam1;
	Global_14E99F.f_28.f_3 = iParam2;
	StringCopy(&(Global_14E99F.f_28.f_4), sParam3, 16);
	Global_14E99F.f_28.f_8 = iParam4;
	Global_14E99F.f_28.f_9 = iParam5;
	Global_14E99F.f_28.f_E = iParam6;
	func_16(iParam4);
	func_102();
	Global_14E99F.f_28.f_D = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x00001B58);
}

void func_16(int iParam0)
{
	if (func_19(iParam0))
	{
		func_18();
		return;
	}
	func_17();
}

void func_17()
{
	Global_14E99F.f_28.f_A = 0x00000000;
}

void func_18()
{
	Global_14E99F.f_28.f_A = 0x00000001;
}

int func_19(int iParam0)
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

bool func_20(int iParam0)
{
	return iParam0 > Global_14E99F.f_28.f_8;
}

int func_21(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_101();
	if (iParam6 == 0x00000005)
	{
		iParam6 = 0x00000000;
	}
	if (iParam5 == 0x00000008)
	{
		return func_98(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 0x00000004)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_95(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 0x00000001 || iParam5 == 0x00000007)
	{
		if (iParam6 == 0x00000002)
		{
			return func_98(uParam0, sParam3, sParam4);
		}
		return func_77(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 0x00000005)
	{
		return func_76(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000002)
	{
		return func_64(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000003)
	{
		return func_63(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000006)
	{
		return func_22(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0x00000000;
}

int func_22(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_62();
	bVar0 = 0x00000001;
	if (func_24(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_23(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_23(int iParam0)
{
	Global_14E99F.f_28.f_B = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_14E99F.f_28.f_C = 0x00000001;
}

int func_24(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_5();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_56(iVar0);
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
	sVar4 = func_55(sParam5, bParam6, &iVar3);
	uVar5 = func_53(iParam7, &iVar3);
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
		bVar12 = func_52(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_28(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_27();
	}
	func_62();
	func_26();
	func_25();
	return 0x00000001;
}

void func_25()
{
	Global_14E99F.f_39 = 0x00000000;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_26()
{
	Global_14E99F.f_28 = 0x00000003;
}

void func_27()
{
	unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000008);
}

int func_28(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_29(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
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

int func_29(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_45();
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
	if (func_44() == 0x00000000)
	{
		func_42();
		return 0x00000000;
	}
	func_41(Global_4126B5);
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
	func_45();
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
				func_40(0x00000000);
				break;
			
			case 0x00000001:
				func_40(0x00000001);
				break;
			
			case 0x00000002:
				func_40(0x00000002);
				break;
			
			case 0x00000003:
				func_40(0x00000003);
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
		func_45();
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
			if (!func_39())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_38(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_34(0x00000001);
			func_38(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_30(uParam0, sParam1);
	return 0x00000001;
}

void func_30(var uParam0, char* sParam1)
{
	if (!func_31())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0xB9A1844D, unk_0x12AB0310C2281427(sParam1), 0x00000000);
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
	if (unk_0xD803B885F5E47A62() == func_5())
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

void func_34(int iParam0)
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
		if (func_37(0x0000000E))
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
								func_36(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_35(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
								func_35(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_35(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_35(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_35(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_36(&(Global_1CC3[iVar1 /*15*/]));
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
								func_36(&(Global_1CC3[iVar1 /*15*/]));
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
								func_36(&(Global_1CC3[iVar1 /*15*/]));
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
								func_36(&(Global_1CC3[iVar1 /*15*/]));
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
								func_36(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_35(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_35(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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

void func_35(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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
		func_36(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_36(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_36(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_36(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_36(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_36(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_37(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_38(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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

bool func_39()
{
	return Global_14086D;
}

void func_40(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_41(int iParam0)
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

void func_42()
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
		if (!func_43(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
		{
			Global_4126B5 = iVar2;
		}
		iVar2++;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_18 = 0x00000001;
}

int func_43(struct<6> Param0, struct<6> Param1)
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

int func_44()
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
			if (!func_43(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
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

void func_45()
{
	if (func_37(0x0000000E))
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
		Global_4C1E = func_46();
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

var func_46()
{
	func_47();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_47()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_50(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_49(unk_0x16F2683693E537C9());
			if (func_48(iVar0) && (!func_37(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_48(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_48(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_50(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		return func_51(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_51(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_52(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_29(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
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

int func_53(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFF9D)
	{
		return 0xFFFFFF9D;
	}
	func_54(0x00000002, iParam1);
	return iParam0;
}

void func_54(int iParam0, var uParam1)
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

char* func_55(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_54(0x00000001, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = func_59(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_57(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_57(int iParam0, bool bParam1)
{
	if (!func_143(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_59(iParam0) != 0xFFFFFFFF)
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
	if (func_58(iParam0))
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

int func_58(int iParam0)
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

int func_59(int iParam0)
{
	int iVar0;
	
	if (!func_143(iParam0, 0x00000000, 0x00000001))
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
			func_60(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_60(int iParam0)
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
	func_61(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_61(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_62()
{
	Global_14E99F.f_28.f_9 = 0x00000004;
}

int func_63(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_62();
	bVar0 = 0x00000000;
	return func_24(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_64(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	return func_65(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_65(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_5();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_56(iVar0);
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
	sVar4 = func_55(sParam5, bParam6, &iVar3);
	uVar5 = func_53(iParam7, &iVar3);
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
		bVar12 = func_75(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_67(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_27();
	}
	func_66();
	func_26();
	func_25();
	return 0x00000001;
}

void func_66()
{
	Global_14E99F.f_28.f_9 = 0x00000003;
}

int func_67(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_69(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			Global_1F1E[0x00000003 /*6*/] = { func_68(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<4> func_68(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_69(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_45();
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
	if (func_74() == 0x00000000)
	{
		func_72();
		return 0x00000000;
	}
	func_71(Global_5570);
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
		func_40(0x00000000);
		func_40(0x00000002);
		func_40(0x00000001);
	}
	else
	{
		func_45();
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
					func_40(0x00000000);
					Global_1F7E = 0x00000000;
					break;
				
				case 0x00000001:
					func_40(0x00000001);
					Global_1F7E = 0x00000001;
					break;
				
				case 0x00000002:
					func_40(0x00000002);
					Global_1F7E = 0x00000002;
					break;
				
				case 0x00000003:
					func_40(0x00000003);
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
		func_45();
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
			if (!func_39())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_38(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_34(0x00000001);
			func_38(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_70(uParam0, sParam1);
	return 0x00000001;
}

void func_70(var uParam0, char* sParam1)
{
	if (!func_31())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0x629E0CB1, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

void func_71(int iParam0)
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

void func_72()
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
		if (!func_73(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 0x00000001;
}

int func_73(struct<6> Param0, struct<6> Param1)
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

int func_74()
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
			if (!func_73(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
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

int func_75(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_69(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			Global_1F1E[0x00000003 /*6*/] = { func_68(iParam0) };
			Global_1F6B = iParam0;
			StringCopy(&Global_1F6C, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_76(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	func_66();
	bVar0 = 0x00000001;
	if (func_65(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_23(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_77(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
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
		bVar0 = func_94(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	else
	{
		bVar0 = func_83(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000003))
		{
			func_82(0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000005))
		{
			func_81(0x00000001);
		}
		func_80();
		func_26();
		func_79();
		func_78();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_78()
{
	Global_26DB8C = 0x00000000;
}

void func_79()
{
	Global_14E99F.f_39 = 0x00000001;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_80()
{
	Global_14E99F.f_28.f_9 = 0x00000001;
}

void func_81(int iParam0)
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

void func_82(int iParam0)
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

int func_83(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_93(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
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
	return func_84(sParam3, iParam4, bParam7);
}

int func_84(char* sParam0, int iParam1, bool bParam2)
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
					func_92();
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
		if (func_91(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_90();
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
				func_45();
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
				if (func_89())
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
			if (func_88())
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
			func_87();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_86();
		func_85();
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
		func_92();
	}
	return 0x00000000;
}

void func_85()
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

void func_86()
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

void func_87()
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

int func_88()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_89()
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

void func_90()
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

bool func_91(int iParam0, int iParam1)
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

void func_92()
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

void func_93(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_94(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_93(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
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
	return func_84(sParam3, iParam4, bParam7);
}

int func_95(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (func_97(uParam0, iParam1, sParam2, sParam3, 0x00000009, sParam4, 0x00000000, 0x00000000, 0x00000001))
	{
		func_96();
		func_80();
		func_26();
		func_79();
		func_78();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_96()
{
	Global_553F = 0x00000000;
}

bool func_97(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_93(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
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
	return func_84(sParam3, iParam4, bParam8);
}

int func_98(var uParam0, char* sParam1, char* sParam2)
{
	if (func_100(uParam0, sParam1, sParam2, 0x0000000C, 0x00000000, 0x00000000, 0x00000000))
	{
		func_99();
		func_26();
		func_79();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_99()
{
	Global_14E99F.f_28.f_9 = 0x00000002;
}

bool func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_84(sParam2, iParam3, 0x00000000);
}

void func_101()
{
	Global_14E99F.f_37 = Global_14E99F.f_28.f_1;
	Global_14E99F.f_37.f_1 = Global_14E99F.f_28.f_A;
}

void func_102()
{
	Global_14E99F.f_28 = 0x00000001;
}

bool func_103()
{
	return Global_14E99F.f_28 == 0x00000001;
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	if (!func_105(iParam0))
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

int func_105(int iParam0)
{
	if (!func_106())
	{
		return 0x00000000;
	}
	if (!Global_14E99F.f_28.f_1 == iParam0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_106()
{
	if (Global_14E99F.f_28 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_107(int iParam0)
{
	if (func_111())
	{
		return 0x00000000;
	}
	if (func_110())
	{
		return 0x00000000;
	}
	if (func_142(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_1406D3.f_12 != 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_195C36 || func_109())
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 0x00000006))
	{
		if (func_108())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_108()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_152CC2);
}

int func_109()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_110()
{
	return Global_14E99F.f_28 == 0x00000003;
}

bool func_111()
{
	return func_88();
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	if (!func_110())
	{
		return 0x00000000;
	}
	return func_104(iParam0, iParam1, iParam2);
}

int func_113(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

bool func_114()
{
	return Global_26D039.f_1;
}

int func_115()
{
	if (Global_14EA5B.f_2)
	{
		return 0x00000001;
	}
	return func_116();
}

bool func_116()
{
	return func_111();
}

void func_117(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_118(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_119(uParam0, bParam2, 0x00000000);
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

void func_119(var uParam0, bool bParam1, bool bParam2)
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

void func_120(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_135(iParam1), 16);
	StringCopy(&Var1, func_134(iParam2), 32);
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
	if (func_133())
	{
		func_121(iVar2, iParam0, &iVar3, bParam3, bParam3, 0x00000000);
		Global_411012[iVar3 /*85*/].f_E.f_28 = { Var0 };
		Global_411012[iVar3 /*85*/].f_E.f_2C = { Var1 };
	}
	else
	{
		unk_0x70C6C7E43DEB92C4(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_121(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_133())
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
				func_122(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_122(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_122(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_122(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_122(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_133())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_10()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_129(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_128(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_123(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_123(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_124(iParam0);
	}
}

void func_124(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_133())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_127(iParam0))
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
		func_125(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_125(var uParam0)
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
	func_126(&(uParam0->f_E));
	func_126(&(uParam0->f_E.f_D));
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

void func_126(var uParam0)
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

int func_127(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_128(int iParam0, var uParam1)
{
	Global_25952B = uParam1;
	Global_25952A = iParam0;
}

int func_129(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_133())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = uParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = uParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = uParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = uParam7;
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
				func_130(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_130(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_132(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_131();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_131()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_132(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_133()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

char* func_134(int iParam0)
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

char* func_135(int iParam0)
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

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_139(iParam0) >= 0x00000000)
	{
		iVar0 = func_139(iParam0);
	}
	else
	{
		iVar0 = func_137(iParam0);
	}
	return iVar0;
}

int func_137(int iParam0)
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
			if (func_138())
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

bool func_138()
{
	return unk_0xEAE0D21A50E6C7F4(func_8(0x00001918, 0xFFFFFFFF, 0x00000000), 0x00000013);
}

int func_139(int iParam0)
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
			if (func_138())
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

void func_140(int iParam0)
{
	func_141(&(Global_2567E2.f_10D4.f_C5[iParam0 /*2*/]));
}

void func_141(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_142(int iParam0)
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

int func_143(int iParam0, bool bParam1, bool bParam2)
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

void func_144()
{
	int iVar0;
	int iVar1;
	
	if (((unk_0xC844350D5D58C99A(iLocal_1055) && !func_149(iLocal_1055)) && !func_148(Local_133.f_4)) && unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000))
	{
		if (!func_146(iLocal_1055, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000020)
			{
				iVar1 = unk_0x117658E336116132(iVar0);
				if (func_143(iVar1, 0x00000000, 0x00000001))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x9539D44F3E4492F6(iVar1), iLocal_1055, 0x00000000))
					{
						func_145(func_132(iVar1), 0x00000000, 0f, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					}
				}
				iVar0++;
			}
		}
		else if (!iLocal_1048)
		{
			if (!unk_0xAFE0D3608EDA7039(iLocal_1055))
			{
				unk_0x0C8A454B494DAA0D(iLocal_1055);
			}
			else
			{
				unk_0x71EDC33E5A423750(iLocal_1055, 0x00000002);
				iLocal_1048 = 0x00000001;
			}
		}
	}
}

void func_145(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = 0xF83B520C;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0xF4CCC8CB6DE7F1AE();
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000009, iParam0);
	}
}

int func_146(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (iParam4 || !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			iVar2 = func_147(iParam0, (iVar0 - 0x00000001), bParam6, iParam7);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar2);
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_5()) && func_143(iVar3, 0x00000001, 0x00000001)) || iParam8)
						{
							if (unk_0x179932739160BA96(unk_0x83FACCC48B68F9D1(iVar2)) == 0x00000000)
							{
								if (!bParam5)
								{
									return 0x00000000;
								}
							}
							else
							{
								return 0x00000000;
							}
						}
					}
				}
				else if (iParam1 == 0x00000000)
				{
					return 0x00000000;
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0x00000000;
				}
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_147(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xBBA8A868118C90ED(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, iParam1);
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iVar0, 0x1AE73569) == 0x00000001 || unk_0xD1960163A3042274(iVar0, 0xCE98FBB3) == 0x00000001)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000000), unk_0x68F4C0EC296D3901(iVar0, 0x00000000)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = 0xFFFFFFFF;
		}
	}
	return iVar0;
}

int func_148(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 0x00000001;
}

int func_149(int iParam0)
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

int func_150()
{
	if (func_151())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_151()
{
	var uVar0;
	var uVar1;
	
	if ((Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000002 || Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000001) || Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000003)
	{
		return 0x00000001;
	}
	if (!func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && !func_333())
	{
		return 0x00000001;
	}
	if (func_157())
	{
		if (Local_133.f_17 >= 0x00000000 || Local_133.f_17 <= 0x00000003)
		{
			if (!func_333())
			{
				func_120(func_136(0x0000000D), 0x00000006, 0x00000003, 0x00000001);
			}
			else
			{
				func_120(func_136(0x0000002C), 0x00000006, 0x00000003, 0x00000001);
			}
		}
		return 0x00000001;
	}
	if ((Local_133.f_17 >= 0x00000000 || Local_133.f_17 <= 0x00000003) && Local_133.f_17 != 0x00000004)
	{
		if (func_149(iLocal_1055))
		{
			if (unk_0xE9F78D191AD5EDBA(Local_133.f_3))
			{
				if (unk_0x39DDAA68EF6A6BF4(Local_133.f_3, &uVar0) == unk_0xD803B885F5E47A62())
				{
					if (func_156())
					{
						func_155(0x00000001, 0x000927C0);
					}
					else
					{
						Global_26B66F.f_1729 = unk_0x2B6E0A53779D29EA();
					}
				}
			}
			return 0x00000001;
		}
		else
		{
			if (func_148(Local_133.f_4))
			{
				if (unk_0xE9F78D191AD5EDBA(Local_133.f_4))
				{
					if (unk_0x39DDAA68EF6A6BF4(Local_133.f_4, &uVar1) == unk_0xD803B885F5E47A62())
					{
						if (func_156())
						{
							func_155(0x00000001, 0x000927C0);
						}
						else
						{
							Global_26B66F.f_1729 = unk_0x2B6E0A53779D29EA();
						}
					}
				}
				return 0x00000001;
			}
			else if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000))
			{
				return 0x00000001;
			}
			else if (vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 >= 0x00000001)
			{
				if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_1055, 0x00000001), func_154(), func_154(), func_154(), 0x00000000, 0x00000001, 0x00000000))
				{
					return 0x00000001;
				}
			}
			if (func_153(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				return 0x00000001;
			}
			if (func_153(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000001;
			}
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x0000000D)
			{
				return 0x00000001;
			}
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x0000000E)
			{
				return 0x00000001;
			}
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x0000000F)
			{
				return 0x00000001;
			}
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x0000000C)
			{
				return 0x00000001;
			}
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x0000000B)
			{
				return 0x00000001;
			}
			if (unk_0x09BE1E6DF7B80B43() != iLocal_847)
			{
				return 0x00000001;
			}
		}
	}
	if (Local_133.f_17 == 0x00000004)
	{
		if (unk_0xC844350D5D58C99A(iLocal_1055))
		{
			if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000 || !func_152(unk_0x9539D44F3E4492F6(Local_133.f_5), iLocal_1055, 0x00000000))
			{
				unk_0x71EDC33E5A423750(iLocal_1055, 0x00000001);
				return 0x00000001;
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_1055))
		{
			if (func_149(iLocal_1055))
			{
				unk_0x71EDC33E5A423750(iLocal_1055, 0x00000001);
				return 0x00000001;
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_1055))
		{
			if (func_148(Local_133.f_4) && !Global_258C2B.f_1A)
			{
				unk_0x71EDC33E5A423750(iLocal_1055, 0x00000001);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iParam0, iParam1, iParam2))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_153(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

float func_154()
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_333())
	{
		fVar0 = (200f + 600f);
	}
	return fVar0;
}

void func_155(int iParam0, int iParam1)
{
	if (Global_2537E2.f_F33[iParam0] < iParam1)
	{
		Global_2537E2.f_F33[iParam0] = iParam1;
	}
	unk_0x5D96D8530B3D0904(&(Global_2537E2.f_F32), iParam0);
}

int func_156()
{
	if (func_333())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_157()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

void func_158()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	if (Local_133.f_18 != 0x00000008 && Local_133.f_18 != 0x00000005)
	{
		if (func_148(Local_133.f_4) || func_149(iLocal_1055))
		{
			Local_133.f_18 = 0x00000008;
		}
		else if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000))
		{
			Local_133.f_18 = 0x00000008;
		}
	}
	if (Local_133.f_18 != 0x00000004)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000E))
		{
			unk_0x0674E58A79778E99(&(Local_133.f_1), 0x0000000E);
		}
		if (func_267(&uLocal_1027))
		{
			func_141(&uLocal_1027);
		}
		if (func_267(&uLocal_1029))
		{
			func_141(&uLocal_1029);
		}
	}
	if (Local_133.f_18 != 0x00000007)
	{
		if (func_267(&uLocal_1031))
		{
			func_141(&uLocal_1031);
		}
	}
	if (!func_148(Local_133.f_4) && !func_149(iLocal_1055))
	{
		if (Local_133.f_18 != 0x00000008)
		{
			if ((Local_133.f_17 == 0x00000000 || Local_133.f_17 == 0x00000001) || Local_133.f_17 == 0x00000002)
			{
				if (unk_0x688A90832774AB83(iLocal_1055) || unk_0x688A90832774AB83(unk_0x1B50683925F00106(Local_133.f_4)))
				{
					if ((unk_0x7F6DC62EA9922664(iLocal_1055) <= 0x000001F4 || unk_0x7F6DC62EA9922664(unk_0x1B50683925F00106(Local_133.f_4)) <= 0x00000096) || unk_0x8648E4DDD67641AD(iLocal_1055, 0x00000001, 0x00000001, 0x00000001))
					{
						Local_133.f_18 = 0x00000008;
					}
				}
			}
		}
		switch (Local_133.f_18)
		{
			case 0x00000001:
				if (Local_133.f_17 == 0x00000003)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000002))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HPgo", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_CUSTOM", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000002);
						}
					}
					func_260();
					Local_133.f_18 = 0x00000002;
				}
				else if (Local_133.f_17 == 0x00000006)
				{
					Local_133.f_18 = 0x00000008;
				}
				else if (func_259() == 0x00000000 && !func_258())
				{
					func_260();
					Local_133.f_18 = 0x00000004;
				}
				else if (unk_0x2720E241B5CCF780(iLocal_1055) > 0x00000000)
				{
					func_260();
					Local_133.f_18 = 0x00000004;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x00000009))
				{
					func_260();
					Local_133.f_18 = 0x00000002;
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000004) && func_259())
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_1055, (func_154() / 2f), (func_154() / 2f), func_154(), 0x00000000, 0x00000001, 0x00000000))
					{
						if (func_257(iLocal_1055))
						{
							if (unk_0x13A10C0B96EFD897(iLocal_1055))
							{
								if (func_118(&uLocal_1022, func_256(), 0x00000000))
								{
									iLocal_849 = 0x00000000;
									iLocal_850 = 0x00000000;
									iLocal_851 = 0x00000000;
									unk_0x0674E58A79778E99(&iLocal_138, 0x00000004);
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000012))
									{
										uLocal_1026 = unk_0x2B6E0A53779D29EA();
									}
									unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000012);
								}
							}
							else if (func_267(&uLocal_1022))
							{
								func_141(&uLocal_1022);
							}
						}
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000004))
				{
					if (func_173(&uVar1))
					{
						func_170(Local_133.f_6);
						func_169();
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000012) && Local_133.f_18 == 0x00000001)
				{
					iVar0 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), uLocal_1026));
					if (iVar0 > 0x0000EA60)
					{
						Local_133 = 0x00000004;
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000000))
				{
					if (func_263())
					{
						if (unk_0x5A91F08DF773C39D(iLocal_1055, Local_133.f_6, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HParr", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_APPR", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000000);
						}
					}
				}
				break;
			
			case 0x00000002:
				if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000)
				{
					Local_133.f_18 = 0x00000004;
				}
				else if (unk_0x5A91F08DF773C39D(unk_0x1B50683925F00106(Local_133.f_4), Local_133.f_A, 7.5f, 7.5f, 9999.9f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0xAD825C39C65C70DD();
					Local_133.f_18 = 0x00000003;
					bLocal_136 = 0x00000001;
					func_141(&uLocal_1038);
					func_141(&uLocal_1036);
					unk_0x0674E58A79778E99(&(Local_133.f_1), 0x0000000E);
				}
				else if (!unk_0xF28AD5253D9A9A6A() || func_168(0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000004) && func_263())
					{
						if (func_156())
						{
							func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
							func_262(&uLocal_853, "CT_AUD", "MPCT_HPcha", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						}
						else
						{
							func_12(0x00000001);
							func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
							func_100(&uLocal_853, "EXHELAU", "EXHEL_CHANGE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						}
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000004);
					}
					unk_0x0674E58A79778E99(&(Local_133.f_1), 0x00000009);
					unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x0000000C);
					Local_133.f_18 = 0x00000004;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000006) && func_263())
				{
					if (unk_0x5A91F08DF773C39D(unk_0x1B50683925F00106(Local_133.f_4), Local_133.f_A, (7.5f + 75f), (7.5f + 75f), ((10f * 2f) + 75f), 0x00000000, 0x00000001, 0x00000000))
					{
						if (func_156())
						{
							func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
							func_262(&uLocal_853, "CT_AUD", "MPCT_HPnear", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						}
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000006);
					}
				}
				func_164();
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0x00000000)
				{
					if (func_118(&uLocal_1033, iLocal_1035, 0x00000000))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HPfly", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_CHAT", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							iLocal_1035 = unk_0x09AC81E49EA267F7(0x00003A98, 0x00007530);
							func_141(&uLocal_1033);
						}
					}
				}
				break;
			
			case 0x00000005:
				if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000 || !func_152(unk_0x9539D44F3E4492F6(Local_133.f_5), iLocal_1055, 0x00000000))
				{
					Local_133.f_18 = 0x00000008;
					break;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000F))
				{
					unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x0000000F);
				}
				break;
			
			case 0x00000003:
				if (iLocal_848 != 0x00000003)
				{
					iLocal_848 = 0x00000003;
				}
				if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000 && !unk_0xC18DDE8EA6E48FDB(iLocal_1055))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000009))
					{
						if (func_263())
						{
							if (unk_0xC18DDE8EA6E48FDB(iLocal_1055))
							{
								if (func_156())
								{
									func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
									func_262(&uLocal_853, "CT_AUD", "MPCT_HPleav", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
								}
								else
								{
									func_12(0x00000001);
									func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
									func_100(&uLocal_853, "EXHELAU", "EXHEL_GENBYE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
								}
								unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000009);
							}
						}
					}
					Local_133.f_18 = 0x00000008;
				}
				else if (!unk_0xF28AD5253D9A9A6A() || func_168(0x00000000))
				{
					unk_0x0674E58A79778E99(&(Local_133.f_1), 0x00000009);
					unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x0000000C);
					Local_133.f_18 = 0x00000004;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000008))
				{
					if (unk_0xC18DDE8EA6E48FDB(iLocal_1055))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HPrap", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_FLIES", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000008);
						}
					}
				}
				break;
			
			case 0x00000004:
				if (bLocal_136)
				{
					if (func_263())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000005))
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HPdrop", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_ARRIVE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000005);
						}
						else if (!func_156())
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000015))
							{
								if (unk_0xEE9925602B29903C(iLocal_1055) > 10f)
								{
									func_12(0x00000001);
									func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
									func_100(&uLocal_853, "EXHELAU", "EXHEL_CANJUM", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
								}
								unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000015);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000C))
				{
					if (!unk_0xC18DDE8EA6E48FDB(iLocal_1055))
					{
						if (unk_0xF28AD5253D9A9A6A())
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000002))
							{
								if (func_263())
								{
									if (func_156())
									{
										func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
										func_262(&uLocal_853, "CT_AUD", "MPCT_HPgo", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
									}
									else
									{
										func_12(0x00000001);
										func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
										func_100(&uLocal_853, "EXHELAU", "EXHEL_GENPOS", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
									}
									unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000002);
								}
							}
							func_260();
							if (!func_163(Local_133.f_A, Local_133.f_D, 0x00000000))
							{
								Local_133.f_D = { Local_133.f_A };
								Local_133.f_18 = 0x00000002;
							}
						}
						else if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000)
						{
							Local_133.f_18 = 0x00000008;
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x00000009))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000002))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HPgo", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_CUSTOM", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000002);
						}
					}
					func_260();
					if (!func_163(Local_133.f_A, Local_133.f_D, 0x00000000))
					{
						Local_133.f_D = { Local_133.f_A };
						unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x0000000D);
						Local_133.f_18 = 0x00000002;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000D))
				{
					if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000)
					{
						Local_133.f_18 = 0x00000008;
					}
				}
				func_164();
				if (func_263())
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000001))
					{
						if (unk_0x2720E241B5CCF780(iLocal_1055) > 0x00000000)
						{
							if (func_267(&uLocal_1029))
							{
								func_141(&uLocal_1029);
							}
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HPnoW", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_WHERE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000001);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000003) && !unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000C))
						{
							if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000)
							{
								if (func_156())
								{
									func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
									func_262(&uLocal_853, "CT_AUD", "MPCT_HPex", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
								}
								unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000003);
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000010))
					{
						if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000)
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HPbail", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_GENBYE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000010);
						}
					}
				}
				if (Local_133.f_18 == 0x00000004)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000E))
					{
						if (!bLocal_136)
						{
							if (func_118(&uLocal_1027, 0x0001D4C0, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x0000000E);
							}
						}
						else if (func_118(&uLocal_1036, 0x00004E20, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x0000000E);
						}
					}
					else if (!bLocal_136)
					{
						if (func_118(&uLocal_1029, 0x0000EA60, 0x00000000))
						{
							Local_133.f_18 = 0x00000007;
						}
					}
					else if (func_118(&uLocal_1038, 0x00007530, 0x00000000))
					{
						Local_133.f_18 = 0x00000007;
					}
				}
				break;
			
			case 0x00000007:
				if (func_118(&uLocal_1031, 0x00000FA0, 0x00000000))
				{
					Local_133.f_18 = 0x00000008;
					if (func_162())
					{
						func_161();
					}
				}
				break;
			
			case 0x00000008:
				func_160(0x00000000);
				break;
		}
		func_159();
		if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x0000000A))
		{
			if (func_263())
			{
				if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
				{
					if (unk_0xB87D13D0C064E9D1(iLocal_1055, unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (func_156())
						{
							func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
							func_262(&uLocal_853, "CT_AUD", "MPCT_HPdam", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						}
						else
						{
							func_12(0x00000001);
							func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
							func_100(&uLocal_853, "EXHELAU", "EXHEL_DAMAGE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						}
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x0000000A);
					}
				}
			}
		}
		if (!func_156())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x0000001A))
			{
				if (func_263())
				{
					if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_133.f_4)) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_133.f_4)))
					{
						func_12(0x00000001);
						func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
						func_100(&uLocal_853, "EXHELAU", "EXHEL_AIM", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x0000001A);
					}
				}
			}
			else if (!unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_133.f_4)) && !unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_133.f_4)))
			{
				unk_0x0674E58A79778E99(&(Local_133.f_2), 0x0000001A);
			}
		}
	}
}

void func_159()
{
	if (!iLocal_1049)
	{
		if (Local_133.f_18 == 0x00000002)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_133.f_3))
			{
				if (unk_0x526BC32A660C89E6(Local_133.f_3))
				{
					unk_0x552A77B585309C2B(iLocal_1055, 1f);
					iLocal_1049 = 0x00000001;
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_133.f_3);
				}
			}
		}
	}
}

void func_160(bool bParam0)
{
	bLocal_1044 = bParam0;
}

void func_161()
{
	Global_12064 = 0x00000001;
}

bool func_162()
{
	return Global_12061;
}

bool func_163(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_164()
{
	if (!func_156())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000012))
		{
			if (func_263())
			{
				if (unk_0x2720E241B5CCF780(iLocal_1055) > 0x00000000)
				{
					func_12(0x00000001);
					func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
					func_100(&uLocal_853, "EXHELAU", "EXHEL_GREET", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000012);
				}
			}
		}
		else
		{
			if (func_263())
			{
				if (unk_0x2720E241B5CCF780(iLocal_1055) > 0x00000000)
				{
					if (unk_0x2720E241B5CCF780(iLocal_1055) < iLocal_852 && unk_0xEE9925602B29903C(iLocal_1055) > 10f)
					{
						func_12(0x00000001);
						func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
						func_100(&uLocal_853, "EXHELAU", "EXHEL_JUMP", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000016) && iLocal_1046)
					{
						func_12(0x00000001);
						func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
						func_100(&uLocal_853, "EXHELAU", "EXHEL_GENGRE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000016);
						unk_0x0674E58A79778E99(&(Local_133.f_2), 0x00000017);
					}
					if (!unk_0x2720E241B5CCF780(iLocal_1055) == iLocal_852)
					{
						iLocal_852 = unk_0x2720E241B5CCF780(iLocal_1055);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000017))
				{
					if (unk_0xEE9925602B29903C(iLocal_1055) > 10f)
					{
						func_12(0x00000001);
						func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
						func_100(&uLocal_853, "EXHELAU", "EXHEL_JUMP", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000017);
						unk_0x0674E58A79778E99(&(Local_133.f_2), 0x00000016);
					}
					else
					{
						func_12(0x00000001);
						func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
						func_100(&uLocal_853, "EXHELAU", "EXHEL_GENBYE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000017);
						unk_0x0674E58A79778E99(&(Local_133.f_2), 0x00000016);
					}
				}
			}
			if (!iLocal_1046)
			{
				if (unk_0x2720E241B5CCF780(iLocal_1055) == 0x00000000)
				{
					iLocal_1046 = 0x00000001;
				}
			}
		}
		if (func_263())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000014))
			{
				if (!func_149(iLocal_1055))
				{
					if (unk_0x6AD960F219099782(iLocal_1055) == 0x00000002)
					{
						func_12(0x00000001);
						func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
						func_100(&uLocal_853, "EXHELAU", "EXHEL_LOCKS", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000014);
					}
				}
			}
			else if (!func_149(iLocal_1055))
			{
				if (unk_0x6AD960F219099782(iLocal_1055) != 0x00000002)
				{
					unk_0x0674E58A79778E99(&(Local_133.f_2), 0x00000014);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000018))
		{
			if (func_263())
			{
				if (func_165(unk_0x16F2683693E537C9()) >= 0x00000005)
				{
					func_12(0x00000001);
					func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
					func_100(&uLocal_853, "EXHELAU", "EXHEL_DRINKS", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000018);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000019))
		{
			if (func_263())
			{
				if (!func_149(iLocal_1055))
				{
					if (!unk_0xBBA8A868118C90ED(iLocal_1055, 0x00000002, 0x00000000) || !unk_0xBBA8A868118C90ED(iLocal_1055, 0x00000001, 0x00000000))
					{
						func_12(0x00000001);
						func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
						func_100(&uLocal_853, "EXHELAU", "EXHEL_CHAMP", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000019);
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000013))
		{
			if (func_263())
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					func_12(0x00000001);
					func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
					func_100(&uLocal_853, "EXHELAU", "EXHEL_FIRE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000013);
				}
			}
		}
	}
}

int func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = func_167(iParam0);
	iVar1 = func_166(iVar0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return 0xFFFFFFFF;
	}
	return Global_A58F[iVar1 /*5*/].f_3;
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A58F[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_167(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
		{
			return Global_A58F[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_168(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11A, iParam0);
}

void func_169()
{
	if (!func_148(Local_133.f_4))
	{
		unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_133.f_4));
	}
}

void func_170(vector3 vParam0)
{
	Local_133.f_11 = { func_171(vParam0) };
}

Vector3 func_171(vector3 vParam0)
{
	vector3 vVar0;
	
	switch (func_172(vParam0))
	{
		case 0x00000000:
			vVar0 = { -vParam0.x, -5000f, vParam0.z };
			break;
		
		case 0x00000001:
			vVar0 = { -5000f, -vParam0.y, vParam0.z };
			break;
		
		case 0x00000002:
			vVar0 = { -vParam0.x, 8000f, vParam0.z };
			break;
		
		case 0x00000003:
			vVar0 = { 5000f, -vParam0.y, vParam0.z };
			break;
	}
	return vVar0;
}

int func_172(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 >= 0f && Param0 >= 0f)
	{
		return 0x00000000;
	}
	else if (Param0.f_1 < 0f && Param0 >= 0f)
	{
		return 0x00000001;
	}
	else if (Param0.f_1 < 0f && Param0 < 0f)
	{
		return 0x00000002;
	}
	else if (Param0.f_1 >= 0f && Param0 < 0f)
	{
		return 0x00000003;
	}
	return 0xFFFFFFFF;
}

bool func_173(var uParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	vector3 vVar5;
	
	*uParam0 = 0x00000000;
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000004) && func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 978.076f, 92.7732f, 128.175f, 912.625f, -9.85f, 108.025f, 92.775f, 0x00000000, 0x00000001, 0x00000000))
		{
			Local_133.f_6 = { 965.8965f, 42.327f, 122.1267f };
			unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000004);
			*uParam0 = 0x00000001;
		}
		else if (func_255(unk_0xD803B885F5E47A62()) && !unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000012))
		{
			Local_133.f_6 = { func_249(func_251(func_252(unk_0xD803B885F5E47A62()))) };
			unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000004);
			*uParam0 = 0x00000001;
		}
		else if (func_180(150f, &iVar2, &iVar3) && !unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000012))
		{
			func_179(iVar2, iVar3, &(Local_133.f_6), &(Local_133.f_9));
			*uParam0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000004);
		}
		else if ((func_333() && func_175(600f)) && !unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000012))
		{
			Local_133.f_6 = { vLocal_1052[0x00000000 /*3*/] };
			Local_133.f_9 = uLocal_1053[0x00000000];
			*uParam0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000004);
		}
		else if (iLocal_849 == 0x00000000)
		{
			if (iLocal_851 == 0x00000000)
			{
				Local_133.f_6 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, (15f / 2f), 1.3f) };
				unk_0xE82754C349C7B581(Local_133.f_6, &(Local_133.f_6.f_2), 0x00000000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (iLocal_851 == 0x00000001)
			{
				Local_133.f_6 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), (15f / 2f), 0f, 1.3f) };
				unk_0xE82754C349C7B581(Local_133.f_6, &(Local_133.f_6.f_2), 0x00000000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (iLocal_851 == 0x00000002)
			{
				Local_133.f_6 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), (-15f / 2f), 0f, 1.3f) };
				unk_0xE82754C349C7B581(Local_133.f_6, &(Local_133.f_6.f_2), 0x00000000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (iLocal_851 == 0x00000003)
			{
				Local_133.f_6 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, (-15f / 2f), 1.3f) };
				unk_0xE82754C349C7B581(Local_133.f_6, &(Local_133.f_6.f_2), 0x00000000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (iLocal_851 == 0x00000004)
			{
				unk_0xDE5F9F54005367A1(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), &(Local_133.f_6), 0x00000001, 0x40400000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_133.f_6, 75f, 75f, 75f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_133 = 0x00000004;
				}
			}
			else if (iLocal_851 == 0x00000005)
			{
				unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000003, &(Local_133.f_6), 0x00000001, 0x40400000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_133.f_6, 75f, 75f, 75f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_133 = 0x00000004;
				}
			}
			else if (iLocal_851 == 0x00000006)
			{
				unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000006, &(Local_133.f_6), 0x00000001, 0x40400000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_133.f_6, 75f, 75f, 75f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_133 = 0x00000004;
				}
			}
			else if (iLocal_851 == 0x00000007)
			{
				unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x0000000A, &(Local_133.f_6), 0x00000001, 0x40400000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_133.f_6, 75f, 75f, 75f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_133 = 0x00000004;
				}
			}
			else if (iLocal_851 == 0x00000008)
			{
				unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x0000000F, &(Local_133.f_6), 0x00000001, 0x40400000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_133.f_6, 75f, 75f, 75f, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_133 = 0x00000004;
				}
			}
			else if (iLocal_851 == 0x00000009)
			{
				unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000014, &(Local_133.f_6), 0x00000001, 0x40400000, 0x00000000);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (func_175(100f) && !unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000012))
			{
				Local_133.f_6 = { vLocal_1052[0x00000000 /*3*/] };
				Local_133.f_9 = uLocal_1053[0x00000000];
				*uParam0 = 0x00000001;
				unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000004);
				return 0x00000001;
			}
			else
			{
				Local_133 = 0x00000004;
			}
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_133.f_6, 75f, 75f, 5f, 0x00000000, 0x00000001, 0x00000000) || unk_0xA267CBB20C26B1B9(Local_133.f_6 + Vector(2f, 0f, 0f), Local_133.f_6 - Vector(5f, 0f, 0f), &uVar4))
			{
				iLocal_849 = 0x00000000;
				iLocal_850 = 0x00000000;
				iLocal_851++;
				return 0x00000000;
			}
			vVar5 = { Local_133.f_6 + Vector((50f / 2f), 0f, 0f) };
			iLocal_849 = unk_0xA50E81FC2F15181B(vVar5, 15f, 15f, 50f, 0f, 0f, -1f, 0x00000002, 0x00000083, unk_0x16F2683693E537C9(), 0x00000004);
			if (iLocal_849 == 0x00000000)
			{
				return 0x00000000;
			}
		}
		else if (unk_0x1EC301670B54C6DE(iLocal_849, &iLocal_850, &uVar0, &uVar0, &uVar1) == 0x00000002)
		{
			iLocal_849 = 0x00000000;
			if (iLocal_850 == 0x00000000 && !func_174(Local_133.f_6, 0x00000003, 0x00000000, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000004);
			}
			else
			{
				iLocal_850 = 0x00000000;
				iLocal_851++;
			}
		}
		else if (unk_0x1EC301670B54C6DE(iLocal_849, &iLocal_850, &uVar0, &uVar0, &uVar1) == 0x00000000)
		{
			iLocal_849 = 0x00000000;
		}
	}
	return unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000004);
}

int func_174(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
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

int func_175(float fParam0)
{
	int iVar0;
	
	func_176(func_178(unk_0xD803B885F5E47A62()), &vLocal_1052, &uLocal_1053, &uLocal_1054);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (uLocal_1054[iVar0] < fParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_176(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[1];
	var uVar3[1];
	float fVar4[1];
	int iVar5;
	
	if (SYSTEM::VDIST(vLocal_1051, vParam0) < 20f)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		fVar4[iVar0] = 1E+07f;
		iVar0++;
	}
	iVar5 = 0x00000000;
	while (iVar5 < 0x0000012B)
	{
		fVar1 = SYSTEM::VDIST(vParam0, Global_24D063[iVar5 /*3*/]);
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000001)
		{
			if (fVar1 < fVar4[iVar0])
			{
				func_177(Global_24D063[iVar5 /*3*/], Global_24D3E5[iVar5], fVar1, iVar0, &vVar2, &uVar3, &fVar4);
				iVar0 = 0x00000002;
			}
			iVar0++;
		}
		iVar5++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (SYSTEM::VMAG(vVar2[iVar0 /*3*/]) > 0f)
		{
			*(uParam1[iVar0 /*3*/]) = { vVar2[iVar0 /*3*/] };
			(*uParam2)[iVar0] = uVar3[iVar0];
			(*uParam3)[iVar0] = fVar4[iVar0];
		}
		iVar0++;
	}
	vLocal_1051 = { vParam0 };
}

void func_177(vector3 vParam0, var uParam1, float fParam2, int iParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	
	if (iParam3 < *uParam4)
	{
		vVar0 = { *(uParam4[iParam3 /*3*/]) };
		uVar1 = (*uParam5)[iParam3];
		uVar2 = (*fParam6)[iParam3];
		*(uParam4[iParam3 /*3*/]) = { vParam0 };
		(*uParam5)[iParam3] = uParam1;
		(*fParam6)[iParam3] = fParam2;
		func_177(vVar0, uVar1, uVar2, iParam3 + 1, uParam4, uParam5, fParam6);
	}
}

Vector3 func_178(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_179(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000057:
					*uParam2 = { -1691.356f, -599.7728f, 32.3863f };
					*uParam3 = 142.5853f;
					break;
				
				case 0x00000058:
					*uParam2 = { -1370.252f, -520.0326f, 29.6825f };
					*uParam3 = 125.7171f;
					break;
				
				case 0x00000059:
					*uParam2 = { -23.9063f, -566.7811f, 36.7451f };
					*uParam3 = 261.5803f;
					break;
				
				case 0x0000005A:
					*uParam2 = { -8.8891f, -801.2603f, 43.4313f };
					*uParam3 = 337.4736f;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 62.9658f, -2526.362f, 5.0021f };
					*uParam3 = 312.1262f;
					break;
				
				case 0x00000002:
					*uParam2 = { -1011.097f, -1324.951f, 4.7239f };
					*uParam3 = 82.0646f;
					break;
				
				case 0x00000003:
					*uParam2 = { 891.2814f, -1038.218f, 38.9808f };
					*uParam3 = 179.4713f;
					break;
				
				case 0x00000004:
					*uParam2 = { 238.2009f, -1979.512f, 19.9838f };
					*uParam3 = 229.0376f;
					break;
				
				case 0x00000005:
					*uParam2 = { -445.2993f, 159.6719f, 77.0803f };
					*uParam3 = 177.4463f;
					break;
				
				case 0x00000006:
					*uParam2 = { -1003.048f, -2074.005f, 11.4279f };
					*uParam3 = 312.3971f;
					break;
				
				case 0x00000007:
					*uParam2 = { -1302.906f, -790.8793f, 16.5494f };
					*uParam3 = 218.4739f;
					break;
				
				case 0x00000008:
					*uParam2 = { -839.7902f, -2694.595f, 12.8121f };
					*uParam3 = 262.2745f;
					break;
				
				case 0x00000009:
					*uParam2 = { 242.0532f, -2957.304f, 4.8795f };
					*uParam3 = 206.7359f;
					break;
				
				case 0x0000000A:
					*uParam2 = { 1519.096f, -2198.799f, 76.0507f };
					*uParam3 = 276.3806f;
					break;
				
				case 0x0000000B:
					*uParam2 = { -293.2805f, -2718.856f, 5.0003f };
					*uParam3 = 314.7322f;
					break;
				
				case 0x0000000C:
					*uParam2 = { 517.1236f, -596.8082f, 23.7995f };
					*uParam3 = 196.9468f;
					break;
				
				case 0x0000000D:
					*uParam2 = { -488.2077f, -1801.373f, 20.2465f };
					*uParam3 = 44.8509f;
					break;
				
				case 0x0000000E:
					*uParam2 = { -345.6657f, -1351.348f, 30.2847f };
					*uParam3 = 146.9459f;
					break;
				
				case 0x0000000F:
					*uParam2 = { 292.9702f, 371.4247f, 104.3915f };
					*uParam3 = 75.7126f;
					break;
				
				case 0x00000010:
					*uParam2 = { 905.4782f, -1560.715f, 29.7175f };
					*uParam3 = 290.4099f;
					break;
				
				case 0x00000011:
					*uParam2 = { 711.2572f, -911.7263f, 22.7077f };
					*uParam3 = 316.5199f;
					break;
				
				case 0x00000012:
					*uParam2 = { 1091.211f, -2194.509f, 30.1066f };
					*uParam3 = 20.739f;
					break;
				
				case 0x00000013:
					*uParam2 = { 989.2725f, -2531.751f, 27.302f };
					*uParam3 = 319.7745f;
					break;
				
				case 0x00000014:
					*uParam2 = { -245.9971f, 108.1838f, 68.557f };
					*uParam3 = 28.2604f;
					break;
				
				case 0x00000015:
					*uParam2 = { 562.0646f, -1949.79f, 23.9592f };
					*uParam3 = 6.5821f;
					break;
				
				case 0x00000016:
					*uParam2 = { 76.4564f, -2200.17f, 0.6006f };
					*uParam3 = 183.6653f;
					break;
				
				default:
					break;
			}
			break;
	}
}

int func_180(float fParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	if (func_333())
	{
		func_181(uParam1, &fVar0, uParam2);
		if (*uParam1 > 0xFFFFFFFF)
		{
			if (fVar0 < fParam0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_181(var uParam0, var uParam1, var uParam2)
{
	int iVar0[2];
	var uVar1[2];
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	func_244(&(iVar0[0x00000000]), &(uVar1[0x00000000]));
	func_182(&(iVar0[0x00000001]), &(uVar1[0x00000001]));
	iVar2 = 0xFFFFFFFF;
	fVar3 = 999999.9f;
	iVar4 = 0xFFFFFFFF;
	iVar5 = 0x00000000;
	while (iVar5 < iVar0)
	{
		if (uVar1[iVar5] < fVar3)
		{
			fVar3 = uVar1[iVar5];
			iVar2 = iVar0[iVar5];
			iVar4 = iVar5;
		}
		iVar5++;
	}
	*uParam0 = iVar2;
	*uParam1 = fVar3;
	*uParam2 = iVar4;
}

void func_182(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	iVar0 = 0xFFFFFFFF;
	fVar1 = 1E+07f;
	vVar2 = { func_186(unk_0xD803B885F5E47A62()) };
	vVar2.z = 0f;
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000017)
	{
		if (iVar5 > 0x00000000)
		{
			if (func_185(iVar5))
			{
				vVar3 = { func_183(iVar5) };
				vVar3.z = 0f;
				fVar4 = SYSTEM::VDIST(vVar2, vVar3);
				if (fVar4 < fVar1)
				{
					fVar1 = fVar4;
					iVar0 = iVar5;
				}
			}
		}
		iVar5++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

Vector3 func_183(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	if (!func_184(iParam0))
	{
		return vVar0;
	}
	switch (iParam0)
	{
		case 0x00000001:
			vVar0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 0x00000002:
			vVar0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 0x00000003:
			vVar0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 0x00000004:
			vVar0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 0x00000005:
			vVar0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 0x00000006:
			vVar0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 0x00000007:
			vVar0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 0x00000008:
			vVar0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 0x00000009:
			vVar0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 0x0000000A:
			vVar0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 0x0000000B:
			vVar0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 0x0000000C:
			vVar0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 0x0000000D:
			vVar0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 0x0000000E:
			vVar0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 0x0000000F:
			vVar0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 0x00000010:
			vVar0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 0x00000011:
			vVar0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 0x00000012:
			vVar0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 0x00000013:
			vVar0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 0x00000014:
			vVar0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 0x00000015:
			vVar0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 0x00000016:
			vVar0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return vVar0;
}

int func_184(int iParam0)
{
	if (iParam0 < 0x00000001 || iParam0 > 0x00000016)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_185(int iParam0)
{
	int iVar0;
	
	if (func_184(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000004)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iVar0 /*3*/] == iParam0)
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

Vector3 func_186(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iParam0]))
	{
		vVar0 = { func_243(Global_24DDCF[iParam0]) };
	}
	else if (unk_0xE4EDC4B0E92C078B(Global_24DDCF.f_21[iParam0]) && !iParam0 == Global_2537E2)
	{
		vVar0 = { func_243(Global_24DDCF.f_21[iParam0]) };
	}
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		return vVar0;
	}
	return func_187(iParam0);
}

Vector3 func_187(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	if (Global_184507[iParam0 /*876*/].f_112.f_1C > 0x00000000)
	{
		vVar1 = { func_242(func_251(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C)) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	else
	{
		func_240(func_178(iParam0), &iVar0);
		if (iVar0 > 0x00000000)
		{
			vVar1 = { func_242(func_251(iVar0)) };
			if (SYSTEM::VMAG(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_239(iParam0))
	{
		vVar1 = { func_192(iParam0) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (func_191(iParam0))
	{
		iVar2 = func_190(iParam0);
		if (iVar2 > 0xFFFFFFFF)
		{
			vVar1 = { Global_199459.f_1E8[iVar2 /*3*/] };
			if (SYSTEM::VMAG(vVar1) > 0f)
			{
				return vVar1;
			}
		}
	}
	if (func_189(iParam0))
	{
		vVar1 = { func_188(iParam0) };
		if (SYSTEM::VMAG(vVar1) > 0f)
		{
			return vVar1;
		}
	}
	if (Global_25033E[iParam0 /*421*/].f_44.f_A)
	{
		if (SYSTEM::VMAG(Global_25033E[iParam0 /*421*/].f_44.f_B) > 0f)
		{
			return Global_25033E[iParam0 /*421*/].f_44.f_B;
		}
	}
	return func_178(iParam0);
}

Vector3 func_188(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_44.f_7;
}

int func_189(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_44.f_6 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_190(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_D;
	}
	return 0xFFFFFFFF;
}

int func_191(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_5() && (func_143(iParam0, 0x00000001, 0x00000001) || Global_24B2D0.f_A6F))
	{
		bVar0 = unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000001);
		return bVar0;
	}
	return 0x00000000;
}

Vector3 func_192(int iParam0)
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
	
	if (iParam0 == func_5())
	{
	}
	if (func_238(iParam0))
	{
		iVar0 = func_237(iParam0);
		if (iVar0 != func_5())
		{
			if (!func_236(iVar0))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_295[iVar0 /*3*/][0x00000001]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_295[iVar0 /*3*/][0x00000001], 0x00000000);
				}
				else
				{
					return Global_25033E[func_237(iParam0) /*421*/].f_136.f_9;
				}
			}
			else
			{
				iVar1 = func_232(iVar0);
				if (!iVar1 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_231(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_26B66F.f_131))
		{
			return unk_0x68F4C0EC296D3901(Global_26B66F.f_131, 0x00000000);
		}
	}
	else if (func_230(iParam0) && !func_229(iParam0))
	{
		iVar2 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar2 != func_5())
		{
			iVar3 = func_232(iVar2);
			if (!iVar3 == 0xFFFFFFFF)
			{
				return Global_199459.f_1E8[iVar3 /*3*/];
			}
		}
	}
	else if (func_228(iParam0) && !func_227(iParam0))
	{
		if (func_239(iParam0) && func_226())
		{
			return Global_199459.f_1E8[Global_25033E[iParam0 /*421*/].f_136.f_5 /*3*/];
		}
		iVar4 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar4 != func_5())
		{
			if (func_225(iVar4))
			{
				iVar5 = func_221(iVar4);
				if (iVar5 != 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_220(iParam0))
	{
		iVar6 = func_219(iParam0);
		if (iVar6 != func_5())
		{
			if (!func_218(iVar6))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_2F6[iVar6]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_2F6[iVar6], 0x00000000);
				}
				else
				{
					return Global_25033E[func_219(iParam0) /*421*/].f_136.f_10;
				}
			}
			else
			{
				iVar7 = func_221(iVar6);
				if (!iVar7 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_217(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_26B66F.f_133))
		{
			return unk_0x68F4C0EC296D3901(Global_26B66F.f_133, 0x00000000);
		}
	}
	else if (func_216(iParam0) && !func_215(iParam0))
	{
		iVar8 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar8 != func_5())
		{
			if (func_214(iVar8))
			{
				iVar9 = func_210(iVar8);
				if (iVar9 != 0xFFFFFFFF)
				{
					return func_209(iVar9);
				}
			}
		}
	}
	else if (func_208(iParam0) && !func_207(iParam0))
	{
		iVar10 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar10 != func_5())
		{
			if (func_206(iVar10))
			{
				iVar11 = func_202(iVar10);
				if (iVar11 != 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_201(iParam0, 0x00000000))
	{
		iVar12 = func_200(iParam0);
		if (iVar12 != func_5())
		{
			if (!func_199(iVar12))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_317[iVar12]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_317[iVar12], 0x00000000);
				}
				else
				{
					return Global_18D84D[func_200(iParam0) /*615*/].f_258;
				}
			}
			else
			{
				iVar13 = func_202(iVar12);
				if (!iVar13 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_198(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_216(iParam0))
	{
		return func_209(Global_25033E[iParam0 /*421*/].f_136.f_5);
	}
	if (func_193(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_199459.f_1E8[Global_25033E[iParam0 /*421*/].f_136.f_5 /*3*/];
}

int func_193(int iParam0)
{
	if ((func_197(iParam0) || func_196(iParam0)) || func_194(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_194(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_195(int iParam0)
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

int func_196(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000010;
			}
		}
	}
	return 0x00000000;
}

int func_197(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_198(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_199(int iParam0)
{
	if (iParam0 != func_5())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x00000004);
	}
	return 0x00000000;
}

int func_200(int iParam0)
{
	if (iParam0 == func_5())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_201(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0x134B62B726CEC8E6(iVar0) == 0x897AFC65)
			{
				return 0x00000001;
			}
		}
	}
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_5())
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_5())
	{
		iVar0 = func_205(iParam0);
		if (iVar0 != 0x00000000)
		{
			return func_203(iVar0);
		}
	}
	return 0xFFFFFFFF;
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_195(iVar0) == 0x0000000B)
		{
			if (func_204(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 0x00000001;
		
		case 0x00000067:
			return 0x00000002;
		
		case 0x00000068:
			return 0x00000003;
		
		case 0x00000069:
			return 0x00000004;
		
		case 0x0000006A:
			return 0x00000005;
		
		case 0x0000006B:
			return 0x00000006;
		
		case 0x0000006C:
			return 0x00000007;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000009;
		
		case 0x0000006F:
			return 0x0000000A;
		
		default:
	}
	return 0x00000000;
}

int func_205(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_119;
	}
	return 0x00000000;
}

int func_206(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_119 != 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_207(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_208(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_208(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

Vector3 func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 0x00000067:
			return 331.9f, -974.9f, 30f;
		
		case 0x00000068:
			return -146f, -1270f, 28.3088f;
		
		case 0x00000069:
			return -17.7f, 225.7f, 106.7566f;
		
		case 0x0000006A:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 0x0000006B:
			return -668f, -2431.5f, 12.9444f;
		
		case 0x0000006C:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 0x0000006D:
			return 366.6f, 237.6f, 104.9f;
		
		case 0x0000006E:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 0x0000006F:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_199459.f_1E8[iParam0 /*3*/];
}

int func_210(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_5())
	{
		iVar0 = func_213(iParam0);
		if (iVar0 != 0x00000000)
		{
			return func_211(iVar0);
		}
	}
	return 0xFFFFFFFF;
}

int func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_195(iVar0) == 0x0000000B)
		{
			if (func_212(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 0x00000001;
		
		case 0x00000067:
			return 0x00000002;
		
		case 0x00000068:
			return 0x00000003;
		
		case 0x00000069:
			return 0x00000004;
		
		case 0x0000006A:
			return 0x00000005;
		
		case 0x0000006B:
			return 0x00000006;
		
		case 0x0000006C:
			return 0x00000007;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000009;
		
		case 0x0000006F:
			return 0x0000000A;
		
		default:
	}
	return 0x00000000;
}

int func_213(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142;
	}
	return 0x00000000;
}

int func_214(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142 != 0x00000000;
	}
	return 0x00000000;
}

int func_215(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_216(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_216(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_217(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000A;
			}
		}
	}
	return 0x00000000;
}

int func_218(int iParam0)
{
	if (iParam0 != func_5())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_2, 0x00000006);
	}
	return 0x00000000;
}

int func_219(int iParam0)
{
	if (iParam0 == func_5())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_220(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_5())
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_221(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_224(iParam0);
	if (!iVar0 == 0x00000000)
	{
		return func_222(iVar0);
	}
	return 0xFFFFFFFF;
}

int func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_195(iVar0) == 0x00000009)
		{
			if (func_223(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000059:
			return 0x00000001;
			break;
		
		case 0x0000005A:
			return 0x00000002;
			break;
		
		case 0x0000005B:
			return 0x00000003;
			break;
		
		case 0x0000005C:
			return 0x00000004;
			break;
		
		case 0x0000005D:
			return 0x00000005;
			break;
		
		case 0x0000005E:
			return 0x00000006;
			break;
		
		case 0x0000005F:
			return 0x00000007;
			break;
		
		case 0x00000060:
			return 0x00000008;
			break;
		
		case 0x00000061:
			return 0x00000009;
			break;
	}
	return 0x00000000;
}

int func_224(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_10F;
}

int func_225(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_10F != 0x00000000;
	}
	return 0x00000000;
}

int func_226()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_2, 0x0000000D) || Global_199459.f_BC7)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_227(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	if (func_228(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_228(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_229(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	if (func_230(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_230(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000004;
			}
		}
	}
	return 0x00000000;
}

int func_231(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000006;
			}
		}
	}
	return 0x00000000;
}

int func_232(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_235(iParam0);
	if (!iVar0 == 0x00000000)
	{
		return func_233(iVar0);
	}
	return 0xFFFFFFFF;
}

int func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_234(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000016:
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000003;
			break;
		
		case 0x00000019:
			return 0x00000004;
			break;
		
		case 0x0000001A:
			return 0x00000005;
			break;
		
		case 0x0000001B:
			return 0x00000006;
			break;
		
		case 0x0000001C:
			return 0x00000007;
			break;
		
		case 0x0000001D:
			return 0x00000008;
			break;
		
		case 0x0000001E:
			return 0x00000009;
			break;
		
		case 0x0000001F:
			return 0x0000000A;
			break;
		
		case 0x00000020:
			return 0x0000000B;
			break;
		
		case 0x00000021:
			return 0x0000000C;
			break;
		
		case 0x00000022:
			return 0x0000000D;
			break;
		
		case 0x00000023:
			return 0x0000000E;
			break;
		
		case 0x00000024:
			return 0x0000000F;
			break;
		
		case 0x00000025:
			return 0x00000010;
			break;
		
		case 0x00000026:
			return 0x00000011;
			break;
		
		case 0x00000027:
			return 0x00000012;
			break;
		
		case 0x00000028:
			return 0x00000013;
			break;
		
		case 0x00000029:
			return 0x00000014;
			break;
		
		case 0x00000046:
			return 0x00000015;
			break;
		
		case 0x00000047:
			return 0x00000016;
			break;
		
		case 0x00000048:
			return 0x00000017;
			break;
		
		case 0x00000049:
			return 0x00000018;
			break;
		
		case 0x0000004A:
			return 0x00000019;
			break;
		
		case 0x0000004B:
			return 0x0000001A;
			break;
		
		case 0x0000004C:
			return 0x0000001B;
			break;
		
		case 0x0000004D:
			return 0x0000001C;
			break;
		
		case 0x0000004E:
			return 0x0000001D;
			break;
		
		case 0x0000004F:
			return 0x0000001E;
			break;
		
		case 0x00000050:
			return 0x0000001F;
			break;
	}
	return 0x00000000;
}

int func_235(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[0x00000005 /*12*/];
}

int func_236(int iParam0)
{
	if (iParam0 != func_5())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000006);
	}
	return 0x00000000;
}

int func_237(int iParam0)
{
	if (iParam0 == func_5())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_238(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_5())
			{
				return func_195(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000005;
			}
		}
	}
	return 0x00000000;
}

int func_239(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_143(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

void func_240(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000001;
	iVar1 = 0x00000007;
	while (iVar0 <= iVar1)
	{
		if (func_241(vParam0, iVar0, 0x00000000))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 0x00000022;
	iVar1 = 0x0000002B;
	while (iVar0 <= iVar1)
	{
		if (func_241(vParam0, iVar0, 0x00000000))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 0x0000003D;
	iVar1 = 0x00000041;
	while (iVar0 <= iVar1)
	{
		if (func_241(vParam0, iVar0, 0x00000000))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 0x00000008;
	if (func_241(vParam0, iVar0, 0x00000000))
	{
		if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C > 0x00000000)
		{
			*uParam1 = Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C;
		}
		else if (Global_24B132.f_1 > 0x00000000)
		{
			*uParam1 = Global_24B132.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 0x00000011;
	if (func_241(vParam0, iVar0, 0x00000000))
	{
		if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C > 0x00000000)
		{
			*uParam1 = Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C;
		}
		else if (Global_24B132.f_1 > 0x00000000)
		{
			*uParam1 = Global_24B132.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_241(vector3 vParam0, int iParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar2[3];
	int iVar3;
	
	if (iParam1 != 0x000003E7)
	{
		iVar3 = 0x00000000;
		while (iVar3 < 0x00000003)
		{
			if (Global_100542[iParam1 /*1951*/].f_92.f_39[iVar3 /*8*/].f_2 > Global_100542[iParam1 /*1951*/].f_92.f_39[iVar3 /*8*/].f_3.f_2)
			{
				vVar1[iVar3 /*3*/] = { Global_100542[iParam1 /*1951*/].f_92.f_39[iVar3 /*8*/] };
				vVar2[iVar3 /*3*/] = { Global_100542[iParam1 /*1951*/].f_92.f_39[iVar3 /*8*/].f_3 };
			}
			else
			{
				vVar1[iVar3 /*3*/] = { Global_100542[iParam1 /*1951*/].f_92.f_39[iVar3 /*8*/].f_3 };
				vVar2[iVar3 /*3*/] = { Global_100542[iParam1 /*1951*/].f_92.f_39[iVar3 /*8*/] };
			}
			vVar1[iVar3 /*3*/].f_2 = (vVar1[iVar3 /*3*/].f_2 + fParam2);
			vVar2[iVar3 /*3*/].f_2 = (vVar2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_100542[iParam1 /*1951*/].f_92.f_39[0x00000000 /*8*/].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar2[0x00000000 /*3*/], vVar1[0x00000000 /*3*/], Global_100542[iParam1 /*1951*/].f_92.f_39[0x00000000 /*8*/].f_6, 0x00000000, 0x00000001)) || (Global_100542[iParam1 /*1951*/].f_92.f_39[0x00000001 /*8*/].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar2[0x00000001 /*3*/], vVar1[0x00000001 /*3*/], Global_100542[iParam1 /*1951*/].f_92.f_39[0x00000001 /*8*/].f_6, 0x00000000, 0x00000001))) || (Global_100542[iParam1 /*1951*/].f_92.f_39[0x00000002 /*8*/].f_6 != 0f && unk_0x0399732A9EBC368E(vParam0, vVar2[0x00000002 /*3*/], vVar1[0x00000002 /*3*/], Global_100542[iParam1 /*1951*/].f_92.f_39[0x00000002 /*8*/].f_6, 0x00000000, 0x00000001)))
		{
			return 0x00000001;
		}
	}
	else
	{
		iVar0 = 0x00000001;
		while (iVar0 <= 0x00000007)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		iVar0 = 0x00000022;
		while (iVar0 <= 0x0000002B)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		iVar0 = 0x0000003D;
		while (iVar0 <= 0x00000041)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		iVar0 = 0x00000049;
		while (iVar0 <= 0x0000004C)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		iVar0 = 0x0000004D;
		while (iVar0 <= 0x00000052)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		iVar0 = 0x00000053;
		while (iVar0 <= 0x00000055)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		iVar0 = 0x00000057;
		while (iVar0 <= 0x0000005A)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		iVar0 = 0x0000005B;
		while (iVar0 <= 0x00000066)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		iVar0 = 0x00000067;
		while (iVar0 <= 0x00000071)
		{
			if (func_241(vParam0, iVar0, fParam2))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		if (func_241(vParam0, 0x00000008, fParam2))
		{
			return 0x00000001;
		}
		if (func_241(vParam0, 0x00000011, fParam2))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_242(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			vVar0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		
		case 0x00000002:
			vVar0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		
		case 0x00000003:
			vVar0 = { -1443.094f, -544.7684f, 33.7424f };
			break;
		
		case 0x00000004:
			vVar0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		
		case 0x00000005:
			vVar0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		
		case 0x00000006:
			vVar0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		
		case 0x00000007:
			vVar0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		
		case 0x00000008:
			vVar0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		
		case 0x00000009:
			vVar0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		
		case 0x0000000A:
			vVar0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		
		case 0x0000000B:
			vVar0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		
		case 0x0000000C:
			vVar0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		
		case 0x0000000D:
			vVar0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		
		case 0x0000000E:
			vVar0 = { -973.3757f, -1429.425f, 6.6791f };
			break;
		
		case 0x0000000F:
			vVar0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		
		case 0x00000010:
			vVar0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		
		case 0x00000011:
			vVar0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		
		case 0x00000012:
			vVar0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		
		case 0x00000013:
			vVar0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		
		case 0x00000014:
			vVar0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		
		case 0x00000015:
			vVar0 = { -1534.025f, -324.5247f, 46.5237f };
			break;
		
		case 0x00000016:
			vVar0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		
		case 0x00000017:
			vVar0 = { -1608.851f, -429.184f, 39.439f };
			break;
		
		case 0x00000018:
			vVar0 = { 964.3583f, -1034.199f, 39.8303f };
			break;
		
		case 0x00000019:
			vVar0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		
		case 0x0000001A:
			vVar0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		
		case 0x0000001B:
			vVar0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		
		case 0x0000001C:
			vVar0 = { 844.7289f, -1164.1f, 24.2681f };
			break;
		
		case 0x0000001D:
			vVar0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		
		case 0x0000001E:
			vVar0 = { 572.0462f, -1570.736f, 27.4904f };
			break;
		
		case 0x0000001F:
			vVar0 = { 722.2852f, -1190.617f, 23.282f };
			break;
		
		case 0x00000020:
			vVar0 = { 497.6212f, -1494.084f, 28.2893f };
			break;
		
		case 0x00000021:
			vVar0 = { 480.3127f, -1549.937f, 28.2828f };
			break;
		
		case 0x00000022:
			vVar0 = { -68.702f, 6426.148f, 30.439f };
			break;
		
		case 0x00000023:
			vVar0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		
		case 0x00000024:
			vVar0 = { 2554.165f, 4668.059f, 33.0233f };
			break;
		
		case 0x00000025:
			vVar0 = { 2461.22f, 1589.255f, 32.0443f };
			break;
		
		case 0x00000026:
			vVar0 = { -2203.335f, 4244.427f, 47.3305f };
			break;
		
		case 0x00000027:
			vVar0 = { 218.0665f, 2601.817f, 44.7668f };
			break;
		
		case 0x00000028:
			vVar0 = { 186.1719f, 2786.343f, 45.0144f };
			break;
		
		case 0x00000029:
			vVar0 = { 642.0746f, 2791.729f, 40.9795f };
			break;
		
		case 0x0000002A:
			vVar0 = { -1130.938f, 2701.133f, 17.8004f };
			break;
		
		case 0x0000002B:
			vVar0 = { -10.944f, -1646.76f, 28.3125f };
			break;
		
		case 0x0000002C:
			vVar0 = { 1024.263f, -2398.404f, 29.1261f };
			break;
		
		case 0x0000002D:
			vVar0 = { 870.8577f, -2232.323f, 29.5508f };
			break;
		
		case 0x0000002E:
			vVar0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		
		case 0x0000002F:
			vVar0 = { -1088.616f, -2235.098f, 12.2182f };
			break;
		
		case 0x00000030:
			vVar0 = { -342.5126f, -1468.675f, 29.6107f };
			break;
		
		case 0x00000031:
			vVar0 = { -1241.54f, -259.8841f, 37.9445f };
			break;
		
		case 0x00000032:
			vVar0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		
		case 0x00000033:
			vVar0 = { -1405.411f, 526.8572f, 122.8361f };
			break;
		
		case 0x00000034:
			vVar0 = { 1341.552f, -1578.037f, 53.4443f };
			break;
		
		case 0x00000035:
			vVar0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		
		case 0x00000036:
			vVar0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		
		case 0x00000037:
			vVar0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		
		case 0x00000038:
			vVar0 = { 1899.673f, 3773.178f, 31.8829f };
			break;
		
		case 0x00000039:
			vVar0 = { 1662.121f, 4776.317f, 41.0075f };
			break;
		
		case 0x0000003A:
			vVar0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		
		case 0x0000003B:
			vVar0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		
		case 0x0000003C:
			vVar0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		
		case 0x0000003D:
			vVar0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		
		case 0x0000003E:
			vVar0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		
		case 0x0000003F:
			vVar0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		
		case 0x00000040:
			vVar0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		
		case 0x00000041:
			vVar0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		
		case 0x00000042:
			vVar0 = { -1292.456f, 440.9454f, 93.7572f };
			break;
		
		case 0x00000043:
			vVar0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		
		case 0x00000044:
			vVar0 = { -1581.501f, -558.2578f, 33.9528f };
			break;
		
		case 0x00000045:
			vVar0 = { -1379.546f, -499.1783f, 32.1574f };
			break;
		
		case 0x00000046:
			vVar0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		
		case 0x00000047:
			vVar0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		
		case 0x00000048:
			vVar0 = { 254.1892f, -1809.183f, 26.1805f };
			break;
		
		case 0x00000049:
			vVar0 = { -1472.278f, -920.0677f, 8.9683f };
			break;
		
		case 0x0000004A:
			vVar0 = { 38.9478f, -1026.629f, 28.6354f };
			break;
		
		case 0x0000004B:
			vVar0 = { 46.903f, 2789.825f, 57.1124f };
			break;
		
		case 0x0000004C:
			vVar0 = { -342.3246f, 6065.316f, 30.4895f };
			break;
		
		case 0x0000004D:
			vVar0 = { 1737.878f, 3709.088f, 33.1348f };
			break;
		
		case 0x0000004E:
			vVar0 = { 939.7161f, -1459.204f, 30.467f };
			break;
		
		case 0x0000004F:
			vVar0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		
		case 0x00000050:
			vVar0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		
		case 0x00000051:
			vVar0 = { 2472.22f, 4110.493f, 36.9629f };
			break;
		
		case 0x00000052:
			vVar0 = { -39.3286f, 6420.603f, 30.7017f };
			break;
		
		case 0x00000053:
			vVar0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return vVar0;
}

Vector3 func_243(var uParam0)
{
	int iVar0;
	
	switch (unk_0xDC7D2B8A563DB482(uParam0))
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			iVar0 = unk_0x63EC65B0F6B7C26F(uParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				return unk_0x68F4C0EC296D3901(iVar0, 0x00000000);
			}
			break;
	}
	return unk_0xAC14F6E4B17D7835(uParam0);
}

void func_244(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	iVar0 = 0xFFFFFFFF;
	fVar1 = 1E+07f;
	vVar2 = { func_186(unk_0xD803B885F5E47A62()) };
	vVar2.z = 0f;
	iVar5 = 0xFFFFFFFF;
	iVar5 = 0x00000057;
	while (iVar5 <= 0x0000005A)
	{
		if (func_245(iVar5))
		{
			vVar3 = { Global_100542[iVar5 /*1951*/].f_3[0x00000000 /*3*/] };
			vVar3.z = 0f;
			fVar4 = SYSTEM::VDIST(vVar2, vVar3);
			if (fVar4 < fVar1)
			{
				fVar1 = fVar4;
				iVar0 = iVar5;
			}
		}
		iVar5++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

int func_245(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000019)
		{
			if (func_246(iVar0, 0xFFFFFFFF) == iParam0)
			{
				return 0x00000001;
			}
			iVar0++;
		}
		if (iParam0 == func_246(0x00000063, 0xFFFFFFFF))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == 0xFFFFFFFF)
	{
		iVar0 = func_10();
	}
	if (iParam0 == 0x00000007 && !Global_40001.f_4258)
	{
		return 0x00000000;
	}
	if (iParam0 >= 0x000003E8)
	{
		iVar1 = func_248(iParam0);
		if (iVar1 == 0x00000000 && func_8(0x00001511, iParam1, 0x00000000) != 0x00000000)
		{
			return 0x000004D2;
		}
		if (func_247(0xFFFFFFFF) && iVar1 == 0x00000002)
		{
			return 0x000004D4;
		}
		if (func_214(unk_0xD803B885F5E47A62()) && iVar1 == 0x00000001)
		{
			return 0x000004D5;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return Global_152E22[iVar0];
	}
	else if (iParam0 == 0x00000063)
	{
		return Global_277666[iVar0];
	}
	else if (iParam0 >= 0x00000001)
	{
		if (iParam0 >= 0x00000019)
		{
			return 0x00000000;
		}
		return Global_2775D1[(iParam0 - 0x00000001) /*3*/][iVar0];
	}
	return 0x00000000;
}

bool func_247(int iParam0)
{
	if (!Global_40001.f_5C6F)
	{
		return 0x00000000;
	}
	return func_8(0x00001C27, iParam0, 0x00000000) != 0x00000000;
}

int func_248(int iParam0)
{
	iParam0 = (iParam0 - 0x000003E8);
	if (iParam0 >= 0x00000000 && iParam0 <= 0x00000003)
	{
		return iParam0;
	}
	return 0xFFFFFFFF;
}

Vector3 func_249(int iParam0)
{
	if (func_250(iParam0))
	{
		switch (iParam0)
		{
			case 0x00000044:
				return -1582.094f, -569.5358f, 115.3326f;
				break;
			
			case 0x00000045:
				return -1391.652f, -477.7002f, 90.25584f;
				break;
			
			case 0x00000046:
				return -144.5361f, -593.3737f, 210.7752f;
				break;
			
			case 0x00000047:
				return -75.06329f, -818.9553f, 325.1753f;
				break;
			}
	}
	return 0f, 0f, -1000f;
}

int func_250(int iParam0)
{
	if (((iParam0 == 0x00000044 || iParam0 == 0x00000045) || iParam0 == 0x00000046) || iParam0 == 0x00000047)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x0000003D:
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
			return 0x00000001;
			break;
		
		case 0x00000005:
		case 0x00000006:
			return 0x00000002;
			break;
		
		case 0x00000007:
		case 0x00000022:
		case 0x0000003E:
			return 0x00000003;
			break;
		
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
			return 0x00000004;
			break;
		
		case 0x00000026:
		case 0x00000027:
		case 0x00000041:
			return 0x00000005;
			break;
		
		case 0x00000028:
		case 0x00000029:
		case 0x0000003F:
			return 0x00000006;
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x00000040:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
		
		case 0x0000000C:
			return 0x0000000C;
			break;
		
		case 0x0000000D:
			return 0x0000000D;
			break;
		
		case 0x0000000E:
			return 0x0000000E;
			break;
		
		case 0x0000000F:
			return 0x0000000F;
			break;
		
		case 0x00000010:
			return 0x00000010;
			break;
		
		case 0x00000011:
			return 0x00000011;
			break;
		
		case 0x00000012:
			return 0x00000012;
			break;
		
		case 0x00000013:
			return 0x00000013;
			break;
		
		case 0x00000014:
			return 0x00000014;
			break;
		
		case 0x00000015:
			return 0x00000015;
			break;
		
		case 0x00000016:
			return 0x00000016;
			break;
		
		case 0x00000017:
			return 0x00000017;
			break;
		
		case 0x00000018:
			return 0x00000018;
			break;
		
		case 0x00000019:
			return 0x00000019;
			break;
		
		case 0x0000001A:
			return 0x0000001A;
			break;
		
		case 0x0000001B:
			return 0x0000001B;
			break;
		
		case 0x0000001C:
			return 0x0000001C;
			break;
		
		case 0x0000001D:
			return 0x0000001D;
			break;
		
		case 0x0000001E:
			return 0x0000001E;
			break;
		
		case 0x0000001F:
			return 0x0000001F;
			break;
		
		case 0x00000020:
			return 0x00000020;
			break;
		
		case 0x00000021:
			return 0x00000021;
			break;
		
		case 0x0000002C:
			return 0x00000022;
			break;
		
		case 0x0000002D:
			return 0x00000023;
			break;
		
		case 0x0000002E:
			return 0x00000024;
			break;
		
		case 0x0000002F:
			return 0x00000025;
			break;
		
		case 0x00000030:
			return 0x00000026;
			break;
		
		case 0x00000031:
			return 0x00000027;
			break;
		
		case 0x00000032:
			return 0x00000028;
			break;
		
		case 0x00000033:
			return 0x00000029;
			break;
		
		case 0x00000034:
			return 0x0000002A;
			break;
		
		case 0x00000035:
			return 0x0000002B;
			break;
		
		case 0x00000036:
			return 0x0000002C;
			break;
		
		case 0x00000037:
			return 0x0000002D;
			break;
		
		case 0x00000038:
			return 0x0000002E;
			break;
		
		case 0x00000039:
			return 0x0000002F;
			break;
		
		case 0x0000003A:
			return 0x00000030;
			break;
		
		case 0x0000003B:
			return 0x00000031;
			break;
		
		case 0x0000003C:
			return 0x00000032;
			break;
		
		case 0x00000042:
			return 0x00000033;
			break;
		
		case 0x00000043:
			return 0x00000034;
			break;
		
		case 0x00000044:
			return 0x00000035;
			break;
		
		case 0x00000045:
			return 0x00000036;
			break;
		
		case 0x00000046:
			return 0x00000037;
			break;
		
		case 0x00000047:
			return 0x00000038;
			break;
		
		case 0x00000048:
			return 0x00000039;
			break;
		
		case 0x00000049:
			return 0x0000003A;
			break;
		
		case 0x0000004A:
			return 0x0000003B;
			break;
		
		case 0x0000004B:
			return 0x0000003C;
			break;
		
		case 0x0000004C:
			return 0x0000003D;
			break;
		
		case 0x0000004D:
			return 0x0000003E;
			break;
		
		case 0x0000004E:
			return 0x0000003F;
			break;
		
		case 0x0000004F:
			return 0x00000040;
			break;
		
		case 0x00000050:
			return 0x00000041;
			break;
		
		case 0x00000051:
			return 0x00000042;
			break;
		
		case 0x00000052:
			return 0x00000043;
			break;
		
		case 0x00000057:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
			return 0x00000044;
			break;
		
		case 0x00000058:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
			return 0x00000045;
			break;
		
		case 0x00000059:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
			return 0x00000046;
			break;
		
		case 0x0000005A:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
			return 0x00000047;
			break;
		
		case 0x0000005B:
			return 0x00000048;
			break;
		
		case 0x0000005C:
			return 0x00000049;
			break;
		
		case 0x0000005D:
			return 0x0000004A;
			break;
		
		case 0x0000005E:
			return 0x0000004B;
			break;
		
		case 0x0000005F:
			return 0x0000004C;
			break;
		
		case 0x00000060:
			return 0x0000004D;
			break;
		
		case 0x00000061:
			return 0x0000004E;
			break;
		
		case 0x00000062:
			return 0x0000004F;
			break;
		
		case 0x00000063:
			return 0x00000050;
			break;
		
		case 0x00000064:
			return 0x00000051;
			break;
		
		case 0x00000065:
			return 0x00000052;
			break;
		
		case 0x00000066:
			return 0x00000053;
			break;
	}
	return 0x00000000;
}

int func_252(int iParam0)
{
	if (func_143(iParam0, 0x00000000, 0x00000001))
	{
		return func_253(func_178(iParam0));
	}
	return 0xFFFFFFFF;
}

int func_253(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0x00000057;
	while (iVar0 <= 0x0000005A)
	{
		if (func_254(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_254(vector3 vParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000057:
			if (unk_0x0399732A9EBC368E(vParam0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000058:
			if (unk_0x0399732A9EBC368E(vParam0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000059:
			if (unk_0x0399732A9EBC368E(vParam0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000005A:
			if (unk_0x0399732A9EBC368E(vParam0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_255(int iParam0)
{
	int iVar0;
	
	iVar0 = func_252(iParam0);
	if (iVar0 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_256()
{
	int iVar0;
	
	iVar0 = 0x00001388;
	if (func_333())
	{
		iVar0 = 0x00000BB8;
	}
	return iVar0;
}

int func_257(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xECE0BE5313FD8BDA(iParam0))
		{
			unk_0x0C8A454B494DAA0D(iParam0);
			return unk_0xAFE0D3608EDA7039(iParam0);
		}
	}
	return 0x00000000;
}

int func_258()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x437347B10A200C4B(iLocal_1055, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_1055, 0x00000001) };
		fVar1 = (vVar0.z - Local_133.f_6.f_2);
		if (fVar1 > 2f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_259()
{
	int iVar0;
	
	if (iLocal_1024)
	{
		if (unk_0xC844350D5D58C99A(iLocal_1055))
		{
			if (!unk_0xE934758D273C899A(iLocal_1055))
			{
				if (unk_0xF79A7BCA9E38BBBC(iLocal_1055))
				{
					iVar0 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), uLocal_1025));
					if (iVar0 > 0x000001F4)
					{
						return 0x00000000;
					}
					return 0x00000001;
				}
			}
		}
	}
	else
	{
		iLocal_1024 = 0x00000001;
	}
	uLocal_1025 = unk_0x2B6E0A53779D29EA();
	return 0x00000001;
}

void func_260()
{
	float fVar0;
	
	if (unk_0xF28AD5253D9A9A6A())
	{
		Local_133.f_A = { unk_0xDEAEB003144B10F4(unk_0xCDB86175B3C461EB(unk_0x817B3657F78A517A())) };
		Local_133.f_A.f_2 = unk_0x877D3FF6F9D1F987((Local_133.f_A - 25f), (Local_133.f_A.f_1 - 25f), (Local_133.f_A + 25f), (Local_133.f_A.f_1 + 25f));
		fVar0 = unk_0x1BEC198A85CA749A((Local_133.f_A - 25f), (Local_133.f_A.f_1 - 25f), (Local_133.f_A + 25f), (Local_133.f_A.f_1 + 25f));
		if ((Local_133.f_A.f_2 - fVar0) < 20f)
		{
			Local_133.f_A.f_2 = (Local_133.f_A.f_2 + 10f);
		}
		else if ((Local_133.f_A.f_2 - fVar0) > 30f && (Local_133.f_A.f_2 - fVar0) < 70f)
		{
			Local_133.f_A.f_2 = (Local_133.f_A.f_2 + 40f);
		}
		func_261(0x00000000);
		func_170(Local_133.f_A);
	}
}

void func_261(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11A), iParam0);
}

int func_262(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_84(sParam2, iParam3, 0x00000000);
}

int func_263()
{
	vector3 vVar0;
	
	if (!func_266())
	{
		if (unk_0xC844350D5D58C99A(unk_0x1B50683925F00106(Local_133.f_4)))
		{
			if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_133.f_4), 0x00000000))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_133.f_4), 0x00000000) };
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vVar0, 50f, 50f, 150f, 0x00000000, 0x00000001, 0x00000000) && !func_264(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_264(int iParam0)
{
	if (func_265(Global_184507[iParam0 /*876*/].f_112.f_1C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_266()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_267(var uParam0)
{
	return uParam0->f_1;
}

void func_268()
{
	switch (Local_133.f_17)
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x00000008) || (!func_149(iLocal_1055) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1055, 0x00000000)))
			{
				func_271();
				Local_133.f_17 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!func_149(iLocal_1055))
			{
				if (unk_0x2720E241B5CCF780(iLocal_1055) > 0x00000000)
				{
					Local_133.f_17 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000C))
			{
				if (unk_0xF28AD5253D9A9A6A())
				{
					Local_133.f_17 = 0x00000003;
					func_119(&uLocal_1042, 0x00000000, 0x00000000);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x00000009))
			{
				Local_133.f_17 = 0x00000003;
				func_119(&uLocal_1042, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000A))
			{
				Local_133.f_17 = 0x00000005;
			}
			break;
		
		case 0x00000003:
			if (!func_149(iLocal_1055))
			{
				if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000)
				{
					Local_133.f_17 = 0x00000001;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000A))
				{
					Local_133.f_17 = 0x00000005;
				}
				else if (!unk_0xF28AD5253D9A9A6A() || func_168(0x00000000))
				{
					Local_133.f_A = { 0f, 0f, 0f };
					unk_0x0674E58A79778E99(&(Local_133.f_1), 0x0000000A);
					unk_0x0674E58A79778E99(&(Local_133.f_1), 0x00000009);
					Local_133.f_17 = 0x00000002;
				}
			}
			break;
		
		case 0x00000004:
			if (Global_258C2B.f_1A)
			{
				if (func_269())
				{
					func_494(0x00000000);
				}
			}
			break;
		
		case 0x00000005:
			if (!func_149(iLocal_1055))
			{
				if (unk_0x2720E241B5CCF780(iLocal_1055) <= 0x00000000 && !unk_0xC18DDE8EA6E48FDB(iLocal_1055))
				{
					if (func_143(Local_133.f_5, 0x00000001, 0x00000001) && !unk_0xE934758D273C899A(unk_0x9539D44F3E4492F6(Local_133.f_5)))
					{
						if (unk_0xD1960163A3042274(unk_0x9539D44F3E4492F6(Local_133.f_5), 0xEF8D6B40) != 0x00000001 && unk_0xD1960163A3042274(unk_0x9539D44F3E4492F6(Local_133.f_5), 0xEF8D6B40) != 0x00000000)
						{
							Local_133.f_17 = 0x00000006;
						}
					}
				}
				else if (!unk_0xF28AD5253D9A9A6A() || func_168(0x00000000))
				{
					Local_133.f_A = { 0f, 0f, 0f };
					unk_0x0674E58A79778E99(&(Local_133.f_1), 0x0000000A);
					unk_0x0674E58A79778E99(&(Local_133.f_1), 0x00000009);
					Local_133.f_17 = 0x00000002;
				}
			}
			break;
		
		case 0x00000006:
			break;
	}
}

int func_269()
{
	int iVar0;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0x00000001;
	}
	if (unk_0xE9F78D191AD5EDBA(Local_133.f_4))
	{
		if (!unk_0x526BC32A660C89E6(Local_133.f_4))
		{
			unk_0x8D30F6387EE75385(Local_133.f_4);
		}
		else
		{
			func_270(&(Local_133.f_4));
			iVar0 = 0x00000001;
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

void func_270(var uParam0)
{
	var uVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&uVar0);
	}
}

void func_271()
{
	int iVar0;
	
	if (unk_0xBFF81ED3B99522C7() && !unk_0xFEBC1E4EC9E001F0())
	{
		iVar0 = func_8(0x000004A6, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000010))
		{
			if (!func_149(iLocal_1055) && !func_148(Local_133.f_4))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000) && !unk_0x36646919F20EAFFC(unk_0x1B50683925F00106(Local_133.f_4)))
				{
					unk_0xB6A2CAEFEE28197D("HTX_HELPN");
					if (func_273())
					{
						unk_0x3A820E495A7BA3E5(0x0000000D);
						unk_0x6B012227B3921E18("GB_HELI_BLIP");
					}
					else
					{
						unk_0x3A820E495A7BA3E5(iLocal_140);
						unk_0x6B012227B3921E18("HTX_HELPB");
					}
					unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000010);
					func_272(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
				}
			}
		}
	}
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_9(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_273()
{
	if (iLocal_1055 == Global_26B66F.f_12D || iLocal_1055 == Global_26B66F.f_1719)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_274()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0674E58A79778E99(&(Local_133.f_1), 0x00000009);
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (func_143(iVar1, 0x00000001, 0x00000001))
			{
				if (!func_149(iLocal_1055))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x00000008))
					{
						if (unk_0x5A91F08DF773C39D(iLocal_1055, Local_133.f_6, (7.5f * 1.5f), (7.5f * 1.5f), (7.5f * 1.5f), 0x00000000, 0x00000001, 0x00000000) && !func_259())
						{
							unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x00000008);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000A))
					{
						if (unk_0x5A91F08DF773C39D(iLocal_1055, Local_133.f_A, (7.5f * 1.5f), (7.5f * 1.5f), (10f * 2f), 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x0000000A);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x00000009))
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_137[iVar0 /*3*/].f_1, 0x00000006))
						{
							unk_0x5D96D8530B3D0904(&(Local_133.f_1), 0x00000009);
							unk_0x0674E58A79778E99(&(vLocal_137[iVar0 /*3*/].f_1), 0x00000006);
						}
					}
					if (Local_133.f_18 != 0x00000004)
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_137[iVar0 /*3*/].f_1, 0x00000005))
						{
							Local_133.f_18 = 0x00000004;
							Local_133.f_D = { 100000f, 100000f, 100000f };
							unk_0x0674E58A79778E99(&(vLocal_137[iVar0 /*3*/].f_1), 0x00000005);
						}
					}
					if (Local_133.f_18 != 0x00000005)
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_137[iVar0 /*3*/].f_1, 0x00000008))
						{
							if (func_293(iVar1) && func_279(iVar1))
							{
								if (iLocal_124 == 0xFFFFFFFF)
								{
									iVar2 = func_251(Global_184507[iVar1 /*876*/].f_112[0x00000005]);
									Local_133.f_1D = { func_249(iVar2) + Vector(15f, 0f, 0f) };
								}
								else
								{
									iVar3 = iLocal_124;
									func_276(func_277(iVar3), &(Local_133.f_1D));
									Local_133.f_1D = { Local_133.f_1D + Vector(40f, 0f, 0f) };
								}
								Local_133.f_18 = 0x00000005;
								Local_133.f_17 = 0x00000004;
								Local_133.f_1C = iVar1;
								func_170(Local_133.f_1D);
							}
							else if (!unk_0x437347B10A200C4B(iLocal_1055, 0x00000000) && !unk_0xAFE0D3608EDA7039(iLocal_1055))
							{
								unk_0x0C8A454B494DAA0D(iLocal_1055);
							}
							else
							{
								func_275();
								Local_133.f_17 = 0x00000002;
								Local_133.f_18 = 0x00000001;
								func_169();
								unk_0x0674E58A79778E99(&(Local_133.f_1), 0x00000009);
								unk_0x0674E58A79778E99(&(Local_133.f_1), 0x0000000A);
								unk_0x0674E58A79778E99(&(Local_133.f_1), 0x0000000C);
								if (unk_0xF28AD5253D9A9A6A())
								{
									unk_0xAD825C39C65C70DD();
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_275()
{
	int iVar0;
	
	iVar0 = iLocal_1055;
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return;
	}
	if (unk_0xAFE0D3608EDA7039(iVar0))
	{
		unk_0x71EDC33E5A423750(iVar0, 0x00000001);
	}
}

void func_276(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		
		case 0x00000001:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		
		case 0x00000002:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		
		case 0x00000003:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		
		case 0x00000004:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		
		case 0x00000005:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		
		case 0x00000006:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		
		case 0x00000007:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		
		case 0x00000008:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		
		case 0x00000009:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		
		case 0x0000000A:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		
		case 0x0000000B:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		
		case 0x0000000C:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		
		case 0x0000000D:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		
		case 0x0000000E:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		
		case 0x0000000F:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		
		case 0x00000010:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		
		case 0x00000011:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		
		case 0x00000012:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		
		case 0x00000013:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		
		case 0x00000014:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		
		case 0x00000015:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

int func_277(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_278(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000003;
			break;
		
		case 0x00000003:
			return 0x00000004;
			break;
		
		case 0x00000004:
			return 0x00000005;
			break;
		
		case 0x00000005:
			return 0x00000006;
			break;
		
		case 0x00000006:
			return 0x00000007;
			break;
		
		case 0x00000007:
			return 0x00000008;
			break;
		
		case 0x00000008:
			return 0x00000009;
			break;
		
		case 0x00000009:
			return 0x0000000A;
			break;
		
		case 0x0000000A:
			return 0x0000000B;
			break;
		
		case 0x0000000B:
			return 0x0000000C;
			break;
		
		case 0x0000000C:
			return 0x0000000D;
			break;
		
		case 0x0000000D:
			return 0x0000000E;
			break;
		
		case 0x0000000E:
			return 0x0000000F;
			break;
		
		case 0x0000000F:
			return 0x00000010;
			break;
		
		case 0x00000010:
			return 0x00000011;
			break;
		
		case 0x00000011:
			return 0x00000012;
			break;
		
		case 0x00000012:
			return 0x00000013;
			break;
		
		case 0x00000013:
			return 0x00000014;
			break;
		
		case 0x00000014:
			return 0x00000015;
			break;
		
		case 0x00000015:
			return 0x00000016;
			break;
	}
	return 0x00000000;
}

int func_279(int iParam0)
{
	if ((!func_287(iParam0, 0x00000001) && !func_284(iParam0)) && func_280(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_280(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_143(iParam0, 0x00000001, 0x00000001))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_218, 0x00000006))
			{
				return 0x00000000;
			}
			if (func_284(iParam0) && !func_281(iParam0))
			{
				return 0x00000000;
			}
			if (func_153(iParam0, 0x00000015))
			{
				return 0x00000000;
			}
			if (func_153(iParam0, 0x00000019))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000004))
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000001;
}

int func_281(int iParam0)
{
	if (((func_282(iParam0) == 0x000000A7 || func_282(iParam0) == 0x000000A8) || func_282(iParam0) == 0x000000BE) || func_282(iParam0) == 0x000000B2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_282(int iParam0)
{
	if (func_283(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_283(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_284(int iParam0)
{
	if (func_286(iParam0))
	{
		return 0x00000001;
	}
	if (func_285(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_285(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_33(iParam0, 0x00000009);
	}
	return 0x00000000;
}

int func_286(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

bool func_287(int iParam0, bool bParam1)
{
	if (func_292() != 0x00000000)
	{
		return func_291(iParam0) != 0x00000000;
	}
	return func_288(iParam0, bParam1, 0x00000000);
}

int func_288(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_289(iParam0))
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

bool func_289(int iParam0)
{
	return func_290(iParam0);
}

bool func_290(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

int func_291(int iParam0)
{
	if (func_143(iParam0, 0x00000000, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0x00000000;
}

int func_292()
{
	return Global_7830;
}

bool func_293(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000001A);
}

int func_294()
{
	bool bVar0;
	
	if (func_118(&uLocal_1018, 0x00001388, 0x00000000))
	{
		if (unk_0x2358623ECCDB11B3(0x00000001, 0x00000001, 0x00000000, 0x00000000))
		{
			if (func_320(func_321()) && func_320(func_319()))
			{
				if (func_173(&bVar0))
				{
					if (func_297(bVar0) && func_295())
					{
						func_261(0x00000000);
						func_170(Local_133.f_6);
						Local_133.f_D = { 100000f, 100000f, 100000f };
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_295()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_133.f_4) && func_320(func_319())) && unk_0xE9F78D191AD5EDBA(Local_133.f_3))
	{
		if (!func_149(iLocal_1055))
		{
			if (func_296(&(Local_133.f_4), Local_133.f_3, 0x00000016, func_319(), 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_133.f_4), 0x00000001);
				unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_133.f_4), 0x00000000);
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_133.f_4), 0x00000001);
				unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_133.f_4), 0x00000011, 0x00000001);
				unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_133.f_4), 0x00000005, 0x00000000);
				unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_133.f_4), 0x00000002, 0x00000001);
				unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_133.f_4), 0x00000400, 0x00000001);
				unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_133.f_4), 0x00000800, 0x00000001);
				unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_133.f_4), 0x00008000, 0x00000000);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_133.f_4), 0x000000FB, 0x00000001);
				unk_0x5507FCD92D15E617(unk_0x1B50683925F00106(Local_133.f_4), 0x00000000);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_133.f_4), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
				if (func_156())
				{
					func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
				}
				else
				{
					func_12(0x00000001);
					func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_133.f_4))
	{
		return 0x00000000;
	}
	unk_0x71199B01895C6202(func_319());
	return 0x00000001;
}

int func_296(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	if (!unk_0xE9F78D191AD5EDBA(uParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(uParam1), 0x00000000))
	{
		return 0x00000000;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), iParam7);
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

int func_297(bool bParam0)
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_133.f_3))
	{
		if (func_320(func_321()))
		{
			func_316(&vVar0, &fVar1, bParam0);
			if (func_303(vVar0, 6f, 1f, 1f, 10f, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000) || bParam0)
			{
				if (Local_133.f_9 > -1f)
				{
					fVar1 = Local_133.f_9;
				}
				if (func_300(&(Local_133.f_3), func_321(), vVar0, fVar1, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_1055 = unk_0xB177666FAB6F4417(Local_133.f_3);
					unk_0x56FDC9ADE35F7DB0(iLocal_1055, 0x00000001, 0x00000001, 0x00000000);
					if (!bParam0)
					{
						unk_0x1AEF7184B203A58D(iLocal_1055, 30f);
					}
					unk_0x873BCADC75FF6D20(iLocal_1055);
					unk_0xB422445CBCD0AEFB(iLocal_1055, 0x00000000);
					unk_0xDC2C59BD0989562B(iLocal_1055, 0x00000001);
					unk_0x552A77B585309C2B(iLocal_1055, 0f);
					if (unk_0xF1D385D359D58F72("HeliTaxi", 0x00000002))
					{
						unk_0xA1093ABB024EC9BD(iLocal_1055, "HeliTaxi", 0x00000001);
					}
					func_160(0x00000001);
					func_298();
					if (func_333())
					{
					}
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_133.f_3))
	{
		return 0x00000000;
	}
	unk_0x71199B01895C6202(func_321());
	return 0x00000001;
}

void func_298()
{
	func_299(Global_26B66F.f_34A, iLocal_1055);
}

void func_299(int iParam0, int iParam1)
{
	if (unk_0x579935D850368851(iParam1) > 0x00000000)
	{
		unk_0x446EA2500F021666(iParam1, 0x00000000);
		if (iParam0 == 0x00000000)
		{
		}
	}
}

int func_300(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
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
			unk_0x120A395B0ECB8EA5(iVar1, iParam8);
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
			unk_0x750A9DEB80D6992C(iVar1, iParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 0x00000001);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 0x00000005, 0x00000005, 1f);
			}
			func_301(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_301(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_302(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
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

int func_302(int iParam0, vector3 vParam1, int iParam2)
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

int func_303(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_311(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_304(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_304(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_308(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
		if (func_143(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_306(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_305(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
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
								if (unk_0x0EB28750412C3A5A(func_308(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_308(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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

int func_305(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_306(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_307(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_307(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_10();
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

Vector3 func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_310() && Global_184507[iVar0 /*876*/].f_34F) && !func_309(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_178(iParam0);
}

int func_309(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_310()
{
	return Global_2564C8.f_11;
}

int func_311(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_143(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_305(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_312(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_178(iVar1), vParam0, 0x00000001) < fParam1)
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

int func_312(int iParam0)
{
	if (func_315(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_314(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_313(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_313(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_6(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<13> func_314(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_315(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_314(iParam0) };
		Global_26594F = { func_314(iParam1) };
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

void func_316(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		*uParam0 = { Local_133.f_6 };
		*uParam1 = Local_133.f_9;
		fVar0 = unk_0x877D3FF6F9D1F987(*uParam0, uParam0->f_1, *uParam0, uParam0->f_1);
		if (fVar0 < (Local_133.f_6.f_2 + 100f))
		{
			fVar0 = (Local_133.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar0;
	}
	else
	{
		*uParam0 = { func_317(Local_133.f_6, 140f, 180f, (200f / 2f)) };
		*uParam1 = unk_0xE7D606C557C86100((Local_133.f_6 - *uParam0), (Local_133.f_6.f_1 - uParam0->f_1));
		fVar1 = unk_0x877D3FF6F9D1F987((*uParam0 - 180f), (uParam0->f_1 - 180f), (*uParam0 + 180f), (uParam0->f_1 + 180f));
		if (fVar1 < (Local_133.f_6.f_2 + 100f))
		{
			fVar1 = (Local_133.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar1;
	}
}

Vector3 func_317(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_318(vVar0, unk_0x79833B02DBD2A244(fParam1, fParam2)) };
	vVar0.z = unk_0x79833B02DBD2A244(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_318(vector3 vParam0, float fParam1)
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

int func_319()
{
	if (func_333())
	{
		return 0x19B6FF06;
	}
	return joaat("s_m_y_pilot_01");
}

bool func_320(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_321()
{
	if (func_333())
	{
		return joaat("supervolito");
	}
	return joaat("maverick");
}

void func_322()
{
	if (unk_0xE4EDC4B0E92C078B(uLocal_139))
	{
		if (func_325(iLocal_1055, uLocal_139, 0x00000001))
		{
			unk_0xDC5B2F9D0CCE3A10(uLocal_139, "HTX_BLIP");
			iLocal_140 = 0x00000001;
			func_323(&uLocal_139, iLocal_140);
		}
	}
}

void func_323(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		uVar0 = func_324(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, uVar0);
	}
}

int func_324(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000004;
		
		case 0x00000000:
			return 0x00000004;
		
		case 0x00000006:
			return 0x0000003B;
		
		case 0x00000012:
			return 0x00000002;
		
		case 0x0000000D:
			return 0x00000005;
		
		case 0x00000074:
			return 0x00000026;
		
		case 0x0000001C:
			return 0x00000006;
		
		case 0x0000001D:
			return 0x00000007;
		
		case 0x0000001E:
			return 0x00000008;
		
		case 0x0000001F:
			return 0x00000009;
		
		case 0x00000020:
			return 0x0000000A;
		
		case 0x00000021:
			return 0x0000000B;
		
		case 0x00000022:
			return 0x0000000C;
		
		case 0x00000023:
			return 0x0000000D;
		
		case 0x00000024:
			return 0x0000000E;
		
		case 0x00000025:
			return 0x0000000F;
		
		case 0x00000026:
			return 0x00000010;
		
		case 0x00000027:
			return 0x00000011;
		
		case 0x00000028:
			return 0x00000012;
		
		case 0x00000029:
			return 0x00000013;
		
		case 0x0000002A:
			return 0x00000014;
		
		case 0x0000002B:
			return 0x00000015;
		
		case 0x0000002C:
			return 0x00000016;
		
		case 0x0000002D:
			return 0x00000017;
		
		case 0x0000002E:
			return 0x00000018;
		
		case 0x0000002F:
			return 0x00000019;
		
		case 0x00000030:
			return 0x0000001A;
		
		case 0x00000031:
			return 0x0000001B;
		
		case 0x00000032:
			return 0x0000001C;
		
		case 0x00000033:
			return 0x0000001D;
		
		case 0x00000034:
			return 0x0000001E;
		
		case 0x00000035:
			return 0x0000001F;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000021;
		
		case 0x00000038:
			return 0x00000022;
		
		case 0x00000039:
			return 0x00000023;
		
		case 0x0000003A:
			return 0x00000024;
		
		case 0x0000003B:
			return 0x00000025;
		
		case 0x00000009:
			return 0x00000039;
		
		case 0x0000000A:
			return 0x00000035;
		
		case 0x00000076:
			return 0x00000039;
		
		case 0x0000000E:
			return 0x00000038;
		
		case 0x00000003:
			return 0x00000037;
		
		case 0x00000015:
			return 0x00000032;
		
		case 0x0000000F:
			return 0x00000033;
		
		case 0x00000014:
			return 0x00000034;
		
		case 0x0000000B:
			return 0x00000036;
		
		case 0x00000017:
			return 0x0000003A;
		
		case 0x0000000C:
			return 0x0000003C;
		
		case 0x00000018:
			return 0x0000003D;
		
		case 0x00000004:
			return 0x0000003E;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 0x01000000) + (iVar1 * 0x00010000)) + iVar2 * 256) + iVar3);
	return 0x00000000;
}

int func_325(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x301901B13DC3365B(uParam1);
	if (func_332(iParam0, bParam2))
	{
		if (!iVar0 == func_331(iVar0))
		{
			unk_0xBC8E0A7390523199(uParam1, func_331(iVar0));
			return 0x00000001;
		}
		else if (func_327() && iVar0 == func_331(iVar0))
		{
			return 0x00000001;
		}
	}
	else if (!iVar0 == func_326(iVar0))
	{
		unk_0xBC8E0A7390523199(uParam1, func_326(iVar0));
		return 0x00000001;
	}
	else if (func_327() && iVar0 == func_326(iVar0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000040:
			return 0x000001A6;
			break;
		
		case 0x00000210:
			return 0x00000210;
			break;
		
		case 0x00000211:
			return 0x00000211;
			break;
		
		case 0x00000212:
			return 0x00000212;
			break;
		
		case 0x00000213:
			return 0x00000213;
			break;
		
		case 0x00000214:
			return 0x00000214;
			break;
		
		case 0x00000215:
			return 0x00000215;
			break;
		
		case 0x00000216:
			return 0x00000216;
			break;
		
		case 0x00000200:
			return 0x00000200;
			break;
		
		case 0x0000022E:
			return 0x0000022E;
			break;
		
		case 0x0000022F:
			return 0x0000022F;
			break;
		
		case 0x00000230:
			return 0x00000230;
			break;
		
		case 0x00000231:
			return 0x00000231;
			break;
		
		case 0x00000232:
			return 0x00000232;
			break;
		
		case 0x00000233:
			return 0x00000233;
			break;
		
		case 0x00000253:
			return 0x00000253;
			break;
		
		case 0x00000254:
			return 0x00000254;
			break;
		
		case 0x00000255:
			return 0x00000255;
			break;
		
		case 0x00000256:
			return 0x00000256;
			break;
		
		case 0x00000257:
			return 0x00000257;
			break;
		
		case 0x00000258:
			return 0x00000258;
			break;
		
		case 0x00000259:
			return 0x00000259;
			break;
		
		case 0x0000025A:
			return 0x0000025A;
			break;
		
		case 0x0000025B:
			return 0x0000025B;
			break;
		
		case 0x0000024D:
			return 0x0000024D;
			break;
		
		case 0x00000277:
			return 0x00000277;
			break;
		
		case 0x00000278:
			return 0x00000278;
			break;
		
		case 0x00000279:
			return 0x00000279;
			break;
		
		case 0x0000027A:
			return 0x0000027A;
			break;
		
		case 0x0000027B:
			return 0x0000027B;
			break;
		
		case 0x0000027C:
			return 0x0000027C;
			break;
		
		case 0x0000027D:
			return 0x0000027D;
			break;
		
		case 0x00000280:
			return 0x00000280;
			break;
		
		case 0x00000292:
			return 0x00000292;
			break;
		
		case 0x00000293:
			return 0x00000293;
			break;
		
		case 0x00000294:
			return 0x00000294;
			break;
		
		case 0x00000295:
			return 0x00000295;
			break;
		
		case 0x00000296:
			return 0x00000296;
			break;
		
		case 0x00000297:
			return 0x00000297;
			break;
		
		case 0x00000298:
			return 0x00000298;
			break;
		
		case 0x00000299:
			return 0x00000299;
			break;
		
		case 0x0000029A:
			return 0x0000029A;
			break;
		
		case 0x0000029B:
			return 0x0000029B;
			break;
		
		case 0x0000029C:
			return 0x0000029C;
			break;
		
		case 0x0000029D:
			return 0x0000029D;
			break;
		
		case 0x00000286:
			return 0x00000286;
			break;
		
		case 0x000002E6:
			return 0x000002E6;
			break;
	}
	return iParam0;
}

int func_327()
{
	if (((func_330() || func_329()) || func_310()) || func_328())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_328()
{
	return Global_2564C8.f_13;
}

var func_329()
{
	return Global_2564C8.f_10;
}

var func_330()
{
	return Global_2564C8.f_F;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0x000001A6:
			return 0x00000040;
			break;
		
		case 0x00000210:
			return 0x00000210;
			break;
		
		case 0x00000211:
			return 0x00000211;
			break;
		
		case 0x00000212:
			return 0x00000212;
			break;
		
		case 0x00000213:
			return 0x00000213;
			break;
		
		case 0x00000214:
			return 0x00000214;
			break;
		
		case 0x00000215:
			return 0x00000215;
			break;
		
		case 0x00000216:
			return 0x00000216;
			break;
		
		case 0x00000200:
			return 0x00000200;
			break;
		
		case 0x0000022E:
			return 0x0000022E;
			break;
		
		case 0x0000022F:
			return 0x0000022F;
			break;
		
		case 0x00000230:
			return 0x00000230;
			break;
		
		case 0x00000231:
			return 0x00000231;
			break;
		
		case 0x00000232:
			return 0x00000232;
			break;
		
		case 0x00000233:
			return 0x00000233;
			break;
		
		case 0x00000253:
			return 0x00000253;
			break;
		
		case 0x00000254:
			return 0x00000254;
			break;
		
		case 0x00000255:
			return 0x00000255;
			break;
		
		case 0x00000256:
			return 0x00000256;
			break;
		
		case 0x00000257:
			return 0x00000257;
			break;
		
		case 0x00000258:
			return 0x00000258;
			break;
		
		case 0x00000259:
			return 0x00000259;
			break;
		
		case 0x0000025A:
			return 0x0000025A;
			break;
		
		case 0x0000025B:
			return 0x0000025B;
			break;
		
		case 0x0000024D:
			return 0x0000024D;
			break;
		
		case 0x00000277:
			return 0x00000277;
			break;
		
		case 0x00000278:
			return 0x00000278;
			break;
		
		case 0x00000279:
			return 0x00000279;
			break;
		
		case 0x0000027A:
			return 0x0000027A;
			break;
		
		case 0x0000027B:
			return 0x0000027B;
			break;
		
		case 0x0000027C:
			return 0x0000027C;
			break;
		
		case 0x0000027D:
			return 0x0000027D;
			break;
		
		case 0x00000280:
			return 0x00000280;
			break;
		
		case 0x00000292:
			return 0x00000292;
			break;
		
		case 0x00000293:
			return 0x00000293;
			break;
		
		case 0x00000294:
			return 0x00000294;
			break;
		
		case 0x00000295:
			return 0x00000295;
			break;
		
		case 0x00000296:
			return 0x00000296;
			break;
		
		case 0x00000297:
			return 0x00000297;
			break;
		
		case 0x00000298:
			return 0x00000298;
			break;
		
		case 0x00000299:
			return 0x00000299;
			break;
		
		case 0x0000029A:
			return 0x0000029A;
			break;
		
		case 0x0000029B:
			return 0x0000029B;
			break;
		
		case 0x0000029C:
			return 0x0000029C;
			break;
		
		case 0x0000029D:
			return 0x0000029D;
			break;
		
		case 0x00000286:
			return 0x00000286;
			break;
		
		case 0x000002E6:
			return 0x000002E6;
			break;
	}
	return iParam0;
}

int func_332(int iParam0, bool bParam1)
{
	if (((!unk_0x437347B10A200C4B(iParam0, 0x00000000) && (!unk_0xE934758D273C899A(iParam0) && unk_0xF79A7BCA9E38BBBC(iParam0))) && SYSTEM::VMAG(unk_0x56E9E0FD5ACCD35D(iParam0)) < 0.5f) && func_146(iParam0, bParam1, bParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_333()
{
	if (Global_26B66F.f_34A > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_334()
{
	if (bLocal_1044)
	{
		if (!iLocal_1045)
		{
			if (func_257(iLocal_1055))
			{
				unk_0xAA6B3A4292417750(iLocal_1055, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_1045 = 0x00000001;
			}
		}
	}
	else if (iLocal_1045)
	{
		if (func_257(iLocal_1055))
		{
			unk_0xAA6B3A4292417750(iLocal_1055, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			iLocal_1045 = 0x00000000;
		}
	}
}

int func_335(var uParam0)
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

void func_336(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_119(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_337()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Local_133.f_17 == 0x00000006)
	{
		vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000006;
	}
	iVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iLocal_121 = 0x00000000;
	switch (vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0x00000000:
			if (Local_133.f_17 > 0x00000000)
			{
				vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!func_149(iLocal_1055))
			{
				func_479();
				func_457();
				func_456();
				if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1055, 0x00000000))
					{
						unk_0xF3039DE1FDB4F6FD(0x00000000);
						func_455();
						unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0x00000001, 0x00000000);
						unk_0xF4C7CEF3BC475271();
						vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000002;
						unk_0x0674E58A79778E99(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000000);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!func_149(iLocal_1055))
			{
				if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1055, 0x00000000))
					{
						func_454();
						func_453();
						unk_0xF4C7CEF3BC475271();
						if (unk_0xBFF81ED3B99522C7() && func_452(0x00000001, 0x00000001))
						{
							if (unk_0xF28AD5253D9A9A6A())
							{
								if (unk_0x91E3F625EF57450D(0x00000000))
								{
									if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000015))
									{
										iVar0 = 0x00000001;
									}
								}
								else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
								{
									iVar0 = 0x00000001;
								}
								if (iVar0 || unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000C))
								{
									unk_0x0674E58A79778E99(&(Local_133.f_1), 0x0000000C);
									unk_0x0674E58A79778E99(&(Local_133.f_2), 0x00000004);
									vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000003;
									unk_0x0674E58A79778E99(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000005);
									unk_0x5D96D8530B3D0904(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000006);
								}
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000007) && iLocal_116 == 0x00000000)
							{
								if (unk_0x91E3F625EF57450D(0x00000000))
								{
									if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000065))
									{
										iLocal_121 = 0x00000001;
									}
								}
								else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D1))
								{
									iLocal_121 = 0x00000001;
								}
							}
						}
						if (Local_133.f_17 >= 0x00000005)
						{
							vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000005;
						}
						if (Local_133.f_17 == 0x00000004)
						{
							vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000004;
						}
					}
					else
					{
						vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!func_149(iLocal_1055))
			{
				if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1055, 0x00000000))
					{
						func_454();
						unk_0xF4C7CEF3BC475271();
						if ((unk_0xBFF81ED3B99522C7() && func_452(0x00000001, 0x00000001)) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x6A67A5CC) != 0x00000001)
						{
							if (unk_0x91E3F625EF57450D(0x00000000))
							{
								if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000024))
								{
									bVar1 = 0x00000001;
								}
							}
							else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA))
							{
								bVar1 = 0x00000001;
							}
							if (bVar1)
							{
								vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000002;
								unk_0x5D96D8530B3D0904(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000005);
							}
							if (unk_0x91E3F625EF57450D(0x00000000))
							{
								if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000065))
								{
									iLocal_121 = 0x00000001;
								}
							}
							else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D1))
							{
								iLocal_121 = 0x00000001;
							}
						}
						if (Local_133.f_17 >= 0x00000005)
						{
							vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000005;
						}
						else if (Local_133.f_17 == 0x00000002)
						{
							unk_0x0674E58A79778E99(&(Local_133.f_1), 0x00000009);
							vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000002;
						}
						else if (Local_133.f_17 == 0x00000004)
						{
							vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000004;
						}
					}
					else
					{
						vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000004:
			if ((((((func_451("POD_CHAM_CIGAR") || func_451("POD_CHAM_WEB")) || func_451("POD_UNKNOWN")) || func_451("POD_CIGAR")) || func_451("POD_WEB")) || func_451("LUX_VEH_ACT_1ST")) || func_451("LUX_ACT_1ST_SW"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (unk_0xEAE0D21A50E6C7F4(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000008))
			{
				unk_0x0674E58A79778E99(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000008);
			}
			if (!func_156())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_133.f_2, 0x00000011))
				{
					if (func_263())
					{
						func_12(0x00000001);
						func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
						if (iLocal_124 == 0xFFFFFFFF)
						{
							func_100(&uLocal_853, "EXHELAU", "EXHEL_OFFICE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						}
						else
						{
							func_100(&uLocal_853, "EXHELAU", "EXHEL_CUSTOM", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
						}
						unk_0x5D96D8530B3D0904(&(Local_133.f_2), 0x00000011);
					}
				}
			}
			if ((Local_133.f_1C == unk_0xD803B885F5E47A62() && func_450()) && Local_133.f_1B)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000010))
				{
					if (!func_149(iLocal_1055))
					{
						if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1055, 0x00000000))
							{
								if (!func_449())
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000F))
									{
										iVar2 = func_448(0x00000001);
										if (iVar2 > 0x00000000)
										{
											if (iLocal_124 == 0xFFFFFFFF)
											{
												func_447(iVar2, unk_0xD803B885F5E47A62(), 0x00000000, Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112[0x00000005]);
											}
											else
											{
												func_447(iVar2, unk_0xD803B885F5E47A62(), 0x00000001, iLocal_124);
											}
											unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000010);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!unk_0xBFF81ED3B99522C7())
			{
				func_494(0x00000000);
			}
			if (Local_133.f_17 == 0x00000002)
			{
				vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000002;
				if (unk_0xEAE0D21A50E6C7F4(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000008))
				{
					unk_0x0674E58A79778E99(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000008);
				}
			}
			break;
		
		case 0x00000005:
			if (!func_149(iLocal_1055))
			{
				if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
				{
					func_445();
					func_453();
					unk_0xF4C7CEF3BC475271();
					if (Local_133.f_17 == 0x00000002)
					{
						unk_0x0674E58A79778E99(&(Local_133.f_1), 0x00000009);
						vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000002;
					}
				}
			}
			break;
		
		case 0x00000006:
			func_494(0x00000001);
			break;
	}
	if (((vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 != 0x00000004 && iLocal_122) && unk_0xBFF81ED3B99522C7()) && func_441())
	{
		if (iLocal_124 > 0xFFFFFFFE)
		{
		}
		if (!unk_0xAFE0D3608EDA7039(iLocal_1055))
		{
			unk_0x0C8A454B494DAA0D(iLocal_1055);
		}
		unk_0x5D96D8530B3D0904(&iLocal_138, 0x0000000F);
		func_440();
		vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000004;
		unk_0x0674E58A79778E99(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000005);
		unk_0x0674E58A79778E99(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000006);
		unk_0x5D96D8530B3D0904(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000008);
		iLocal_122 = 0x00000000;
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000007))
	{
		unk_0x0674E58A79778E99(&iLocal_1056, 0x00000007);
	}
	func_363();
	func_338();
}

void func_338()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	
	iVar1 = 0x00000001;
	if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && !func_149(iLocal_1055))
	{
		if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_1055) && !func_362(unk_0x16F2683693E537C9(), iLocal_1055, 0xFFFFFFFF))
		{
			unk_0x3584F71E5CA29322(0x00000007);
			unk_0x3584F71E5CA29322(0x00000009);
			unk_0x3584F71E5CA29322(0x00000006);
			unk_0x3584F71E5CA29322(0x00000008);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		}
		if (unk_0x83D8570832F172A7(uLocal_146))
		{
			if (func_361() || func_142(0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x0000000B))
				{
					unk_0x5D96D8530B3D0904(&iLocal_138, 0x0000000B);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x0000000B))
			{
				iLocal_1057 = 0x00000000;
				unk_0x0674E58A79778E99(&iLocal_138, 0x0000000B);
			}
			if (func_452(0x00000001, 0x00000001))
			{
				if ((((vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000001 && unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000002)) || vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000002) || vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000003) || vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000005)
				{
					iLocal_1056 = 0x00000000;
					Var2 = { func_360() };
					if (vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000001)
					{
						if (((!func_259() && !unk_0xEAE0D21A50E6C7F4(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000000)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) && !func_358(unk_0xD803B885F5E47A62()))
						{
							unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000000);
						}
						else
						{
							iVar1 = 0x00000000;
						}
					}
					else if (vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000002)
					{
						if (unk_0xBFF81ED3B99522C7())
						{
							if (unk_0xF28AD5253D9A9A6A())
							{
								unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000001);
							}
							else
							{
								unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000002);
							}
							if (func_441())
							{
								unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000007);
							}
						}
						if (unk_0xEE9925602B29903C(iLocal_1055) < 10f)
						{
							unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000003);
						}
						else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xEF8D6B40) != 0x00000001 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xEF8D6B40) != 0x00000000)
						{
							unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000004);
							if (unk_0xA30B8362589C124A(iLocal_1055, 0x00000000, 0x00000000) != unk_0x16F2683693E537C9() && unk_0xEE9925602B29903C(iLocal_1055) < 40f)
							{
								if (func_357())
								{
									unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000005);
									iVar0 = 0x00000001;
								}
							}
						}
						else
						{
							iVar1 = 0x00000000;
						}
					}
					else if (vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000003)
					{
						if (unk_0xBFF81ED3B99522C7())
						{
							unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000006);
							if (func_441())
							{
								unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000007);
							}
						}
						unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000004);
					}
					else if (vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000005)
					{
						if (unk_0xEE9925602B29903C(iLocal_1055) < 10f)
						{
							unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000003);
						}
						else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xEF8D6B40) != 0x00000001 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xEF8D6B40) != 0x00000000)
						{
							unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000004);
							if (unk_0xA30B8362589C124A(iLocal_1055, 0x00000000, 0x00000000) != unk_0x16F2683693E537C9() && unk_0xEE9925602B29903C(iLocal_1055) < 40f)
							{
								if (func_357())
								{
									unk_0x5D96D8530B3D0904(&iLocal_1056, 0x00000005);
									iVar0 = 0x00000001;
								}
							}
						}
						else
						{
							iVar1 = 0x00000000;
						}
					}
					else
					{
						iVar1 = 0x00000000;
					}
					if (func_356())
					{
						iVar1 = 0x00000000;
					}
					if (iVar1 == 0x00000001)
					{
						func_355();
						func_354(0x00000001);
						func_352(0x00000001);
						if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x6A67A5CC) != 0x00000001)
						{
							if ((iLocal_1056 != iLocal_1057 || unk_0xB8E3620B82AD47D7(0x00000002)) || Global_F03D)
							{
								Global_F03D = 0x00000000;
								func_350(&uLocal_147);
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000000))
								{
									func_349(unk_0xF59058FCB716F903(0x00000000, 0x00000017, 0x00000001), "HTX_ENTER", &uLocal_147, 0x00000000);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000001))
								{
									if (unk_0x91E3F625EF57450D(0x00000000))
									{
										func_349(unk_0xF59058FCB716F903(0x00000000, 0x00000015, 0x00000001), "HTX_START", &uLocal_147, 0x00000000);
									}
									else
									{
										func_349(unk_0xF59058FCB716F903(0x00000002, 0x000000C9, 0x00000001), "HTX_START", &uLocal_147, 0x00000000);
									}
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000002))
								{
									func_349(unk_0xF59058FCB716F903(0x00000002, 0x000000C7, 0x00000001), "HTX_WAYP", &uLocal_147, 0x00000000);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000003))
								{
									func_349(unk_0xF59058FCB716F903(0x00000000, 0x0000004B, 0x00000001), "HTX_EXIT1", &uLocal_147, 0x00000000);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000004))
								{
									func_349(unk_0xF59058FCB716F903(0x00000000, 0x0000004B, 0x00000001), "HTX_EXIT2", &uLocal_147, 0x00000000);
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000005))
								{
									if (unk_0x91E3F625EF57450D(0x00000000))
									{
										func_349(unk_0xF59058FCB716F903(0x00000000, 0x00000016, 0x00000001), "HTX_EXIT3", &uLocal_147, 0x00000000);
									}
									else
									{
										func_349(unk_0xF59058FCB716F903(0x00000000, 0x00000063, 0x00000001), "HTX_EXIT3", &uLocal_147, 0x00000000);
									}
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000006))
								{
									if (unk_0x91E3F625EF57450D(0x00000000))
									{
										func_349(unk_0xF59058FCB716F903(0x00000000, 0x00000024, 0x00000001), "HTX_STOP", &uLocal_147, 0x00000000);
									}
									else
									{
										func_349(unk_0xF59058FCB716F903(0x00000002, 0x000000CA, 0x00000001), "HTX_STOP", &uLocal_147, 0x00000000);
									}
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_1056, 0x00000007))
								{
									if (func_348() || func_346(unk_0xD803B885F5E47A62()))
									{
										if (unk_0x91E3F625EF57450D(0x00000000))
										{
											func_349(unk_0xF59058FCB716F903(0x00000002, 0x00000065, 0x00000001), "HTX_QT_WARP", &uLocal_147, 0x00000000);
										}
										else
										{
											func_349(unk_0xF59058FCB716F903(0x00000002, 0x000000D1, 0x00000001), "HTX_QT_WARP", &uLocal_147, 0x00000000);
										}
									}
									else if (unk_0x91E3F625EF57450D(0x00000000))
									{
										func_349(unk_0xF59058FCB716F903(0x00000002, 0x00000065, 0x00000001), "HTX_OFF_WARP", &uLocal_147, 0x00000000);
									}
									else
									{
										func_349(unk_0xF59058FCB716F903(0x00000002, 0x000000D1, 0x00000001), "HTX_OFF_WARP", &uLocal_147, 0x00000000);
									}
								}
							}
							func_339(&uLocal_146, &Var2, &uLocal_147, func_345(&uLocal_147));
							iLocal_1057 = iLocal_1056;
						}
					}
				}
			}
		}
		else
		{
			uLocal_146 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (iVar0 == 0x00000001)
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
		}
	}
	Global_26B66F.f_104 = iVar1;
}

void func_339(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (iParam3 == 0x00000001 || unk_0xB8E3620B82AD47D7(0x00000002))
	{
		*uParam2 = 0x00000000;
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_344(uParam2);
	}
	if (Global_141384 < 0x00000002)
	{
		func_343(0x00000001);
	}
	if (*uParam2 == 0x00000000)
	{
		if (!unk_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < uParam2->f_2B5)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B1, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_2B2, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_37;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_38;
						func_342(unk_0xF59058FCB716F903(iVar1, iVar2, 0x00000001));
						if (iVar3 < 0x00000169)
						{
							func_342(unk_0xF59058FCB716F903(iVar1, iVar3, 0x00000001));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_36;
						uVar5 = uParam2->f_1[iVar0 /*57*/].f_37;
						func_342(unk_0xE32F7AC5E6DF304A(iVar4, uVar5, 0x00000001));
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
						func_36(&(uParam2->f_1[iVar0 /*57*/].f_20));
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
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_342(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_10)))
					{
						func_342(&(uParam2->f_1[iVar0 /*57*/].f_10));
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
						func_36(&(uParam2->f_1[iVar0 /*57*/].f_20));
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
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_2BB);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
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
		func_341(*uParam0, uParam1);
	}
	func_340();
}

void func_340()
{
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
}

void func_341(var uParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0x00000000);
}

void func_342(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_343(int iParam0)
{
	Global_141384 = iParam0;
}

void func_344(var uParam0)
{
	uParam0->f_2B4 = 0x00000000;
}

int func_345(var uParam0)
{
	return uParam0->f_2B4;
}

bool func_346(int iParam0)
{
	return func_347(iParam0) != 0x00000000;
}

int func_347(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_86;
}

int func_348()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000004)
	{
		if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iVar0 /*3*/] != 0x00000000)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_349(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_350(var uParam0)
{
	func_351(uParam0);
	uParam0->f_2B4 = 0x00000001;
}

void func_351(var uParam0)
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

void func_352(bool bParam0)
{
	if (bParam0)
	{
		if (func_353())
		{
			Global_2564C8.f_25 = 0x00000001;
		}
	}
	else
	{
		Global_2564C8.f_25 = 0x00000000;
	}
}

bool func_353()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

void func_354(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_355()
{
	Global_26E1B2.f_102 = 0x00000001;
}

int func_356()
{
	if (iLocal_116 > 0x00000000 || iLocal_122 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_357()
{
	if (unk_0x486D653D4D029ACE(iLocal_1055) && !func_333())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_358(int iParam0)
{
	return func_359(iParam0) == joaat("weapon_minigun");
}

int func_359(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_253;
}

struct<9> func_360()
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

bool func_361()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_362(int iParam0, int iParam1, int iParam2)
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

void func_363()
{
	if (iLocal_116 == 0x00000000)
	{
		if (iLocal_121)
		{
			if (func_348() || func_346(unk_0xD803B885F5E47A62()))
			{
				iLocal_120 = 0x00000001;
				iLocal_116 = 0x00000001;
			}
			else
			{
				iLocal_122 = 0x00000001;
				iLocal_124 = 0xFFFFFFFF;
				iLocal_123 = 0x00000001;
			}
		}
	}
	if (iLocal_116 == 0x00000001)
	{
		if (func_441())
		{
			func_367();
		}
		else
		{
			iLocal_123 = 0x00000001;
		}
	}
	if (iLocal_123)
	{
		func_364(0x00000001, 0xFFFFFFFF);
		iLocal_116 = 0x00000000;
		iLocal_118 = 0x00000000;
		iLocal_123 = 0x00000000;
		iLocal_121 = 0x00000000;
	}
}

void func_364(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_366(&iVar0, 0x00000000, iParam1))
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
		func_365(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_365(var uParam0)
{
	if (uParam0->f_9 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0xE17FDF9E3068281B(uParam0);
		}
		*uParam0 = 0x00000000;
		uParam0->f_9 = 0x00000000;
	}
}

int func_366(var uParam0, bool bParam1, int iParam2)
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

void func_367()
{
	int iVar0;
	
	func_430(&Local_132);
	if (func_428(0x00000000, 0xFFFFFFFF, 0x00000000))
	{
		if (iLocal_120)
		{
			func_417();
			iLocal_120 = 0x00000000;
		}
		else
		{
			func_416(iLocal_118, 0x00000001, 0x00000001);
		}
		func_414();
		func_412();
		func_378(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		if (!bLocal_126)
		{
			if (func_377())
			{
				iLocal_120 = 0x00000001;
			}
		}
		else if (!func_377())
		{
			iLocal_120 = 0x00000001;
		}
		if (!bLocal_127)
		{
			if (func_372())
			{
				iLocal_120 = 0x00000001;
			}
		}
		else if (!func_372())
		{
			iLocal_120 = 0x00000001;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000005)
		{
			if (!uLocal_129[iVar0])
			{
				if (func_371(iLocal_125[iVar0]))
				{
					iLocal_120 = 0x00000001;
				}
			}
			else if (!func_371(iLocal_125[iVar0]))
			{
				iLocal_120 = 0x00000001;
			}
			iVar0++;
		}
		if (!bLocal_128)
		{
			if (func_368())
			{
				iLocal_120 = 0x00000001;
			}
		}
		else if (!func_368())
		{
			iLocal_120 = 0x00000001;
		}
	}
}

int func_368()
{
	if (func_346(unk_0xD803B885F5E47A62()))
	{
		if (SYSTEM::VDIST(func_178(unk_0xD803B885F5E47A62()), Global_199459.f_1E8[func_369(func_347(unk_0xD803B885F5E47A62())) /*3*/]) > 100f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_195(iVar0) == 0x00000001)
		{
			if (func_370(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003C:
			return 0x00000001;
			break;
		
		case 0x0000003D:
			return 0x00000002;
			break;
		
		case 0x0000003E:
			return 0x00000003;
			break;
		
		case 0x0000003F:
			return 0x00000004;
			break;
		
		case 0x00000040:
			return 0x00000005;
			break;
		
		case 0x00000041:
			return 0x00000006;
			break;
		
		case 0x00000042:
			return 0x00000007;
			break;
		
		case 0x00000043:
			return 0x00000008;
			break;
		
		case 0x00000044:
			return 0x00000009;
			break;
		
		case 0x00000045:
			return 0x0000000A;
			break;
	}
	return 0x00000000;
}

int func_371(int iParam0)
{
	if (iParam0 > 0x00000000)
	{
		if (SYSTEM::VDIST(func_178(unk_0xD803B885F5E47A62()), func_183(iParam0)) > 100f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_372()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iLocal_1055;
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
	iVar2 = 0x00000000;
	while (iVar2 < iVar1)
	{
		iVar5 = (iVar2 - 0x00000001);
		if (!unk_0xBBA8A868118C90ED(iVar0, iVar5, 0x00000000))
		{
			iVar4 = unk_0xA30B8362589C124A(iVar0, iVar5, 0x00000000);
			if (!unk_0x437347B10A200C4B(iVar4, 0x00000000) && unk_0x34BFC6F0CB887BC2(iVar4))
			{
				if (!func_375())
				{
					iVar3 = unk_0x83FACCC48B68F9D1(iVar4);
					if (iVar3 != unk_0xD803B885F5E47A62())
					{
						return 0x00000000;
					}
				}
				else
				{
					iVar3 = unk_0x83FACCC48B68F9D1(iVar4);
					if (iVar3 != func_5() && func_143(iVar3, 0x00000001, 0x00000001))
					{
						if (!func_373(iVar3, func_6(unk_0xD803B885F5E47A62()), 0x00000001))
						{
							return 0x00000000;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (iLocal_130)
	{
		if (!func_449())
		{
			iLocal_130 = 0x00000000;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_373(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_374(iParam0, iParam1))
			{
				return 0x00000000;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_5())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0x00000000;
}

int func_374(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_5())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_375()
{
	return func_376(unk_0xD803B885F5E47A62());
}

int func_376(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_5())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_377()
{
	if (SYSTEM::VDIST(func_178(unk_0xD803B885F5E47A62()), func_249(func_251(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112[0x00000005]))) > 200f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_378(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_366(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
	}
	if (!func_410(0x00000000, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_408(0x0000001D, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_574E = 0x00000000;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar57 = Global_574C;
	}
	else
	{
		fVar57 = (((Global_574C + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_574D;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar58, &iVar59);
		fVar61 = unk_0x33D480CCE15C991A(0x00000000);
		if (func_407())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_407())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_574E.f_1462 <= 0x00000001)
		{
			func_403(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			Global_574E.f_177E = 0x00000001;
		}
	}
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000002)
	{
		if (iVar5 == 0x00000001 && Global_574E.f_1660)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar49 = Global_574C;
			}
			else
			{
				if (Global_574E)
				{
					StringCopy(&cVar63, func_402(0x0000001D), 64);
					StringCopy(&cVar64, func_400(0x0000001D, 0x00000001), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
					{
						func_399(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
				}
				if (Global_574E.f_20C3)
				{
					iVar1 = Global_574E.f_20BF;
					iVar2 = Global_574E.f_20C0;
					iVar3 = Global_574E.f_20C1;
					iVar4 = Global_574E.f_20C2;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				func_399(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0x00000000)
				{
					func_398();
					unk_0x070005E852D4C0E9(&(Global_574E.f_1));
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x00000000;
					iVar18 = 0x00000000;
					iVar14 = 0x00000000;
					while (iVar14 < Global_574E.f_44)
					{
						if (Global_574E.f_5[iVar14] == 0x00000002)
						{
							unk_0x6D99DF8263D35CE5(Global_574E.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000003)
						{
							unk_0x21994591120B91F0(Global_574E.f_E[iVar16], Global_574E.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000001)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000008)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000005)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000006)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000007)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000009)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_574B + 0.00390625f), ((Global_574C + fVar55) + 0.00416664f), 0x00000000);
				}
				if (Global_574E.f_1667)
				{
					func_398();
					func_396((((Global_574B + fParam5) - 0.00390625f) - func_397("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0x00000000)
					{
						func_398();
						func_396((((Global_574B + fParam5) - 0.00390625f) - func_397("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
					}
				}
			}
			iVar6 = Global_574E.f_166A;
			iVar9 = 0x00000000;
			fVar65 = fVar49;
			if (Global_574E.f_20CD)
			{
				iVar1 = Global_574E.f_20C9;
				iVar2 = Global_574E.f_20CA;
				iVar3 = Global_574E.f_20CB;
				iVar4 = Global_574E.f_20CC;
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_574E.f_1469 && iVar6 <= Global_574E.f_1462)
			{
				if (iVar6 >= 0x00000000)
				{
					if (Global_574E.f_156D[iVar6])
					{
						if (Global_574E.f_14EC[iVar6] && iVar6 != Global_574E.f_166A)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar54 = Global_574E.f_1671[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			if (Global_574E.f_1663 > Global_574E.f_1469)
			{
				if (Global_574E.f_20D2)
				{
					iVar1 = Global_574E.f_20CE;
					iVar2 = Global_574E.f_20CF;
					iVar3 = Global_574E.f_20D0;
					iVar4 = Global_574E.f_20D1;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000CC;
				}
				func_399(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_574E.f_20DF)
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1252)) != 0x00000000 && Global_574E.f_129E != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_408(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_395(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_399(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_395(fVar40);
				unk_0x070005E852D4C0E9(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17 = (iVar17 + 0x00000001);
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_408(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_394(Global_574E.f_12A0, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_402(Global_574E.f_12A0), func_400(Global_574E.f_12A0, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_574E.f_129E > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_574E.f_129F) > Global_574E.f_129E)
					{
						StringCopy(&(Global_574E.f_1252), "", 24);
						Global_574E.f_129E = 0xFFFFFFFF;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_15)) != 0x00000000 && Global_412185.f_41 != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_408(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_395(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_399(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_395(fVar40);
				unk_0x070005E852D4C0E9(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_408(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_394(Global_412185.f_43, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_402(Global_412185.f_43), func_400(Global_412185.f_43, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_412185.f_41 > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_412185.f_42) > Global_412185.f_41)
					{
						StringCopy(&(Global_412185.f_15), "", 16);
						Global_412185.f_41 = 0xFFFFFFFF;
					}
				}
			}
			func_391(iVar58, iParam1, iParam8, 0x00000000, 0x00000000, 0x00000000, bParam4, 0x00000001, 0x00000000);
			unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 0x00000001 || !Global_574E.f_1660)
		{
			iVar19 = 0x00000000;
			iVar23 = 0x00000000;
			iVar20 = 0x00000000;
			iVar21 = 0x00000000;
			iVar22 = 0x00000000;
			iVar9 = 0x00000000;
			iVar10 = 0x00000000;
			iVar11 = 0x00000000;
			iVar12 = 0x00000000;
			iVar13 = 0x00000000;
			iVar66 = Global_574E.f_1462;
			if (Global_574E.f_1661)
			{
				iVar66 = (Global_574E.f_1664 - 0x00000001);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0x00000000;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_574E.f_1671[iVar6] != 0f)
				{
					fVar54 = Global_574E.f_1671[iVar6];
				}
				if (Global_574E.f_1661)
				{
					iVar6 = Global_574E.f_1F66[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = 0x00000000;
				if (iVar6 >= Global_574E.f_166A && iVar9 < Global_574E.f_1469)
				{
					bVar33 = 0x00000001;
					if (Global_574E.f_166B == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_574E.f_14EC[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_574E.f_16F7[iVar6] = fVar35;
				fVar34 = (Global_574B + 0.0046875f);
				bVar39 = 0x00000000;
				bVar32 = Global_574E.f_166B == iVar6;
				if ((bVar32 && iVar5 == 0x00000001) && bVar33)
				{
					iVar70 = 0x000000FF;
					iVar71 = 0x000000FF;
					iVar72 = 0x000000FF;
					iVar73 = 0x000000FF;
					if (Global_574E.f_20D9)
					{
						unk_0xA402F6C87C08815C(Global_574E.f_20D8, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA402F6C87C08815C(0x00000001, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_574B + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0x00000000);
					Global_574E.f_16F5 = fVar35;
				}
				iVar8 = 0x00000000;
				while (iVar8 < Global_574E.f_146A)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_574E.f_13E1[iVar6], iVar8) || Global_574E.f_13C0[iVar8] == 0x00000005)
					{
						if (Global_574E.f_1661)
						{
							iVar19 = Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar20 = Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar21 = Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar22 = Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar23 = Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)];
						}
						else
						{
							Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar19;
							Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar20;
							Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar21;
							Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar22;
							Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar23;
						}
						iVar74 = 0x00000000;
						bVar53 = 0x00000000;
						if (Global_574E.f_177B[0x00000000] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000000])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000000;
							}
						}
						if (Global_574E.f_177B[0x00000001] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000001])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000001;
							}
						}
						if (Global_574E.f_13C6[iVar8] != -1f)
						{
							fVar34 = ((Global_574B + 0.0046875f) + Global_574E.f_13C6[iVar8]);
						}
						if ((iVar8 < 0x00000004 && Global_574E.f_13C6[iVar8 + 1] != -1f) && fVar34 < Global_574E.f_13C6[iVar8 + 1])
						{
							fVar44 = (Global_574E.f_13C6[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_574B + Global_574D) - 0.0046875f) - fVar34);
						}
						if ((Global_574E.f_13D3[iVar8] && Global_574E.f_16F2) && bVar32)
						{
							bVar52 = 0x00000001;
						}
						else
						{
							bVar52 = 0x00000000;
						}
						switch (Global_574E.f_13C0[iVar8])
						{
							case 0x00000000:
								break;
							
							case 0x00000001:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0x00000000;
										iVar26 = 0x00000000;
										iVar27 = 0x00000000;
										iVar28 = 0x00000000;
										iVar29 = 0x00000000;
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											bVar50 = 0x00000000;
											bVar51 = 0x00000000;
											iVar14 = 0x00000000;
											while (iVar14 < 0x00000004)
											{
												if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
												{
													bVar51 = 0x00000001;
												}
												else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
												{
													bVar50 = 0x00000001;
												}
												iVar14++;
											}
											func_389(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										}
										if (iVar28 > 0x00000000)
										{
											iVar14 = 0x00000000;
											while (iVar14 < iVar28)
											{
												if (func_408(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0x00000000)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000003D)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
										Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											iVar69 = (iVar8 - 0x00000001);
											while (iVar69 >= 0x00000000)
											{
												if (Global_574E.f_13DB[iVar69] == 0x00000002)
												{
													Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] = (Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] - Global_574E.f_13CC[iVar8]);
												}
												iVar69 = (iVar69 + 0xFFFFFFFF);
											}
										}
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_408(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_408(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_394(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_402(0x0000001A), func_400(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_408(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_408(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_394(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_402(0x0000001B), func_400(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									iVar25 = 0x00000000;
									iVar26 = 0x00000000;
									iVar27 = 0x00000000;
									iVar28 = 0x00000000;
									iVar29 = 0x00000000;
									iVar31 = 0x00000000;
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										bVar50 = 0x00000000;
										bVar51 = 0x00000000;
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												bVar51 = 0x00000001;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												bVar50 = 0x00000001;
											}
											iVar14++;
										}
										func_389(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_388(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_574E.f_49[iVar24 /*6*/]));
									}
									iVar14 = 0x00000000;
									while (iVar14 < 0x00000004)
									{
										if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000001;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000008;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000005;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000006;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000007;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000009;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 0x00000002;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 0x00000003;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar28)] == 0x0000003D)
											{
												if (func_408(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_408(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
													{
														func_394(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 0x00000001)
														{
															if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_402(Global_574E.f_1151[(iVar22 + iVar28)]), func_400(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_402(Global_574E.f_1151[(iVar22 + iVar28)]), func_400(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 0x00000004;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										if (iVar31 == 0x00000004 && Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0x00000000);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar40), fVar35, 0x00000000);
											if (func_387() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0x00000000)
											{
												if (iVar8 == 0x00000000)
												{
													func_389(0x00000000, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													unk_0x7178F32F6742C936(0x000000FF, 0x000000FF, 0x000000FF, 0x00000096);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0x00000000);
													unk_0x070005E852D4C0E9(&cVar75);
													unk_0x6D99DF8263D35CE5((Global_574E.f_166A + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar80), (fVar35 + fVar79), 0x00000000);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0x00000000)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0x00000000;
										while (iVar14 < iVar28)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000002 && Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000033) && Global_574E.f_1151[(iVar22 + iVar14)] != 0x0000003D)
											{
												if (func_408(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 0x00000001)
													{
														if (func_408(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
														{
															func_394(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000001E)
															{
																unk_0x539E86AE011A8B38(func_402(Global_574E.f_1151[(iVar22 + iVar14)]), func_400(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_402(Global_574E.f_1151[(iVar22 + iVar14)]), func_400(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_402(Global_574E.f_1151[(iVar22 + iVar14)]), func_400(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = 0x00000001;
								iVar19++;
								iVar14 = 0x00000000;
								while (iVar14 < 0x00000004)
								{
									if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
									{
										iVar20++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
									{
										iVar21++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
									{
										iVar22++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 0x00000002:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_389(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_388(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[iVar20]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_408(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_408(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_394(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_402(0x0000001A), func_400(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_408(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_408(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_394(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_402(0x0000001B), func_400(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									if (iVar5 == 0x00000001)
									{
										func_389(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										func_386((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0x00000000);
									}
								}
								bVar39 = 0x00000001;
								iVar20++;
								break;
							
							case 0x00000003:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_389(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_388(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_408(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, 0x00000000))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_408(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_394(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_402(0x0000001A), func_400(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_408(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_408(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_394(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_402(0x0000001B), func_400(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									func_389(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
									func_385((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = 0x00000001;
								iVar21++;
								break;
							
							case 0x00000004:
								if (bVar33)
								{
									if (func_408(Global_574E.f_1151[iVar22], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
									{
										if (!Global_574E.f_1661)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_574E.f_13DB[iVar8] == 0x00000000)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
											Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
											fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
										}
										if (bVar52)
										{
											if (func_408(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 0x00000002)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_408(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_394(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_402(0x0000001A), func_400(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
											if (func_408(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_408(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_394(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_402(0x0000001B), func_400(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
										}
										if (iVar5 == 0x00000001)
										{
											if (func_408(Global_574E.f_1151[iVar22], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_394(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_402(Global_574E.f_1151[iVar22]), func_400(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_384(Global_574E.f_1151[iVar22])), (fVar37 * func_384(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
											}
										}
									}
								}
								bVar39 = 0x00000001;
								iVar22++;
								break;
							
							case 0x00000005:
								bVar39 = 0x00000001;
								break;
						}
						if (Global_574E.f_13C0[iVar8] == 0x00000005)
						{
							if (Global_574E.f_13CC[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							if (Global_574E.f_13D3[iVar8])
							{
								if (func_408(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_574E.f_1F66[iVar9] = iVar6;
						Global_574E.f_166C = iVar6;
						iVar9++;
						if (Global_574E.f_14EC[iVar6])
						{
							iVar13++;
						}
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_574E.f_1671[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_574E.f_1660)
					{
						Global_574E.f_156D[iVar6] = 0x00000001;
						if (Global_574E.f_146B[iVar6])
						{
							if (bVar32)
							{
								Global_574E.f_1666 = 0x00000000;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_574E.f_1666 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_574E.f_1660)
			{
				Global_574E.f_1662 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_574E.f_1665 = iVar11;
				Global_574E.f_1663 = iVar10;
				Global_574E.f_1660 = 0x00000001;
			}
		}
		if (!Global_574E.f_1661)
		{
			Global_574E.f_1664 = iVar9;
			Global_574E.f_1661 = 0x00000001;
		}
		iVar5++;
	}
	Global_574E.f_16F4 = fVar49;
	Global_574E.f_16F6 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_574E.f_16F4);
	if (!Global_574E.f_20BE)
	{
		func_379(0x00000000);
	}
	Global_574E.f_20BE = 0x00000000;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(0x0000000A);
	}
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000008);
	if (bParam0)
	{
		func_354(0x00000001);
	}
	unk_0xD59EF13BB60323B9();
}

void func_379(int iParam0)
{
	if (func_383())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_142(0x00000000))
		{
			func_380(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_380(int iParam0)
{
	if (func_383())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_382())
		{
			func_381(0x00000001, 0x00000001);
		}
		else
		{
			func_381(0x00000000, 0x00000000);
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
	if (!func_88())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_381(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_142(0x00000000))
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

bool func_382()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_383()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

float func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x00000035:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_385(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(uParam3, uParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_386(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_387()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

void func_388(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000000], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000001], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
}

void func_389(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_390(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 0x00000014 && iVar1 < 0x00000014) && iVar2 < 0x00000014)
			{
				if (bParam0 == 0x00000000)
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 0x000000E6 && iVar1 > 0x000000E6) && iVar2 > 0x000000E6)
			{
				if (bParam0)
				{
					iVar0 = 0x00000000;
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(0x0000000E, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
		else
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0x00000000, 0x00000000, 0x00000000, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	else
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0xEEF67251E263A87F(0x00000001);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000004);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000006);
	}
	else
	{
		unk_0x7BBAC160090910C3(0x00000000);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_390(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0x00000008;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000008;
			break;
		
		case 0x00000001:
			*uParam1 = 0x00000025;
			*uParam2 = 0x00000025;
			*uParam3 = 0x00000027;
			break;
		
		case 0x00000016:
			*uParam1 = 0x0000008C;
			*uParam2 = 0x00000092;
			*uParam3 = 0x0000009A;
			break;
		
		case 0x00000017:
			*uParam1 = 0x0000005B;
			*uParam2 = 0x0000005D;
			*uParam3 = 0x0000005E;
			break;
		
		case 0x00000006:
			*uParam1 = 0x00000051;
			*uParam2 = 0x00000054;
			*uParam3 = 0x00000059;
			break;
		
		case 0x0000006F:
			*uParam1 = 0x000000F0;
			*uParam2 = 0x000000F0;
			*uParam3 = 0x000000F0;
			break;
		
		case 0x0000001C:
			*uParam1 = 0x00000096;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0x00000026;
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000006;
			break;
		
		case 0x00000058:
			*uParam1 = 0x000000F5;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000000F;
			break;
		
		case 0x0000002D:
			*uParam1 = 0x0000004A;
			*uParam2 = 0x00000016;
			*uParam3 = 0x00000007;
			break;
		
		case 0x00000038:
			*uParam1 = 0x0000002D;
			*uParam2 = 0x0000003A;
			*uParam3 = 0x00000035;
			break;
		
		case 0x0000003A:
			*uParam1 = 0x00000047;
			*uParam2 = 0x00000078;
			*uParam3 = 0x0000003C;
			break;
		
		case 0x00000036:
			*uParam1 = 0x0000004D;
			*uParam2 = 0x00000062;
			*uParam3 = 0x00000068;
			break;
		
		case 0x00000049:
			*uParam1 = 0x0000000E;
			*uParam2 = 0x00000031;
			*uParam3 = 0x0000006D;
			break;
		
		case 0x00000044:
			*uParam1 = 0x00000016;
			*uParam2 = 0x00000022;
			*uParam3 = 0x00000048;
			break;
		
		case 0x0000008C:
			*uParam1 = 0x00000000;
			*uParam2 = 0x000000AE;
			*uParam3 = 0x000000EF;
			break;
		
		case 0x00000083:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000B7;
			*uParam3 = 0x00000000;
			break;
		
		case 0x0000005A:
			*uParam1 = 0x0000008E;
			*uParam2 = 0x0000008C;
			*uParam3 = 0x00000046;
			break;
		
		case 0x00000061:
			*uParam1 = 0x0000009C;
			*uParam2 = 0x0000008D;
			*uParam3 = 0x00000071;
			break;
		
		case 0x00000059:
			*uParam1 = 0x00000091;
			*uParam2 = 0x00000073;
			*uParam3 = 0x00000047;
			break;
		
		case 0x00000069:
			*uParam1 = 0x00000062;
			*uParam2 = 0x00000044;
			*uParam3 = 0x00000028;
			break;
		
		case 0x00000064:
			*uParam1 = 0x0000007C;
			*uParam2 = 0x0000001B;
			*uParam3 = 0x00000044;
			break;
		
		case 0x00000063:
			*uParam1 = 0x00000072;
			*uParam2 = 0x0000002A;
			*uParam3 = 0x0000003F;
			break;
		
		case 0x00000088:
			*uParam1 = 0x000000F6;
			*uParam2 = 0x00000097;
			*uParam3 = 0x00000099;
			break;
		
		case 0x00000031:
			*uParam1 = 0x00000020;
			*uParam2 = 0x00000020;
			*uParam3 = 0x0000002C;
			break;
		
		case 0x00000092:
			*uParam1 = 0x0000001A;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000017;
			break;
		
		default:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000FF;
			*uParam3 = 0x000000FF;
			break;
	}
}

void func_391(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_366(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_410(bParam4, bParam8))
	{
		return;
	}
	if (func_392())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_306(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0x00000000 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_574E.f_12A1 != 0x00000000)
	{
		if (unk_0xB8E3620B82AD47D7(0x00000002))
		{
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (Global_574E.f_13A2[iVar1] != 0x00000169)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xF59058FCB716F903(0x00000002, Global_574E.f_13A2[iVar1], 0x00000001), 64);
				}
				else if (Global_574E.f_13AF[iVar1] != 0x00000020)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xE32F7AC5E6DF304A(0x00000002, Global_574E.f_13AF[iVar1], 0x00000001), 64);
				}
				iVar1++;
			}
			Global_574E.f_12A2 = 0x00000000;
		}
		if (!Global_574E.f_12A2)
		{
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_574E.f_13D9 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar1 /*4*/])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_342(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_342(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_36(&(Global_574E.f_1364[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_574E.f_1395[iVar1];
						if (iParam2 >= 0x00000000)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_574E.f_13A2[iVar1] != 0x00000169 && unk_0xEAE0D21A50E6C7F4(Global_574E.f_13BC, iVar1))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(Global_574E.f_13A2[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_10)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_574E.f_12A1);
				func_342(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_36(&(Global_412185.f_10));
				}
				else
				{
					iVar4 = Global_574E.f_1395[iVar1];
					if (iParam2 >= 0x00000000)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_574E.f_13DA)
			{
				unk_0x3CAEA85DA607305E(0x00000001);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000000);
			}
			unk_0x7E60D21B163E9D56();
			Global_574E.f_12A2 = 0x00000001;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Global_574E.f_12A1)
		{
			if (Global_574E.f_1395[iVar1] != 0xFFFFFFFF)
			{
				if (iParam2 > 0x00000000)
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_412185.f_14 != 0xFFFFFFFF)
		{
			if (iParam2 > 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 0x00000046);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000042);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_574E.f_20E1)
			{
				unk_0x744B56EE9DE7B57F(0x0000000F, 0f, -0.0375f);
				Global_574E.f_20E1 = 0x00000001;
			}
		}
		else if (Global_574E.f_20E1)
		{
			unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
			Global_574E.f_20E1 = 0x00000000;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_574E.f_13BF)
		{
			unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_574E.f_161C[iVar0 /*10*/], Global_574E.f_13BD, Global_574E.f_13BE, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_574E.f_161C[iVar0 /*10*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
		}
	}
}

int func_392()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_393())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_4BE7 == 0x00000000)
		{
			if (vVar0.y > -119f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (vVar0.y > -101f)
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

int func_393()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_394(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(0x00000001, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 0x000000FF;
	switch (iParam0)
	{
		case 0x0000001C:
			*iParam2 = 0x000000C2;
			*iParam3 = 0x00000050;
			*iParam4 = 0x00000050;
			break;
		
		case 0x0000000F:
		case 0x00000004:
		case 0x00000010:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000035:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
			if (bParam1)
			{
				*iParam2 = 0x00000000;
				*iParam3 = 0x00000000;
				*iParam4 = 0x00000000;
			}
			break;
		
		case 0x00000036:
			*iParam5 = 0x00000064;
			break;
		
		case 0x0000003E:
			*iParam5 = 0x00000064;
			break;
		
		case 0x00000037:
			unk_0xA402F6C87C08815C(0x00000018, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 0x000000FF;
			break;
	}
}

void func_395(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x4B9228CE1CF0DACA(0x00000002);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_396(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(uParam3);
	unk_0x6D99DF8263D35CE5(uParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

float func_397(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_398();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(uParam1);
	unk_0x6D99DF8263D35CE5(uParam2);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_398()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_574E.f_20C8)
	{
		iVar0 = Global_574E.f_20C4;
		iVar1 = Global_574E.f_20C5;
		iVar2 = Global_574E.f_20C6;
		iVar3 = Global_574E.f_20C7;
	}
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_574B + 0.0046875f), ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_399(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

var func_400(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_314(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_401(&uVar1);
			}
		}
		else
		{
			return func_401(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_401(var uParam0)
{
	return uParam0;
}

char* func_402(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_314(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_401(&uVar0);
		}
		else
		{
			return func_401(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_403(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_574E.f_1462 > iParam0)
	{
		return;
	}
	if (Global_574E.f_1462 >= 0x00000080)
	{
		return;
	}
	if (Global_574E.f_1464 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F < Global_574E.f_166D)
	{
		return;
	}
	if (Global_574E.f_1462 != iParam0)
	{
		Global_574E.f_1462 = iParam0;
		Global_574E.f_1463 = 0x00000000;
	}
	iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
	if (iVar0 != 0x00000001)
	{
		while (Global_574E.f_1463 < 0x00000004 && iVar0 != 0x00000001)
		{
			Global_574E.f_1463++;
			iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
		}
		if (iVar0 != 0x00000001)
		{
			return;
		}
	}
	StringCopy(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_574E.f_64A[Global_574E.f_1464] = bParam3;
	Global_574E.f_74B[Global_574E.f_1464] = iParam4;
	Global_574E.f_1464++;
	if (!bParam3)
	{
		func_406(Global_574E.f_1462, 0x00000001);
	}
	else
	{
		func_406(Global_574E.f_1462, 0x00000000);
	}
	if (iParam2 == 0x00000000)
	{
		fVar1 = func_405(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_408(0x0000001A, 0x00000001, 0x00000000, &fVar2, &uVar3, 0x00000000);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_574E.f_13CC[Global_574E.f_1463])
		{
			Global_574E.f_13CC[Global_574E.f_1463] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0x00000000)
		{
			fVar4 = func_404(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
			if (fVar4 > Global_574E.f_1671[iParam0])
			{
				Global_574E.f_1671[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_574E.f_13E1[iParam0]), Global_574E.f_1463);
	Global_574E.f_1463++;
	Global_574E.f_1670 = 0x00000001;
	Global_574E.f_166E = (Global_574E.f_1464 - 0x00000001);
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = iParam2;
}

float func_404(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_405(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_389(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_406(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_407()
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

int func_408(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_402(iParam0), 64);
	StringCopy(&cVar1, func_400(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_407())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_407())
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
		vVar7.x = (vVar7.x * (func_409(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_409(iParam0) / fVar4));
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

float func_409(int iParam0)
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

int func_410(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_91(0x00000008, 0xFFFFFFFF) && func_411() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_411()
{
	return Global_14082C;
}

void func_412()
{
	if (iLocal_118 == 0x00000000)
	{
		if (!bLocal_126)
		{
			func_413("PAH_QUICK_D1", 0x00000000, 0x00000000);
		}
	}
	else if (iLocal_118 == iLocal_119)
	{
		if (!bLocal_127)
		{
			func_413("PAH_QUICK_D2", 0x00000000, 0x00000000);
		}
		else if (!bLocal_128)
		{
			func_413("PAH_QUICK_D3", 0x00000000, 0x00000000);
		}
	}
	else if (!bLocal_127)
	{
		func_413("PAH_QUICK_D2", 0x00000000, 0x00000000);
	}
	else if (!uLocal_129[(iLocal_118 - 0x00000001)])
	{
		func_413("PAH_QUICK_D3", 0x00000000, 0x00000000);
	}
}

void func_413(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1252), sParam0, 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = iParam1;
	Global_574E.f_129F = unk_0x1C0640BA9A7327B3();
	Global_574E.f_12A0 = iParam2;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_414()
{
	bool bVar0;
	
	bVar0 = 0x00000001;
	if ((((unk_0x798A3F1296751F46() || unk_0x1A72D8C9F025E5E3()) || unk_0xE57E602827E07C9D()) || unk_0x4FD68D5821EE3E19()) || Global_181EC.f_589)
	{
		bVar0 = 0x00000000;
	}
	if ((bVar0 && unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9)) || (bVar0 && Local_132.f_6))
	{
		if (!func_449())
		{
			if (iLocal_118 == 0x00000000)
			{
				if (func_377())
				{
					iLocal_124 = 0xFFFFFFFF;
					iLocal_123 = 0x00000001;
					iLocal_122 = 0x00000001;
				}
			}
			else if (iLocal_118 == iLocal_119)
			{
				if (func_372())
				{
					if (func_368())
					{
						iLocal_124 = 0x00000032;
						iLocal_123 = 0x00000001;
						iLocal_122 = 0x00000001;
					}
				}
			}
			else if (func_372())
			{
				if (func_371(iLocal_125[(iLocal_118 - 0x00000001)]))
				{
					iLocal_123 = 0x00000001;
					iLocal_122 = 0x00000001;
					iLocal_124 = iLocal_125[(iLocal_118 - 0x00000001)];
				}
			}
		}
		else
		{
			iLocal_130 = 0x00000001;
		}
	}
	else if (!bVar0)
	{
	}
	else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA) || Local_132.f_7)
	{
		iLocal_123 = 0x00000001;
	}
	else if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC) && func_415(&uLocal_131, &(Local_132.f_4), 0x00000001)) || (Local_132.f_8 && func_415(&uLocal_131, &(Local_132.f_4), 0x00000001)))
	{
		if (Local_132.f_4 > 0x00000000)
		{
			iLocal_118 = (iLocal_118 - 0x00000001);
			if (iLocal_118 < 0x00000000)
			{
				iLocal_118 = (iLocal_117 - 0x00000001);
			}
			func_416(iLocal_118, 0x00000001, 0x00000001);
		}
	}
	else if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB) && func_415(&uLocal_131, &(Local_132.f_4), 0x00000001)) || (Local_132.f_9 && func_415(&uLocal_131, &(Local_132.f_4), 0x00000001)))
	{
		if (Local_132.f_4 < 0x00000000)
		{
			iLocal_118++;
			if (iLocal_118 > (iLocal_117 - 0x00000001))
			{
				iLocal_118 = 0x00000000;
			}
			func_416(iLocal_118, 0x00000001, 0x00000001);
		}
	}
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
}

int func_415(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000096;
	if (bParam2)
	{
		if (((unk_0x7FEE810EE9E768EB(0x00000002, 0x000000BC) || unk_0x4F3973434662D795(0x00000002, 0x000000DB) < -0.3f) || unk_0x7FEE810EE9E768EB(0x00000002, 0x000000F1)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC))
		{
			if (unk_0x7FEE810EE9E768EB(0x00000002, 0x000000F1))
			{
				iVar1 = 0x00000064;
			}
			if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(*uParam0, unk_0x2B6E0A53779D29EA())) > iVar1)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
				iVar0 = 0x00000001;
				*uParam1 = 0x00000001;
			}
		}
		if (((unk_0x7FEE810EE9E768EB(0x00000002, 0x000000BB) || unk_0x4F3973434662D795(0x00000002, 0x000000DB) > 0.3f) || unk_0x7FEE810EE9E768EB(0x00000002, 0x000000F2)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB))
		{
			if (unk_0x7FEE810EE9E768EB(0x00000002, 0x000000F2))
			{
				iVar1 = 0x00000064;
			}
			if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(*uParam0, unk_0x2B6E0A53779D29EA())) > iVar1)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
				iVar0 = 0x00000001;
				*uParam1 = 0xFFFFFFFF;
			}
		}
	}
	else
	{
		if ((unk_0x7FEE810EE9E768EB(0x00000002, 0x000000BE) || unk_0x4F3973434662D795(0x00000002, 0x000000DA) > 0.3f) || unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
		{
			if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(*uParam0, unk_0x2B6E0A53779D29EA())) > iVar1)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
				iVar0 = 0x00000001;
				*uParam1 = 0x00000001;
			}
		}
		if (unk_0x7FEE810EE9E768EB(0x00000002, 0x000000BD) || unk_0x4F3973434662D795(0x00000002, 0x000000DA) < -0.3f)
		{
			if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(*uParam0, unk_0x2B6E0A53779D29EA())) > iVar1)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
				iVar0 = 0x00000001;
				*uParam1 = 0xFFFFFFFF;
			}
		}
	}
	return iVar0;
}

void func_416(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_166B = iParam0;
	Global_574E.f_16F2 = iParam2;
	if (Global_574E.f_166B < Global_574E.f_166A)
	{
		Global_574E.f_166A = Global_574E.f_166B;
	}
	else if ((Global_574E.f_1661 && Global_574E.f_166B > Global_574E.f_166C) || (!Global_574E.f_1661 && Global_574E.f_166B >= (Global_574E.f_166A + Global_574E.f_1469)))
	{
		iVar0 = Global_574E.f_166A;
		while (iVar0 <= Global_574E.f_166B)
		{
			if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
			{
				if (Global_574E.f_13E1[iVar0] != 0x00000000)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_574E.f_1469 && Global_574E.f_166A < 0x00000080)
		{
			Global_574E.f_166A++;
			iVar1 = 0x00000000;
			iVar0 = Global_574E.f_166A;
			while (iVar0 <= Global_574E.f_166B)
			{
				if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
				{
					if (Global_574E.f_13E1[iVar0] != 0x00000000)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	if (bParam1)
	{
		StringCopy(&(Global_574E.f_1252), "", 24);
		StringCopy(&(Global_412185.f_15), "", 16);
	}
}

void func_417()
{
	struct<4> Var0;
	char* sVar1;
	int iVar2;
	bool bVar3;
	
	func_427(0x00000000, 0x00000000);
	func_426("PAH_QUICK_1");
	func_425(0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000001);
	func_424(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	iLocal_117 = 0x00000000;
	Var0 = { func_423(func_246(0x00000005, 0xFFFFFFFF)) };
	sVar1 = func_422(&Var0);
	bLocal_126 = func_377();
	bLocal_127 = func_372();
	func_403(iLocal_117, sVar1, 0x00000000, bLocal_126, 0x00000000, 0x00000000);
	iLocal_117++;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (func_421(iVar2) > 0x00000000)
		{
			if (func_185(func_421(iVar2)))
			{
				iLocal_125[iVar2] = func_421(iVar2);
				uLocal_129[iVar2] = func_371(iLocal_125[iVar2]);
				if (bLocal_127)
				{
					bVar3 = uLocal_129[iVar2];
				}
				else
				{
					bVar3 = 0x00000000;
				}
				func_403(iLocal_117, func_420(iLocal_125[iVar2]), 0x00000000, bVar3, 0x00000000, 0x00000000);
				iLocal_117++;
			}
		}
		iVar2++;
	}
	bLocal_128 = (func_368() && bLocal_127);
	if (func_346(unk_0xD803B885F5E47A62()))
	{
		func_403(iLocal_117, func_419(func_347(unk_0xD803B885F5E47A62())), 0x00000000, bLocal_128, 0x00000000, 0x00000000);
		iLocal_119 = iLocal_117;
		iLocal_117++;
	}
	func_418(0x000000C9, "ITEM_SELECT", 0xFFFFFFFF, 0x00000000);
	func_418(0x000000CA, "ITEM_BACK", 0xFFFFFFFF, 0x00000000);
	func_416(iLocal_118, 0x00000001, 0x00000001);
}

void func_418(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xF59058FCB716F903(0x00000002, iParam0, 0x00000001);
	if (Global_574E.f_12A1 >= 0x0000000C)
	{
		StringCopy(&Global_412185, sVar0, 64);
		StringCopy(&(Global_412185.f_10), sParam1, 16);
		Global_412185.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_13BC), Global_574E.f_12A1);
	}
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 0x00000020;
	Global_574E.f_12A1++;
}

char* func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "MP_WAREHOUSE_1";
		
		case 0x00000002:
			return "MP_WAREHOUSE_2";
		
		case 0x00000003:
			return "MP_WAREHOUSE_3";
		
		case 0x00000004:
			return "MP_WAREHOUSE_4";
		
		case 0x00000005:
			return "MP_WAREHOUSE_5";
		
		case 0x00000006:
			return "MP_WAREHOUSE_6";
		
		case 0x00000007:
			return "MP_WAREHOUSE_7";
		
		case 0x00000008:
			return "MP_WAREHOUSE_8";
		
		case 0x00000009:
			return "MP_WAREHOUSE_9";
		
		case 0x0000000A:
			return "MP_WAREHOUSE_10";
		
		default:
	}
	return "";
}

char* func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "MP_WHOUSE_0";
			break;
		
		case 0x00000002:
			return "MP_WHOUSE_1";
			break;
		
		case 0x00000003:
			return "MP_WHOUSE_2";
			break;
		
		case 0x00000004:
			return "MP_WHOUSE_3";
			break;
		
		case 0x00000005:
			return "MP_WHOUSE_4";
			break;
		
		case 0x00000006:
			return "MP_WHOUSE_5";
			break;
		
		case 0x00000007:
			return "MP_WHOUSE_6";
			break;
		
		case 0x00000008:
			return "MP_WHOUSE_7";
			break;
		
		case 0x00000009:
			return "MP_WHOUSE_8";
			break;
		
		case 0x0000000A:
			return "MP_WHOUSE_9";
			break;
		
		case 0x0000000B:
			return "MP_WHOUSE_10";
			break;
		
		case 0x0000000C:
			return "MP_WHOUSE_11";
			break;
		
		case 0x0000000D:
			return "MP_WHOUSE_12";
			break;
		
		case 0x0000000E:
			return "MP_WHOUSE_13";
			break;
		
		case 0x0000000F:
			return "MP_WHOUSE_14";
			break;
		
		case 0x00000010:
			return "MP_WHOUSE_15";
			break;
		
		case 0x00000011:
			return "MP_WHOUSE_16";
			break;
		
		case 0x00000012:
			return "MP_WHOUSE_17";
			break;
		
		case 0x00000013:
			return "MP_WHOUSE_18";
			break;
		
		case 0x00000014:
			return "MP_WHOUSE_19";
			break;
		
		case 0x00000015:
			return "MP_WHOUSE_20";
			break;
		
		case 0x00000016:
			return "MP_WHOUSE_21";
			break;
	}
	return "";
}

int func_421(int iParam0)
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iParam0 /*3*/] != 0x00000000)
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iParam0 /*3*/];
	}
	return 0x00000000;
}

var func_422(var uParam0)
{
	return uParam0;
}

struct<4> func_423(int iParam0)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 0x00000001:
			StringCopy(&Var0, "MP_PROP_1", 16);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "MP_PROP_2", 16);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "MP_PROP_3", 16);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "MP_PROP_4", 16);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "MP_PROP_5", 16);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "MP_PROP_6", 16);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "MP_PROP_7", 16);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "MP_PROP_8", 16);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "MP_PROP_9", 16);
			break;
		
		case 0x0000000A:
			StringCopy(&Var0, "MP_PROP_10", 16);
			break;
		
		case 0x0000000B:
			StringCopy(&Var0, "MP_PROP_11", 16);
			break;
		
		case 0x0000000C:
			StringCopy(&Var0, "MP_PROP_12", 16);
			break;
		
		case 0x0000000D:
			StringCopy(&Var0, "MP_PROP_13", 16);
			break;
		
		case 0x0000000E:
			StringCopy(&Var0, "MP_PROP_14", 16);
			break;
		
		case 0x0000000F:
			StringCopy(&Var0, "MP_PROP_15", 16);
			break;
		
		case 0x00000010:
			StringCopy(&Var0, "MP_PROP_16", 16);
			break;
		
		case 0x00000011:
			StringCopy(&Var0, "MP_PROP_17", 16);
			break;
		
		case 0x00000012:
			StringCopy(&Var0, "MP_PROP_18", 16);
			break;
		
		case 0x00000013:
			StringCopy(&Var0, "MP_PROP_19", 16);
			break;
		
		case 0x00000014:
			StringCopy(&Var0, "MP_PROP_20", 16);
			break;
		
		case 0x00000015:
			StringCopy(&Var0, "MP_PROP_21", 16);
			break;
		
		case 0x00000016:
			StringCopy(&Var0, "MP_PROP_22", 16);
			break;
		
		case 0x00000017:
			StringCopy(&Var0, "MP_PROP_23", 16);
			break;
		
		case 0x00000018:
			StringCopy(&Var0, "MP_PROP_24", 16);
			break;
		
		case 0x00000019:
			StringCopy(&Var0, "MP_PROP_25", 16);
			break;
		
		case 0x0000001A:
			StringCopy(&Var0, "MP_PROP_26", 16);
			break;
		
		case 0x0000001B:
			StringCopy(&Var0, "MP_PROP_27", 16);
			break;
		
		case 0x0000001C:
			StringCopy(&Var0, "MP_PROP_28", 16);
			break;
		
		case 0x0000001D:
			StringCopy(&Var0, "MP_PROP_29", 16);
			break;
		
		case 0x0000001E:
			StringCopy(&Var0, "MP_PROP_30", 16);
			break;
		
		case 0x0000001F:
			StringCopy(&Var0, "MP_PROP_31", 16);
			break;
		
		case 0x00000020:
			StringCopy(&Var0, "MP_PROP_32", 16);
			break;
		
		case 0x00000021:
			StringCopy(&Var0, "MP_PROP_33", 16);
			break;
		
		case 0x00000022:
			StringCopy(&Var0, "MP_PROP_34", 16);
			break;
		
		case 0x00000023:
			StringCopy(&Var0, "MP_PROP_35", 16);
			break;
		
		case 0x00000024:
			StringCopy(&Var0, "MP_PROP_36", 16);
			break;
		
		case 0x00000025:
			StringCopy(&Var0, "MP_PROP_37", 16);
			break;
		
		case 0x00000026:
			StringCopy(&Var0, "MP_PROP_38", 16);
			break;
		
		case 0x00000027:
			StringCopy(&Var0, "MP_PROP_39", 16);
			break;
		
		case 0x00000028:
			StringCopy(&Var0, "MP_PROP_40", 16);
			break;
		
		case 0x00000029:
			StringCopy(&Var0, "MP_PROP_41", 16);
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "MP_PROP_42", 16);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "MP_PROP_43", 16);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "MP_PROP_44", 16);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "MP_PROP_45", 16);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "MP_PROP_46", 16);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "MP_PROP_48", 16);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "MP_PROP_49", 16);
			break;
		
		case 0x00000031:
			StringCopy(&Var0, "MP_PROP_50", 16);
			break;
		
		case 0x00000032:
			StringCopy(&Var0, "MP_PROP_51", 16);
			break;
		
		case 0x00000033:
			StringCopy(&Var0, "MP_PROP_52", 16);
			break;
		
		case 0x00000034:
			StringCopy(&Var0, "MP_PROP_57", 16);
			break;
		
		case 0x00000035:
			StringCopy(&Var0, "MP_PROP_59", 16);
			break;
		
		case 0x00000036:
			StringCopy(&Var0, "MP_PROP_60", 16);
			break;
		
		case 0x00000037:
			StringCopy(&Var0, "MP_PROP_61", 16);
			break;
		
		case 0x00000038:
			StringCopy(&Var0, "MP_PROP_62", 16);
			break;
		
		case 0x00000039:
			StringCopy(&Var0, "MP_PROP_63", 16);
			break;
		
		case 0x0000003A:
			StringCopy(&Var0, "MP_PROP_64", 16);
			break;
		
		case 0x0000003B:
			StringCopy(&Var0, "MP_PROP_65", 16);
			break;
		
		case 0x0000003C:
			StringCopy(&Var0, "MP_PROP_66", 16);
			break;
		
		case 0x0000003D:
			StringCopy(&Var0, "MP_PROP_67", 16);
			break;
		
		case 0x0000003E:
			StringCopy(&Var0, "MP_PROP_68", 16);
			break;
		
		case 0x0000003F:
			StringCopy(&Var0, "MP_PROP_69", 16);
			break;
		
		case 0x00000040:
			StringCopy(&Var0, "MP_PROP_70", 16);
			break;
		
		case 0x00000041:
			StringCopy(&Var0, "MP_PROP_71", 16);
			break;
		
		case 0x00000042:
			StringCopy(&Var0, "MP_PROP_72", 16);
			break;
		
		case 0x00000043:
			StringCopy(&Var0, "MP_PROP_73", 16);
			break;
		
		case 0x00000044:
			StringCopy(&Var0, "MP_PROP_74", 16);
			break;
		
		case 0x00000045:
			StringCopy(&Var0, "MP_PROP_75", 16);
			break;
		
		case 0x00000046:
			StringCopy(&Var0, "MP_PROP_76", 16);
			break;
		
		case 0x00000047:
			StringCopy(&Var0, "MP_PROP_77", 16);
			break;
		
		case 0x00000048:
			StringCopy(&Var0, "MP_PROP_78", 16);
			break;
		
		case 0x00000053:
			StringCopy(&Var0, "MP_PROP_79", 16);
			break;
		
		case 0x00000054:
			StringCopy(&Var0, "MP_PROP_80", 16);
			break;
		
		case 0x00000055:
			StringCopy(&Var0, "MP_PROP_81", 16);
			break;
		
		case 0x00000049:
			StringCopy(&Var0, "MP_PROP_83", 16);
			break;
		
		case 0x0000004A:
			StringCopy(&Var0, "MP_PROP_84", 16);
			break;
		
		case 0x0000004B:
			StringCopy(&Var0, "MP_PROP_85", 16);
			break;
		
		case 0x0000004C:
			StringCopy(&Var0, "MP_PROP_86", 16);
			break;
		
		case 0x0000004D:
			StringCopy(&Var0, "MP_PROP_87", 16);
			break;
		
		case 0x0000004E:
			StringCopy(&Var0, "MP_PROP_89", 16);
			break;
		
		case 0x0000004F:
			StringCopy(&Var0, "MP_PROP_90", 16);
			break;
		
		case 0x00000050:
			StringCopy(&Var0, "MP_PROP_92", 16);
			break;
		
		case 0x00000051:
			StringCopy(&Var0, "MP_PROP_94", 16);
			break;
		
		case 0x00000052:
			StringCopy(&Var0, "MP_PROP_95", 16);
			break;
		
		case 0x00000056:
			StringCopy(&Var0, "PM_SPAWN_Y", 16);
			break;
		
		case 0x00000057:
			StringCopy(&Var0, "MP_PROP_OFF1", 16);
			break;
		
		case 0x00000058:
			StringCopy(&Var0, "MP_PROP_OFF2", 16);
			break;
		
		case 0x00000059:
			StringCopy(&Var0, "MP_PROP_OFF3", 16);
			break;
		
		case 0x0000005A:
			StringCopy(&Var0, "MP_PROP_OFF4", 16);
			break;
		
		case 0x0000005B:
			StringCopy(&Var0, "MP_PROP_CLUBH1", 16);
			break;
		
		case 0x0000005C:
			StringCopy(&Var0, "MP_PROP_CLUBH2", 16);
			break;
		
		case 0x0000005D:
			StringCopy(&Var0, "MP_PROP_CLUBH3", 16);
			break;
		
		case 0x0000005E:
			StringCopy(&Var0, "MP_PROP_CLUBH4", 16);
			break;
		
		case 0x0000005F:
			StringCopy(&Var0, "MP_PROP_CLUBH5", 16);
			break;
		
		case 0x00000060:
			StringCopy(&Var0, "MP_PROP_CLUBH6", 16);
			break;
		
		case 0x00000061:
			StringCopy(&Var0, "MP_PROP_CLUBH7", 16);
			break;
		
		case 0x00000062:
			StringCopy(&Var0, "MP_PROP_CLUBH8", 16);
			break;
		
		case 0x00000063:
			StringCopy(&Var0, "MP_PROP_CLUBH9", 16);
			break;
		
		case 0x00000064:
			StringCopy(&Var0, "MP_PROP_CLUBH10", 16);
			break;
		
		case 0x00000065:
			StringCopy(&Var0, "MP_PROP_CLUBH11", 16);
			break;
		
		case 0x00000066:
			StringCopy(&Var0, "MP_PROP_CLUBH12", 16);
			break;
		
		case 0x00000067:
		case 0x0000006A:
		case 0x0000006D:
		case 0x00000070:
			StringCopy(&Var0, "MP_PROP_OFFG1", 16);
			break;
		
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
			StringCopy(&Var0, "MP_PROP_OFFG2", 16);
			break;
		
		case 0x00000069:
		case 0x0000006C:
		case 0x0000006F:
		case 0x00000072:
			StringCopy(&Var0, "MP_PROP_OFFG3", 16);
			break;
		
		case 0x00000073:
			StringCopy(&Var0, "IE_WARE_1", 16);
			break;
	}
	return Var0;
}

void func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13C0[0x00000000] = iParam0;
	Global_574E.f_13C0[0x00000001] = iParam1;
	Global_574E.f_13C0[0x00000002] = iParam2;
	Global_574E.f_13C0[0x00000003] = iParam3;
	Global_574E.f_13C0[0x00000004] = iParam4;
	Global_574E.f_146A = 0x00000000;
	if (iParam0 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam1 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam2 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam3 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam4 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0x00000000] = iParam0;
	Global_574E.f_13DB[0x00000001] = iParam1;
	Global_574E.f_13DB[0x00000002] = iParam2;
	Global_574E.f_13DB[0x00000003] = iParam3;
	Global_574E.f_13DB[0x00000004] = iParam4;
}

void func_426(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1), sParam0, 16);
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_427(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		StringCopy(&(Global_574E.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_574E.f_84C[iVar0 /*5*/][iVar1] = 0x00000000;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		StringCopy(&(Global_258E24[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_F4E[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_1151[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_13E1[iVar0] = 0x00000000;
		Global_574E.f_146B[iVar0] = 0x00000000;
		Global_574E.f_14EC[iVar0] = 0x00000000;
		Global_574E.f_16F7[iVar0] = 0f;
		Global_574E.f_156D[iVar0] = 0x00000000;
		Global_574E.f_1671[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		Global_574E.f_13C0[iVar0] = 0x00000000;
		Global_574E.f_13CC[iVar0] = 0f;
		Global_574E.f_13C6[iVar0] = -1f;
		Global_574E.f_13D3[iVar0] = 0x00000000;
		Global_574E.f_13DB[iVar0] = 0x00000001;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 0xFFFFFFFF;
		Global_574E.f_13A2[iVar0] = 0x00000169;
		Global_574E.f_13AF[iVar0] = 0x00000020;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003F)
	{
		StringCopy(&(Global_574E.f_1784[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_574E.f_1B75[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000100)
		{
			Global_574E.f_64A[iVar0] = 0x00000000;
			iVar0++;
		}
	}
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 0xFFFFFFFF;
	Global_574E = 0x00000000;
	Global_574E.f_1462 = 0x00000000;
	Global_574E.f_1463 = 0x00000000;
	Global_574E.f_1464 = 0x00000000;
	Global_574E.f_1466 = 0x00000000;
	Global_574E.f_1467 = 0x00000000;
	Global_574E.f_1468 = 0x00000000;
	Global_574E.f_1465 = 0x00000000;
	Global_574E.f_16F2 = 0x00000000;
	Global_574E.f_177E = 0x00000000;
	Global_574E.f_166B = 0x00000000;
	Global_574E.f_166A = 0x00000000;
	Global_574E.f_166C = 0x00000000;
	StringCopy(&(Global_574E.f_1252), "", 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = 0x00000000;
	Global_574E.f_129F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_12A0 = 0x00000000;
	StringCopy(&(Global_412185.f_15), "", 16);
	Global_412185.f_3D = 0x00000000;
	Global_412185.f_3E = 0x00000000;
	Global_412185.f_3F = 0x00000000;
	Global_412185.f_40 = 0x00000000;
	Global_412185.f_41 = 0x00000000;
	Global_412185.f_42 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_412185.f_19[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_412185.f_43 = 0x00000000;
	StringCopy(&(Global_574E.f_1), "", 16);
	Global_574E.f_13D2 = 0f;
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_1670 = 0x00000000;
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = 0x00000000;
	Global_574E.f_166E = 0x00000000;
	Global_574E.f_12A1 = 0x00000000;
	Global_574E.f_12A2 = 0x00000000;
	Global_574E.f_1469 = 0x0000000A;
	Global_574E.f_146A = 0x00000000;
	Global_574E.f_16F4 = 0f;
	Global_574E.f_16F5 = 0f;
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	Global_574E.f_1662 = 0f;
	Global_574E.f_1663 = 0x00000000;
	Global_574E.f_1665 = 0x00000000;
	Global_574E.f_1664 = 0x00000000;
	Global_574E.f_1666 = 0x00000000;
	Global_574E.f_1667 = 0x00000000;
	Global_574E.f_1668 = 0x00000000;
	Global_574E.f_1669 = 0x00000000;
	Global_574E.f_20DD = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Global_574E.f_1778[iVar0] = 0xFFFFFFFF;
		Global_574E.f_177B[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	Global_574E.f_13D9 = 0f;
	Global_574E.f_13BC = 0x00000000;
	Global_574E.f_13DA = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_177F)
	{
		Global_574E.f_177F[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_20C8 = 0x00000000;
	Global_574E.f_20C3 = 0x00000000;
	Global_574E.f_20CD = 0x00000000;
	Global_574E.f_20D2 = 0x00000000;
	Global_574E.f_20D7 = 0x00000000;
	Global_574E.f_20D9 = 0x00000000;
	Global_574E.f_20DF = 0x00000000;
	Global_574B = 0.05f;
	Global_574C = 0.05f;
	Global_574D = 0.225f;
	fVar2 = unk_0x33D480CCE15C991A(0x00000000);
	if (bParam0)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_574D = 0.225f;
	}
}

bool func_428(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_366(&iVar0, 0x00000001, iParam1))
	{
		return 0x00000000;
	}
	bVar1 = 0x00000001;
	StringCopy(&(Global_574E.f_1603[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1603[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009);
		Global_574E.f_15FC[iVar0] = 0x00000001;
		if (!unk_0x01C309A4BDFCAD82(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009))
		{
			bVar1 = 0x00000000;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", 0x00000000);
	Global_574E.f_15EE[iVar0] = 0x00000001;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = 0x00000000;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", 0x00000000);
		Global_574E.f_15F5[iVar0] = 0x00000001;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = 0x00000000;
		}
	}
	bVar2 = 0x00000000;
	StringCopy(&(Global_574E.f_161C[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_429(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_429(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0x00000000:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 0x00000001;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 0x00000002;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0x00000000;
			}
			break;
	}
	return uParam0->f_9 == 0x00000002;
}

void func_430(var uParam0)
{
	func_439(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0x00000000);
	uParam0->f_6 = (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) || unk_0xD245978525608929(0x00000002, 0x000000C9));
	uParam0->f_7 = (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA) || unk_0xD245978525608929(0x00000002, 0x000000CA));
	uParam0->f_8 = (uParam0->f_1 < 0xFFFFFFC0 || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC));
	uParam0->f_9 = (uParam0->f_1 > 0x00000040 || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB));
	if (((((func_428(0x00000000, 0xFFFFFFFF, 0x00000000) && unk_0x8BB17FEBE0394018() == 0x00000000) && !unk_0x1A72D8C9F025E5E3()) && !unk_0xE57E602827E07C9D()) && !unk_0x4FD68D5821EE3E19()) && !Global_181EC.f_589)
	{
		if (unk_0x0EFF6B4415DAF4A1() && !unk_0x4FD68D5821EE3E19())
		{
			if (unk_0x9E6C8D8976DA0ECD(0x00000002))
			{
				unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000ED, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000EE, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000F1, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000F2, 0x00000001);
				if ((Global_4121D1 == 0xFFFFFFFF || Global_4121D1 == 0xFFFFFFFC) || Global_4121D1 == 0xFFFFFFFA)
				{
					unk_0xEAB026E686C0D991(0x00000001, 0x00000001, 0x00000001);
					unk_0xEAB026E686C0D991(0x00000001, 0x00000002, 0x00000001);
				}
				else
				{
					unk_0x38C3A68D7861DCFD(0x00000001, 0x00000001, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000001, 0x00000002, 0x00000001);
				}
				func_436(0x00000000, 0x00000000, 0x00000000, 0x00000001);
				func_435(0x00000000, 0xFFFFFFFF, 0x00000001);
			}
			if (func_434())
			{
				if (Global_4121D1 == iLocal_118)
				{
					uParam0->f_6 = 0x00000001;
				}
				else
				{
					iLocal_118 = Global_4121D1;
					func_416(iLocal_118, 0x00000001, 0x00000001);
				}
			}
			if (func_433())
			{
				uParam0->f_7 = 0x00000001;
			}
			if (func_432(0x00000000, 0x00000000, 0x00000000))
			{
				uParam0->f_8 = 0x00000001;
			}
			if (func_431(0x00000000, 0x00000000, 0x00000000))
			{
				uParam0->f_9 = 0x00000001;
			}
		}
	}
}

int func_431(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (Global_4121D1 == 0xFFFFFFFD)
		{
			if ((unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED) && iParam0) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000ED))
			{
				return 0x00000001;
			}
		}
		if (iParam2 == 0x00000000)
		{
			if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000F2) || (unk_0x7FEE810EE9E768EB(0x00000002, 0x000000F2) && iParam1))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_432(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (Global_4121D1 == 0xFFFFFFFE)
		{
			if ((unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED) && iParam0) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000ED))
			{
				return 0x00000001;
			}
		}
		if (iParam2 == 0x00000000)
		{
			if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000F1) || (unk_0x7FEE810EE9E768EB(0x00000002, 0x000000F1) && iParam1))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_433()
{
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000EE))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_434()
{
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (Global_4121D1 > 0xFFFFFFFF)
		{
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000ED))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_435(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		unk_0x5D80F91A16C40CDE();
	}
	if (Global_4121D1 == 0xFFFFFFFA)
	{
		unk_0xC74D8A1D346B9CCB(0x00000004);
		if (iParam0 && unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED))
		{
			return 0x00000001;
		}
		else
		{
			Global_4121D1 = 0xFFFFFFFF;
			return 0x00000000;
		}
	}
	if (((Global_4121D1 > 0xFFFFFFFF || Global_4121D1 == 0xFFFFFFFD) || Global_4121D1 == 0xFFFFFFFE) || unk_0xFA0AEC0FCBF8703B())
	{
		unk_0xC74D8A1D346B9CCB(0x00000001);
		return 0x00000000;
	}
	if (Global_4121D1 == 0xFFFFFFFF && iParam0)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED))
		{
			unk_0xC74D8A1D346B9CCB(0x00000004);
			Global_4121D1 = 0xFFFFFFFA;
			return 0x00000001;
		}
		else
		{
			unk_0xC74D8A1D346B9CCB(0x00000003);
			return 0x00000000;
		}
	}
	unk_0xC74D8A1D346B9CCB(0x00000001);
	return 0x00000000;
}

void func_436(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = 0xFFFFFFFF;
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		Global_4121D1 = 0xFFFFFFFF;
		return;
	}
	unk_0xFE29D579C98536B2(0x00000001);
	fVar0 = Global_574B;
	fVar2 = (fVar0 + Global_574D);
	fVar3 = Global_574E.f_1662;
	fVar1 = (Global_574E.f_1662 - (IntToFloat(Global_574E.f_1664) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_574E.f_1664 < 0x00000001)
	{
		fVar1 = (Global_574E.f_1662 - 0.034722f);
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD59EF13BB60323B9();
	func_438();
	if (Global_4121D1 == 0xFFFFFFFA)
	{
		return;
	}
	Global_4121D1 = 0xFFFFFFFF;
	fVar7 = Global_4121CB;
	fVar8 = Global_4121CC;
	if (Global_574E.f_1665 > Global_574E.f_1664)
	{
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= fVar3) && Global_4121CC < (fVar3 + fVar6))
		{
			Global_4121D1 = 0xFFFFFFFE;
			if (bParam3)
			{
				func_437(0x00000000);
			}
			return;
		}
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= (fVar3 + fVar6)) && Global_4121CC < (fVar3 + 0.034722f))
		{
			Global_4121D1 = 0xFFFFFFFD;
			if (bParam3)
			{
				func_437(0x00000000);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_574E.f_1665 == 0xFFFFFFFF)
		{
			Global_4121D1 = 0x00000000;
			iVar13 = 0x00000000;
			return;
		}
		iVar11 = 0x00000094;
		iVar12 = (iVar11 / Global_574E.f_1664);
		iVar10 = (0x00000020 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0x00000000)
			{
				unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
				unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
				func_399(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_574D, (0.034722f - 0.0015f), 0x000000FF, 0x000000FF, 0x000000FF, iVar10);
				unk_0xD59EF13BB60323B9();
			}
		}
		Global_4121D1 = Global_574E.f_1F66[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4121D1 = 0xFFFFFFFC;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4121D1 = 0xFFFFFFFB;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4121D1 = 0xFFFFFFFC;
		return;
	}
	Global_4121D1 = 0xFFFFFFFF;
}

void func_437(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 0x00000030;
	}
	else
	{
		iVar3 = 0x000000D2;
	}
	fVar0 = Global_574B;
	fVar1 = Global_574E.f_1662;
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4121D1 == 0xFFFFFFFE)
	{
		func_399(fVar0, fVar1, Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	else if (Global_4121D1 == 0xFFFFFFFD)
	{
		func_399(fVar0, (fVar1 + fVar2), Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_438()
{
	Global_4121CD = Global_4121CB;
	Global_4121CE = Global_4121CC;
	Global_4121CB = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000EF);
	Global_4121CC = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000F0);
	Global_4121CF = (Global_4121CB - Global_4121CD);
	Global_4121D0 = (Global_4121CC - Global_4121CE);
}

void func_439(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_440()
{
	int iVar0;
	
	iVar0 = iLocal_1055;
	if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return;
	}
	if (unk_0xAFE0D3608EDA7039(iVar0))
	{
		unk_0xE8B40F3223863D71(iVar0, 0x00000000);
		unk_0x443C9A6DC182DDD5(iVar0, 0x00000001);
		unk_0x71EDC33E5A423750(iVar0, 0x00000004);
		if (unk_0x9C7B8DC16535B879(iVar0) != 0x00000000 && unk_0x9C7B8DC16535B879(iVar0) != 0x00000001)
		{
			unk_0x0674E58A79778E99(&iLocal_138, 0x0000000F);
		}
	}
}

int func_441()
{
	if (((((Local_133.f_1B && func_450()) && (!func_443(0x00000001) || func_375())) && ((func_348() || func_346(unk_0xD803B885F5E47A62())) || func_377())) && func_442()) && (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x6A67A5CC) != 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_442()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	float fVar7;
	
	if (iLocal_1058)
	{
		return iLocal_1059;
	}
	if (unk_0xC844350D5D58C99A(iLocal_1055) && !unk_0x437347B10A200C4B(iLocal_1055, 0x00000000))
	{
		iVar1 = unk_0xD6DF381716822EFE(iLocal_1055) + 1;
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBBA8A868118C90ED(iLocal_1055, (iVar0 - 0x00000001), 0x00000000))
			{
				iVar2 = unk_0xA30B8362589C124A(iLocal_1055, (iVar0 - 0x00000001), 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						if (!func_279(unk_0x83FACCC48B68F9D1(iVar2)))
						{
							iLocal_1059 = 0x00000000;
							iLocal_1058 = 0x00000001;
							return 0x00000000;
						}
					}
					else if (unk_0xAF6690C489CC6203(iVar2))
					{
						if (!unk_0x9C77D2D0559097F0(iVar2, 0x00000001))
						{
							return 0x00000000;
						}
					}
				}
			}
			iVar0++;
		}
		iVar3 = 0x00000000;
		while (iVar3 < 0x00000020)
		{
			iVar4 = iVar3;
			if (!iVar4 == unk_0xD803B885F5E47A62())
			{
				if (func_143(iVar4, 0x00000001, 0x00000001))
				{
					iVar5 = unk_0x9539D44F3E4492F6(iVar4);
					if (unk_0xC844350D5D58C99A(iVar5) && !unk_0x437347B10A200C4B(iVar5, 0x00000000))
					{
						vVar6 = { func_178(iVar4) };
						fVar7 = SYSTEM::VDIST(vVar6, unk_0x68F4C0EC296D3901(iLocal_1055, 0x00000001));
						if (fVar7 < 20f)
						{
							if (unk_0x3C66DF04E6EA3587(iVar5) == iLocal_1055)
							{
								if (!func_279(iVar4))
								{
									iLocal_1059 = 0x00000000;
									iLocal_1058 = 0x00000001;
									return 0x00000000;
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	iLocal_1059 = 0x00000001;
	iLocal_1058 = 0x00000001;
	return 0x00000001;
}

bool func_443(bool bParam0)
{
	return func_444(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_444(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_376(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_5();
}

void func_445()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x0000000D))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			iVar0 = func_8(0x000004A6, 0xFFFFFFFF, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000016) || !unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000017))
			{
				func_446("HTX_HELP2", 0xFFFFFFFF);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000016))
				{
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000016);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000017);
				}
				func_272(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_138, 0x0000000D);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_138, 0x0000000D);
			}
		}
	}
}

void func_446(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0 = 0xFADF8361;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam0;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000006, iParam0);
	}
}

int func_448(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = iLocal_1055;
	if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
	{
		return 0x00000000;
	}
	iVar2 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar1));
	iVar3 = 0x00000000;
	while (iVar3 < iVar2)
	{
		iVar5 = (iVar3 - 0x00000001);
		if (!unk_0xBBA8A868118C90ED(iVar1, iVar5, 0x00000000))
		{
			iVar4 = unk_0x83FACCC48B68F9D1(unk_0xA30B8362589C124A(iVar1, iVar5, 0x00000000));
			if (iVar4 != func_5() && func_143(iVar4, 0x00000001, 0x00000001))
			{
				if (!Local_133.f_1C == iVar4 || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar4);
				}
			}
		}
		iVar3++;
	}
	return uVar0;
}

int func_449()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	iVar3 = iLocal_1055;
	if (unk_0x437347B10A200C4B(iVar3, 0x00000000))
	{
		return 0x00000000;
	}
	vVar4 = { unk_0x68F4C0EC296D3901(iVar3, 0x00000001) };
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000020)
	{
		iVar0 = unk_0x117658E336116132(iVar2);
		if (func_143(iVar0, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(iVar0);
			if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				vVar5 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000001) };
				if (SYSTEM::VDIST(vVar5, vVar4) < 30f)
				{
					if (unk_0xC42A92762C58E1B9(iVar1, iVar3, 0x00000001))
					{
						if (!unk_0x82CCEAB29E9451DD(iVar1, iVar3))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return 0x00000000;
}

bool func_450()
{
	return func_246(0x00000005, 0xFFFFFFFF) > 0x00000000;
}

var func_451(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_452(int iParam0, int iParam1)
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (func_361())
		{
			return 0x00000000;
		}
	}
	if (func_157())
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000001)
	{
		if (func_142(0x00000000))
		{
			return 0x00000000;
		}
	}
	if (func_91(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return 0x00000000;
	}
	if (func_39())
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

void func_453()
{
	bool bVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000007))
	{
		bVar0 = 0x00000000;
		if (unk_0x91E3F625EF57450D(0x00000000))
		{
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000016))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000063) || unk_0x7FEE810EE9E768EB(0x00000000, 0x00000064))
		{
			bVar0 = 0x00000001;
		}
		if (bVar0)
		{
			if (!func_357())
			{
				bVar0 = 0x00000000;
			}
		}
		if (bVar0)
		{
			if (((((((!func_149(iLocal_1055) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1055, 0x00000000)) && unk_0xA30B8362589C124A(iLocal_1055, 0x00000000, 0x00000000) != unk_0x16F2683693E537C9()) && unk_0x9C66D99E63E8E24C(iLocal_1055) < 10f) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xEF8D6B40) != 0x00000001) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xEF8D6B40) != 0x00000000) && func_452(0x00000001, 0x00000001)) && unk_0xEE9925602B29903C(iLocal_1055) < 40f)
			{
				if (func_118(&uLocal_1040, 0x00000113, 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					unk_0xEFBEAE5C5E6284B3(unk_0x16F2683693E537C9(), 0x41200000);
					unk_0x5D96D8530B3D0904(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000007);
				}
			}
			else if (func_267(&uLocal_1040))
			{
				func_141(&uLocal_1040);
			}
		}
		else if (func_267(&uLocal_1040))
		{
			func_141(&uLocal_1040);
		}
	}
}

void func_454()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x0000000C))
	{
		Global_18045C = 0x00000001;
		unk_0x5D96D8530B3D0904(&iLocal_138, 0x0000000C);
	}
}

void func_455()
{
	if (unk_0xE4EDC4B0E92C078B(uLocal_139))
	{
		unk_0x142CC44DB769B57E(&uLocal_139);
	}
}

void func_456()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x0000000C))
	{
		Global_18045C = 0x00000000;
		unk_0x0674E58A79778E99(&iLocal_138, 0x0000000C);
	}
}

void func_457()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (((((func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_1055, 15f, 15f, 5f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) && unk_0x9C66D99E63E8E24C(iLocal_1055) < 5f) && !func_458(iLocal_1055, 0x00000000)) && func_452(0x00000001, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000002);
		if (unk_0xEAE0D21A50E6C7F4(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000000))
		{
			func_439(&iVar0, &iVar1, &uVar2, &uVar3, 0x00000000);
			if (((iVar1 > 0x0000001C || iVar1 < 0xFFFFFFE4) || iVar0 > 0x0000001C) || iVar0 < 0xFFFFFFE4)
			{
				if (iLocal_144 == 0x00000000)
				{
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_144 = 0x00000001;
				}
			}
			else
			{
				iLocal_144 = 0x00000000;
			}
			if (iLocal_144 == 0x00000001)
			{
				if (SYSTEM::TIMERA() > 0x00000113)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x0674E58A79778E99(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000000);
						iLocal_144 = 0x00000000;
					}
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000002);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&iLocal_138, 0x00000002);
		if (unk_0xEAE0D21A50E6C7F4(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000000))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				iLocal_144 = 0x00000000;
			}
			unk_0x0674E58A79778E99(&(vLocal_137[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000000);
		}
	}
}

int func_458(int iParam0, bool bParam1)
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

void func_459()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_133.f_18 != 0x00000004)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000008))
		{
			unk_0x0674E58A79778E99(&iLocal_138, 0x00000008);
		}
	}
	if (!func_148(Local_133.f_4) && !func_149(iLocal_1055))
	{
		if (unk_0x526BC32A660C89E6(Local_133.f_4) || (!unk_0x83F012E6200426DB(Local_133.f_4) && unk_0xBFF81ED3B99522C7()))
		{
			func_478();
			func_477();
			switch (Local_133.f_18)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) != 0x00000000)
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000004))
						{
							unk_0x9AFA0796FDCABCD5(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000, 0x00000000, Local_133.f_6, 0x00000013, 30f, 7.5f, Local_133.f_9, SYSTEM::ROUND(10f), SYSTEM::ROUND(10f), 0xBF800000, 0x00002021);
							unk_0x0674E58A79778E99(&iLocal_138, 0x00000011);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000004))
					{
						func_169();
					}
					else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) == 0x00000001)
					{
						if (Local_133.f_9 > -1f)
						{
							if (unk_0x5A91F08DF773C39D(unk_0x1B50683925F00106(Local_133.f_4), Local_133.f_6, (7.5f + 5f), (7.5f + 5f), 50f, 0x00000000, 0x00000001, 0x00000000))
							{
								fVar0 = unk_0xD9522BA9E27E1349(unk_0x1B50683925F00106(Local_133.f_4));
								fVar1 = (fVar0 - Local_133.f_9);
								if (fVar1 < 0f)
								{
									fVar1 = (fVar1 + 360f);
								}
								if (fVar1 > 180f)
								{
									fVar1 = (360f - fVar1);
								}
							}
						}
					}
					break;
				
				case 0x00000002:
					if (iLocal_848 != 0x00000002)
					{
						func_169();
						iLocal_848 = 0x00000002;
					}
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) != 0x00000000)
					{
						unk_0x9AFA0796FDCABCD5(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000, 0x00000000, Local_133.f_A, 0x00000004, 30f, 7.5f, -1f, 0x00000028, 0x00000028, 0xBF800000, 0x00000000);
					}
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000004:
					if (iLocal_848 != 0x00000004)
					{
						if (iLocal_848 != 0x00000003)
						{
							func_169();
						}
						if (iLocal_848 == 0x00000003)
						{
							Local_133.f_14 = { unk_0x68F4C0EC296D3901(iLocal_1055, 0x00000001) };
						}
						else
						{
							Local_133.f_14 = { 0f, 0f, 0f };
						}
						iLocal_848 = 0x00000004;
					}
					else if (SYSTEM::VMAG(Local_133.f_14) > 0f)
					{
						if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_1055, 0x00000001), Local_133.f_14) > 10f)
						{
							if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) != 0x00000000)
							{
								unk_0x9AFA0796FDCABCD5(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000, 0x00000000, Local_133.f_14, 0x00000004, 30f, 7.5f, -1f, 0x00000028, 0x00000028, 0xBF800000, 0x00000000);
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000008) && unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000E))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								if (!bLocal_136)
								{
									func_262(&uLocal_853, "CT_AUD", "MPCT_HPidle", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
								}
								else
								{
									func_476(&uLocal_853, "CT_AUD", "MPCT_HPidle", "MPCT_HPidle_06", 0x0000000C, 0x00000000, 0x00000000);
								}
							}
							else
							{
								func_12(0x00000001);
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								if (!bLocal_136)
								{
									func_100(&uLocal_853, "EXHELAU", "EXHEL_IDLE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
								}
								else
								{
									func_475(&uLocal_853, "EXHELAU", "EXHEL_IDLE", "EXHEL_IDLE_02", 0x0000000C, 0x00000000, 0x00000000);
								}
							}
							unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000008);
						}
					}
					break;
				
				case 0x00000005:
					if (!unk_0xAFE0D3608EDA7039(iLocal_1055))
					{
						unk_0x0C8A454B494DAA0D(iLocal_1055);
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x0000000F))
					{
						func_440();
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x0000000E))
					{
						if (iLocal_848 != 0x00000005)
						{
							func_169();
							iLocal_848 = 0x00000005;
						}
						if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_133.f_4), 0xB41F1A34) != 0x00000000)
						{
							unk_0x9AFA0796FDCABCD5(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000, 0x00000000, Local_133.f_1D, 0x00000004, 30f, 7.5f, -1f, 0x00000028, 0x00000028, 0xBF800000, 0x00000000);
						}
						if (func_474() && unk_0xEAE0D21A50E6C7F4(Local_133.f_1, 0x0000000F))
						{
							if (unk_0xAFE0D3608EDA7039(iLocal_1055))
							{
								unk_0x1E9649458B15960F(iLocal_1055, 0x00000001);
								func_169();
								if (iLocal_124 == 0xFFFFFFFF)
								{
									if (unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000013))
									{
										iVar2 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), uLocal_1047);
										if (iVar2 > 0x00002710)
										{
											unk_0x5D29A7ED2621B332();
											uLocal_1047 = unk_0x2B6E0A53779D29EA();
										}
									}
									else
									{
										uLocal_1047 = unk_0x2B6E0A53779D29EA();
										unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000013);
									}
									if (func_462(Local_133.f_1D, 0f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000))
									{
										unk_0x5D96D8530B3D0904(&iLocal_138, 0x0000000E);
										unk_0x0674E58A79778E99(&iLocal_138, 0x00000013);
										if (iLocal_124 == 0xFFFFFFFF && !func_280(Local_133.f_5))
										{
											unk_0x1E9649458B15960F(iLocal_1055, 0x00000000);
											unk_0x20641932E5104B25(iLocal_1055, 0x00000001, 0x00000000);
											unk_0x71EDC33E5A423750(iLocal_1055, 0x00000001);
											Local_133.f_17 = 0x00000005;
											func_169();
										}
									}
								}
								else if (iLocal_124 > 0xFFFFFFFF)
								{
									unk_0x1E9649458B15960F(iLocal_1055, 0x00000000);
									unk_0x20641932E5104B25(iLocal_1055, 0x00000001, 0x00000000);
									unk_0x71EDC33E5A423750(iLocal_1055, 0x00000001);
									Local_133.f_17 = 0x00000005;
									func_169();
								}
							}
						}
					}
					break;
				
				case 0x00000007:
					func_144();
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x00000009))
					{
						if (func_263())
						{
							if (func_156())
							{
								func_117(&uLocal_853, 0x00000003, unk_0x1B50683925F00106(Local_133.f_4), "FM_Pilot", 0x00000000, 0x00000001);
								func_262(&uLocal_853, "CT_AUD", "MPCT_HPwrn2", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							else
							{
								func_117(&uLocal_853, 0x00000002, unk_0x1B50683925F00106(Local_133.f_4), "EXEC_PILOT", 0x00000000, 0x00000001);
								func_100(&uLocal_853, "EXHELAU", "EXHEL_FORCED", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							}
							unk_0x71EDC33E5A423750(iLocal_1055, 0x00000002);
							unk_0x5D96D8530B3D0904(&iLocal_138, 0x00000009);
						}
					}
					break;
				
				case 0x00000008:
					if (!unk_0xC18DDE8EA6E48FDB(iLocal_1055))
					{
						func_144();
						if (unk_0x2720E241B5CCF780(iLocal_1055) > 0x00000000)
						{
							if (!func_148(Local_133.f_4))
							{
								if (!unk_0x437347B10A200C4B(iLocal_1055, 0x00000000))
								{
									if (!func_259())
									{
										unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_133.f_4), uLocal_141);
										if (unk_0xE9F78D191AD5EDBA(Local_133.f_3))
										{
											func_461(&(Local_133.f_3));
										}
										if (func_273())
										{
											func_460(0x00000000);
										}
										if (unk_0xE9F78D191AD5EDBA(Local_133.f_4))
										{
											func_461(&(Local_133.f_4));
										}
									}
								}
							}
						}
						else if (!func_148(Local_133.f_4))
						{
							if (!unk_0x437347B10A200C4B(iLocal_1055, 0x00000000))
							{
								unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_133.f_4), uLocal_142);
								unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_133.f_4), 0x00000001);
								if (unk_0xE9F78D191AD5EDBA(Local_133.f_3))
								{
									func_461(&(Local_133.f_3));
								}
								if (func_273())
								{
									func_460(0x00000000);
								}
								if (unk_0xE9F78D191AD5EDBA(Local_133.f_4))
								{
									func_461(&(Local_133.f_4));
								}
							}
						}
					}
					return;
				}
		}
		if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1055, 0x00000000))
			{
				switch (Local_133.f_18)
				{
					case 0x00000007:
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_138, 0x0000000A))
						{
							iVar3 = 0x00000000;
							while (iVar3 < unk_0xD6DF381716822EFE(iLocal_1055) + 1)
							{
								iVar4 = unk_0xA30B8362589C124A(iLocal_1055, (iVar3 - 0x00000001), 0x00000000);
								if (iVar4 != 0x00000000)
								{
									if (!unk_0xEB6A8945D1AC98A1(iVar4))
									{
										if (unk_0x34BFC6F0CB887BC2(iVar4))
										{
											func_145(func_132(unk_0x83FACCC48B68F9D1(iVar4)), 0x00000000, 0f, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
										}
									}
								}
								iVar3++;
							}
							unk_0x5D96D8530B3D0904(&iLocal_138, 0x0000000A);
						}
						break;
					}
				}
			}
	}
}

void func_460(int iParam0)
{
	if (unk_0xC844350D5D58C99A(Global_26B66F.f_12D))
	{
		Global_26B66F.f_171A = 0x00000001;
		Global_26B66F.f_171B = iParam0;
	}
}

void func_461(var uParam0)
{
	var uVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&uVar0);
	}
}

int func_462(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_56C3.f_6 = 0x00000001;
	if (Global_2537E2.f_4D1 && Global_2537E2.f_4D9)
	{
		func_470(0x00000000, bParam7);
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628() && !bParam7)
	{
		if (Global_2537E2.f_4D1)
		{
			func_470(0x00000000, bParam7);
		}
		return 0x00000000;
	}
	if ((unk_0xEB880D98B5988D0C() && !bParam7) && !unk_0x0C2635BB5127C8FB())
	{
		return 0x00000000;
	}
	if (!func_469())
	{
		if (func_468(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && !(func_467() || func_466()))
		{
			if (((bParam7 && func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000)) && unk_0x991B1F0980C62628()) && Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_DE == 0x00000001)
			{
			}
			else if (func_411() == 0x0000001C)
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
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2537E2.f_4D7) < func_465(0x00000000))
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
				func_464(0x00000000);
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
				func_470(bParam4, bParam7);
				return 0x00000001;
			}
			else
			{
				unk_0x066C43E677C08D5C();
				unk_0x28B8A2632901EC2F(unk_0xD803B885F5E47A62(), vParam0, fParam1, bParam2, iParam8, 0x00000000);
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
			if (func_463(&(Global_2537E2.f_4D8), vParam0, fParam1, iVar0))
			{
				func_470(bParam4, bParam7);
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
					func_470(bParam4, bParam7);
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
				func_470(bParam4, bParam7);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_463(var uParam0, vector3 vParam1, float fParam2, int iParam3)
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

void func_464(int iParam0)
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

int func_465(bool bParam0)
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

bool func_466()
{
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x0000000C)) && Global_19DEEC == 0x00000008);
}

bool func_467()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_468(int iParam0, bool bParam1, int iParam2)
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

bool func_469()
{
	return Global_140856;
}

void func_470(bool bParam0, bool bParam1)
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
	func_473();
	if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x0000000E) && !func_472())
	{
		func_471();
	}
}

void func_471()
{
	Global_26DA2B.f_52 = 0x00000001;
}

int func_472()
{
	if (!unk_0xA14BB9332558B949() && !func_469())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_3A31D[0x00000000 /*24*/].f_11, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_473()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

int func_474()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!(Global_258C2B.f_A || unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_218, 0x00000004)))
	{
		return 0x00000000;
	}
	uVar1 = Global_258C2B.f_15;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (unk_0xEAE0D21A50E6C7F4(uVar1, iVar0))
		{
			iVar2 = unk_0x117658E336116132(iVar0);
			if (func_143(iVar2, 0x00000001, 0x00000001))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_218, 0x00000004))
				{
					return 0x00000000;
				}
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_475(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_84(sParam2, iParam4, 0x00000000);
}

int func_476(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_93(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	Global_280001 = 0x00000001;
	return func_84(sParam2, iParam4, 0x00000000);
}

void func_477()
{
	if (iLocal_145 == 0x00000000)
	{
		iLocal_145 = 0x00000001;
	}
}

void func_478()
{
	unk_0x7352ACF3368DF65F("MobileRadioInGame", 0x00000000);
	if (!func_333())
	{
		if (func_143(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_1055) && !func_362(unk_0x16F2683693E537C9(), iLocal_1055, 0xFFFFFFFF))
			{
				unk_0x7352ACF3368DF65F("MobileRadioInGame", 0x00000001);
			}
		}
	}
}

void func_479()
{
	if (func_273())
	{
		return;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		if (!unk_0xE4EDC4B0E92C078B(uLocal_139))
		{
			if (!func_149(iLocal_1055))
			{
				uLocal_139 = unk_0x5C3B41825F6AC5A0(iLocal_1055);
				if (unk_0xE4EDC4B0E92C078B(uLocal_139))
				{
					unk_0xBC8E0A7390523199(uLocal_139, 0x000001A6);
					unk_0xF2D30B8ACAF12A39(uLocal_139, 0x00000000);
					unk_0xDC5B2F9D0CCE3A10(uLocal_139, "HTX_BLIP");
					iLocal_140 = 0x00000001;
					func_323(&uLocal_139, iLocal_140);
				}
			}
		}
	}
}

void func_480()
{
	int iVar0;
	
	iVar0 = SYSTEM::ROUND(10f);
	if (!func_149(iLocal_1055))
	{
		unk_0xDD353D0E9C789D0E(&uLocal_143);
		unk_0x9AFA0796FDCABCD5(0x00000000, iLocal_1055, 0x00000000, 0x00000000, Local_133.f_A, 0x00000009, 30f, 7.5f, -1f, iVar0, iVar0, 0xBF800000, 0x00000000);
		unk_0x75ABDC5F81978924(uLocal_143);
		unk_0xDD353D0E9C789D0E(&uLocal_142);
		unk_0x9AFA0796FDCABCD5(0x00000000, iLocal_1055, 0x00000000, 0x00000000, Local_133.f_11, 0x00000009, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, 0xBF800000, 0x00000000);
		unk_0x75ABDC5F81978924(uLocal_142);
		unk_0xDD353D0E9C789D0E(&uLocal_141);
		unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000040);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
		}
		unk_0x75ABDC5F81978924(uLocal_141);
	}
}

int func_481()
{
	return Local_133;
}

int func_482(int iParam0)
{
	return vLocal_137[iParam0 /*3*/];
}

int func_483()
{
	var uVar0;
	
	func_490(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_489())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_488())
	{
		return 0x00000001;
	}
	if (func_487(0x0000009F))
	{
		if (!func_486())
		{
			return 0x00000001;
		}
	}
	if (func_487(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_484() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_484()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_484()
{
	switch (func_292())
	{
		case 0x00000000:
			return func_485();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_485()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_486()
{
	return Global_2564C8.f_256;
}

int func_487(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_488()
{
	return Global_258C08;
}

bool func_489()
{
	return Global_2564C8.f_251;
}

void func_490(var uParam0)
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
					func_491(iVar0);
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

void func_491(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_143(vVar0.y, 0x00000001, 0x00000001))
		{
			uVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(uVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					uVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(uVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_492(uVar2, &bVar3))
						{
							unk_0x920D29D81E211607(uVar2, vVar0.z);
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

int func_492(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(uParam0))
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

void func_493()
{
	SYSTEM::WAIT(0x00000000);
}

void func_494(bool bParam0)
{
	var uVar0;
	var uVar1;
	
	if (func_162())
	{
		func_161();
	}
	if (bParam0)
	{
		func_455();
	}
	func_456();
	func_261(0x00000000);
	if (func_273())
	{
		if (func_499("HTX_HELPN", "GB_HELI_BLIP"))
		{
			unk_0xA37A90C62806D848(0x00000001);
			uVar0 = func_8(0x000004A6, 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&uVar0, 0x00000010);
			func_272(0x000004A6, uVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
		func_12(0x00000000);
	}
	else if (func_499("HTX_HELPN", "HTX_HELPB"))
	{
		unk_0xA37A90C62806D848(0x00000001);
		uVar1 = func_8(0x000004A6, 0xFFFFFFFF, 0x00000000);
		unk_0x0674E58A79778E99(&uVar1, 0x00000010);
		func_272(0x000004A6, uVar1, 0xFFFFFFFF, 0x00000001, 0x00000000);
	}
	if (bParam0)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_133.f_4) && unk_0x526BC32A660C89E6(Local_133.f_4))
		{
			if (func_273())
			{
				if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_133.f_4), 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_133.f_4), iLocal_1055, 0x00000000))
					{
						func_270(&(Local_133.f_4));
					}
				}
			}
			if (!func_149(iLocal_1055))
			{
				if (!func_148(Local_133.f_4))
				{
					func_480();
					unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_133.f_4), uLocal_142);
				}
			}
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (bParam0)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_133.f_3))
			{
				if (unk_0x526BC32A660C89E6(Local_133.f_3))
				{
					if (!func_149(iLocal_1055))
					{
						unk_0x71EDC33E5A423750(iLocal_1055, 0x00000001);
					}
					func_461(&(Local_133.f_3));
				}
			}
			if (func_273())
			{
			}
			if (unk_0xE9F78D191AD5EDBA(Local_133.f_4))
			{
				if (unk_0x526BC32A660C89E6(Local_133.f_4))
				{
					if (!func_148(Local_133.f_4))
					{
						unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_133.f_4), 0x000000FB, 0x00000000);
					}
					func_461(&(Local_133.f_4));
				}
			}
		}
		if (!func_333())
		{
			func_497(func_498(0x00000001, 0x00000001), 0x0000000D, func_5());
		}
		else
		{
			func_497(func_498(0x00000001, 0x00000001), 0x0000002C, func_5());
		}
	}
	func_496();
	if (iLocal_145 == 0x00000001)
	{
		iLocal_145 = 0x00000000;
	}
	unk_0xE17FDF9E3068281B(&uLocal_146);
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_344), 0x00000000);
	Global_26B66F.f_104 = 0x00000000;
	func_495();
}

void func_495()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_496()
{
	unk_0xF82EA857DA10E0CD(&uLocal_141);
	unk_0xF82EA857DA10E0CD(&uLocal_142);
	unk_0xF82EA857DA10E0CD(&uLocal_143);
}

void func_497(int iParam0, int iParam1, var uParam2)
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

int func_498(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_143(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_306(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_499(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_500(struct<21> Param0)
{
	func_503(0x00000020, Param0);
	unk_0x0BEC04ECA8485A3A(0x00000001);
	unk_0x28E5F00F131890E3(0x00000001);
	func_502(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_133, 0x00000020);
	unk_0x35B62793EAE9ADDF(&vLocal_137, 0x00000061);
	if (!func_501())
	{
		return 0x00000000;
	}
	unk_0x256D93AFAE851A7A(0x00000000);
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_133.f_5 = unk_0xD803B885F5E47A62();
		Local_133.f_6 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, 15f, 0f) };
		Local_133.f_A = { -346.4007f, 1151.507f, 324.7254f };
		Local_133.f_1B = func_333();
		Local_133.f_1C = func_5();
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_344), 0x00000000);
	}
	Global_258C2B.f_1A = 0x00000000;
	Global_258C2B.f_19 = 0x00000000;
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_218), 0x00000004);
	iLocal_847 = unk_0x09BE1E6DF7B80B43();
	vLocal_137[unk_0x57270EE11514DC67() /*3*/] = 0x00000000;
	return 0x00000001;
}

int func_501()
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
		if (func_489())
		{
			return 0x00000000;
		}
		if (func_487(0x0000009D))
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

int func_502(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_495();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_469())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_495();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_489())
				{
					if (!bParam2)
					{
						func_495();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_487(0x0000009D))
				{
					if (!bParam2)
					{
						func_495();
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
					func_495();
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
				func_495();
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
			func_495();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_503(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_495();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

void func_504()
{
	iLocal_1050 = 0x00000000;
	func_505(-243.828f, -1461.281f, 30.99f, 279.3385f);
	func_505(139.284f, 311.0571f, 111.1386f, 45.1942f);
	func_505(634.8535f, 141.8226f, 94.2749f, 26.968f);
	func_505(383.2168f, 16.5927f, 90.2992f, 40.5093f);
	func_505(67.2551f, 51.4397f, 72.5151f, 38.4162f);
	func_505(294.1833f, 575.2105f, 152.623f, 304.9259f);
	func_505(933.0354f, 492.7919f, 120.4651f, 3.1259f);
	func_505(-336.8088f, 454.2572f, 110.9638f, 58.2889f);
	func_505(-135.9225f, 615.1293f, 204.3637f, 240.0636f);
	func_505(139.3762f, -250.2123f, 50.426f, 276.1187f);
	func_505(-139.5668f, -443.9992f, 33.1041f, 112.657f);
	func_505(-491.7431f, -144.9858f, 37.8309f, 98.1814f);
	func_505(-645.7263f, 406.0965f, 100.2678f, 272.8684f);
	func_505(-957.0592f, 295.3116f, 68.9958f, 58.8505f);
	func_505(-820.9876f, 876.1653f, 202.1549f, 196.4736f);
	func_505(-1443.188f, 455.4925f, 110.7514f, 296.894f);
	func_505(-1481.404f, 863.1016f, 181.577f, 38.349f);
	func_505(-1646.419f, -195.0848f, 54.2692f, 160.7423f);
	func_505(-1099.93f, -192.9011f, 37.3214f, 299.6116f);
	func_505(-604.6443f, -599.9016f, 33.6806f, 270.5396f);
	func_505(-1471.802f, -853.1879f, 13.2503f, 302.8094f);
	func_505(-2011.161f, -526.2204f, 10.7096f, 28.1469f);
	func_505(-2212.737f, 537.3901f, 164.4195f, 348.0596f);
	func_505(-3025.405f, 338.3629f, 13.6245f, 14.9527f);
	func_505(-1054.36f, -1398.452f, 5.3278f, 253.1757f);
	func_505(-567.387f, -1258.005f, 12.8623f, 8.386f);
	func_505(-964.4938f, -727.4775f, 18.794f, 344.527f);
	func_505(-2429.193f, 1045.141f, 193.7864f, 263.1876f);
	func_505(-3136.545f, 1191.168f, 19.0974f, 220.8899f);
	func_505(-2692.456f, -62.2375f, 15.234f, 39.5592f);
	func_505(-355.8293f, -990.3766f, 28.4949f, 125.2948f);
	func_505(243.7049f, -881.4253f, 29.4921f, 297.8129f);
	func_505(453.4193f, -380.5279f, 45.6676f, 357.5639f);
	func_505(936.8099f, -553.545f, 58.3693f, 263.5811f);
	func_505(770.1622f, -233.1951f, 65.1145f, 243.3845f);
	func_505(1134.113f, 353.7328f, 90.4476f, 351.5361f);
	func_505(1864.741f, 259.8708f, 162.1022f, 225.713f);
	func_505(1558.889f, 879.5532f, 76.4596f, 359.376f);
	func_505(337.4946f, 985.814f, 209.7682f, 69.9473f);
	func_505(870.984f, 968.8524f, 238.3209f, 35.1108f);
	func_505(2599.014f, 415.1773f, 107.7289f, 186.8054f);
	func_505(2547.611f, -579.5625f, 64.2137f, 161.9321f);
	func_505(1886.246f, -741.1049f, 82.6813f, 287.8844f);
	func_505(1455.893f, -1498.703f, 63.6557f, 173.4564f);
	func_505(1161.785f, -1076.126f, 40.4823f, 247.4221f);
	func_505(1394.804f, -734.3683f, 66.2226f, 115.9829f);
	func_505(1167.93f, -150.3837f, 55.5932f, 167.958f);
	func_505(2455.5f, 1014.216f, 83.1307f, 14.3078f);
	func_505(2530.339f, 1633.237f, 28.3235f, 234.752f);
	func_505(1951.904f, 1645.648f, 71.2406f, 260.0168f);
	func_505(2806.778f, -815.1143f, 5.7198f, 81.9638f);
	func_505(1806.947f, -1290.593f, 95.0351f, 331.8087f);
	func_505(1678.681f, -1952.281f, 111.666f, 80.8951f);
	func_505(1292.103f, -3186.505f, 4.9064f, 359.7118f);
	func_505(740.4905f, -3028.477f, 7.562f, 312.5958f);
	func_505(559.4196f, -2593.408f, 5.0368f, 291.8598f);
	func_505(877.3129f, -2437.455f, 27.3458f, 83.4984f);
	func_505(1212.66f, -2098.225f, 43.5962f, 332.4854f);
	func_505(797.2423f, -1599.807f, 30.2847f, 164.9429f);
	func_505(827.6533f, -1980.338f, 28.299f, 10.749f);
	func_505(373.2801f, -2133.071f, 15.2922f, 150.4032f);
	func_505(617.6802f, -1064.3f, 9.3075f, 179.8157f);
	func_505(296.5454f, -1341.473f, 42.7533f, 230.0817f);
	func_505(-174.3653f, -2548.709f, 5.0163f, 198.7499f);
	func_505(215.9285f, -2903.652f, 6.6886f, 151.951f);
	func_505(314.6187f, -1679.352f, 28.1261f, 72.5752f);
	func_505(1408.015f, -2623.801f, 45.1502f, 312.7456f);
	func_505(-379.9112f, -1774.544f, 20.0649f, 13.9162f);
	func_505(96.5893f, -2001.965f, 18.844f, 147.396f);
	func_505(-729.8096f, -1777.493f, 28.0263f, 61.8742f);
	func_505(-971.1151f, -1868.092f, 18.9378f, 33.2574f);
	func_505(-720.1935f, -2557.545f, 12.9387f, 18.6712f);
	func_505(-1335.482f, -2677.121f, 12.9449f, 187.4991f);
	func_505(-878.3446f, -2968.556f, 12.9471f, 331.5428f);
	func_505(-1005.327f, -2232.398f, 8.0032f, 92.8891f);
	func_505(-401.2441f, -2284.453f, 6.6082f, 2.3971f);
	func_505(-1454.813f, -1471.849f, 1.1336f, 242.0199f);
	func_505(821.5599f, 1298.328f, 362.9729f, 262.7468f);
	func_505(-449.7726f, 1586.159f, 358.0207f, 239.931f);
	func_505(-348.6263f, 1156.363f, 324.5158f, 54.5644f);
	func_505(-827.162f, 1686.859f, 194.2108f, 236.4414f);
	func_505(-184.5484f, 1923.192f, 196.6049f, 206.5246f);
	func_505(296.1962f, 1771.646f, 227.0542f, 310.265f);
	func_505(1052.903f, 1495.316f, 174.8349f, 205.154f);
	func_505(-1532.131f, 1396.502f, 122.7763f, 352.1764f);
	func_505(-2604.194f, 1675.818f, 138.9021f, 166.6577f);
	func_505(-1513.824f, 2166.168f, 54.0724f, 251.5786f);
	func_505(-1697.408f, 2456.897f, 29.418f, 101.049f);
	func_505(-2819.858f, 2253.055f, 28.6358f, 169.9338f);
	func_505(-3043.554f, 1477.634f, 27.3241f, 179.9691f);
	func_505(-2381.452f, 2830.405f, 2.372f, 76.3996f);
	func_505(-2993.669f, 3335.124f, 9.2207f, 46.6226f);
	func_505(-1789.875f, 2675.004f, 2.4478f, 318.05f);
	func_505(-1596.024f, 2950.032f, 32.0914f, 221.481f);
	func_505(-1099.969f, 2850.755f, 12.8854f, 317.9454f);
	func_505(55.8239f, 3338.571f, 35.6469f, 165.2648f);
	func_505(173.2043f, 2293.298f, 92.1495f, 208.7343f);
	func_505(-468.6477f, 2994.032f, 26.1288f, 96.4423f);
	func_505(-1212.968f, 2599.15f, 14.572f, 277.3627f);
	func_505(-177.6004f, 2945.426f, 29.6345f, 344.5758f);
	func_505(-270.1975f, 2661.462f, 59.8035f, 190.3861f);
	func_505(-767.441f, 2284.18f, 76.413f, 331.6507f);
	func_505(578.2679f, 2798.182f, 41.1427f, 308.8694f);
	func_505(388.2008f, 3525.706f, 32.9f, 242.16f);
	func_505(1228.046f, 3612.758f, 32.4634f, 303.8293f);
	func_505(1060.165f, 3042.599f, 40.6158f, 329.9008f);
	func_505(845.1221f, 2207.164f, 49.9157f, 40.9634f);
	func_505(1281.185f, 2665.227f, 36.6537f, 44.0714f);
	func_505(2137.185f, 2961.237f, 45.9129f, 273.7183f);
	func_505(2052.815f, 3319.029f, 44.7859f, 127.0919f);
	func_505(1959.709f, 3775.369f, 31.2029f, 88.7083f);
	func_505(2500.937f, 4153.028f, 37.2878f, 204.7804f);
	func_505(2730.682f, 3415.967f, 55.7151f, 278.4684f);
	func_505(2936.23f, 4437.92f, 47.4218f, 323.2516f);
	func_505(3636.311f, 3765.969f, 27.5157f, 51.549f);
	func_505(2532.664f, 2686.917f, 40.7205f, 249.7434f);
	func_505(2157.111f, 1974.473f, 93.7061f, 22.0171f);
	func_505(1499.479f, 1827.166f, 106.4998f, 42.618f);
	func_505(2895.405f, 3888.189f, 52.0109f, 213.3904f);
	func_505(1639.252f, 3852.798f, 33.7036f, 277.8739f);
	func_505(16.3756f, 3623.829f, 39.0889f, 138.8624f);
	func_505(-202.3551f, 4176.263f, 42.1762f, 357.9106f);
	func_505(378.6819f, 4405.726f, 61.3992f, 2.2521f);
	func_505(763.3045f, 4180.816f, 39.6263f, 313.7911f);
	func_505(1410.916f, 4363.65f, 41.6243f, 351.9106f);
	func_505(2474.189f, 4460.482f, 34.2448f, 338.6556f);
	func_505(2787.091f, 4896.004f, 35.5118f, 346.5345f);
	func_505(3787.385f, 4446.902f, 3.6951f, 322.4305f);
	func_505(3283.627f, 5161.83f, 17.7122f, 120.0761f);
	func_505(2444.642f, 5016.759f, 45.2854f, 256.7558f);
	func_505(2071.367f, 4807.796f, 40.6377f, 147.898f);
	func_505(2012.781f, 5129.742f, 44.5825f, 92.6079f);
	func_505(1710.641f, 4657.467f, 42.4848f, 108.8281f);
	func_505(2498.991f, 5641.692f, 45.6963f, 48.9642f);
	func_505(2250.176f, 5968.912f, 49.0116f, 15.0599f);
	func_505(1853.773f, 6404.851f, 45.2075f, 116.4965f);
	func_505(866.8867f, 6512.98f, 20.7883f, 248.893f);
	func_505(205.2754f, 7012.687f, 1.0453f, 196.8449f);
	func_505(-212.0001f, 6565.548f, 9.8635f, 152.7291f);
	func_505(-573.4517f, 6167.307f, 5.3904f, 302.589f);
	func_505(206.7901f, 6402.567f, 30.3805f, 81.5939f);
	func_505(-731.3629f, 5800.728f, 16.5887f, 196.4081f);
	func_505(-664.7944f, 5460.415f, 49.6868f, 157.5173f);
	func_505(-601.0768f, 5294.568f, 69.2145f, 27.8272f);
	func_505(-532.1605f, 4971.026f, 146.1112f, 172.7688f);
	func_505(-1546.969f, 5010.706f, 64.4016f, 255.285f);
	func_505(-2170.899f, 4459.51f, 61.8337f, 141.4564f);
	func_505(-2504.334f, 3627.644f, 12.7211f, 175.0945f);
	func_505(-1216.204f, 4457.368f, 29.5562f, 16.7363f);
	func_505(797.6583f, 5704.728f, 697.4423f, 102.9245f);
	func_505(159.5193f, 5212.952f, 572.7617f, 303.589f);
	func_505(2867.312f, 5944.487f, 356.7372f, 56.172f);
	func_505(10.6515f, 6334.516f, 30.2366f, 336.7196f);
	func_505(1472.189f, 6359.462f, 22.7034f, 289.4279f);
	func_505(-618.1378f, 3993.369f, 120.0915f, 212.0991f);
	func_505(-885.1862f, 4428.847f, 19.9719f, 90.7754f);
	func_505(215.323f, 7381.881f, 13.4278f, 203.1559f);
	func_505(3635.046f, 5669.953f, 7.7871f, 32.6794f);
	func_505(3646.407f, 4997.506f, 11.2006f, 19.0908f);
	func_505(3546.356f, 2523.698f, 5.4951f, 29.0676f);
	func_505(2193.448f, 5574.355f, 52.7895f, 268.6339f);
	func_505(-2165.357f, 5170.346f, 13.5525f, 39.8589f);
	func_505(-1606.75f, 4742.162f, 52.9203f, 53.6989f);
	func_505(-945.4f, 4611.085f, 237.932f, 276.5363f);
	func_505(-2415.631f, 4221.8f, 8.7558f, 303.5893f);
	func_505(809.2775f, 3227.627f, 37.6705f, 234.2991f);
	func_505(1101.399f, 3436.295f, 32.8756f, 310.4154f);
	func_505(1691.926f, 3486.635f, 35.8127f, 339.3695f);
	func_505(2407.986f, 3537.302f, 72.5395f, 355.4901f);
	func_505(3051.449f, 2725.313f, 62.3978f, 331.4178f);
	func_505(2527.302f, 2009.074f, 18.9235f, 346.0563f);
	func_505(1840.181f, 2499.208f, 44.7693f, 301.6813f);
	func_505(1787.824f, 3067.684f, 61.2278f, 70.872f);
	func_505(1382.367f, 3003.334f, 39.7661f, 340.408f);
	func_505(244.4017f, 2637.836f, 44.6054f, 240.1419f);
	func_505(-251.8209f, 2205.487f, 128.884f, 195.6026f);
	func_505(-541.051f, 2005.346f, 202.3307f, 274.6922f);
	func_505(-2039.825f, 1960.994f, 187.7879f, 312.9809f);
	func_505(-1603.197f, 237.8279f, 58.3225f, 263.857f);
	func_505(-1724.508f, -2970.292f, 13.1465f, 4.1473f);
	func_505(1192.917f, 1839.359f, 77.4385f, 170.34f);
	func_505(3300.137f, -99.0274f, 11.6522f, 185.3741f);
	func_505(2849.717f, -1461.166f, 12.5068f, 52.3716f);
	func_505(2306.17f, -2118.141f, 2.322f, 18.5464f);
	func_505(2163.642f, 135.7375f, 226.6112f, 117.1583f);
	func_505(2527.796f, -90.4654f, 93.1274f, 110.8862f);
	func_505(1774.983f, 1676.629f, 78.209f, 142.8201f);
	func_505(1623.241f, 1265.085f, 86.7423f, 134.636f);
	func_505(1732.167f, 2169.269f, 82.2189f, 350.0135f);
	func_505(2167.046f, 1339.68f, 74.7227f, 32.7734f);
	func_505(712.9243f, 1727.998f, 182.7801f, 68.4225f);
	func_505(151.0186f, 1429.878f, 259.7057f, 36.1885f);
	func_505(-1662.585f, 4284.667f, 80.2819f, 23.3258f);
	func_505(-1323.416f, 5349.778f, 2.3383f, 79.3172f);
	func_505(-2294.521f, 2342.52f, 0.2262f, 44.7661f);
	func_505(-892.6975f, 5271.815f, 84.9171f, 112.4479f);
	func_505(470.1919f, 3115.264f, 40.5447f, 77.6964f);
	func_505(-2673.124f, 2957.395f, 7.3939f, 285.1781f);
	func_505(-3192.201f, 815.0291f, 2.7957f, 260.1565f);
	func_505(945.9874f, -3277.793f, 4.8982f, 266.6732f);
	func_505(126.3235f, -1658.512f, 32.9414f, 28.4566f);
	func_505(1144.835f, -1688.646f, 35.1291f, 6.0452f);
	func_505(944.4474f, -1369.549f, 12.3266f, 314.3879f);
	func_505(937.8714f, -896.6146f, 49.0496f, 179.602f);
	func_505(-50.8218f, -894.3738f, 40.4824f, 157.0664f);
	func_505(-1159.234f, -1111.134f, 8.7345f, 300.7512f);
	func_505(-1729.466f, -972.845f, 5.2263f, 14.1883f);
	func_505(-251.1976f, 310.9189f, 96.5312f, 177.6596f);
	func_505(-261.0635f, 192.8841f, 84.9561f, 104.3934f);
	func_505(-769.5164f, -1996.682f, 7.8903f, 136.2945f);
	func_505(-1345.348f, -2123.383f, 12.9441f, 145.1976f);
	func_505(576.7401f, -657.0758f, 12.5207f, 347.7486f);
	func_505(2640.831f, 3200.896f, 52.1493f, 273.1668f);
	func_505(1995.588f, -925.1763f, 78.0824f, 77.8221f);
	func_505(-500.2817f, -2111.103f, 8.9576f, 132.9903f);
	func_505(-725.0269f, -2355.187f, 14.8438f, 227.8691f);
	func_505(-980.7766f, -2488.198f, 14.0523f, 150.2897f);
	func_505(-1127.178f, -1696.759f, 4.2742f, 29.4122f);
	func_505(-1212.316f, -1338.762f, 4.4687f, 109.8316f);
	func_505(-1373.831f, -1274.4f, 4.6296f, 28.0177f);
	func_505(-1531.726f, -1037.846f, 5.8012f, 226.8082f);
	func_505(-1243.753f, -963.8779f, 3.2555f, 82.051f);
	func_505(-1161.864f, -725.671f, 20.534f, 37.0823f);
	func_505(-1071.658f, -863.8865f, 4.7704f, 302.8431f);
	func_505(-869.8373f, -894.2067f, 15.7782f, 195.2182f);
	func_505(-847.3995f, -1198.361f, 5.8987f, 224.6693f);
	func_505(-59.1982f, 1031.608f, 233.5404f, 342.8009f);
	func_505(-498.3894f, -950.4281f, 23.8303f, 170.6251f);
	func_505(-668.458f, -451.6636f, 35.9803f, 263.7879f);
	func_505(-538.0801f, -255.6042f, 36.4835f, 28.044f);
	func_505(-674.919f, -35.9837f, 39.1f, 107.0653f);
	func_505(-957.8153f, -347.7798f, 38.5257f, 296.3945f);
	func_505(-1399.278f, 122.7592f, 54.9624f, 179.943f);
	func_505(-1259.903f, 600.5897f, 139.911f, 307.5361f);
	func_505(-1161.234f, 931.7809f, 198.3958f, 312.1524f);
	func_505(-929.2317f, 1127.948f, 220.3745f, 192.5778f);
	func_505(-625.6737f, 979.0534f, 241.17f, 105.5179f);
	func_505(-281.6504f, 736.922f, 208.7457f, 201.0901f);
	func_505(-799.7258f, 575.9078f, 125.8626f, 200.7426f);
	func_505(-111.9565f, 1361.998f, 311.2291f, 309.7981f);
	func_505(161.9947f, 742.2007f, 207.3627f, 24.4887f);
	func_505(-591.4622f, -1443.56f, 11.0649f, 55.8083f);
	func_505(48.3094f, -1466.97f, 34.0209f, 46.3598f);
	func_505(573.138f, -903.282f, 10.653f, 359.9055f);
	func_505(444.6478f, -584.4781f, 28.4022f, 263.8702f);
	func_505(590.5396f, -128.7431f, 72.7058f, 324.8725f);
	func_505(633.0765f, -1477.419f, 9.6378f, 13.7451f);
	func_505(567.5936f, -2316.353f, 5.8157f, 358.2805f);
	func_505(154.683f, -2406.677f, 5.9026f, 356.73f);
	func_505(-407.8167f, -2742.427f, 6.6763f, 192.47f);
	func_505(77.3055f, -2723.974f, 5.9071f, 269.1819f);
	func_505(664.1844f, -2986.192f, 5.9477f, 169.3143f);
	func_505(1015.701f, -2310.8f, 30.4119f, 351.451f);
	func_505(1105.497f, -1903.685f, 37.37f, 141.7318f);
	func_505(1397.402f, -2375.49f, 63.0531f, 356.6557f);
	func_505(1675.434f, -1547.791f, 112.5916f, 343.2593f);
	func_505(1454.21f, -1000.43f, 48.8159f, 85.0815f);
	func_505(2183.739f, -582.2708f, 96.7788f, 309.7693f);
	func_505(2543.149f, 142.0665f, 99.4934f, 165.3156f);
	func_505(2596.192f, 751.3882f, 91.457f, 196.0535f);
	func_505(2603.688f, 1235.993f, 44.3592f, 176.2542f);
	func_505(2122.656f, 2778.532f, 50.0208f, 309.4357f);
	func_505(2396.602f, 3264.547f, 48.7285f, 214.5686f);
	func_505(2322.511f, 3893.286f, 34.9455f, 312.4513f);
	func_505(581.2474f, 778.2208f, 201.9709f, 228.6589f);
	func_505(1118.769f, 790.2458f, 149.7879f, 327.737f);
	func_505(1312.517f, 1248.61f, 106.7748f, 356.9769f);
	func_505(1309.661f, 1537.113f, 96.2337f, 6.4865f);
	func_505(1062.127f, 2084.489f, 52.5033f, 26.2563f);
	func_505(1521.927f, 2010.445f, 99.3948f, 355.0577f);
	func_505(1370.713f, 2313.501f, 79.9254f, 33.3623f);
	func_505(907.667f, 2678.261f, 40.7875f, 261.5676f);
	func_505(699.3987f, 2441.128f, 61.3254f, 209.2828f);
	func_505(436.9572f, 2382.852f, 50.022f, 322.7864f);
	func_505(439.7385f, 2086.472f, 100.9622f, 336.0373f);
	func_505(-628.1458f, 2815.875f, 36.9998f, 300.3421f);
	func_505(-1374.838f, 2402.95f, 30.041f, 288.2213f);
	func_505(-1845.524f, -708.1555f, 9.1302f, 227.8206f);
	func_505(-2441.261f, -319.8737f, 3.6674f, 231.7609f);
	func_505(-2994.104f, 21.4889f, 7.8942f, 241.8965f);
	func_505(-2825.43f, 1423.209f, 100.6655f, 175.2131f);
	func_505(-3091.066f, 1757.376f, 35.0735f, 174.5508f);
	func_505(-3007.828f, 2099.017f, 40.1434f, 332.562f);
	func_505(-1966.473f, 2473.978f, 1.1161f, 204.7869f);
	func_505(-2281.606f, 3412.213f, 32.0105f, 341.204f);
	func_505(456.3445f, 6699.446f, 7.8774f, 230.5219f);
	func_505(1191.518f, 6560.621f, 2.9303f, 86.2098f);
	func_505(2595.129f, 5402.892f, 41.7871f, 10.6124f);
	func_505(644.2881f, -1840.464f, 9.0907f, 354.3967f);
	func_505(-679.2219f, -1828.494f, 27.7167f, 242.8403f);
	func_505(1054.276f, -1785.81f, 34.5576f, 331.6062f);
	func_505(-86.9453f, -1710.444f, 28.4542f, 178.6759f);
	func_505(81.025f, -1283.182f, 28.2867f, 109.4532f);
	func_505(1276.439f, -1275.396f, 41.116f, 130.9274f);
	func_505(716.5391f, -2255.983f, 28.2272f, 277.8256f);
	func_505(1719.191f, -1655.754f, 111.5146f, 219.6488f);
	func_505(121.7027f, -2965.721f, 6.0714f, 214.9908f);
	func_505(-500.846f, -2111.083f, 8.0609f, 188.9715f);
	func_505(-1196.347f, -2169.974f, 12.195f, 192.0654f);
}

void func_505(vector3 vParam0, float fParam1)
{
	Global_24D063[iLocal_1050 /*3*/] = { vParam0 };
	Global_24D3E5[iLocal_1050] = fParam1;
	iLocal_1050++;
}

