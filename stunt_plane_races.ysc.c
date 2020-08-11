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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	vector3 vLocal_30 = { 0f, 0f, 0f };
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	struct<328> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 4;
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
	var uLocal_76 = 4;
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
	var uLocal_91 = 4;
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
	var uLocal_106 = 4;
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
	var uLocal_121 = 4;
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
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	vector3 vLocal_184 = { 0f, 0f, 0f };
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	bool bLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196[5] = { 0, 0, 0, 0, 0 };
	float fLocal_197 = 0f;
	float fLocal_198 = 0f;
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
	float fLocal_218 = 0f;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	bool bLocal_222 = 0;
	var uLocal_223 = 35;
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
	var uLocal_539 = 50;
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
	var uLocal_643 = 40;
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
	var uLocal_1072 = 0;
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
	var uLocal_1199 = 1;
	var uLocal_1200 = 0;
	var uLocal_1201 = 1;
	var uLocal_1202 = 1;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 1;
	var uLocal_1207 = 1;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 3;
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
	var uLocal_1258 = 4;
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
	var uLocal_1294 = 0;
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
	var uLocal_1323 = 2;
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
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
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
	var uLocal_1391 = 4;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
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
	var uLocal_1407 = 0;
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
	var uLocal_1420 = 0;
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
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
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
	var uLocal_1462 = 12;
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
	var uLocal_1476 = 0;
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
	var uLocal_1489 = 0;
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
	var uLocal_1502 = 0;
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
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
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
	var uLocal_1558 = 0;
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
	var uLocal_1571 = 0;
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
	var uLocal_1584 = 0;
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
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
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
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 3;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	int iLocal_1647 = 0;
	var uLocal_1648 = 0;
	int iLocal_1649 = 0;
	int iLocal_1650 = 0;
	int iLocal_1651 = 0;
	int iLocal_1652 = 0;
	int iLocal_1653 = 0;
	int iLocal_1654 = 0;
	int iLocal_1655 = 0;
	int iLocal_1656 = 0;
	int iLocal_1657 = 0;
	int iLocal_1658 = 0;
	int iLocal_1659 = 0;
	int iLocal_1660 = 0;
	int iLocal_1661 = 0;
	int iLocal_1662 = 0;
	int iLocal_1663 = 0;
	int iLocal_1664 = 0;
	int iLocal_1665 = 0;
	int iLocal_1666 = 0;
	int iLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	int iLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	int iLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	int iLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	int iLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	int iLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	int iLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	int iLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	int iLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	int iLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	int iLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	int iLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	int iLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	int iLocal_1706 = 0;
	int iLocal_1707 = 0;
	int iLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	int iLocal_1713[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1714[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1715[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	int iLocal_1718 = 0;
	float fLocal_1719 = 0f;
	int iLocal_1720 = 0;
	int iLocal_1721 = 0;
	int iLocal_1722 = 0;
	int iLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 16;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
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
	var uLocal_1748 = 0;
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
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
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
	var uLocal_1804 = 0;
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
	var uLocal_1817 = 0;
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
	var uLocal_1830 = 0;
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
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
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
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	char* sLocal_1892 = NULL;
	float fLocal_1893 = 0f;
	float fLocal_1894 = 0f;
	bool bLocal_1895 = 0;
	bool bLocal_1896 = 0;
	vector3 vLocal_1897 = { 0f, 0f, 0f };
	vector3 vLocal_1898 = { 0f, 0f, 0f };
	vector3 vLocal_1899 = { 0f, 0f, 0f };
	float fLocal_1900 = 0f;
	float fLocal_1901 = 0f;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = -1;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 1000;
	var uLocal_1912 = 1000;
	var uLocal_1913 = 0;
	char[] cLocal_1914[8] = 0;
	char* sLocal_1915 = NULL;
	bool bLocal_1916 = 0;
	int iLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	int iLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	int iLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	bool bLocal_1926 = 0;
	int iLocal_1927 = 0;
	int iLocal_1928 = 0;
	struct<7> Local_1929 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	int iLocal_1935 = 0;
	var uLocal_1936 = 0;
	char* sLocal_1937 = NULL;
	char* sLocal_1938 = NULL;
	char* sLocal_1939 = NULL;
	vector3 vLocal_1940 = { 0f, 0f, 0f };
	vector3 vLocal_1941 = { 0f, 0f, 0f };
	int iLocal_1942 = 0;
	int iLocal_1943 = 0;
	int iLocal_1944 = 0;
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	struct<7> Local_1950 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 1132396544;
	var uLocal_1955 = 1132396544;
	var uLocal_1956 = 1132396544;
	var uLocal_1957 = 0;
	var uLocal_1958 = -1082130432;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 8;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = -1;
	var uLocal_2019 = 1092616192;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	int iLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	int iLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	int iLocal_2028 = 0;
	int iLocal_2029 = 0;
	bool bLocal_2030 = 0;
	bool bLocal_2031 = 0;
	int iLocal_2032 = 0;
	bool bLocal_2033 = 0;
	int iLocal_2034 = 0;
	struct<2863> Local_2035 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2036 = 1;
	var uLocal_2037 = 0;
	int iLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	vector3 vLocal_2041 = { 0f, 0f, 0f };
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
	iLocal_28 = 0x00000003;
	fLocal_29 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 0x00000001;
	iLocal_38 = 0x00000041;
	iLocal_39 = 0x00000031;
	iLocal_40 = 0x00000040;
	vLocal_43 = { 1691.228f, 3251.785f, 44.2574f };
	vLocal_44 = { 2.5652f, 0f, -4.1481f };
	vLocal_184 = { 500f, 500f, 500f };
	iLocal_185 = 0xFFFFFFFF;
	iLocal_194 = 0x00000001;
	fLocal_197 = 0.008f;
	fLocal_198 = 0.013f;
	fLocal_218 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1719 = -1f;
	iLocal_1720 = 0x00000001;
	fLocal_1893 = 0.2f;
	fLocal_1894 = 0.2f;
	fLocal_1901 = 0f;
	cLocal_1914 = "SPR_UI_FAILD";
	sLocal_1915 = "SPR_UI_FRETRY";
	sLocal_1937 = "CHECKPOINT_NORMAL";
	sLocal_1938 = "CHECKPOINT_MISSED";
	sLocal_1939 = "CHECKPOINT_PERFECT";
	vLocal_1940 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_1941 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2030 = 0x00000001;
	bLocal_2031 = 0x00000001;
	bLocal_2033 = 0x00000001;
	vLocal_2041 = { -1497.708f, -3449.576f, 7.3477f };
	if (unk_0x2EBF608FFE6CA406(0x00000072))
	{
		func_599();
	}
	unk_0x7798376279BB5369(0x00000001);
	Local_1950.f_1 = 0x00000000;
	Local_1950.f_5 = 0x00000000;
	Local_1950.f_6 = 0x00000000;
	while (0x00000001)
	{
		func_598();
		switch (Local_1950.f_1)
		{
			case 0x00000000:
				if (!func_587())
				{
					Local_1950.f_1 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (!func_1())
				{
					Local_1950.f_1 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				func_599();
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

int func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
	}
	if (unk_0xC844350D5D58C99A(Local_45.f_1))
	{
		if (!unk_0x437347B10A200C4B(Local_45.f_1, 0x00000000))
		{
			if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_45.f_1, 0x00000000))
			{
				if (unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
				{
					Local_45.f_1 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
				}
			}
		}
	}
	else if (unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
	{
		Local_45.f_1 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
	}
	else
	{
		Local_45.f_1 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f, joaat("stunt"), 0x00000000);
	}
	if (Local_2035.f_B2D != 0x00000000)
	{
		Local_2035.f_B2E = (Local_2035.f_B2E - 0x00000019);
		if (Local_2035.f_B2E <= 0x00000000)
		{
			unk_0xE223EB8FE6F8CC15(Local_2035.f_B2D);
			Local_2035.f_B2D = 0x00000000;
			bLocal_1916 = 0x00000000;
		}
		else
		{
			if (bLocal_1916)
			{
				iVar4 = 0x00000006;
			}
			else
			{
				iVar4 = 0x00000001;
			}
			func_584(func_585(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
			unk_0xF0B0A50DF3EA0E70(Local_2035.f_B2D, iVar0, iVar1, iVar2, func_583(SYSTEM::CEIL((1.5f * IntToFloat(Local_2035.f_B2E))), 0x000000FF));
			unk_0xF08C5AE8AC5C7427(Local_2035.f_B2D, iVar0, iVar1, iVar2, Local_2035.f_B2E);
		}
	}
	func_582();
	unk_0x3F44493428307317("AMMUNATION");
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
	if (Local_1950.f_6 == 0x00000004)
	{
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f);
		if (unk_0xDF1306B443CD3D15(Local_45.f_1, 0x00000000))
		{
			if (unk_0x4E861BC5B1EDA7BD(Local_45.f_1))
			{
				unk_0x98B861C98966897A(Local_45.f_1);
			}
		}
	}
	switch (Local_1950.f_6)
	{
		case 0x00000000:
			unk_0x5CEB4DB888A62073(0x00000000);
			Local_1950 = 0xFFFFFFFF;
			Local_45.f_A = 0x00000000;
			unk_0xE342F209E49C5314(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, 0x00000000, 0x00000001);
			if (unk_0xC844350D5D58C99A(Local_45.f_1))
			{
				unk_0x71EDC33E5A423750(Local_45.f_1, 0x00000001);
				Local_2035.f_B2B = 0x00000000;
				Local_1950.f_6 = 0x00000003;
			}
			else
			{
				Local_1950.f_6 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			Local_1950.f_6 = 0x00000012;
			break;
		
		case 0x00000002:
			if (unk_0xC844350D5D58C99A(Local_45.f_1))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000200);
				unk_0x71EDC33E5A423750(Local_45.f_1, 0x00000001);
				Local_2035.f_B2B = 0x00000000;
				Local_1950.f_6 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (Local_2035)
			{
			}
			else if ((unk_0x9F4FE516EAACCFC5(iLocal_1706) && unk_0xFBB4F23D534EB790(iLocal_1706)) && unk_0x0F1CCD77290EE12F())
			{
				if (unk_0x9F4FE516EAACCFC5(Local_2035.f_B2A))
				{
					unk_0x9A8DDC7C522F5BF5(Local_2035.f_B2A, 0x00000000);
				}
				unk_0x9A1335ECD7BD117F("MinigameTransitionOut");
				unk_0x82A772610883F395("MinigameTransitionIn", 0x00000000, 0x00000001);
				Local_2035.f_B2A = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_43, vLocal_44, 34.9705f, 0x00000001, 0x00000002);
				unk_0x0185A047F396C3B9(0x00000000);
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				unk_0x82A772610883F395("MinigameTransitionOut", 0x00000000, 0x00000000);
				unk_0x608A456FDD8A83D8(iLocal_1706, vLocal_43.x, vLocal_43.y, (vLocal_43.z + 1000f));
				unk_0x5F3CBA6EB9341C90(iLocal_1706, 90f, vLocal_44.y, vLocal_44.z, 0x00000002);
				unk_0xF1E4C781086FABC1(Local_2035.f_B2A, iLocal_1706, 0x000001F4, 0x00000001, 0x00000001);
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			}
			else
			{
				func_581(0x000001F4);
				if (unk_0x9F4FE516EAACCFC5(Local_2035.f_B2A))
				{
					unk_0x9A8DDC7C522F5BF5(Local_2035.f_B2A, 0x00000000);
				}
				Local_2035.f_B2A = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_43, vLocal_44, 34.9705f, 0x00000001, 0x00000002);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			}
			func_580(&iLocal_1930);
			func_579(0x00000001);
			unk_0x066C43E677C08D5C();
			Local_1950.f_6 = 0x00000004;
			break;
		
		case 0x00000004:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(Local_45.f_1, 0x00000000))
			{
				unk_0x56FDC9ADE35F7DB0(Local_45.f_1, 0x00000001, 0x00000000, 0x00000000);
			}
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C7, 0x00000001);
			}
			unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
			unk_0xBFE31971E49FA500(0x00000000);
			Local_2035.f_2 = Local_2035;
			if (Local_2035)
			{
				if (unk_0xC844350D5D58C99A(Local_2035.f_166[0x00000000 /*189*/].f_9))
				{
					unk_0x71EDC33E5A423750(Local_2035.f_166[0x00000000 /*189*/].f_9, 0x00000004);
				}
				iLocal_1650 = 0x00000000;
				Local_2035 = 0x00000000;
				func_548();
				Local_1950.f_6 = 0x00000008;
			}
			else if (Local_2035.f_B2B)
			{
				if (unk_0x1963B11DE70153E0())
				{
					if ((Local_2035.f_B2B && unk_0xB9132A06AE472728(0x00000002, 0x000000CA)) && SYSTEM::TIMERA() > 0x000001F4)
					{
						unk_0x22293E611B2408F1(0xFFFFFFFF, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0x00000000, 0x00000000, 0x00000001);
						Local_2035.f_B2B = 0x00000000;
						Local_2035.f_B2C = 0x00000001;
						func_547(&(Local_45.f_77));
						SYSTEM::SETTIMERA(0x00000000);
					}
					if (!Local_2035.f_B2C && func_546(&uLocal_1210))
					{
						Local_2035.f_B2C = 0x00000001;
						func_544(Local_2035.f_B2C);
					}
					func_481(&(Local_45.f_76), Global_1B04C, &(Local_45.f_18[Global_1B04C /*8*/]));
				}
				else if (func_471(&iLocal_1647, 0x00000000))
				{
					Local_2035.f_B2B = 0x00000000;
					iLocal_1647 = 0x00000000;
					func_547(&(Local_45.f_77));
					SYSTEM::SETTIMERA(0x00000000);
				}
			}
			else
			{
				if ((func_432(&Local_2035, 0x00000000) && !iLocal_192) && !bLocal_191)
				{
					func_547(&(Local_45.f_77));
				}
				if (iLocal_195 && unk_0x1963B11DE70153E0())
				{
					func_547(&(Local_45.f_77));
					iLocal_195 = 0x00000000;
				}
				if ((((!Local_2035.f_B2B && !iLocal_192) && !bLocal_191) && (iLocal_194 || !unk_0x1963B11DE70153E0())) && (unk_0xB9132A06AE472728(0x00000002, 0x000000D3) || unk_0x9A01369A10646AFE(0x00000002, 0x000000D3)))
				{
					Local_2035.f_B2B = 0x00000001;
					unk_0x22293E611B2408F1(0xFFFFFFFF, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0x00000000, 0x00000000, 0x00000001);
					func_431(&uLocal_1210);
					Local_2035.f_B2C = func_546(&uLocal_1210);
					func_544(Local_2035.f_B2C);
					SYSTEM::SETTIMERA(0x00000000);
				}
				if (func_372(&uLocal_2036, &(Local_2035.f_1)))
				{
					iLocal_1650 = 0x00000000;
					if (Local_45.f_A != 0xFFFFFFFF)
					{
						func_364();
						func_548();
						if (unk_0x5A91F08DF773C39D(Local_45.f_1, vLocal_1940, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (!unk_0x437347B10A200C4B(Local_45.f_1, 0x00000000))
							{
								func_363(&iLocal_2038);
								Local_1950.f_6 = 0x00000008;
							}
						}
						else if (!unk_0x437347B10A200C4B(Local_45.f_1, 0x00000000))
						{
							Local_1950.f_6 = 0x00000008;
						}
					}
					else
					{
						Local_1950.f_6 = 0x00000007;
					}
				}
			}
			break;
		
		case 0x00000007:
			unk_0x3FC8DBCC154CA56B();
			if (unk_0xDF1306B443CD3D15(Local_45.f_1, 0x00000000))
			{
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				Local_1950.f_6 = 0x00000012;
			}
			else
			{
				if (unk_0xC844350D5D58C99A(Local_2035.f_166[0x00000000 /*189*/].f_9))
				{
					unk_0x1E9649458B15960F(Local_2035.f_166[0x00000000 /*189*/].f_9, 0x00000000);
				}
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_1940, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xC023D1C4BF532815(unk_0x16F2683693E537C9(), vLocal_1941, 0x00000002, 0x00000001);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0xB9FD7450C0DAB575(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x40A00000);
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				if (unk_0xC844350D5D58C99A(Local_2035.f_166[0x00000000 /*189*/].f_9))
				{
					if (!unk_0xEB880D98B5988D0C())
					{
						unk_0xD67D6A3F0D653D93(vLocal_1940, unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()), 500f, 0x00000000);
					}
					if (unk_0x68367101660E33F0())
					{
						unk_0x486B4ADE317F0689();
						Local_1950.f_6 = 0x00000012;
					}
				}
				else
				{
					Local_1950.f_6 = 0x00000012;
				}
			}
			break;
		
		case 0x00000008:
			unk_0x9501364A300048C6();
			if (Local_45.f_A == 0x00000000)
			{
				unk_0xC55F2A0377488064(Local_45.f_1);
				if (func_362(iLocal_1927, 0x00000010))
				{
					func_360(&iLocal_1927, 0x00000010);
				}
				unk_0x56FDC9ADE35F7DB0(Local_45.f_1, 0x00000001, 0x00000001, 0x00000000);
				unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_45.f_1, 0xFFFFFFFF);
				unk_0x51B954DAB1BCAF73(Local_45.f_1);
				func_359();
				iLocal_1706 = unk_0xAE06CCC36C49929C(0x019286A9, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 0x00000001, 0x00000002);
				unk_0xE3BB8E05FCEB3FBE(Local_2035.f_B2A, 0x00000000);
				Local_1950.f_6 = 0x00000009;
			}
			else if (func_358(0x000003E8))
			{
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0x51B954DAB1BCAF73(Local_45.f_1);
				unk_0xC55F2A0377488064(Local_45.f_1);
				if (unk_0x757EF87A33649210())
				{
					func_359();
					Local_1950.f_6 = 0x0000000A;
				}
			}
			break;
		
		case 0x00000009:
			if (!((unk_0xFBB4F23D534EB790(iLocal_1706) && unk_0xFA06B985B30FB0FC(iLocal_1706)) || (unk_0xFBB4F23D534EB790(Local_2035.f_B2A) && unk_0xFA06B985B30FB0FC(Local_2035.f_B2A))))
			{
				unk_0x04B065D07D2FB5B9(0x00000001, 0x00000000, 0x00000003, 0x00000000);
				func_359();
				Local_1950.f_6 = 0x0000000A;
			}
			break;
		
		case 0x0000000A:
			Local_2035.f_19 = 0x00000000;
			Local_1950.f_6 = 0x0000000B;
			break;
		
		case 0x0000000B:
			if (!func_344(&Local_2035))
			{
				func_579(0x00000001);
				if (Local_2035.f_2)
				{
					unk_0xD67D6A3F0D653D93(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()), 500f, 0x00000000);
				}
				if (Local_45.f_A == 0x00000000)
				{
					func_343("SPR_TAXI_GATE", 0x00002710, 0x00000001);
					if (!func_362(iLocal_1927, 0x00000010))
					{
						func_335(&Local_2035, 0x00000000, 0x00000001);
						func_334(&iLocal_1927, 0x00000010);
					}
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0x1E9649458B15960F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					}
					unk_0x8BCB70EB440DED83(0x00000001);
					unk_0xBFE31971E49FA500(0x00000001);
					Local_1950.f_6 = 0x0000000D;
				}
				else
				{
					Local_1950.f_6 = 0x0000000D;
				}
				Local_2035.f_2 = 0x00000000;
			}
			break;
		
		case 0x0000000D:
			if (!unk_0xEB880D98B5988D0C() || unk_0x68367101660E33F0())
			{
				if (unk_0xEB880D98B5988D0C())
				{
					unk_0x486B4ADE317F0689();
				}
				unk_0x0185A047F396C3B9(0x00000000);
				unk_0xF3039DE1FDB4F6FD(0x00000001);
				unk_0x1E9649458B15960F(Local_2035.f_166[0x00000000 /*189*/].f_9, 0x00000000);
				func_359();
				if (func_362(iLocal_1927, 0x00000010))
				{
					func_360(&iLocal_1927, 0x00000010);
				}
				if (Local_45.f_A == 0x00000000)
				{
					if (func_581(0x000001F4))
					{
						Local_2035.f_1A = 0x00000000;
						Local_1950.f_6 = 0x0000000E;
					}
				}
				else
				{
					func_333(&Local_2035);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					if (func_581(0x000001F4))
					{
						Local_2035.f_1A = 0x00000000;
						Local_1950.f_6 = 0x0000000E;
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (Local_1950 == 0x00000001)
			{
				return 0x00000001;
			}
			if (func_24(&Local_2035))
			{
				return 0x00000001;
			}
			iLocal_1650 = 0x00000003;
			func_23();
			func_13();
			if (!Local_2035)
			{
				func_10(&(Local_2035.f_6));
				func_9(&(Local_2035.f_166[0x00000000 /*189*/]), Local_45.f_3, Local_45.f_6, 0f);
				if (unk_0xC844350D5D58C99A(Local_2035.f_166[0x00000000 /*189*/].f_9))
				{
					unk_0xB9FD7450C0DAB575(Local_2035.f_166[0x00000000 /*189*/].f_9, 0x40A00000);
				}
				if (unk_0xD67D6A3F0D653D93(vLocal_43, func_8(vLocal_44), 4500f, 0x00000000))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					while (!unk_0x68367101660E33F0() && func_5(&(Local_2035.f_6)) < 20f)
					{
						SYSTEM::WAIT(0x00000000);
					}
					unk_0x486B4ADE317F0689();
					unk_0xF49D1BC9EF1C3EF4(vLocal_43, func_8(vLocal_44));
					func_4(&(Local_2035.f_6));
					Local_1950.f_6 = 0x0000000F;
				}
				else if (func_2(&(Local_2035.f_6), 20f))
				{
					func_4(&(Local_2035.f_6));
					Local_1950.f_6 = 0x0000000F;
				}
			}
			else
			{
				Local_1950.f_6 = 0x00000003;
			}
			break;
		
		case 0x0000000F:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
			}
			Local_2035.f_B2B = 0x00000000;
			Local_1950.f_6 = 0x00000003;
			break;
		
		case 0x00000012:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
			}
			func_432(&Local_2035, 0x00000001);
			if (unk_0x757EF87A33649210())
			{
				func_581(0x000003E8);
			}
			else
			{
				return 0x00000000;
			}
			break;
	}
	return 0x00000001;
}

int func_2(int iParam0, float fParam1)
{
	if (func_3(iParam0))
	{
		if (func_5(iParam0) > fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_3(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001);
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

float func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_6(bool bParam0)
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

bool func_7(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000002);
}

Vector3 func_8(vector3 vParam0)
{
	return (-SYSTEM::SIN(vParam0.z) * SYSTEM::COS(vParam0.x)), (SYSTEM::COS(vParam0.z) * SYSTEM::COS(vParam0.x)), SYSTEM::SIN(vParam0.x);
}

void func_9(var uParam0, vector3 vParam1, float fParam2, float fParam3)
{
	unk_0xA47B46945FF6DE74(uParam0->f_9, vParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	unk_0xD8F6A53F4799FAFE(uParam0->f_9, fParam2);
	unk_0x1AEF7184B203A58D(uParam0->f_9, fParam3);
}

void func_10(int iParam0)
{
	if (!func_3(iParam0))
	{
		func_363(iParam0);
	}
	else
	{
		func_11(iParam0);
	}
}

void func_11(int iParam0)
{
	func_12(iParam0, 0f);
}

void func_12(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_1B416.f_4A5E.f_C[0x00000004 /*8*/].f_4 == 0x00000001)
	{
		if (Global_1B416.f_4A5E.f_6[0x00000004] > 0f)
		{
			if (Global_1B416.f_4A5E.f_6[0x00000004] <= func_22(0x00000004))
			{
				func_14(0x0000007D, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)
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
		func_20((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
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
		func_15();
	}
}

void func_15()
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
		func_19(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_18() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()
{
	if (func_17(0x00000000))
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

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_18()
{
	return Global_7830;
}

int func_19(int iParam0, int iParam1)
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

int func_20(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_21();
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

int func_21()
{
	return Global_1407E9;
}

float func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 130f;
			break;
		
		case 0x00000001:
			return 120f;
			break;
		
		case 0x00000002:
			return 120f;
			break;
		
		case 0x00000003:
			return 170f;
			break;
		
		case 0x00000004:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()
{
	iLocal_1942 = 0x00000000;
	iLocal_1943 = 0x00000000;
	iLocal_1944 = 0x00000000;
	iLocal_1945 = 0x00000000;
	iLocal_1946 = 0x00000000;
	iLocal_1947 = 0x00000000;
	iLocal_1948 = 0x00000000;
	iLocal_1949 = 0x00000000;
}

int func_24(var uParam0)
{
	switch (uParam0->f_1A)
	{
		case 0x00000000:
			func_360(&iLocal_1927, 0x00000004);
			unk_0x3584F71E5CA29322(0x00000002);
			func_332(uParam0);
			uParam0->f_11 = func_331();
			if (Local_45.f_A == 0x00000000)
			{
				if (!func_362(iLocal_1927, 0x00000010))
				{
					func_335(uParam0, 0x00000000, 0x00000001);
					func_335(uParam0, 0x00000001, 0x00000000);
					func_334(&iLocal_1927, 0x00000010);
				}
			}
			else
			{
				func_333(uParam0);
				if (!func_362(iLocal_1927, 0x00000010))
				{
					func_335(uParam0, 0x00000000, 0x00000001);
					func_335(uParam0, 0x00000001, 0x00000000);
					func_334(&iLocal_1927, 0x00000010);
				}
			}
			func_4(&(uParam0->f_E));
			iLocal_1935 = 0x00000000;
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			uParam0->f_1A = 0x00000001;
			break;
		
		case 0x00000001:
			unk_0x3584F71E5CA29322(0x00000002);
			if (Local_45.f_A == 0x00000000)
			{
				if (func_362(iLocal_1927, 0x00000010))
				{
					func_360(&iLocal_1927, 0x00000010);
				}
				func_329(uParam0);
				uParam0->f_1A = 0x00000007;
			}
			else
			{
				func_333(uParam0);
				if (!func_304(&(uParam0->f_E)))
				{
					if (!unk_0x7686B2698B4F28AD())
					{
						unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000001, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					}
					if (func_362(iLocal_1927, 0x00000010))
					{
						func_360(&iLocal_1927, 0x00000010);
					}
					unk_0x8BCB70EB440DED83(0x00000001);
					func_329(uParam0);
					if (Local_45.f_A == 0x00000000 && (Global_1B416.f_4A5E.f_6[0x00000000] > Local_45.f_70[0x00000000] || Global_1B416.f_4A5E.f_6[0x00000000] == 0f))
					{
						func_303("SPR_HELP_GATE", 0x00002710);
					}
					uParam0->f_1A = 0x00000007;
				}
			}
			break;
		
		case 0x00000002:
			if (!func_362(iLocal_1927, 0x00000001))
			{
				SYSTEM::SETTIMERA(0x00000000);
				func_264(uParam0);
				func_263(&(Local_45.f_77), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
				func_262(&(Local_45.f_77), "SPR_CONT2", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
				func_261(&(Local_45.f_77), 0x00000001);
				func_334(&iLocal_1927, 0x00000001);
			}
			if (unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (func_260("SPR_RETR_FAIL", 0x00000000, 0x00000000))
			{
				unk_0x790015DC92C918E2();
			}
			if (unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (func_260("SPR_RETR_FAIL", 0x00000000, 0x00000000))
			{
				unk_0x790015DC92C918E2();
			}
			SYSTEM::SETTIMERA(0x00000000);
			func_258();
			func_257(0x00000000);
			unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x85A7389D2B63E61A(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
			func_256(0x00000001);
			uParam0->f_1A = 0x00000004;
			break;
		
		case 0x00000004:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
			func_254();
			if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
			{
				if (!unk_0x0A059E0DB9253280(uParam0->f_166[0x00000000 /*189*/].f_9) && unk_0x9F4FE516EAACCFC5(iLocal_1707))
				{
					unk_0x17D61C69BA58F815(iLocal_1707, 0x00000002);
					unk_0x4A4806F9D471E491(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000, 0x00000000);
					unk_0x1E9649458B15960F(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000001);
					func_253();
				}
			}
			if (!func_239(uParam0, bLocal_2030, bLocal_2031))
			{
				func_253();
				func_238(0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				if (func_362(iLocal_1927, 0x00000001))
				{
					func_360(&iLocal_1927, 0x00000001);
				}
				func_237(0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				}
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0x5CEB4DB888A62073(0x00000000);
				iLocal_2034 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 0x00000001);
				func_4(&iLocal_1917);
				uParam0->f_1A = 0x00000005;
			}
			break;
		
		case 0x00000005:
			if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
			{
				unk_0xA47B46945FF6DE74(uParam0->f_166[0x00000000 /*189*/].f_9, vLocal_1940, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xC023D1C4BF532815(uParam0->f_166[0x00000000 /*189*/].f_9, vLocal_1941, 0x00000002, 0x00000001);
				unk_0x4A4806F9D471E491(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000001, 0x00000000);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
				unk_0xB9FD7450C0DAB575(uParam0->f_166[0x00000000 /*189*/].f_9, 0x40A00000);
				unk_0xE121AE1BBF90E186(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000);
			}
			iLocal_2029 = 0x00000000;
			uParam0->f_1A = 0x00000006;
			uParam0->f_166[0x00000000 /*189*/].f_17 = 0x00000007;
			break;
		
		case 0x00000006:
			uParam0->f_1A = 0x00000008;
			break;
		
		case 0x00000007:
			unk_0xEF45C43067063F18(iLocal_1930, 0.5f, 0.5f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000064, 0x00000000);
			if (!func_362(iLocal_1927, 0x00000010))
			{
				func_335(uParam0, 0x00000000, 0x00000001);
				func_335(uParam0, 0x00000001, 0x00000000);
				func_334(&iLocal_1927, 0x00000010);
				func_257(0x00000001);
				func_236(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_202(uParam0);
				func_200(uParam0);
			}
			else
			{
				func_197(&uLocal_1902, 0x00000000);
				func_253();
				unk_0xF3039DE1FDB4F6FD(0x00000000);
			}
			if (!func_41(uParam0, Local_45))
			{
				unk_0xC92DB9682A650680("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_E));
				uParam0->f_1A = 0x00000002;
				func_4(&(uParam0->f_16));
			}
			break;
		
		case 0x00000008:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
			func_27(&(uParam0->f_11));
			func_253();
			func_25();
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (func_362(uLocal_1716, iVar0))
		{
			func_360(&uLocal_1716, iVar0);
		}
		if (func_362(uLocal_1717, iVar0))
		{
			func_360(&uLocal_1717, iVar0);
		}
		if (unk_0xC844350D5D58C99A(iLocal_1714[iVar0]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_1714[iVar0]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_1715[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_1715[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_1713);
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_1713)
	{
		iLocal_1713[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			unk_0x71199B01895C6202((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(int iParam0)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
}

void func_28(var uParam0)
{
	int iVar0;
	
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	unk_0xE121AE1BBF90E186(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	func_39(uParam0);
	if (Local_45 == 0x00000000)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		func_30(&(uParam0->f_166[iVar0 /*189*/]));
		if (iVar0 != 0x00000000)
		{
			func_29(&(uParam0->f_166[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000))
	{
		if (Local_45 != 0x00000000)
		{
			func_31();
		}
	}
}

void func_31()
{
}

void func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_166[iVar0 /*189*/].f_8, 0x00000000))
		{
			if (uParam0->f_166[iVar0 /*189*/].f_8 == unk_0x16F2683693E537C9())
			{
				iVar1 = func_37(Local_45.f_A);
				if (iVar1 <= 0x00000000 || iVar1 > uParam0->f_166[iVar0 /*189*/].f_C)
				{
					func_36(Local_45.f_A, uParam0->f_166[iVar0 /*189*/].f_C);
				}
				fVar2 = func_35(Local_45.f_A);
				func_34(Local_45.f_A, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_166[0x00000000 /*189*/].f_D)));
				if (fVar2 == 0f || fVar2 > uParam0->f_166[0x00000000 /*189*/].f_D)
				{
					func_33(Local_45.f_A, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_166[0x00000000 /*189*/].f_D)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)
{
	Global_1B416.f_4A5E.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_45.f_12[iParam0] = fParam1;
}

var func_35(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_1B416.f_4A5E.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_1B416.f_4A5E[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = Global_1B416.f_4A5E[iParam0];
	return iVar0;
}

void func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		iVar2 = 0x00000001;
		iVar1 = 0x00000000;
		while (iVar1 < uParam0->f_D)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_166[iVar0 /*189*/].f_D > uParam0->f_166[iVar1 /*189*/].f_D)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_166[iVar0 /*189*/].f_C = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		if (uParam0->f_166[iVar0 /*189*/].f_B != uParam0->f_C)
		{
			uParam0->f_166[iVar0 /*189*/].f_D = (uParam0->f_166[0x00000000 /*189*/].f_D + (IntToFloat((uParam0->f_C - uParam0->f_166[iVar0 /*189*/].f_B)) * unk_0x79833B02DBD2A244(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_40(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!func_7(iParam0))
		{
			iParam0->f_2 = (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
		}
	}
}

int func_41(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var3;
	int iVar4;
	bool bVar5;
	int iVar6;
	char cVar7[16];
	
	if (Local_45.f_A == 0x00000000)
	{
		if (uParam0->f_166[0x00000000 /*189*/].f_B == 0x00000000)
		{
			func_11(&(uParam0->f_3));
			if (func_362(iLocal_1928, 0x00020000))
			{
				unk_0xB0E9868F5DDD25D3(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000004);
				func_360(&iLocal_1928, 0x00020000);
			}
		}
		else if (uParam0->f_166[0x00000000 /*189*/].f_B == 0x00000001 && !func_362(iLocal_1928, 0x00020000))
		{
			func_303("SPR_INFO_BON", 0x00002710);
			func_334(&iLocal_1928, 0x00020000);
			if (func_362(iLocal_1928, 0x00040000))
			{
				func_360(&iLocal_1928, 0x00040000);
			}
		}
		else if (uParam0->f_166[0x00000000 /*189*/].f_B == 0x00000004 && !func_362(iLocal_1928, 0x00040000))
		{
			func_303("SPR_INFO_RESET", 0x00002710);
			func_334(&iLocal_1928, 0x00040000);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_179(uParam0->f_166[0x00000000 /*189*/].f_B, uParam0->f_1);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	iVar1 = 0x00000000;
	while (iVar1 < uParam0->f_D)
	{
		if (uParam0->f_166[iVar1 /*189*/].f_B < uParam0->f_C)
		{
			bVar5 = 0x00000000;
			if (uParam0->f_166[iVar1 /*189*/].f_8 == unk_0x16F2683693E537C9())
			{
				bVar5 = 0x00000001;
			}
			iVar4 = uParam0->f_166[iVar1 /*189*/].f_B;
			if (uParam0->f_166[iVar1 /*189*/].f_B >= uParam0->f_C)
			{
				Var2 = { uParam0->f_1B[(uParam0->f_C - 0x00000001) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_1B[iVar4 /*10*/] };
			}
			if (iVar4 < (uParam0->f_C - 0x00000001))
			{
				Var3 = { uParam0->f_1B[iVar4 + 1 /*10*/] };
			}
			else
			{
				Var3 = { Var2 };
			}
			if (iVar4 != uParam0->f_C)
			{
				uParam0->f_166[iVar1 /*189*/].f_D = (fVar0 - uParam0->f_166[iVar1 /*189*/].f_F);
				if (uParam0->f_166[iVar1 /*189*/].f_D < 0f)
				{
					uParam0->f_166[iVar1 /*189*/].f_D = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_166[iVar1 /*189*/]), bVar5))
			{
				if ((bVar5 && uParam0->f_1) && (Local_45.f_A != 0x00000000 || uParam0->f_166[0x00000000 /*189*/].f_B > 0x00000000))
				{
					if (!func_3(&iLocal_2022))
					{
						func_363(&iLocal_2022);
					}
					if (func_5(&iLocal_2025) >= 6.5f)
					{
						if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000DE))
						{
							func_11(&iLocal_2022);
						}
						else if (func_5(&iLocal_2022) >= 1.5f)
						{
							uParam0->f_1 = 0x00000000;
							func_360(&iLocal_1928, 0x00008000);
							uParam0->f_166[0x00000000 /*189*/].f_17 = 0x00000006;
						}
					}
					else if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000DE))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_1928, 0x00010000, 0x00000000);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_1928, 0x00008000, 0x00000000);
						}
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_166[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_45 == 0x00000000 && func_3(&iLocal_1923))
					{
						return 0x00000001;
					}
					if (bVar5)
					{
						if (uParam0->f_166[iVar1 /*189*/].f_E != 0f)
						{
							func_363(&(uParam0->f_E));
						}
						if (func_362(iLocal_1927, 0x00000008))
						{
							func_335(uParam0, iVar4, 0x00000001);
							if (iVar4 < (uParam0->f_C - 0x00000001))
							{
								func_335(uParam0, iVar4 + 1, 0x00000000);
							}
							func_360(&iLocal_1927, 0x00000008);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_B = func_93(uParam0, &Var2, &Var3, uParam0->f_166[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var3);
					}
					if (uParam0->f_B != 0xFFFFFFFF)
					{
						if (iParam1 == 0x00000000)
						{
							func_85(&(uParam0->f_166[iVar1 /*189*/]), bVar5, uParam0->f_B);
						}
						bLocal_1916 = func_84(uParam0->f_B);
						uParam0->f_166[iVar1 /*189*/].f_B++;
						iVar4 = uParam0->f_166[iVar1 /*189*/].f_B;
						if (iVar4 >= (uParam0->f_C - 0x00000001))
						{
							Var2 = { uParam0->f_1B[(uParam0->f_C - 0x00000001) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_1B[iVar4 /*10*/] };
						}
						if (bVar5)
						{
							func_78(uParam0, (iVar4 - 0x00000001));
							if (iVar4 == uParam0->f_C)
							{
								iVar6 = 0x00000000;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_166[0x00000000 /*189*/].f_D > 0f)
									{
										if (uParam0->f_166[0x00000000 /*189*/].f_D <= Local_45.f_6A[Local_45.f_A])
										{
											iVar6 = 0x00000001;
										}
										else if (uParam0->f_166[0x00000000 /*189*/].f_D <= (((Local_45.f_70[Local_45.f_A] - Local_45.f_6A[Local_45.f_A]) / 2f) + Local_45.f_6A[Local_45.f_A]))
										{
											iVar6 = 0x00000002;
										}
										else if (uParam0->f_166[0x00000000 /*189*/].f_D <= Local_45.f_70[Local_45.f_A])
										{
											iVar6 = 0x00000003;
										}
									}
								}
								if (iVar6 == 0x00000000)
								{
								}
								if (iVar6 > 0x00000000)
								{
									return 0x00000000;
								}
								else
								{
									uParam0->f_1 = 0x00000000;
									uParam0->f_166[iVar1 /*189*/].f_B = (uParam0->f_166[iVar1 /*189*/].f_B - 0x00000001);
									unk_0x790015DC92C918E2();
									sLocal_1915 = "SPR_TIME_FAIL";
									uParam0->f_166[0x00000000 /*189*/].f_17 = 0x00000000;
								}
							}
							else
							{
								func_335(uParam0, iVar4, 0x00000001);
								if (iVar4 < (uParam0->f_C - 0x00000001))
								{
									func_335(uParam0, iVar4 + 1, 0x00000000);
								}
							}
							if (uParam0->f_166[iVar1 /*189*/].f_E == 0f)
							{
								if (func_3(&(uParam0->f_E)))
								{
									func_4(&(uParam0->f_E));
								}
							}
							if (uParam0->f_C > 0x00000000)
							{
								if (uParam0->f_A > 0f)
								{
									if (iVar4 == SYSTEM::ROUND((IntToFloat(uParam0->f_C) / 2f)))
									{
										uParam0->f_166[iVar1 /*189*/].f_E = 0f;
										func_11(&(uParam0->f_E));
									}
								}
							}
						}
						else if (uParam0->f_166[iVar1 /*189*/].f_B >= uParam0->f_C)
						{
							if (Local_45 != 0x00000002)
							{
								if (!unk_0x437347B10A200C4B(uParam0->f_166[iVar1 /*189*/].f_8, 0x00000000))
								{
									func_29(&(uParam0->f_166[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_45 != 0x00000001)
							{
								if (iVar1 != 0x00000000)
								{
									func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar7, "Offroad_", 16);
								StringIntConCat(&cVar7, Local_45.f_A + 1, 16);
								if (iVar1 == 0x00000001)
								{
									StringConCat(&cVar7, "a", 16);
								}
								if (iVar1 > 0x00000000)
								{
									if (bLocal_2033)
									{
										if (!unk_0x437347B10A200C4B(uParam0->f_166[iVar1 /*189*/].f_8, 0x00000000) && !unk_0x437347B10A200C4B(uParam0->f_166[iVar1 /*189*/].f_9, 0x00000000))
										{
											if (unk_0xD1960163A3042274(uParam0->f_166[iVar1 /*189*/].f_8, 0xF1F17AE7) == 0x00000001)
											{
											}
											else
											{
												unk_0x1B901F542DF070CF(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, &cVar7, 0x00040000, 0x00000000, 0x00000008, 0xFFFFFFFF, unk_0xD890711CFD5AF100(uParam0->f_166[iVar1 /*189*/].f_9), 0x00000000, 2f);
											}
										}
									}
									else if (iVar1 != 0x00000000)
									{
										func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_45 != 0x00000002)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0x00000000)
					{
						if (bVar5)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 0x00000001)
	{
		func_67(uParam0);
		func_65(uParam0, &iLocal_2032);
		func_64(uParam0, &iLocal_2032);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_166[0x00000000 /*189*/].f_17 != 0x00000000)
		{
			if (Local_45.f_A == 0x00000000)
			{
				if (uParam0->f_166[0x00000000 /*189*/].f_B > 0x00000000)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 0x00000001;
}

void func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x0178C60FEA5C5A75())
	{
		unk_0xBFE31971E49FA500(0x00000001);
	}
	if (!func_3(&iLocal_1723))
	{
		iLocal_1721 = 0x00000000;
		iLocal_1722 = 0x00000000;
		func_363(&iLocal_1723);
	}
	if (SYSTEM::CEIL((uParam0->f_166[0x00000000 /*189*/].f_F * 1000f)) != iLocal_1722)
	{
		iLocal_1721 = (SYSTEM::CEIL((uParam0->f_166[0x00000000 /*189*/].f_F * 1000f)) - iLocal_1722);
		iLocal_1722 = SYSTEM::CEIL((uParam0->f_166[0x00000000 /*189*/].f_F * 1000f));
		func_11(&iLocal_1723);
	}
	iVar0 = (SYSTEM::FLOOR((func_5(&(uParam0->f_3)) * 100f)) * 10 - SYSTEM::CEIL((uParam0->f_166[0x00000000 /*189*/].f_F * 1000f)));
	iVar1 = 0x00000000;
	if (func_5(&iLocal_1723) <= 2f)
	{
		if (uParam0->f_166[0x00000000 /*189*/].f_B > 0x00000000)
		{
			iVar1 = -iLocal_1721;
		}
		else
		{
			iVar1 = 0x00000000;
		}
	}
	iVar2 = SYSTEM::FLOOR((Global_1B416.f_4A5E.f_6[Local_45.f_A] * 100f)) * 10;
	if (iVar2 <= 0x00000000)
	{
		iVar2 = 0xFFFFFFFF;
	}
	if (IntToFloat(iVar0) <= (Local_45.f_6A[Local_45.f_A] * 1000f))
	{
		iVar3 = SYSTEM::FLOOR((Local_45.f_6A[Local_45.f_A] * 1000f));
		iVar6 = 0x00000003;
		sVar4 = "SPR_GBEST";
		iVar5 = 0x0000006D;
	}
	else if (IntToFloat(iVar0) <= ((((Local_45.f_70[Local_45.f_A] - Local_45.f_6A[Local_45.f_A]) / 2f) + Local_45.f_6A[Local_45.f_A]) * 1000f))
	{
		iVar6 = 0x00000002;
		iVar3 = SYSTEM::FLOOR(((((Local_45.f_70[Local_45.f_A] - Local_45.f_6A[Local_45.f_A]) / 2f) + Local_45.f_6A[Local_45.f_A]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 0x0000006C;
	}
	else if (IntToFloat(iVar0) <= (Local_45.f_70[Local_45.f_A] * 1000f))
	{
		iVar6 = 0x00000001;
		iVar3 = SYSTEM::FLOOR((Local_45.f_70[Local_45.f_A] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 0x0000006B;
	}
	else
	{
		iVar3 = 0xFFFFFFFF;
	}
	func_55();
	func_43(iVar0, "", 0xFFFFFFFF, 0xFFFFFFFF, "", 0xFFFFFFFF, 0xFFFFFFFF, "", iVar1, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, "SPR_GATES", 0x0000000C, 0xFFFFFFFF, 0xFFFFFFFF, "", 0x0000000C, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<8> Var6;
	int iVar7;
	
	if (fParam29 > -1f)
	{
		func_51(0x00000000, "", iParam27, uParam30, 0x00000009, 0x00000000, sParam28, 0x00000001, fParam29, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam14 > 0xFFFFFFFF)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 0x00000008, -1f, -1f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam10 > 0xFFFFFFFF)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 0x00000007, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	if (iParam5 > 0xFFFFFFFF)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
	}
	if (iParam2 > 0xFFFFFFFF)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > 0xFFFFFFFF)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0x00000000, 0x00000001, iParam27, iParam20, 0x00000004, 0x00000000, iParam21, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	if (iParam22 > 0xFFFFFFFF)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0x00000000, 0x00000001, iParam27, iParam24, 0x00000005, 0x00000000, iParam25, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0x00000000)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0x00000000)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar7 = 0x00000004;
	func_44(iParam0, &Var6, iParam8, iVar7, iParam27, 0x00000000, 0x00000003, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_46(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_45(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = uParam4;
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

void func_45(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_46(0x00000005, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_45(0x00000005, iVar0);
		Global_150976.f_E2E[iVar0] = iParam0;
		Global_150976.f_E2E.f_AC[iVar0] = uParam1;
		StringCopy(&(Global_150976.f_E2E.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_E2E.f_C2[iVar0] = uParam3;
		Global_150976.f_E2E.f_B7[iVar0] = uParam4;
		Global_150976.f_E2E.f_D8[iVar0] = iParam5;
		Global_150976.f_E2E.f_E3[iVar0] = iParam6;
		Global_150976.f_E2E.f_10E[iVar0] = iParam7;
		Global_150976.f_E2E.f_119[iVar0] = iParam8;
		Global_150976.f_E2E.f_124[iVar0] = iParam9;
		Global_150976.f_E2E.f_12F[iVar0] = iParam10;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_46(0x00000003, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_45(0x00000003, iVar0);
		Global_150976.f_ACC[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_ACC.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_ACC.f_B7[iVar0] = uParam3;
		Global_150976.f_ACC.f_AC[iVar0] = uParam2;
		Global_150976.f_ACC.f_CD[iVar0] = iParam4;
		Global_150976.f_ACC.f_D8[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_ACC.f_103[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_ACC.f_1A4[iVar0] = iParam7;
		Global_150976.f_ACC.f_1C5[iVar0] = iParam8;
		Global_150976.f_ACC.f_1AF[iVar0] = iParam9;
		Global_150976.f_ACC.f_1BA[iVar0] = iParam10;
		Global_150976.f_ACC.f_1D0[iVar0] = iParam11;
		Global_150976.f_ACC.f_1DB[iVar0] = iParam12;
		Global_150976.f_ACC.f_1E6[iVar0] = iParam13;
		Global_150976.f_ACC.f_1F1[iVar0] = iParam14;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_46(0x00000000, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_45(0x00000000, iVar0);
		Global_150976.f_46F[iVar0] = iParam0;
		Global_150976.f_46F.f_B[iVar0] = uParam1;
		StringCopy(&(Global_150976.f_46F.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_46F.f_C2[iVar0] = uParam3;
		Global_150976.f_46F.f_B7[iVar0] = uParam4;
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

int func_50(char* sParam0)
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

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_46(0x00000006, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_45(0x00000006, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = uParam3;
		Global_150976.f_F68.f_AC[iVar0] = uParam2;
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
		if (iParam15 == 0x00000005 && func_53())
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
			if (func_52())
			{
				Global_150976.f_46E = 0x00000001;
			}
		}
	}
}

int func_52()
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

int func_53()
{
	if (((unk_0xB3260A60545D3F11() == 0x00000008 || unk_0xB3260A60545D3F11() == 0x00000009) || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_54()
{
	return iLocal_1720;
}

void func_55()
{
	Global_150976.f_46A = 0x00000001;
}

void func_56(var uParam0)
{
	if (uParam0->f_D == 0xFFFFFFFF)
	{
	}
}

void func_57()
{
	if (Local_45 == 0x00000000)
	{
		unk_0x4A847DA194A5532B(0x00000000, 0x00000000, 0xFFFFFFFF);
		unk_0x4A847DA194A5532B(0x00000001, 0x00000000, 0xFFFFFFFF);
		unk_0x4A847DA194A5532B(0x00000002, 0x00000000, 0xFFFFFFFF);
		unk_0x4A847DA194A5532B(0x00000003, 0x00000000, 0xFFFFFFFF);
	}
}

void func_58(var uParam0)
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_166[0x00000000 /*189*/].f_9) < 5f)
		{
			if (!func_3(&iLocal_1920))
			{
				func_10(&iLocal_1920);
			}
			else if (func_5(&iLocal_1920) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 0x00001388, 0x00000000, &iLocal_1928, 0x00002000);
				if (uParam0->f_166[0x00000000 /*189*/].f_B <= (uParam0->f_C - 0x00000001))
				{
					if (unk_0xE4EDC4B0E92C078B(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/].f_5))
					{
						unk_0x9D7CDDB4B55142AF(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/].f_5, 0x00000000);
					}
				}
				if (uParam0->f_166[0x00000000 /*189*/].f_B + 1 <= (uParam0->f_C - 0x00000002))
				{
					if (unk_0xE4EDC4B0E92C078B(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B + 1 /*10*/].f_5))
					{
						unk_0x9D7CDDB4B55142AF(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B + 1 /*10*/].f_5, 0x00000000);
					}
				}
				func_11(&iLocal_1920);
				func_11(&iLocal_1917);
				uParam0->f_1 = 0x00000000;
				unk_0x790015DC92C918E2();
				sLocal_1915 = "SPR_RETR_IDLE";
				uParam0->f_166[0x00000000 /*189*/].f_17 = 0x00000000;
			}
			else if (func_5(&iLocal_1920) > 30f)
			{
				if (!func_362(iLocal_1927, 0x00000020))
				{
					func_103("SPR_IDLE_WARN", &iLocal_1927, 0x00000020, 0x00000000);
				}
			}
		}
		else if (func_3(&iLocal_1920))
		{
			func_360(&iLocal_1927, 0x00000020);
			func_11(&iLocal_1920);
		}
	}
	else if (func_3(&iLocal_1920))
	{
		func_360(&iLocal_1927, 0x00000020);
		func_11(&iLocal_1920);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

bool func_62(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0x00000000;
}

void func_63()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
	}
}

void func_64(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		if ((!unk_0xDF1306B443CD3D15(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000) || unk_0x7F6DC62EA9922664(uParam0->f_166[0x00000000 /*189*/].f_9) < 0x00000005) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_11(&iLocal_1917);
			if (unk_0xE4EDC4B0E92C078B(*iParam1))
			{
				unk_0x142CC44DB769B57E(iParam1);
			}
			if (uParam0->f_166[0x00000000 /*189*/].f_B <= (uParam0->f_C - 0x00000001))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/].f_5))
				{
					unk_0x9D7CDDB4B55142AF(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/].f_5, 0x00000000);
				}
			}
			if (uParam0->f_166[0x00000000 /*189*/].f_B + 1 <= (uParam0->f_C - 0x00000002))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B + 1 /*10*/].f_5))
				{
					unk_0x9D7CDDB4B55142AF(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B + 1 /*10*/].f_5, 0x00000000);
				}
			}
			uParam0->f_1 = 0x00000000;
			unk_0x790015DC92C918E2();
			sLocal_1915 = "SPR_RETR_DES";
			uParam0->f_166[0x00000000 /*189*/].f_17 = 0x00000000;
		}
		return;
	}
}

void func_65(var uParam0, int iParam1)
{
	if (Local_45 == 0x00000000)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
		{
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				unk_0x790015DC92C918E2();
				unk_0x5CEB4DB888A62073(0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				if (unk_0xE4EDC4B0E92C078B(*iParam1))
				{
					unk_0x142CC44DB769B57E(iParam1);
					if (uParam0->f_166[0x00000000 /*189*/].f_B <= (uParam0->f_C - 0x00000001))
					{
						if (unk_0xE4EDC4B0E92C078B(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/].f_5))
						{
							unk_0x9D7CDDB4B55142AF(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/].f_5, 0x00000000);
						}
					}
					if (uParam0->f_166[0x00000000 /*189*/].f_B + 1 <= (uParam0->f_C - 0x00000002))
					{
						if (unk_0xE4EDC4B0E92C078B(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B + 1 /*10*/].f_5))
						{
							unk_0x9D7CDDB4B55142AF(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B + 1 /*10*/].f_5, 0x00000000);
						}
					}
				}
				uParam0->f_1 = 0x00000000;
				unk_0x790015DC92C918E2();
				sLocal_1915 = "SPR_RETR_DES";
				func_66(&(Local_45.f_141), 0x00000001);
				uParam0->f_166[0x00000000 /*189*/].f_17 = 0x00000007;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = iParam1;
	unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0x00000000, 0xFFFFFFFF);
}

void func_67(var uParam0)
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7F6DC62EA9922664(uParam0->f_166[0x00000000 /*189*/].f_9);
	if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
	{
		iVar1 = SYSTEM::ROUND(unk_0x6EE94F60DA2A2273(uParam0->f_166[0x00000000 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_45 == 0x00000002)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
				{
					bLocal_1926 = 0x00000001;
				}
			}
			if (bLocal_1926)
			{
				if (uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/].f_7 == 0x00000006 || uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/].f_7 == 0x0000000A)
				{
					if (!unk_0xD17F06053799A7CA())
					{
						func_59("SPR_HELP_DAMG", 0x00001388, 0x00000000, &iLocal_1928, 0x00000002);
					}
				}
			}
		}
		else
		{
			if (unk_0xD17F06053799A7CA())
			{
				unk_0x790015DC92C918E2();
			}
			func_59("SPR_HELP_DAMG", 0x00001388, 0x00000000, &iLocal_1928, 0x00000002);
		}
	}
	if (Local_45 == 0x00000001)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0xD17F06053799A7CA())
			{
				unk_0x790015DC92C918E2();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 0x00001388, 0x00000000, &iLocal_1928, 0x00000002);
		}
	}
}

void func_69()
{
	Global_4CD7 = 0x00000000;
	func_70();
}

void func_70()
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

int func_71()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_72(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	
	vVar0 = { uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/] };
	if (uParam0->f_166[0x00000000 /*189*/].f_B > 0x00000000)
	{
		vVar1 = { uParam0->f_1B[(uParam0->f_166[0x00000000 /*189*/].f_B - 0x00000001) /*10*/] };
	}
	else
	{
		vVar1 = { 0f, 0f, 0f };
	}
	fVar2 = unk_0x0EB28750412C3A5A(vVar0, vVar1, 0x00000001);
	fVar3 = fVar2;
	if (uParam0->f_166[0x00000000 /*189*/].f_B == 0x00000000)
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	else
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	vVar4 = { unk_0x68F4C0EC296D3901(uParam0->f_166[0x00000000 /*189*/].f_8, 0x00000001) };
	if (func_73(vVar1, 0f, 0f, 0f, 0x3F000000, 0x00000000))
	{
		vVar5 = { vVar0 };
	}
	else
	{
		vVar5 = { unk_0xE3C0A5DBED4FBAB7(vVar4, vVar1, vVar0, 0x00000001) };
	}
	fVar6 = unk_0x0EB28750412C3A5A(vVar5, vVar4, 0x00000001);
	bVar7 = fVar6 >= fVar2;
	bVar8 = fVar6 >= fVar3;
	if (Local_45 == 0x00000001)
	{
		if (unk_0x755FF954DAE327E1((vVar5.z - vVar4.z)) > 15f)
		{
			bVar7 = 0x00000001;
		}
	}
	if (bVar8)
	{
		func_11(&iLocal_1917);
		uParam0->f_1 = 0x00000000;
		unk_0x790015DC92C918E2();
		func_256(0x00000001);
		uParam0->f_166[0x00000000 /*189*/].f_17 = 0x00000000;
		func_263(&(Local_45.f_77), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
		func_262(&(Local_45.f_77), "IB_RETRY", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
		func_262(&(Local_45.f_77), "FE_HLP16", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
		unk_0xC92DB9682A650680("MGSP_FAIL");
		sLocal_1915 = "SPR_HELP_FAIL";
	}
	else if (bVar7)
	{
		if (fVar6 <= (fVar3 - 15f))
		{
			func_303("SPR_HELP_RESET", 0xFFFFFFFF);
		}
		if (fVar6 <= (fVar3 - 15f))
		{
			func_59("SPR_HELP_WARN", 0x00001388, 0x00000000, &iLocal_1928, 0x00000004);
		}
	}
	else
	{
		unk_0x2F23E8033F1ADDD9("SPR_HELP_WARN");
		if (func_362(iLocal_1928, 0x00000004))
		{
			func_360(&iLocal_1928, 0x00000004);
		}
	}
}

int func_73(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_74()
{
	if (iLocal_1652 == 0x00000001)
	{
		if (func_3(&iLocal_1682))
		{
			if (func_5(&iLocal_1682) <= 2.5f)
			{
				iLocal_1718 = "GATEMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1652 = 0x00000000;
			}
		}
	}
	if (iLocal_1653 == 0x00000001)
	{
		if (func_3(&iLocal_1688))
		{
			if (func_5(&iLocal_1688) <= 2.5f)
			{
				iLocal_1718 = "GATEINNER";
				fLocal_1719 = 1f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1653 = 0x00000000;
			}
		}
	}
	if (iLocal_1654 == 0x00000001)
	{
		if (func_3(&iLocal_1685))
		{
			if (func_5(&iLocal_1685) <= 2.5f)
			{
				iLocal_1718 = "GATEOUTTER";
				fLocal_1719 = 0f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1654 = 0x00000000;
			}
		}
	}
	if (iLocal_1655 == 0x00000001)
	{
		if (func_3(&iLocal_1697))
		{
			if (func_5(&iLocal_1697) <= 2.5f)
			{
				iLocal_1718 = "GATEKNIFEINNER";
				fLocal_1719 = 2.5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1655 = 0x00000000;
			}
		}
	}
	if (iLocal_1656 == 0x00000001)
	{
		if (func_3(&iLocal_1700))
		{
			if (func_5(&iLocal_1700) <= 2.5f)
			{
				iLocal_1718 = "GATEINVERTEDIN";
				fLocal_1719 = 3f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1656 = 0x00000000;
			}
		}
	}
	if (iLocal_1657 == 0x00000001)
	{
		if (func_3(&iLocal_1691))
		{
			if (func_5(&iLocal_1691) <= 2.5f)
			{
				iLocal_1718 = "GATEKNIFEOUTTER";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1657 = 0x00000000;
			}
		}
	}
	if (iLocal_1658 == 0x00000001)
	{
		if (func_3(&iLocal_1694))
		{
			if (func_5(&iLocal_1694) <= 2.5f)
			{
				iLocal_1718 = "GATEINVERTEDOUT";
				fLocal_1719 = 2f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1658 = 0x00000000;
			}
		}
	}
	if (iLocal_1659 == 0x00000001)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFT";
				fLocal_1719 = 4f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1659 = 0x00000000;
			}
		}
	}
	if (iLocal_1660 == 0x00000001)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFTHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1660 = 0x00000000;
			}
		}
	}
	if (iLocal_1661 == 0x00000001)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFTMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1661 = 0x00000000;
			}
		}
	}
	if (iLocal_1662 == 0x00000001)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHT";
				fLocal_1719 = 4f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1662 = 0x00000000;
			}
		}
	}
	if (iLocal_1663 == 0x00000001)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHTHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1663 = 0x00000000;
			}
		}
	}
	if (iLocal_1664 == 0x00000001)
	{
		if (func_3(&iLocal_1670))
		{
			if (func_5(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHTMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1664 = 0x00000000;
			}
		}
	}
	if (iLocal_1665 == 0x00000001)
	{
		if (func_3(&iLocal_1673))
		{
			if (func_5(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTED";
				fLocal_1719 = 4f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1665 = 0x00000000;
			}
		}
	}
	if (iLocal_1666 == 0x00000001)
	{
		if (func_3(&iLocal_1673))
		{
			if (func_5(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTEDHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1666 = 0x00000000;
			}
		}
	}
	if (iLocal_1667 == 0x00000001)
	{
		if (func_3(&iLocal_1673))
		{
			if (func_5(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTEDMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 0x00000001;
			}
			else
			{
				iLocal_1718 = 0x00000000;
				fLocal_1719 = -1f;
				iLocal_1720 = 0x00000001;
				iLocal_1667 = 0x00000000;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)
{
	float fVar0;
	
	if (iParam1 < 0x00000000 || iParam1 > uParam0->f_166)
	{
		return;
	}
	if (!unk_0x437347B10A200C4B(uParam0->f_166[iParam1 /*189*/].f_8, 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_166[iParam1 /*189*/].f_9, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9, 0x00000000))
			{
				fVar0 = unk_0xD890711CFD5AF100(uParam0->f_166[iParam1 /*189*/].f_9);
				if (uParam0->f_166[0x00000000 /*189*/].f_B == uParam0->f_166[iParam1 /*189*/].f_B)
				{
				}
				else if (uParam0->f_166[iParam1 /*189*/].f_B > uParam0->f_166[0x00000000 /*189*/].f_B)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (unk_0x82CCEAB29E9451DD(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9))
				{
					if (unk_0xBBA8A868118C90ED(uParam0->f_166[iParam1 /*189*/].f_9, 0xFFFFFFFF, 0x00000000))
					{
						unk_0xF821F915BC24D246(uParam0->f_166[iParam1 /*189*/].f_8, uParam0->f_166[iParam1 /*189*/].f_9, 0xFFFFFFFF);
						unk_0x06736587AE5BE33B(uParam0->f_166[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam4, int iParam5)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (Local_45 == 0x00000001)
		{
			if (!unk_0x437347B10A200C4B(iParam2, 0x00000000))
			{
				unk_0xE9362E4D600DD12A(iParam1, iParam2, vParam3, unk_0xD890711CFD5AF100(iParam2), 0x00000001, 0x00000000, 0x000C0025, 5f, -1f);
			}
		}
		else if (Local_45 == 0x00000002)
		{
			uParam4 = uParam4;
			func_77(uParam0, vParam3, iParam5);
		}
	}
}

void func_77(var uParam0, vector3 vParam1, var uParam2)
{
	uParam0->f_C = uParam0->f_C;
	vParam1 = { vParam1 };
	uParam2 = uParam2;
}

void func_78(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000020)
	{
		return;
	}
	func_82(&(uParam0->f_1B[iParam1 /*10*/]));
	func_81(&(uParam0->f_1B[iParam1 /*10*/].f_6), &(uParam0->f_B2D), &(uParam0->f_B2E), uParam0->f_1B[iParam1 /*10*/].f_7 == 0x00000004);
	if (iParam1 + 1 < uParam0->f_C)
	{
		func_82(&(uParam0->f_1B[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_1B[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)
{
	if (*uParam0 != 0x00000000)
	{
		unk_0xE223EB8FE6F8CC15(*uParam0);
		*uParam0 = 0x00000000;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0x00000000)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0x00000000;
		*uParam2 = 0x000000FF;
		if (bParam3)
		{
			*uParam2 = 0x00000000;
		}
		if (bLocal_1916)
		{
			iVar3 = 0x00000006;
		}
		else
		{
			iVar3 = 0x00000001;
		}
		func_584(func_585(iVar3), &iVar0, &iVar1, &iVar2, uParam2);
		unk_0xF0B0A50DF3EA0E70(*uParam1, iVar0, iVar1, iVar2, *uParam2);
		unk_0xF08C5AE8AC5C7427(*uParam1, iVar0, iVar1, iVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_84(int iParam0)
{
	if ((((((iParam0 == 0x00000009 || iParam0 == 0x0000000C) || iParam0 == 0x0000000F) || iParam0 == 0x0000000A) || iParam0 == 0x0000000D) || iParam0 == 0x00000010) || iParam0 == 0x00000007)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_85(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (Local_45 == 0x00000000)
		{
			if (func_3(&iLocal_1682))
			{
				func_89(&iLocal_1682, 3f);
			}
			if (func_3(&iLocal_1676))
			{
				func_89(&iLocal_1676, 3f);
			}
			if (func_3(&iLocal_1670))
			{
				func_89(&iLocal_1670, 3f);
			}
			if (func_3(&iLocal_1679))
			{
				func_89(&iLocal_1679, 3f);
			}
			if (func_3(&iLocal_1673))
			{
				func_89(&iLocal_1673, 3f);
			}
			if (func_3(&iLocal_1685))
			{
				func_89(&iLocal_1685, 3f);
			}
			if (func_3(&iLocal_1688))
			{
				func_89(&iLocal_1688, 3f);
			}
			if (func_3(&iLocal_1691))
			{
				func_89(&iLocal_1691, 3f);
			}
			if (func_3(&iLocal_1694))
			{
				func_89(&iLocal_1694, 3f);
			}
			if (func_3(&iLocal_1697))
			{
				func_89(&iLocal_1697, 3f);
			}
			if (func_3(&iLocal_1700))
			{
				func_89(&iLocal_1700, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 0x00000007:
					iLocal_1652 = 0x00000001;
					func_11(&iLocal_1682);
					break;
				
				case 0x00000001:
					iLocal_1653 = 0x00000001;
					func_11(&iLocal_1688);
					break;
				
				case 0x00000002:
					iLocal_1654 = 0x00000001;
					func_11(&iLocal_1685);
					break;
				
				case 0x00000003:
					iLocal_1655 = 0x00000001;
					func_11(&iLocal_1697);
					break;
				
				case 0x00000004:
					iLocal_1656 = 0x00000001;
					func_11(&iLocal_1700);
					break;
				
				case 0x00000005:
					iLocal_1657 = 0x00000001;
					func_11(&iLocal_1691);
					break;
				
				case 0x00000006:
					iLocal_1658 = 0x00000001;
					func_11(&iLocal_1694);
					break;
				
				case 0x00000008:
					iLocal_1659 = 0x00000001;
					func_11(&iLocal_1670);
					break;
				
				case 0x00000009:
					iLocal_1660 = 0x00000001;
					func_11(&iLocal_1679);
					break;
				
				case 0x0000000A:
					iLocal_1661 = 0x00000001;
					func_11(&iLocal_1682);
					break;
				
				case 0x0000000B:
					iLocal_1662 = 0x00000001;
					func_11(&iLocal_1670);
					break;
				
				case 0x0000000C:
					iLocal_1663 = 0x00000001;
					func_11(&iLocal_1679);
					break;
				
				case 0x0000000D:
					iLocal_1664 = 0x00000001;
					func_11(&iLocal_1682);
					break;
				
				case 0x0000000E:
					iLocal_1665 = 0x00000001;
					func_11(&iLocal_1673);
					break;
				
				case 0x0000000F:
					iLocal_1666 = 0x00000001;
					func_11(&iLocal_1679);
					break;
				
				case 0x00000010:
					iLocal_1667 = 0x00000001;
					func_11(&iLocal_1682);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000007:
			func_88(uParam0, 5f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000001:
			func_87(uParam0, 1f);
			break;
		
		case 0x00000002:
			func_87(uParam0, 0f);
			break;
		
		case 0x00000005:
			func_87(uParam0, 1.5f);
			break;
		
		case 0x00000006:
			func_87(uParam0, 2f);
			break;
		
		case 0x00000003:
			func_87(uParam0, 2.5f);
			break;
		
		case 0x00000004:
			func_87(uParam0, 3f);
			break;
		
		case 0x00000008:
			func_87(uParam0, 4f);
			break;
		
		case 0x00000009:
			func_88(uParam0, 1.5f);
			break;
		
		case 0x0000000A:
			func_88(uParam0, 5f);
			break;
		
		case 0x0000000B:
			func_87(uParam0, 4f);
			break;
		
		case 0x0000000C:
			func_88(uParam0, 1.5f);
			break;
		
		case 0x0000000D:
			func_88(uParam0, 5f);
			break;
		
		case 0x0000000E:
			func_87(uParam0, 4f);
			break;
		
		case 0x0000000F:
			func_88(uParam0, 1.5f);
			break;
		
		case 0x00000010:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)
{
	uParam0->f_E = fParam1;
	uParam0->f_F = (uParam0->f_F + uParam0->f_E);
}

void func_88(var uParam0, float fParam1)
{
	uParam0->f_E = -fParam1;
	uParam0->f_F = (uParam0->f_F + uParam0->f_E);
}

void func_89(int iParam0, float fParam1)
{
	if (func_3(iParam0))
	{
		func_12(iParam0, (func_5(iParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_6 != 0x00000000)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 0x00000002 || uParam0->f_8 == 0x00000003)
		{
			iVar4 = 0x00000012;
		}
		else if (uParam0->f_8 == 0x00000001)
		{
			iVar4 = 0x00000009;
		}
		func_584(func_585(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xF0B0A50DF3EA0E70(uParam0->f_6, iVar0, iVar1, iVar2, func_91(*uParam0, 0x00000019, 0x000000C8));
	}
	if (uParam1->f_6 != 0x00000000)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 0x00000002 || uParam1->f_8 == 0x00000003)
		{
			iVar5 = 0x00000012;
		}
		else if (uParam1->f_8 == 0x00000001)
		{
			iVar5 = 0x00000009;
		}
		func_584(func_585(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xF0B0A50DF3EA0E70(uParam1->f_6, iVar0, iVar1, iVar2, func_91(*uParam1, 0x00000019, 0x000000C8));
	}
}

int func_91(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 0x00000032;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		fVar2 = unk_0x0EB28750412C3A5A(vParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

int func_92()
{
	return 0x0000000C;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
	{
		return 0xFFFFFFFF;
	}
	iVar4 = func_100(uParam1, iParam3);
	if (Local_45 == 0x00000000)
	{
		if (iVar4 != 0x00000011)
		{
			if (iVar4 == 0x00000001)
			{
				if (func_99(uParam0->f_166[0x00000000 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0x00000000)
					{
						if (uParam1->f_8 == 0x00000002)
						{
							iVar4 = 0x00000008;
							return iVar4;
						}
						if (uParam1->f_8 == 0x00000003)
						{
							iVar4 = 0x0000000C;
							return iVar4;
						}
						if (uParam1->f_8 == 0x00000001)
						{
							iVar4 = 0x0000000F;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 0x00000003;
						if (!func_362(iLocal_1949, 0x00040000))
						{
							func_98("Gate_PK", &iLocal_1948);
							iLocal_1949 = 0x00000000;
							func_334(&iLocal_1949, 0x00040000);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00080000))
						{
							func_98("Con_PK", &iLocal_1948);
							func_334(&iLocal_1949, 0x00080000);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00100000))
						{
							func_98("Con_PK", &iLocal_1948);
							func_334(&iLocal_1949, 0x00100000);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1948);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_166[0x00000000 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0x00000000)
					{
						if (uParam1->f_8 == 0x00000003)
						{
							iVar4 = 0x0000000B;
							return iVar4;
						}
						if (uParam1->f_8 == 0x00000002)
						{
							iVar4 = 0x00000009;
							return iVar4;
						}
						if (uParam1->f_8 == 0x00000001)
						{
							iVar4 = 0x0000000F;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 0x00000003;
						if (!func_362(iLocal_1949, 0x00040000))
						{
							func_98("Gate_PK", &iLocal_1948);
							iLocal_1949 = 0x00000000;
							func_334(&iLocal_1949, 0x00040000);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00080000))
						{
							func_98("Con_PK", &iLocal_1948);
							func_334(&iLocal_1949, 0x00080000);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00100000))
						{
							func_98("Con_PK", &iLocal_1948);
							func_334(&iLocal_1949, 0x00100000);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1948);
							return iVar4;
						}
					}
				}
				else
				{
					unk_0x61890296D3AA030F(uParam0->f_166[0x00000000 /*189*/].f_9, &uVar0, &uVar1, &vVar2, &uVar3);
					if (vVar2.z <= -0.866f)
					{
						if (uParam1->f_8 != 0x00000000)
						{
							if (uParam1->f_8 == 0x00000001)
							{
								iVar4 = 0x0000000E;
								return iVar4;
							}
							if (uParam1->f_8 == 0x00000002)
							{
								iVar4 = 0x00000009;
								return iVar4;
							}
							if (uParam1->f_8 == 0x00000003)
							{
								iVar4 = 0x0000000C;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 0x00000004;
							if (!func_362(iLocal_1949, 0x00008000))
							{
								func_98("Gate_PI", &iLocal_1947);
								iLocal_1949 = 0x00000000;
								func_334(&iLocal_1949, 0x00008000);
								return iVar4;
							}
							else if (!func_362(iLocal_1949, 0x00010000))
							{
								func_98("Con_PI", &iLocal_1947);
								func_334(&iLocal_1949, 0x00010000);
								return iVar4;
							}
							else if (!func_362(iLocal_1949, 0x00020000))
							{
								func_98("Con_PI", &iLocal_1947);
								func_334(&iLocal_1949, 0x00020000);
								return iVar4;
							}
							else
							{
								func_98("Con_PI", &iLocal_1947);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0x00000000)
					{
						if (uParam1->f_8 == 0x00000002)
						{
							iVar4 = 0x00000009;
							return iVar4;
						}
						else if (uParam1->f_8 == 0x00000003)
						{
							iVar4 = 0x0000000C;
							return iVar4;
						}
						else if (uParam1->f_8 == 0x00000001)
						{
							iVar4 = 0x0000000F;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 0x00000001;
						if (!func_362(iLocal_1949, 0x00001000))
						{
							func_98("Get_Perf", &iLocal_1944);
							iLocal_1949 = 0x00000000;
							func_334(&iLocal_1949, 0x00001000);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00002000))
						{
							func_98("Con_Perf", &iLocal_1944);
							func_334(&iLocal_1949, 0x00002000);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00004000))
						{
							func_98("Con_Perf", &iLocal_1944);
							func_334(&iLocal_1949, 0x00004000);
							return iVar4;
						}
						else
						{
							func_98("Con_Perf", &iLocal_1944);
							return iVar4;
						}
					}
				}
			}
			if (iVar4 == 0x00000002)
			{
				if (func_99(uParam0->f_166[0x00000000 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0x00000000)
					{
						if (uParam1->f_8 == 0x00000002)
						{
							iVar4 = 0x00000008;
							return iVar4;
						}
						if (uParam1->f_8 == 0x00000003)
						{
							iVar4 = 0x0000000C;
							return iVar4;
						}
						if (uParam1->f_8 == 0x00000001)
						{
							iVar4 = 0x0000000F;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 0x00000005;
						if (!func_362(iLocal_1949, 0x00000040))
						{
							func_98("Gate_Kni", &iLocal_1946);
							iLocal_1949 = 0x00000000;
							func_334(&iLocal_1949, 0x00000040);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00000080))
						{
							func_98("Con_Kni", &iLocal_1946);
							func_334(&iLocal_1949, 0x00000080);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00000100))
						{
							func_98("Con_Kni", &iLocal_1946);
							func_334(&iLocal_1949, 0x00000100);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1946);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_166[0x00000000 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0x00000000)
					{
						if (uParam1->f_8 == 0x00000003)
						{
							iVar4 = 0x0000000B;
							return iVar4;
						}
						if (uParam1->f_8 == 0x00000002)
						{
							iVar4 = 0x00000009;
							return iVar4;
						}
						if (uParam1->f_8 == 0x00000001)
						{
							iVar4 = 0x0000000F;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 0x00000005;
						if (!func_362(iLocal_1949, 0x00000040))
						{
							func_98("Gate_Kni", &iLocal_1946);
							iLocal_1949 = 0x00000000;
							func_334(&iLocal_1949, 0x00000040);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00000080))
						{
							func_98("Con_Kni", &iLocal_1946);
							func_334(&iLocal_1949, 0x00000080);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00000100))
						{
							func_98("Con_Kni", &iLocal_1946);
							func_334(&iLocal_1949, 0x00000100);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1946);
							return iVar4;
						}
					}
				}
				else
				{
					unk_0x61890296D3AA030F(uParam0->f_166[0x00000000 /*189*/].f_9, &uVar0, &uVar1, &vVar2, &uVar3);
					if (vVar2.z <= -0.866f)
					{
						if (uParam1->f_8 != 0x00000000)
						{
							if (uParam1->f_8 == 0x00000001)
							{
								iVar4 = 0x0000000E;
								return iVar4;
							}
							if (uParam1->f_8 == 0x00000002)
							{
								iVar4 = 0x00000008;
								return iVar4;
							}
							if (uParam1->f_8 == 0x00000003)
							{
								iVar4 = 0x0000000C;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 0x00000006;
							if (!func_362(iLocal_1949, 0x00000200))
							{
								func_98("Gate_Inv", &iLocal_1945);
								iLocal_1949 = 0x00000000;
								func_334(&iLocal_1949, 0x00000200);
								return iVar4;
							}
							else if (!func_362(iLocal_1949, 0x00000400))
							{
								func_98("Con_Inv", &iLocal_1945);
								func_334(&iLocal_1949, 0x00000400);
								return iVar4;
							}
							else if (!func_362(iLocal_1949, 0x00000800))
							{
								func_98("Con_Inv", &iLocal_1945);
								func_334(&iLocal_1949, 0x00000800);
								return iVar4;
							}
							else
							{
								func_98("Con_Inv", &iLocal_1945);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0x00000000)
					{
						if (uParam1->f_8 == 0x00000002)
						{
							iVar4 = 0x00000009;
							return iVar4;
						}
						else if (uParam1->f_8 == 0x00000003)
						{
							iVar4 = 0x0000000C;
							return iVar4;
						}
						else if (uParam1->f_8 == 0x00000001)
						{
							iVar4 = 0x0000000F;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 0x00000002;
						if (!func_362(iLocal_1949, 0x00000008))
						{
							func_98("Gate_Hit", &iLocal_1943);
							iLocal_1949 = 0x00000000;
							func_334(&iLocal_1949, 0x00000008);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00000010))
						{
							func_98("Con_Hit", &iLocal_1943);
							func_334(&iLocal_1949, 0x00000010);
							return iVar4;
						}
						else if (!func_362(iLocal_1949, 0x00000020))
						{
							func_98("Con_Hit", &iLocal_1943);
							func_334(&iLocal_1949, 0x00000020);
							return iVar4;
						}
						else
						{
							func_98("Con_Hit", &iLocal_1943);
							return iVar4;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0x00000000)
				{
					if (uParam1->f_8 == 0x00000002)
					{
						iVar4 = 0x0000000A;
						return iVar4;
					}
					if (uParam1->f_8 == 0x00000003)
					{
						iVar4 = 0x0000000D;
						return iVar4;
					}
					if (uParam1->f_8 == 0x00000001)
					{
						iVar4 = 0x00000010;
						return iVar4;
					}
				}
				else
				{
					iVar4 = 0x00000007;
					if (!func_362(iLocal_1949, 0x00000001))
					{
						func_98("Gate_Miss", &iLocal_1942);
						iLocal_1949 = 0x00000000;
						func_334(&iLocal_1949, 0x00000001);
						return iVar4;
					}
					else if (!func_362(iLocal_1949, 0x00000002))
					{
						func_98("Con_Miss", &iLocal_1942);
						func_334(&iLocal_1949, 0x00000002);
						return iVar4;
					}
					else if (!func_362(iLocal_1949, 0x00000004))
					{
						func_98("Con_Miss", &iLocal_1942);
						func_334(&iLocal_1949, 0x00000004);
						return iVar4;
					}
					else
					{
						func_98("Con_Miss", &iLocal_1942);
						return iVar4;
					}
				}
			}
			return iVar4;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0x00000000)
			{
				if (uParam1->f_8 == 0x00000002)
				{
					iVar4 = 0x0000000A;
					return iVar4;
				}
				if (uParam1->f_8 == 0x00000003)
				{
					iVar4 = 0x0000000D;
					return iVar4;
				}
				if (uParam1->f_8 == 0x00000001)
				{
					iVar4 = 0x00000010;
					return iVar4;
				}
			}
			else
			{
				iVar4 = 0x00000007;
				if (!func_362(iLocal_1949, 0x00000001))
				{
					func_98("Gate_Miss", &iLocal_1942);
					iLocal_1949 = 0x00000000;
					func_334(&iLocal_1949, 0x00000001);
					return iVar4;
				}
				else if (!func_362(iLocal_1949, 0x00000002))
				{
					func_98("Con_Miss", &iLocal_1942);
					func_334(&iLocal_1949, 0x00000002);
					return iVar4;
				}
				else if (!func_362(iLocal_1949, 0x00000004))
				{
					func_98("Con_Miss", &iLocal_1942);
					func_334(&iLocal_1949, 0x00000004);
					return iVar4;
				}
				else
				{
					func_98("Con_Miss", &iLocal_1942);
					return iVar4;
				}
			}
			return iVar4;
		}
	}
	else if (iVar4 != 0x00000011)
	{
		return iVar4;
	}
	return 0xFFFFFFFF;
}

int func_94(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	vector3 vVar1;
	
	if (!func_73(*uParam0, *uParam1, 0x3F000000, 0x00000000))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (unk_0x5A91F08DF773C39D(iParam2, *uParam0, fVar0, fVar0, fVar0, 0x00000000, 0x00000001, 0x00000000))
		{
			vVar1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0x68F4C0EC296D3901(iParam2, 0x00000001), vVar1) - func_95(*uParam0, vVar1)) > 15f)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sLocal_1938, "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

float func_95(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_96(vector3 vParam0)
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

bool func_97(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	unk_0x61890296D3AA030F(iParam0, &uVar0, &vVar1, &vVar2, &uVar3);
	if (unk_0x755FF954DAE327E1(vVar2.z) > 0.342f)
	{
		return 0x00000000;
	}
	return vVar1.z < 0f;
}

void func_98(char* sParam0, var uParam1)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_362(*uParam1, 0x00000001))
	{
		if (!iLocal_1651)
		{
			iLocal_1651 = 0x00000001;
			func_334(uParam1, 0x00000001);
			return;
		}
		else
		{
			iLocal_1651 = 0x00000000;
			if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 0x00001D4C, 0x00000000);
			}
			return;
		}
	}
	if (func_362(*uParam1, 0x00000001))
	{
		if (!func_362(*uParam1, 0x00000002))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 0x00000001;
				func_334(uParam1, 0x00000002);
				return;
			}
			else
			{
				iLocal_1651 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 0x00001D4C, 0x00000000);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 0x00000002))
	{
		if (!func_362(*uParam1, 0x00000004))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 0x00000001;
				func_334(uParam1, 0x00000004);
				return;
			}
			else
			{
				iLocal_1651 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 0x00001D4C, 0x00000000);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 0x00000004))
	{
		if (!func_362(*uParam1, 0x00000008))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 0x00000001;
				func_334(uParam1, 0x00000008);
				return;
			}
			else
			{
				iLocal_1651 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 0x00001D4C, 0x00000000);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 0x00000008))
	{
		if (!func_362(*uParam1, 0x00000010))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 0x00000001;
				func_334(uParam1, 0x00000010);
				return;
			}
			else
			{
				iLocal_1651 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 0x00001D4C, 0x00000000);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	unk_0x61890296D3AA030F(iParam0, &uVar0, &vVar1, &vVar2, &uVar3);
	if (unk_0x755FF954DAE327E1(vVar2.z) > 0.342f)
	{
		return 0x00000000;
	}
	return vVar1.z > 0f;
}

int func_100(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vVar0 = { *uParam0 };
	unk_0x61890296D3AA030F(iParam1, &vVar4, &vVar2, &vVar3, &vVar1);
	vVar5 = { vVar0 - vVar1 };
	fVar6 = unk_0x755FF954DAE327E1(func_95(vVar5, vVar4));
	fVar7 = unk_0x755FF954DAE327E1(func_95(vVar5, vVar3));
	fVar8 = unk_0x755FF954DAE327E1(func_95(vVar5, vVar2));
	fVar9 = ((fVar7 * fVar7) + (fVar8 * fVar8));
	if (fVar6 > 6.5f)
	{
		return 0x00000011;
	}
	else
	{
		if (fVar9 > 900f)
		{
			if (iParam1 == unk_0x16F2683693E537C9())
			{
				func_197(&uLocal_1902, 0x00000000);
			}
			return 0x00000011;
		}
		if (fVar9 > 110f)
		{
			if (iParam1 == unk_0x16F2683693E537C9())
			{
				func_197(&uLocal_1902, 0x00000000);
			}
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sLocal_1937, "HUD_MINI_GAME_SOUNDSET", 0x00000001);
			return 0x00000002;
		}
		else
		{
			if (iParam1 == unk_0x16F2683693E537C9())
			{
				func_197(&uLocal_1902, 0x00000000);
			}
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sLocal_1937, "HUD_MINI_GAME_SOUNDSET", 0x00000001);
			return 0x00000001;
		}
	}
	return 0xFFFFFFFF;
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar3;
	float fVar4;
	
	if (iParam1 < 0x00000000 || iParam1 > (uParam0->f_D - 0x00000001))
	{
		return;
	}
	iVar0 = uParam0->f_D;
	Var2 = { uParam0->f_166[iParam1 /*189*/] };
	iVar1 = 0x00000000;
	while (iVar1 < uParam0->f_D)
	{
		if (Var2.f_8 != uParam0->f_166[iVar1 /*189*/].f_8)
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_166[iVar1 /*189*/].f_8, 0x00000000) && !unk_0x437347B10A200C4B(Var2.f_8, 0x00000000))
			{
				if (Var2.f_B > uParam0->f_166[iVar1 /*189*/].f_B)
				{
					iVar0 = (iVar0 - 0x00000001);
				}
				else if (Var2.f_B == uParam0->f_166[iVar1 /*189*/].f_B)
				{
					fVar3 = func_102(Var2.f_8, uParam0->f_1B[Var2.f_B /*10*/], 0x00000001);
					fVar4 = func_102(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], 0x00000001);
					if (fVar3 < fVar4)
					{
						iVar0 = (iVar0 - 0x00000001);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 0x00000001);
			}
		}
		iVar1++;
	}
	uParam0->f_166[iParam1 /*189*/].f_C = iVar0;
}

float func_102(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1, bParam2);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_303(sParam0, 0xFFFFFFFF);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	switch (uParam1->f_17)
	{
		case 0x00000000:
			func_178(uParam0);
			func_253();
			func_263(&(Local_45.f_77), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
			func_262(&(Local_45.f_77), "IB_RETRY", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
			func_262(&(Local_45.f_77), "FE_HLP16", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
			func_256(0x00000001);
			unk_0xC92DB9682A650680("MGSP_FAIL");
			uParam1->f_17 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_172(&(Local_45.f_141), &(Local_45.f_147), &(uParam0->f_11), cLocal_1914, sLocal_1915, uParam0, 0x0000004E))
			{
				iLocal_2029 = 0x00000000;
				if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
				{
					unk_0x71EDC33E5A423750(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000004);
				}
				if (func_260("SPR_HELP_DAMG", 0x00000000, 0x00000000))
				{
					unk_0x2F23E8033F1ADDD9("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0x00000000;
				func_66(&(Local_45.f_141), 0x00000001);
				if (*uParam0)
				{
					func_164(0x00000000, 0x00000000);
					func_163(0x00000000, 0x00000000);
					func_162();
					if (func_260("SPR_RETR_DES", 0x00000000, 0x00000000))
					{
						unk_0x2F23E8033F1ADDD9("SPR_RETR_DES");
					}
					func_256(0x00000000);
					*uParam0 = 0x00000001;
					uParam1->f_17 = 0x00000006;
				}
				else
				{
					func_164(0x00000000, 0x00000000);
					func_163(0x00000000, 0x00000000);
					func_162();
					func_89(&iLocal_1917, 10f);
					func_256(0x00000000);
					*uParam0 = 0x00000000;
					uParam1->f_17 = 0x00000007;
				}
			}
			break;
		
		case 0x00000002:
			func_154(&(Local_45.f_77), 0x43480000, 0x00000007, 0x00000001, 0x00000001, 0x3F800000);
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
			{
				func_164(0x00000000, 0x00000000);
				func_163(0x00000000, 0x00000000);
				func_162();
				iLocal_2034 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 0x00000001);
				if (func_260("SPR_RETR_DES", 0x00000000, 0x00000000))
				{
					unk_0x2F23E8033F1ADDD9("SPR_RETR_DES");
				}
				func_256(0x00000000);
				*uParam0 = 0x00000001;
				uParam1->f_17 = 0x00000006;
			}
			else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA))
			{
				func_164(0x00000000, 0x00000000);
				func_163(0x00000000, 0x00000000);
				func_162();
				iLocal_2034 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(iLocal_2034, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 0x00000001);
				func_89(&iLocal_1917, 10f);
				func_256(0x00000000);
				*uParam0 = 0x00000000;
				uParam1->f_17 = 0x00000007;
			}
			break;
		
		case 0x00000004:
			if (*uParam0 == 0x00000001)
			{
				uParam0->f_1 = 0x00000000;
			}
			if (uParam1->f_B > 0x00000000)
			{
				uParam1->f_10 = { uParam0->f_1B[uParam1->f_B /*10*/] };
			}
			if (bParam2)
			{
				if (unk_0xDF1306B443CD3D15(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
				{
					unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					func_263(&(Local_45.f_77), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
					func_262(&(Local_45.f_77), "SPR_UI_CONT", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
					func_262(&(Local_45.f_77), "IB_NO", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
				}
			}
			if (bParam2)
			{
				if (unk_0xDF1306B443CD3D15(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
				{
					uParam1->f_17 = 0x00000005;
				}
			}
			else
			{
				uParam1->f_17 = 0x00000008;
			}
			break;
		
		case 0x00000005:
			if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
			{
				unk_0x71EDC33E5A423750(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000004);
			}
			uParam0->f_1 = 0x00000000;
			if (func_5(&iLocal_1917) <= 10f)
			{
				if (bParam2)
				{
					unk_0x3584F71E5CA29322(0x00000009);
					unk_0x3584F71E5CA29322(0x00000007);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
					func_154(&(Local_45.f_77), 0x43480000, 0x00000001, 0x00000000, 0x00000001, 0x3F800000);
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
					{
						*uParam0 = 0x00000001;
						iLocal_2034 = unk_0xD68EA767274B7444();
						unk_0x4D7F4CC43D4D0DE3(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 0x00000001);
						uParam1->f_17 = 0x00000006;
					}
					else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA))
					{
						*uParam0 = 0x00000000;
						func_89(&iLocal_1917, 10f);
						iLocal_2034 = unk_0xD68EA767274B7444();
						unk_0x4D7F4CC43D4D0DE3(iLocal_2034, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 0x00000001);
						uParam1->f_17 = 0x00000006;
					}
				}
			}
			else
			{
				unk_0x790015DC92C918E2();
				sLocal_1915 = "SPR_RETR_DES";
				func_66(&(Local_45.f_141), 0x00000001);
				uParam1->f_17 = 0x0000000E;
			}
			break;
		
		case 0x00000006:
			if (func_358(0x000001F4))
			{
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(0x00000001);
				uParam1->f_17 = 0x00000008;
			}
			break;
		
		case 0x00000007:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_135())
			{
				if (unk_0x757EF87A33649210())
				{
					func_178(uParam0);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					if (unk_0xC844350D5D58C99A(uParam0->f_166[0x00000000 /*189*/].f_9))
					{
						unk_0x37806EBF326ECEE9(uParam0->f_166[0x00000000 /*189*/].f_9, 0f, 0f, 0f);
						unk_0xD458AC1C1D29C3B4(uParam0->f_166[0x00000000 /*189*/].f_9, unk_0xC08489BCA49ECCA8(uParam0->f_166[0x00000000 /*189*/].f_9), 0x00000000);
					}
					uParam1->f_17 = 0x0000000A;
				}
			}
			break;
		
		case 0x00000008:
			if (func_133(uParam1, 0x00000001))
			{
				if (*uParam0)
				{
					uParam0->f_1A = 0x00000008;
				}
				else
				{
					if (bParam2)
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						if (Local_45 == 0x00000000)
						{
							unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
						}
					}
					uParam1->f_17 = 0x00000009;
				}
			}
			break;
		
		case 0x00000009:
			iVar0 = 0x00000000;
			while (iVar0 < uParam0->f_D)
			{
				if (uParam0->f_166[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_131(uParam0, iVar0, 0x00000000);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000) && uParam0->f_166[0x00000000 /*189*/].f_B != 0xFFFFFFFF)
				{
					func_130(uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B + 1 /*10*/], uParam0->f_166[0x00000000 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B /*10*/], uParam0->f_166[0x00000000 /*189*/].f_B == 0x00000000);
				}
				unk_0x2FB9A57162E54BAB(0f);
				func_11(&iLocal_2025);
				uParam1->f_17 = 0x0000000B;
			}
			else
			{
				uParam1->f_17 = 0x0000000D;
			}
			break;
		
		case 0x0000000A:
			func_164(0x00000000, 0x00000000);
			func_163(0x00000000, 0x00000000);
			func_110(uParam1, 0x00000001);
			func_9(uParam1, Local_45.f_3, Local_45.f_6, 0f);
			SYSTEM::SETTIMERA(0x00000000);
			uParam1->f_17 = 0x0000000C;
			break;
		
		case 0x0000000B:
			if (!unk_0xEB880D98B5988D0C() || unk_0x68367101660E33F0())
			{
				uParam0->f_1 = 0x00000001;
				func_11(&iLocal_2025);
				func_108(&(uParam0->f_166[iVar0 /*189*/]), 60f, 0x00000000);
				if (func_581(0x000001F4))
				{
					unk_0x486B4ADE317F0689();
					if (!unk_0x437347B10A200C4B(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
					{
						unk_0xF821F915BC24D246(uParam0->f_166[0x00000000 /*189*/].f_8, uParam0->f_166[0x00000000 /*189*/].f_9, 0xFFFFFFFF);
					}
					if (bParam2 && Local_45 == 0x00000000)
					{
						func_88(&(uParam0->f_166[0x00000000 /*189*/]), 5f);
					}
					uParam1->f_17 = 0x0000000D;
				}
				return 0x00000000;
			}
			else if (unk_0xEB880D98B5988D0C())
			{
				if (uParam0->f_166[0x00000000 /*189*/].f_B < uParam0->f_C)
				{
					if (func_3(&iLocal_2025))
					{
						if (func_107(&iLocal_2025) >= 3f)
						{
							unk_0x486B4ADE317F0689();
						}
					}
					else
					{
						func_10(&iLocal_2025);
					}
				}
			}
			break;
		
		case 0x0000000C:
			uParam0->f_1A = 0x00000008;
			return 0x00000000;
			break;
		
		case 0x0000000D:
			if (uParam1->f_16 != 0x00000000)
			{
				if (!unk_0x437347B10A200C4B(uParam1->f_8, 0x00000000))
				{
					if (func_106(uParam1))
					{
						func_11(&iLocal_1917);
						sLocal_1915 = "SPR_RETR_STUK";
						uParam1->f_17 = 0x00000000;
						return 0x00000001;
					}
				}
			}
			return 0x00000000;
		
		case 0x0000000E:
			func_178(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_1A = 0x00000008;
			break;
	}
	return 0x00000001;
}

int func_106(var uParam0)
{
	if (uParam0->f_16 != 0x00000000)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), uParam0->f_9, 0x00000000))
			{
				if (unk_0x9C66D99E63E8E24C(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_16 == joaat("stunt"))
					{
						if (unk_0xEE9925602B29903C(uParam0->f_9) < 3f || unk_0xE608C809F9416F00(uParam0->f_9))
						{
							if (unk_0x377BE9A1BF38C7CE(uParam0->f_9) && unk_0xEE9925602B29903C(uParam0->f_9) < 1f)
							{
								return 0x00000001;
							}
							if (unk_0x7B5606C651AB51B5(uParam0->f_9, 0x00000000, 0x000003E8))
							{
								return 0x00000001;
							}
							if (unk_0x7B5606C651AB51B5(uParam0->f_9, 0x00000001, 0x000003E8))
							{
								return 0x00000001;
							}
							if (unk_0x7B5606C651AB51B5(uParam0->f_9, 0x00000002, 0x00002710))
							{
								return 0x00000001;
							}
							if (unk_0x7B5606C651AB51B5(uParam0->f_9, 0x00000003, 0x00002710))
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

float func_107(int iParam0)
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000))
	{
		if (unk_0xC41A9202669A24C4(uParam0->f_16))
		{
			vVar0 = { unk_0x835730A2D89F6093(uParam0->f_9, 0x00000002) };
			func_109(uParam0->f_9, fParam1, bParam2, vVar0.x, 0x00000000);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	vector3 vVar0;
	bool bVar1;
	float fVar2;
	
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return;
	}
	if (unk_0x9C66D99E63E8E24C(iParam0) < fParam1)
	{
		unk_0x1AEF7184B203A58D(iParam0, fParam1);
	}
	vVar0 = { unk_0x835730A2D89F6093(iParam0, 0x00000002) };
	bVar1 = 0x00000000;
	if (bParam2)
	{
		fVar2 = (unk_0x6117725E0134737F() * 45f);
		if (vVar0.x < -fVar2)
		{
			bVar1 = 0x00000001;
			vVar0.x = (vVar0.x + fVar2);
		}
		else if (vVar0.x < fParam3)
		{
			bVar1 = 0x00000001;
			vVar0.x = fParam3;
		}
		else if (vVar0.x > fVar2)
		{
			bVar1 = 0x00000001;
			vVar0.x = (vVar0.x - fVar2);
		}
		else if (vVar0.x > fParam3)
		{
			bVar1 = 0x00000001;
			vVar0.x = fParam3;
		}
		if (vVar0.y < -fVar2)
		{
			bVar1 = 0x00000001;
			vVar0.y = (vVar0.y + fVar2);
		}
		else if (vVar0.y < fParam4)
		{
			bVar1 = 0x00000001;
			vVar0.y = fParam4;
		}
		else if (vVar0.y > fVar2)
		{
			bVar1 = 0x00000001;
			vVar0.y = (vVar0.y - fVar2);
		}
		else if (vVar0.y > fParam4)
		{
			bVar1 = 0x00000001;
			vVar0.y = fParam4;
		}
	}
	else
	{
		if (vVar0.x != fParam3)
		{
			bVar1 = 0x00000001;
			vVar0.x = fParam3;
		}
		if (vVar0.y != fParam4)
		{
			bVar1 = 0x00000001;
			vVar0.y = fParam4;
		}
	}
	if (bVar1)
	{
		unk_0xC023D1C4BF532815(iParam0, vVar0, 0x00000002, 0x00000001);
	}
}

int func_110(var uParam0, bool bParam1)
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_9))
		{
			if (!unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000) || !unk_0xDF1306B443CD3D15(uParam0->f_9, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0x00000000))
				{
					unk_0x327AAEE25F323797(uParam0->f_8);
					unk_0x73270B3C9CC833FD(uParam0->f_9, 0x00000001, 0x00000001);
					unk_0xA954465BA6FDEFE2(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0x00000000))
				{
					unk_0xA47B46945FF6DE74(uParam0->f_8, uParam0->f_10, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				if (unk_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0x00000000))
				{
				}
				else
				{
					unk_0x73270B3C9CC833FD(uParam0->f_9, 0x00000001, 0x00000001);
					unk_0xA954465BA6FDEFE2(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000))
	{
		unk_0xD458AC1C1D29C3B4(uParam0->f_9, 0x000003E8, 0x00000000);
		unk_0x51B954DAB1BCAF73(uParam0->f_9);
		unk_0x5DAB50E08C3C504A(uParam0->f_9, 1000f);
		unk_0xA47B46945FF6DE74(uParam0->f_9, uParam0->f_10, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(uParam0->f_9, uParam0->f_13);
		unk_0xB9FD7450C0DAB575(uParam0->f_9, 0x40A00000);
	}
	else
	{
		if (uParam0->f_16 == 0x00000000)
		{
			return 0x00000001;
		}
		uParam0->f_9 = unk_0x122AAB0B1D6F55AD(joaat("stunt"), uParam0->f_10, uParam0->f_13, 0x00000001, 0x00000001, 0x00000000);
		if (unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000))
		{
			return 0x00000000;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000004);
		}
		unk_0x44A200C9B6E1CEA6(uParam0->f_9, 0x00000001);
		func_111(uParam0->f_9, &(Local_45.f_F3), 0x00000000, 0x00000001);
	}
	unk_0x128A778E98A59AB1(uParam0->f_9, 0x00000000);
	unk_0x56FDC9ADE35F7DB0(uParam0->f_9, 0x00000001, 0x00000001, 0x00000000);
	unk_0x873BCADC75FF6D20(uParam0->f_9);
	if (!unk_0x437347B10A200C4B(uParam0->f_8, 0x00000000))
	{
		if (!unk_0x82CCEAB29E9451DD(uParam0->f_8, uParam0->f_9))
		{
			unk_0xF821F915BC24D246(uParam0->f_8, uParam0->f_9, 0xFFFFFFFF);
		}
	}
	if (!unk_0xAF6690C489CC6203(uParam0->f_9))
	{
		unk_0x73270B3C9CC833FD(uParam0->f_9, 0x00000001, 0x00000000);
	}
	MemCopy(&cVar0, {*uParam0}, 0x00000004);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0x95514F113C1EDFBD(uParam0->f_9, &cVar0);
	if (uParam0->f_14 <= 0x00000003)
	{
		unk_0x6728CA90E5387ABE(uParam0->f_9, 0x00000000);
		Local_45.f_1 = uParam0->f_9;
	}
	return 0x00000001;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (!func_122(iParam0))
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
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_121(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_121(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_121(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_121(iVar1 + 1));
			}
		}
		else if (uParam1->f_42 == 0x1446590A || uParam1->f_42 == 0x8B213907)
		{
			iVar2 = 0x00000001;
			while (iVar2 <= 0x00000009)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_121(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_121(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_42 == 0x58F77553)
		{
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_121(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_121(iVar3));
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
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_121(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_121(iVar4));
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
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000F) || func_120(iParam0)) || (((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000) && uParam1->f_9[0x00000014] > 0x00000000)) && func_119())
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_118(uParam1->f_42))
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
						func_117(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_117(iParam0, uParam1->f_45);
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
			func_112(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_42) && !unk_0xA7082C42B8809BF2(uParam1->f_42))
		{
			iVar5 = 0x00000000;
			while (iVar5 <= 0x0000000B)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_121(iVar5 + 1)))
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

int func_112(int iParam0, var uParam1, var uParam2)
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
	if (func_116(unk_0x134B62B726CEC8E6(*iParam0), 0x00000001) && unk_0x0ECB5CA5140957AD(*iParam0, 0x00000018) != func_115(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 0x00000018, func_115(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)), 0x00000000);
	}
	func_114(iParam0);
	if (func_113(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 0x00000001);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
	}
	return 0x00000001;
}

int func_113(int iParam0)
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

void func_114(var uParam0)
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

int func_115(int iParam0, int iParam1)
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

int func_116(int iParam0, int iParam1)
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

void func_117(int iParam0, int iParam1)
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

int func_118(int iParam0)
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

bool func_119()
{
	return unk_0xC146D5FBD23C6954(0x9B328228);
}

int func_120(int iParam0)
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

int func_121(int iParam0)
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

int func_122(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_128(unk_0xD803B885F5E47A62(), 0xFFFFFFFF))
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
	if (func_124(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_123(iParam0) != 0xFFFFFFFF)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_123(int iParam0)
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

int func_124(int iParam0)
{
	if (func_127(iParam0) == 0x000000E9)
	{
		return func_125(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_125(int iParam0)
{
	if (func_126(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_126(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_127(int iParam0)
{
	if (func_126(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_129(iParam0, 0x00000001, 0x00000001))
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

int func_129(int iParam0, bool bParam1, bool bParam2)
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

void func_130(vector3 vParam0, int iParam1, vector3 vParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (bParam3 && Local_45.f_A == 0x00000000)
		{
			unk_0xA47B46945FF6DE74(iParam1, 1705.039f, 3251.13f, 40.0016f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		}
		vVar6 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		unk_0x5CDCBCDA2C651E97(vVar6);
		unk_0xE82754C349C7B581(vVar6, &fVar5, 0x00000000, 0x00000000);
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		if (bParam3)
		{
			vVar4 = { vParam0 - vParam2 };
		}
		else
		{
			vVar4 = { vParam2 - vVar3 };
		}
		fVar0 = unk_0xE7D606C557C86100(vVar4.x, vVar4.y);
		fVar1 = (unk_0xE7D606C557C86100(vVar4.x, vVar4.z) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - unk_0x755FF954DAE327E1(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0x755FF954DAE327E1(fVar1));
		}
		if (unk_0x755FF954DAE327E1((vVar6.z - fVar5)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			vVar6.z = (fVar5 + 25f);
			unk_0xA47B46945FF6DE74(iParam1, vVar6, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		}
		unk_0x1E9649458B15960F(iParam1, 0x00000001);
		vVar2 = { unk_0x835730A2D89F6093(iParam1, 0x00000002) };
		vVar2.x = fVar1;
		vVar2.z = fVar0;
		unk_0xC023D1C4BF532815(iParam1, vVar2, 0x00000002, 0x00000001);
		unk_0x1E9649458B15960F(iParam1, 0x00000000);
		unk_0xD67D6A3F0D653D93(vVar6, unk_0x08D89CE2E20AE305(iParam1), 500f, 0x00000000);
	}
}

void func_131(var uParam0, int iParam1, bool bParam2)
{
	func_132(uParam0, iParam1, (uParam0->f_166[iParam1 /*189*/].f_B - 0x00000001), bParam2);
}

void func_132(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	if (iParam2 < 0x00000000 || iParam2 > (uParam0->f_C - 0x00000001))
	{
		return;
	}
	if (iParam1 < 0x00000000 || iParam1 > (uParam0->f_D - 0x00000001))
	{
		return;
	}
	if (unk_0x437347B10A200C4B(uParam0->f_166[iParam1 /*189*/].f_8, 0x00000000))
	{
		return;
	}
	if (uParam0->f_166[iParam1 /*189*/].f_16 != 0x00000000)
	{
		if (unk_0x437347B10A200C4B(uParam0->f_166[iParam1 /*189*/].f_9, 0x00000000))
		{
			return;
		}
	}
	vVar0 = { uParam0->f_1B[iParam2 + 1 /*10*/] - uParam0->f_1B[iParam2 /*10*/] };
	fVar1 = unk_0xE7D606C557C86100(vVar0.x, vVar0.y);
	fVar2 = 0f;
	if (unk_0x7D8B2A8F9EA82DB7(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 0f;
	}
	else if (unk_0x8E39AC3C76C8AA58(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 25f;
	}
	else if (unk_0xC41A9202669A24C4(uParam0->f_166[iParam1 /*189*/].f_16))
	{
		fVar2 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_166[iParam1 /*189*/]), uParam0->f_1B[iParam2 /*10*/], fVar1, fVar2);
}

int func_133(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_134(uParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_134(var uParam0)
{
	char cVar0[16];
	
	if (uParam0->f_15 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0x437347B10A200C4B(uParam0->f_8, 0x00000000))
	{
		unk_0xD458AC1C1D29C3B4(uParam0->f_8, 0x000003E8, 0x00000000);
		if (!unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000))
		{
			if (!unk_0x82CCEAB29E9451DD(uParam0->f_8, uParam0->f_9))
			{
				unk_0xF821F915BC24D246(uParam0->f_8, uParam0->f_9, 0xFFFFFFFF);
			}
		}
		else
		{
			unk_0xA47B46945FF6DE74(uParam0->f_8, uParam0->f_10, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(uParam0->f_8, uParam0->f_13);
		}
	}
	else if (!unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000))
	{
		uParam0->f_8 = unk_0x852A19533F896693(uParam0->f_9, uParam0->f_14, uParam0->f_15, 0xFFFFFFFF, 0x00000001, 0x00000001);
		if (unk_0x437347B10A200C4B(uParam0->f_8, 0x00000000))
		{
			return 0x00000000;
		}
	}
	else
	{
		uParam0->f_8 = unk_0x36F2404464202779(uParam0->f_14, uParam0->f_15, uParam0->f_10, uParam0->f_13, 0x00000001, 0x00000001);
		if (unk_0x437347B10A200C4B(uParam0->f_8, 0x00000000))
		{
			return 0x00000000;
		}
	}
	if (uParam0->f_14 > 0x00000003)
	{
		if (!unk_0xAF6690C489CC6203(uParam0->f_8))
		{
			unk_0x73270B3C9CC833FD(uParam0->f_8, 0x00000001, 0x00000000);
		}
		MemCopy(&cVar0, {*uParam0}, 0x00000004);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0x5F2AA9E2843E9403(uParam0->f_8, &cVar0);
	}
	return 0x00000001;
}

int func_135()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000001))
	{
		SYSTEM::SETTIMERA(0x00000000);
		func_164(0x00000001, 0x00000000);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x790015DC92C918E2();
	}
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C7, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x95235C19032FCE7D();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000001))
		{
			func_163(0x00000001, 0x00000000);
			SYSTEM::SETTIMERB(0x00000000);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || unk_0x757EF87A33649210())
		{
			if (!unk_0x757EF87A33649210())
			{
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(0x000005DC);
				}
			}
			else if (iLocal_42 == 0x00000000)
			{
				iLocal_42 = unk_0x1C0640BA9A7327B3() + 1000;
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				}
				func_153(0x00000000, 0x00000002, 0x00000001);
				func_145(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_137(0x00000001);
				unk_0x7BBABEC524CBF883(0x00000000);
				unk_0x86E4B20DE8E91A57(0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				}
				func_164(0x00000000, 0x00000000);
				func_136(0x00000000);
			}
			else if (unk_0x1C0640BA9A7327B3() < iLocal_42)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iVar0 == 0x00000000)
	{
		if (iParam0 == 0x00000001)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000003))
			{
				unk_0x21387C9EECC2B220(0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000003);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000003))
		{
			unk_0x21387C9EECC2B220(0x00000000);
			unk_0x0674E58A79778E99(&iLocal_41, 0x00000003);
		}
	}
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		func_144();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_143(0x00000000))
		{
			func_138(0x00000000);
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

void func_138(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_141())
		{
			func_140(0x00000001, 0x00000001);
		}
		else
		{
			func_140(0x00000000, 0x00000000);
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
	if (!func_139())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_139()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_140(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_143(0x00000000))
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

bool func_141()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_142()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_143(int iParam0)
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

void func_144()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_145(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_152(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_139())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_151(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_152(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_151(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_149(unk_0xD803B885F5E47A62())) && !func_147(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_146()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_149(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_146()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_147(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_148(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_21();
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

int func_149(int iParam0)
{
	if (func_147(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_150())
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

bool func_150()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_151(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_152(int iParam0)
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

void func_153(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000002);
		if (!unk_0x8CD06866876216F2())
		{
			if (iParam1 == 0x00000001)
			{
				unk_0x9A82EEAF6CA12AEE(0.2f);
			}
			else
			{
				unk_0x9A82EEAF6CA12AEE(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000002) || iParam2)
		{
			if (!unk_0x8CD06866876216F2())
			{
				unk_0x9A82EEAF6CA12AEE(1f);
			}
		}
		unk_0x0674E58A79778E99(&iLocal_41, 0x00000002);
	}
}

void func_154(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (!func_161(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_160(uParam0->f_1, 0x00000100) || (func_160(uParam0->f_1, 0x00002000) && unk_0xB8E3620B82AD47D7(0x00000002)))
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
			unk_0x1200CC973A2399C8(func_160(uParam0->f_1, 0x00001000));
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
							func_159(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_158(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_160(uParam0->f_1, 0x00001000))
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
		fVar8 = func_157(bParam4, func_157(func_160(uParam0->f_1, 0x00000020), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_156(&(uParam0->f_1), 0x00000100);
		func_155(&(uParam0->f_1), 0x00000080);
	}
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_157(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_158(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_159(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_161(var uParam0)
{
	if (*uParam0 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_156(&(uParam0->f_1), 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_162()
{
	iLocal_41 = 0x00000000;
	iLocal_42 = 0x00000000;
	func_145(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_137(0x00000001);
}

void func_163(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000001)
	{
		func_164(0x00000000, 0x00000000);
		unk_0x82A772610883F395("DeathFailOut", 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000001);
		func_153(0x00000001, 0x00000002, 0x00000000);
		unk_0x4AED3E7834924DC8(0x00000002);
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000001) || iParam1)
		{
			unk_0x9A1335ECD7BD117F("DeathFailOut");
			func_153(0x00000000, 0x00000002, 0x00000001);
			unk_0x4AED3E7834924DC8(0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_41, 0x00000001);
	}
}

void func_164(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_165())
	{
		case 0x00000000:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 0x00000001:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 0x00000002:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000000) || iParam1)
		{
			unk_0x82A772610883F395(sVar0, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000000);
			func_153(0x00000001, 0x00000001, 0x00000000);
			unk_0x4AED3E7834924DC8(0x00000001);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000000) || iParam1)
		{
			unk_0x9A1335ECD7BD117F(sVar0);
			func_153(0x00000000, 0x00000001, 0x00000001);
			unk_0x4AED3E7834924DC8(0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_41, 0x00000000);
	}
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
		if (func_170(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_169(unk_0x16F2683693E537C9());
			if (func_168(iVar0) && (!func_167(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_168(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_167(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_168(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_170(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_170(int iParam0)
{
	if (func_168(iParam0))
	{
		return func_171(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_171(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_172(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0x00000000:
			*uParam0 = 0x00000001;
			unk_0x8BC9595FD2792B5D("DEATH_SCENE");
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ScreenFlash", "WastedSounds", 0x00000001);
			func_10(&(uParam0->f_1));
			func_162();
			func_177(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x31A33F7BCB08CB80(0x00000001);
			break;
		
		case 0x00000001:
			if (func_135() || unk_0x757EF87A33649210())
			{
				*uParam0 = 0x00000002;
			}
			if (!func_362(uParam0->f_4, 0x00000004))
			{
				if (unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0x00000000, 0xFFFFFFFF))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Bed", "WastedSounds", 0x00000001);
					func_334(&(uParam0->f_4), 0x00000004);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_362(uParam0->f_4, 0x00000002))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "TextHit", "WastedSounds", 0x00000001);
					func_334(&(uParam0->f_4), 0x00000002);
				}
				func_174(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 0x00000004 & iParam6) - 0x00000002 & iParam6) | 0x00000010, 0x00000007, 0x00000001, 0x41700000, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (func_174(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 0x00000008 & iParam6) - 0x00000004 & iParam6) - 0x00000002 & iParam6), 0x00000007, 0x00000001, 0x41700000, 0x00000001))
			{
				func_164(0x00000000, 0x00000001);
				func_163(0x00000000, 0x00000001);
				func_162();
				if (*uParam5)
				{
					unk_0x4DB69487E1A9EE2A(0x00000001);
				}
				else if (!uParam0->f_5)
				{
					func_173(0x00000000);
				}
				unk_0x31A33F7BCB08CB80(0x00000000);
				unk_0x65C5EBCA17A891FC(0x00000000);
				*uParam0 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x67E5ECB8FD7F5018(0x00000001);
				func_164(0x00000000, 0x00000001);
				func_163(0x00000000, 0x00000001);
				unk_0x8910D3D58E0132B8("DEATH_SCENE");
				unk_0x31A33F7BCB08CB80(0x00000000);
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			unk_0x31A33F7BCB08CB80(0x00000000);
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_173(bool bParam0)
{
	if ((Global_A1D7 == 0x00000009 || Global_A1D7 == 0x0000000A) || Global_A1D7 == 0x00000005)
	{
		Global_1AECF = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_1AECF = 0x00000000;
	}
}

int func_174(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
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
			if (func_160(iParam5, 0x00000004))
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
			func_158(sParam3);
			unk_0x3CAEA85DA607305E(0x00000064);
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7A8BB56B212464AC();
			if (func_160(iParam5, 0x00000020))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 0x00000001;
				}
			}
			if (!func_160(iParam5, 0x00000001))
			{
				unk_0x5EEBDFEE72949D59(0x00000000);
			}
			func_263(&(uParam1->f_A), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			func_262(&(uParam1->f_A), "IB_RETRY", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
			func_262(&(uParam1->f_A), "FE_HLP16", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
			if (func_160(iParam5, 0x00000004))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ScreenFlash", "MissionFailedSounds", 0x00000001);
			}
			if (func_160(iParam5, 0x00000008))
			{
				switch (func_165())
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
			if (!func_3(&(uParam1->f_1)))
			{
				func_363(&(uParam1->f_1));
			}
			if (func_160(iParam5, 0x00000002))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_363(&(uParam1->f_4));
				}
			}
			*uParam1 = 0x00000002;
			break;
		
		case 0x00000002:
			unk_0xBD706C594F6DCD4A();
			if (func_160(iParam5, 0x00000020))
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
			func_176(uParam0, 0x00000000, 0x00000000);
			if (!func_160(iParam5, 0x00000010) && (func_5(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x757EF87A33649210()))
			{
				func_154(&(uParam1->f_A), 0x43480000, iParam6, bParam7, 0x00000001, 0x3F800000);
				unk_0x5D80F91A16C40CDE();
				if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
				{
					uParam1->f_8A = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_160(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_175(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_160(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_175(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			if (func_160(iParam5, 0x00000002))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_160(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_175(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			func_176(uParam0, 0x00000000, 0x00000000);
			unk_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_8A || !((unk_0x7F8A39872A07D2CE("stunt_plane_races", unk_0xBB0808A181D4745C()) || unk_0x7F8A39872A07D2CE("pilot_school", unk_0xBB0808A181D4745C())) || (unk_0x7F8A39872A07D2CE("bj", unk_0xBB0808A181D4745C()) && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))))
			{
				unk_0x82E51BCA72537B6C(0x000009C4);
			}
			if (func_160(iParam5, 0x00000040) && uParam1->f_8A)
			{
				unk_0x53491B90E4FD0E56(0x000001F4);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(0x00000000);
			}
			*uParam1 = 0x00000004;
			break;
		
		case 0x00000004:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_176(uParam0, 0x00000000, 0x00000000);
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

void func_175(int iParam0)
{
	if (*iParam0 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
	iParam0->f_1 = 0x00000000;
	iParam0->f_7B = 0x00000000;
}

int func_176(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
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
	if (func_5(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0x00000000;
	}
	return 0x00000001;
}

void func_177(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_175(&(uParam0->f_A));
	uParam0->f_86 = fParam1;
	uParam0->f_87 = fParam2;
	uParam0->f_89 = 0x00000001;
	uParam0->f_88 = 0x00000000;
	*uParam0 = 0x00000000;
}

void func_178(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_C)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_179(int iParam0, bool bParam1)
{
	switch (iLocal_1650)
	{
		case 0x00000000:
			func_25();
			func_196();
			func_192();
			iLocal_1650 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_191())
			{
				iLocal_1650 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			func_180(iParam0);
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				iLocal_1650 = 0x00000000;
			}
			break;
	}
}

void func_180(int iParam0)
{
	switch (Local_45.f_A)
	{
		case 0x00000003:
			func_190(iParam0);
			func_189(iParam0);
			break;
		
		case 0x00000000:
			func_188(iParam0);
			func_187(iParam0);
			break;
		
		case 0x00000001:
			func_186(iParam0);
			func_184(iParam0);
			break;
		
		case 0x00000002:
			func_183(iParam0);
			func_182(iParam0);
			break;
		
		case 0x00000004:
			func_181(iParam0);
			break;
	}
}

void func_181(int iParam0)
{
	if (iParam0 == 0x00000005)
	{
		if (!func_362(uLocal_1726, 0x00000001))
		{
			func_334(&uLocal_1726, 0x00000001);
		}
	}
	if (iParam0 == 0x0000000C)
	{
		if (!func_362(uLocal_1726, 0x00000002))
		{
			func_334(&uLocal_1726, 0x00000002);
		}
	}
}

void func_182(int iParam0)
{
	if (iParam0 >= 0x00000004)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_1714[0x00000000]) && !func_362(uLocal_1716, 0x00000001))
		{
			iLocal_1714[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 0x00000001, 0x00000001, 0x00000000);
			iLocal_1714[0x00000001] = unk_0x122AAB0B1D6F55AD(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 0x00000001, 0x00000001, 0x00000000);
			unk_0xC74DAD25331A5425(iLocal_1714[0x00000000], iLocal_1714[0x00000001], 0x3F800000);
			iLocal_1715[0x00000000] = unk_0x852A19533F896693(iLocal_1714[0x00000000], 0x00000004, joaat("s_m_m_dockwork_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			func_334(&uLocal_1716, 0x00000001);
		}
		if (unk_0x1C2E18E9C63BEB77("SPR_Fluff_01"))
		{
			if (!unk_0x437347B10A200C4B(iLocal_1714[0x00000000], 0x00000000) && !unk_0x437347B10A200C4B(iLocal_1715[0x00000000], 0x00000000))
			{
				if (unk_0xD1960163A3042274(iLocal_1715[0x00000000], 0xF1F17AE7) == 0x00000001)
				{
				}
				else
				{
					unk_0x1B901F542DF070CF(iLocal_1715[0x00000000], iLocal_1714[0x00000000], "SPR_Fluff_01", 0x000C0025, 0x00000000, 0x00000008, 0xFFFFFFFF, unk_0xD890711CFD5AF100(iLocal_1714[0x00000000]), 0x00000000, 2f);
				}
			}
		}
	}
}

void func_183(int iParam0)
{
	if (iParam0 == 0x00000004)
	{
		if (!func_362(uLocal_1726, 0x00000001))
		{
			func_334(&uLocal_1726, 0x00000001);
		}
	}
	if (iParam0 == 0x00000008)
	{
		if (!func_362(uLocal_1726, 0x00000002))
		{
			func_334(&uLocal_1726, 0x00000002);
		}
	}
}

void func_184(int iParam0)
{
	if (iParam0 >= 0x00000001)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_1714[0x00000000]))
		{
			if (!func_362(uLocal_1716, 0x00000001))
			{
				if (func_185(&iLocal_1713))
				{
					iLocal_1714[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, 0x00000001, 0x00000001, 0x00000000);
					func_334(&uLocal_1716, 0x00000001);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_1714[0x00000000]))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_1715[0x00000000]))
			{
				if (!func_362(uLocal_1716, 0x00000002))
				{
					iLocal_1715[0x00000000] = unk_0x852A19533F896693(iLocal_1714[0x00000000], 0x00000004, joaat("a_m_y_motox_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
					func_334(&uLocal_1716, 0x00000002);
				}
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_1714[0x00000000]) && !unk_0xC844350D5D58C99A(iLocal_1715[0x00000000]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_1714[0x00000000], 0x00000000) && !unk_0x437347B10A200C4B(iLocal_1715[0x00000000], 0x00000000))
			{
				if (!unk_0x5A91F08DF773C39D(iLocal_1714[0x00000000], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xD1960163A3042274(iLocal_1715[0x00000000], 0x93A5526E) == 0x00000001)
					{
					}
					else
					{
						unk_0xE9362E4D600DD12A(iLocal_1715[0x00000000], iLocal_1714[0x00000000], -2530.873f, 608.701f, 238.9111f, unk_0xD890711CFD5AF100(iLocal_1714[0x00000000]), 0x00000000, 0x00000000, 0x00040000, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 0x00000001)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_1714[0x00000001]))
		{
			if (!func_362(uLocal_1717, 0x00000001))
			{
				if (func_185(&iLocal_1713))
				{
					iLocal_1714[0x00000001] = unk_0x122AAB0B1D6F55AD(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, 0x00000001, 0x00000001, 0x00000000);
					func_334(&uLocal_1717, 0x00000001);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_1714[0x00000001]))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_1715[0x00000001]))
			{
				if (!func_362(uLocal_1717, 0x00000002))
				{
					iLocal_1715[0x00000001] = unk_0x852A19533F896693(iLocal_1714[0x00000001], 0x00000004, joaat("a_m_y_motox_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
					func_334(&uLocal_1717, 0x00000002);
				}
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_1714[0x00000001]) && !unk_0xC844350D5D58C99A(iLocal_1715[0x00000001]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_1714[0x00000001], 0x00000000) && !unk_0x437347B10A200C4B(iLocal_1715[0x00000001], 0x00000000))
			{
				if (!unk_0x5A91F08DF773C39D(iLocal_1714[0x00000001], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xD1960163A3042274(iLocal_1715[0x00000001], 0x93A5526E) == 0x00000001)
					{
					}
					else
					{
						unk_0xE9362E4D600DD12A(iLocal_1715[0x00000001], iLocal_1714[0x00000001], -2527.712f, 609.6833f, 239.2568f, unk_0xD890711CFD5AF100(iLocal_1714[0x00000001]), 0x00000000, 0x00000000, 0x00040000, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0x00000000)
		{
			if (!unk_0xB87F6CF6E5628C67((*iParam0)[iVar0]))
			{
				if (!unk_0xB87F6CF6E5628C67((*iParam0)[iVar0]))
				{
				}
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_186(int iParam0)
{
	if (iParam0 == 0x00000009)
	{
		if (!func_362(uLocal_1726, 0x00000001))
		{
			func_334(&uLocal_1726, 0x00000001);
		}
	}
	if (iParam0 == 0x0000000C)
	{
		if (!func_362(uLocal_1726, 0x00000002))
		{
			func_334(&uLocal_1726, 0x00000002);
		}
	}
}

void func_187(int iParam0)
{
	if (iParam0 == 0x00000006)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_1714[0x00000000]) && !func_362(uLocal_1716, 0x00000001))
		{
			iLocal_1714[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, 0x00000001, 0x00000001, 0x00000000);
			iLocal_1715[0x00000000] = unk_0x852A19533F896693(iLocal_1714[0x00000000], 0x00000004, joaat("s_m_m_dockwork_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			if (!unk_0x437347B10A200C4B(iLocal_1714[0x00000000], 0x00000000) && !unk_0x437347B10A200C4B(iLocal_1715[0x00000000], 0x00000000))
			{
				if (!unk_0x5A91F08DF773C39D(iLocal_1714[0x00000000], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xD1960163A3042274(iLocal_1715[0x00000000], 0xB41F1A34) == 0x00000001)
					{
					}
					else
					{
						unk_0x132B85BCE016BCA0(iLocal_1715[0x00000000], iLocal_1714[0x00000000], -1552.281f, 2641.609f, -0.8283f, 0x00000004, unk_0xD890711CFD5AF100(iLocal_1714[0x00000000]), 0x00040000, 3f, -1f, 0x00000001);
					}
				}
			}
			func_334(&uLocal_1716, 0x00000001);
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (func_362(uLocal_1716, 0x00000001))
		{
			if (!unk_0x437347B10A200C4B(iLocal_1715[0x00000000], 0x00000000))
			{
				unk_0xEBA53F35D0085654(&(iLocal_1715[0x00000000]));
			}
			if (!unk_0x437347B10A200C4B(iLocal_1714[0x00000000], 0x00000000))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_1714[0x00000000]));
			}
		}
	}
}

void func_188(int iParam0)
{
	if (iParam0 == 0x00000007)
	{
		if (!func_362(uLocal_1726, 0x00000001))
		{
			func_334(&uLocal_1726, 0x00000001);
		}
	}
	if (iParam0 == 0x0000000B)
	{
		if (!func_362(uLocal_1726, 0x00000002))
		{
			func_334(&uLocal_1726, 0x00000002);
		}
	}
}

void func_189(int iParam0)
{
	if (!func_362(uLocal_1716, 0x00000001))
	{
		if (iParam0 < 0x00000003)
		{
			if (unk_0x3DDA6C6A285628E4(0x00000065, "SPRStuntAF"))
			{
				unk_0x5CDCBCDA2C651E97(-943.8105f, -3173.692f, 12.9445f);
				if (!unk_0xC844350D5D58C99A(iLocal_1714[0x00000000]))
				{
					iLocal_1714[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xB9FD7450C0DAB575(iLocal_1714[0x00000000], 0x40A00000);
					unk_0x56FDC9ADE35F7DB0(iLocal_1714[0x00000000], 0x00000001, 0x00000001, 0x00000000);
					if (Local_45 == 0x00000000)
					{
						unk_0x873BCADC75FF6D20(iLocal_1714[0x00000000]);
					}
					iLocal_1715[0x00000000] = unk_0x852A19533F896693(iLocal_1714[0x00000000], 0x00000004, joaat("s_m_m_highsec_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
				}
				if (!unk_0x437347B10A200C4B(iLocal_1714[0x00000000], 0x00000000))
				{
					if (unk_0x5A91F08DF773C39D(iLocal_1714[0x00000000], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_1714[0x00000000]))
						{
							unk_0x4D3C3C0B0DE2663E(iLocal_1714[0x00000000], 0x00000065, "SPRStuntAF", 0x00000001);
						}
					}
					else if (!unk_0x20D6474D5F4B9FC6(iLocal_1714[0x00000000]))
					{
						if (!unk_0x437347B10A200C4B(iLocal_1715[0x00000000], 0x00000000))
						{
							if (!unk_0xD1960163A3042274(iLocal_1715[0x00000000], 0x93A5526E) == 0x00000001)
							{
								unk_0xE9362E4D600DD12A(iLocal_1715[0x00000000], iLocal_1714[0x00000000], -6793.876f, -557.0385f, 781.0172f, 50f, 0x00000000, joaat("jet"), 0x00040000, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(iLocal_1714[0x00000000], 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_1714[0x00000000]))
			{
				unk_0xC55F2A0377488064(iLocal_1714[0x00000000]);
			}
			else
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_1714[0x00000000]));
				func_334(&uLocal_1716, 0x00000001);
			}
		}
	}
	else if (!unk_0x437347B10A200C4B(iLocal_1714[0x00000000], 0x00000000))
	{
		unk_0x5CDCBCDA2C651E97(unk_0x68F4C0EC296D3901(iLocal_1714[0x00000000], 0x00000001));
	}
}

void func_190(int iParam0)
{
	if (iParam0 == 0x00000006)
	{
		if (!func_362(uLocal_1726, 0x00000001))
		{
			func_334(&uLocal_1726, 0x00000001);
		}
	}
	if (iParam0 == 0x0000000C)
	{
		if (!func_362(uLocal_1726, 0x00000002))
		{
			func_334(&uLocal_1726, 0x00000002);
		}
	}
}

int func_191()
{
	switch (Local_45.f_A)
	{
		case 0x00000003:
			if (func_185(&iLocal_1713) && unk_0x3DDA6C6A285628E4(0x00000065, "SPRStuntAF"))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000000:
			if (func_185(&iLocal_1713))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (func_185(&iLocal_1713))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (func_185(&iLocal_1713) && unk_0x1C2E18E9C63BEB77("SPR_Fluff_01"))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			break;
	}
	return 0x00000001;
}

void func_192()
{
	switch (Local_45.f_A)
	{
		case 0x00000003:
			func_194(&iLocal_1713, joaat("jet"));
			func_194(&iLocal_1713, joaat("s_m_m_highsec_01"));
			unk_0x36187931D29E5BBE(0x00000065, "SPRStuntAF");
			break;
		
		case 0x00000000:
			func_194(&iLocal_1713, joaat("jetmax"));
			func_194(&iLocal_1713, joaat("s_m_m_dockwork_01"));
			break;
		
		case 0x00000001:
			func_194(&iLocal_1713, joaat("sanchez"));
			func_194(&iLocal_1713, joaat("a_m_y_motox_01"));
			break;
		
		case 0x00000002:
			func_194(&iLocal_1713, joaat("hauler"));
			func_194(&iLocal_1713, joaat("tanker"));
			func_194(&iLocal_1713, joaat("s_m_m_dockwork_01"));
			unk_0x29398344B9E5B8A7("SPR_Fluff_01");
			break;
		
		case 0x00000004:
			break;
	}
	func_193(&iLocal_1713);
}

void func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0x00000000)
		{
			unk_0x523BCC9DC80CD82F((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_194(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0x00000000)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= *iParam0)
	{
		return 0x00000000;
	}
	(*iParam0)[iVar1] = iParam1;
	return 0x00000001;
}

int func_195(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_196()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (func_362(uLocal_1726, iVar0))
		{
			func_360(&uLocal_1726, iVar0);
		}
		iVar0++;
	}
}

void func_197(var uParam0, int iParam1)
{
	func_198(uParam0, iParam1, 0x00000000);
}

void func_198(var uParam0, int iParam1, int iParam2)
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
		if (func_199(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_199(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

bool func_199(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_200(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_166[0x00000000 /*189*/].f_B >= (uParam0->f_C - 0x00000002))
	{
		fVar0 = SYSTEM::VDIST(uParam0->f_1B[(uParam0->f_C - 0x00000002) /*10*/], func_201());
		if (!unk_0xBD054C76E6F4158B(uLocal_1936))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), func_201()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				uLocal_1936 = unk_0x372C0B8361DDE4D6(func_201(), uParam0->f_1B[(uParam0->f_C - 0x00000001) /*10*/] - func_201(), 2000f, 0x0000000C, 0x0000007F);
			}
		}
		else if (!SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), func_201()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_253();
		}
	}
}

Vector3 func_201()
{
	switch (Local_45.f_A)
	{
		case 0x00000000:
			return -2591.965f, 2483.167f, 60.8904f;
			break;
		
		case 0x00000001:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		
		case 0x00000002:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		
		case 0x00000003:
			return -1721.049f, -2792.948f, 75.4149f;
			break;
		
		case 0x00000004:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_202(var uParam0)
{
	if (func_235())
	{
		if (!Local_1929)
		{
			Local_1929 = 0x00000001;
			Local_1929.f_1 = 0x00000001;
		}
		else
		{
			Local_1929.f_1 = 0x00000000;
		}
	}
	else if (func_234())
	{
		if (!Local_1929.f_1 || func_233() >= 1f)
		{
			if (Local_1929)
			{
				Local_1929 = 0x00000000;
			}
		}
	}
	if (func_234())
	{
		func_232();
	}
	else
	{
		func_231();
	}
	if (Local_1929)
	{
		if (!func_230(Local_1929.f_2) && !func_228(Local_1929.f_2))
		{
			func_204(&uLocal_1902, Local_1929.f_2);
		}
		else
		{
			if (unk_0x9F4FE516EAACCFC5(Local_1929.f_6))
			{
				unk_0x9A8DDC7C522F5BF5(Local_1929.f_6, 0x00000000);
			}
			if (func_228(Local_1929.f_2))
			{
				Local_1929.f_2 = { func_203(uParam0) };
			}
			func_197(&uLocal_1902, 0x00000000);
			Local_1929 = 0x00000000;
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(Local_1929.f_6))
	{
		unk_0x9A8DDC7C522F5BF5(Local_1929.f_6, 0x00000000);
	}
	else
	{
		if (func_228(Local_1929.f_2))
		{
			Local_1929.f_2 = { func_203(uParam0) };
		}
		func_197(&uLocal_1902, 0x00000000);
		Local_1929 = 0x00000000;
	}
}

Vector3 func_203(var uParam0)
{
	if (uParam0->f_166[0x00000000 /*189*/].f_B < (Local_45.f_B - 0x00000001))
	{
		return uParam0->f_1B[uParam0->f_166[0x00000000 /*189*/].f_B + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_204(var uParam0, vector3 vParam1)
{
	func_205(uParam0, vParam1, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
}

void func_205(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_198(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_206(uParam0, vParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_206(var uParam0, vector3 vParam1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	iVar0 = uParam2;
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
	if (func_199(iVar0))
	{
		func_227();
	}
	if (!unk_0x8C74DE122769E1BF())
	{
		if (func_222(uParam0, bParam4, bParam6, 0x00000000))
		{
			func_221(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0x00000000;
		}
		else if (uParam0->f_6 == 0x00000002)
		{
			if (func_211(iVar0))
			{
				if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam5)
					{
						if (!func_199(iVar0))
						{
							func_303(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_210(0x00000001);
							}
						}
					}
				}
			}
		}
		else if (func_211(iVar0))
		{
			if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
			{
				if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam5)
				{
					if (!func_199(iVar0))
					{
						func_303(iVar0, 0xFFFFFFFF);
						uParam0->f_3 = iVar0;
						if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
						{
							func_210(0x00000001);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x2EBF5002C6B6A06C(iVar0))
		{
			if (func_199(iVar0) && unk_0xFEBC1E4EC9E001F0())
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
					func_198(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
				{
					func_198(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
				{
					func_198(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
				{
					func_198(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
				{
					func_198(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
			{
				func_198(uParam0, iVar0, 0x00000001);
			}
		}
		if (!func_222(uParam0, bParam4, bParam6, 0x00000000))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_209(uParam0))
			{
				func_207(uParam0);
			}
		}
	}
}

void func_207(var uParam0)
{
	if (func_208(unk_0x16F2683693E537C9()))
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

int func_208(int iParam0)
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

int func_209(var uParam0)
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

int func_210(bool bParam0)
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

int func_211(char* sParam0)
{
	if (!func_212(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_199(sParam0)) || func_199("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_210(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_210(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_210(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_212(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_143(0x00000000))
	{
		return 0x00000000;
	}
	if (func_220())
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
	if ((func_219() || func_218(Global_440000.f_38DB3)) || func_217())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_216(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_215(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_213(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_213(int iParam0)
{
	if (iParam0 != func_214())
	{
		if (func_129(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_129(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_214()
{
	return 0xFFFFFFFF;
}

int func_215(int iParam0, int iParam1)
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

int func_216(int iParam0, int iParam1)
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

var func_217()
{
	return Global_2564C8.f_11;
}

bool func_218(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_219()
{
	return Global_2564C8.f_10;
}

bool func_220()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_221(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF3039DE1FDB4F6FD(0x00000000);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_A;
	if (iParam2 == 0x66EADDF5)
	{
		if (iVar0 < 0x000005DC)
		{
			iVar0 = 0x000005DC;
		}
		if (iVar1 < 0x000005DC)
		{
			iVar1 = 0x000005DC;
		}
	}
	unk_0x98EF6C2D1F172740(vParam1, 0xFFFFFFFF, iVar0, iVar1, iParam2);
	iVar2 = 0x00000800;
	iVar3 = 0x00000003;
	unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vParam1, 0xFFFFFFFF, iVar2, iVar3);
	unk_0x82A772610883F395("FocusIn", 0x00000000, 0x00000000);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusIn", "HintCamSounds", 0x00000001);
	uParam0->f_B = 0x00000001;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 0x00000001;
	*uParam0 = 0x00000000;
}

int func_222(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_226(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_209(uParam0))
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
						if (!func_226(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_225(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_225(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_226(bParam1, bParam2, bParam3))
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
					if (!func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_225(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
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
				else if (!func_226(bParam1, bParam2, bParam3))
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
						if (func_224(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_223(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_223(bParam1, bParam2, bParam3))
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
					else if (func_224(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_209(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_212(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_227();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_223(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

int func_224(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

int func_225(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

int func_226(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

void func_227()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

int func_228(vector3 vParam0)
{
	float fVar0;
	
	fVar0 = unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9());
	if (SYSTEM::VDIST2(vParam0, func_229(unk_0xD803B885F5E47A62())) < (150f + (fVar0 * fVar0)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_229(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_230(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_231()
{
	Local_1929.f_5 = 0f;
}

void func_232()
{
	Local_1929.f_5 = (Local_1929.f_5 + unk_0x6117725E0134737F());
}

float func_233()
{
	return Local_1929.f_5;
}

bool func_234()
{
	return unk_0xB9132A06AE472728(0x00000000, 0x00000050);
}

bool func_235()
{
	return unk_0x06F8112AA79C53D9(0x00000000, 0x00000050);
}

void func_236(vector3 vParam0)
{
	func_197(&uLocal_1902, 0x00000000);
	Local_1929.f_2 = { vParam0 };
}

void func_237(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_238(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

int func_239(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x0FB033EB6C6ED01F(0x00000000);
	switch (iLocal_1649)
	{
		case 0x00000000:
			iLocal_194 = 0x00000000;
			vLocal_1898 = { func_201() };
			vLocal_1899 = { func_252() };
			fLocal_1900 = func_251();
			unk_0xBFE31971E49FA500(0x00000000);
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x790015DC92C918E2();
			iLocal_1649 = 0x00000001;
			break;
		
		case 0x00000001:
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (func_165() == 0x00000000)
				{
					unk_0x82A772610883F395("MinigameEndMichael", 0x00000000, 0x00000000);
				}
				else if (func_165() == 0x00000001)
				{
					unk_0x82A772610883F395("MinigameEndFranklin", 0x00000000, 0x00000000);
				}
				else if (func_165() == 0x00000002)
				{
					unk_0x82A772610883F395("MinigameEndTrevor", 0x00000000, 0x00000000);
				}
				iLocal_1707 = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_1898, vLocal_1899, fLocal_1900, 0x00000001, 0x00000002);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (bParam2)
				{
					unk_0x91F5B0244AAE6222(iLocal_1707, "HAND_SHAKE", 0.07f);
				}
				if (unk_0xDF1306B443CD3D15(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000) && unk_0xE934758D273C899A(uParam0->f_166[0x00000000 /*189*/].f_9))
				{
					unk_0x132B85BCE016BCA0(unk_0x16F2683693E537C9(), uParam0->f_166[0x00000000 /*189*/].f_9, vLocal_1898.x, vLocal_1898.y, (vLocal_1898.z + 15f), 0x00000004, unk_0x9C66D99E63E8E24C(uParam0->f_166[0x00000000 /*189*/].f_9), 0x00040000, 10f, 10f, 0x00000001);
				}
				unk_0xC9E4A2CFEBE9BD26(iLocal_1707, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
				iLocal_1649 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			unk_0x70D5C5F31B79F27C(iLocal_1707);
			func_250(iLocal_1707);
			func_10(&iLocal_1703);
			iLocal_1649 = 0x00000003;
			break;
		
		case 0x00000003:
			if (func_249(&iLocal_1703, fLocal_1901))
			{
				func_10(&iLocal_1703);
				func_250(iLocal_1707);
				iLocal_1649 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				if (unk_0x0A059E0DB9253280(uParam0->f_166[0x00000000 /*189*/].f_9) && unk_0xE934758D273C899A(uParam0->f_166[0x00000000 /*189*/].f_9))
				{
					vLocal_1897 = { unk_0x68F4C0EC296D3901(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000001) };
					func_10(&iLocal_1703);
				}
				func_246(iLocal_1707, vLocal_1897);
			}
			if (func_107(&iLocal_1703) >= 1f)
			{
				iLocal_1649 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			func_11(&iLocal_1703);
			if (unk_0x9F4FE516EAACCFC5(iLocal_1706))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_1706, 0x00000000);
			}
			unk_0x82A772610883F395("MinigameTransitionIn", 0x00000000, 0x00000001);
			unk_0x10486C0590CF176C(iLocal_1707, 0x00000000);
			vLocal_1898 = { unk_0xD06724447386BC29(iLocal_1707) };
			vLocal_1899 = { unk_0x17D61C69BA58F815(iLocal_1707, 0x00000002) };
			iLocal_1706 = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_1898.x, vLocal_1898.y, (vLocal_1898.z + 1000f), 90f, vLocal_1899.y, vLocal_1899.z, fLocal_1900, 0x00000000, 0x00000002);
			unk_0xF1E4C781086FABC1(iLocal_1706, iLocal_1707, 0x000001F4, 0x00000001, 0x00000001);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
			iLocal_1649 = 0x00000006;
			break;
		
		case 0x00000006:
			if (!unk_0xFA06B985B30FB0FC(iLocal_1706) && !unk_0xFA06B985B30FB0FC(iLocal_1707))
			{
				if (uParam0->f_166[0x00000000 /*189*/].f_D <= Local_45.f_6A[Local_45.f_A])
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MEDAL_GOLD", "HUD_AWARDS", 0x00000001);
				}
				else if (uParam0->f_166[0x00000000 /*189*/].f_D <= (((Local_45.f_6A[Local_45.f_A] - Local_45.f_70[Local_45.f_A]) / 2f) + Local_45.f_70[Local_45.f_A]))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MEDAL_SILVER", "HUD_AWARDS", 0x00000001);
				}
				else if (uParam0->f_166[0x00000000 /*189*/].f_D <= Local_45.f_70[Local_45.f_A])
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MEDAL_BRONZE", "HUD_AWARDS", 0x00000001);
				}
				else
				{
					func_245(0x00000001);
				}
				iLocal_1649 = 0x00000007;
			}
			break;
		
		case 0x00000007:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
			}
			func_243(uParam0);
			func_66(&(Local_45.f_141), 0x00000001);
			func_11(&iLocal_1703);
			if (unk_0xDF1306B443CD3D15(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
			{
				sLocal_1892 = unk_0x04DF2A8CF5EBE3B0();
				unk_0x3E5CE368CD085FFA(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000);
			}
			iLocal_1649 = 0x00000008;
			break;
		
		case 0x00000008:
			if (func_242(uParam0))
			{
				iLocal_1649 = 0x00000009;
			}
			break;
		
		case 0x00000009:
			unk_0x82A772610883F395("MinigameTransitionOut", 0x00000000, 0x00000000);
			func_241(&iLocal_1708);
			func_237(0x00000001, 0x00000000);
			func_240(uParam0);
			func_16();
			func_237(0x00000000, 0x00000000);
			iLocal_1649 = 0x00000000;
			return 0x00000000;
			break;
	}
	func_432(uParam0, 0x00000000);
	return 0x00000001;
}

int func_240(var uParam0)
{
	if (uParam0->f_166[0x00000000 /*189*/].f_D <= Local_45.f_6A[Local_45.f_A])
	{
		unk_0x1E64CE678ED5F61E(&(Local_45.f_18[Local_45.f_A /*8*/]));
		return unk_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0x00000000, 0x0000006D, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_166[0x00000000 /*189*/].f_D <= (((Local_45.f_6A[Local_45.f_A] - Local_45.f_70[Local_45.f_A]) / 2f) + Local_45.f_70[Local_45.f_A]))
	{
		unk_0x1E64CE678ED5F61E(&(Local_45.f_18[Local_45.f_A /*8*/]));
		return unk_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0x00000000, 0x0000006C, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_166[0x00000000 /*189*/].f_D <= Local_45.f_70[Local_45.f_A])
	{
		unk_0x1E64CE678ED5F61E(&(Local_45.f_18[Local_45.f_A /*8*/]));
		return unk_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0x00000000, 0x0000006B, "HUD_MED_UNLKED");
	}
	return 0xFFFFFFFF;
}

void func_241(int iParam0)
{
	unk_0xE17FDF9E3068281B(iParam0);
	*iParam0 = 0x00000000;
}

int func_242(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_11.f_2)))
	{
		func_11(&(uParam0->f_11.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_11.f_2));
	}
	if (!iLocal_1668)
	{
		if (fVar0 > 1f)
		{
			iLocal_1668 = 0x00000001;
		}
	}
	if (!iLocal_1669)
	{
		if (fVar0 > 4.25f)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_11, "TRANSITION_OUT");
			unk_0x7C19E5E4784BD7CF(0.5f);
			unk_0x7E60D21B163E9D56();
			iLocal_1669 = 0x00000001;
		}
	}
	unk_0x6567AE843FADBA94(uParam0->f_11, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_11.f_2));
		iLocal_1668 = 0x00000000;
		iLocal_1669 = 0x00000000;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_243(var uParam0)
{
	char* sVar0;
	
	sVar0 = func_244(0x00000002);
	unk_0x7E60C62A7CE58FC8(uParam0->f_11, "RESET_MOVIE");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_11, sVar0);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x6B012227B3921E18("SPR_UI_PASS");
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39(&(Local_45.f_18[Local_45.f_A /*8*/]));
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(100f);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x7E60D21B163E9D56();
	uParam0->f_11.f_1 = 0x00001388;
	func_4(&(uParam0->f_11.f_2));
	iLocal_1668 = 0x00000000;
	iLocal_1669 = 0x00000000;
}

char* func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 0x00000001:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 0x00000002:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 0x00000003:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 0x00000004:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 0x00000005:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 0x00000006:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 0x00000007:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_245(bool bParam0)
{
	char* sVar0;
	
	unk_0x9CBC55A05A07FC47(0x00000000);
	switch (func_165())
	{
		case 0x00000000:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 0x00000001:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 0x00000002:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x3D0B5872F36FB05C(sVar0);
}

void func_246(int iParam0, vector3 vParam1)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (!unk_0x9F4FE516EAACCFC5(iParam0))
	{
		return;
	}
	if (!unk_0xFBB4F23D534EB790(iParam0))
	{
		return;
	}
	vVar1 = { unk_0x17D61C69BA58F815(iParam0, 0x00000002) };
	vVar2 = { unk_0xD06724447386BC29(iParam0) };
	vVar3 = { func_8(vVar1.x, vVar1.y, (vVar1.z + 90f)) };
	vVar4 = { vParam1 - vVar2 };
	vVar4 = { func_96(vVar4) };
	fVar5 = unk_0x5D8ABF6396A76564((vParam1.z - vVar2.z), unk_0x0EB28750412C3A5A(vParam1, vVar2, 0x00000000));
	fVar6 = unk_0xE7D606C557C86100((vParam1.x - vVar2.x), (vParam1.y - vVar2.y));
	fVar6 = func_248(fVar6, -180f, 180f);
	fVar0 = func_95(func_8(fVar5, vVar1.y, vVar1.z), vVar3);
	fVar7 = (fVar5 - vVar1.x);
	if (fVar7 > 270f)
	{
		fVar7 = (fVar7 - 360f);
	}
	else if (fVar7 < -270f)
	{
		fVar7 = (fVar7 + 360f);
	}
	fVar5 = (vVar1.x + fVar7);
	if ((bLocal_1896 && fVar5 > vVar1.x) || (!bLocal_1896 && fVar5 < vVar1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_1893 = (fLocal_1893 * 0.9f);
		vVar1.x = func_247(vVar1.x, fVar5, fLocal_1893);
	}
	fVar8 = (fVar6 - vVar1.z);
	if (fVar8 > 270f)
	{
		fVar8 = (fVar8 - 360f);
	}
	else if (fVar8 < -270f)
	{
		fVar8 = (fVar8 + 360f);
	}
	fVar6 = (vVar1.z + fVar8);
	if ((bLocal_1895 && (vVar1.z - fVar6) < 0f) || (!bLocal_1895 && (vVar1.z - fVar6) > 0f))
	{
		if (!bLocal_1895 && (vVar1.z - fVar6) > 0f)
		{
		}
		else if (bLocal_1895 && (vVar1.z - fVar6) < 0f)
		{
		}
		fLocal_1894 = (fLocal_1894 * 0.9f);
		vVar1.z = func_247(vVar1.z, fVar6, fLocal_1894);
	}
	unk_0x5F3CBA6EB9341C90(iParam0, vVar1, 0x00000002);
}

float func_247(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_248(float fParam0, float fParam1, float fParam2)
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

int func_249(int iParam0, float fParam1)
{
	if (func_2(iParam0, fParam1))
	{
		func_4(iParam0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_250(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	
	unk_0x61890296D3AA030F(unk_0x16F2683693E537C9(), &vVar0, &uVar6, &uVar6, &vVar1);
	vVar5 = { unk_0x17D61C69BA58F815(iParam0, 0x00000002) };
	vVar4 = { unk_0xD06724447386BC29(iParam0) };
	vVar2 = { func_8((vVar5.x + 90f), vVar5.y, vVar5.z) };
	vVar3 = { func_8(vVar5.x, vVar5.y, (vVar5.z + 90f)) };
	fLocal_1893 = 0.2f;
	fLocal_1894 = 0.5f;
	vVar7 = { unk_0xD06724447386BC29(iParam0) - vVar1 };
	vVar8 = { vVar1 + FtoV(func_95(vVar7, vVar0)) * vVar0 };
	if (vVar8.z > vVar4.z)
	{
		bLocal_1896 = 0x00000001;
	}
	else
	{
		bLocal_1896 = 0x00000000;
	}
	fVar9 = func_95(vVar8, vVar2);
	fVar10 = func_95(vVar8, vVar3);
	if (fVar9 < 0f)
	{
		bLocal_1895 = 0x00000001;
	}
	else
	{
		bLocal_1895 = 0x00000000;
	}
}

float func_251()
{
	switch (Local_45.f_A)
	{
		case 0x00000000:
			return 46.9415f;
			break;
		
		case 0x00000001:
			return 37.9558f;
			break;
		
		case 0x00000002:
			return 48.4122f;
			break;
		
		case 0x00000003:
			return 35.2464f;
			break;
		
		case 0x00000004:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_252()
{
	switch (Local_45.f_A)
	{
		case 0x00000000:
			return -7.5758f, 0f, 148.5448f;
			break;
		
		case 0x00000001:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		
		case 0x00000002:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		
		case 0x00000003:
			return -1.3523f, 0f, 0.0891f;
			break;
		
		case 0x00000004:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_253()
{
	unk_0x486B4ADE317F0689();
	if (unk_0xBD054C76E6F4158B(uLocal_1936))
	{
		unk_0x51F8DBE54C75AE47(uLocal_1936);
	}
}

void func_254()
{
	unk_0xC2127C0F64D6A3B9();
	func_255();
}

void func_255()
{
	Global_56C3.f_86 = 0x00000001;
}

void func_256(int iParam0)
{
	if (Global_A1D7 == 0x00000009 || Global_A1D7 == 0x0000000A)
	{
		Global_1AED0 = iParam0;
	}
	else
	{
		Global_1AED0 = 0x00000000;
	}
}

void func_257(bool bParam0)
{
	unk_0xF3039DE1FDB4F6FD(!bParam0);
}

void func_258()
{
	func_259();
	unk_0xF3039DE1FDB4F6FD(0x00000001);
}

void func_259()
{
	Local_1929 = 0x00000000;
	Local_1929.f_1 = 0x00000000;
	Local_1929.f_2 = { 0f, 0f, 0f };
	Local_1929.f_6 = 0x00000000;
	Local_1929.f_5 = 0f;
}

bool func_260(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_261(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 0x00000010);
	}
	else
	{
		func_155(&(uParam0->f_1), 0x00000010);
	}
}

int func_262(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0x00000000)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0x00000000;
	uParam0->f_7B = 0x00000000;
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 0x00000020);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_156(&(uParam0->f_1), 0x00000001);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 0x00000001);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_156(&(uParam0->f_1), 0x00001000);
		}
	}
	if (bParam4)
	{
		func_156(&(uParam0->f_1), 0x00002000);
	}
}

void func_264(var uParam0)
{
	func_265(uParam0);
	SYSTEM::SETTIMERA(0x00000000);
	func_237(0x00000001, 0x00000000);
	func_16();
}

void func_265(var uParam0)
{
	func_302(&(uParam0->f_74F));
	func_280(&(uParam0->f_74F.f_2E5));
	func_266(&(uParam0->f_74F));
}

void func_266(var uParam0)
{
	func_279(&(uParam0->f_13C[0x00000000 /*2*/]), 254f, 74f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000001 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 127f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000002 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 297f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000003 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 324f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000004 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 351f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000005 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 378f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000006 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 405f, 0x00000001);
	func_279(&(uParam0->f_13C[0x0000000B /*2*/]), 257f, 297f, 0x00000001);
	func_279(&(uParam0->f_13C[0x0000000C /*2*/]), 257f, 324f, 0x00000001);
	func_279(&(uParam0->f_13C[0x0000000D /*2*/]), 257f, 351f, 0x00000001);
	func_279(&(uParam0->f_13C[0x0000000E /*2*/]), 257f, 378f, 0x00000001);
	func_279(&(uParam0->f_13C[0x0000000F /*2*/]), 257f, 405f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000012 /*2*/]), 298f, 567f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000011 /*2*/]), 384f, 567f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000010 /*2*/]), 470f, 567f, 0x00000001);
	func_275(uParam0[0x00000000 /*9*/], 208f, 55f, 864f, 570f, 0x00000001);
	func_274(uParam0[0x00000000 /*9*/], 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
	func_275(uParam0[0x00000002 /*9*/], 384f, 224f, 256f, 256f, 0x00000000);
	func_274(uParam0[0x00000002 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000003 /*9*/], 495f, 306f, 32f, 32f, 0x00000000);
	func_274(uParam0[0x00000003 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000006 /*9*/], 258.5f, 482.5f, 80f, 80f, 0x00000001);
	func_274(uParam0[0x00000006 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000005 /*9*/], 344f, 482.5f, 80f, 80f, 0x00000001);
	func_274(uParam0[0x00000005 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000004 /*9*/], 429.5f, 482.5f, 80f, 80f, 0x00000001);
	func_274(uParam0[0x00000004 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_269(&(uParam0->f_1A4[0x00000001 /*8*/]), 257f, 119f, 254f, 5f, 0x00000001);
	func_268(&(uParam0->f_1A4[0x00000001 /*8*/]), 0x00000046, 0x00000046, 0x00000082, 0x000000FF);
	func_269(&(uParam0->f_1A4[0x00000000 /*8*/]), 257f, 124f, 254f, 25f, 0x00000001);
	func_268(&(uParam0->f_1A4[0x00000000 /*8*/]), 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_269(&(uParam0->f_1A4[0x00000002 /*8*/]), 257f, 159f, 254f, 133f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000002 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000003 /*8*/]), 257f, 294f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000003 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000004 /*8*/]), 257f, 321f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000004 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000005 /*8*/]), 257f, 348f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000005 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000006 /*8*/]), 257f, 375f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000006 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000007 /*8*/]), 257f, 402f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000007 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000008 /*8*/]), 257f, 429f, 254f, 52f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000008 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000B /*8*/]), 257f, 483f, 83f, 84f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000B /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000C /*8*/]), 342f, 483f, 84f, 84f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000C /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000D /*8*/]), 428f, 483f, 83f, 84f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000D /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000E /*8*/]), 428f, 564f, 83f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000E /*8*/]), 0x0000006B, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000F /*8*/]), 342f, 564f, 84f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000F /*8*/]), 0x0000006C, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000010 /*8*/]), 257f, 564f, 83f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000010 /*8*/]), 0x0000006D, 0x00000001);
	uParam0->f_3DA = 0x00000001;
}

void func_267(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_268(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_269(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_273(uParam0, fParam3, fParam4);
	func_270(uParam0, fParam1, fParam2, bParam5);
}

void func_270(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 0x00000500);
	uParam0->f_1 = func_271(fParam2, 0x000002D0);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_271(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0x00000000)
	{
		unk_0x8A462DAA7D1D9008(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_272(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0x00000000)
	{
		unk_0x8A462DAA7D1D9008(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_273(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_272(fParam1, 0x00000500);
	uParam0->f_3 = func_271(fParam2, 0x000002D0);
}

void func_274(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_275(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_277(fParam0, fParam3, fParam4);
	func_276(fParam0, fParam1, fParam2, bParam5);
}

void func_276(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 0x00000500);
	uParam0->f_1 = func_271(fParam2, 0x000002D0);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_277(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_272(fParam1, 0x00000500);
	uParam0->f_3 = func_271(fParam2, 0x000002D0);
}

float func_278(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0x00000000)
	{
		unk_0x8A462DAA7D1D9008(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_279(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 0x00000500);
	uParam0->f_1 = func_271(fParam2, 0x000002D0);
	if (!bParam3)
	{
	}
}

void func_280(var uParam0)
{
	func_301(uParam0, 0x00000000);
	func_300(&(uParam0->f_B), 0x00000000);
	func_299(&(uParam0->f_42), 0x00000000);
	func_298(&(uParam0->f_4D), 0x00000000);
	func_297(&(uParam0->f_21), 0x00000000);
	func_296(&(uParam0->f_2C), 0x00000000);
	func_295(&(uParam0->f_37), 0x00000000);
	func_294(&(uParam0->f_8F), 0x00000000);
	func_293(&(uParam0->f_16), 0x00000000);
	func_292(&(uParam0->f_9A), 0x00000000);
	func_291(&(uParam0->f_58), 0x00000000, 0x00000000);
	func_290(&(uParam0->f_63), 0x00000000, 0x00000005);
	func_289(&(uParam0->f_6E), 0x00000000);
	func_288(&(uParam0->f_79), 0x00000000);
	func_287(&(uParam0->f_84), 0x00000000);
	func_286(&(uParam0->f_A5), 0x00000000);
	func_285(&(uParam0->f_B0), 0x00000000);
	func_284(&(uParam0->f_BB), 0x00000000);
	func_283(&(uParam0->f_C6), 0x00000000);
	func_282(&(uParam0->f_D1), 0x00000000);
	func_281(&(uParam0->f_DC), 0x00000000);
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = 0x00000004;
	uParam0->f_1 = 0.45f;
	uParam0->f_2 = 0.45f;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x0000001D;
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.275f;
	uParam0->f_2 = 0.275f;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x0000001C;
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.3375f;
	uParam0->f_2 = 0.3375f;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x0000001B;
}

void func_284(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.35f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x0000001A;
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.325f;
	uParam0->f_2 = 0.325f;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000019;
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.6f;
	uParam0->f_2 = 0.6f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000018;
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x0000000F;
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f);
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x0000000D;
}

void func_289(var uParam0, int iParam1)
{
	*uParam0 = 0x00000005;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.628f - 0.18f) - 0.058f);
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x0000000C;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.889f - 0.01f);
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x0000000A;
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000009;
}

void func_292(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000017;
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.383f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000002;
}

void func_294(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.368f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000016;
}

void func_295(var uParam0, int iParam1)
{
	*uParam0 = 0x00000004;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.485f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000005;
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000004;
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.409f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000003;
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.655f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000008;
}

void func_299(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.628f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000007;
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.346f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000001;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.781f;
	uParam0->f_3 = 0x000000FF;
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 0x00000000;
}

void func_302(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0x00000000;
		(uParam0[iVar0 /*9*/])->f_5 = 0x00000000;
		(uParam0[iVar0 /*9*/])->f_6 = 0x00000000;
		(uParam0[iVar0 /*9*/])->f_7 = 0x00000000;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_303(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_304(int iParam0)
{
	func_309();
	switch (iLocal_1935)
	{
		case 0x00000000:
			func_10(iParam0);
			func_308(&iLocal_1930, 0x00000003);
			iLocal_1935 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_2(iParam0, 1f))
			{
				func_305(&iLocal_1930, 0x00000001, 0x00000000, 0x00000001, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
				iLocal_1935 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_305(&iLocal_1930, 0x00000000, 0x00000000, 0x00000001, 0x00000003, 0x00000001, 0x00000000, 0x00000000))
			{
				return 0x00000000;
			}
			break;
			return 0x00000001;
	}
	return 0x00000001;
}

int func_305(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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
		func_307(&(uParam0->f_2), 0x00000001);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	unk_0xEF45C43067063F18(*uParam0, 0.5f, 0.5f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000064, 0x00000000);
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
		if (func_3(&(uParam0->f_2)))
		{
			if (func_7(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_6(0x00000001) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(uParam0->f_2));
					if (func_362(uParam0->f_1, 0x00000001))
					{
						func_334(&(uParam0->f_1), 0x00000008);
						unk_0xA402F6C87C08815C(0x00000012, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
						func_158("CNTDWN_GO");
						unk_0x3CAEA85DA607305E(iVar5);
						unk_0x3CAEA85DA607305E(iVar6);
						unk_0x3CAEA85DA607305E(iVar7);
						unk_0x1200CC973A2399C8(0x00000001);
						unk_0x7E60D21B163E9D56();
						return 0x00000001;
					}
					func_11(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(func_5(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = 0x00000000;
	if (!func_362(uParam0->f_1, 0x00000008))
	{
		if (iVar9 >= 0xFFFFFFFD && !func_362(uParam0->f_1, 0x00000001))
		{
			func_334(&(uParam0->f_1), 0x00000001);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFE && !func_362(uParam0->f_1, 0x00000002))
		{
			func_334(&(uParam0->f_1), 0x00000002);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFF && !func_362(uParam0->f_1, 0x00000004))
		{
			func_334(&(uParam0->f_1), 0x00000004);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFF && !func_362(uParam0->f_1, 0x00000010))
		{
			if (unk_0x755FF954DAE327E1((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_334(&(uParam0->f_1), 0x00000010);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar1, sVar2, 0x00000001);
				}
			}
		}
		else if (iVar9 >= 0x00000000 && !func_362(uParam0->f_1, 0x00000008))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar1, sVar2, 0x00000001);
			}
			func_334(&(uParam0->f_1), 0x00000008);
			unk_0xA402F6C87C08815C(0x00000012, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
			func_158("CNTDWN_GO");
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
	if ((iParam2 && func_306()) || iVar4 > 0x00000005)
	{
		bVar10 = 0x00000001;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0x00000000;
			func_4(&(uParam0->f_2));
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_306()
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

void func_307(int iParam0, bool bParam1)
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

void func_308(var uParam0, int iParam1)
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

void func_309()
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_1B04C;
	func_310(Var0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar1);
}

void func_310(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_12C4C != 0x00000006)
	{
		if (Global_12C4E == 0xFFFFFFFF)
		{
			if (func_324(0x00000001, Param0))
			{
				if (Global_12C4F == 0x00000003)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_12C4E = unk_0x1C0640BA9A7327B3();
					vLocal_30 = { unk_0x96792D8393A779D7(0x0000000F) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + unk_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_324(0x00000000, Param0))
			{
				Global_12C4E = (unk_0x1C0640BA9A7327B3() - 0x00002328);
			}
			unk_0x3584F71E5CA29322(0x00000007);
			unk_0x3584F71E5CA29322(0x00000006);
			unk_0x3584F71E5CA29322(0x00000008);
			unk_0x3584F71E5CA29322(0x00000009);
			iVar1 = (unk_0x1C0640BA9A7327B3() - Global_12C4E);
			if (iVar1 < 0x00002328 && !unk_0x757EF87A33649210())
			{
				iVar2 = 0x000000FF;
				if (iVar1 < 0x000003E8)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (0x00002328 - iVar1);
					if (iVar3 < 0x000003E8)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_12C4C)
				{
					case 0x00000003:
					case 0x00000005:
						if (iParam1 == 0x00000001)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 0x00000001)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 0x00000001)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 0x00000001)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
				unk_0x7BBAC160090910C3(0x00000001);
				unk_0xEEF67251E263A87F(0x00000002);
				iVar11 = func_165();
				if (Global_12C4F == 0x00000001 && Global_12C4D == 0x0000003E)
				{
					iVar11 = Global_1B416.f_936.f_21B.f_10E2;
				}
				switch (iVar11)
				{
					case 0x00000000:
						unk_0xA402F6C87C08815C(0x0000008F, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 0x00000001:
						unk_0xA402F6C87C08815C(0x00000090, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 0x00000002:
						unk_0xA402F6C87C08815C(0x00000091, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 0x000000F0;
						iVar8 = 0x000000C8;
						iVar9 = 0x00000050;
				}
				unk_0x7178F32F6742C936(iVar7, iVar8, iVar9, iVar2);
				unk_0xC8CFC125861F0537();
				Var4 = { func_313(Global_12C4D, Global_12C4F, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0x75BBE9A62B73769F(fVar5, fVar6, 0f, 0.01f);
				unk_0xD3539A877EC25E86(0.67f, 0.67f);
				if (!unk_0x0D71AFA59EF5104F() && !unk_0x0DF32524CC9DB3EB())
				{
					fLocal_32 = 0.14f;
				}
				else
				{
					fLocal_32 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_312(&Var4) > fLocal_32)
					{
						if (unk_0x2F1FB0453B36C270(0x0000000F))
						{
							unk_0x744B56EE9DE7B57F(0x0000000F, vLocal_30.x, (vLocal_30.y + fLocal_31));
							Global_12C51 = 0x00000001;
						}
					}
				}
				unk_0x070005E852D4C0E9(&Var4);
				unk_0xE0026608C37C7C41(fVar5, fVar6, 0x00000000);
				unk_0xD59EF13BB60323B9();
				if (Global_12C50 == 0x00000001)
				{
					func_311();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_311();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_311()
{
	if (Global_12C4C != 0x00000006)
	{
	}
	if (Global_12C51)
	{
		unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
		Global_12C51 = 0x00000000;
		Global_574E.f_20E1 = 0x00000000;
	}
	Global_12C4C = 0x00000006;
	Global_12C4E = 0xFFFFFFFF;
	Global_12C4D = 0xFFFFFFFF;
}

float func_312(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

struct<2> func_313(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 0x00000001:
			Var0 = { func_323(iParam0) };
			break;
		
		case 0x00000007:
			Var0 = { func_321(iParam0) };
			break;
		
		case 0x00000003:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0x00000000:
					Var0 = { func_320(iParam2) };
					break;
				
				case 0x00000008:
					Var0 = { func_319(iParam2) };
					break;
				
				case 0x00000007:
					Var0 = { func_318(iParam2) };
					break;
				
				case 0x0000000A:
					Var0 = { func_317(iParam2) };
					break;
				
				case 0x00000005:
					Var0 = { func_316(iParam2) };
					break;
				
				case 0x00000004:
					Var0 = { func_315(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_314(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MG_BJUM";
			break;
		
		case 0x00000001:
			return "MG_DART";
			break;
		
		case 0x00000002:
			return "MG_GOLF";
			break;
		
		case 0x00000003:
			return "MG_HUNT";
			break;
		
		case 0x00000004:
			return "MG_OFFR";
			break;
		
		case 0x00000005:
			return "MG_PILO";
			break;
		
		case 0x00000006:
			return "MG_RMPG";
			break;
		
		case 0x00000007:
			return "MG_SERA";
			break;
		
		case 0x00000008:
			return "MG_SRAC";
			break;
		
		case 0x00000009:
			return "MG_STRP";
			break;
		
		case 0x0000000A:
			return "MG_STNT";
			break;
		
		case 0x0000000B:
			return "MG_SHTR";
			break;
		
		case 0x0000000C:
			return "MG_TAXI";
			break;
		
		case 0x0000000D:
			return "MG_TENN";
			break;
		
		case 0x0000000E:
			return "MG_TOWI";
			break;
		
		case 0x0000000F:
			return "MG_TRFA";
			break;
		
		case 0x00000010:
			return "MG_TRFG";
			break;
		
		case 0x00000011:
			return "MG_TRIA";
			break;
		
		case 0x00000012:
			return "MG_YOGA";
			break;
		
		case 0x00000013:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_315(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_316(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_317(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_318(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_319(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1) || iParam0 == 0x00000003)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_320(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_321(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_322(iParam0) };
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

struct<2> func_322(int iParam0)
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

struct<2> func_323(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_15DBC[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 0x0000005A)
	{
		switch (Global_1B416.f_2378.f_63.f_CD[0x00000007])
		{
			case 0x00000001:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 0x00000002:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_324(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_326(0x00000000) || Global_12C5B) || Global_12C50 == 0x00000001) || !unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	switch (Global_12C4C)
	{
		case 0x00000000:
			if (unk_0x7F8A39872A07D2CE(&uParam1, "NONE") || unk_0xEA6BC48857E0AC4C(&uParam1))
			{
				Global_12C4C = 0x00000003;
			}
			else
			{
				Global_12C4C = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0x62A1F4500E8F07E0())
			{
				Global_12C4C = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (unk_0x22A8E52414415B76())
			{
				Global_12C4C = 0x00000004;
				return 0x00000001;
			}
			else if (!unk_0x39B7A3CCD2467CAB())
			{
				Global_12C4C = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (unk_0x22A8E52414415B76())
			{
			}
			else
			{
				Global_12C4C = 0x00000005;
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (unk_0x22A8E52414415B76())
			{
				return 0x00000001;
			}
			else if (iParam0 == 0x00000001)
			{
				Global_12C4C = 0x00000005;
			}
			break;
		
		case 0x00000005:
			if ((unk_0x22A8E52414415B76() || func_143(0x00000000)) || func_325(0x00000001))
			{
			}
			else
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

bool func_325(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_326(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_327(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_327(int iParam0)
{
	return func_328(iParam0, Global_A1D7);
}

int func_328(int iParam0, int iParam1)
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

void func_329(var uParam0)
{
	char cVar0[16];
	int iVar1;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_45.f_A + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_166[0x00000000 /*189*/].f_F = 0f;
	iLocal_1722 = 0x00000000;
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	if (Local_45 == 0x00000000)
	{
		unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
	}
	uParam0->f_1 = 0x00000001;
	func_11(&iLocal_2025);
	iVar1 = 0x00000000;
	while (iVar1 < uParam0->f_D)
	{
		func_330(&(uParam0->f_166[iVar1 /*189*/]));
		if (Local_45 != 0x00000001)
		{
			if (iVar1 != 0x00000000)
			{
				func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
			}
		}
		else if (bLocal_2033)
		{
			if (iVar1 > 0x00000000)
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_166[iVar1 /*189*/].f_8, 0x00000000) && !unk_0x437347B10A200C4B(uParam0->f_166[iVar1 /*189*/].f_9, 0x00000000))
				{
					if (iVar1 == 0x00000001 && Local_45.f_A == 0x00000000)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0x1B901F542DF070CF(uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, &cVar0, 0x00040000, 0x00000000, 0x00000008, 0xFFFFFFFF, unk_0xD890711CFD5AF100(uParam0->f_166[iVar1 /*189*/].f_9), 0x00000000, 2f);
				}
			}
		}
		else if (iVar1 != 0x00000000)
		{
			func_76(uParam0, uParam0->f_166[iVar1 /*189*/].f_8, uParam0->f_166[iVar1 /*189*/].f_9, uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/], uParam0->f_1B[uParam0->f_166[iVar1 /*189*/].f_B /*10*/].f_7, iVar1);
		}
		iVar1++;
	}
	if (unk_0xDF1306B443CD3D15(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000))
	{
		unk_0x3E5CE368CD085FFA(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000001);
		if (!unk_0xEA6BC48857E0AC4C(sLocal_1892))
		{
			unk_0xA6C13961116F9033(sLocal_1892);
			unk_0x3CBF2C83A68C1611(uParam0->f_166[0x00000000 /*189*/].f_9, sLocal_1892);
		}
	}
}

void func_330(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_8, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(uParam0->f_9))
			{
				unk_0xC55F2A0377488064(uParam0->f_9);
			}
			unk_0x11AD11297DC58CC7(uParam0->f_8, 0x00000001);
		}
	}
	uParam0->f_B = 0x00000000;
	if (!unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000))
	{
		if (!unk_0x7D8B2A8F9EA82DB7(uParam0->f_16))
		{
			unk_0x56FDC9ADE35F7DB0(uParam0->f_9, 0x00000001, 0x00000001, 0x00000000);
		}
	}
}

int func_331()
{
	return unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_332(var uParam0)
{
	uParam0->f_C = uParam0->f_C;
}

void func_333(var uParam0)
{
	int iVar0;
	
	if (unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000200);
	}
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		func_108(&(uParam0->f_166[iVar0 /*189*/]), 60f, 0x00000001);
		iVar0++;
	}
}

void func_334(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_335(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (iParam1 < 0x00000000 || iParam1 > 0x00000020)
	{
		return 0x00000000;
	}
	iVar1 = 0xFFFFFFFF;
	if (iParam1 == (uParam0->f_C - 0x00000001))
	{
		iVar1 = 0x00000026;
	}
	fVar2 = 1.2f;
	if (!bParam2)
	{
		fVar2 = 0.7f;
	}
	if (!func_341(&(uParam0->f_1B[iParam1 /*10*/]), iVar1, fVar2, iParam1, uParam0->f_C))
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		vVar3 = { uParam0->f_1B[iParam1 /*10*/] };
		vVar4 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_C - 0x00000001))
		{
			if (!func_73(uParam0->f_1B[iParam1 /*10*/], uParam0->f_1B[iParam1 + 1 /*10*/], 0x3F000000, 0x00000000))
			{
				vVar3 = { uParam0->f_1B[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_45 == 0x00000001)
		{
			if (Local_45.f_A == 0x00000001)
			{
				if (func_362(uParam0->f_1B[0x00000008 /*10*/].f_9, 0x00000004))
				{
					func_360(&(uParam0->f_1B[0x00000008 /*10*/].f_9), 0x00000004);
				}
			}
		}
		if (iParam1 > 0x00000000)
		{
			vVar4 = { uParam0->f_1B[(iParam1 - 0x00000001) /*10*/] };
		}
		if (!func_336(vVar4, &(uParam0->f_1B[iParam1 /*10*/]), vVar3, 16f))
		{
			return 0x00000000;
		}
		if (iParam1 + 1 < uParam0->f_C)
		{
			if (iParam1 + 2 >= 0x00000021)
			{
				vVar0 = { uParam0->f_1B[0x00000000 /*10*/] };
			}
			else
			{
				vVar0 = { uParam0->f_1B[iParam1 + 2 /*10*/] };
			}
			if (!func_336(uParam0->f_1B[iParam1 /*10*/], &(uParam0->f_1B[iParam1 + 1 /*10*/]), vVar0, 16f))
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000001;
}

int func_336(vector3 vParam0, var uParam1, vector3 vParam2, float fParam3)
{
	if (!func_337(vParam0, uParam1, vParam2, fParam3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_337(vector3 vParam0, var uParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	vParam0 = { vParam0 };
	func_80(&(uParam1->f_6));
	if (uParam1->f_7 == 0x00000002)
	{
		iVar0 = func_339(uParam1->f_7, vParam0, *uParam1, vParam2);
		func_584(func_585(func_92()), &iVar1, &iVar2, &iVar3, &uVar4);
		uParam1->f_6 = unk_0x1B26E47E3E30075B(iVar0, *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 0x00000019, 0x000000C8), 0x00000000);
	}
	else if (uParam1->f_7 == 0x00000003)
	{
		if (uParam1->f_8 == 0x00000002 || uParam1->f_8 == 0x00000003)
		{
			func_584(func_585(0x00000012), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = unk_0x1B26E47E3E30075B(func_338(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 0x00000019, 0x000000C8), 0x00000000);
		}
		else if (uParam1->f_8 == 0x00000001)
		{
			func_584(func_585(0x00000009), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = unk_0x1B26E47E3E30075B(func_338(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 0x00000019, 0x000000C8), 0x00000000);
		}
	}
	else
	{
		uParam1->f_6 = unk_0x1B26E47E3E30075B(func_338(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, 0x000000FE, 0x000000CF, 0x0000000C, func_91(*uParam1, 0x00000019, 0x000000C8), 0x00000000);
	}
	if (uParam1->f_6 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000006;
			break;
		
		case 0x00000001:
			return 0x0000000A;
			break;
		
		case 0x00000002:
			return 0x00000025;
			break;
		
		case 0x00000003:
			if (iParam1 == 0x00000002)
			{
				return 0x00000026;
			}
			else if (iParam1 == 0x00000003)
			{
				return 0x00000027;
			}
			else if (iParam1 == 0x00000001)
			{
				return 0x00000028;
			}
			break;
		
		case 0x00000004:
			return 0x00000010;
			break;
		
		case 0x00000005:
			return 0x0000001B;
			break;
		
		case 0x00000006:
			return 0x00000020;
			break;
		
		case 0x00000007:
			return 0x00000016;
			break;
		
		case 0x00000008:
			return 0x0000001A;
			break;
		
		case 0x00000009:
			return 0x0000001F;
			break;
		
		case 0x0000000A:
			return 0x00000024;
			break;
	}
	return 0x00000006;
}

int func_339(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	fVar3 = 180f;
	fVar4 = 140f;
	fVar5 = 80f;
	if (iParam0 == 0x00000000)
	{
		iVar6 = 0x00000006;
		iVar7 = 0x00000007;
		iVar8 = 0x00000008;
	}
	else if (iParam0 == 0x00000002)
	{
		iVar6 = 0x0000000C;
		iVar7 = 0x0000000D;
		iVar8 = 0x0000000E;
	}
	else if (iParam0 == 0x00000005)
	{
		iVar6 = 0x0000001B;
		iVar7 = 0x0000001C;
		iVar8 = 0x0000001D;
	}
	else if (iParam0 == 0x00000006)
	{
		iVar6 = 0x00000020;
		iVar7 = 0x00000021;
		iVar8 = 0x00000022;
	}
	else if (iParam0 == 0x00000007)
	{
		iVar6 = 0x00000016;
		iVar7 = 0x00000017;
		iVar8 = 0x00000018;
	}
	if (!func_340(vParam1, 0f, 0f, 0f, 0x00000000))
	{
		vVar0 = { vParam1 - vParam2 };
		vVar1 = { vParam3 - vParam2 };
		fVar2 = unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar1.x, vVar1.y);
		if (fVar2 > 180f)
		{
			fVar2 = (360f - fVar2);
		}
		if (fVar2 < fVar5)
		{
			return iVar8;
		}
		else if (fVar2 < fVar4)
		{
			return iVar7;
		}
		else if (fVar2 < fVar3)
		{
			return iVar6;
		}
	}
	return iVar6;
}

bool func_340(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_341(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_342(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_342(int iParam0, vector3 vParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(iParam0);
	*iParam0 = unk_0x6CC513A908911CF0(vParam1);
	if (!unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		return 0x00000000;
	}
	if (iParam2 != 0xFFFFFFFF)
	{
		unk_0xBC8E0A7390523199(*iParam0, iParam2);
	}
	unk_0x516E63E474722206(*iParam0, fParam3);
	unk_0x9D7CDDB4B55142AF(*iParam0, 0x00000004);
	if (iParam6 == 0x00000002 || iParam6 == 0x00000003)
	{
		unk_0x61755AC17D8F538E(*iParam0, 0x00000002);
	}
	if (iParam6 == 0x00000001)
	{
		unk_0x61755AC17D8F538E(*iParam0, 0x00000003);
	}
	if (iParam4 == (iParam5 - 0x00000001))
	{
		unk_0x64399B11CDD5A727("GATEBLIPFIN");
		unk_0x4FA118D51B4F2476(*iParam0);
	}
	else
	{
		if (iParam6 == 0x00000001)
		{
			unk_0x64399B11CDD5A727("GATEBLIPINV");
		}
		else if (iParam6 == 0x00000002 || iParam6 == 0x00000003)
		{
			unk_0x64399B11CDD5A727("GATEBLIPKNF");
		}
		else
		{
			unk_0x64399B11CDD5A727("GATEBLIPDEF");
		}
		unk_0x4FA118D51B4F2476(*iParam0);
	}
	return 0x00000001;
}

void func_343(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000000);
}

int func_344(var uParam0)
{
	switch (uParam0->f_19)
	{
		case 0x00000000:
			func_137(0x00000001);
			unk_0x0D3BE1DE0262A012("MPHUD", 0x00000000);
			Local_45.f_76 = func_357();
			switch (Local_45)
			{
				case 0x00000000:
					unk_0x0D3BE1DE0262A012("SPRRaces", 0x00000000);
					unk_0x0D3BE1DE0262A012("MPMedals_FEED", 0x00000000);
					break;
				
				case 0x00000001:
					unk_0x0D3BE1DE0262A012("SPROffroad", 0x00000000);
					break;
				
				case 0x00000002:
					unk_0x0D3BE1DE0262A012("Triathlon", 0x00000000);
					unk_0x0D3BE1DE0262A012("MPMedals_FEED", 0x00000000);
					break;
			}
			uParam0->f_19 = 0x00000001;
			break;
		
		case 0x00000001:
			func_352(uParam0);
			uParam0->f_19 = 0x00000002;
			break;
		
		case 0x00000002:
			if (func_347(uParam0))
			{
				if (unk_0x27117E2CDD4D67C3("MPHUD"))
				{
					if (unk_0x83D8570832F172A7(Local_45.f_76))
					{
						switch (Local_45)
						{
							case 0x00000000:
								if (unk_0x27117E2CDD4D67C3("SPRRaces") && unk_0x27117E2CDD4D67C3("MPMedals_FEED"))
								{
									uParam0->f_19 = 0x00000003;
								}
								break;
							
							case 0x00000001:
								if (unk_0x27117E2CDD4D67C3("SPROffroad"))
								{
									uParam0->f_19 = 0x00000003;
								}
								break;
							
							case 0x00000002:
								if (unk_0x27117E2CDD4D67C3("Triathlon") && unk_0x27117E2CDD4D67C3("MPMedals_FEED"))
								{
									uParam0->f_19 = 0x00000003;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 0x00000003:
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			if (Local_45.f_A == 0x00000000 && !uParam0->f_2)
			{
			}
			else
			{
				func_345(uParam0);
			}
			uParam0->f_19 = 0x00000004;
			break;
		
		case 0x00000004:
			if (Local_45.f_A == 0x00000000)
			{
				return 0x00000000;
			}
			else
			{
				if (unk_0xC844350D5D58C99A(uParam0->f_166[0x00000000 /*189*/].f_9))
				{
					unk_0x1E9649458B15960F(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000001);
				}
				if (!unk_0xEB880D98B5988D0C())
				{
					unk_0x5CDCBCDA2C651E97(uParam0->f_166[0x00000000 /*189*/].f_10);
					unk_0xD67D6A3F0D653D93(uParam0->f_166[0x00000000 /*189*/].f_10, unk_0x08D89CE2E20AE305(uParam0->f_166[0x00000000 /*189*/].f_9), 5000f, 0x00000000);
				}
				if (unk_0x68367101660E33F0())
				{
					unk_0x486B4ADE317F0689();
					if (unk_0xC844350D5D58C99A(uParam0->f_166[0x00000000 /*189*/].f_9))
					{
						unk_0x1E9649458B15960F(uParam0->f_166[0x00000000 /*189*/].f_9, 0x00000000);
					}
					func_333(uParam0);
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_345(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		if (!func_346(uParam0, iVar0))
		{
			iVar1 = 0x00000000;
		}
		iVar0++;
	}
	return iVar1;
}

int func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000007)
	{
		return 0x00000000;
	}
	if (iParam1 > 0x00000000)
	{
		return func_133(&(uParam0->f_166[iParam1 /*189*/]), 0x00000001);
	}
	return func_133(&(uParam0->f_166[iParam1 /*189*/]), 0x00000000);
}

int func_347(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		if (!func_348(uParam0, iVar0))
		{
			iVar1 = 0x00000000;
		}
		iVar0++;
	}
	return iVar1;
}

int func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000007)
	{
		return 0x00000000;
	}
	return func_349(&(uParam0->f_166[iParam1 /*189*/]));
}

int func_349(var uParam0)
{
	if (!func_351(uParam0) || !func_350(uParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_350(var uParam0)
{
	if (uParam0->f_16 == 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xB87F6CF6E5628C67(uParam0->f_16);
}

bool func_351(var uParam0)
{
	if (uParam0->f_15 == 0x00000000)
	{
		return 0x00000000;
	}
	return unk_0xB87F6CF6E5628C67(uParam0->f_15);
}

void func_352(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		func_353(uParam0, iVar0);
		iVar0++;
	}
}

void func_353(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000007)
	{
		return;
	}
	func_354(&(uParam0->f_166[iParam1 /*189*/]));
}

void func_354(var uParam0)
{
	func_356(uParam0);
	func_355(uParam0);
}

void func_355(var uParam0)
{
	if (uParam0->f_16 == 0x00000000)
	{
		return;
	}
	unk_0x523BCC9DC80CD82F(uParam0->f_16);
}

void func_356(var uParam0)
{
	if (uParam0->f_15 == 0x00000000)
	{
		return;
	}
	unk_0x523BCC9DC80CD82F(uParam0->f_15);
}

int func_357()
{
	return unk_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

int func_358(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		unk_0x53491B90E4FD0E56(iParam0);
	}
	else if (unk_0x757EF87A33649210())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_359()
{
	if (unk_0x9F4FE516EAACCFC5(iLocal_1706))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_1706))
		{
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0xE3BB8E05FCEB3FBE(iLocal_1706, 0x00000000);
		}
		unk_0x9A8DDC7C522F5BF5(iLocal_1706, 0x00000000);
	}
}

void func_360(int iParam0, int iParam1)
{
	func_361(iParam0, iParam1);
}

void func_361(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_362(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0x00000000;
}

void func_363(int iParam0)
{
	if (!func_3(iParam0))
	{
		func_11(iParam0);
	}
}

void func_364()
{
	func_365(&uLocal_1210, 0x00000000);
}

void func_365(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0x00000000)
	{
		func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if ((((*uParam0)[0x00000000] != 0x00000000 || (*uParam0)[0x00000001] != 0x00000000) || (*uParam0)[0x00000002] != 0x00000000) || iParam1 == 0x00000001)
	{
		func_431(uParam0);
		func_370(uParam0);
		func_369(&Global_1C126B);
	}
	if (Global_1C0180.f_A94 != 0x00000000 || Global_1C0180.f_C70)
	{
		func_367();
	}
	if (unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		unk_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (unk_0x58424C49F8924842())
	{
		func_366(&(Global_1C171C.f_31));
	}
	Global_26B66F.f_F7F = 0x00000000;
}

void func_366(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_367()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_3C = 0x00000006;
	Var2.f_43 = 0x00000006;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			Global_1C0180[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1C0180.f_A90[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_1C0180.f_A94 = 0x00000000;
	Global_1C0180.f_A95 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		Global_1C0180.f_A96[iVar0] = 0x00000000;
		StringCopy(&(Global_1C0180.f_A9D[iVar0 /*6*/]), "", 24);
		Global_1C0180.f_AC2[iVar0] = 0x00000000;
		Global_1C0180.f_AC9[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_1C0180.f_AD0 = 0x00000000;
	Global_1C0180.f_AD1 = 0x00000000;
	Global_1C0180.f_AD2 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1C0180.f_AD3[iVar0] = 0x00000000;
		Global_1C0180.f_AD7[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_1C0180.f_ADB = 0x00000000;
	func_368(&(Global_1C0180.f_ADC));
	func_366(&(Global_1C0180.f_B07));
	Global_1C0180.f_B09 = 0xFFFFFFFF;
	Global_1C0180.f_B0A = 0x00000000;
	func_366(&(Global_1C0180.f_B0B));
	Global_1C0180.f_B0D = 0x00000000;
	func_366(&(Global_1C0180.f_B0E));
	Global_1C0180.f_B10 = 0x00000000;
	Global_1C0180.f_ADC.f_1C = 0x00000000;
	Global_1C0180.f_ADC.f_1B = 0x00000000;
	Global_1C0180.f_C70 = 0x00000000;
}

void func_368(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0x00000000;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_19 = 0x00000001;
	uParam0->f_1A = 0x00000000;
	uParam0->f_1B = 0x00000000;
	uParam0->f_1C = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		uParam0->f_1D[iVar0] = 0x00000000;
		uParam0->f_24[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_369(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000C)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_10), "", 64);
		(uParam0[iVar1 /*100*/])->f_20 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_2D = { Var0 };
		(uParam0[iVar1 /*100*/])->f_3A = 0x00000000;
		(uParam0[iVar1 /*100*/])->f_3B = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			(uParam0[iVar1 /*100*/])->f_3C[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_43[iVar2] = 0x00000000;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_4B = 0x00000000;
		(uParam0[iVar1 /*100*/])->f_4A = 0x00000000;
		(uParam0[iVar1 /*100*/])->f_4C = 0x00000000;
		(uParam0[iVar1 /*100*/])->f_4D = 0x00000000;
		(uParam0[iVar1 /*100*/])->f_4E = 0x00000000;
		(uParam0[iVar1 /*100*/])->f_4F = 0x00000000;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_50), "", 16);
		iVar1++;
	}
	func_366(&(Global_1C0180.f_B0E));
}

void func_370(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0x00000000;
	uParam0->f_F6.f_1 = 0xFFFFFFFF;
	uParam0->f_F6.f_2 = 0x00000000;
	func_366(&(uParam0->f_F6.f_3));
	uParam0->f_F6.f_5 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		uParam0->f_F6.f_6[iVar0 /*15*/] = 0xFFFFFFFF;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_1 = 0x00000000;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		uParam0->f_F6.f_BB[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_371(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0x00000000;
	*uParam1 = 0x00000000;
	Global_1C0000 = 0x00000000;
	func_366(&(Global_1C0000.f_1));
	unk_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, 0xFFFFFFFF);
}

int func_372(var uParam0, var uParam1)
{
	if (!func_423())
	{
		return 0x00000000;
	}
	if (func_417(&bLocal_190, uParam0))
	{
		if (iLocal_192 || bLocal_191)
		{
			UI::_SET_WARNING_MESSAGE_2("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 0x00000024, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			if (!*uParam1)
			{
				if (iLocal_192)
				{
					if (func_3(&iLocal_187))
					{
						if (func_249(&iLocal_187, SYSTEM::TO_FLOAT(0x00000000)))
						{
							iLocal_192 = 0x00000000;
							bLocal_191 = !bLocal_191;
						}
					}
					else
					{
						func_11(&iLocal_187);
					}
				}
				else
				{
					unk_0x3584F71E5CA29322(0x00000009);
					unk_0x3584F71E5CA29322(0x00000007);
					func_154(&(Local_45.f_77), 0x43480000, 0x00000001, 0x00000000, 0x00000001, 0x3F800000);
				}
			}
		}
		else
		{
			*uParam1 = 0x00000000;
			func_377();
		}
		return 0x00000000;
	}
	if (bLocal_190)
	{
		func_376();
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x98868AF51859FC75(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
		}
	}
	else
	{
		Local_45.f_A = 0xFFFFFFFF;
	}
	func_373();
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x98868AF51859FC75(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
	}
	return 0x00000001;
}

void func_373()
{
	unk_0xA37A90C62806D848(0x00000001);
	unk_0x11CCD0ACA866C6C5(0x00000003, 0x00000001);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	if (unk_0xED4934AFB6EC6451("MinigameTransitionIn"))
	{
		unk_0x9A1335ECD7BD117F("MinigameTransitionIn");
	}
	unk_0x82A772610883F395("MinigameTransitionOut", 0x00000000, 0x00000000);
	iLocal_186 = 0x00000000;
	unk_0x21387C9EECC2B220(0x00000000);
	func_137(0x00000000);
	func_374();
}

void func_374()
{
	Global_4CD7 = 0x00000000;
	func_375();
}

void func_375()
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

void func_376()
{
	switch (Global_1B04C)
	{
		case 0x00000000:
			Local_45.f_A = 0x00000000;
			break;
		
		case 0x00000001:
			Local_45.f_A = 0x00000001;
			break;
		
		case 0x00000002:
			Local_45.f_A = 0x00000002;
			break;
		
		case 0x00000003:
			Local_45.f_A = 0x00000003;
			break;
		
		case 0x00000004:
			Local_45.f_A = 0x00000004;
			break;
	}
}

void func_377()
{
	unk_0x3FC8DBCC154CA56B();
	func_378(&uLocal_223);
}

void func_378(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var6;
	int iVar7;
	struct<2> Var8;
	struct<11> Var9;
	struct<2> Var10;
	char cVar11[16];
	struct<2> Var12;
	struct<11> Var13;
	
	if (!bLocal_222)
	{
		if (!unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x64A90D2E671B51CB(0x00000001);
		}
	}
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000007);
	func_154(&(Local_45.f_77), 0x43480000, 0x00000001, 0x00000000, 0x00000001, 0x3F800000);
	func_409("Shared", "BGGradient_32x1024", uParam0[0x00000000 /*9*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
	func_404(uParam0->f_1A4[0x00000000 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000001 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000002 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000003 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000004 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000005 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000006 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000007 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000008 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000006 /*8*/], 0x00000000, 0x00000000);
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	func_403(&(uParam0->f_2E5.f_A5));
	func_402(&(uParam0->f_13C[0x00000000 /*2*/]), &(uParam0->f_2E5.f_A5), "SPR_TITLE", 0x00000000);
	unk_0xD9ACBBA59FD5A09E(0x00000004);
	func_400(&(uParam0->f_2E5.f_B0));
	func_399(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[0x00000000 /*8*/]), 0f, 0f);
	func_397(&(uParam0->f_13C[0x00000001 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_CHALLENGES", 0x00000001, 0x00000000);
	func_396(&(uParam0->f_2E5.f_B0));
	func_399(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[0x00000001 /*8*/]), 0f, 0f);
	func_397(&(uParam0->f_13C[0x00000002 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_INFO", 0x00000001, 0x00000000);
	func_396(&(uParam0->f_2E5.f_B0));
	func_399(&(uParam0->f_2E5.f_B0), &(uParam0->f_1A4[0x00000005 /*8*/]), 0f, 0f);
	func_397(&(uParam0->f_13C[0x00000003 /*2*/]), &(uParam0->f_2E5.f_B0), "SPR_AWARD_TITLE", 0x00000001, 0x00000000);
	func_396(&(uParam0->f_2E5.f_B0));
	func_403(&(uParam0->f_2E5.f_C6));
	iVar0 = 0x00000000;
	iVar1 = 0x00000009;
	iVar2 = 0x00000011;
	iVar3 = 0x00000001;
	func_404(uParam0->f_1A4[0x00000010 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000011 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000012 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000013 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000014 /*8*/], 0x00000000, 0x00000000);
	func_404(uParam0->f_1A4[0x00000015 /*8*/], 0x00000000, 0x00000000);
	bVar4 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (iVar0 < 0x00000005)
		{
			Var6 = { uParam0->f_13C[iVar2 /*2*/] };
			if (Global_1B416.f_4A5E.f_6[iVar0] > 0f)
			{
				iLocal_196[iVar0] = SYSTEM::CEIL(Global_1B416.f_4A5E.f_6[iVar0]);
			}
			else
			{
				iLocal_196[iVar0] = 0xFFFFFFFF;
			}
			if (iVar0 == Global_1B04C)
			{
				func_267(&(uParam0->f_1A4[iVar1 /*8*/]), 0x00000001, 0x00000001);
				func_404(uParam0->f_1A4[iVar1 /*8*/], 0x00000000, 0x00000000);
				func_400(&(uParam0->f_2E5.f_C6));
				switch (Global_1B416.f_4A5E.f_C[iVar0 /*8*/].f_4)
				{
					case 0x00000002:
						break;
					
					case 0x00000001:
						if (iVar0 < 0x00000005)
						{
							if (Global_1B416.f_4A5E.f_6[iVar0] <= 0f)
							{
								func_275(&Var5, 269f, 0f, 32f, 32f, 0x00000000);
								func_274(&Var5, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
								Var5.f_1 = (uParam0->f_13C[iVar2 /*2*/].f_1 + fLocal_198);
								Var6 = (Var5 + fLocal_197);
								if (!bLocal_222)
								{
									func_395(&Var5, 0x00000000);
								}
								func_394(&Var5, 0x00000001);
								func_409("Shared", "NewStar_32", &Var5, 0x00000000, 0x00000000, 0x00000005, 0x00000000);
								if (!bLocal_222)
								{
									func_393(&Var6, &(uParam0->f_2E5.f_C6));
								}
							}
						}
						break;
					
					default:
						bVar4 = 0x00000000;
						break;
				}
				if (iVar0 == Global_1B04C)
				{
					func_400(&(uParam0->f_2E5.f_C6));
				}
				func_396(&(uParam0->f_2E5.f_C6));
				func_402(&Var6, &(uParam0->f_2E5.f_C6), &(Local_45.f_18[iVar0 /*8*/]), 0x00000000);
				func_403(&(uParam0->f_2E5.f_C6));
				func_394(uParam0[iVar3 /*9*/], 0x00000001);
				if (bVar4)
				{
					func_403(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_403(&(uParam0->f_2E5.f_C6));
				}
				func_403(&(uParam0->f_2E5.f_C6));
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_6A[iVar0] && iLocal_196[iVar0] > 0x00000001)
				{
					func_394(uParam0[iVar3 /*9*/], 0x00000001);
					func_394(uParam0[0x00000009 /*9*/], 0x00000001);
					func_409("SPRRaces", "FlightStunt_Gold_128", uParam0[0x00000009 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
					func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000010 /*8*/]), 0.0047f, 0.0055f);
					unk_0xFF72A133B792782E(0x00000001);
					func_402(&(uParam0->f_13C[0x00000005 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sGOLD", 0x00000000);
					unk_0xFF72A133B792782E(0x00000000);
					func_396(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_70[iVar0] - Local_45.f_6A[iVar0]) / 2f) + Local_45.f_6A[iVar0]) && IntToFloat(iLocal_196[iVar0]) > Local_45.f_6A[iVar0])
				{
					func_394(uParam0[iVar3 /*9*/], 0x00000001);
					func_394(uParam0[0x00000009 /*9*/], 0x00000001);
					func_409("SPRRaces", "FlightStunt_Silver_128", uParam0[0x00000009 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
					func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000010 /*8*/]), 0.0047f, 0.0055f);
					unk_0xFF72A133B792782E(0x00000001);
					func_402(&(uParam0->f_13C[0x00000005 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sSILVER", 0x00000000);
					unk_0xFF72A133B792782E(0x00000000);
					func_396(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_70[iVar0] && IntToFloat(iLocal_196[iVar0]) > (((Local_45.f_70[iVar0] - Local_45.f_6A[iVar0]) / 2f) + Local_45.f_6A[iVar0]))
				{
					func_394(uParam0[iVar3 /*9*/], 0x00000001);
					func_394(uParam0[0x00000009 /*9*/], 0x00000001);
					func_409("SPRRaces", "FlightStunt_Bronze_128", uParam0[0x00000009 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
					func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000010 /*8*/]), 0.0047f, 0.0055f);
					unk_0xFF72A133B792782E(0x00000001);
					func_402(&(uParam0->f_13C[0x00000005 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_sBRONZE", 0x00000000);
					unk_0xFF72A133B792782E(0x00000000);
					func_396(&(uParam0->f_2E5.f_C6));
				}
				else if (IntToFloat(iLocal_196[iVar0]) > Local_45.f_70[iVar0] || iLocal_196[iVar0] == 0xFFFFFFFF)
				{
					func_394(uParam0[iVar3 /*9*/], 0x00000001);
					func_394(uParam0[0x00000009 /*9*/], 0x00000001);
					func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000010 /*8*/]), 0.0047f, 0.0055f);
					unk_0xFF72A133B792782E(0x00000001);
					func_402(&(uParam0->f_13C[0x00000005 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0x00000000);
					unk_0xFF72A133B792782E(0x00000000);
					func_409("SPRRaces", "Empty_128", uParam0[0x00000009 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
					func_392(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_6A[iVar0] && !iLocal_196[iVar0] == 0xFFFFFFFF)
				{
					func_394(uParam0[0x0000000D /*9*/], 0x00000001);
				}
				else
				{
					(uParam0[0x0000000D /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_70[iVar0] - Local_45.f_6A[iVar0]) / 2f) + Local_45.f_6A[iVar0]) && !iLocal_196[iVar0] == 0xFFFFFFFF)
				{
					func_394(uParam0[0x0000000C /*9*/], 0x00000001);
				}
				else
				{
					(uParam0[0x0000000C /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_70[iVar0] && !iLocal_196[iVar0] == 0xFFFFFFFF)
				{
					func_394(uParam0[0x0000000B /*9*/], 0x00000001);
				}
				else
				{
					(uParam0[0x0000000B /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				func_409("SPRRaces", "FlightStunt_Bronze_128", uParam0[0x0000000B /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
				func_409("SPRRaces", "FlightStunt_Silver_128", uParam0[0x0000000C /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
				func_409("SPRRaces", "FlightStunt_Gold_128", uParam0[0x0000000D /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
				func_403(&(uParam0->f_2E5.f_C6));
				if (Global_1B416.f_4A5E.f_6[Global_1B04C] > 0f)
				{
					func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000011 /*8*/]), 0.0047f, 0.0055f);
					unk_0xFF72A133B792782E(0x00000001);
					func_387(&(uParam0->f_13C[0x00000009 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((Global_1B416.f_4A5E.f_6[Global_1B04C] * 1000f)), 0x00000006, "", 0x00000000, 0x00000001);
					unk_0xFF72A133B792782E(0x00000000);
					func_396(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000011 /*8*/]), 0.0047f, 0.0055f);
					unk_0xFF72A133B792782E(0x00000001);
					func_402(&(uParam0->f_13C[0x00000009 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0x00000000);
					unk_0xFF72A133B792782E(0x00000000);
					func_396(&(uParam0->f_2E5.f_C6));
				}
				func_402(&(uParam0->f_13C[0x00000006 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_RTIME", 0x00000000);
				if (Local_45.f_12[Global_1B04C] > 0f)
				{
					func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000012 /*8*/]), 0.0047f, 0.0055f);
					unk_0xFF72A133B792782E(0x00000001);
					func_387(&(uParam0->f_13C[0x00000007 /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((Local_45.f_12[Global_1B04C] * 1000f)), 0x00000006, "", 0x00000000, 0x00000001);
					unk_0xFF72A133B792782E(0x00000000);
					func_396(&(uParam0->f_2E5.f_C6));
					func_403(&(uParam0->f_2E5.f_C6));
				}
				else
				{
					func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000012 /*8*/]), 0.0047f, 0.0055f);
					unk_0xFF72A133B792782E(0x00000001);
					func_397(&(uParam0->f_13C[0x00000007 /*2*/]), &(uParam0->f_2E5.f_C6), "SC_LB_EMPTY", 0x00000000, 0x00000001);
					unk_0xFF72A133B792782E(0x00000000);
					func_396(&(uParam0->f_2E5.f_C6));
					func_403(&(uParam0->f_2E5.f_C6));
				}
			}
			else
			{
				func_386(&(uParam0->f_1A4[iVar1 /*8*/]));
				func_267(&(uParam0->f_1A4[iVar1 /*8*/]), 0x00000075, 0x00000001);
				func_404(uParam0->f_1A4[iVar1 /*8*/], 0x00000000, 0x00000000);
				func_394(uParam0[iVar3 /*9*/], 0x00000001);
				switch (Global_1B416.f_4A5E.f_C[iVar0 /*8*/].f_4)
				{
					case 0x00000000:
						func_394(uParam0[iVar3 /*9*/], 0x00000001);
						func_403(&(uParam0->f_2E5.f_C6));
						break;
					
					case 0x00000002:
						break;
					
					case 0x00000001:
						if (iVar0 < 0x00000005)
						{
							func_403(&(uParam0->f_2E5.f_C6));
							if (Global_1B416.f_4A5E.f_6[iVar0] <= 0f)
							{
								func_275(&Var5, 269f, 0f, 32f, 32f, 0x00000000);
								func_274(&Var5, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
								Var5.f_1 = (uParam0->f_13C[iVar2 /*2*/].f_1 + fLocal_198);
								Var6 = (Var5 + fLocal_197);
								if (!bLocal_222)
								{
									func_395(&Var5, 0x00000000);
								}
								func_394(&Var5, 0x00000001);
								func_409("Shared", "NewStar_32", &Var5, 0x00000000, 0x00000000, 0x00000005, 0x00000000);
								if (!bLocal_222)
								{
									func_393(&Var6, &(uParam0->f_2E5.f_C6));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_1B04C)
				{
					func_400(&(uParam0->f_2E5.f_C6));
				}
				func_396(&(uParam0->f_2E5.f_C6));
				func_402(&Var6, &(uParam0->f_2E5.f_C6), &(Local_45.f_18[iVar0 /*8*/]), 0x00000000);
				func_403(&(uParam0->f_2E5.f_C6));
				func_394(uParam0[iVar3 /*9*/], 0x00000001);
			}
			if (Global_1B416.f_4A5E.f_C[iVar0 /*8*/].f_4 == 0x00000000)
			{
				func_409("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
			}
			else if (IntToFloat(iLocal_196[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_6A[iVar0] && IntToFloat(iLocal_196[iVar0]) <= Local_45.f_70[iVar0])
				{
					func_385(uParam0[iVar3 /*9*/]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_70[iVar0] - Local_45.f_6A[iVar0]) / 2f) + Local_45.f_6A[iVar0]))
				{
					func_384(uParam0[iVar3 /*9*/]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_70[iVar0])
				{
					func_382(uParam0[iVar3 /*9*/]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar7 = 0x00000000;
	if (func_381(0x00000000))
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_flying_ability"), &iVar7, 0xFFFFFFFF);
	}
	else if (func_381(0x00000001))
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_flying_ability"), &iVar7, 0xFFFFFFFF);
	}
	else if (func_381(0x00000002))
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_flying_ability"), &iVar7, 0xFFFFFFFF);
	}
	if (iVar7 < 0x00000028)
	{
		func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x0000000F /*8*/]), 0.0047f, 0.0055f);
		unk_0x4B9228CE1CF0DACA(0x00000001);
		Var8 = { uParam0->f_13C[0x00000016 /*2*/] };
		Var9 = { uParam0->f_2E5.f_C6 };
		if (!bLocal_222)
		{
			Var9.f_9 = (Var9.f_9 - 0.08f);
			func_393(&Var8, &Var9);
		}
		if (bLocal_222)
		{
			func_379(&(uParam0->f_1A4[0x0000000E /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 27f, 2f, 0x00000005, 159f);
		}
		else
		{
			func_379(&(uParam0->f_1A4[0x0000000E /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 18f, 1.55f, 0x00000005, 106f);
		}
		func_404(uParam0->f_1A4[0x0000000E /*8*/], 0x00000000, 0x00000000);
		func_409("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
		func_402(&(uParam0->f_13C[0x00000016 /*2*/]), &(uParam0->f_2E5.f_C6), "FLY_STAT_WARN", 0x00000000);
		func_396(&(uParam0->f_2E5.f_C6));
	}
	StringCopy(&Var10, "SPR_DESC_", 16);
	StringIntConCat(&Var10, Global_1B04C + 1, 16);
	func_394(uParam0[0x00000007 /*9*/], 0x00000001);
	func_409("SPRRaces", &Var10, uParam0[0x00000007 /*9*/], 0x00000000, 0x00000000, 0x00000005, 0x00000000);
	func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000019 /*8*/]), 0.0047f, 0.0055f);
	unk_0x4B9228CE1CF0DACA(0x00000001);
	StringCopy(&cVar11, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar11, Global_1B04C + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar11, 0x00000000, 16);
	}
	Var12 = { uParam0->f_13C[0x00000010 /*2*/] };
	Var13 = { uParam0->f_2E5.f_C6 };
	if (!bLocal_222)
	{
		Var13.f_9 = (Var13.f_9 - 0.108f);
		func_393(&Var12, &Var13);
	}
	if (bLocal_222)
	{
		func_379(&(uParam0->f_1A4[0x00000019 /*8*/]), &cVar11, &Var12, &Var13, 27f, 2f, 0x00000005, 159f);
	}
	else
	{
		func_379(&(uParam0->f_1A4[0x00000019 /*8*/]), &cVar11, &Var12, &Var13, 18f, 1.55f, 0x00000005, 106f);
	}
	func_404(uParam0->f_1A4[0x00000019 /*8*/], 0x00000000, 0x00000000);
	func_402(&(uParam0->f_13C[0x00000010 /*2*/]), &(uParam0->f_2E5.f_C6), &cVar11, 0x00000000);
	func_396(&(uParam0->f_2E5.f_C6));
	func_403(&(uParam0->f_2E5.f_C6));
	func_402(&(uParam0->f_13C[0x00000004 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_AWARDS_SUB", 0x00000000);
	func_402(&(uParam0->f_13C[0x00000008 /*2*/]), &(uParam0->f_2E5.f_C6), "SPR_BEST", 0x00000000);
	func_400(&(uParam0->f_2E5.f_C6));
	func_404(uParam0->f_1A4[0x00000016 /*8*/], 0x00000000, 0x00000000);
	func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000016 /*8*/]), 0x00000000, 0x00000000);
	func_387(&(uParam0->f_13C[0x0000000D /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR(Local_45.f_70[Global_1B04C]) * 1000, 0x00000006, "", 0x00000001, 0x00000000);
	func_396(&(uParam0->f_2E5.f_C6));
	func_404(uParam0->f_1A4[0x00000017 /*8*/], 0x00000000, 0x00000000);
	func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000017 /*8*/]), 0x00000000, 0x00000000);
	func_387(&(uParam0->f_13C[0x0000000E /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR((((Local_45.f_70[Global_1B04C] - Local_45.f_6A[Global_1B04C]) / 2f) + Local_45.f_6A[Global_1B04C])) * 1000, 0x00000006, "", 0x00000001, 0x00000000);
	func_396(&(uParam0->f_2E5.f_C6));
	func_404(uParam0->f_1A4[0x00000018 /*8*/], 0x00000000, 0x00000000);
	func_399(&(uParam0->f_2E5.f_C6), &(uParam0->f_1A4[0x00000018 /*8*/]), 0x00000000, 0x00000000);
	func_387(&(uParam0->f_13C[0x0000000F /*2*/]), &(uParam0->f_2E5.f_C6), SYSTEM::FLOOR(Local_45.f_6A[Global_1B04C]) * 1000, 0x00000006, "", 0x00000001, 0x00000000);
	func_396(&(uParam0->f_2E5.f_C6));
	func_403(&(uParam0->f_2E5.f_C6));
}

float func_379(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;
	
	func_380(uParam3, 0x00000000);
	unk_0xA1868A78E3C3D56B(sParam1);
	iVar0 = unk_0x5D2FD44A8C086959(*fParam2, fParam2->f_1);
	iVar1 = 0x000002D0;
	if (!unk_0x0D71AFA59EF5104F())
	{
		iVar1 = 0x000001E0;
	}
	uParam0->f_3 = func_271(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_271(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_380(var uParam0, bool bParam1)
{
	unk_0x7BBAC160090910C3(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0xF1F881BAAAFB43B1(uParam0->f_8, uParam0->f_9);
	}
	unk_0xD3539A877EC25E86(uParam0->f_1, uParam0->f_2);
	unk_0x7178F32F6742C936(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			unk_0x5C3AC46FC4D891D1();
			unk_0xC8CFC125861F0537();
			break;
		
		case 0x00000003:
			unk_0xC8CFC125861F0537();
			break;
		
		case 0x00000002:
			unk_0x5C3AC46FC4D891D1();
			break;
	}
	if (bParam1)
	{
		unk_0xD9ACBBA59FD5A09E(0x00000004);
	}
}

bool func_381(int iParam0)
{
	func_166();
	return iParam0 == Global_1B416.f_936.f_21B.f_10E1;
}

void func_382(var uParam0)
{
	func_383(uParam0, 0x0000006B);
}

void func_383(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_384(var uParam0)
{
	func_383(uParam0, 0x0000006C);
}

void func_385(var uParam0)
{
	func_383(uParam0, 0x0000006D);
}

void func_386(var uParam0)
{
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000080;
}

void func_387(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_390())
	{
		func_380(uParam1, 0x00000000);
		unk_0xFF72A133B792782E(iParam6);
		unk_0xAAE406A7DA443B93(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0x070005E852D4C0E9(sVar0);
		unk_0x164431059FF80580(iParam2, iParam3);
		unk_0xE0026608C37C7C41(func_389(*uParam0), func_388(uParam0->f_1), 0x00000000);
	}
}

float func_388(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_389(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_390()
{
	if (func_391())
	{
		return 0x00000001;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0x00000000;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0x00000000;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_391()
{
	return Global_1406B8;
}

void func_392(var uParam0)
{
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x000000FF;
}

void func_393(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_394(float fParam0, int iParam1)
{
	fParam0->f_4 = 0x000000FF;
	fParam0->f_5 = 0x000000FF;
	fParam0->f_6 = 0x000000FF;
	if (iParam1 == 0x00000001)
	{
		fParam0->f_7 = 0x000000FF;
	}
}

void func_395(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_396(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_397(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_50(sVar0))
	{
		if (func_390())
		{
			func_380(uParam1, 0x00000000);
			unk_0xFF72A133B792782E(iParam4);
			unk_0xAAE406A7DA443B93(iParam3);
			func_398(func_389(*uParam0), func_388(uParam0->f_1), sVar0, 0x00000000);
		}
	}
}

void func_398(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_399(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_400(var uParam0)
{
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	func_401(uParam0, 0x00000002);
}

void func_401(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_402(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0xD9ACBBA59FD5A09E(0x00000001);
	}
	func_397(fParam0, uParam1, sParam2, 0x00000000, 0x00000000);
}

void func_403(var uParam0)
{
	func_401(uParam0, 0x00000001);
}

void func_404(struct<8> Param0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam1)
	{
		case 0x00000002:
			func_408(&Var0);
			break;
		
		case 0x00000001:
			func_407(&Var0);
			break;
		
		case 0x00000003:
			func_406(&Var0);
			break;
		
		case 0x00000004:
			func_405(&Var0);
			break;
	}
	if (func_390())
	{
		if (iParam2 == 0x00000001)
		{
			unk_0xC1032CAC14DE468A(func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0x00000000);
		}
		else
		{
			unk_0xC1032CAC14DE468A(func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0x00000000);
		}
	}
}

void func_405(var uParam0)
{
	uParam0->f_4 = 0x000000C8;
	uParam0->f_5 = 0x00000014;
	uParam0->f_6 = 0x00000014;
	uParam0->f_7 = 0x000000CC;
}

void func_406(var uParam0)
{
	uParam0->f_4 = 0x000000FF;
	uParam0->f_5 = 0x000000FF;
	uParam0->f_6 = 0x000000FF;
	uParam0->f_7 = 0x000000FF;
}

void func_407(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 0x00000032);
	uParam0->f_5 = (uParam0->f_5 - 0x00000032);
	uParam0->f_6 = (uParam0->f_6 - 0x00000032);
}

void func_408(var uParam0)
{
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000096;
}

void func_409(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0x00000000:
			func_416(&Var0);
			break;
		
		case 0x00000001:
			func_415(&Var0);
			break;
		
		case 0x00000005:
			func_414(&Var0);
			break;
		
		case 0x00000006:
			func_413(&Var0);
			break;
		
		case 0x00000007:
			func_412(&Var0);
			break;
		
		case 0x00000008:
			func_411(&Var0);
			break;
		
		case 0x00000009:
			func_410(&Var0);
			break;
	}
	if (func_390())
	{
		unk_0xD9ACBBA59FD5A09E(iParam5);
		if (iParam3 == 0x00000001)
		{
			unk_0x539E86AE011A8B38(sParam0, sParam1, func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x539E86AE011A8B38(sParam0, sParam1, func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0xD9ACBBA59FD5A09E(0x00000004);
	}
}

void func_410(var uParam0)
{
	uParam0->f_4 = 0x00000080;
	uParam0->f_5 = 0x00000080;
	uParam0->f_6 = 0x00000080;
}

void func_411(var uParam0)
{
	uParam0->f_7 = 0x00000002;
}

void func_412(var uParam0)
{
	uParam0->f_7 = 0x00000005;
}

void func_413(var uParam0)
{
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000046;
}

void func_414(var uParam0)
{
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000064;
}

void func_415(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 0x00000032);
	uParam0->f_5 = (uParam0->f_5 - 0x00000032);
	uParam0->f_6 = (uParam0->f_6 - 0x00000032);
}

void func_416(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_417(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_192 == 0x00000001)
	{
		return 0x00000001;
	}
	if (iLocal_193)
	{
		return 0x00000000;
	}
	if (SYSTEM::TIMERA() < 0x000001F4)
	{
		return 0x00000001;
	}
	if (bLocal_191)
	{
		if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
		{
			iLocal_185 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(iLocal_185, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
			iLocal_192 = 0x00000001;
			iLocal_193 = 0x00000001;
			*uParam0 = 0x00000000;
			return 0x00000001;
		}
		else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
		{
			iLocal_185 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(iLocal_185, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
			unk_0xA37A90C62806D848(0x00000001);
			func_547(&(Local_45.f_77));
			iLocal_192 = 0x00000001;
		}
		else
		{
			return 0x00000001;
		}
	}
	else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA) || unk_0xB9132A06AE472728(0x00000002, 0x000000EE))
	{
		iLocal_185 = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(iLocal_185, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
		func_263(&(Local_45.f_77), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
		func_262(&(Local_45.f_77), "FE_HLP29", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
		func_262(&(Local_45.f_77), "FE_HLP31", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
		func_4(&iLocal_187);
		iLocal_192 = 0x00000001;
		unk_0xA37A90C62806D848(0x00000001);
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1() && bLocal_191 == 0x00000000)
	{
		if (unk_0x9E6C8D8976DA0ECD(0x00000002))
		{
			Global_4121D1 = func_421(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 0x00000005, 0x000000FF, 0x00000000, 0x00000001);
			func_420(0x00000000, Global_1B04C, 0x00000001);
			if (func_419())
			{
				if (Global_4121D1 == Global_1B04C)
				{
					iVar0 = 0x00000001;
				}
				else
				{
					iLocal_185 = unk_0xD68EA767274B7444();
					unk_0x22293E611B2408F1(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0x00000000, 0x00000000, 0x00000001);
					Global_1B04C = Global_4121D1;
					func_547(&(Local_45.f_77));
				}
			}
		}
	}
	if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9) || iVar0 == 0x00000001)
	{
		iVar0 = 0x00000000;
		if (Global_1B416.f_4A5E.f_C[Global_1B04C /*8*/].f_4 == 0x00000000)
		{
			iLocal_185 = unk_0xD68EA767274B7444();
			unk_0x22293E611B2408F1(iLocal_185, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0x00000000, 0x00000000, 0x00000001);
		}
		else
		{
			iLocal_185 = unk_0xD68EA767274B7444();
			unk_0x22293E611B2408F1(iLocal_185, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0x00000000, 0x00000000, 0x00000001);
			*uParam0 = 0x00000001;
			return 0x00000000;
		}
	}
	if ((unk_0xB9132A06AE472728(0x00000002, 0x000000BC) || func_418(0x00000000, uParam1)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F1))
	{
		iVar1 = (Global_1B04C - 0x00000001);
		if (iVar1 < 0x00000000)
		{
			iVar1 = 0x00000004;
		}
		iLocal_185 = unk_0xD68EA767274B7444();
		unk_0x22293E611B2408F1(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0x00000000, 0x00000000, 0x00000001);
		Global_1B04C = iVar1;
		func_547(&(Local_45.f_77));
	}
	if ((unk_0xB9132A06AE472728(0x00000002, 0x000000BB) || func_418(0x00000001, uParam1)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F2))
	{
		iVar2 = Global_1B04C + 1;
		if (iVar2 > 0x00000004)
		{
			iVar2 = 0x00000000;
		}
		iLocal_185 = unk_0xD68EA767274B7444();
		unk_0x22293E611B2408F1(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0x00000000, 0x00000000, 0x00000001);
		Global_1B04C = iVar2;
		func_547(&(Local_45.f_77));
	}
	return 0x00000001;
}

bool func_418(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = 0x00000000;
	iVar1 = unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C3);
	iVar2 = unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C4);
	if (unk_0x51D1D19912234EA0(iVar1) < 0x0000001C && unk_0x51D1D19912234EA0(iVar2) < 0x0000001C)
	{
		*uParam1 = 0x00000001;
		uParam1->f_1 = 0x00000000;
		return 0x00000000;
	}
	if (unk_0x1C0640BA9A7327B3() < uParam1->f_1 + 250)
	{
		*uParam1 = 0x00000000;
		return 0x00000000;
	}
	else
	{
		*uParam1 = 0x00000001;
	}
	if (!*uParam1)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = iVar2 < 0x00000064;
			break;
		
		case 0x00000001:
			bVar0 = iVar2 > 0x0000009C;
			break;
		
		case 0x00000002:
			bVar0 = iVar1 < 0x00000064;
			break;
		
		case 0x00000003:
			bVar0 = iVar1 > 0x0000009C;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = unk_0x1C0640BA9A7327B3();
		*uParam1 = 0x00000000;
	}
	return bVar0;
}

int func_419()
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

int func_420(int iParam0, var uParam1, bool bParam2)
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

int func_421(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar7 = 0xFFFFFFFF;
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		return 0xFFFFFFFF;
	}
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
	unk_0x5D80F91A16C40CDE();
	if (bParam8)
	{
		if (!unk_0x0D71AFA59EF5104F())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
		unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0xE428D1DCE17602B4(fParam0, fParam1, &fParam0, &fParam1);
		unk_0xD59EF13BB60323B9();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0x4F3973434662D795(0x00000002, 0x000000EF);
	fVar3 = unk_0x4F3973434662D795(0x00000002, 0x000000F0);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = SYSTEM::FLOOR((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
			func_422(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 0x000000FF, 0x000000FF, 0x000000FF, iParam6);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			func_422(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 0x000000FF, 0x000000FF, 0x000000FF, iParam6);
		}
		return iVar7;
	}
	return 0xFFFFFFFF;
}

void func_422(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

int func_423()
{
	int iVar0;
	
	switch (iLocal_186)
	{
		case 0x00000000:
			unk_0xA37A90C62806D848(0x00000001);
			unk_0xD7992BEF7A9D109E("SP_SPR", 0x00000003);
			unk_0x0D3BE1DE0262A012("SPRRaces", 0x00000000);
			unk_0x0D3BE1DE0262A012("MPHUD", 0x00000000);
			iLocal_186 = 0x00000001;
			break;
		
		case 0x00000001:
			if (unk_0x01C309A4BDFCAD82("SP_SPR", 0x00000003))
			{
				if (unk_0x27117E2CDD4D67C3("SPRRaces"))
				{
					if (unk_0x27117E2CDD4D67C3("MPHUD"))
					{
						iLocal_186 = 0x00000002;
					}
				}
			}
			break;
		
		case 0x00000002:
			unk_0xE17FDF9E3068281B(&(Local_45.f_77));
			Local_45.f_77 = 0x00000000;
			func_547(&(Local_45.f_77));
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000200);
			}
			func_137(0x00000001);
			unk_0x752C7D5696C0D8A0(0x00000001);
			unk_0x71EDC33E5A423750(Local_45.f_1, 0x00000004);
			func_374();
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Local_45.f_B)
			{
				iLocal_196[iVar0] = 0xFFFFFFFF;
				iVar0++;
			}
			func_427(&uLocal_223);
			func_424();
			unk_0x82A772610883F395("MinigameTransitionIn", 0x00000000, 0x00000001);
			iLocal_186 = 0x00000003;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_424()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		Global_1B416.f_4A5E.f_C[iVar0 /*8*/] = { func_426(iVar0) };
		MemCopy(&(Local_45.f_18[iVar0 /*8*/]), {Global_1B416.f_4A5E.f_C[iVar0 /*8*/]}, 0x00000008);
		Local_45.f_6A[iVar0] = func_425(iVar0);
		Local_45.f_70[iVar0] = func_22(iVar0);
		if (iVar0 < (0x00000005 - 0x00000001))
		{
			if (Global_1B416.f_4A5E.f_6[iVar0] > Local_45.f_70[iVar0] || Global_1B416.f_4A5E.f_6[iVar0] <= 0f)
			{
				Global_1B416.f_4A5E.f_C[iVar0 + 1 /*8*/].f_4 = 0x00000000;
			}
			else
			{
				Global_1B416.f_4A5E.f_C[iVar0 + 1 /*8*/].f_4 = 0x00000001;
			}
		}
		iVar0++;
	}
	Global_1B416.f_4A5E.f_C[0x00000000 /*8*/].f_4 = 0x00000001;
}

float func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 70f;
			break;
		
		case 0x00000001:
			return 75f;
			break;
		
		case 0x00000002:
			return 72f;
			break;
		
		case 0x00000003:
			return 120f;
			break;
		
		case 0x00000004:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_426(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_427(var uParam0)
{
	func_430();
	bLocal_222 = unk_0x0D71AFA59EF5104F();
	func_302(uParam0);
	func_280(&(uParam0->f_2E5));
	func_428(uParam0);
}

void func_428(var uParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0x0D71AFA59EF5104F();
	func_279(&(uParam0->f_13C[0x00000000 /*2*/]), 262f, (71f - func_429(0.00278f, 0x000002D0, 0x00000001)), 0x00000001);
	func_279(&(uParam0->f_13C[0x00000001 /*2*/]), (257f + 127f), (125f - func_429(0.00417f, 0x000002D0, 0x00000001)), 0x00000001);
	func_279(&(uParam0->f_13C[0x00000002 /*2*/]), (513f + 127f), (125f - func_429(0.00417f, 0x000002D0, 0x00000001)), 0x00000001);
	func_279(&(uParam0->f_13C[0x00000003 /*2*/]), (769f + 127f), (125f - func_429(0.00417f, 0x000002D0, 0x00000001)), 0x00000001);
	func_279(&(uParam0->f_13C[0x00000011 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 162f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000012 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 189f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000013 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 216f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000014 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 243f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000015 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 270f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000016 /*2*/]), (257f + func_278(0.0047f, 0x00000500, 0x00000001)), 297f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000010 /*2*/]), (513f + func_278(0.0047f, 0x00000500, 0x00000001)), (299f - func_429(0.00278f, 0x000002D0, 0x00000001)), 0x00000001);
	func_279(&(uParam0->f_13C[0x00000004 /*2*/]), (769f + func_278(0.0047f, 0x00000500, 0x00000001)), 297f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000005 /*2*/]), 769f, 297f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000008 /*2*/]), (769f + func_278(0.0047f, 0x00000500, 0x00000001)), 351f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000009 /*2*/]), 324f, 351f, 0x00000001);
	func_279(&(uParam0->f_13C[0x00000006 /*2*/]), (769f + func_278(0.0047f, 0x00000500, 0x00000001)), (324f - func_429(0.00278f, 0x000002D0, 0x00000001)), 0x00000001);
	func_279(&(uParam0->f_13C[0x00000007 /*2*/]), 324f, (324f - func_429(0.00278f, 0x000002D0, 0x00000001)), 0x00000001);
	func_279(&(uParam0->f_13C[0x0000000F /*2*/]), 810f, 459f, 0x00000001);
	func_279(&(uParam0->f_13C[0x0000000E /*2*/]), 896f, 459f, 0x00000001);
	func_279(&(uParam0->f_13C[0x0000000D /*2*/]), 982f, 459f, 0x00000001);
	func_275(uParam0[0x00000000 /*9*/], 257f, 55f, 766f, 105f, 0x00000001);
	unk_0xA402F6C87C08815C(0x00000075, &uVar1, &uVar2, &uVar3, &uVar4);
	func_274(uParam0[0x00000000 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_275(uParam0[0x00000001 /*9*/], 496f, 171f, 32f, 32f, 0x00000000);
	func_274(uParam0[0x00000001 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000002 /*9*/], 496f, 198f, 32f, 32f, 0x00000000);
	func_274(uParam0[0x00000002 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000003 /*9*/], 496f, 225f, 32f, 32f, 0x00000000);
	func_274(uParam0[0x00000003 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000004 /*9*/], 496f, 252f, 32f, 32f, 0x00000000);
	func_274(uParam0[0x00000004 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000005 /*9*/], 496f, 279f, 32f, 32f, 0x00000000);
	func_274(uParam0[0x00000005 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000006 /*9*/], (486f + func_278(0.0047f, 0x00000500, 0x00000001)), 310f, 32f, 32f, 0x00000000);
	func_274(uParam0[0x00000006 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000007 /*9*/], 640f, 224f, 256f, 256f, 0x00000000);
	func_274(uParam0[0x00000007 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x00000009 /*9*/], 896f, 223f, 128f, 128f, 0x00000000);
	func_274(uParam0[0x00000009 /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x0000000D /*9*/], 770.5f, 374.5f, 80f, 80f, 0x00000001);
	func_274(uParam0[0x0000000D /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x0000000C /*9*/], 856f, 374.5f, 80f, 80f, 0x00000001);
	func_274(uParam0[0x0000000C /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_275(uParam0[0x0000000B /*9*/], 941.5f, 374.5f, 80f, 80f, 0x00000001);
	func_274(uParam0[0x0000000B /*9*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	func_269(&(uParam0->f_1A4[0x00000003 /*8*/]), 257f, 114f, 254f, 5f, 0x00000001);
	func_268(&(uParam0->f_1A4[0x00000003 /*8*/]), 0x00000046, 0x00000046, 0x00000082, 0x000000FF);
	func_269(&(uParam0->f_1A4[0x00000004 /*8*/]), 513f, 114f, 254f, 5f, 0x00000001);
	func_268(&(uParam0->f_1A4[0x00000004 /*8*/]), 0x00000046, 0x00000046, 0x00000082, 0x000000FF);
	func_269(&(uParam0->f_1A4[0x00000005 /*8*/]), 769f, 114f, 254f, 5f, 0x00000001);
	func_268(&(uParam0->f_1A4[0x00000005 /*8*/]), 0x00000046, 0x00000046, 0x00000082, 0x000000FF);
	func_269(&(uParam0->f_1A4[0x00000000 /*8*/]), 257f, 119f, 254f, 26f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000000 /*8*/]), 0x00000001, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000001 /*8*/]), 513f, 119f, 254f, 26f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000001 /*8*/]), 0x00000001, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000002 /*8*/]), 769f, 119f, 254f, 26f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000002 /*8*/]), 0x00000001, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000007 /*8*/]), 513f, 159f, 254f, 133f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000007 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000008 /*8*/]), 769f, 159f, 254f, 133f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000008 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000009 /*8*/]), 257f, 159f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000009 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000A /*8*/]), 257f, 186f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000A /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000B /*8*/]), 257f, 213f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000B /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000C /*8*/]), 257f, 240f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000C /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000D /*8*/]), 257f, 267f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000D /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000001A /*8*/]), 257f, 294f, 254f, 2f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000001A /*8*/]), 0x00000001, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000E /*8*/]), 257f, 294f, 254f, 75f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000E /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x0000000F /*8*/]), 257f, 294f, (254f - 32f), 75f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x0000000F /*8*/]), 0x00000001, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000019 /*8*/]), 513f, 294f, 254f, 133f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000019 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000010 /*8*/]), 769f, 294f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000010 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000011 /*8*/]), 769f, 321f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000011 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000012 /*8*/]), 769f, 348f, 254f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000012 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000015 /*8*/]), 769f, 375f, 83f, 84f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000015 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000014 /*8*/]), 854f, 375f, 84f, 84f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000014 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000013 /*8*/]), 940f, 375f, 83f, 84f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000013 /*8*/]), 0x00000075, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000016 /*8*/]), 769f, 456f, 83f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000016 /*8*/]), 0x0000006D, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000017 /*8*/]), 854f, 456f, 84f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000017 /*8*/]), 0x0000006C, 0x00000001);
	func_269(&(uParam0->f_1A4[0x00000018 /*8*/]), 940f, 456f, 83f, 25f, 0x00000001);
	func_267(&(uParam0->f_1A4[0x00000018 /*8*/]), 0x0000006B, 0x00000001);
	if (!bVar0)
	{
		iVar5 = 0x00000000;
		while (iVar5 < 0x0000000E)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0x00000000;
		while (iVar5 < 0x00000017)
		{
			uParam0->f_13C[iVar5 /*2*/] = (((uParam0->f_13C[iVar5 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0x00000000;
		while (iVar5 < 0x0000001B)
		{
			uParam0->f_1A4[iVar5 /*8*/] = (((uParam0->f_1A4[iVar5 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_1A4[iVar5 /*8*/].f_2 = (uParam0->f_1A4[iVar5 /*8*/].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_3DA = 0x00000001;
}

float func_429(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0x00000000)
	{
		unk_0x8A462DAA7D1D9008(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_430()
{
	int iVar0;
	
	unk_0x035C78C5D5EB800E();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		Global_1C0DF1.f_51[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_431(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0x00000000] = 0x00000000;
	(*uParam0)[0x00000001] = 0x00000000;
	(*uParam0)[0x00000002] = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = { Var1 };
	uParam0->f_2A = 0x00000000;
	uParam0->f_2B = 0x00000000;
	uParam0->f_2C = 0x00000000;
	uParam0->f_2C.f_1 = 0x00000000;
	uParam0->f_2C.f_2 = 0x00000000;
	uParam0->f_2C.f_3 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_71[0x00000000 /*66*/] = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		StringCopy(&(uParam0->f_71[0x00000000 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_71[0x00000000 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

int func_432(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x1963B11DE70153E0())
	{
		if (!iLocal_194)
		{
			iVar0 = 0x00000000;
			if (uParam0->f_166[0x00000000 /*189*/].f_D > 0f)
			{
				if (uParam0->f_166[0x00000000 /*189*/].f_D <= Local_45.f_6A[Local_45.f_A])
				{
					iVar0 = 0x00000001;
				}
				else if (uParam0->f_166[0x00000000 /*189*/].f_D <= (((Local_45.f_70[Local_45.f_A] - Local_45.f_6A[Local_45.f_A]) / 2f) + Local_45.f_6A[Local_45.f_A]))
				{
					iVar0 = 0x00000002;
				}
				else if (uParam0->f_166[0x00000000 /*189*/].f_D <= Local_45.f_70[Local_45.f_A])
				{
					iVar0 = 0x00000003;
				}
			}
			if (iVar0 == 0x00000000)
			{
			}
			func_460(Local_45.f_A, &(Local_45.f_41[Local_45.f_A /*8*/]));
			if (bParam1)
			{
				func_457(Local_45.f_A, uParam0->f_166[0x00000000 /*189*/].f_D, iVar0);
				iLocal_194 = 0x00000001;
				return 0x00000001;
			}
			else if (func_433(Local_45.f_A, uParam0->f_166[0x00000000 /*189*/].f_D, iVar0))
			{
				iLocal_194 = 0x00000001;
				return 0x00000001;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_194 = 0x00000001;
	}
	return 0x00000000;
}

int func_433(int iParam0, float fParam1, int iParam2)
{
	if (Global_1C0005.f_1 && !Global_1C0005.f_2)
	{
		func_457(iParam0, fParam1, iParam2);
		Global_1C0005.f_2 = 0x00000001;
	}
	if (func_434(&uLocal_1210))
	{
		Global_1C017C = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_434(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 0x00000004;
	Var2.f_3 = 0x00000020;
	Var2.f_24 = 0x00000020;
	if (func_456(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_455(unk_0xD803B885F5E47A62()) };
	}
	switch (Global_1C0005)
	{
		case 0x00000000:
			if (func_454(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_453(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = unk_0x3E935963A5A0820F(uParam0->f_2C, 0x00000000);
				iVar4 = 0x00000000;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_452(uParam0->f_2C, iVar4))
					{
						if (func_451(uParam0->f_2C, 0x00000004, iVar4))
						{
							unk_0x5D96D8530B3D0904(&(Global_1C0005.f_8E.f_2), iVar4);
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_1C0005.f_8E.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0x00000000)
					{
						unk_0xBC584396476EE48A(0x00000000, &Var0);
						if (Var0.f_61 != Global_1C0005.f_8E.f_1)
						{
						}
						if (!func_450(Var0))
						{
							Global_1C0005.f_4 = 0x00000001;
						}
						else
						{
							iVar4 = 0x00000000;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_452(uParam0->f_2C, iVar4))
								{
									if (func_451(uParam0->f_2C, 0x00000004, iVar4))
									{
										Global_1C0005.f_49.f_24[iVar4] = unk_0x14B893B11D05C490(0x00000000, iVar4);
										if (Global_1C0005.f_49.f_24[iVar4] == 0xFFFFFFFF)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_24[iVar4] = 0x00000000;
											}
										}
									}
									else
									{
										Global_1C0005.f_49.f_3[iVar4] = unk_0x1969161BAC0006D6(0x00000000, iVar4);
										if (Global_1C0005.f_49.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1C0005.f_4 = 0x00000001;
					}
					unk_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_1C0005.f_4 = 0x00000001;
				}
				Global_1C0005 = 0x00000001;
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 0x00000001:
			Global_1C0005.f_1 = 0x00000001;
			if (Global_1C0005.f_2)
			{
				func_449();
				if (Global_1C0005.f_4)
				{
					if (func_448(uParam0->f_2C))
					{
						Global_1C0005 = 0x00000003;
					}
					else
					{
						Global_1C0005 = 0x00000002;
					}
				}
				else
				{
					Global_1C0005 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			unk_0x56218E3881C1B187(&(Global_1C0005.f_49), &(Global_1C0005.f_8E), &(Global_1C0005.f_D3));
			Global_1C0005 = 0x00000004;
			uParam0->f_4 = 0x00000000;
			uParam0->f_5 = 0x00000000;
			break;
		
		case 0x00000003:
			Global_1C0005.f_D3 = { Global_1C0005.f_8E };
			Global_1C0005 = 0x00000004;
			uParam0->f_4 = 0x00000000;
			uParam0->f_5 = 0x00000000;
			break;
		
		case 0x00000004:
			if (unk_0x8CD06866876216F2() && func_447())
			{
				if (func_446())
				{
					Global_1C0005 = 0x00000063;
				}
				else
				{
					Global_1C0005 = 0x000003E7;
					return 0x00000001;
				}
			}
			else
			{
				Global_1C0005 = 0x000003E7;
				return 0x00000001;
			}
			break;
		
		case 0x00000063:
			if (func_448(uParam0->f_2C))
			{
				Global_1C0005.f_118 = { Global_1C0005.f_8E };
			}
			else
			{
				Var2 = Global_1C0005.f_8E;
				Var2.f_1 = Global_1C0005.f_8E.f_1;
				Var2.f_2 = Global_1C0005.f_8E.f_2;
				unk_0x56218E3881C1B187(&Var2, &(Global_1C0005.f_8E), &(Global_1C0005.f_118));
			}
			Global_1C0005 = 0x00000064;
			uParam0->f_4 = 0x00000000;
			uParam0->f_5 = 0x00000000;
			break;
		
		case 0x00000064:
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, &Var3, 0x00000001, 0x00000001, Global_1C0005.f_118.f_24[0x00000000], Global_1C0005.f_118.f_3[0x00000000]))
			{
				func_453(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0x00000000)
					{
						unk_0xBC584396476EE48A(0x00000000, &Var0);
						if (unk_0x7F8A39872A07D2CE(&(Var0.f_D), ""))
						{
							Global_EC5D7.f_1 = 0xFFFFFFFF;
						}
						else
						{
							Global_EC5D7.f_1 = Var0.f_60;
						}
					}
					else
					{
						Global_EC5D7.f_1 = 0xFFFFFFFF;
					}
					unk_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_EC5D7.f_1 = 0xFFFFFFFF;
				}
				Global_1C0005 = 0x000003E7;
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 0x000003E7:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_435(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1C0005.f_D3.f_24[0x00000000];
	uVar1 = Global_1C0005.f_D3.f_3[0x00000000];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (bParam5)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, 0x00000000))
					{
						if (unk_0xBED23E8D17964CE1(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0x00000000;
							*uParam0 = 0x00000003;
						}
					}
					else if (unk_0xDA5E71D84C8C1F25(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0x00000000;
						*uParam0 = 0x00000003;
					}
				}
				else if (unk_0x425FE0104C115EE8(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0x00000000;
					*uParam0 = 0x00000003;
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, 0xFFFFFFFF))
			{
				*uParam0++;
			}
			break;
		
		case 0x00000002:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0x00000000))
			{
				*uParam1 = 0x00000001;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0x00000000;
				*uParam0++;
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_436(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1C0000 = 0x00000001;
	func_437(&(Global_1C0000.f_1), 0x00000001, 0x00000000);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

void func_437(var uParam0, bool bParam1, bool bParam2)
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

int func_438()
{
	if (unk_0x798A3F1296751F46() && !func_439())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_439()
{
	return func_440(unk_0xD803B885F5E47A62());
}

int func_440(int iParam0)
{
	switch (func_441(iParam0))
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000006:
		case 0x00000005:
		case 0x00000007:
		case 0x00000029:
		case 0x00000024:
		case 0x00000027:
		case 0x0000002A:
			return 0x00000000;
		
		default:
	}
	return 0x00000001;
}

int func_441(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4;
}

int func_442()
{
	if (unk_0xA9C9C7E04514E320() || Global_1C0000)
	{
		func_443();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_443()
{
	if (func_444(&(Global_1C0000.f_1), 0x0001D4C0, 0x00000001))
	{
		unk_0x8EFB4731C3DCDA55(Global_1C0000.f_3, Global_1C0000.f_4, 0xFFFFFFFF);
		Global_1C0000 = 0x00000000;
		func_366(&(Global_1C0000.f_1));
	}
}

int func_444(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_445(uParam0, bParam2, 0x00000000);
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

void func_445(var uParam0, bool bParam1, bool bParam2)
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

bool func_446()
{
	return unk_0xEAE0D21A50E6C7F4(Global_EA450.f_8, 0x00000001);
}

var func_447()
{
	return Global_258538.f_3;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000331:
		case 0x00000352:
		case 0x00000338:
		case 0x0000033B:
		case 0x0000032F:
		case 0x0000033A:
		case 0x00000309:
		case 0x00000339:
		case 0x0000033C:
		case 0x00000351:
		case 0x000003A0:
		case 0x0000031B:
		case 0x000000CA:
		case 0x0000032B:
		case 0x000000C1:
		case 0x000003CF:
		case 0x000003D0:
		case 0x000003CA:
		case 0x000003CD:
		case 0x000003C8:
		case 0x000003C9:
		case 0x000003C6:
		case 0x000003CE:
		case 0x000003CB:
		case 0x000003C7:
		case 0x000003C5:
		case 0x000003CC:
			return 0x00000001;
			break;
	}
	if (iParam0 >= 0x000003E6 && iParam0 <= 0x000004AD)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_449()
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

bool func_450(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

int func_451(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0x000000BE)
	{
		if (iParam2 == 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x000000CB)
	{
		if (iParam2 == 0x00000003 || iParam2 == 0x00000006)
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x00000390)
	{
		if (iParam2 == 0x00000000 || iParam2 == 0x00000003)
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == 0x000002FA || iParam0 == 0x00000336) || iParam0 == 0x00000337)
	{
		if (iParam2 == 0x00000000 || iParam2 == 0x00000003)
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x00000317)
	{
		if (iParam2 == 0x00000004)
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x0000030C)
	{
		if (iParam2 == 0x00000003)
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x00000309)
	{
		if (iParam2 == 0x00000003 || iParam2 == 0x00000007)
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x000004B0)
	{
		if (iParam2 == 0x00000004)
		{
			return 0x00000000;
		}
	}
	iVar0 = unk_0xE847F6F326D1C162(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 0x00000001:
		case 0x00000002:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_452(int iParam0, int iParam1)
{
	if (unk_0xD3D4B12287A02195(iParam0, 0x00000004, iParam1) == 0x0000009C)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000390:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000030C:
			if (iParam1 == 0x00000004)
			{
				return 0x00000001;
			}
			break;
		
		case 0x000004B0:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_453(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0x00000000;
}

int func_454(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (unk_0x9555470AA3470707(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0x00000000;
					*uParam0 = 0x00000003;
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, 0xFFFFFFFF))
			{
				*uParam0++;
			}
			break;
		
		case 0x00000002:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0x00000000))
			{
				*uParam1 = 0x00000001;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0x00000000;
				*uParam0++;
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

struct<13> func_455(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_456(int iParam0)
{
	if (iParam0 == 0x00000339 || iParam0 == 0x0000033C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_457(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var4[3];
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	if (iParam2 == 0x00000001)
	{
		iVar2++;
	}
	else if (iParam2 == 0x00000002)
	{
		iVar1++;
	}
	else if (iParam2 == 0x00000003)
	{
		iVar0++;
	}
	StringCopy(&(Var4[0x00000000 /*8*/]), "GameType", 32);
	StringCopy(&(Var4[0x00000001 /*8*/]), "Location", 32);
	StringCopy(&(Var4[0x00000002 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0x00000000 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&(Var3[0x00000001 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 0x00000001:
			StringCopy(&(Var3[0x00000001 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 0x00000002:
			StringCopy(&(Var3[0x00000001 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 0x00000003:
			StringCopy(&(Var3[0x00000001 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 0x00000004:
			StringCopy(&(Var3[0x00000001 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[0x00000002 /*6*/]), "StuntPlaneRace", 24);
	if (func_459(0x00000331, &Var3, &Var4, 0x00000003, 0xFFFFFFFF, 0x00000001, 0x00000000))
	{
		if (iParam2 <= 0x00000003 && iParam2 > 0x00000000)
		{
			func_458(0x00000331, 0x00000083, -SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0x00000000);
		}
		else
		{
			func_458(0x00000331, 0x00000083, 0x00000000, 0f, 0x00000000);
		}
		func_458(0x00000331, 0x00000060, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0x00000000);
		func_458(0x00000331, 0x00000002, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0x00000000);
		func_458(0x00000331, 0x00000093, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0x00000000);
		func_458(0x00000331, 0x00000095, 0x00000000, 0f, 0x00000000);
		func_458(0x00000331, 0x00000094, 0x00000000, 0f, 0x00000000);
		func_458(0x00000331, 0x0000006D, 0x00000001, 0f, 0x00000000);
		func_458(0x00000331, 0x0000009D, iVar0, 0f, 0x00000000);
		func_458(0x00000331, 0x0000009E, iVar1, 0f, 0x00000000);
		func_458(0x00000331, 0x00000056, iVar2, 0f, 0x00000000);
	}
}

void func_458(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x6106B2DBBCB1AA39(iParam1, iParam2, fParam3);
	}
	if (!Global_1C0005.f_3)
	{
		Global_1C0005.f_8E = iParam0;
		Global_1C0005.f_8E.f_1 = unk_0x3E935963A5A0820F(Global_1C0005.f_8E, 0x00000000);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000020)
		{
			if (iVar1 < Global_1C0005.f_8E.f_1)
			{
				if (iParam1 == 0x0000009C)
				{
				}
				else if (func_451(iParam0, 0x00000004, iVar1))
				{
					unk_0x5D96D8530B3D0904(&(Global_1C0005.f_8E.f_2), iVar1);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Global_1C0005.f_8E.f_2), iVar1);
				}
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1C0005.f_8E.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1C0005.f_3 = 0x00000001;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		if (iParam1 == unk_0xD3D4B12287A02195(iParam0, 0x00000004, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 0x00000020;
		}
		iVar1++;
	}
	Global_1C0005.f_8E.f_24[iVar0] = iParam2;
	Global_1C0005.f_8E.f_3[iVar0] = fParam3;
	if (iParam2 != 0x00000000)
	{
		unk_0x5D96D8530B3D0904(&(Global_1C0005.f_8E.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x0674E58A79778E99(&(Global_1C0005.f_8E.f_2), iVar0);
	}
}

int func_459(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x58424C49F8924842())
	{
	}
	if ((!unk_0x28B41A2A2556BCF3() && (unk_0x8BB6DE13A9F3105E() || !unk_0x9AE561F9BC3F06D8())) && unk_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 0x00000004;
		Var0 = iParam0;
		if (iParam4 == 0xFFFFFFFF)
		{
			if (unk_0x080E9D045AEE5605())
			{
				Var2 = { func_455(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var2))
				{
					if (unk_0xD9DA83C40D038174(&uVar3, 0x00000023, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0x00000000;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 0x00000008);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x8CD06866876216F2() && Global_258538.f_3)
			{
				unk_0x14388B84A94BC0BD(&Var0, &(Global_195CCB.f_A));
			}
			else
			{
				unk_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return 0x00000001;
	}
	if (unk_0x28B41A2A2556BCF3())
	{
	}
	if (!unk_0x8BB6DE13A9F3105E())
	{
	}
	if (unk_0x9AE561F9BC3F06D8())
	{
	}
	if (!unk_0x393EAEC306A49C71())
	{
	}
	return 0x00000000;
}

void func_460(int iParam0, char[4] cParam1)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&vVar0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 0x00000001:
			StringCopy(&vVar0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 0x00000002:
			StringCopy(&vVar0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 0x00000003:
			StringCopy(&vVar0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 0x00000004:
			StringCopy(&vVar0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_461(&uLocal_1210, 0x00000056, &vVar0, cParam1, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000);
}

void func_461(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1C0180.f_AD1 = 0x00000000;
	Global_1C0180.f_AD2 = 0x00000000;
	Global_1C0180.f_AD0 = 0x00000000;
	switch (iParam1)
	{
		case 0x00000002:
			if (iParam4 == 0x00000000)
			{
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C = 0x0000033A;
				}
				else
				{
					uParam0->f_2C = 0x0000032F;
				}
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C.f_3 = 0x00000002;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 0x00000001)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 0x00000001)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C0180.f_ADC.f_1A = 0xFFFFFFFF;
				}
				Global_1C0180.f_ADC = 0x00000001;
				if (iParam5 <= 0x00000000 || func_470())
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000001;
					Global_1C0180.f_A96[0x00000001] = 0x00000003;
					Global_1C0180.f_A96[0x00000002] = 0x00000000;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A95 = 0x00000004;
					Global_1C0180.f_A94 = 0x00000002;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					Global_1C0180.f_ADC.f_1C = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000003;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000002;
					Global_1C0180.f_A96[0x00000001] = 0x00000001;
					Global_1C0180.f_A96[0x00000002] = 0x00000003;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A95 = 0x00000004;
					Global_1C0180.f_A94 = 0x00000003;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					Global_1C0180.f_ADC.f_1C = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000003;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
				}
				Global_1C0180.f_ADB = 0x00000000;
			}
			else if (iParam4 == 0x00000001)
			{
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C = 0x0000033B;
				}
				else
				{
					uParam0->f_2C = 0x00000338;
				}
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C.f_3 = 0x00000002;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 0x00000001)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 0x00000001)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 0xFFFFFFFF;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1C0180.f_ADC = 0x00000001;
				if (iParam5 <= 0x00000000 || func_470())
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000001;
					Global_1C0180.f_A96[0x00000001] = 0x00000005;
					Global_1C0180.f_A96[0x00000002] = 0x00000000;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A95 = 0x00000006;
					Global_1C0180.f_A94 = 0x00000002;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					Global_1C0180.f_ADC.f_1C = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000003;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000002;
					Global_1C0180.f_A96[0x00000001] = 0x00000001;
					Global_1C0180.f_A96[0x00000002] = 0x00000005;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A94 = 0x00000003;
					Global_1C0180.f_A95 = 0x00000006;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					Global_1C0180.f_ADC.f_1C = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000003;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
				}
				Global_1C0180.f_ADB = 0x00000000;
			}
			else if (iParam4 == 0x00000002)
			{
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C = 0x0000033C;
				}
				else
				{
					uParam0->f_2C = 0x00000339;
				}
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000002;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "CoDriver", 32);
					unk_0x4D8EB33D0EE1D0CB(unk_0xD803B885F5E47A62(), &Var3);
					MemCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), {Var3}, 0x00000008);
					Global_1C0180.f_ADC.f_1B = 0x00000001;
				}
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C.f_3 = 0x00000003;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 0x00000001)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 0x00000001)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 0xFFFFFFFF;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0x00000000 || func_470())
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000001;
					Global_1C0180.f_A96[0x00000001] = 0x00000003;
					Global_1C0180.f_A96[0x00000002] = 0x00000000;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A95 = 0x00000004;
					Global_1C0180.f_A94 = 0x00000002;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					Global_1C0180.f_ADC.f_1C = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000003;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000002;
					Global_1C0180.f_A96[0x00000001] = 0x00000001;
					Global_1C0180.f_A96[0x00000002] = 0x00000003;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A94 = 0x00000003;
					Global_1C0180.f_A95 = 0x00000004;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					Global_1C0180.f_ADC.f_1C = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000003;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
				}
				Global_1C0180.f_ADB = 0x00000000;
			}
			else if (iParam4 == 0x0000000A || iParam4 == 0x0000000B)
			{
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C = 0x000003A0;
				}
				else
				{
					uParam0->f_2C = 0x00000351;
				}
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C.f_3 = 0x00000002;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 0x00000001)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 0x00000001)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 0xFFFFFFFF;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1C0180.f_ADC = 0x00000001;
				if (iParam5 <= 0x00000000 || func_470())
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000001;
					Global_1C0180.f_A96[0x00000001] = 0x00000000;
					Global_1C0180.f_A96[0x00000002] = 0x00000000;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A95 = 0x00000000;
					Global_1C0180.f_A94 = 0x00000001;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					Global_1C0180.f_ADC.f_1C = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000002;
					Global_1C0180.f_A96[0x00000001] = 0x00000001;
					Global_1C0180.f_A96[0x00000002] = 0x00000000;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A94 = 0x00000002;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					Global_1C0180.f_ADC.f_1C = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				}
				Global_1C0180.f_ADB = 0x00000000;
			}
			else if (iParam4 == 0x00000003)
			{
				if (iParam5 > 0x00000000 && !func_470())
				{
					uParam0->f_2C = (0x000003E6 + (iParam5 - 0x00000001));
				}
				else
				{
					uParam0->f_2C = 0x000003CF;
				}
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0x00000000 && !func_470())
				{
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 0x00000001)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 0x00000001)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C0180.f_ADC.f_1A = 0xFFFFFFFF;
				}
				Global_1C0180.f_ADC = 0x00000001;
				if (iParam5 <= 0x00000000 || func_470())
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000001;
					Global_1C0180.f_A96[0x00000001] = 0x00000003;
					Global_1C0180.f_A96[0x00000002] = 0x00000000;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A95 = 0x00000004;
					Global_1C0180.f_A94 = 0x00000002;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					Global_1C0180.f_ADC.f_1C = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000003;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000002;
					Global_1C0180.f_A96[0x00000001] = 0x00000001;
					Global_1C0180.f_A96[0x00000002] = 0x00000003;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A95 = 0x00000004;
					Global_1C0180.f_A94 = 0x00000003;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					Global_1C0180.f_ADC.f_1C = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000003;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
				}
				Global_1C0180.f_ADB = 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (iParam4 == 0x00000000 || iParam4 == 0x00000003)
			{
				uParam0->f_2C = 0x000002FA;
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 0x00000001;
				if (iParam4 == 0x00000003)
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000005 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0x00000000] = 0x00000000;
				Global_1C0180.f_A96[0x00000001] = 0x00000004;
				Global_1C0180.f_A96[0x00000002] = 0x00000006;
				Global_1C0180.f_A96[0x00000003] = 0x00000003;
				Global_1C0180.f_A96[0x00000004] = 0x00000001;
				Global_1C0180.f_A96[0x00000005] = 0x00000002;
				Global_1C0180.f_A94 = 0x00000006;
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000004]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000005]);
				Global_1C0180.f_ADC.f_1C = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000004;
				Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000004;
				Global_1C0180.f_ADC.f_1D[0x00000004] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000005] = 0x00000005;
			}
			else if (iParam4 == 0x00000001 || iParam4 == 0x00000004)
			{
				uParam0->f_2C = 0x00000336;
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 0x00000001;
				if (iParam4 == 0x00000004)
				{
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000005 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0x00000000] = 0x00000000;
				Global_1C0180.f_A96[0x00000001] = 0x00000004;
				Global_1C0180.f_A96[0x00000002] = 0x00000006;
				Global_1C0180.f_A96[0x00000003] = 0x00000003;
				Global_1C0180.f_A96[0x00000004] = 0x00000001;
				Global_1C0180.f_A96[0x00000005] = 0x00000002;
				Global_1C0180.f_A94 = 0x00000006;
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000004]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000005]);
				Global_1C0180.f_ADC.f_1C = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000004;
				Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000004;
				Global_1C0180.f_ADC.f_1D[0x00000004] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000005] = 0x00000005;
			}
			else if (iParam4 == 0x00000002)
			{
				uParam0->f_2C = 0x00000337;
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 0x00000001;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000005 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0x00000000] = 0x00000000;
				Global_1C0180.f_A96[0x00000001] = 0x00000004;
				Global_1C0180.f_A96[0x00000002] = 0x00000006;
				Global_1C0180.f_A96[0x00000003] = 0x00000003;
				Global_1C0180.f_A96[0x00000004] = 0x00000001;
				Global_1C0180.f_A96[0x00000005] = 0x00000002;
				Global_1C0180.f_A94 = 0x00000006;
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000004]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000005]);
				Global_1C0180.f_ADC.f_1C = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000004;
				Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000004;
				Global_1C0180.f_ADC.f_1D[0x00000004] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000005] = 0x00000005;
			}
			break;
		
		case 0x0000000B:
			uParam0->f_2C = 0x000000C1;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "MP", 32);
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000001;
			Global_1C0180.f_A96[0x00000002] = 0x00000003;
			Global_1C0180.f_A96[0x00000003] = 0x00000000;
			Global_1C0180.f_A94 = 0x00000003;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000007;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x0000005E:
			uParam0->f_2C = 0x000000C1;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "SP", 32);
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000001;
			Global_1C0180.f_A96[0x00000002] = 0x00000003;
			Global_1C0180.f_A96[0x00000003] = 0x00000000;
			Global_1C0180.f_A94 = 0x00000003;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000007;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x0000005C:
			uParam0->f_2C = 0x0000032B;
			uParam0->f_2C.f_1 = 0x00000001;
			uParam0->f_2C.f_3 = 0x00000000;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), "CMSW", 64);
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			Global_1C0180.f_ADC = 0x00000000;
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000005;
			Global_1C0180.f_A96[0x00000002] = 0x00000002;
			Global_1C0180.f_A96[0x00000003] = 0x00000004;
			Global_1C0180.f_A96[0x00000004] = 0x00000006;
			Global_1C0180.f_A94 = 0x00000005;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000004]);
			Global_1C0180.f_ADC.f_1C = 0x00000006;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000006;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000004] = 0x00000005;
			break;
		
		case 0x0000000F:
			uParam0->f_2C = 0x000002ED;
			uParam0->f_2C.f_1 = 0x00000001;
			uParam0->f_2C.f_3 = 0x00000000;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_ARM", 32);
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000002;
			Global_1C0180.f_A96[0x00000001] = 0x00000005;
			Global_1C0180.f_A96[0x00000002] = 0x00000000;
			Global_1C0180.f_A96[0x00000003] = 0x00000000;
			Global_1C0180.f_A94 = 0x00000003;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000004;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x0000000E:
			uParam0->f_2C = 0x000000BE;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
			if (iParam4 == 0xFFFFFFFF)
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_DARTS", 32);
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000007;
			Global_1C0180.f_A96[0x00000002] = 0x00000005;
			Global_1C0180.f_A96[0x00000003] = 0x00000000;
			Global_1C0180.f_A94 = 0x00000003;
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000004;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x0000000C:
			uParam0->f_2C = 0x0000011B;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			if (unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1C0180.f_ADC.f_9), iParam4 + 1, 64);
			}
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000009;
			Global_1C0180.f_A96[0x00000002] = 0x00000007;
			Global_1C0180.f_A96[0x00000003] = 0x00000005;
			Global_1C0180.f_A96[0x00000004] = 0x00000002;
			Global_1C0180.f_A94 = 0x00000005;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000004]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000004] = 0x00000005;
			break;
		
		case 0x00000057:
			uParam0->f_2C = 0x0000011B;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000009;
			Global_1C0180.f_A96[0x00000002] = 0x00000007;
			Global_1C0180.f_A96[0x00000003] = 0x00000005;
			Global_1C0180.f_A96[0x00000004] = 0x00000002;
			Global_1C0180.f_A94 = 0x00000005;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000004]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000004] = 0x00000005;
			break;
		
		case 0x0000000D:
			uParam0->f_2C = 0x00000390;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000002;
			switch (iParam4)
			{
				case 0x00000000:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 0x00000001:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 0x00000002:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0x00000000:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 0x00000001:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 0x00000002:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 0x00000003:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 0x00000004:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 0x00000005:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_ACC", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000002;
			Global_1C0180.f_A96[0x00000002] = 0x00000001;
			Global_1C0180.f_A96[0x00000003] = 0x00000003;
			Global_1C0180.f_A94 = 0x00000004;
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			Global_1C0180.f_ADC.f_1C = 0x00000004;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000004;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000004;
			break;
		
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
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
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
			uParam0->f_2C = 0x000000CB;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Type", 32);
			uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1C0180.f_ADC.f_9), {func_469(iParam1)}, 0x00000010);
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000007;
			Global_1C0180.f_A94 = 0x00000002;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			Global_1C0180.f_ADC.f_1C = 0x00000004;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000008;
			break;
		
		case 0x00000045:
		case 0x00000047:
		case 0x00000046:
			uParam0->f_2C = 0x000000CA;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000000;
			Global_1C0180.f_A96[0x00000002] = 0x00000000;
			Global_1C0180.f_A96[0x00000003] = 0x00000000;
			Global_1C0180.f_A94 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			Global_1C0180.f_ADC.f_1C = 0x00000003;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000002;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000000;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000000;
			break;
		
		case 0x00000050:
			uParam0->f_2C = 0x00000331;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000003;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "OffroadRace", 32);
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			Global_1C0180.f_ADC = 0x00000001;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000003;
			Global_1C0180.f_A94 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			Global_1C0180.f_ADC.f_1C = 0x00000003;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
			break;
		
		case 0x00000003:
			uParam0->f_2C = 0x00000317;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 0x00000001;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000001;
			Global_1C0180.f_A96[0x00000002] = 0x00000002;
			Global_1C0180.f_A96[0x00000003] = 0x00000003;
			Global_1C0180.f_A94 = 0x00000004;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x00000000:
			if (iParam4 == 0x00000007 || iParam4 == 0x00000001)
			{
				uParam0->f_2C = 0x000004B0;
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 0x00000001;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (iParam4 == 0x00000001)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (iParam4 == 0x00000001)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1C0180.f_A96[0x00000000] = 0x00000000;
				Global_1C0180.f_A96[0x00000001] = 0x00000001;
				Global_1C0180.f_A96[0x00000002] = 0x00000004;
				Global_1C0180.f_A96[0x00000003] = 0x00000005;
				Global_1C0180.f_A96[0x00000004] = 0x00000006;
				Global_1C0180.f_A94 = 0x00000003;
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
				unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000004]);
				Global_1C0180.f_ADC.f_1C = 0x00000006;
				Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000001] = 0x0000000B;
				Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000004;
				Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000004] = 0x00000005;
			}
			else if (Global_440000.f_E3 == 0x00000001)
			{
				uParam0->f_2C = 0x00000309;
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 0x00000001;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_440000.f_2 == 0x00000005)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 0x00000005)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C0180.f_A96[0x00000000] = 0x00000000;
				Global_1C0180.f_A96[0x00000001] = 0x00000001;
				Global_1C0180.f_A96[0x00000002] = 0x00000002;
				Global_1C0180.f_A96[0x00000003] = 0x00000000;
				Global_1C0180.f_A94 = 0x00000003;
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
				Global_1C0180.f_ADC.f_1C = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000002;
				Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			}
			else
			{
				uParam0->f_2C = 0x0000030C;
				uParam0->f_2C.f_1 = 0x00000005;
				uParam0->f_2C.f_3 = 0x00000001;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 0x00000001;
				if (!unk_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_440000.f_2 == 0x00000005)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 0x00000005)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_468(Global_440000.f_38DB3) || func_465(Global_440000.f_38DB3))
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000000;
					Global_1C0180.f_A96[0x00000001] = 0x00000002;
					Global_1C0180.f_A96[0x00000002] = 0x00000000;
					Global_1C0180.f_A94 = 0x00000002;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					Global_1C0180.f_ADC.f_1C = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				}
				else if (func_464(Global_440000.f_38DB3))
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000000;
					Global_1C0180.f_A96[0x00000001] = 0x00000002;
					Global_1C0180.f_A96[0x00000002] = 0x00000000;
					Global_1C0180.f_A94 = 0x00000002;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					Global_1C0180.f_ADC.f_1C = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000000;
					Global_1C0180.f_A96[0x00000001] = 0x00000001;
					Global_1C0180.f_A96[0x00000002] = 0x00000002;
					Global_1C0180.f_A96[0x00000003] = 0x00000000;
					Global_1C0180.f_A94 = 0x00000003;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					Global_1C0180.f_ADC.f_1C = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
				}
			}
			break;
		
		case 0x00000008:
			uParam0->f_2C = 0x0000031B;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 0x00000001;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000001;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD0), 0x00000001);
			Global_1C0180.f_AC2[0x00000001] = 0xFFFFFFFF;
			Global_1C0180.f_A96[0x00000002] = 0x00000002;
			Global_1C0180.f_A96[0x00000003] = 0x00000000;
			Global_1C0180.f_A94 = 0x00000003;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x0000000B;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x00000055:
			uParam0->f_2C = 0x00000112;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 0x00000001;
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000003;
			Global_1C0180.f_A94 = 0x00000002;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			Global_1C0180.f_ADC.f_1C = 0x00000003;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			break;
		
		case 0x0000007A:
			switch (iParam4)
			{
				case 0x00000000:
				case 0x00000009:
				case 0x00000004:
				case 0x00000008:
					switch (iParam4)
					{
						case 0x00000000:
							uParam0->f_2C = 0x000003C5;
							break;
						
						case 0x00000009:
							uParam0->f_2C = 0x000003C6;
							break;
						
						case 0x00000004:
							uParam0->f_2C = 0x000003C7;
							break;
						
						case 0x00000008:
							uParam0->f_2C = 0x000003C8;
							break;
					}
					uParam0->f_2C.f_1 = 0x00000001;
					uParam0->f_2C.f_3 = 0x00000000;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 0x00000001;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000001;
					Global_1C0180.f_A96[0x00000001] = 0x00000004;
					Global_1C0180.f_A96[0x00000002] = 0x00000003;
					Global_1C0180.f_A96[0x00000003] = 0x00000002;
					Global_1C0180.f_A94 = 0x00000004;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
					break;
				
				case 0x00000001:
				case 0x00000002:
				case 0x00000003:
					switch (iParam4)
					{
						case 0x00000001:
							uParam0->f_2C = 0x000003C9;
							break;
						
						case 0x00000002:
							uParam0->f_2C = 0x000003CA;
							break;
						
						case 0x00000003:
							uParam0->f_2C = 0x000003CD;
							break;
					}
					uParam0->f_2C.f_1 = 0x00000001;
					uParam0->f_2C.f_3 = 0x00000000;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 0x00000001;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000001;
					Global_1C0180.f_A96[0x00000001] = 0x00000004;
					Global_1C0180.f_A96[0x00000002] = 0x00000003;
					Global_1C0180.f_A96[0x00000003] = 0x00000002;
					Global_1C0180.f_A94 = 0x00000004;
					unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
					break;
				
				case 0x00000007:
					uParam0->f_2C = 0x000003CB;
					uParam0->f_2C.f_1 = 0x00000001;
					uParam0->f_2C.f_3 = 0x00000000;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 0x00000001;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000001;
					Global_1C0180.f_A96[0x00000001] = 0x00000004;
					Global_1C0180.f_A96[0x00000002] = 0x00000003;
					Global_1C0180.f_A96[0x00000003] = 0x00000002;
					Global_1C0180.f_A94 = 0x00000004;
					unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000004;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
					break;
				
				case 0x00000006:
				case 0x00000005:
					switch (iParam4)
					{
						case 0x00000006:
							uParam0->f_2C = 0x000003CC;
							break;
						
						case 0x00000005:
							uParam0->f_2C = 0x000003CE;
							break;
					}
					uParam0->f_2C.f_1 = 0x00000001;
					uParam0->f_2C.f_3 = 0x00000000;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 0x00000001;
					if (!unk_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0x00000000] = 0x00000000;
					Global_1C0180.f_A96[0x00000001] = 0x00000003;
					Global_1C0180.f_A96[0x00000002] = 0x00000002;
					Global_1C0180.f_A96[0x00000003] = 0x00000001;
					Global_1C0180.f_A94 = 0x00000004;
					unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
					Global_1C0180.f_ADC.f_1D[0x00000000] = 0x0000000C;
					Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
					break;
			}
			break;
		
		case 0x00000053:
			uParam0->f_2C = 0x000000C0;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 0x00000001;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000002;
			Global_1C0180.f_A96[0x00000001] = 0x00000005;
			Global_1C0180.f_A96[0x00000002] = 0x00000004;
			Global_1C0180.f_A96[0x00000003] = 0x00000003;
			Global_1C0180.f_A94 = 0x00000004;
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000011;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x00000052:
			uParam0->f_2C = 0x00000352;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 0x00000001;
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000004;
			Global_1C0180.f_A96[0x00000002] = 0x00000003;
			Global_1C0180.f_A96[0x00000003] = 0x00000002;
			Global_1C0180.f_A94 = 0x00000004;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x0000000A;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x00000054:
			uParam0->f_2C = 0x00000334;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 0x00000001;
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000004 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000001;
			Global_1C0180.f_A96[0x00000002] = 0x00000002;
			Global_1C0180.f_A96[0x00000003] = 0x00000005;
			Global_1C0180.f_A96[0x00000004] = 0x00000004;
			Global_1C0180.f_A96[0x00000005] = 0x00000003;
			Global_1C0180.f_A94 = 0x00000006;
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000004]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000005]);
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000004;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000009;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000004;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000004] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000005] = 0x00000005;
			break;
		
		case 0x00000056:
			uParam0->f_2C = 0x00000331;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000003;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1C0180.f_ADC = 0x00000001;
			Global_1C0180.f_ADC.f_19 = 0x00000000;
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000002;
			Global_1C0180.f_A94 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			Global_1C0180.f_ADC.f_1C = 0x00000003;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
			break;
		
		case 0x0000005B:
			uParam0->f_2C = 0x00000331;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000003;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "SP", 32);
			Global_1C0180.f_ADC = 0x00000001;
			if (iParam5 <= 0x00000000)
			{
				StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "", 24);
				Global_1C0180.f_A96[0x00000000] = 0x00000003;
				Global_1C0180.f_A96[0x00000001] = 0x00000004;
				Global_1C0180.f_A96[0x00000002] = 0x00000001;
				Global_1C0180.f_A96[0x00000003] = 0x00000000;
				Global_1C0180.f_A95 = 0x00000006;
				Global_1C0180.f_A94 = 0x00000002;
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
				Global_1C0180.f_ADC.f_1C = 0x00000004;
				Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
				Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000003;
			}
			else
			{
				StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "", 24);
				Global_1C0180.f_A96[0x00000000] = 0x00000003;
				Global_1C0180.f_A96[0x00000001] = 0x00000002;
				Global_1C0180.f_A96[0x00000002] = 0x00000004;
				Global_1C0180.f_A96[0x00000003] = 0x00000001;
				Global_1C0180.f_A95 = 0x00000004;
				Global_1C0180.f_A94 = 0x00000003;
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
				unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
				Global_1C0180.f_ADC.f_1C = 0x00000005;
				Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000001;
				Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000001;
				Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000003;
			}
			Global_1C0180.f_ADB = 0x00000000;
			switch (iParam4)
			{
				case 0x00000000:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 0x00000001:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 0x00000002:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 0x00000003:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 0x00000004:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 0x00000005:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 0x00000006:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 0x00000007:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 0x00000008:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000002 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000378:
			uParam0->f_2C = 0x000004B1;
			uParam0->f_2C.f_1 = 0x00000005;
			uParam0->f_2C.f_3 = 0x00000001;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000001;
			Global_1C0180.f_A96[0x00000002] = 0x00000002;
			Global_1C0180.f_A96[0x00000003] = 0x00000003;
			MemCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), {func_463(iParam4)}, 0x00000008);
			Global_1C0180.f_A94 = 0x00000004;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			switch (iParam4)
			{
				case 0x00000001:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000009;
					break;
				
				case 0x00000002:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 0x00000003:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 0x00000004:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 0x00000005:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 0x00000006:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 0x00000007:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 0x00000008:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000009;
					break;
				
				case 0x00000009:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1C0180.f_ADC = 0x00000001;
			Global_1C0180.f_A94 = 0x00000004;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000005;
			break;
		
		case 0x00000379:
			uParam0->f_2C = 0x000004B2;
			uParam0->f_2C.f_1 = 0x00000001;
			uParam0->f_2C.f_3 = 0x00000000;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1C0180.f_A9D[0x00000000 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000001 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000002 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1C0180.f_A9D[0x00000003 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1C0180.f_A96[0x00000000] = 0x00000000;
			Global_1C0180.f_A96[0x00000001] = 0x00000001;
			Global_1C0180.f_A96[0x00000002] = 0x00000003;
			Global_1C0180.f_A96[0x00000003] = 0x00000004;
			Global_1C0180.f_ADC = 0x00000001;
			Global_1C0180.f_A94 = 0x00000004;
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000000]);
			unk_0x0674E58A79778E99(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000001]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000002]);
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0x00000003]);
			Global_1C0180.f_ADC.f_1C = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000000] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000001] = 0x00000004;
			Global_1C0180.f_ADC.f_1D[0x00000002] = 0x00000005;
			Global_1C0180.f_ADC.f_1D[0x00000003] = 0x00000015;
			break;
	}
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < Global_1C0180.f_A94)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
		{
			unk_0x5D96D8530B3D0904(&(Global_1C0180.f_AD2), iVar2);
		}
		iVar2++;
	}
	Global_1C0180.f_B0A = func_462(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_462(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 0x00000010);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_456(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

struct<6> func_463(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000001:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_464(int iParam0)
{
	return iParam0 == 0x0000004A;
}

var func_465(int iParam0)
{
	return (func_467(iParam0) || func_466(iParam0));
}

bool func_466(int iParam0)
{
	return iParam0 == 0x0000002C;
}

bool func_467(int iParam0)
{
	return iParam0 == 0x0000002D;
}

bool func_468(int iParam0)
{
	return iParam0 == 0x0000000C;
}

struct<6> func_469(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000026:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 0x00000027:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 0x00000028:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 0x00000029:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 0x00000031:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 0x00000032:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 0x00000033:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 0x00000034:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 0x00000035:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 0x00000036:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 0x00000037:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 0x000000CE:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 0x000000CF:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 0x000000D0:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 0x000000D1:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_470()
{
	if (((((((((((Global_440000.f_127B9 == 0x00000001 || Global_440000.f_127B9 == 0x00000003) || Global_440000.f_127B9 == 0x00000005) || Global_440000.f_127B9 == 0x00000007) || Global_440000.f_127B9 == 0x00000013) || Global_440000.f_127B9 == 0x00000008) || Global_440000.f_127B9 == 0x00000009) || Global_440000.f_127B9 == 0x0000000B) || Global_440000.f_127B9 == 0x0000000D) || Global_440000.f_127B9 == 0x00000015) || Global_440000.f_127B9 == 0x00000017) || Global_440000.f_127B9 == 0x00000019)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_471(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0x00000002;
	if (Global_1C171C.f_2 + 5 < unk_0xF4CCC8CB6DE7F1AE() && Global_1C171C.f_2 > 0x00000000)
	{
		func_366(&Global_1C171C);
		func_366(&(Global_1C171C.f_31));
		*iParam0 = 0x00000000;
		Global_1C171C.f_2 = 0x00000000;
		func_480(0x00000000);
	}
	Global_1C171C.f_2 = unk_0xF4CCC8CB6DE7F1AE();
	iVar1 = 0xFFFFFFFF;
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x98DF743F0BF6732B() == 0x00000000)
		{
			iVar1 = unk_0xFBB4B649DD3EA6F0();
		}
	}
	if ((unk_0x33A494591F2C1975() && (((iVar1 == 0x00000004 || iVar1 == 0x00000002) || iVar1 == 0x00000001) || iVar1 == 0x00000005)) || (!func_478() && unk_0x58424C49F8924842()))
	{
		if (unk_0xACED3FBF20B322FA())
		{
			func_475(&(Global_1C171C.f_3), func_477(&(Global_1C171C.f_3)));
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004))
			{
				unk_0x5D96D8530B3D0904(iParam0, 0x00000004);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_473(&(Global_1C171C.f_3), 0x00000000);
			}
		}
		else
		{
			if (iVar1 == 0x00000004)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			}
			else if (iVar1 == 0x00000002)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			}
			else if (iVar1 == 0x00000001)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			}
			else if (iVar1 == 0x00000005)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			}
			else if (!func_478())
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			}
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000000))
			{
				if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0x00000000);
				}
			}
			else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
			{
				func_366(&(Global_1C171C.f_31));
				func_366(&Global_1C171C);
				*iParam0 = 0x00000000;
				Global_1C171C.f_2 = 0x00000000;
				func_480(0x00000000);
				return 0x00000001;
			}
		}
	}
	else
	{
		func_475(&(Global_1C171C.f_3), func_477(&(Global_1C171C.f_3)));
		if ((func_472(&(Global_1C171C.f_31)) && !func_444(&(Global_1C171C.f_31), 0x000007D0, 0x00000001)) && !unk_0x58424C49F8924842())
		{
			unk_0x5D96D8530B3D0904(iParam0, 0x00000003);
			StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
			func_473(&(Global_1C171C.f_3), 0x00000000);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000003))
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001))
			{
				unk_0xB0A3CB46BE5B746A(0x00000000);
				unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_473(&(Global_1C171C.f_3), 0x00000000);
			}
		}
		if (func_472(&Global_1C171C))
		{
			if (!func_444(&Global_1C171C, 0x00000FA0, 0x00000001))
			{
				bVar2 = 0x00000001;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x58424C49F8924842())
				{
					if (unk_0x1E517F9E1F09160C())
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
					}
					else
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
					}
					if (!unk_0x1A72D8C9F025E5E3())
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000000))
						{
							if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
							{
								unk_0x5D96D8530B3D0904(iParam0, 0x00000000);
							}
						}
						else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
						{
							func_366(&Global_1C171C);
							*iParam0 = 0x00000000;
							Global_1C171C.f_2 = 0x00000000;
							func_480(0x00000000);
							return 0x00000001;
						}
					}
				}
				else
				{
					func_366(&Global_1C171C);
					*iParam0 = 0x00000000;
					Global_1C171C.f_2 = 0x00000000;
					func_480(0x00000000);
					return 0x00000001;
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000003))
			{
				if (unk_0x1E517F9E1F09160C())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000000))
				{
					if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
					{
						unk_0x5D96D8530B3D0904(iParam0, 0x00000000);
					}
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
				{
					func_366(&(Global_1C171C.f_31));
					func_366(&Global_1C171C);
					*iParam0 = 0x00000000;
					Global_1C171C.f_2 = 0x00000000;
					func_480(0x00000000);
					return 0x00000001;
				}
			}
			else
			{
				if (unk_0x1E517F9E1F09160C())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
				}
				if (!unk_0x1A72D8C9F025E5E3())
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000000))
					{
						if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
						{
							unk_0x5D96D8530B3D0904(iParam0, 0x00000000);
						}
					}
					else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
					{
						func_366(&(Global_1C171C.f_31));
						func_366(&Global_1C171C);
						*iParam0 = 0x00000000;
						Global_1C171C.f_2 = 0x00000000;
						func_480(0x00000000);
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

bool func_472(var uParam0)
{
	return uParam0->f_1;
}

void func_473(var uParam0, bool bParam1)
{
	func_474(uParam0);
	if (bParam1)
	{
		func_480(0x00000000);
	}
	uParam0->f_23 = 0x00000001;
}

void func_474(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_29 = 0x00000001;
	*uParam0 = { Var0 };
}

void func_475(var uParam0, int iParam1)
{
	if (iParam1 == 0x00000001)
	{
		*uParam0 = 0x00000000;
		func_476(uParam0);
	}
	if (*uParam0 == 0x00000000)
	{
		if (uParam0->f_24)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x6D99DF8263D35CE5(uParam0->f_22);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_11));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x6D99DF8263D35CE5(uParam0->f_22);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_11));
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x164431059FF80580(uParam0->f_21, 0x00000046);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		*uParam0 = 0x00000001;
	}
	if (*uParam0 == 0x00000001)
	{
	}
}

void func_476(var uParam0)
{
	uParam0->f_23 = 0x00000000;
}

int func_477(var uParam0)
{
	return uParam0->f_23;
}

int func_478()
{
	if (func_479())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_479()
{
	return Global_258DFD;
}

void func_480(bool bParam0)
{
	unk_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		unk_0xA3B57116ADBCDF5F();
	}
}

void func_481(var uParam0, int iParam1, char[4] cParam2)
{
	func_154(&(Local_45.f_77), 0x43480000, 0x00000001, 0x00000000, 0x00000001, 0x3F800000);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000007);
	func_460(iParam1, cParam2);
	func_482(uParam0, &uLocal_1210);
}

void func_482(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_437(&(Global_1C171C.f_31), 0x00000001, 0x00000000);
	unk_0xE19C2AAC820D8ED5();
	func_543();
	func_542(0x00000000);
	unk_0x3FC8DBCC154CA56B();
	func_540(0x00000001);
	unk_0x3584F71E5CA29322(0x0000000A);
	func_539(0x00000001);
	func_538(0x00000001);
	if (!func_439())
	{
		if (!unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			unk_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000003))
	{
		*uParam0 = func_357();
		unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000003);
	}
	Var10 = { func_455(unk_0xD803B885F5E47A62()) };
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (((!unk_0x999A3BFD3E9B5D2C() || !unk_0x1963B11DE70153E0()) || (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())) || Global_1C0180.f_B10 != 0x00000000)
		{
			if (!unk_0x1963B11DE70153E0())
			{
				if (Global_1C0180.f_B0D != 0x00000002)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
					Global_1C0180.f_B0D = 0x00000002;
				}
			}
			else if (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())
			{
				if (Global_1C0180.f_B0D != 0x00000003)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
					Global_1C0180.f_B0D = 0x00000003;
				}
			}
			else if (!unk_0x999A3BFD3E9B5D2C())
			{
				if (Global_1C0180.f_B0D != 0x00000004)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
					Global_1C0180.f_B0D = 0x00000004;
				}
			}
			else if (Global_1C0180.f_B10 != 0x00000000)
			{
				if (Global_1C0180.f_B0D != 0x00000005)
				{
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
					Global_1C0180.f_B0D = 0x00000005;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000001))
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x7E60D21B163E9D56();
				func_537(*uParam0, Global_1C0180.f_ADC);
				if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
				{
					if (!func_456(uParam1->f_2C))
					{
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							Var6 = { Global_1C0180.f_ADC.f_9 };
							func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					else if (!Global_1C0180.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					func_535(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
				}
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000004);
				func_534(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
				func_534(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
				func_534(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000001);
				func_533(*uParam0);
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
				unk_0xA37A90C62806D848(0x00000001);
			}
			else
			{
				func_533(*uParam0);
			}
		}
		else
		{
			if (Global_1C0180.f_B0D != 0x00000001)
			{
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
				Global_1C0180.f_B0D = 0x00000001;
			}
			if (!func_505(uParam1))
			{
				uParam1->f_F6.f_1 = 0xFFFFFFFF;
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
				if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000000))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x7E60D21B163E9D56();
					func_537(*uParam0, Global_1C0180.f_ADC);
					if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_456(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 0x00000001, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						func_535(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000000);
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
				}
				iVar3 = 0x00000000;
				iVar0 = 0x00000000;
				if (Global_1C0180.f_B09 == 0xFFFFFFFF)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000003)
					{
						if (iVar0 == 0x00000000)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000004);
							func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000001)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
							func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000002)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
							func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000007);
						func_504(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09 = 0x00000001;
					func_366(&(Global_1C0180.f_B07));
				}
				else if (func_444(&(Global_1C0180.f_B07), 0x0000012C, 0x00000000))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1C0180.f_B09, 24);
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000003)
					{
						if (iVar0 == 0x00000000)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000004);
							func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000001)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
							func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000002)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
							func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000007);
						func_504(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09++;
					if (Global_1C0180.f_B09 > 0x00000003)
					{
						Global_1C0180.f_B09 = 0x00000000;
					}
					func_366(&(Global_1C0180.f_B07));
				}
				func_533(*uParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000000);
				if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000001))
				{
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000003)
					{
						uParam1->f_F6.f_BB[iVar0] = 0x00000000;
						iVar0++;
					}
					unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x7E60D21B163E9D56();
					func_537(*uParam0, Global_1C0180.f_ADC);
					if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_456(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 0x00000001, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_536(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						func_535(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000006))
					{
						func_369(&Global_1C126B);
						func_500(uParam1, &Global_1C126B);
						func_499(uParam1, &Global_1C126B);
					}
					iVar3 = 0x00000000;
					uParam1->f_F6.f_2 = 0x00000000;
					if ((Global_1C0180.f_A90[0x00000000] > 0x00000001 || (Global_1C0180.f_A90[0x00000000] > 0x00000000 && Global_1C0180.f_AD7[0x00000000] != 0xFFFFFFFF)) || (((Global_1C0180.f_A90[0x00000000] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_456(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000000] != 0xFFFFFFFF))
					{
						uParam1->f_F6.f_1 = 0xFFFFFFFF;
						iVar0 = 0x00000000;
						iVar0 = 0x00000000;
						while (iVar0 < 0x0000000C)
						{
							bVar14 = 0x00000000;
							if (Global_1C126B[iVar0 /*100*/].f_4B == 0x00000001)
							{
								if (!iVar8[0x00000000])
								{
									iVar9 = 0x00000000;
									unk_0x5D96D8530B3D0904(&iVar9, 0x00000004);
									func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
									iVar8[0x00000000] = 0x00000001;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 0x00000002)
							{
								if (!iVar8[0x00000001])
								{
									iVar9 = 0x00000000;
									unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
									if ((Global_1C0180.f_A90[0x00000001] < 0x00000001 && Global_1C0180.f_AD7[0x00000001] == 0xFFFFFFFF) && !(((Global_1C0180.f_A90[0x00000001] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_456(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000001] != 0xFFFFFFFF))
									{
										func_534(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
										bVar14 = 0x00000001;
									}
									else
									{
										func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
									}
									iVar8[0x00000001] = 0x00000001;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 0x00000003)
							{
								if (!iVar8[0x00000002])
								{
									iVar9 = 0x00000000;
									unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
									if (!unk_0xC2F420D189FDB329())
									{
										bVar14 = 0x00000001;
									}
									else if (!unk_0xB0D6327A81292879())
									{
										bVar14 = 0x00000001;
									}
									if ((Global_1C0180.f_A90[0x00000002] < 0x00000002 && Global_1C0180.f_AD7[0x00000002] == 0xFFFFFFFF) && !(((Global_1C0180.f_A90[0x00000002] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_456(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000002] != 0xFFFFFFFF))
									{
										bVar14 = 0x00000001;
									}
									if (bVar14)
									{
										func_534(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
									}
									else
									{
										func_534(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
									}
									iVar8[0x00000002] = 0x00000001;
								}
							}
							if (func_450(Global_1C126B[iVar0 /*100*/].f_20))
							{
								if (func_456(uParam1->f_2C))
								{
									unk_0x4D8EB33D0EE1D0CB(unk_0xD803B885F5E47A62(), &uVar11);
									if (!Global_1C126B[iVar0 /*100*/].f_4A && unk_0x7F8A39872A07D2CE(&(uParam1->f_2C.f_3.f_1[0x00000001 /*16*/].f_8), &uVar11))
									{
										bVar14 = 0x00000001;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0x00000000;
									if (!Global_1C0180.f_ADC.f_1B)
									{
										if (func_498(&(Global_1C126B[iVar0 /*100*/].f_20), &Var10))
										{
											unk_0x5D96D8530B3D0904(&iVar9, 0x00000001);
											if (uParam1->f_F6.f_1 == 0xFFFFFFFF)
											{
												bVar4 = 0x00000001;
												uParam1->f_F6.f_1 = iVar0;
												unk_0x5D96D8530B3D0904(&iVar9, 0x00000003);
											}
										}
									}
									if (func_456(uParam1->f_2C))
									{
										Var6 = { Global_1C126B[iVar0 /*100*/] };
										if (!unk_0xEA6BC48857E0AC4C(&(Global_1C126B[iVar0 /*100*/].f_54)) && !unk_0x7F8A39872A07D2CE(&(Global_1C126B[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C126B[iVar0 /*100*/].f_54), 64);
										}
										func_497(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &Var6, &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_497(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &(Global_1C126B[iVar0 /*100*/]), &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									iVar1 = 0x00000000;
									while (iVar1 < Global_1C0180.f_A94)
									{
										bVar5 = 0x00000000;
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD2, iVar1))
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD0, iVar1))
											{
												if (Global_1C0180.f_AC2[iVar1] == Global_1C126B[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = 0x00000001;
												}
											}
											if (bVar5)
											{
												func_491(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], 0x00000000, Global_1C126B[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_491(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], Global_1C126B[iVar0 /*100*/].f_4A, Global_1C126B[iVar0 /*100*/].f_3A);
											}
										}
										else
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD0, iVar1))
											{
												if (Global_1C0180.f_AC9[iVar1] == Global_1C126B[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = 0x00000001;
												}
											}
											if (bVar5)
											{
												func_488(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], 0x00000000);
											}
											else
											{
												func_488(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], Global_1C126B[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_487();
									uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 0x00000001)]++;
									if (uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 0x00000001)] == 0x00000002)
									{
										if (Global_1C126B[iVar0 /*100*/].f_3B > 0x00000002)
										{
											unk_0x5D96D8530B3D0904(&iVar9, 0x00000002);
											unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[0x00000000 /*15*/].f_1), 0x00000002);
											func_486(*uParam0, (iVar3 - 0x00000001), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0x00000000;
						iVar0 = 0x00000000;
						while (iVar0 < 0x00000003)
						{
							uParam1->f_F6.f_BB[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000004);
						func_534(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
						func_534(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
						func_534(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000001);
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
					func_533(*uParam0);
					unk_0xA37A90C62806D848(0x00000001);
					if (uParam1->f_F6.f_1 == 0xFFFFFFFF && !bVar4 == 0x00000001)
					{
						if (Global_1C0180.f_A90[0x00000000] > 0x00000001)
						{
							uParam1->f_F6.f_1 = 0x00000000;
							unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 0x00000003);
							func_486(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_533(*uParam0);
					func_483(uParam0, uParam1);
				}
			}
		}
	}
}

void func_483(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_F6.f_1;
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		unk_0x5D80F91A16C40CDE();
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000EF);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000F0);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000ED);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000EE);
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
		if (unk_0x7FEE810EE9E768EB(0x00000002, 0x000000F1))
		{
			unk_0x3D9702C33283E122(0x00000002, 0x000000BC, 1f);
		}
		if (unk_0x7FEE810EE9E768EB(0x00000002, 0x000000F2))
		{
			unk_0x3D9702C33283E122(0x00000002, 0x000000BB, 1f);
		}
		if (unk_0xE6CD3F2A2067C866(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 0x00000005)
			{
				if (iVar3 > uParam1->f_F6.f_BB[0x00000000])
				{
					if (iVar3 <= (uParam1->f_F6.f_BB[0x00000000] + uParam1->f_F6.f_BB[0x00000001]) + 2)
					{
						iVar3 = (iVar3 - 0x00000002);
					}
					else
					{
						iVar3 = (iVar3 - 0x00000004);
					}
				}
				iVar3 = (iVar3 - 0x00000001);
				if (uParam1->f_F6.f_1 != iVar3)
				{
					uParam1->f_F6.f_1 = iVar3;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					bVar0 = 0x00000001;
				}
				else
				{
					unk_0x3D9702C33283E122(0x00000002, 0x000000D9, 1f);
				}
			}
		}
	}
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		func_485(&uVar5, &iVar6, &uVar7, &uVar8, 0x00000000);
	}
	if (uParam1->f_F6.f_2 > 0x00000000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_F6, 0x00000000))
		{
			if ((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC) || unk_0x7FEE810EE9E768EB(0x00000002, 0x000000BC)) || iVar6 < 0xFFFFFF9C)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&(uParam1->f_F6), 0x00000000);
				func_366(&(uParam1->f_F6.f_3));
				bVar0 = 0x00000001;
			}
		}
		else if (func_484(uParam1, 0x000000BC))
		{
			unk_0x0674E58A79778E99(&(uParam1->f_F6), 0x00000000);
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_F6, 0x00000001))
		{
			if ((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB) || unk_0x7FEE810EE9E768EB(0x00000002, 0x000000BB)) || iVar6 > 0x00000064)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
				uParam1->f_F6.f_1++;
				unk_0x5D96D8530B3D0904(&(uParam1->f_F6), 0x00000001);
				func_366(&(uParam1->f_F6.f_3));
				bVar0 = 0x00000001;
			}
		}
		else if (func_484(uParam1, 0x000000BB))
		{
			unk_0x0674E58A79778E99(&(uParam1->f_F6), 0x00000001);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_F6.f_1 < 0x00000000)
		{
			uParam1->f_F6.f_1 = (uParam1->f_F6.f_2 - 0x00000001);
		}
		if (uParam1->f_F6.f_1 >= uParam1->f_F6.f_2)
		{
			uParam1->f_F6.f_1 = 0x00000000;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_F6, 0x00000003))
	{
		if ((unk_0x06F8112AA79C53D9(0x00000002, 0x000000CC) || unk_0xD245978525608929(0x00000002, 0x000000CC)) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000ED))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_F6), 0x00000003);
			func_366(&(uParam1->f_F6.f_3));
			bVar0 = 0x00000001;
		}
	}
	else if (func_484(uParam1, 0x000000CC))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_F6), 0x00000003);
	}
	if (uParam1->f_F6.f_1 >= 0x00000000)
	{
		if (uParam1->f_F6.f_1 != iVar1)
		{
			if (iVar1 >= 0x00000000)
			{
				unk_0x0674E58A79778E99(&(uParam1->f_F6.f_6[iVar1 /*15*/].f_1), 0x00000003);
				func_486(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 0x00000003);
			func_486(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
		}
		if (func_450(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_F6, 0x00000002))
			{
				if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000D9) || unk_0xD245978525608929(0x00000002, 0x000000D9))
				{
					if (!unk_0x1A72D8C9F025E5E3())
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 0x00000001);
						unk_0x5D96D8530B3D0904(&(uParam1->f_F6), 0x00000002);
						unk_0x7DA6B436D3570520(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000D9))
			{
				unk_0x0674E58A79778E99(&(uParam1->f_F6), 0x00000002);
			}
		}
	}
}

int func_484(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 0x000000BC || iParam1 == 0x000000BB)
	{
		func_485(&uVar0, &iVar1, &uVar2, &uVar3, 0x00000000);
		if (((!unk_0x06F8112AA79C53D9(0x00000002, iParam1) && !unk_0x7FEE810EE9E768EB(0x00000002, iParam1)) && (iVar1 < 0x0000004B && iVar1 > 0xFFFFFFB5)) || func_444(&(uParam0->f_F6.f_3), 0x000000FA, 0x00000000))
		{
			return 0x00000001;
		}
	}
	else if ((!unk_0x06F8112AA79C53D9(0x00000002, iParam1) && !unk_0x7FEE810EE9E768EB(0x00000002, iParam1)) || func_444(&(uParam0->f_F6.f_3), 0x000000FA, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_485(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_486(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

void func_487()
{
	unk_0x7E60D21B163E9D56();
}

void func_488(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_1D[iParam14])
	{
		case 0x00000004:
			if (bParam16)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x21994591120B91F0(fParam15, 0x00000002);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x0000000C:
			if (bParam16)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(SYSTEM::FLOOR(fParam15));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000011:
		case 0x00000013:
		case 0x00000012:
		case 0x00000014:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 0x00000012 || Param0.f_1D[iParam14] == 0x00000014)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_1D[iParam14] == 0x00000013 || Param0.f_1D[iParam14] == 0x00000014)
					{
						fParam15 = func_490(fParam15);
					}
					else
					{
						fParam15 = func_489(fParam15);
					}
				}
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x21994591120B91F0(fParam15, 0x00000002);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000000:
			break;
	}
}

float func_489(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_490(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_491(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
{
	struct<4> Var0;
	
	if (iParam15 == 0x7FFFFFFF || iParam15 == 0x80000001)
	{
		bParam16 = 0x00000000;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_1D[iParam14])
	{
		case 0x00000005:
			if (bParam16)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(iParam15);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000007:
			if (bParam16)
			{
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(-iParam15);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000001:
		case 0x00000009:
		case 0x0000000B:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 0x0000000B && iParam15 < 0x00000000)
				{
					iParam15 = (iParam15 * 0xFFFFFFFF);
				}
				if (iParam15 >= 0x0036EE80 || iParam15 <= 0xFFC91180)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 0x0000000E);
					unk_0x779B34565F4D71B1();
				}
				else if (Param0.f_1D[iParam14] == 0x00000009)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 0x00000006);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 0x00000807);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000006:
			if (bParam16)
			{
				if (iParam15 == 0x7FFFFFFF)
				{
					unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					unk_0x779B34565F4D71B1();
				}
				else if (iParam15 >= 0x0036EE80 || iParam15 <= 0xFFC91180)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 0x0000000E);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 0x00000807);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000002:
		case 0x0000000A:
			if (bParam16)
			{
				iParam15 = (iParam15 * 0xFFFFFFFF);
				if (iParam15 >= 0x0036EE80 || iParam15 <= 0xFFC91180)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 0x0000000E);
					unk_0x779B34565F4D71B1();
				}
				else if (Param0.f_1D[iParam14] == 0x0000000A)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 0x00000006);
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam15, 0x00000807);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000003:
			if (bParam17)
			{
				if (unk_0x3FC14104C3FD24D5(iParam15))
				{
					unk_0x7ACC3006A87F8B39("SCLB_VEH_CUST");
					unk_0x6B012227B3921E18(unk_0x1739BA50603D849C(iParam15));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					unk_0x779B34565F4D71B1();
				}
			}
			else if (unk_0x3FC14104C3FD24D5(iParam15))
			{
				unk_0x7ACC3006A87F8B39(unk_0x1739BA50603D849C(iParam15));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000008:
			if (func_496(iParam15) != 0x00000000)
			{
				unk_0x7ACC3006A87F8B39(func_493(func_496(iParam15), 0x00000000));
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x0000000D:
		case 0x0000000F:
		case 0x0000000E:
		case 0x00000010:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 0x0000000E || Param0.f_1D[iParam14] == 0x00000010)
				{
					iParam15 = (iParam15 * 0xFFFFFFFF);
				}
				if (!unk_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_1D[iParam14] == 0x0000000F || Param0.f_1D[iParam14] == 0x00000010)
					{
						iParam15 = SYSTEM::FLOOR(func_490(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_489(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				unk_0x7ACC3006A87F8B39("NUMBER");
				unk_0x6D99DF8263D35CE5(iParam15);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000015:
			if (iParam15 > 0x00000014)
			{
				unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				unk_0x779B34565F4D71B1();
			}
			else
			{
				Var0 = { func_492(iParam15) };
				unk_0x7ACC3006A87F8B39(&Var0);
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000000:
			break;
	}
}

struct<4> func_492(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 0x00000014)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0x00000000)
	{
		iParam0 = 0x00000000;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_493(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 0x67DD81F2:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case 0xA81B4220:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 0x1F75106C:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case 0xF624D80A:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case 0xAE2EA48C:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 0x12E82D3D:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case 0xCD274149:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 0x0781FE4A:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case 0xBD248B55:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case 0xBA45E8B8:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case 0x94117305:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 0x19044EE0:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case 0xF6773201:
			return "WT_VEH_WEP";
			break;
		
		case 0xBFE256D4:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 0x78A97CD0:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 0x0A914799:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case 0xDBBD7280:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 0x394F415C:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case 0xFAD1F1C9:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 0x555AF99A:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case 0x969C3D67:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case 0x88374054:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 0x6A6C02E0:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case 0xCB96392F:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case 0x84D6FAFD:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case 0x97EA20B8:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 0x3813FC08:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case 0xAF3696A1:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 0x476BF155:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case 0xB62D1F67:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case 0x917F6C8C:
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case 0x2B5EF5EC:
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		default:
			if (func_495(iParam0, &Var0) != 0xFFFFFFFF)
			{
				if (bParam1)
				{
					return func_494(&(Var0.f_1F));
				}
				else
				{
					return func_494(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_494(var uParam0)
{
	return uParam0;
}

int func_495(int iParam0, var uParam1)
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

int func_496(int iParam0)
{
	if (iParam0 == 0x00000258)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 0x000001F4)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 0x00000190)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 0x00000191)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 0x00000192)
	{
		return 0xDDE2A27C;
	}
	else if (iParam0 == 0x0000012C)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 0x0000012D)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 0x0000012E)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 0x0000012F)
	{
		return 0xC78D71B4;
	}
	else if (iParam0 == 0x000000C8)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 0x000000C9)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 0x000000CA)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 0x000000CB)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 0x00000064)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 0x00000065)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 0x00000066)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0x00000000)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 0x00000001)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 0x00000002)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 0x00000003)
	{
		return joaat("weapon_pistol50");
	}
	return 0x00000000;
}

void func_497(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	if (iParam3 > 0x00000000)
	{
		unk_0x7ACC3006A87F8B39("NUMBER");
		unk_0x6D99DF8263D35CE5(iParam3);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		unk_0x7ACC3006A87F8B39("SC_LB_EMPTY");
		unk_0x779B34565F4D71B1();
	}
	unk_0x045A0775396CC970(sParam4);
	unk_0x045A0775396CC970(sParam5);
}

int func_498(var uParam0, var uParam1)
{
	if (!func_450(*uParam0))
	{
		return 0x00000000;
	}
	if (!func_450(*uParam1))
	{
		return 0x00000000;
	}
	if (unk_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_499(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_3C = 0x00000006;
	Var2.f_43 = 0x00000006;
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000005) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000006))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			if ((uParam1[iVar0 /*100*/])->f_4B != 0x00000000)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 0x0000000B)
				{
					if ((uParam1[iVar1 /*100*/])->f_4B != 0x00000000)
					{
						if ((uParam1[iVar1 /*100*/])->f_4B < (uParam1[iVar0 /*100*/])->f_4B)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
							(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
							(uParam1[iVar0 /*100*/])->f_4B = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_4B == (uParam1[iVar0 /*100*/])->f_4B)
						{
							if ((uParam1[iVar1 /*100*/])->f_3B != 0xFFFFFFFF)
							{
								if ((uParam1[iVar1 /*100*/])->f_3B < (uParam1[iVar0 /*100*/])->f_3B || (uParam1[iVar0 /*100*/])->f_3B == 0xFFFFFFFF)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
									(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
									(uParam1[iVar0 /*100*/])->f_4B = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_500(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000005) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000006))
	{
		iVar4 = 0x00000000;
		while (iVar4 < 0x0000000C)
		{
			if (func_503(uParam1, iVar3, &uVar0, 0x00000000))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 0x00000001;
				iVar3++;
				if (iVar3 >= 0x0000000C)
				{
					return;
				}
			}
			if (func_503(uParam1, iVar3, &uVar1, 0x00000001))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 0x00000002;
				iVar3++;
				if (iVar3 >= 0x0000000C)
				{
					return;
				}
			}
			if (func_503(uParam1, iVar3, &uVar2, 0x00000002))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 0x00000003;
				iVar3++;
				if (iVar3 >= 0x0000000C)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_501(uParam1);
	}
}

void func_501(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1C0180.f_A90[iVar0] = 0x00000000;
		Global_1C0180.f_AD7[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	Var3 = { func_455(unk_0xD803B885F5E47A62()) };
	if (unk_0xE4F1C23C6353EC03(Global_1C0180.f_B0A))
	{
		iVar4 = unk_0x9B6FABF659F515A2(Global_1C0180.f_B0A);
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 0x0000000C)
			{
				func_502(&Global_1C11E9);
				iVar2 = 0x00000000;
				unk_0xAB008D43188476FB(Global_1C0180.f_B0A, iVar0, &Global_1C11E9);
				*(uParam0[iVar0 /*100*/]) = { Global_1C11E9.f_1 };
				(uParam0[iVar0 /*100*/])->f_10 = { Global_1C11E9.f_11 };
				(uParam0[iVar0 /*100*/])->f_20 = { Global_1C11E9.f_21 };
				(uParam0[iVar0 /*100*/])->f_2D = { Global_1C11E9.f_2E };
				(uParam0[iVar0 /*100*/])->f_3A = Global_1C11E9.f_3B;
				(uParam0[iVar0 /*100*/])->f_3B = Global_1C11E9.f_3C;
				Global_1C0180.f_A94 = Global_1C11E9.f_3E;
				Global_1C0180.f_AD1 = Global_1C11E9.f_3F;
				iVar2 = 0x00000000;
				if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3D, 0x00000001))
				{
					iVar2 = 0x00000001;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3D, 0x00000002))
				{
					iVar2 = 0x00000002;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3D, 0x00000003))
				{
					iVar2 = 0x00000003;
				}
				Global_1C0180.f_A90[(iVar2 - 0x00000001)]++;
				(uParam0[iVar0 /*100*/])->f_4B = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_3B != 0xFFFFFFFF)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3D, 0x00000000))
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0x00000001;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0x00000000;
					}
					if (func_498(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
					{
						Global_1C0180.f_AD7[(iVar2 - 0x00000001)] = 0x00000000;
					}
				}
				iVar1 = 0x00000000;
				while (iVar1 < Global_1C11E9.f_3E)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3F, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_43[iVar1] = Global_1C11E9.f_61[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_3C[iVar1] = Global_1C11E9.f_40[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_502(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0x00000000;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_11), "", 64);
	uParam0->f_21 = { Var0 };
	uParam0->f_2E = { Var0 };
	uParam0->f_3B = 0x00000000;
	uParam0->f_3C = 0x00000000;
	uParam0->f_3D = 0x00000000;
	uParam0->f_3E = 0x00000000;
	uParam0->f_3F = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		uParam0->f_40[iVar1] = 0f;
		uParam0->f_61[iVar1] = 0x00000000;
		iVar1++;
	}
}

int func_503(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0x00000000)
	{
		if (Global_1C0180[iParam3 /*901*/][0x00000000 /*75*/].f_3B > 0x00000000)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][0x00000000 /*75*/] };
			Global_1C11B0[iParam3 /*16*/] = { Global_1C0180[iParam3 /*901*/][0x00000000 /*75*/] };
			Global_1C11B0.f_31[iParam3] = Global_1C0180[iParam3 /*901*/][0x00000000 /*75*/].f_43[Global_1C0180.f_ADB];
			Global_1C11B0.f_35[iParam3] = Global_1C0180[iParam3 /*901*/][0x00000000 /*75*/].f_3C[Global_1C0180.f_ADB];
			*uParam2++;
			return 0x00000001;
		}
	}
	else if (*uParam2 == 0x00000001)
	{
		if (Global_1C0180.f_AD7[iParam3] > 0x00000000)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][Global_1C0180.f_AD7[iParam3] /*75*/] };
			*uParam2++;
			return 0x00000001;
		}
		else
		{
			if (Global_1C0180.f_AD7[iParam3] < 0x00000000)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
				(uParam0[iParam1 /*100*/])->f_20 = { func_455(unk_0xD803B885F5E47A62()) };
				(uParam0[iParam1 /*100*/])->f_3B = 0xFFFFFFFF;
				(uParam0[iParam1 /*100*/])->f_43[0x00000000] = 0xFFFFFFFF;
				(uParam0[iParam1 /*100*/])->f_43[0x00000001] = 0xFFFFFFFF;
				(uParam0[iParam1 /*100*/])->f_43[0x00000002] = 0xFFFFFFFF;
				(uParam0[iParam1 /*100*/])->f_43[0x00000003] = 0xFFFFFFFF;
				(uParam0[iParam1 /*100*/])->f_3C[0x00000000] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[0x00000001] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[0x00000002] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[0x00000003] = -1f;
				*uParam2++;
				return 0x00000001;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 0x00000002) == 0x00000000)
	{
		iVar0 = (*uParam2 / 0x00000002);
		if ((Global_1C0180.f_AD7[iParam3] - iVar0) >= 0x00000001)
		{
			if (Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] - iVar0) /*75*/].f_3B > 0x00000000)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 0x00000001;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 0x00000002)));
		if ((Global_1C0180.f_AD7[iParam3] + iVar0) < 0x0000000C && (Global_1C0180.f_AD7[iParam3] + iVar0) > 0x00000000)
		{
			if (Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] + iVar0) /*75*/].f_3B > 0x00000001)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 0x00000001;
			}
		}
	}
	*uParam2++;
	return 0x00000000;
}

void func_504(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x5D96D8530B3D0904(&iParam2, 0x00000007);
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sParam3);
	unk_0x0EF1238B8EFD4D04();
	unk_0x7E60D21B163E9D56();
}

int func_505(var uParam0)
{
	if (!Global_1C017C)
	{
		if (!func_472(&(Global_1C0180.f_B0B)))
		{
			func_445(&(Global_1C0180.f_B0B), 0x00000001, 0x00000000);
			return 0x00000000;
		}
		else if (!func_444(&(Global_1C0180.f_B0B), 0x000003E8, 0x00000001))
		{
			return 0x00000000;
		}
	}
	if (((!unk_0x999A3BFD3E9B5D2C() || !unk_0x1963B11DE70153E0()) || (!unk_0x8BB6DE13A9F3105E() && unk_0x9AE561F9BC3F06D8())) || Global_1C0180.f_B10 != 0x00000000)
	{
		unk_0x0674E58A79778E99(&(uParam0->f_2A), 0x00000004);
		return 0x00000001;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000004))
	{
		func_532(uParam0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000004);
		return 0x00000000;
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000005))
	{
		(*uParam0)[0x00000000] = 0x00000002;
		(*uParam0)[0x00000001] = 0x00000001;
		(*uParam0)[0x00000002] = 0x00000003;
		return 0x00000001;
	}
	if (!func_530(uParam0))
	{
		return 0x00000000;
	}
	if (!func_528(uParam0))
	{
		return 0x00000000;
	}
	if (!func_521(uParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000006))
	{
		func_369(&Global_1C126B);
		func_500(uParam0, &Global_1C126B);
		func_499(uParam0, &Global_1C126B);
		unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000006);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000007))
	{
		if (!func_472(&(Global_1C0180.f_B0E)))
		{
			func_445(&(Global_1C0180.f_B0E), 0x00000001, 0x00000000);
		}
		else if (func_444(&(Global_1C0180.f_B0E), 0x00007530, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000007);
		}
		if (func_518(&Global_1C126B))
		{
		}
		else
		{
			return 0x00000000;
		}
		if (func_515(&Global_1C126B))
		{
		}
		else
		{
			return 0x00000000;
		}
		if (func_509(&Global_1C126B))
		{
			func_506(&Global_1C126B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000007);
			func_506(&Global_1C126B);
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_506(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_508(Global_1C0180.f_B0A);
	if (Global_1C0DF1.f_51[iVar2] != 0x00000000)
	{
		func_507(0xFFFFFFFF, iVar2);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		func_502(&Global_1C11E9);
		if ((uParam0[iVar0 /*100*/])->f_4B != 0x00000000)
		{
			Global_1C11E9 = Global_1C0180.f_B0A;
			Global_1C11E9.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*100*/])->f_10), ""))
			{
				Global_1C11E9.f_11 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1C11E9.f_11 = { (uParam0[iVar0 /*100*/])->f_10 };
			}
			Global_1C11E9.f_21 = { (uParam0[iVar0 /*100*/])->f_20 };
			if (func_450((uParam0[iVar0 /*100*/])->f_2D))
			{
				Global_1C11E9.f_2E = { (uParam0[iVar0 /*100*/])->f_2D };
			}
			else
			{
				Global_1C11E9.f_2E = { (uParam0[iVar0 /*100*/])->f_20 };
			}
			Global_1C11E9.f_3B = (uParam0[iVar0 /*100*/])->f_3A;
			Global_1C11E9.f_3C = (uParam0[iVar0 /*100*/])->f_3B;
			Global_1C11E9.f_3E = Global_1C0180.f_A94;
			Global_1C11E9.f_3F = Global_1C0180.f_AD2;
			if ((uParam0[iVar0 /*100*/])->f_4A)
			{
				unk_0x5D96D8530B3D0904(&(Global_1C11E9.f_3D), 0x00000000);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1C11E9.f_3D), 0x00000000);
			}
			unk_0x5D96D8530B3D0904(&(Global_1C11E9.f_3D), (uParam0[iVar0 /*100*/])->f_4B);
			iVar1 = 0x00000000;
			while (iVar1 < Global_1C11E9.f_3E)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1C11E9.f_3F, iVar1))
				{
					Global_1C11E9.f_61[iVar1] = (uParam0[iVar0 /*100*/])->f_43[iVar1];
				}
				else
				{
					Global_1C11E9.f_40[iVar1] = (uParam0[iVar0 /*100*/])->f_3C[iVar1];
				}
				iVar1++;
			}
			Global_1C0DF1.f_51[iVar2] = Global_1C0180.f_B0A;
			unk_0x724501B3F806735C(&Global_1C11E9);
		}
		iVar0++;
	}
	Global_1C0DF1.f_57[iVar2 /*3*/] = { func_229(unk_0xD803B885F5E47A62()) };
}

void func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != 0xFFFFFFFF)
	{
		if (unk_0xE4F1C23C6353EC03(Global_1C0DF1.f_51[iParam1]))
		{
			unk_0xCA6EE3119323E45C(Global_1C0DF1.f_51[iParam1]);
		}
		Global_1C0DF1.f_51[iParam1] = 0x00000000;
	}
	else if (iParam0 != 0xFFFFFFFF)
	{
		if (unk_0xE4F1C23C6353EC03(iParam0))
		{
			unk_0xCA6EE3119323E45C(iParam0);
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000005)
		{
			if (Global_1C0DF1.f_51[iVar0] == iParam0)
			{
				Global_1C0DF1.f_51[iVar0] = 0x00000000;
			}
			iVar0++;
		}
	}
}

int func_508(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_1C0DF1.f_51[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_1C0DF1.f_51[iVar0] == 0x00000000)
		{
			return iVar0;
		}
		else if (unk_0xE4F1C23C6353EC03(Global_1C0DF1.f_51[iVar0]))
		{
			iVar3 = unk_0x4F4FEC8CCCE2C7B1(Global_1C0DF1.f_51[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_509(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0x00000000 /*100*/])->f_4C)
	{
		case 0x00000000:
			func_513(uParam0);
			if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				(uParam0[0x00000000 /*100*/])->f_4C = 0x00000003;
				return 0x00000000;
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				if (func_450((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_512(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177E))
					{
						Global_1C177E[Global_1C177E.f_CE /*13*/] = { (uParam0[iVar0 /*100*/])->f_20 };
						Global_1C177E.f_CE++;
					}
				}
				iVar0++;
			}
			if (Global_1C177E.f_CE > 0x00000000)
			{
				(uParam0[0x00000000 /*100*/])->f_4C = 0x00000001;
			}
			else
			{
				(uParam0[0x00000000 /*100*/])->f_4C = 0x00000003;
			}
			break;
		
		case 0x00000001:
			if (func_510(&((uParam0[0x00000001 /*100*/])->f_4C), &(Global_1C177E.f_CE), &Global_1C177E, &(Global_1C177E.f_9D)))
			{
				(uParam0[0x00000000 /*100*/])->f_4C = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (Global_1C177E.f_CE > 0x0000000C)
			{
				Global_1C177E.f_CE = 0x0000000C;
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				iVar1 = 0x00000000;
				while (iVar1 < Global_1C177E.f_CE)
				{
					if (func_450((uParam0[iVar0 /*100*/])->f_20) && func_450(Global_1C177E[iVar1 /*13*/]))
					{
						if (unk_0x4F18738E5BDE9AC9(&((uParam0[iVar0 /*100*/])->f_20), &(Global_1C177E[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_50 = { Global_1C177E.f_9D[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0x00000000 /*100*/])->f_4C = 0x00000003;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_510(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if (unk_0x0742540F16CEE0F4())
			{
			}
			else
			{
				unk_0x7BF88BC97F9C422A();
				unk_0x6CEC2945A313AD9E(uParam2, *uParam1);
				*uParam0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!unk_0x0742540F16CEE0F4())
			{
				if (unk_0x812FCD8C479A4733())
				{
					*uParam0 = 0x00000002;
				}
				else
				{
					*uParam0 = 0x00000003;
				}
			}
			break;
		
		case 0x00000002:
			iVar1 = 0x00000000;
			while (iVar1 < *uParam1)
			{
				if (unk_0x794D5DBA715427A2(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_511(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x0742540F16CEE0F4())
			{
				unk_0x47B6D760F5574870();
			}
			else
			{
				unk_0x7BF88BC97F9C422A();
			}
			*uParam0 = 0x00000003;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_511(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, sParam1);
}

int func_512(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		if (func_450(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x4F18738E5BDE9AC9(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_513(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		func_514(&(Global_1C177E[iVar0 /*13*/]));
		StringCopy(&(Global_1C177E.f_9D[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0x00000000 /*100*/])->f_4C > 0x00000000)
	{
		(uParam0[0x00000000 /*100*/])->f_4C = 0x00000000;
		(uParam0[0x00000001 /*100*/])->f_4C = 0x00000000;
		if (!unk_0x0742540F16CEE0F4())
		{
			unk_0x7BF88BC97F9C422A();
		}
	}
	if (unk_0x0742540F16CEE0F4())
	{
		unk_0x47B6D760F5574870();
	}
	Global_1C177E.f_CE = 0x00000000;
}

void func_514(var uParam0)
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

int func_515(var uParam0)
{
	int iVar0;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 0x00000001;
	}
	else if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		if (!func_517(uParam0))
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			if (!func_516(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0x00000000;
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_516(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 0x00000002)
	{
		return 0x00000001;
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (func_450(*uParam1))
			{
				if (!unk_0x60F025D317CE2512(uParam1))
				{
					if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
					{
						if (unk_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 0x00000001;
						}
					}
					else if (unk_0xA3F916BCE430ED26())
					{
						if (unk_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 0x00000001;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xD7926DA4168DF7E1(uParam1), 64);
						if (unk_0xBA301E03A078FA59())
						{
						}
						else if (unk_0x33A494591F2C1975())
						{
						}
						else if (unk_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 0x00000002;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(uParam1)), 64);
					*uParam0 = 0x00000002;
				}
			}
			else
			{
				*uParam0 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (!unk_0x60F025D317CE2512(uParam1))
			{
				if (!unk_0xE13B4B9D87E527E9())
				{
					if (unk_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam2, unk_0xD7926DA4168DF7E1(uParam1), 64);
					}
					*uParam0 = 0x00000002;
					return 0x00000001;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(uParam1)), 64);
				*uParam0 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_517(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xDC30EF462887322E() && !unk_0x33A494591F2C1975())
	{
		return 0x00000001;
	}
	if ((uParam0[0x00000000 /*100*/])->f_4E == 0x00000002)
	{
		return 0x00000001;
	}
	switch ((uParam0[0x00000000 /*100*/])->f_4E)
	{
		case 0x00000000:
			Global_1C0180.f_C6F = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < 0x0000000C)
			{
				StringCopy(&(Global_1C0180.f_B11[iVar1 /*16*/]), "", 64);
				func_514(&(Global_1C0180.f_BD2[iVar1 /*13*/]));
				if (func_450((uParam0[iVar1 /*100*/])->f_20))
				{
					Global_1C0180.f_BD2[Global_1C0180.f_C6F /*13*/] = { (uParam0[iVar1 /*100*/])->f_20 };
					Global_1C0180.f_C6F++;
				}
				iVar1++;
			}
			if (Global_1C0180.f_C6F > 0x00000000)
			{
				(uParam0[0x00000000 /*100*/])->f_4F = unk_0x3F4BBF0887AB451C(&(Global_1C0180.f_BD2), Global_1C0180.f_C6F);
				(uParam0[0x00000000 /*100*/])->f_4E = 0x00000001;
			}
			else
			{
				(uParam0[0x00000000 /*100*/])->f_4E = 0x00000002;
			}
			break;
		
		case 0x00000001:
			iVar0 = unk_0x1C71EF085035D439((uParam0[0x00000000 /*100*/])->f_4F, &(Global_1C0180.f_B11), Global_1C0180.f_C6F);
			if (iVar0 == 0x00000000)
			{
				iVar1 = 0x00000000;
				while (iVar1 < 0x0000000C)
				{
					if (func_450((uParam0[iVar1 /*100*/])->f_20))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1C0180.f_B11[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0x00000000 /*100*/])->f_4E = 0x00000002;
			}
			else if (iVar0 == 0xFFFFFFFF)
			{
				(uParam0[0x00000000 /*100*/])->f_4E = 0x00000002;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			(uParam0[0x00000000 /*100*/])->f_4F = 0xFFFFFFFF;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_518(var uParam0)
{
	int iVar0;
	
	if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			if (!func_520(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C0180.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
			{
				return 0x00000000;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			if (!func_519(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0x00000000;
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_519(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (unk_0xEA6BC48857E0AC4C(&uParam1))
	{
		*uParam0 = 0x00000002;
		return 0x00000001;
	}
	unk_0x4DA27762188F26CD(&uParam1, &Var0, 0x0000000D);
	switch (*uParam0)
	{
		case 0x00000000:
			if (func_450(Var0))
			{
				if (!unk_0x60F025D317CE2512(&Var0))
				{
					if ((unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E()) || unk_0x33A494591F2C1975())
					{
						if (unk_0x341C9B6377CAD883(&Var0))
						{
							*uParam0 = 0x00000001;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xD7926DA4168DF7E1(&Var0), 64);
						if (unk_0xBA301E03A078FA59())
						{
						}
						else if (unk_0x33A494591F2C1975())
						{
						}
						else if (unk_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 0x00000002;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&Var0)), 64);
					*uParam0 = 0x00000002;
				}
			}
			else
			{
				*uParam0 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (!unk_0x60F025D317CE2512(&Var0))
			{
				if (!unk_0xE13B4B9D87E527E9())
				{
					if (unk_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam17, unk_0xD7926DA4168DF7E1(&Var0), 64);
					}
					*uParam0 = 0x00000002;
					return 0x00000001;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&Var0)), 64);
				*uParam0 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_520(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xDC30EF462887322E() && !unk_0x33A494591F2C1975())
	{
		return 0x00000001;
	}
	if (*uParam0 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		*uParam0 = 0x00000002;
		return 0x00000001;
	}
	unk_0x4DA27762188F26CD(sParam1, &(Var1[0x00000000 /*13*/]), 0x0000000D);
	switch (*uParam0)
	{
		case 0x00000000:
			StringCopy(uParam3[0x00000000 /*16*/], "", 64);
			if (func_450(Var1[0x00000000 /*13*/]))
			{
				if (!unk_0x60F025D317CE2512(&(Var1[0x00000000 /*13*/])))
				{
					*uParam4 = unk_0x3F4BBF0887AB451C(&Var1, 0x00000001);
					*uParam0 = 0x00000001;
				}
				else
				{
					StringCopy(sParam2, unk_0x6E524813889AECF8(unk_0xE7A1FE6C75BB88BA(&(Var1[0x00000000 /*13*/]))), 64);
					*uParam0 = 0x00000002;
				}
			}
			else
			{
				*uParam0 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			iVar0 = unk_0x1C71EF085035D439(*uParam4, uParam3, 0x00000001);
			if (iVar0 == 0x00000000)
			{
				*sParam2 = { *(uParam3[0x00000000 /*16*/]) };
				*uParam0 = 0x00000002;
			}
			else if (iVar0 == 0xFFFFFFFF)
			{
				*uParam0 = 0x00000002;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			*uParam4 = 0xFFFFFFFF;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_521(var uParam0)
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_13.f_1 = 0x00000004;
	iVar5 = 0xFFFFFFFF;
	iVar9 = 0x00000002;
	Var12 = { func_455(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[iVar9])
	{
		case 0x00000000:
			Global_1C0180.f_AD7[iVar9] = 0xFFFFFFFF;
			Global_1C0180.f_A90[iVar9] = 0x00000000;
			Global_1C0005.f_176 = 0xFFFFFFFF;
			if (unk_0x080E9D045AEE5605())
			{
				if (unk_0xF2EC2A39FF9E838D(&Var12))
				{
					if (unk_0xD9DA83C40D038174(&(uParam0->f_7), 0x00000023, &Var12))
					{
						uParam0->f_2C.f_2 = uParam0->f_7;
						uParam0->f_2C.f_1 = 0x00000003;
						(*uParam0)[iVar9] = 0x00000001;
						return 0x00000000;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 0x00000003;
					return 0x00000001;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 0x00000003;
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			uParam0->f_2C.f_1 = 0x00000003;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x0000000B, &Var12, func_527(), 0x00000000, 0x00000000, 0x00000000))
			{
				func_453(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0x00000000)
					{
						iVar7 = 0x00000000;
						iVar2 = 0x00000000;
						if (func_527())
						{
							iVar7 = 0x00000000;
							while (iVar7 < Var1.f_3)
							{
								unk_0xBC584396476EE48A(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0x00000000)
								{
									if (func_498(&Var0, &Var12) || func_498(&Var0, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var0.f_60;
									}
								}
								if (iVar5 < 0x00000000)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, 0x00000000))
									{
										if (Global_1C0005.f_D3.f_24[0x00000000] >= unk_0x14B893B11D05C490(iVar7, 0x00000000))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0x00000000] >= unk_0x1969161BAC0006D6(iVar7, 0x00000000))
									{
										iVar5 = iVar7;
									}
								}
								func_526(&Var0);
								iVar7++;
							}
							if (iVar5 < 0x00000000)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0x00000000;
						unk_0xBC584396476EE48A(0x00000000, &Var0);
						if (Var0.f_60 <= 0x00000001)
						{
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B)
							{
								if (func_527() && iVar5 == 0x00000000)
								{
									func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C0180.f_AD7[iVar9] = 0x00000000;
									Global_1C0180.f_A90[iVar9]++;
								}
								if (func_527() && (func_498(&Var0, &Var12) || func_498(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_498(&Var0, &Var12))
									{
										iVar5 = 0x00000000;
										Global_1C0180.f_AD7[iVar9] = 0x00000000;
									}
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 0x00000010);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_524(uParam0->f_2C))
									{
										iVar4 = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A95);
										if (iVar4 == 0x00000001)
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0x00000001;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0x00000000;
										}
									}
									if (func_456(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
									}
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 0x00000001;
									iVar3 = 0x00000000;
									iVar3 = 0x00000000;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(0x00000000, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C0180.f_A90[iVar9]++;
								}
								bVar8 = 0x00000001;
							}
						}
						if (!bVar8)
						{
							Global_1C0180.f_A90[iVar9]++;
						}
						if (!func_527())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 0x00000006)
						{
							iVar6 = (iVar5 - 0x00000006);
						}
						else if (bVar8)
						{
							iVar6 = 0x00000001;
						}
						else
						{
							iVar6 = 0x00000000;
						}
						iVar7 = iVar6;
						func_526(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 0x00000001))
						{
							unk_0xBC584396476EE48A(iVar7, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B && Var0.f_60 > 0x00000001)
							{
								if (func_527() && iVar5 == iVar7)
								{
									if (!func_498(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20), &Var12))
									{
										func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_527() && (func_498(&Var0, &Var12) || func_498(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar9] < 0x0000000B)
								{
									if (func_450(Var0) && !func_498(&Var0, &(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20)))
									{
										if (func_498(&Var0, &Var12))
										{
											if (Global_1C0180.f_AD7[iVar9] < 0x00000000)
											{
												Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
											}
										}
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 0x00000010);
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 0x00000001;
										if (func_524(uParam0->f_2C))
										{
											iVar4 = unk_0x14B893B11D05C490(iVar7, Global_1C0180.f_A95);
											if (iVar4 == 0x00000001)
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0x00000001;
											}
											else
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0x00000000;
											}
										}
										if (func_456(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
										}
										iVar2 = 0x00000000;
										iVar2 = 0x00000000;
										while (iVar2 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar2] = unk_0x14B893B11D05C490(iVar7, Global_1C0180.f_A96[iVar2]);
											}
											else
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar2] = unk_0x1969161BAC0006D6(iVar7, Global_1C0180.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C0180.f_A90[iVar9]++;
									}
								}
							}
							func_526(&Var0);
							iVar7++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_527())
							{
								if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
								{
									func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[iVar9] = 0x00000003;
						}
						else
						{
							(*uParam0)[iVar9] = 0x00000002;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1C0180.f_A90[iVar9]++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar9] = 0xFFFFFFFF;
						(*uParam0)[iVar9] = 0x00000002;
					}
				}
				else
				{
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_AD7[iVar9] = 0xFFFFFFFF;
					(*uParam0)[iVar9] = 0x00000002;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar9);
				}
			}
			break;
		
		case 0x00000002:
			if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF)
			{
				iVar11 = 0x0000000B;
			}
			else
			{
				iVar11 = 0x00000001;
			}
			uParam0->f_2C.f_1 = 0x00000003;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, iVar11))
			{
				func_453(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0x00000000)
					{
						iVar2 = 0x00000000;
						while (iVar2 < Var1.f_3)
						{
							unk_0xBC584396476EE48A(iVar2, &Var0);
							bVar10 = 0x00000000;
							if (Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_3B > 0x00000001 || Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_3B <= 0x00000000)
							{
								bVar10 = 0x00000001;
							}
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B || bVar10)
							{
								if (func_527() && (func_498(&Var0, &Var12) || func_498(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0x00000000 || bVar10)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/]), {Var0.f_D}, 0x00000010);
									Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_3B = Var0.f_60;
									if (func_524(uParam0->f_2C))
									{
										iVar4 = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A95);
										if (iVar4 == 0x00000001)
										{
											Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_3A = 0x00000001;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_3A = 0x00000000;
										}
									}
									if (func_456(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_10), {Var0.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
									}
									Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_4A = 0x00000001;
									iVar3 = 0x00000000;
									iVar3 = 0x00000000;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(0x00000000, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (Global_1C0180.f_A90[iVar9] == 0x00000000)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1C0180.f_A90[iVar9]++;
										}
									}
								}
								else if (Global_1C0180.f_A90[iVar9] < 0x0000000B)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 0x00000010);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									if (func_524(uParam0->f_2C))
									{
										iVar4 = unk_0x14B893B11D05C490(iVar2, Global_1C0180.f_A95);
										if (iVar4 == 0x00000001)
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0x00000001;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0x00000000;
										}
									}
									if (func_456(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
									}
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 0x00000001;
									iVar3 = 0x00000000;
									iVar3 = 0x00000000;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(iVar2, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(iVar2, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0x00000000)
									{
										Global_1C0180.f_A90[iVar9]++;
									}
								}
							}
							func_526(&Var0);
							iVar2++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 0x00000003;
				}
				else
				{
					unk_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar9);
					Global_1C0180.f_A90[iVar9] = 0x00000000;
					(*uParam0)[iVar9] = 0x00000003;
				}
				if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_527())
				{
					if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
					{
						func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
					}
					else
					{
						func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
					}
					Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
					Global_1C0180.f_A90[iVar9]++;
				}
			}
			break;
		
		case 0x00000003:
			func_522(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 0x00000004;
			break;
		
		case 0x00000004:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_522(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_527() && Global_1C0180.f_A90[iParam0] > Global_1C0180.f_AD7[iParam0]) && Global_1C0180.f_AD7[iParam0] >= 0x00000000)
	{
		if (iParam1 != Global_1C0180[iParam0 /*901*/][Global_1C0180.f_AD7[iParam0] /*75*/].f_3B)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_1C0180.f_A90[iParam0])
			{
				if (iVar0 != Global_1C0180.f_AD7[iParam0])
				{
					if (Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B >= Global_1C0180[iParam0 /*901*/][Global_1C0180.f_AD7[iParam0] /*75*/].f_3B)
					{
						if (Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B < iParam1 || iParam1 == 0xFFFFFFFF)
						{
							Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_527())
		{
		}
		if (Global_1C0180.f_A90[iParam0] <= Global_1C0180.f_AD7[iParam0])
		{
		}
		if (Global_1C0180.f_AD7[iParam0] < 0x00000000)
		{
		}
	}
}

int func_523(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (unk_0xDF496D8EA2986832(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0x00000000;
					*uParam0 = 0x00000003;
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, 0xFFFFFFFF))
			{
				*uParam0++;
			}
			break;
		
		case 0x00000002:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0x00000000))
			{
				*uParam1 = 0x00000001;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0x00000000;
				*uParam0++;
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_524(int iParam0)
{
	if ((((((iParam0 == 0x0000032F || iParam0 == 0x00000338) || iParam0 == 0x00000339) || iParam0 == 0x0000033A) || iParam0 == 0x0000033B) || iParam0 == 0x0000033C) || iParam0 == 0x00000351)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_525(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_456(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 0x00000010);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 0x00000010);
	}
	else
	{
		StringCopy(sParam1, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
		sParam1->f_20 = { func_455(unk_0xD803B885F5E47A62()) };
	}
	sParam1->f_3B = iParam2;
	if (func_524(uParam0->f_2C))
	{
		iVar0 = Global_1C0005.f_D3.f_24[Global_1C0180.f_A95];
		if (iVar0 == 0x00000001)
		{
			sParam1->f_3A = 0x00000001;
		}
		else
		{
			sParam1->f_3A = 0x00000000;
		}
	}
	sParam1->f_4A = 0x00000001;
	iVar1 = 0x00000000;
	while (iVar1 < Global_1C0180.f_A94)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, Global_1C0180.f_A96[iVar1]))
		{
			sParam1->f_43[iVar1] = Global_1C0005.f_D3.f_24[Global_1C0180.f_A96[iVar1]];
		}
		else
		{
			sParam1->f_3C[iVar1] = Global_1C0005.f_D3.f_3[Global_1C0180.f_A96[iVar1]];
		}
		iVar1++;
	}
}

void func_526(var uParam0)
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_D), "", 24);
	uParam0->f_13 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_55 = 0x00000000;
	StringCopy(&(uParam0->f_56), "", 32);
	StringCopy(&(uParam0->f_5E), "", 8);
	uParam0->f_60 = 0x00000000;
	uParam0->f_61 = 0x00000000;
}

int func_527()
{
	if (Global_1C017C && Global_1C017D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_528(var uParam0)
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_13.f_1 = 0x00000004;
	iVar4 = 0xFFFFFFFF;
	iVar9 = 0x00000001;
	Var10 = { func_455(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[0x00000001])
	{
		case 0x00000000:
			iVar3 = unk_0xB552DC43762F9C85();
			Global_1C0180.f_AD7[0x00000001] = 0xFFFFFFFF;
			Global_1C0005.f_176 = 0xFFFFFFFF;
			Global_1C0180.f_A90[iVar9] = 0x00000000;
			if (iVar3 > 0x00000000)
			{
				if (func_527())
				{
					iVar8 = 0x00000000;
				}
				else
				{
					iVar8 = 0x00000001;
				}
				if (func_529(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0x00000000 /*66*/], iVar8, 0x00000000, 0x00000064))
				{
					func_453(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
					{
						if (func_527())
						{
							iVar6 = 0x00000000;
							iVar6 = 0x00000000;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0x00000000)
								{
									unk_0xBC584396476EE48A(iVar6, &Var0);
									if (func_456(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0x00000000)
										{
											if (func_498(&Var0, &(Global_1C0005.f_169)))
											{
												Global_1C0005.f_176 = Var0.f_60;
											}
										}
									}
									if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, 0x00000000))
									{
										if (Global_1C0005.f_D3.f_24[0x00000000] >= unk_0x14B893B11D05C490(iVar6, 0x00000000))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0x00000000] >= unk_0x1969161BAC0006D6(iVar6, 0x00000000))
									{
										iVar4 = iVar6;
									}
									func_526(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0x00000000)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0x00000000;
						if (func_527() && iVar4 == 0x00000000)
						{
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B)
							{
								func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
								Global_1C0180.f_AD7[iVar9] = 0x00000000;
								Global_1C0180.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0x00000000)
						{
							unk_0xBC584396476EE48A(0x00000000, &Var0);
							if (func_527() && (func_498(&Var0, &Var10) || func_498(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_450(Var0) && Global_1C0180.f_A90[iVar9] < 0x0000000B)
							{
								if (func_498(&Var0, &Var10))
								{
									iVar4 = 0x00000000;
									Global_1C0180.f_AD7[0x00000001] = 0x00000000;
								}
								MemCopy(&(Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 0x00000010);
								Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = 0x00000001;
								if (func_524(uParam0->f_2C))
								{
									iVar7 = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A95);
									if (iVar7 == 0x00000001)
									{
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0x00000001;
									}
									else
									{
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0x00000000;
									}
								}
								if (func_456(uParam0->f_2C))
								{
									MemCopy(&(Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
								}
								Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 0x00000001;
								iVar2 = 0x00000000;
								while (iVar2 < Global_1C0180.f_A94)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
									{
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar2] = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A96[iVar2]);
									}
									else
									{
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar2] = unk_0x1969161BAC0006D6(0x00000000, Global_1C0180.f_A96[iVar2]);
									}
									iVar2++;
								}
								Global_1C0180.f_A90[0x00000001]++;
							}
							else
							{
								func_526(&Var0);
								unk_0xC4492EA0CF4852F9();
								func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C0180.f_A90[0x00000001] = 0x00000000;
								(*uParam0)[0x00000001] = 0x00000001;
								if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_527())
								{
									if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
									{
										func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
									}
									else
									{
										func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
									}
									Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
									Global_1C0180.f_A90[iVar9]++;
								}
								return 0x00000000;
							}
							func_526(&Var0);
						}
						else
						{
							Global_1C0180.f_A90[0x00000001] = 0x00000000;
							func_526(&Var0);
							unk_0xC4492EA0CF4852F9();
							func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_527())
							{
								if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
								{
									func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[0x00000001] = 0x00000001;
							return 0x00000000;
						}
						if (!func_527())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 0x00000006)
						{
							iVar5 = (iVar4 - 0x00000006);
						}
						else
						{
							iVar5 = 0x00000001;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 0x00000001))
						{
							unk_0xBC584396476EE48A(iVar6, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B && Var0.f_60 > 0x00000001)
							{
								if (func_527() && iVar4 == iVar6)
								{
									if (!func_498(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20), &Var10))
									{
										func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_527() && (func_498(&Var0, &Var10) || func_498(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[0x00000001] < 0x0000000C)
								{
									if (func_450(Var0) && !func_498(&Var0, &(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20)))
									{
										if (func_498(&Var0, &Var10))
										{
											if (Global_1C0180.f_AD7[0x00000001] < 0x00000000)
											{
												Global_1C0180.f_AD7[0x00000001] = Global_1C0180.f_A90[0x00000001];
											}
										}
										MemCopy(&(Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/]), {Var0.f_D}, 0x00000010);
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_20 = { Var0 };
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_4A = 0x00000001;
										if (func_524(uParam0->f_2C))
										{
											iVar7 = unk_0x14B893B11D05C490(iVar6, Global_1C0180.f_A95);
											if (iVar7 == 0x00000001)
											{
												Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_3A = 0x00000001;
											}
											else
											{
												Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_3A = 0x00000000;
											}
										}
										if (func_456(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_10), {Var0.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
										}
										iVar2 = 0x00000000;
										while (iVar2 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
											{
												Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_43[iVar2] = unk_0x14B893B11D05C490(iVar6, Global_1C0180.f_A96[iVar2]);
											}
											else
											{
												Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_3C[iVar2] = unk_0x1969161BAC0006D6(iVar6, Global_1C0180.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C0180.f_A90[0x00000001]++;
									}
								}
							}
							func_526(&Var0);
							iVar6++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[0x00000001] = 0x00000001;
						if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_527())
						{
							if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
							{
								func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
							}
							else
							{
								func_525(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
							}
							Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
							Global_1C0180.f_A90[iVar9]++;
						}
						return 0x00000000;
					}
					else
					{
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_A90[0x00000001] = 0x00000000;
						(*uParam0)[0x00000001] = 0x00000001;
						unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), 0x00000001);
						return 0x00000000;
					}
				}
			}
			else
			{
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C0180.f_A90[0x00000001] = 0x00000000;
				(*uParam0)[0x00000001] = 0x00000001;
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			func_522(iVar9, Global_1C0005.f_176);
			(*uParam0)[0x00000001] = 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_529(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0x00000000;
					*uParam0 = 0x00000003;
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, 0xFFFFFFFF))
			{
				*uParam0++;
			}
			break;
		
		case 0x00000002:
			if (unk_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0x00000000))
			{
				*uParam1 = 0x00000001;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0x00000000;
				*uParam0++;
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_530(var uParam0)
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_13.f_1 = 0x00000004;
	iVar6 = 0xFFFFFFFF;
	iVar10 = 0x00000000;
	Var0 = { func_455(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[iVar10])
	{
		case 0x00000000:
			Global_1C0180.f_AD7[iVar10] = 0xFFFFFFFF;
			Global_1C0180.f_A90[iVar10] = 0x00000000;
			Global_1C0005.f_176 = 0xFFFFFFFF;
			Global_1C017D = 0x00000000;
			if (func_531(uParam0->f_2C))
			{
				if (!Global_1C017D)
				{
					Global_1C017D = 0x00000001;
				}
			}
			else if (Global_1C017D)
			{
				Global_1C017D = 0x00000000;
			}
			if (!Global_1C017D)
			{
			}
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x0000000B, &Var0, func_527(), 0x00000000, 0x00000000, 0x00000000))
			{
				func_453(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var2))
				{
					if (Var2.f_3 > 0x00000000)
					{
						iVar8 = 0x00000000;
						iVar3 = 0x00000000;
						if (func_527())
						{
							iVar8 = 0x00000000;
							while (iVar8 < Var2.f_3)
							{
								unk_0xBC584396476EE48A(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0x00000000)
								{
									if (func_498(&Var1, &Var0) || func_498(&Var1, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var1.f_60;
									}
								}
								if (iVar6 < 0x00000000)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1C0005.f_8E.f_2, 0x00000000))
									{
										if (Global_1C0005.f_D3.f_24[0x00000000] >= unk_0x14B893B11D05C490(iVar8, 0x00000000))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0x00000000] >= unk_0x1969161BAC0006D6(iVar8, 0x00000000))
									{
										iVar6 = iVar8;
									}
								}
								func_526(&Var1);
								iVar8++;
							}
							if (iVar6 < 0x00000000)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0x00000000;
						unk_0xBC584396476EE48A(0x00000000, &Var1);
						if (Var1.f_60 <= 0x00000001)
						{
							if (Global_1C0180.f_A90[iVar10] < 0x0000000B)
							{
								if (func_527() && iVar6 == 0x00000000)
								{
									func_525(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C0180.f_AD7[iVar10] = 0x00000000;
									Global_1C0180.f_A90[iVar10]++;
								}
								if (func_527() && (func_498(&Var1, &Var0) || func_498(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_498(&Var1, &Var0))
									{
										iVar6 = 0x00000000;
										Global_1C0180.f_AD7[iVar10] = 0x00000000;
									}
									MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 0x00000010);
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_524(uParam0->f_2C))
									{
										iVar5 = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A95);
										if (iVar5 == 0x00000001)
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0x00000001;
										}
										else
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0x00000000;
										}
									}
									if (func_456(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
									}
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 0x00000001;
									iVar3 = 0x00000000;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(0x00000000, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C0180.f_A90[iVar10]++;
								}
								bVar9 = 0x00000001;
							}
						}
						if (!bVar9)
						{
							Global_1C0180.f_A90[iVar10]++;
						}
						if (!func_527())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 0x00000006)
						{
							iVar7 = (iVar6 - 0x00000006);
						}
						else if (bVar9)
						{
							iVar7 = 0x00000001;
						}
						else
						{
							iVar7 = 0x00000000;
						}
						iVar8 = iVar7;
						func_526(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 0x00000001))
						{
							unk_0xBC584396476EE48A(iVar8, &Var1);
							if (Global_1C0180.f_A90[iVar10] < 0x0000000B && Var1.f_60 > 0x00000001)
							{
								if (func_527() && iVar6 == iVar8)
								{
									if (!func_498(&(Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_20), &Var1))
									{
										func_525(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
										Global_1C0180.f_A90[iVar10]++;
									}
								}
								if (func_527() && (func_498(&Var1, &Var0) || func_498(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar10] < 0x0000000B)
								{
									if (func_450(Var1) && !func_498(&(Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_20), &Var1))
									{
										if (func_498(&Var1, &Var0))
										{
											if (Global_1C0180.f_AD7[iVar10] < 0x00000000)
											{
												Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
											}
										}
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 0x00000010);
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 0x00000001;
										if (func_524(uParam0->f_2C))
										{
											iVar5 = unk_0x14B893B11D05C490(iVar8, Global_1C0180.f_A95);
											if (iVar5 == 0x00000001)
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0x00000001;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0x00000000;
											}
										}
										if (func_456(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
										}
										iVar3 = 0x00000000;
										iVar3 = 0x00000000;
										while (iVar3 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar3] = unk_0x14B893B11D05C490(iVar8, Global_1C0180.f_A96[iVar3]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar3] = unk_0x1969161BAC0006D6(iVar8, Global_1C0180.f_A96[iVar3]);
											}
											iVar3++;
										}
										Global_1C0180.f_A90[iVar10]++;
									}
								}
							}
							func_526(&Var1);
							iVar8++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C0180.f_AD7[iVar10] == 0xFFFFFFFF && func_527())
							{
								if (Global_1C0180.f_A90[iVar10] >= 0x00000001)
								{
									func_525(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 0x00000001);
								}
								Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
								Global_1C0180.f_A90[iVar10]++;
							}
							(*uParam0)[iVar10] = 0x00000002;
						}
						else
						{
							(*uParam0)[iVar10] = 0x00000001;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1C0180.f_A90[iVar10]++;
						}
						unk_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar10] = 0xFFFFFFFF;
						(*uParam0)[iVar10] = 0x00000001;
					}
				}
				else
				{
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_AD7[iVar10] = 0xFFFFFFFF;
					(*uParam0)[iVar10] = 0x00000001;
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar10);
				}
			}
			break;
		
		case 0x00000001:
			if (Global_1C0180.f_AD7[iVar10] == 0xFFFFFFFF)
			{
				iVar12 = 0x0000000B;
			}
			else
			{
				iVar12 = 0x00000001;
			}
			if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, iVar12))
			{
				func_453(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var2))
				{
					if (Var2.f_3 > 0x00000000)
					{
						iVar3 = 0x00000000;
						while (iVar3 < Var2.f_3)
						{
							unk_0xBC584396476EE48A(iVar3, &Var1);
							if (func_527() && (func_498(&Var1, &Var0) || func_498(&Var1, &(Global_1C0005.f_169))))
							{
							}
							else
							{
								bVar11 = 0x00000000;
								if (Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_3B > 0x00000001 || Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_3B <= 0x00000000)
								{
									bVar11 = 0x00000001;
								}
								if (Global_1C0180.f_A90[iVar10] < 0x0000000B || bVar11)
								{
									if (iVar3 == 0x00000000 || bVar11)
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/]), {Var1.f_D}, 0x00000010);
										Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_20 = { Var1 };
										Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_3B = Var1.f_60;
										if (func_524(uParam0->f_2C))
										{
											iVar5 = unk_0x14B893B11D05C490(0x00000000, Global_1C0180.f_A95);
											if (iVar5 == 0x00000001)
											{
												Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_3A = 0x00000001;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_3A = 0x00000000;
											}
										}
										if (func_456(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_10), {Var1.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
										}
										Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_4A = 0x00000001;
										iVar4 = 0x00000000;
										iVar4 = 0x00000000;
										while (iVar4 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar4]))
											{
												Global_1C0180[iVar10 /*901*/][iVar3 /*75*/].f_43[iVar4] = unk_0x14B893B11D05C490(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][iVar3 /*75*/].f_3C[iVar4] = unk_0x1969161BAC0006D6(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (Global_1C0180.f_A90[iVar10] == 0x00000000)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1C0180.f_A90[iVar10]++;
											}
										}
										else if (Global_1C0180.f_A90[iVar10] == 0x00000001 && Global_1C0180.f_AD7[iVar10] == 0xFFFFFFFF)
										{
											Global_1C0180.f_A90[iVar10]++;
										}
									}
									else if (Global_1C0180.f_A90[iVar10] < 0x0000000B)
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 0x00000010);
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										if (func_524(uParam0->f_2C))
										{
											iVar5 = unk_0x14B893B11D05C490(iVar3, Global_1C0180.f_A95);
											if (iVar5 == 0x00000001)
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0x00000001;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0x00000000;
											}
										}
										if (func_456(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[0x00000001 /*16*/].f_8}, 0x00000010);
										}
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 0x00000001;
										iVar4 = 0x00000000;
										iVar4 = 0x00000000;
										while (iVar4 < Global_1C0180.f_A94)
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar4]))
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar4] = unk_0x14B893B11D05C490(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar4] = unk_0x1969161BAC0006D6(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0x00000000)
										{
											Global_1C0180.f_A90[iVar10]++;
										}
									}
								}
							}
							func_526(&Var1);
							iVar3++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 0x00000002;
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar10);
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_A90[iVar10] = 0x00000000;
					(*uParam0)[iVar10] = 0x00000002;
					Global_1C0180.f_A90[0x00000001] = 0x00000000;
					(*uParam0)[0x00000001] = 0x00000001;
					Global_1C0180.f_A90[0x00000002] = 0x00000000;
					(*uParam0)[0x00000002] = 0x00000003;
				}
			}
			if (Global_1C0180.f_AD7[iVar10] == 0xFFFFFFFF && func_527())
			{
				if (Global_1C0180.f_A90[iVar10] >= 0x00000001)
				{
					func_525(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 0x00000001) /*75*/].f_3B + 1);
				}
				else
				{
					func_525(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 0x00000001);
				}
				Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
				Global_1C0180.f_A90[iVar10]++;
			}
			break;
		
		case 0x00000002:
			func_522(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 0x00000003;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_531(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_1C017C)
	{
		if (Global_1C0005.f_5 != 0x00000000)
		{
			if (Global_1C0005.f_5 == Param0)
			{
				if (Global_1C0005.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0x00000000;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x7F8A39872A07D2CE(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x7F8A39872A07D2CE(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0x00000000;
						}
						iVar0++;
					}
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_532(var uParam0)
{
	int iVar0;
	
	if (unk_0xE4F1C23C6353EC03(Global_1C0180.f_B0A))
	{
		iVar0 = unk_0x4F4FEC8CCCE2C7B1(Global_1C0180.f_B0A);
		if (iVar0 < 0x000493E0)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000005);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam0->f_2A), 0x00000005);
			func_507(Global_1C0180.f_B0A, 0xFFFFFFFF);
		}
	}
}

void func_533(int iParam0)
{
	if (unk_0x83D8570832F172A7(iParam0))
	{
		unk_0x6567AE843FADBA94(iParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
	}
}

void func_534(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0xEAE0D21A50E6C7F4(iParam2, 0x00000004))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xEAE0D21A50E6C7F4(iParam2, 0x00000005))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xEAE0D21A50E6C7F4(iParam2, 0x00000006))
	{
		*iParam1++;
		if (unk_0x58424C49F8924842() && unk_0x080E9D045AEE5605())
		{
			if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_455(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var4))
				{
					unk_0xD9DA83C40D038174(&Var1, 0x00000023, &Var4);
					if (!unk_0xEA6BC48857E0AC4C(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = 0x00000001;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(*iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	if (bVar3)
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x0D45A7AB73600CFA(&Var2);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x779B34565F4D71B1();
	}
	unk_0x7E60D21B163E9D56();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0x00000000;
		unk_0x5D96D8530B3D0904(&iVar5, 0x00000007);
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		unk_0x3CAEA85DA607305E(*iParam1);
		unk_0x3CAEA85DA607305E(iVar5);
		if (!unk_0x58424C49F8924842())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x999A3BFD3E9B5D2C())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1C0180.f_B10 != 0x00000000)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x7ACC3006A87F8B39(sVar0);
		unk_0x0EF1238B8EFD4D04();
		unk_0x7E60D21B163E9D56();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, 0x00000004))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xEAE0D21A50E6C7F4(iParam2, 0x00000005))
		{
			if (unk_0xB552DC43762F9C85() > 0x00000000)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iParam2, 0x00000006))
		{
			if (unk_0xC2F420D189FDB329())
			{
				if (unk_0xB0D6327A81292879())
				{
					if (unk_0x58424C49F8924842() && unk_0x080E9D045AEE5605())
					{
						if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0x00000000))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_455(unk_0xD803B885F5E47A62()) };
							if (unk_0xF2EC2A39FF9E838D(&Var6))
							{
								unk_0xD9DA83C40D038174(&Var1, 0x00000023, &Var6);
								if (!unk_0xEA6BC48857E0AC4C(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = 0x00000001;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0x00000000;
		unk_0x5D96D8530B3D0904(&iVar7, 0x00000007);
		unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		unk_0x3CAEA85DA607305E(*iParam1);
		unk_0x3CAEA85DA607305E(iVar7);
		if (bVar3)
		{
			unk_0x7ACC3006A87F8B39(sVar0);
			unk_0x0D45A7AB73600CFA(&Var2);
			unk_0x0EF1238B8EFD4D04();
		}
		else
		{
			unk_0x7ACC3006A87F8B39(sVar0);
			unk_0x0EF1238B8EFD4D04();
		}
		unk_0x7E60D21B163E9D56();
		*iParam1++;
	}
}

void func_535(int iParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_TITLE");
	unk_0x7ACC3006A87F8B39(sParam1);
	unk_0x779B34565F4D71B1();
	iVar0 = 0x00000000;
	while (iVar0 < iParam3)
	{
		unk_0x7ACC3006A87F8B39(uParam2[iVar0 /*6*/]);
		unk_0x779B34565F4D71B1();
		iVar0++;
	}
	unk_0x7E60D21B163E9D56();
}

void func_536(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x7ACC3006A87F8B39(sParam1);
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	if (iParam5 == 0xFFFFFFFF)
	{
		if (bParam4)
		{
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				unk_0x0D45A7AB73600CFA(sParam3);
			}
		}
		else if (!unk_0xEA6BC48857E0AC4C(sParam3))
		{
			unk_0x6B012227B3921E18(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xEA6BC48857E0AC4C(sParam3))
			{
				unk_0x0D45A7AB73600CFA(sParam3);
			}
		}
		else if (!unk_0xEA6BC48857E0AC4C(sParam3))
		{
			unk_0x6B012227B3921E18(sParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam5);
	}
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

void func_537(int iParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

void func_538(int iParam0)
{
	Global_141384 = iParam0;
}

void func_539(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_540(bool bParam0)
{
	if (bParam0)
	{
		func_543();
	}
	func_541(0x00000004, 0xFFFFFFFF);
	func_541(0x00000006, 0xFFFFFFFF);
	func_541(0x00000007, 0xFFFFFFFF);
	func_541(0x00000003, 0xFFFFFFFF);
	func_541(0x00000001, 0xFFFFFFFF);
	func_541(0x00000002, 0xFFFFFFFF);
	func_541(0x0000000B, 0xFFFFFFFF);
	func_541(0x0000000D, 0xFFFFFFFF);
	func_541(0x0000000E, 0xFFFFFFFF);
	func_541(0x00000010, 0xFFFFFFFF);
}

void func_541(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150392.f_417), iParam0);
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				Global_150392.f_AA[iParam1] = 0x00000001;
			}
			break;
	}
}

void func_542(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_143(0x00000000))
		{
			func_138(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_543()
{
	Global_26B66F.f_11B4 = 0x00000000;
}

void func_544(bool bParam0)
{
	if (bParam0)
	{
		func_263(&(Local_45.f_77), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
		func_262(&(Local_45.f_77), "HUD_INPUT53", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
		func_262(&(Local_45.f_77), "SCLB_PROFILE", 0x00000002, 0x000000D9, 0x00000001, 0x00000001, 0x00000000);
		func_545(&(Local_45.f_77), 0x00000001);
	}
	else
	{
		func_263(&(Local_45.f_77), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
		func_262(&(Local_45.f_77), "HUD_INPUT53", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
		func_545(&(Local_45.f_77), 0x00000001);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 0x00000400);
	}
	else
	{
		func_155(&(uParam0->f_1), 0x00000400);
	}
}

int func_546(var uParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000001) && Global_1C0180.f_A90[0x00000000] > 0x00000000) && uParam0->f_F6.f_1 >= 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_547(var uParam0)
{
	if (Global_1B04C != 0x00000000 && Global_1B416.f_4A5E.f_C[Global_1B04C /*8*/].f_4 == 0x00000000)
	{
		func_263(uParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000001);
		func_262(uParam0, "IB_QUIT", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
		if (!unk_0x1963B11DE70153E0())
		{
			func_262(uParam0, "HUD_INPUT68", 0x00000002, 0x000000D3, 0x00000001, 0x00000001, 0x00000000);
			iLocal_195 = 0x00000001;
		}
		else if (unk_0x1963B11DE70153E0() && iLocal_194)
		{
			func_262(uParam0, "HUD_INPUT68", 0x00000002, 0x000000D3, 0x00000001, 0x00000001, 0x00000000);
			iLocal_195 = 0x00000000;
		}
		else
		{
			iLocal_195 = 0x00000000;
		}
	}
	else
	{
		func_263(uParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000001);
		func_262(uParam0, "FE_HLP4", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
		func_262(uParam0, "IB_QUIT", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
		if (!unk_0x1963B11DE70153E0())
		{
			func_262(uParam0, "HUD_INPUT68", 0x00000002, 0x000000D3, 0x00000001, 0x00000001, 0x00000000);
			iLocal_195 = 0x00000001;
		}
		else if (unk_0x1963B11DE70153E0() && iLocal_194)
		{
			func_262(uParam0, "HUD_INPUT68", 0x00000002, 0x000000D3, 0x00000001, 0x00000001, 0x00000000);
			iLocal_195 = 0x00000000;
		}
		else
		{
			iLocal_195 = 0x00000000;
		}
	}
	func_545(&(Local_45.f_77), 0x00000001);
}

void func_548()
{
	func_577();
	func_430();
	func_576(&(Local_2035.f_166[0x00000000 /*189*/].f_18), 0x00000000, 0x00000000, "PilotDispatch", 0x00000000, 0x00000001);
	func_576(&uLocal_1727, 0x00000000, 0x00000000, "PilotDispatch", 0x00000000, 0x00000001);
	func_565(&Local_2035);
	func_549(&Local_2035, Local_45.f_A);
	if (unk_0xC844350D5D58C99A(Local_2035.f_166[0x00000000 /*189*/].f_9))
	{
		unk_0x71EDC33E5A423750(Local_2035.f_166[0x00000000 /*189*/].f_9, 0x00000004);
	}
}

void func_549(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			func_564(&Local_2035);
			break;
		
		case 0x00000001:
			func_563(&Local_2035);
			break;
		
		case 0x00000002:
			func_562(&Local_2035);
			func_561(&(Local_2035.f_1B[0x00000002 /*10*/]), 0x00000001);
			func_561(&(Local_2035.f_1B[0x00000003 /*10*/]), 0x00000001);
			break;
		
		case 0x00000003:
			func_560(&Local_2035);
			break;
		
		case 0x00000004:
			func_550(&Local_2035);
			break;
	}
}

void func_550(var uParam0)
{
	func_565(uParam0);
	uParam0->f_C = 0x00000020;
	func_559(&(uParam0->f_1B[0x00000000 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000001 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000002 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000003 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000004 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000005 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000006 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000007 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000008 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000009 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000A /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000B /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000C /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x0000000D /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x0000000E /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000F /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000010 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000011 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000012 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000013 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000014 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000015 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000016 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000017 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000018 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000019 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000001A /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 0x00000003, 0x00000001);
	func_559(&(uParam0->f_1B[0x0000001B /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000001C /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000001D /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000001E /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000001F /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 0x00000004, 0x00000000);
	uParam0->f_D = 0x00000001;
	func_558(&(uParam0->f_166[0x00000000 /*189*/]));
	func_557(&(uParam0->f_166[0x00000000 /*189*/]), "Player");
	func_553(&(uParam0->f_166[0x00000000 /*189*/]), unk_0x16F2683693E537C9(), Local_45.f_1);
	func_552(&(uParam0->f_166[0x00000000 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_551(&(uParam0->f_166[0x00000000 /*189*/]), 0x00000000, joaat("player_one"), joaat("stunt"));
}

void func_551(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_14 = iParam1;
	uParam0->f_15 = iParam2;
	uParam0->f_16 = iParam3;
}

void func_552(var uParam0, vector3 vParam1, float fParam2)
{
	uParam0->f_10 = { vParam1 };
	uParam0->f_13 = fParam2;
}

void func_553(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = iParam2;
	func_554(iParam2, &(Local_45.f_F3));
}

void func_554(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_556(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_118(uParam1->f_42))
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
		func_555(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_121(iVar0 + 1));
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

int func_555(int iParam0, var uParam1, var uParam2)
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

void func_556(var uParam0)
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

void func_557(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_558(var uParam0)
{
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0xFFFFFFFF;
	uParam0->f_C = 0x00000000;
	uParam0->f_D = 0f;
	uParam0->f_17 = 0x0000000D;
}

void func_559(var uParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam2;
	uParam0->f_7 = iParam3;
	uParam0->f_8 = iParam4;
}

void func_560(var uParam0)
{
	func_565(uParam0);
	uParam0->f_C = 0x0000001C;
	func_559(&(uParam0->f_1B[0x00000000 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000001 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000002 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000003 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000004 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 0x00000003, 0x00000001);
	func_559(&(uParam0->f_1B[0x00000005 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000006 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x00000007 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000008 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000009 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000A /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000B /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x0000000C /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000D /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x0000000E /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 0x00000003, 0x00000003);
	func_559(&(uParam0->f_1B[0x0000000F /*10*/]), -360.3365f, -655.137f, 90f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000010 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000011 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x00000012 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000013 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 0x00000003, 0x00000001);
	func_559(&(uParam0->f_1B[0x00000014 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000015 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000016 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000017 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x00000018 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000019 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000001A /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000001B /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 0x00000004, 0x00000000);
	uParam0->f_D = 0x00000001;
	func_558(&(uParam0->f_166[0x00000000 /*189*/]));
	func_557(&(uParam0->f_166[0x00000000 /*189*/]), "Player");
	func_553(&(uParam0->f_166[0x00000000 /*189*/]), unk_0x16F2683693E537C9(), Local_45.f_1);
	func_552(&(uParam0->f_166[0x00000000 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_551(&(uParam0->f_166[0x00000000 /*189*/]), 0x00000000, joaat("player_one"), joaat("stunt"));
}

void func_561(var uParam0, int iParam1)
{
	func_334(&(uParam0->f_9), iParam1);
}

void func_562(var uParam0)
{
	func_565(uParam0);
	uParam0->f_C = 0x00000015;
	func_559(&(uParam0->f_1B[0x00000000 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000001 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000002 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000003 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x00000004 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000005 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 0x00000003, 0x00000003);
	func_559(&(uParam0->f_1B[0x00000006 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000007 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000008 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x00000009 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000A /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000B /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000C /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x0000000D /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000E /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000F /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 0x00000003, 0x00000001);
	func_559(&(uParam0->f_1B[0x00000010 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000011 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000012 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x00000013 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000014 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 0x00000004, 0x00000000);
	uParam0->f_D = 0x00000001;
	func_558(&(uParam0->f_166[0x00000000 /*189*/]));
	func_557(&(uParam0->f_166[0x00000000 /*189*/]), "Player");
	func_553(&(uParam0->f_166[0x00000000 /*189*/]), unk_0x16F2683693E537C9(), Local_45.f_1);
	func_552(&(uParam0->f_166[0x00000000 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_551(&(uParam0->f_166[0x00000000 /*189*/]), 0x00000000, joaat("player_one"), joaat("stunt"));
}

void func_563(var uParam0)
{
	func_565(uParam0);
	uParam0->f_C = 0x00000013;
	func_559(&(uParam0->f_1B[0x00000000 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000001 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000002 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000003 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 0x00000003, 0x00000003);
	func_559(&(uParam0->f_1B[0x00000004 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000005 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000006 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 0x00000003, 0x00000001);
	func_559(&(uParam0->f_1B[0x00000007 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000008 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000009 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000A /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000B /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 0x00000003, 0x00000001);
	func_559(&(uParam0->f_1B[0x0000000C /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000D /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000E /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 0x00000003, 0x00000003);
	func_559(&(uParam0->f_1B[0x0000000F /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000010 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000011 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000012 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 0x00000004, 0x00000000);
	uParam0->f_D = 0x00000001;
	func_558(&(uParam0->f_166[0x00000000 /*189*/]));
	func_557(&(uParam0->f_166[0x00000000 /*189*/]), "Player");
	func_553(&(uParam0->f_166[0x00000000 /*189*/]), unk_0x16F2683693E537C9(), Local_45.f_1);
	func_552(&(uParam0->f_166[0x00000000 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_551(&(uParam0->f_166[0x00000000 /*189*/]), 0x00000000, joaat("player_one"), joaat("stunt"));
}

void func_564(var uParam0)
{
	func_565(uParam0);
	uParam0->f_C = 0x00000012;
	func_559(&(uParam0->f_1B[0x00000000 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000001 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000002 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 0x00000003, 0x00000001);
	func_559(&(uParam0->f_1B[0x00000003 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000004 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000005 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000006 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x00000007 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000008 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000009 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000A /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 0x00000003, 0x00000001);
	func_559(&(uParam0->f_1B[0x0000000B /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000C /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000D /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 0x00000003, 0x00000002);
	func_559(&(uParam0->f_1B[0x0000000E /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x0000000F /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000010 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 0x00000002, 0x00000000);
	func_559(&(uParam0->f_1B[0x00000011 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 0x00000004, 0x00000000);
	uParam0->f_D = 0x00000001;
	func_558(&(uParam0->f_166[0x00000000 /*189*/]));
	func_557(&(uParam0->f_166[0x00000000 /*189*/]), "Player");
	func_553(&(uParam0->f_166[0x00000000 /*189*/]), unk_0x16F2683693E537C9(), Local_45.f_1);
	func_552(&(uParam0->f_166[0x00000000 /*189*/]), vLocal_1940, 154.8464f);
	func_551(&(uParam0->f_166[0x00000000 /*189*/]), 0x00000000, joaat("player_one"), joaat("stunt"));
}

void func_565(var uParam0)
{
	float fVar0;
	
	func_4(&(uParam0->f_3));
	if (Local_45.f_A != 0xFFFFFFFF)
	{
		fVar0 = func_35(Local_45.f_A);
		if (fVar0 <= 0f || fVar0 > Local_45.f_C[Local_45.f_A])
		{
			fVar0 = Local_45.f_C[Local_45.f_A];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_A = (uParam0->f_9 / 2f);
	}
	func_573(uParam0);
	uParam0->f_C = 0x00000000;
	func_566(uParam0);
	uParam0->f_D = 0x00000000;
}

void func_566(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_D)
	{
		func_567(uParam0, iVar0);
		iVar0++;
	}
}

void func_567(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000007)
	{
		return;
	}
	func_569(&(uParam0->f_166[iParam1 /*189*/]));
	func_568(&(uParam0->f_166[iParam1 /*189*/]));
}

void func_568(char* sParam0)
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0x00000000;
	sParam0->f_9 = 0x00000000;
	sParam0->f_A = 0x00000000;
	sParam0->f_B = 0xFFFFFFFF;
	sParam0->f_C = 0x00000000;
	sParam0->f_D = 0f;
	sParam0->f_E = 0f;
	sParam0->f_F = 0f;
	sParam0->f_17 = 0x0000000D;
	sParam0->f_10 = { Local_45.f_3 };
	sParam0->f_13 = Local_45.f_6;
	sParam0->f_14 = Local_45.f_7;
	sParam0->f_15 = Local_45.f_8;
	sParam0->f_16 = Local_45.f_9;
}

void func_569(var uParam0)
{
	func_572(uParam0);
	func_571(uParam0);
	func_570(uParam0);
}

void func_570(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_45.f_1)
		{
			if (!(unk_0x437347B10A200C4B(uParam0->f_8, 0x00000000) || unk_0x437347B10A200C4B(uParam0->f_9, 0x00000000)))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0x00000000))
				{
					unk_0x327AAEE25F323797(uParam0->f_8);
				}
			}
			unk_0xA954465BA6FDEFE2(&(uParam0->f_9));
		}
	}
}

void func_571(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0x16F2683693E537C9())
		{
			unk_0xEBA53F35D0085654(&(uParam0->f_8));
		}
	}
}

void func_572(var uParam0)
{
	func_83(&(uParam0->f_A));
}

void func_573(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_C)
	{
		func_574(uParam0, iVar0);
		iVar0++;
	}
}

void func_574(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000020)
	{
		return;
	}
	func_82(&(uParam0->f_1B[iParam1 /*10*/]));
	func_79(&(uParam0->f_1B[iParam1 /*10*/]));
	func_575(&(uParam0->f_1B[iParam1 /*10*/]));
}

void func_575(var uParam0)
{
	*uParam0 = { Local_45.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0x00000000;
	uParam0->f_4 = 10f;
}

void func_576(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_577()
{
	struct<68> Var0;
	
	Global_1C0005 = 0x00000000;
	Global_1C0005.f_1 = 0x00000000;
	Global_1C0005.f_2 = 0x00000000;
	Global_1C0005.f_3 = 0x00000000;
	Global_1C0005.f_4 = 0x00000000;
	func_578(&(Global_1C0005.f_49));
	func_578(&(Global_1C0005.f_8E));
	func_578(&(Global_1C0005.f_D3));
	func_578(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_514(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = 0xFFFFFFFF;
	Global_1C017C = 0x00000000;
	Global_1C017D = 0x00000000;
	Var0.f_2.f_1 = 0x00000004;
	Global_1C0005.f_5 = { Var0 };
}

void func_578(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_579(bool bParam0)
{
	if (bParam0)
	{
		unk_0x67E5ECB8FD7F5018(0x00000000);
		unk_0x65C5EBCA17A891FC(0x00000001);
		unk_0x2C84016B4A95F6BA(0x00000000);
		func_173(0x00000001);
		Global_16F32 = 0x00000001;
	}
	else
	{
		unk_0x67E5ECB8FD7F5018(0x00000001);
		unk_0x65C5EBCA17A891FC(0x00000000);
		unk_0x2C84016B4A95F6BA(0x00000001);
		func_173(0x00000000);
		Global_16F32 = 0x00000000;
	}
}

void func_580(var uParam0)
{
	*uParam0 = unk_0xB01F55A0FD1CFD49("COUNTDOWN");
	unk_0xAE317D00A5A55DF6("HUD_321_GO", 0x00000000, 0xFFFFFFFF);
}

int func_581(int iParam0)
{
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(iParam0);
	}
	else if (unk_0x0F1CCD77290EE12F())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_582()
{
	int iVar0;
	
	if (!iLocal_2029)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0x00000000))
				{
					if (unk_0xE934758D273C899A(iVar0))
					{
						if (!unk_0x757EF87A33649210())
						{
							unk_0xC92DB9682A650680("MGSP_START");
							iLocal_2029 = 0x00000001;
						}
					}
				}
			}
		}
	}
}

int func_583(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_584(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam1 = unk_0xDC4DD3980107166C(iParam0, 0x00000018, 0x0000001F);
	*iParam2 = unk_0xDC4DD3980107166C(iParam0, 0x00000010, 0x00000017);
	*iParam3 = unk_0xDC4DD3980107166C(iParam0, 0x00000008, 0x0000000F);
	*uParam4 = unk_0xDC4DD3980107166C(iParam0, 0x00000000, 0x00000007);
}

int func_585(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_586(iVar0, iVar1, iVar2, iVar3);
}

var func_586(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	unk_0xCA42B3469E060D13(&uVar0, 0x00000018, 0x0000001F, iParam0);
	unk_0xCA42B3469E060D13(&uVar0, 0x00000010, 0x00000017, iParam1);
	unk_0xCA42B3469E060D13(&uVar0, 0x00000008, 0x0000000F, iParam2);
	unk_0xCA42B3469E060D13(&uVar0, 0x00000000, 0x00000007, iParam3);
	return uVar0;
}

int func_587()
{
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	func_597(0x00000017, 0x00000001);
	func_596(0x0000000A);
	switch (Local_1950.f_5)
	{
		case 0x00000000:
			unk_0x34D79252800B23FF(0x00000000);
			unk_0x8225571BCEE038F8("EXTRASUNNY", 10f);
			func_595();
			func_594(0x00000002, 0x00000000);
			func_594(0x00000001, 0x00000000);
			func_594(0x00000003, 0x00000000);
			func_594(0x00000004, 0x00000000);
			func_594(0x00000005, 0x00000000);
			func_594(0x00000006, 0x00000000);
			func_594(0x00000007, 0x00000000);
			unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f, 0x00000000);
			unk_0x28F5E4DA506AC0CA(vLocal_2041, 600f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_588(&Local_2035, Local_45.f_A);
			unk_0x85A7389D2B63E61A(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000200);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
			{
				Local_1950.f_5 = 0x00000002;
			}
			else
			{
				Local_1950.f_5 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_358(0x000003E8))
			{
				Local_1950.f_5 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			unk_0xD7992BEF7A9D109E("SP_SPR", 0x00000003);
			unk_0x0D3BE1DE0262A012("Shared", 0x00000000);
			while (!unk_0x27117E2CDD4D67C3("Shared"))
			{
				SYSTEM::WAIT(0x00000000);
			}
			unk_0xAE317D00A5A55DF6("HUD_AWARDS", 0x00000000, 0xFFFFFFFF);
			Local_1950.f_5 = 0x00000003;
			break;
		
		case 0x00000003:
			if (unk_0x67C1D9E5B91B2E37(0x00000003))
			{
				Local_1950.f_5 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			Local_1950.f_5 = 0x00000005;
			func_11(&(Local_1950.f_2));
			break;
		
		case 0x00000005:
			if (func_2(&(Local_1950.f_2), 0.5f))
			{
				Local_1950.f_5 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				Local_1950.f_5 = 0x00000009;
			}
			else
			{
				Local_1950.f_5 = 0x00000007;
				func_11(&(Local_1950.f_2));
			}
			break;
		
		case 0x00000007:
			if (func_2(&(Local_1950.f_2), 0.5f))
			{
				Local_1950.f_5 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if (func_581(0x00001388))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				Local_1950.f_5 = 0x00000009;
			}
			break;
		
		case 0x00000009:
			func_4(&(Local_1950.f_2));
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

void func_588(var uParam0, int iParam1)
{
	Local_45 = 0x00000000;
	Local_45.f_1 = 0x00000000;
	Local_45.f_2 = 0x00000002;
	Local_45.f_3 = { vLocal_1940 };
	Local_45.f_6 = 154.8464f;
	Local_45.f_7 = 0x00000004;
	Local_45.f_8 = joaat("a_m_y_genstreet_01");
	Local_45.f_9 = joaat("stunt");
	StringCopy(&(Local_45.f_18[0x00000000 /*8*/]), "AIRPORT", 32);
	Local_45.f_C[0x00000000] = 165f;
	StringCopy(&(Local_45.f_18[0x00000001 /*8*/]), "BRIDGEBINGE", 32);
	Local_45.f_C[0x00000001] = 80f;
	StringCopy(&(Local_45.f_18[0x00000002 /*8*/]), "VINEWOOD", 32);
	Local_45.f_C[0x00000002] = 165f;
	StringCopy(&(Local_45.f_18[0x00000003 /*8*/]), "BRIDGEWORK", 32);
	Local_45.f_C[0x00000003] = 165f;
	StringCopy(&(Local_45.f_18[0x00000004 /*8*/]), "ALTITUDE", 32);
	Local_45.f_C[0x00000004] = 165f;
	switch (iParam1)
	{
		case 0x00000000:
			func_593(&Local_2035);
			break;
		
		case 0x00000001:
			func_592(&Local_2035);
			break;
		
		case 0x00000002:
			func_591(&Local_2035);
			break;
		
		case 0x00000003:
			func_590(&Local_2035);
			break;
		
		case 0x00000004:
			func_589(&Local_2035);
			break;
	}
}

void func_589(var uParam0)
{
}

void func_590(var uParam0)
{
}

void func_591(var uParam0)
{
}

void func_592(var uParam0)
{
}

void func_593(var uParam0)
{
}

void func_594(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_78CE, iParam0);
	StringCopy(&(Global_78CF[iParam0 /*6*/]), unk_0xBB0808A181D4745C(), 24);
	Global_7906[iParam0] = iParam1;
}

void func_595()
{
	Global_56C3.f_5 = 0x00000001;
}

void func_596(int iParam0)
{
	func_311();
	Global_12C4D = iParam0;
	Global_12C4C = 0x00000000;
	Global_12C4F = 0x00000003;
}

void func_597(int iParam0, bool bParam1)
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

void func_598()
{
}

void func_599()
{
	unk_0x3FC8DBCC154CA56B();
	func_364();
	func_430();
	func_577();
	func_597(0x00000017, 0x00000000);
	func_579(0x00000000);
	unk_0x34D79252800B23FF(0x00000005);
	unk_0x066C43E677C08D5C();
	func_311();
	func_238(0x00000000);
	func_256(0x00000000);
	unk_0x96D521DDDB9AD218();
	unk_0x38DC636F3D2D2FA8("MGSP_START");
	unk_0x38DC636F3D2D2FA8("MGSP_FAIL");
	unk_0x38DC636F3D2D2FA8("MGTR_COMPLETE");
	unk_0xC92DB9682A650680("MGSP_END");
	unk_0x8C26F31DFF77D124();
	func_607(0x00000002, 0x00000000);
	func_607(0x00000001, 0x00000000);
	func_607(0x00000003, 0x00000000);
	func_607(0x00000004, 0x00000000);
	func_607(0x00000005, 0x00000000);
	func_607(0x00000006, 0x00000000);
	func_607(0x00000007, 0x00000000);
	unk_0x85A7389D2B63E61A(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0xCE7D0828D683D536();
	func_605(&(Local_45.f_76));
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x11CCD0ACA866C6C5(0x00000003, 0x00000001);
	unk_0xF5A41F3D3B38EFE3("PilotSchool");
	func_603(&Local_2035, 0x00000001);
	unk_0xDB8844D4B7C60440(0x00000067, "SPRTaxi");
	unk_0xDB8844D4B7C60440(0x00000068, "SPRTaxi");
	unk_0xA37A90C62806D848(0x00000001);
	unk_0x790015DC92C918E2();
	func_602();
	unk_0x8BCB70EB440DED83(0x00000001);
	unk_0xBFE31971E49FA500(0x00000001);
	func_253();
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	func_600();
	unk_0x10FAF14A60A0DBE1();
}

void func_600()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_175BD[iVar0 /*17*/] && !Global_175BD[iVar0 /*17*/].f_1)
		{
			if (Global_175BD[iVar0 /*17*/].f_3 == 0x00000000)
			{
				if ((Global_175BD[iVar0 /*17*/].f_5 != 0x00000058 && Global_175BD[iVar0 /*17*/].f_5 != 0x00000059) && Global_175BD[iVar0 /*17*/].f_5 != 0x0000005C)
				{
					func_601(Global_175BD[iVar0 /*17*/].f_5, 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_601(int iParam0, bool bParam1)
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

void func_602()
{
	Global_56C3.f_5 = 0x00000000;
}

void func_603(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_565(uParam0);
	}
	else
	{
		func_604(uParam0);
	}
	func_137(0x00000000);
	func_27(&(uParam0->f_11));
	unk_0xA37A90C62806D848(0x00000001);
	unk_0x790015DC92C918E2();
	if (iLocal_2028)
	{
		func_61("SPR_MOVE_FAIL", 0x00001388, 0x00000000);
		iLocal_2028 = 0x00000000;
	}
}

void func_604(var uParam0)
{
}

void func_605(var uParam0)
{
	func_606(*uParam0);
}

void func_606(var uParam0)
{
	unk_0xE17FDF9E3068281B(&uParam0);
}

void func_607(int iParam0, bool bParam1)
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

