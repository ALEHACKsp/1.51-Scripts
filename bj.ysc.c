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
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
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
	var uLocal_43 = 0;
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
	struct<68> Local_66 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 3;
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
	var uLocal_186 = 2;
	var uLocal_187 = 0;
	var uLocal_188 = 4;
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
	var uLocal_254 = 4;
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
	var uLocal_325 = 12;
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
	var uLocal_506 = 3;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	struct<4> Local_516 = { 0, 0, 0, 0 } ;
	var uLocal_517 = 16;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 0;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	var uVar4;
	var uVar5;
	struct<27> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<11> Var11;
	var uVar12;
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
	vector3 vVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39[3];
	int iVar40;
	var uVar41;
	int iVar42;
	int iVar43;
	int iVar44[6];
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	var uVar52;
	char[] cVar53[8];
	char* sVar54;
	struct<4> Var55;
	vector3 vVar56;
	vector3 vVar57;
	vector3 vVar58;
	vector3 vVar59;
	var uVar60;
	vector3 vVar61;
	vector3 vVar62;
	var uVar63;
	var uVar64;
	float fVar65;
	var uVar66;
	var uVar67;
	var uVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	var uVar87;
	var uVar88;
	int iVar89;
	bool bVar90;
	bool bVar91;
	int iVar92;
	bool bVar93;
	bool bVar94;
	var uVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	bool bVar113;
	int iVar114;
	vector3 vVar115;
	int iVar116;
	bool bVar117;
	
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 0x00000003;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 0x00000001;
	iLocal_38 = 0x00000041;
	iLocal_39 = 0x00000031;
	iLocal_40 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	vLocal_69 = { 500f, 500f, 500f };
	uVar0 = 0x0000000D;
	Var3.f_C = 0x0000000C;
	uVar5 = 0x00000002;
	Var6.f_3 = 0x00000008;
	Var6.f_C = 0x00000008;
	Var6.f_15 = 0x00000004;
	Var6.f_1A.f_20 = 0x00000003;
	Var6.f_1A.f_24 = 0x00000001;
	Var6.f_1A.f_35 = 0x00000002;
	Var6.f_1A.f_39 = 0x0000000D;
	Var6.f_1A.f_47 = 0x0000000D;
	Var6.f_1A.f_118 = 0x0000000D;
	Var6.f_1A.f_1E9 = 0x0000000D;
	Var6.f_1A.f_1F7 = 0x0000000D;
	Var6.f_1A.f_205 = 0x0000000D;
	Var6.f_1A.f_213 = 0x0000000D;
	Var11.f_A.f_2 = 0x00000008;
	Var11.f_A.f_2.f_1.f_3 = 0x00000004;
	Var11.f_A.f_2.f_1.f_F.f_3 = 0x00000004;
	Var11.f_A.f_2.f_1.f_F.f_F.f_3 = 0x00000004;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_3 = 0x00000004;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_3 = 0x00000004;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_3 = 0x00000004;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 0x00000004;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 0x00000004;
	iVar14 = 0xFFFFFFFF;
	uVar32 = 0x00000010;
	iVar33 = ScriptParam_516;
	iVar42 = ScriptParam_516.f_3;
	cVar53 = "BJ_FAIL";
	sVar54 = "";
	vVar59 = { 5f, 5f, 10f };
	fVar65 = 1f;
	fVar69 = -1f;
	iVar70 = 0xFFFFFFFF;
	iVar73 = 0xFFFFFFFF;
	iVar77 = Global_1B416.f_4A12;
	iVar80 = 0x00000001;
	iVar81 = 0xFFFFFFFF;
	bVar100 = 0x00000000;
	bVar105 = 0x00000001;
	bVar107 = 0x00000000;
	bVar108 = 0x00000000;
	bVar110 = 0x00000001;
	bVar111 = 0x00000000;
	bVar112 = 0x00000000;
	bVar113 = 0x00000000;
	if (unk_0xC844350D5D58C99A(ScriptParam_516.f_1))
	{
		iVar40 = ScriptParam_516.f_1;
	}
	else
	{
		iVar40 = unk_0x728870EB733D12A1();
	}
	bVar111 = unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0x00000000);
	bVar112 = unk_0x42CF608FD1475F11(unk_0xD803B885F5E47A62());
	if (bVar111)
	{
		unk_0xBDCADF8E5030FC79(unk_0xD803B885F5E47A62(), &iVar86);
		unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &uVar87);
	}
	if (bVar112)
	{
		unk_0x1E9DAC645AEE64F0(unk_0xD803B885F5E47A62(), &uVar88);
	}
	if (unk_0xC844350D5D58C99A(iVar40))
	{
		unk_0x73270B3C9CC833FD(iVar40, 0x00000001, 0x00000001);
	}
	if (unk_0xF45FDB21A0F137CB())
	{
		unk_0xC1B8EFD8630D086B(0x00000000);
	}
	if (unk_0x2EBF608FFE6CA406(0x00000052))
	{
		func_554(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, &iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
	}
	if (iVar77 < 0x00000000)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4A12.f_1, iVar77))
	{
		fVar65 = 0.1f;
	}
	iVar13 = iVar77;
	func_553(0x00000000);
	unk_0xA37A90C62806D848(0x00000001);
	unk_0x7798376279BB5369(0x00000001);
	func_552(0x00000017, 0x00000001);
	unk_0xF5637CC664BEAAD0(1500f, 0x00000000, 0x00000015);
	func_526(&Var3, iVar13);
	if (unk_0xC844350D5D58C99A(iVar42))
	{
		unk_0x73270B3C9CC833FD(iVar42, 0x00000001, 0x00000001);
	}
	if (unk_0xC844350D5D58C99A(iVar33))
	{
		unk_0x73270B3C9CC833FD(iVar33, 0x00000001, 0x00000001);
		if (func_525(&Var3) != 0x00000000 && unk_0x134B62B726CEC8E6(iVar33) == func_525(&Var3))
		{
			iVar36 = iVar33;
			iVar33 = 0x00000000;
		}
	}
	while (0x00000001)
	{
		if (!bVar105)
		{
			SYSTEM::WAIT(0x00000000);
		}
		else
		{
			bVar105 = 0x00000000;
		}
		if ((iVar7 >= 0x00000006 && iVar7 <= 0x0000000A) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar15 = func_514();
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
		}
		func_513();
		func_505(&uVar4);
		func_501(&Var6, iVar7);
		func_497(&Var6, iVar7, iVar13, bVar93);
		switch (iVar7)
		{
			case 0x00000000:
				func_496();
				if (unk_0xD0BB2359EC70FC37())
				{
					break;
				}
				func_490();
				func_489(0x00000001);
				func_485("AM_H_BASEJ", 0x00000001);
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(0x00000001);
				if (iVar13 == 0x00000000)
				{
					unk_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0x00000001, 0x00000000, 0x00000001);
					uVar41 = unk_0xE120F7BE93901C1B(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
				}
				else if (iVar13 == 0x00000005)
				{
					unk_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar13 == 0x00000004)
				{
					func_481(-74.9632f, -827.4467f, 324.9521f, 25f, 0x00000001);
					unk_0x536F1BE96C726C4B(-74.9632f, -827.4467f, 324.9521f, 25f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iVar13 == 0x00000008)
				{
					func_481(-74.9632f, -827.4467f, 324.9521f, 25f, 0x00000001);
					unk_0x536F1BE96C726C4B(-807.073f, 330.8846f, 232.6766f, 25f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				}
				if (unk_0xC844350D5D58C99A(iVar33))
				{
					func_480(&iVar23);
				}
				if ((iVar13 == 0x00000006 || iVar13 == 0x0000000C) || iVar13 == 0x00000005)
				{
					if (unk_0xC844350D5D58C99A(ScriptParam_516.f_2))
					{
						unk_0x73270B3C9CC833FD(ScriptParam_516.f_2, 0x00000001, 0x00000001);
						unk_0xF690C84DADBB3551(&(ScriptParam_516.f_2));
					}
					func_471(&uVar5, &Var3, iVar13, iVar13 == 0x00000006);
					bVar102 = 0x00000001;
				}
				iVar7 = 0x00000001;
				break;
			
			case 0x00000001:
				if (unk_0x757EF87A33649210() || (((iVar13 == 0x00000005 || iVar13 == 0x00000006) || iVar13 == 0x0000000C) && !bVar93))
				{
					if (!bVar93)
					{
						if ((iVar13 != 0x00000005 && iVar13 != 0x00000006) && iVar13 != 0x0000000C)
						{
							vVar57 = { func_470(iVar13) };
							vVar57 = { func_469(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x76F7F8AA07822C28(vVar57.x)) };
							if (func_468(iVar13))
							{
								unk_0xD67D6A3F0D653D93(func_467(iVar13), vVar57, 4000f, 0x00000000);
							}
						}
						func_461(&Var3, iVar13, &uVar0, &iVar1, &iVar2, &uVar51, &iVar84);
					}
					else if (func_459(func_460(iVar13)))
					{
						vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(&Var3))), SYSTEM::SIN((-97.4239f + func_458(&Var3)))) };
						vVar61 = { unk_0x68E4ADDDDCD7BDDE(iVar33, 1.12046f, -0.317773f, 1.3385f) };
						vVar62 = { func_457(vVar62, 8.909f) };
						if (func_468(iVar13))
						{
							unk_0xD67D6A3F0D653D93(vVar61 + vVar62, vVar62, 4000f, 0x00000000);
						}
					}
					else
					{
						vVar57 = { -10f, 0f, func_458(&Var3) };
						vVar57 = { func_469(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x76F7F8AA07822C28(vVar57.x)) };
						if (func_468(iVar13))
						{
							unk_0xD67D6A3F0D653D93(func_467(iVar13), vVar57, 4000f, 0x00000000);
						}
					}
					if (((bVar93 || iVar13 == 0x00000004) || iVar13 == 0x00000008) || iVar13 == 0x00000003)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 0x00000001);
						}
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_467(iVar13), 0x00000000, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_458(&Var3));
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					}
					iVar7 = 0x00000002;
				}
				else if (!unk_0xD0BB2359EC70FC37() && (!func_456(&iVar23) || func_455(&iVar23) > 0.05f))
				{
					if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
					{
						unk_0x53491B90E4FD0E56(0x000009C4);
					}
					else
					{
						unk_0x53491B90E4FD0E56(0x00000320);
					}
				}
				break;
			
			case 0x00000002:
				if (func_453(&uVar0, &iVar16, &uVar51, iVar13, iVar84, ((iVar13 != 0x00000005 && iVar13 != 0x00000006) && iVar13 != 0x0000000C)))
				{
					func_452(&iVar16);
					func_429(&Var3, &uVar32, &iVar72, &iVar33, &iVar34, &iVar36, &iVar35, &iVar37, &iVar42, &iVar43, iVar1, iVar2, &iVar19, iVar13, &iVar81);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
					if (!bVar93 && !bVar102)
					{
						func_471(&uVar5, &Var3, iVar13, 0x00000000);
					}
					iVar7 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (!func_456(&iVar16) && !bVar93)
				{
					func_428(0x00000000, 0x00000000, 0x00000001);
					func_480(&iVar16);
				}
				else if ((func_456(&iVar16) && func_455(&iVar16) > 0.2f) || bVar93)
				{
					if (func_459(func_460(iVar13)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@basejump@", "Heli_door_loop", 0x00000003))
					{
					}
					else if (bVar93)
					{
						unk_0x53491B90E4FD0E56(0x00000320);
						if (func_456(&iVar16))
						{
							func_452(&iVar16);
						}
						if (func_525(&Var3) != 0x00000000)
						{
							unk_0x1E9649458B15960F(iVar36, 0x00000000);
							func_480(&iVar22);
						}
						iVar7 = 0x00000004;
					}
					else
					{
						func_452(&iVar16);
						if (unk_0x757EF87A33649210())
						{
							SYSTEM::WAIT(0x000003E8);
							unk_0xF1E4C781086FABC1(func_427(&uVar5, 0x00000001), func_427(&uVar5, 0x00000000), 0x00002710, 0x00000001, 0x00000001);
							unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
							unk_0x82E51BCA72537B6C(0x00000320);
						}
						unk_0x486B4ADE317F0689();
						if (func_459(func_460(iVar13)))
						{
							vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(&Var3))), SYSTEM::SIN((-97.4239f + func_458(&Var3)))) };
							vVar61 = { unk_0x68E4ADDDDCD7BDDE(iVar33, 1.12046f, -0.317773f, 1.3385f) };
							vVar62 = { func_457(vVar62, 8.909f) };
							if (func_468(iVar13))
							{
								unk_0xD67D6A3F0D653D93(vVar61 + vVar62, vVar62, 4000f, 0x00000000);
							}
						}
						else
						{
							vVar57 = { -10f, 0f, func_458(&Var3) };
							vVar57 = { func_469(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), unk_0x76F7F8AA07822C28(vVar57.x)) };
							if (func_468(iVar13))
							{
								unk_0xD67D6A3F0D653D93(func_467(iVar13), vVar57, 4000f, 0x00000000);
							}
						}
						if (!func_425(func_426(iVar13)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
							unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
							if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
							{
								unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
							}
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_426(iVar13), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_424(func_426(iVar13), func_467(iVar13)));
							unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
							if (func_422() == 0x00000000)
							{
								unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000009, 0x00000005, 0x00000000, 0x00000000);
							}
							else if (func_422() == 0x00000001)
							{
								unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000008, 0x00000001, 0x00000000, 0x00000000);
							}
							else if (func_422() == 0x00000002)
							{
								unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000008, 0x00000003, 0x00000000, 0x00000000);
							}
							unk_0xDD353D0E9C789D0E(&iVar48);
							if (func_421(iVar13) > 0x00000000)
							{
								unk_0x93D47DFD0AE94949(0x00000000, func_421(iVar13));
							}
							unk_0x80AA372E04ED318D(0x00000000, func_467(iVar13), 1f, 0xFFFFFFFF, func_458(&Var3), 0x3F000000);
							unk_0x75ABDC5F81978924(iVar48);
							unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar48);
							unk_0xF82EA857DA10E0CD(&iVar48);
						}
						if (!func_459(func_460(iVar13)))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &iVar39);
							}
							iVar82 = 0x00000000;
							while (iVar82 < iVar39)
							{
								if (unk_0xC844350D5D58C99A(iVar39[iVar82]) && !unk_0x437347B10A200C4B(iVar39[iVar82], 0x00000000))
								{
									if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar39[iVar82], 0x00000000), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000)) < 2500f)
									{
										unk_0x25BD67336EA4AECE(iVar39[iVar82], 0x000003E8);
										unk_0xF8CF67C6E39C23A9(iVar39[iVar82], 5f);
										unk_0xE8832A9E16A57A1F(iVar39[iVar82], 0x00000001, 0x00000001);
									}
								}
								iVar82++;
							}
						}
						if (func_525(&Var3) != 0x00000000)
						{
							func_480(&iVar22);
						}
						if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
						}
						if (func_420(iVar13, iVar84) > 0f)
						{
							func_480(&iVar28);
						}
						iVar7 = 0x00000004;
					}
				}
				break;
			
			case 0x00000004:
				if (iVar13 == 0x00000000)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				if (bVar96 || bVar97)
				{
					if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
					{
						unk_0x82E51BCA72537B6C(0x0000012C);
						SYSTEM::WAIT(0x0000012C);
					}
					unk_0xA37A90C62806D848(0x00000001);
					unk_0x790015DC92C918E2();
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000001, 0x00000000);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					iVar7 = 0x0000000A;
				}
				else if (unk_0x757EF87A33649210())
				{
					func_412(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					if (func_459(func_460(iVar13)))
					{
						func_411(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
						iVar85 = unk_0xD68EA767274B7444();
						if (bVar110)
						{
							unk_0xCEAA091B490F8407(iVar85, "Helicopter_Wind_Idle", iVar33, "BASEJUMPS_SOUNDS", 0x00000000, 0x00000000);
						}
						if (bVar109)
						{
							unk_0xA742A6B0DF3576C2(0x00000001, 0x11E72B50);
						}
					}
					else
					{
						if (unk_0xF45FDB21A0F137CB())
						{
							unk_0xC1B8EFD8630D086B(0x00000000);
						}
						unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000001, 0x00000000);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 0x3F800000);
					}
					unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
					unk_0x03846294119069F1(unk_0x16F2683693E537C9());
					unk_0xADCFE13F048E110C(unk_0x16F2683693E537C9());
					unk_0x759A5E1D0F0A31A1(unk_0x16F2683693E537C9());
					unk_0xBFE31971E49FA500(0x00000000);
					unk_0x8BCB70EB440DED83(0x00000000);
					iVar7 = 0x00000005;
				}
				else
				{
					if (!bVar104)
					{
						if (!func_456(&iVar30))
						{
							func_480(&iVar30);
						}
						else if (func_455(&iVar30) > 4f || (func_459(func_460(iVar13)) && func_455(&iVar30) > 0.5f))
						{
							func_395(&uVar32, "OJBJAUD", func_410(&Var3), 0x00000008, 0x00000000, 0x00000000, 0x00000000);
							bVar104 = 0x00000001;
						}
					}
					if (!unk_0xD0BB2359EC70FC37() && !bVar93)
					{
						if (func_373(&Var3, iVar13, &iVar36, &uVar5, &uVar4, &iVar17, &iVar18, &iVar22, &iVar28, iVar84, &bVar94, &bVar106, bVar98))
						{
							unk_0xA37A90C62806D848(0x00000001);
							bVar98 = 0x00000000;
							if (func_372(&Var3))
							{
								unk_0x53491B90E4FD0E56(0x00000320);
							}
							else
							{
								unk_0xBFE31971E49FA500(0x00000000);
								unk_0x8BCB70EB440DED83(0x00000000);
								iVar7 = 0x00000005;
							}
						}
					}
				}
				break;
			
			case 0x00000005:
				if (iVar13 == 0x00000000)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				func_370();
				func_369();
				if (unk_0x757EF87A33649210())
				{
					if (bVar93 && bVar103)
					{
						unk_0x71592C07333285FE(func_368(iVar15), func_367(iVar15), func_366(iVar15));
					}
					SYSTEM::WAIT(0x000007D0);
					if (bVar93)
					{
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
						func_365(&iVar29);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
						}
						while (func_455(&iVar29) < 1.1f)
						{
							SYSTEM::WAIT(0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
							}
						}
						func_452(&iVar29);
					}
					unk_0x82E51BCA72537B6C(0x00000320);
				}
				if (unk_0xC844350D5D58C99A(iVar34) && !unk_0x437347B10A200C4B(iVar34, 0x00000000))
				{
					iVar45 = unk_0x6CC513A908911CF0(unk_0x68E4ADDDDCD7BDDE(iVar34, func_364(&Var3)));
					unk_0x61755AC17D8F538E(iVar45, 0x00000005);
					unk_0xF2D30B8ACAF12A39(iVar45, 0x00000001);
					unk_0xDC5B2F9D0CCE3A10(iVar45, "BJ_BLIP_TGT");
				}
				else
				{
					iVar45 = unk_0x6CC513A908911CF0(func_363(&Var3, 0x00000000));
					unk_0x61755AC17D8F538E(iVar45, 0x00000005);
					if (iVar72 == 0x00000001)
					{
						unk_0xDC5B2F9D0CCE3A10(iVar45, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xDC5B2F9D0CCE3A10(iVar45, "BJ_BLIP_CHK");
					}
				}
				unk_0x516E63E474722206(iVar45, 1.2f);
				if (iVar72 > 0x00000001)
				{
					iVar46 = unk_0x6CC513A908911CF0(func_363(&Var3, 0x00000001));
					unk_0x61755AC17D8F538E(iVar46, 0x00000005);
					unk_0xF2D30B8ACAF12A39(iVar45, 0x00000001);
					unk_0x516E63E474722206(iVar46, 0.7f);
					if (iVar72 == 0x00000002)
					{
						unk_0xDC5B2F9D0CCE3A10(iVar46, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xDC5B2F9D0CCE3A10(iVar46, "BJ_BLIP_CHK");
					}
				}
				if (unk_0xC844350D5D58C99A(iVar34) && !unk_0x437347B10A200C4B(iVar34, 0x00000000))
				{
					unk_0x25BD67336EA4AECE(iVar34, 0x000007D0);
					if (unk_0xC844350D5D58C99A(iVar43) && !unk_0xEB6A8945D1AC98A1(iVar43))
					{
						unk_0xA3BF0AA5A2608191(iVar43);
					}
					if (func_361(func_362(&Var3)))
					{
						unk_0x86AA47F87DFBA4D0(&iVar34);
					}
					else
					{
						unk_0xA47B46945FF6DE74(iVar34, func_363(&Var3, 0x00000000), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4A12.f_1, (func_360(&Var3) - 0x0000007D)))
				{
					unk_0xDF9891243C73DEA5(unk_0xD803B885F5E47A62(), 0x00000001);
					unk_0x940BAD39F84C002F(unk_0xD803B885F5E47A62(), unk_0x09AC81E49EA267F7(0x00000000, 0x00000100), unk_0x09AC81E49EA267F7(0x00000000, 0x00000100), unk_0x09AC81E49EA267F7(0x00000000, 0x00000100));
				}
				if (func_359(func_460(iVar13)))
				{
					func_358(0x00000001, 0x00000001, 0x00000001);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_365(&iVar19);
					iVar7 = 0x00000006;
					func_357(0x00000058, 0x00000001);
				}
				else if (func_459(func_460(iVar13)))
				{
					func_358(0x00000000, 0x00000000, 0x00000001);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
					iVar7 = 0x00000007;
					func_357(0x00000058, 0x00000001);
				}
				else
				{
					func_358(0x00000001, 0x00000001, 0x00000001);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
					iVar7 = 0x00000006;
					func_357(0x00000058, 0x00000001);
				}
				if (iVar13 == 0x00000005)
				{
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000092, 0x00000001);
				}
				if (!bVar94 && unk_0xC844350D5D58C99A(iVar36))
				{
					func_356(&iVar36, 0x00000001);
					bVar94 = 0x00000001;
				}
				if (!func_372(&Var3))
				{
					if (func_459(func_460(iVar13)))
					{
						func_411(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
					}
					else
					{
						if ((func_355(&Var3) && !bVar106) && !bVar93)
						{
							unk_0x04B065D07D2FB5B9(0x00000001, 0x00000000, 0x00000003, 0x00000000);
						}
						else if (iVar13 == 0x00000004 && !func_354())
						{
							unk_0x608A456FDD8A83D8(func_427(&uVar5, 0x00000000), -76.7226f, -829.9866f, 326.0427f);
							unk_0x5F3CBA6EB9341C90(func_427(&uVar5, 0x00000000), 0.8541f, 0f, -17.012f, 0x00000002);
							unk_0x5818C8D5303DCCF8(func_427(&uVar5, 0x00000000), 53.883f);
							unk_0xE3BB8E05FCEB3FBE(func_427(&uVar5, 0x00000000), 0x00000001);
						}
						else
						{
							if (unk_0xF45FDB21A0F137CB())
							{
								unk_0xC1B8EFD8630D086B(0x00000000);
							}
							unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000001, 0x00000000);
						}
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 0x3F800000);
						unk_0x486B4ADE317F0689();
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (bVar111)
					{
						if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0x00000000))
						{
							unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001, 0x00000000, 0x00000001);
						}
						unk_0x4B1EE5FDF7BAC7D7(unk_0x16F2683693E537C9(), iVar86);
						if (bVar112)
						{
							if (!unk_0x42CF608FD1475F11(unk_0xD803B885F5E47A62()))
							{
								unk_0xDD0DEB90BA7FE85C(unk_0xD803B885F5E47A62());
							}
							unk_0x0D0DC18C4D9A7AAB(unk_0x16F2683693E537C9(), uVar88);
						}
					}
					else
					{
						unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001, 0x00000000, 0x00000001);
						unk_0x4B1EE5FDF7BAC7D7(unk_0x16F2683693E537C9(), (unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) % 0x00000008));
					}
				}
				unk_0x3F423BF5B8125A50("skydive@base");
				unk_0x3F423BF5B8125A50("skydive@freefall");
				unk_0x3F423BF5B8125A50("skydive@parachute@chute");
				unk_0x3F423BF5B8125A50("skydive@parachute@");
				break;
			
			case 0x00000006:
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					iVar7 = 0x0000000C;
					break;
				}
				else if ((bVar97 || bVar96) || func_353(&Var3, iVar13, &bVar99))
				{
					unk_0xA37A90C62806D848(0x00000001);
					unk_0x790015DC92C918E2();
					iVar7 = 0x0000000A;
				}
				else
				{
					if (iVar13 == 0x00000005)
					{
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000092, unk_0x62438065F1C29508(unk_0x16F2683693E537C9(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0x00000000, 0x00000001, 0x00000000));
					}
					if (bVar98)
					{
						vVar58 = { func_363(&Var3, (iVar72 - 0x00000001)) };
						vVar58.z = (vVar58.z + 100f);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar58, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						bVar98 = 0x00000000;
					}
					if (!bVar101)
					{
						if (iVar13 == 0x00000004)
						{
							if (((((unk_0x06F8112AA79C53D9(0x00000000, 0x00000047) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000048)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000001)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000002)) || unk_0x06F8112AA79C53D9(0x00000000, 0x0000004B)) || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000001, 0x00000514, 0x00000001, 0x00000001, 0x00000000);
								bVar101 = 0x00000001;
							}
						}
					}
					func_352(&iVar19);
					func_342(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0x00000000, 0x00000001, fVar65);
					func_341(&uVar52);
					if (func_456(&iVar16))
					{
						if (func_455(&iVar16) > 10f)
						{
							func_337(&iVar20, &iVar80);
						}
					}
					else
					{
						func_336(&iVar16, 0f);
					}
					if (unk_0xC844350D5D58C99A(iVar36) && !unk_0x437347B10A200C4B(iVar36, 0x00000000))
					{
						if (!unk_0x0A059E0DB9253280(iVar36) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar36, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 40000f)
						{
							iVar114 = unk_0xA30B8362589C124A(iVar36, 0xFFFFFFFF, 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iVar114))
							{
								unk_0xEBA53F35D0085654(&iVar114);
							}
							unk_0xA954465BA6FDEFE2(&iVar36);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iVar78, 0x00000000))
					{
						if (unk_0xD17F06053799A7CA() || !func_456(&iVar31))
						{
							func_365(&iVar31);
						}
						else if (func_455(&iVar31) > 0.25f)
						{
							Var55 = { func_335(iVar13) };
							func_334(&Var55, 0x00001D4C, 0x00000000);
							func_452(&iVar31);
							unk_0x5D96D8530B3D0904(&iVar78, 0x00000000);
						}
					}
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						func_333(&Var6, 0x00000001);
						iVar38 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
						if (unk_0xDF1306B443CD3D15(iVar38, 0x00000000) && unk_0xE934758D273C899A(iVar38))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iVar78, 0x00000001))
							{
								if (!func_456(&iVar24))
								{
									func_480(&iVar24);
								}
								else if (func_455(&iVar24) > 0.15f)
								{
									func_332("BJ_VEHHELP", 0xFFFFFFFF);
									func_452(&iVar24);
									unk_0x5D96D8530B3D0904(&iVar78, 0x00000001);
								}
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&iVar78, 0x00000001);
							if (func_331("BJ_VEHHELP"))
							{
								unk_0xA37A90C62806D848(0x00000001);
							}
							if (func_456(&iVar24))
							{
								func_452(&iVar24);
							}
						}
					}
					else
					{
						func_333(&Var6, 0x00000000);
						unk_0x0674E58A79778E99(&iVar78, 0x00000001);
						if (func_331("BJ_VEHHELP"))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
						if (func_456(&iVar24))
						{
							func_452(&iVar24);
						}
					}
					if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) != 0xFFFFFFFF)
					{
						if (iVar13 == 0x00000005)
						{
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000092, 0x00000000);
						}
						unk_0x7B0C620E7A619AA1(0x00000001);
						unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
						iVar7 = 0x00000009;
						func_452(&iVar16);
					}
				}
				break;
			
			case 0x00000007:
				if (iVar13 == 0x00000000)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				if (bVar96 || bVar97)
				{
					if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
					{
						unk_0x82E51BCA72537B6C(0x0000012C);
						SYSTEM::WAIT(0x0000012C);
					}
					unk_0xA37A90C62806D848(0x00000001);
					unk_0x790015DC92C918E2();
					if (unk_0xF45FDB21A0F137CB())
					{
						unk_0xC1B8EFD8630D086B(0x00000000);
					}
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					iVar7 = 0x0000000A;
				}
				else
				{
					func_352(&iVar19);
					func_342(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0x00000000, 0x00000001, fVar65);
					func_341(&uVar52);
					if (func_459(func_460(iVar13)) && !unk_0x437347B10A200C4B(iVar33, 0x00000000))
					{
						func_330(iVar33, func_467(iVar13));
					}
					if (func_456(&iVar16))
					{
						if (func_455(&iVar16) > 10f)
						{
							func_337(&iVar20, &iVar80);
						}
					}
					else
					{
						func_336(&iVar16, 0f);
					}
					if (func_326(&Var3, &uVar5, &uVar4, &iVar18, &vVar56, &uVar60, vVar61, vVar62) || bVar98)
					{
						func_452(&iVar16);
						unk_0xA37A90C62806D848(0x00000001);
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(iVar33) && !unk_0x437347B10A200C4B(iVar33, 0x00000000))
							{
								unk_0xA47B46945FF6DE74(iVar33, func_467(iVar13), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(iVar33, func_458(&Var3));
								unk_0x1E9649458B15960F(iVar33, 0x00000001);
								iVar81 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
								unk_0x6BE2EAE992FD7C26(iVar81, iVar33, unk_0xF653B9B22DA806A9(iVar33, "Chassis"));
								unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iVar81, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 0x00000007, 0x00000000, 0x447A0000, 0x00000000);
								unk_0x57E0CF9BF653D99A(iVar81, 0.6f);
								func_324(iVar33, &uVar5, &iVar17);
								unk_0x486B4ADE317F0689();
							}
						}
						if (bVar109)
						{
							unk_0xA742A6B0DF3576C2(0x00000000, 0x11E72B50);
						}
						unk_0xCEAA091B490F8407(iVar85, "Helicopter_Wind", iVar33, "BASEJUMPS_SOUNDS", 0x00000000, 0x00000000);
						bVar98 = 0x00000000;
						iVar7 = 0x00000008;
					}
				}
				break;
			
			case 0x00000008:
				if (iVar13 == 0x00000000)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				func_352(&iVar19);
				func_342(&Var3, iVar34, iVar42, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0x00000000, 0x00000001, fVar65);
				if (unk_0x69DF961355195C3C(iVar81))
				{
					if (unk_0xA45992A6CE82FB43(iVar81) > 0.92f)
					{
						unk_0xDD353D0E9C789D0E(&iVar47);
						unk_0x818303F509839F80(0x00000000, 0xBAC0F10B, 0x00000000);
						unk_0x12E1315CBD2320BD(0x00000000, 0x00000001, 0x00000000);
						unk_0x75ABDC5F81978924(iVar47);
						unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar47);
						unk_0xF82EA857DA10E0CD(&iVar47);
					}
				}
				if (unk_0xC844350D5D58C99A(iVar33))
				{
					if (func_323(&uVar5, &iVar17, vVar61, vVar62, vVar56, &uVar63, &uVar64))
					{
						unk_0xB0703A3FDD659128(unk_0x16F2683693E537C9(), iVar33, 0x00000000);
						if (!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@basejump@", "Heli_jump", 0x00000003))
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
							unk_0xBFE31971E49FA500(0x00000001);
							if (unk_0xF45FDB21A0F137CB())
							{
								unk_0xC1B8EFD8630D086B(0x00000000);
							}
							unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
							unk_0x7B0C620E7A619AA1(0x00000001);
							iVar7 = 0x00000009;
						}
					}
				}
				break;
			
			case 0x00000009:
				if (iVar13 == 0x00000000)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				if (Global_56C3.f_87)
				{
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000090, 0x00000001);
				}
				if (Global_56C3.f_87)
				{
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000090, 0x00000001);
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					iVar7 = 0x0000000C;
					break;
				}
				if (bVar96 || bVar97)
				{
					unk_0xA37A90C62806D848(0x00000001);
					unk_0x790015DC92C918E2();
					iVar7 = 0x0000000A;
				}
				else if (func_322(&uVar4, 0x00000003, 0x000003E8) && !Global_56C3.f_87)
				{
					unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000001);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100);
					unk_0x53491B90E4FD0E56(0x00000320);
					while (unk_0xD0BB2359EC70FC37())
					{
						func_342(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0x00000000, 0x00000001, fVar65);
						SYSTEM::WAIT(0x00000000);
					}
					func_276(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
					bVar93 = 0x00000001;
					iVar7 = 0x00000000;
				}
				else
				{
					func_273(&iVar26, &iVar44);
					if (bVar98)
					{
						vVar58 = { func_363(&Var3, (iVar72 - 0x00000001)) };
						func_271(unk_0x16F2683693E537C9(), vVar58);
						bVar98 = 0x00000000;
					}
					func_352(&iVar19);
					if (func_361(func_362(&Var3)))
					{
						if (!unk_0xC844350D5D58C99A(iVar34) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), func_363(&Var3, 0x00000000), 0x00000000) <= 200f)
						{
							iVar34 = unk_0x9F136BAA293FE131(0x00000006, func_363(&Var3, 0x00000000), 0x00000001);
							if (!unk_0x437347B10A200C4B(iVar34, 0x00000000))
							{
								unk_0x5D6C12CA95187FB3(iVar34, 7.5f);
							}
						}
					}
					else if ((unk_0xC844350D5D58C99A(iVar34) && !unk_0x437347B10A200C4B(iVar34, 0x00000000)) && !func_425(func_363(&Var3, 0x00000000)))
					{
						unk_0xEB6A8945D1AC98A1(iVar43);
						if (func_270(unk_0x16F2683693E537C9(), iVar34, 0x00000000) <= 325f)
						{
							if (iVar13 == 0x00000005)
							{
								vVar115 = { 28.8687f, -299.1065f, 46.5693f };
							}
							else
							{
								vVar115 = { -819.7591f, -1512.229f, 0.1336f };
							}
							if (unk_0xD1960163A3042274(iVar43, 0xB41F1A34) != 0x00000001)
							{
								if (iVar13 == 0x00000005)
								{
									unk_0x132B85BCE016BCA0(iVar43, iVar34, vVar115, 0x00000004, 5f, 0x01002000, 5f, 10f, 0x00000001);
								}
								else
								{
									unk_0x132B85BCE016BCA0(iVar43, iVar34, vVar115, 0x00000004, 5f, 0x01000000, 4f, -1f, 0x00000001);
								}
							}
							else
							{
								func_265(&iVar34);
							}
						}
					}
					iVar8 = func_342(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0x00000001, 0x00000001, fVar65);
					if (iVar8 == 0x00000001 || iVar8 >= 0x00000002)
					{
						unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
						if (iVar8 >= 0x00000002)
						{
							if (unk_0xFEBC1E4EC9E001F0())
							{
								unk_0xA37A90C62806D848(0x00000001);
							}
							if (unk_0xD17F06053799A7CA())
							{
								unk_0x790015DC92C918E2();
							}
						}
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000000);
						if (iVar13 == 0x00000005)
						{
							unk_0xA3BF0AA5A2608191(iVar43);
							unk_0x4E885A246A9D983A(iVar43, 0x00000128, 0x00000001);
						}
						iVar116 = 0x00000000;
						while (iVar116 < iVar44)
						{
							if (unk_0xC844350D5D58C99A(iVar44[iVar116]) && !unk_0x437347B10A200C4B(iVar44[iVar116], 0x00000000))
							{
								unk_0xA3BF0AA5A2608191(iVar44[iVar116]);
								iVar44[iVar116] = 0x00000000;
							}
							iVar116++;
						}
						iVar7 = 0x0000000A;
					}
					func_264(&Var6, &Var3, iVar13, iVar72);
				}
				break;
			
			case 0x0000000A:
				if (iVar13 == 0x00000000)
				{
					unk_0x29AA598B93E45D37(200f);
				}
				if (unk_0xC844350D5D58C99A(iVar43) && !unk_0x437347B10A200C4B(iVar43, 0x00000000))
				{
					if (unk_0xD1960163A3042274(iVar43, 0xC572E06A) != 0x00000000 && unk_0xD1960163A3042274(iVar43, 0xC572E06A) != 0x00000001)
					{
						unk_0xA3BF0AA5A2608191(iVar43);
						unk_0x93D47DFD0AE94949(iVar43, 0xFFFFFFFF);
					}
				}
				if ((!bVar96 && !bVar97) && !bVar99)
				{
					if (!func_456(&iVar21))
					{
						if (!func_456(&iVar18))
						{
							func_480(&iVar18);
						}
						if (unk_0xE4EDC4B0E92C078B(iVar45))
						{
							unk_0x142CC44DB769B57E(&iVar45);
						}
						if (unk_0xE4EDC4B0E92C078B(iVar46))
						{
							unk_0x142CC44DB769B57E(&iVar46);
						}
						if (iVar73 > 0xFFFFFFFF)
						{
							unk_0xE223EB8FE6F8CC15(iVar49);
							unk_0xE223EB8FE6F8CC15(iVar50);
							iVar73 = 0xFFFFFFFF;
						}
						func_336(&iVar21, 0f);
					}
					if (!func_456(&vVar27))
					{
						func_480(&vVar27);
					}
					if (func_362(&Var3) == 0x00000000)
					{
						func_263(func_363(&Var3, (iVar72 - 0x00000001)), vVar27);
					}
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (((((unk_0xC844350D5D58C99A(iVar34) && !unk_0x437347B10A200C4B(iVar34, 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iVar34, vVar59, 0x00000000, 0x00000001, 0x00000000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_363(&Var3, iVar71), vVar59, 0x00000000, 0x00000001, 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9()))
						{
							bVar117 = 0x00000000;
							if (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()) && (unk_0xC844350D5D58C99A(iVar34) && !unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iVar34)))
							{
								bVar117 = 0x00000001;
							}
							else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
							{
								bVar117 = 0x00000001;
							}
							if (bVar117)
							{
								if (func_322(&uVar4, 0x00000003, 0x000003E8) && !Global_56C3.f_87)
								{
									unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000001);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100);
									unk_0x53491B90E4FD0E56(0x00000320);
									while (unk_0xD0BB2359EC70FC37())
									{
										func_342(&Var3, iVar34, iVar43, &iVar44, &iVar49, &iVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0x00000000, 0x00000001, fVar65);
										SYSTEM::WAIT(0x00000000);
									}
									func_276(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
									bVar93 = 0x00000001;
									iVar7 = 0x00000000;
								}
								break;
							}
						}
					}
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					iVar7 = 0x0000000C;
					break;
				}
				if (((bVar96 || bVar97) || bVar99) || (func_456(&iVar21) && func_455(&iVar21) > 0.25f))
				{
					if (func_456(&iVar21) && func_455(&iVar21) > 0.25f)
					{
						func_259(func_363(&Var3, iVar71), iVar34, iVar43, &iVar8, &iVar75, &fVar69);
					}
					func_452(&iVar21);
					if (bVar96 || iVar8 == 0x00000001)
					{
						iVar10 = func_258();
						while (!unk_0x83D8570832F172A7(iVar10))
						{
							SYSTEM::WAIT(0x00000000);
							if (func_362(&Var3) == 0x00000000)
							{
								func_263(func_363(&Var3, (iVar72 - 0x00000001)), vVar27);
							}
							iVar10 = func_258();
						}
						if (iVar13 == 0x00000000)
						{
							if (!unk_0xEB6A8945D1AC98A1(iVar43))
							{
								func_395(&uVar32, "OJBJAUD", "BJ_01D", 0x00000008, 0x00000001, 0x00000001, 0x00000000);
							}
						}
						iVar7 = 0x0000000B;
						if (!func_257(&Var6, 0x00000007))
						{
							iVar79 = 0x0000007D;
							unk_0x5D96D8530B3D0904(&(Global_1B416.f_4A12.f_1), (func_360(&Var3) - iVar79));
							func_256(func_360(&Var3), 0x00000001);
							iVar89 = 0x00000001;
							bVar90 = 0x00000001;
							bVar91 = 0x00000001;
							iVar83 = 0x00000000;
							while (iVar83 < 0x0000000D)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4A12.f_1, iVar83))
								{
									if (func_459(func_460(iVar83)))
									{
										bVar91 = 0x00000000;
									}
									else
									{
										bVar90 = 0x00000000;
									}
									iVar89 = 0x00000000;
								}
								iVar83++;
							}
							if (iVar89 && !func_255(0x00000062))
							{
								func_254(0x00000062, 0x00000001);
							}
							if (bVar90)
							{
								func_251(0x00000080, 0x00000000, 0x00000000);
							}
							if (bVar91)
							{
								func_251(0x00000081, 0x00000000, 0x00000000);
							}
							func_214(&iVar74, iVar72, &iVar75, &iVar76, fVar65);
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000000);
							}
							func_213(&Var6, 0x00000007, 0x00000001);
							func_212(0x00000001, 0x00000000);
							func_480(&iVar25);
							func_211();
						}
					}
					else if ((bVar97 || bVar99) || iVar8 >= 0x00000002)
					{
						unk_0xA37A90C62806D848(0x00000001);
						unk_0x790015DC92C918E2();
						if (!bVar99)
						{
							func_208();
						}
						if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							iVar92 = 0x00000001;
						}
						if (unk_0x1963B11DE70153E0())
						{
							func_206(&Var6, 0x00000000, 0x000000C9, "BJ_CONTINUE", 0x000000CB, "BJ_RETRY", 0x00000169, 0x00000000, 0x00000169, 0x00000000);
						}
						else
						{
							func_213(&Var6, 0x0000001B, 0x00000001);
							func_206(&Var6, 0x00000000, 0x000000C9, "BJ_CONTINUE", 0x000000CB, "BJ_RETRY", 0x000000D3, "HUD_INPUT68", 0x00000169, 0x00000000);
						}
						iVar7 = 0x0000000C;
					}
					func_452(&iVar18);
				}
				break;
			
			case 0x0000000B:
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
				if (!bVar96 && !bVar97)
				{
					if (func_205() && !func_257(&Var6, 0x0000001A))
					{
						func_194(iVar13);
						if (func_182(iVar13, iVar75, fVar69, iVar76))
						{
							func_206(&Var6, 0x00000000, 0x000000D7, "BJ_CONTINUE", 0x000000D8, "BJ_RETRY", 0x000000D3, "HUD_INPUT68", 0x00000169, 0x00000000);
							func_213(&Var6, 0x0000001A, 0x00000001);
						}
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					bVar108 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000);
				}
				if (func_362(&Var3) == 0x00000000)
				{
					func_263(func_363(&Var3, (iVar72 - 0x00000001)), vVar27);
				}
				if (!bVar113)
				{
					iVar9 = func_76(iVar13, &Var6, &uVar51, &uVar4, iVar74, iVar72, iVar75, &iVar76, fVar65, &bVar100);
					bVar113 = iVar9 == 0x00000001;
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (iVar77 == 0x00000000)
					{
						unk_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0x00000000, 0x00000001, 0x00000001);
					}
					else if (iVar77 == 0x00000005)
					{
						unk_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0x00000000, 0x00000001, 0x00000001);
					}
					func_75(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
				}
				else if (!unk_0xD0BB2359EC70FC37() && (!func_74() || func_455(&iVar25) >= 2f))
				{
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000037, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008E, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005F, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000060, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000061, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000062, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
					if (func_456(&iVar18))
					{
						if ((iVar9 == 0x00000001 || func_455(&iVar18) >= 60f) || ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xE64AC821059A938D(unk_0x16F2683693E537C9())) || (!bVar108 && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))))
						{
							if (!bVar113)
							{
								func_73(&(Var6.f_1A));
								bVar113 = 0x00000001;
							}
							if (func_47(&(Var6.f_1A), 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000))
							{
								if (!bVar96 && !bVar97)
								{
									if (func_205() && !func_257(&Var6, 0x0000001A))
									{
										if (func_182(iVar13, iVar75, fVar69, iVar76))
										{
											func_213(&Var6, 0x0000001A, 0x00000001);
										}
									}
								}
								func_44(&(Var6.f_1A));
								func_452(&iVar25);
								if (iVar13 == 0x00000000)
								{
									unk_0xB5376EA942202450(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0x00000000, 0x00000001, 0x00000001);
								}
								else if (iVar13 == 0x00000005)
								{
									unk_0xB5376EA942202450(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0x00000000, 0x00000001, 0x00000001);
								}
								func_75(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
							}
						}
						else if (iVar9 == 0x00000000)
						{
							if (!bVar96 && !bVar97)
							{
								if (func_205() && !func_257(&Var6, 0x0000001A))
								{
									if (func_182(iVar13, iVar75, fVar69, iVar76))
									{
										func_213(&Var6, 0x0000001A, 0x00000001);
									}
								}
							}
							func_44(&(Var6.f_1A));
							func_452(&iVar25);
							func_213(&Var6, 0x00000005, 0x00000000);
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100);
							unk_0x53491B90E4FD0E56(0x00000320);
							while (unk_0xD0BB2359EC70FC37())
							{
								SYSTEM::WAIT(0x00000000);
								if (func_362(&Var3) == 0x00000000)
								{
									func_263(func_363(&Var3, (iVar72 - 0x00000001)), vVar27);
								}
							}
							func_276(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
							bVar93 = 0x00000001;
							iVar7 = 0x00000000;
							break;
						}
						else if (bVar100)
						{
							if (func_455(&iVar18) > (60f - 5f))
							{
								func_42(&iVar18, (60f - 5f));
							}
						}
					}
					else
					{
						func_336(&iVar18, 0f);
					}
				}
				break;
			
			case 0x0000000C:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					bVar108 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000);
				}
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
				if (iVar76 > 0x00000000)
				{
					iVar76 = 0x00000000;
				}
				if (!bVar96 && !bVar97)
				{
					if (func_205() && !func_257(&Var6, 0x0000001A))
					{
						func_194(iVar13);
						if (func_182(iVar13, iVar75, fVar69, iVar76))
						{
							func_206(&Var6, 0x00000000, 0x000000C9, "BJ_CONTINUE", 0x000000CB, "BJ_RETRY", 0x000000D3, "HUD_INPUT68", 0x00000169, 0x00000000);
							func_213(&Var6, 0x0000001A, 0x00000001);
						}
					}
				}
				if (!func_257(&Var6, 0x00000018))
				{
					if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						bVar103 = 0x00000001;
					}
					else
					{
						bVar103 = 0x00000000;
					}
					unk_0x38DC636F3D2D2FA8("OJBJ_START");
					unk_0x38DC636F3D2D2FA8("OJBJ_JUMPED");
					unk_0x38DC636F3D2D2FA8("OJBJ_LANDED");
					unk_0xC92DB9682A650680("OJBJ_STOP");
					if (unk_0xE4EDC4B0E92C078B(iVar45))
					{
						unk_0x142CC44DB769B57E(&iVar45);
					}
					if (unk_0xE4EDC4B0E92C078B(iVar46))
					{
						unk_0x142CC44DB769B57E(&iVar46);
					}
					if (iVar13 == 0x00000000)
					{
						unk_0x29AA598B93E45D37(200f);
					}
					iVar10 = func_258();
					while (!unk_0x83D8570832F172A7(iVar10))
					{
						if (func_362(&Var3) == 0x00000000)
						{
							func_263(func_363(&Var3, (iVar72 - 0x00000001)), vVar27);
						}
						SYSTEM::WAIT(0x00000000);
						iVar10 = func_258();
					}
					if (bVar103)
					{
						func_41(&uVar12, 0x00000000);
					}
					else
					{
						func_40(&Var11, 0x3E99999A, 0x40000000);
					}
					func_213(&Var6, 0x00000018, 0x00000001);
				}
				if (!bVar103 && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					func_213(&Var6, 0x00000018, 0x00000000);
					break;
				}
				if (func_362(&Var3) == 0x00000000)
				{
					func_263(func_363(&Var3, (iVar72 - 0x00000001)), vVar27);
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					switch (func_36(unk_0x16F2683693E537C9()))
					{
						case 0x00000000:
							sVar54 = "BJ_FAIL_M";
							break;
						
						case 0x00000001:
							sVar54 = "BJ_FAIL_F";
							break;
						
						case 0x00000002:
							sVar54 = "BJ_FAIL_T";
							break;
					}
				}
				else if (bVar99)
				{
					sVar54 = "BJ_FAIL_02";
				}
				else
				{
					sVar54 = "BJ_FAIL_01";
				}
				bVar107 = 0x00000000;
				unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
				if (bVar103)
				{
					bVar107 = func_16(&uVar12, &Var11, &iVar10, cVar53, sVar54, &bVar93, 0x0000004E);
				}
				else
				{
					bVar107 = func_3(&iVar10, &Var11, cVar53, sVar54, &bVar93, 0x0000004F, 0x00000007, 0x00000001, 0x41700000, 0x00000001);
				}
				if (bVar107)
				{
					if (bVar93)
					{
						if (!bVar96 && !bVar97)
						{
							if (func_205() && !func_257(&Var6, 0x0000001A))
							{
								if (func_182(iVar13, iVar75, fVar69, iVar76))
								{
									func_213(&Var6, 0x0000001A, 0x00000001);
								}
							}
						}
						func_276(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &iVar49, &iVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
						iVar7 = 0x00000000;
					}
					else
					{
						if (!bVar96 && !bVar97)
						{
							if (func_205() && !func_257(&Var6, 0x0000001A))
							{
								if (func_182(iVar13, iVar75, fVar69, iVar76))
								{
									func_213(&Var6, 0x0000001A, 0x00000001);
								}
							}
						}
						func_2(bVar103, &Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
					}
					func_1(&iVar10);
				}
				iVar8 = 0x00000000;
				break;
		}
	}
}

void func_1(int iParam0)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, var uParam17, bool bParam18)
{
	if (bParam0)
	{
		func_554(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
	else
	{
		func_554(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
}

int func_3(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
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
			if (func_15(iParam5, 0x00000004))
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
			unk_0x7E60C62A7CE58FC8(*iParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x7ACC3006A87F8B39("STRING");
			unk_0x3A820E495A7BA3E5(0x00000006);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
			func_14(sParam3);
			unk_0x3CAEA85DA607305E(0x00000064);
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7A8BB56B212464AC();
			if (func_15(iParam5, 0x00000020))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 0x00000001;
				}
			}
			if (!func_15(iParam5, 0x00000001))
			{
				unk_0x5EEBDFEE72949D59(0x00000000);
			}
			func_13(&(uParam1->f_A), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			func_12(&(uParam1->f_A), "IB_RETRY", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
			func_12(&(uParam1->f_A), "FE_HLP16", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
			if (func_15(iParam5, 0x00000004))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ScreenFlash", "MissionFailedSounds", 0x00000001);
			}
			if (func_15(iParam5, 0x00000008))
			{
				switch (func_422())
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
			if (!func_456(&(uParam1->f_1)))
			{
				func_480(&(uParam1->f_1));
			}
			if (func_15(iParam5, 0x00000002))
			{
				if (!func_456(&(uParam1->f_4)))
				{
					func_480(&(uParam1->f_4));
				}
			}
			*uParam1 = 0x00000002;
			break;
		
		case 0x00000002:
			unk_0xBD706C594F6DCD4A();
			if (func_15(iParam5, 0x00000020))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 0x00000001;
				}
			}
			unk_0xD9ACBBA59FD5A09E(iParam6);
			func_11(iParam0, 0x00000000, 0x00000000);
			if (!func_15(iParam5, 0x00000010) && (func_455(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x757EF87A33649210()))
			{
				func_5(&(uParam1->f_A), 0x43480000, iParam6, bParam7, 0x00000001, 0x3F800000);
				unk_0x5D80F91A16C40CDE();
				if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
				{
					uParam1->f_8A = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_15(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_15(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			if (func_15(iParam5, 0x00000002))
			{
				if (func_455(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_15(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			func_11(iParam0, 0x00000000, 0x00000000);
			unk_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_8A || !((unk_0x7F8A39872A07D2CE("stunt_plane_races", unk_0xBB0808A181D4745C()) || unk_0x7F8A39872A07D2CE("pilot_school", unk_0xBB0808A181D4745C())) || (unk_0x7F8A39872A07D2CE("bj", unk_0xBB0808A181D4745C()) && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))))
			{
				unk_0x82E51BCA72537B6C(0x000009C4);
			}
			if (func_15(iParam5, 0x00000040) && uParam1->f_8A)
			{
				unk_0x53491B90E4FD0E56(0x000001F4);
			}
			func_365(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(0x00000000);
			}
			*uParam1 = 0x00000004;
			break;
		
		case 0x00000004:
			if (func_455(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(iParam0, 0x00000000, 0x00000000);
			}
			else
			{
				*bParam4 = uParam1->f_8A;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_4(int iParam0)
{
	if (*iParam0 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
	iParam0->f_1 = 0x00000000;
	iParam0->f_7B = 0x00000000;
}

void func_5(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (!func_10(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_15(uParam0->f_1, 0x00000100) || (func_15(uParam0->f_1, 0x00002000) && unk_0xB8E3620B82AD47D7(0x00000002)))
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
			unk_0x1200CC973A2399C8(func_15(uParam0->f_1, 0x00001000));
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
							func_9(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_14(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_15(uParam0->f_1, 0x00001000))
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
		fVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 0x00000020), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_7(&(uParam0->f_1), 0x00000100);
		func_6(&(uParam0->f_1), 0x00000080);
	}
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_10(var uParam0)
{
	if (*uParam0 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_7(&(uParam0->f_1), 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_456(&(uParam0->f_2)))
	{
		func_365(&(uParam0->f_2));
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
	if (func_455(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_452(&(uParam0->f_2));
		return 0x00000000;
	}
	return 0x00000001;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0x00000000)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0x00000000;
	uParam0->f_7B = 0x00000000;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 0x00000020);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_7(&(uParam0->f_1), 0x00000001);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 0x00000001);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_7(&(uParam0->f_1), 0x00001000);
		}
	}
	if (bParam4)
	{
		func_7(&(uParam0->f_1), 0x00002000);
	}
}

void func_14(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_16(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0x00000000:
			*uParam0 = 0x00000001;
			unk_0x8BC9595FD2792B5D("DEATH_SCENE");
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ScreenFlash", "WastedSounds", 0x00000001);
			func_35(&(uParam0->f_1));
			func_34();
			func_40(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x31A33F7BCB08CB80(0x00000001);
			break;
		
		case 0x00000001:
			if (func_24() || unk_0x757EF87A33649210())
			{
				*uParam0 = 0x00000002;
			}
			if (!func_23(uParam0->f_4, 0x00000004))
			{
				if (unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0x00000000, 0xFFFFFFFF))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Bed", "WastedSounds", 0x00000001);
					func_21(&(uParam0->f_4), 0x00000004);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 0x00000002))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "TextHit", "WastedSounds", 0x00000001);
					func_21(&(uParam0->f_4), 0x00000002);
				}
				func_3(iParam2, uParam1, sParam3, sParam4, bParam5, ((iParam6 - 0x00000004 & iParam6) - 0x00000002 & iParam6) | 0x00000010, 0x00000007, 0x00000001, 0x41700000, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (func_3(iParam2, uParam1, sParam3, sParam4, bParam5, (((iParam6 - 0x00000008 & iParam6) - 0x00000004 & iParam6) - 0x00000002 & iParam6), 0x00000007, 0x00000001, 0x41700000, 0x00000001))
			{
				func_20(0x00000000, 0x00000001);
				func_18(0x00000000, 0x00000001);
				func_34();
				if (*bParam5)
				{
					unk_0x4DB69487E1A9EE2A(0x00000001);
				}
				else if (!uParam0->f_5)
				{
					func_17(0x00000000);
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
				func_20(0x00000000, 0x00000001);
				func_18(0x00000000, 0x00000001);
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

void func_17(bool bParam0)
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

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000001)
	{
		func_20(0x00000000, 0x00000000);
		unk_0x82A772610883F395("DeathFailOut", 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000001);
		func_19(0x00000001, 0x00000002, 0x00000000);
		unk_0x4AED3E7834924DC8(0x00000002);
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000001) || iParam1)
		{
			unk_0x9A1335ECD7BD117F("DeathFailOut");
			func_19(0x00000000, 0x00000002, 0x00000001);
			unk_0x4AED3E7834924DC8(0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_41, 0x00000001);
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
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

void func_20(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_422())
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
			func_19(0x00000001, 0x00000001, 0x00000000);
			unk_0x4AED3E7834924DC8(0x00000001);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000000) || iParam1)
		{
			unk_0x9A1335ECD7BD117F(sVar0);
			func_19(0x00000000, 0x00000001, 0x00000001);
			unk_0x4AED3E7834924DC8(0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_41, 0x00000000);
	}
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_24()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000001))
	{
		SYSTEM::SETTIMERA(0x00000000);
		func_20(0x00000001, 0x00000000);
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
			func_18(0x00000001, 0x00000000);
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
				func_19(0x00000000, 0x00000002, 0x00000001);
				func_412(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_26(0x00000001);
				unk_0x7BBABEC524CBF883(0x00000000);
				unk_0x86E4B20DE8E91A57(0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				}
				func_20(0x00000000, 0x00000000);
				func_25(0x00000000);
			}
			else if (unk_0x1C0640BA9A7327B3() < iLocal_42)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_25(int iParam0)
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

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_33();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_32(0x00000000))
		{
			func_27(0x00000000);
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

void func_27(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_30())
		{
			func_29(0x00000001, 0x00000001);
		}
		else
		{
			func_29(0x00000000, 0x00000000);
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
	if (!func_28())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_28()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_29(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0x00000000))
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

bool func_30()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_31()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_32(int iParam0)
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

void func_33()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_34()
{
	iLocal_41 = 0x00000000;
	iLocal_42 = 0x00000000;
	func_412(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_26(0x00000001);
}

void func_35(int iParam0)
{
	if (!func_456(iParam0))
	{
		func_480(iParam0);
	}
	else
	{
		func_365(iParam0);
	}
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_37(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_38(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_39(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_40(var uParam0, int iParam1, int iParam2)
{
	if (func_456(&(uParam0->f_1)))
	{
		func_452(&(uParam0->f_1));
	}
	if (func_456(&(uParam0->f_4)))
	{
		func_452(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_A));
	uParam0->f_86 = iParam1;
	uParam0->f_87 = iParam2;
	uParam0->f_89 = 0x00000001;
	uParam0->f_88 = 0x00000000;
	*uParam0 = 0x00000000;
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = iParam1;
	unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0x00000000, 0xFFFFFFFF);
}

void func_42(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_43(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

float func_43(bool bParam0)
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

void func_44(var uParam0)
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
	func_45(0x00000000);
}

void func_45(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_47(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
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
	func_72(0x00000000);
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
		switch (func_36(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
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
		uParam0->f_230 = (uParam0->f_230 + func_71(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_71(25f)));
		if (uParam0->f_38 > 0x00000000)
		{
			uParam0->f_230 = (uParam0->f_230 + func_71((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_71(30f) - func_71(2f)));
		}
	}
	bVar0 = 0x00000001;
	while (bVar0)
	{
		func_45(0x00000001);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_50(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_49(uParam0->f_1E, 0f, 1f);
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
		uParam0->f_223 = func_49(uParam0->f_223, 0f, 1f);
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
		uParam0->f_224 = func_49(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0xB8E3620B82AD47D7(0x00000002))
			{
				if (unk_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_48(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
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
				func_48(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
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
				uParam0->f_22F = func_49((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_49((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_49((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_49((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
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
				func_45(0x00000000);
			}
			return !bVar0;
		}
	}
	func_45(0x00000000);
	return 0x00000001;
}

void func_48(var uParam0, bool bParam1)
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
	func_9(unk_0xF59058FCB716F903(0x00000002, 0x000000D7, 0x00000001));
	func_14("ES_HELP");
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
		func_9(unk_0xF59058FCB716F903(0x00000002, 0x000000D8, 0x00000001));
		func_14("ES_XPAND");
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

float func_49(float fParam0, float fParam1, float fParam2)
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

void func_50(var uParam0, float fParam1, bool bParam2)
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
	fVar1 = (func_70() * 0.25f);
	if (unk_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_22C == 0x00000004)
				{
					func_69(&(uParam0->f_D));
				}
				else
				{
					func_14(&(uParam0->f_D));
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
		func_68();
		unk_0x6567AE843FADBA94(uParam0->f_1, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_71((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
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
	fVar1 = (0.3f * func_70());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 0x00000004)
	{
		fVar7 = func_67(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x33D480CCE15C991A(0x00000000) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_67(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_70()) / 2.5f);
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
						func_64((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
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
	fVar1 = (fVar1 - func_71(6f));
	fVar1 = (fVar1 + (func_71(30f) - func_71((2f * 2f))));
	fVar11 = (fVar2 - func_71((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
		func_68();
		unk_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_71((2f - 0.5f)) - 0.001388889f)), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_71((2f * 0.3f)));
	if (uParam0->f_38 > 0x00000000)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
	}
	iVar17 = 0x00000000;
	iVar17 = 0x00000000;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_49((fVar11 / (0.8f * func_71(25f))), 0f, 1f);
			func_60(uParam0, iVar17, (fVar1 + func_71(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_71(25f));
		if (uParam0->f_22C == 0x00000004)
		{
			if (iVar17 == (uParam0->f_240 - 0x00000001))
			{
				fVar1 = (fVar1 + func_71((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_71(2f));
					fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
					func_68();
					unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_71((2f * 0.5f))), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
					fVar1 = (fVar1 + func_71((2f * 0.3f)));
					if (uParam0->f_38 > 0x00000000)
					{
						fVar1 = (fVar1 + func_71((25f * 0.2f)));
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
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_71(2f));
			fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
			func_68();
			unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_71((2f * 0.5f))), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_49((fVar11 / (0.8f * func_71(25f))), 0f, 1f);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_53(0x00000007, 0x00000000, 0x00000001, &fVar18, &fVar19, 0x00000000);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB3260A60545D3F11() == 0x00000000)
			{
				fVar20 = (fVar9 + ((0.119f / func_70()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_70()) / 2.5f));
				if (uParam0->f_22C == 0x00000001)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_70()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_70()) / 2.5f));
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
			func_52(&(uParam0->f_226), fVar20, (fVar1 + func_71((2f * 2f))), 0x00000000, 0x00000000, 0x00000000);
			unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
			unk_0xEEF67251E263A87F(0x00000002);
			unk_0xD3539A877EC25E86(1f, 0.4f);
			unk_0xAAE406A7DA443B93(0x00000000);
			func_68();
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
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000001:
					unk_0x070005E852D4C0E9("FO_TWO_NUM");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0x6D99DF8263D35CE5(uParam0->f_22B);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0x070005E852D4C0E9("MTPHPER_XPNO");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000005:
					unk_0x070005E852D4C0E9("ESDOLLA");
					unk_0xCBD015EC7E4226BC(uParam0->f_22A, 0x00000001);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_71((2f * 2f))), 0x00000000);
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
				fVar32 = ((fVar21 + func_51(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_71(10f)) + fVar29);
				if (uParam0->f_22C == 0xFFFFFFFF)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x539E86AE011A8B38(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0x00000000);
			}
			fVar1 = (fVar1 + (func_71(30f) - 2f));
		}
	}
}

float func_51(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_52(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAAE406A7DA443B93(iParam3);
	unk_0x7BBAC160090910C3(iParam5);
	func_68();
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

int func_53(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_59(iParam0), 64);
	StringCopy(&cVar1, func_56(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_55())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_55())
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
		vVar7.x = (vVar7.x * (func_54(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_54(iParam0) / fVar4));
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

float func_54(int iParam0)
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

int func_55()
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

var func_56(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_58(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_57(&uVar1);
			}
		}
		else
		{
			return func_57(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_57(var uParam0)
{
	return uParam0;
}

struct<13> func_58(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_59(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_58(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_57(&uVar0);
		}
		else
		{
			return func_57(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_60(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
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
	unk_0xD3539A877EC25E86(1f, func_62(14f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7BBAC160090910C3(0x00000000);
	func_68();
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
			func_53(0x00000007, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_56(0x00000007, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000002:
			func_53(0x00000005, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_56(0x00000005, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000003:
			func_53(0x00000006, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_56(0x00000006, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
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
	unk_0xD3539A877EC25E86(1f, func_62(14f));
	if (uParam0->f_39[iParam1] == 0x00000005 || uParam0->f_39[iParam1] == 0x00000004)
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	func_61(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_61(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
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
	func_68();
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
			unk_0xD3539A877EC25E86(1f, func_62(18f));
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
			unk_0xD3539A877EC25E86(1f, func_62(14f));
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
			unk_0xD3539A877EC25E86(1f, func_62(18f));
		
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
			unk_0xD3539A877EC25E86(1f, func_62(14f));
		}
		else
		{
			unk_0xE0026608C37C7C41(fParam2, fParam3, 0x00000000);
		}
	}
}

float func_62(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_63(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_64(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_66(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_65(0x00000007, iVar0);
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

void func_65(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

float func_67(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return (unk_0x79E367314AFBB5CA(0x00000001) / 2f);
}

void func_68()
{
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		unk_0xD9ACBBA59FD5A09E(0x00000007);
	}
	unk_0x5DD950F92F816F03(0x00000000);
}

void func_69(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_70()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_71(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_72(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_32(0x00000000))
		{
			func_27(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_73(var uParam0)
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0x00000000;
		uParam0->f_22E = (uParam0->f_23C - 0x00000001);
	}
}

bool func_74()
{
	return Global_181DF.f_1;
}

void func_75(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)
{
	func_554(uParam0, uParam1, iParam2, iParam3, iParam4, iParam5, &iParam6, uParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, uParam16, bParam17);
}

int func_76(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (!func_257(iParam1, 0x00000005))
	{
		unk_0xA37A90C62806D848(0x00000001);
		func_177(iParam1, func_181(iParam0), iParam4, (iParam5 - 0x00000001), iParam6, iParam7, fParam8);
		func_206(iParam1, 0x00000000, 0x000000D7, "BJ_CONTINUE", 0x000000D8, "BJ_RETRY", 0x00000169, 0x00000000, 0x00000169, 0x00000000);
		func_213(iParam1, 0x00000005, 0x00000001);
		SYSTEM::SETTIMERA(0x00000000);
	}
	if (!func_257(iParam1, 0x00000006))
	{
		if (func_173(&(iParam1->f_1A), 0x00000000, 0x00000000))
		{
			func_213(iParam1, 0x00000006, 0x00000001);
		}
		else
		{
			return 0x00000002;
		}
	}
	if (func_257(iParam1, 0x0000001B) && unk_0x1963B11DE70153E0())
	{
		if (!func_257(iParam1, 0x0000001A))
		{
			func_206(iParam1, 0x00000000, 0x000000D7, "BJ_CONTINUE", 0x000000D8, "BJ_RETRY", 0x00000169, 0x00000000, 0x00000169, 0x00000000);
		}
		func_213(iParam1, 0x0000001B, 0x00000000);
	}
	if (SYSTEM::TIMERA() > 0x000003E8)
	{
		if (*iParam9)
		{
			if (unk_0x1963B11DE70153E0())
			{
				func_95(uParam2, iParam0);
				func_91(iParam1);
			}
			else if (func_78(&iLocal_510, 0x00000000))
			{
				iLocal_510 = 0x00000000;
				*iParam9 = 0x00000000;
				func_206(iParam1, 0x00000000, 0x000000D7, "BJ_CONTINUE", 0x000000D8, "BJ_RETRY", 0x000000D3, "HUD_INPUT68", 0x00000169, 0x00000000);
			}
		}
		else
		{
			if (!func_257(iParam1, 0x0000000A))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "BASE_JUMP_PASSED", "HUD_AWARDS", 0x00000001);
				func_213(iParam1, 0x0000000A, 0x00000001);
			}
			func_47(&(iParam1->f_1A), 0x00000000, 0x3F800000, 0x00000000, 0x00000001, 0x00000000);
			func_91(iParam1);
		}
		if (*iParam9)
		{
			if (unk_0x1963B11DE70153E0())
			{
				if (!func_257(iParam1, 0x0000001C) && func_77(&uLocal_73))
				{
					func_213(iParam1, 0x0000001C, 0x00000001);
					func_206(iParam1, 0x00000000, 0x000000CA, "HUD_INPUT53", 0x000000D9, "SCLB_PROFILE", 0x00000169, 0x00000000, 0x00000169, 0x00000000);
				}
			}
			if (func_322(uParam3, 0x00000007, 0x000003E8))
			{
				*iParam9 = 0x00000000;
				func_206(iParam1, 0x00000000, 0x000000D7, "BJ_CONTINUE", 0x000000D8, "BJ_RETRY", 0x000000D3, "HUD_INPUT68", 0x00000169, 0x00000000);
			}
		}
		else if (func_322(uParam3, 0x00000005, 0x000003E8))
		{
			func_73(&(iParam1->f_1A));
			return 0x00000001;
		}
		else if (func_322(uParam3, 0x00000004, 0x000003E8))
		{
			return 0x00000000;
		}
		else if ((!*iParam9 && func_322(uParam3, 0x00000008, 0x000003E8)) && (!unk_0x1963B11DE70153E0() || func_257(iParam1, 0x0000001A)))
		{
			*iParam9 = 0x00000001;
			if (unk_0x1963B11DE70153E0())
			{
				if (func_77(&uLocal_73))
				{
					func_213(iParam1, 0x0000001C, 0x00000001);
					func_206(iParam1, 0x00000000, 0x000000CA, "HUD_INPUT53", 0x000000D9, "SCLB_PROFILE", 0x00000169, 0x00000000, 0x00000169, 0x00000000);
				}
				else
				{
					func_213(iParam1, 0x0000001C, 0x00000000);
					func_206(iParam1, 0x00000000, 0x000000CA, "HUD_INPUT53", 0x00000169, 0x00000000, 0x00000169, 0x00000000, 0x00000169, 0x00000000);
				}
			}
		}
	}
	return 0x00000002;
}

int func_77(var uParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000001) && Global_1C0180.f_A90[0x00000000] > 0x00000000) && uParam0->f_F6.f_1 >= 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_78(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0x00000002;
	if (Global_1C171C.f_2 + 5 < unk_0xF4CCC8CB6DE7F1AE() && Global_1C171C.f_2 > 0x00000000)
	{
		func_90(&Global_1C171C);
		func_90(&(Global_1C171C.f_31));
		*iParam0 = 0x00000000;
		Global_1C171C.f_2 = 0x00000000;
		func_89(0x00000000);
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
	if ((unk_0x33A494591F2C1975() && (((iVar1 == 0x00000004 || iVar1 == 0x00000002) || iVar1 == 0x00000001) || iVar1 == 0x00000005)) || (!func_87() && unk_0x58424C49F8924842()))
	{
		if (unk_0xACED3FBF20B322FA())
		{
			func_84(&(Global_1C171C.f_3), func_86(&(Global_1C171C.f_3)));
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004))
			{
				unk_0x5D96D8530B3D0904(iParam0, 0x00000004);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_82(&(Global_1C171C.f_3), 0x00000000);
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
			else if (!func_87())
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
				func_90(&(Global_1C171C.f_31));
				func_90(&Global_1C171C);
				*iParam0 = 0x00000000;
				Global_1C171C.f_2 = 0x00000000;
				func_89(0x00000000);
				return 0x00000001;
			}
		}
	}
	else
	{
		func_84(&(Global_1C171C.f_3), func_86(&(Global_1C171C.f_3)));
		if ((func_81(&(Global_1C171C.f_31)) && !func_79(&(Global_1C171C.f_31), 0x000007D0, 0x00000001)) && !unk_0x58424C49F8924842())
		{
			unk_0x5D96D8530B3D0904(iParam0, 0x00000003);
			StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
			func_82(&(Global_1C171C.f_3), 0x00000000);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000003))
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001))
			{
				unk_0xB0A3CB46BE5B746A(0x00000000);
				unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_82(&(Global_1C171C.f_3), 0x00000000);
			}
		}
		if (func_81(&Global_1C171C))
		{
			if (!func_79(&Global_1C171C, 0x00000FA0, 0x00000001))
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
							func_90(&Global_1C171C);
							*iParam0 = 0x00000000;
							Global_1C171C.f_2 = 0x00000000;
							func_89(0x00000000);
							return 0x00000001;
						}
					}
				}
				else
				{
					func_90(&Global_1C171C);
					*iParam0 = 0x00000000;
					Global_1C171C.f_2 = 0x00000000;
					func_89(0x00000000);
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
					func_90(&(Global_1C171C.f_31));
					func_90(&Global_1C171C);
					*iParam0 = 0x00000000;
					Global_1C171C.f_2 = 0x00000000;
					func_89(0x00000000);
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
						func_90(&(Global_1C171C.f_31));
						func_90(&Global_1C171C);
						*iParam0 = 0x00000000;
						Global_1C171C.f_2 = 0x00000000;
						func_89(0x00000000);
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_79(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_80(uParam0, bParam2, 0x00000000);
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

void func_80(var uParam0, bool bParam1, bool bParam2)
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

bool func_81(var uParam0)
{
	return uParam0->f_1;
}

void func_82(var uParam0, bool bParam1)
{
	func_83(uParam0);
	if (bParam1)
	{
		func_89(0x00000000);
	}
	uParam0->f_23 = 0x00000001;
}

void func_83(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_29 = 0x00000001;
	*uParam0 = { Var0 };
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 == 0x00000001)
	{
		*uParam0 = 0x00000000;
		func_85(uParam0);
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

void func_85(var uParam0)
{
	uParam0->f_23 = 0x00000000;
}

int func_86(var uParam0)
{
	return uParam0->f_23;
}

int func_87()
{
	if (func_88())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_88()
{
	return Global_258DFD;
}

void func_89(bool bParam0)
{
	unk_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		unk_0xA3B57116ADBCDF5F();
	}
}

void func_90(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_91(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!func_94(iParam0))
	{
		return;
	}
	unk_0x6567AE843FADBA94(*iParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
	if (unk_0xB8E3620B82AD47D7(0x00000002))
	{
		iVar0 = 0x00000000;
		while (iVar0 < iParam0->f_3)
		{
			if (iParam0->f_3[iVar0] != 0x00000169)
			{
				iParam0->f_C[iVar0] = unk_0xF59058FCB716F903(0x00000002, iParam0->f_3[iVar0], 0x00000001);
			}
			iVar0++;
		}
		func_92(&(iParam0->f_1), 0x00000004);
	}
	if (!func_23(iParam0->f_1, 0x00000004))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(200f);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		fVar1 = 0f;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000004)
		{
			if (!unk_0xEA6BC48857E0AC4C(iParam0->f_15[iVar2]))
			{
				if (!unk_0xEA6BC48857E0AC4C(iParam0->f_C[iVar2 + 4]))
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT");
					unk_0x7C19E5E4784BD7CF(fVar1);
					func_9(iParam0->f_C[iVar2 + 4]);
					func_9(iParam0->f_C[iVar2]);
					func_14(iParam0->f_15[iVar2]);
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT");
					unk_0x7C19E5E4784BD7CF(fVar1);
					func_9(iParam0->f_C[iVar2]);
					func_14(iParam0->f_15[iVar2]);
					unk_0x7E60D21B163E9D56();
				}
				fVar1 = (fVar1 + 1f);
			}
			iVar2++;
		}
		unk_0x7E60C62A7CE58FC8(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(iParam0->f_2));
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_21(&(iParam0->f_1), 0x00000004);
	}
}

void func_92(var uParam0, int iParam1)
{
	func_93(uParam0, iParam1);
}

void func_93(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_94(var uParam0)
{
	if (*uParam0 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_21(&(uParam0->f_1), 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_95(var uParam0, int iParam1)
{
	func_96(uParam0, &uLocal_73);
}

void func_96(var uParam0, var uParam1)
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
	
	func_172(&(Global_1C171C.f_31), 0x00000001, 0x00000000);
	unk_0xE19C2AAC820D8ED5();
	func_171();
	func_72(0x00000000);
	unk_0x3FC8DBCC154CA56B();
	func_169(0x00000001);
	unk_0x3584F71E5CA29322(0x0000000A);
	func_168(0x00000001);
	func_167(0x00000001);
	if (!func_164())
	{
		if (!unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			unk_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000003))
	{
		*uParam0 = func_163();
		unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000003);
	}
	Var10 = { func_58(unk_0xD803B885F5E47A62()) };
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
				func_162(*uParam0, Global_1C0180.f_ADC);
				if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
				{
					if (!func_161(uParam1->f_2C))
					{
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							Var6 = { Global_1C0180.f_ADC.f_9 };
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					else if (!Global_1C0180.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					func_159(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
				}
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000004);
				func_158(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
				func_158(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
				func_158(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000001);
				func_157(*uParam0);
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
				unk_0xA37A90C62806D848(0x00000001);
			}
			else
			{
				func_157(*uParam0);
			}
		}
		else
		{
			if (Global_1C0180.f_B0D != 0x00000001)
			{
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
				Global_1C0180.f_B0D = 0x00000001;
			}
			if (!func_121(uParam1))
			{
				uParam1->f_F6.f_1 = 0xFFFFFFFF;
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
				if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000000))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x7E60D21B163E9D56();
					func_162(*uParam0, Global_1C0180.f_ADC);
					if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_161(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 0x00000001, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						func_159(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
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
							func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000001)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
							func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000002)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
							func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000007);
						func_120(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09 = 0x00000001;
					func_90(&(Global_1C0180.f_B07));
				}
				else if (func_79(&(Global_1C0180.f_B07), 0x0000012C, 0x00000000))
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
							func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000001)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
							func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000002)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
							func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000007);
						func_120(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09++;
					if (Global_1C0180.f_B09 > 0x00000003)
					{
						Global_1C0180.f_B09 = 0x00000000;
					}
					func_90(&(Global_1C0180.f_B07));
				}
				func_157(*uParam0);
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
					func_162(*uParam0, Global_1C0180.f_ADC);
					if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_161(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 0x00000001, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_160(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						func_159(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000006))
					{
						func_119(&Global_1C126B);
						func_115(uParam1, &Global_1C126B);
						func_114(uParam1, &Global_1C126B);
					}
					iVar3 = 0x00000000;
					uParam1->f_F6.f_2 = 0x00000000;
					if ((Global_1C0180.f_A90[0x00000000] > 0x00000001 || (Global_1C0180.f_A90[0x00000000] > 0x00000000 && Global_1C0180.f_AD7[0x00000000] != 0xFFFFFFFF)) || (((Global_1C0180.f_A90[0x00000000] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_161(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000000] != 0xFFFFFFFF))
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
									func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
									iVar8[0x00000000] = 0x00000001;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 0x00000002)
							{
								if (!iVar8[0x00000001])
								{
									iVar9 = 0x00000000;
									unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
									if ((Global_1C0180.f_A90[0x00000001] < 0x00000001 && Global_1C0180.f_AD7[0x00000001] == 0xFFFFFFFF) && !(((Global_1C0180.f_A90[0x00000001] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_161(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000001] != 0xFFFFFFFF))
									{
										func_158(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
										bVar14 = 0x00000001;
									}
									else
									{
										func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
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
									if ((Global_1C0180.f_A90[0x00000002] < 0x00000002 && Global_1C0180.f_AD7[0x00000002] == 0xFFFFFFFF) && !(((Global_1C0180.f_A90[0x00000002] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_161(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000002] != 0xFFFFFFFF))
									{
										bVar14 = 0x00000001;
									}
									if (bVar14)
									{
										func_158(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
									}
									else
									{
										func_158(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
									}
									iVar8[0x00000002] = 0x00000001;
								}
							}
							if (func_113(Global_1C126B[iVar0 /*100*/].f_20))
							{
								if (func_161(uParam1->f_2C))
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
										if (func_112(&(Global_1C126B[iVar0 /*100*/].f_20), &Var10))
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
									if (func_161(uParam1->f_2C))
									{
										Var6 = { Global_1C126B[iVar0 /*100*/] };
										if (!unk_0xEA6BC48857E0AC4C(&(Global_1C126B[iVar0 /*100*/].f_54)) && !unk_0x7F8A39872A07D2CE(&(Global_1C126B[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C126B[iVar0 /*100*/].f_54), 64);
										}
										func_111(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &Var6, &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_111(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &(Global_1C126B[iVar0 /*100*/]), &(Global_1C126B[iVar0 /*100*/].f_50));
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
												func_105(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], 0x00000000, Global_1C126B[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_105(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], Global_1C126B[iVar0 /*100*/].f_4A, Global_1C126B[iVar0 /*100*/].f_3A);
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
												func_102(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], 0x00000000);
											}
											else
											{
												func_102(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], Global_1C126B[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_101();
									uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 0x00000001)]++;
									if (uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 0x00000001)] == 0x00000002)
									{
										if (Global_1C126B[iVar0 /*100*/].f_3B > 0x00000002)
										{
											unk_0x5D96D8530B3D0904(&iVar9, 0x00000002);
											unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[0x00000000 /*15*/].f_1), 0x00000002);
											func_100(*uParam0, (iVar3 - 0x00000001), iVar9);
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
						func_158(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
						func_158(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
						func_158(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000001);
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
					func_157(*uParam0);
					unk_0xA37A90C62806D848(0x00000001);
					if (uParam1->f_F6.f_1 == 0xFFFFFFFF && !bVar4 == 0x00000001)
					{
						if (Global_1C0180.f_A90[0x00000000] > 0x00000001)
						{
							uParam1->f_F6.f_1 = 0x00000000;
							unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 0x00000003);
							func_100(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_157(*uParam0);
					func_97(uParam0, uParam1);
				}
			}
		}
	}
}

void func_97(var uParam0, var uParam1)
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
		func_99(&uVar5, &iVar6, &uVar7, &uVar8, 0x00000000);
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
				func_90(&(uParam1->f_F6.f_3));
				bVar0 = 0x00000001;
			}
		}
		else if (func_98(uParam1, 0x000000BC))
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
				func_90(&(uParam1->f_F6.f_3));
				bVar0 = 0x00000001;
			}
		}
		else if (func_98(uParam1, 0x000000BB))
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
			func_90(&(uParam1->f_F6.f_3));
			bVar0 = 0x00000001;
		}
	}
	else if (func_98(uParam1, 0x000000CC))
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
				func_100(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 0x00000003);
			func_100(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
		}
		if (func_113(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
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

int func_98(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 0x000000BC || iParam1 == 0x000000BB)
	{
		func_99(&uVar0, &iVar1, &uVar2, &uVar3, 0x00000000);
		if (((!unk_0x06F8112AA79C53D9(0x00000002, iParam1) && !unk_0x7FEE810EE9E768EB(0x00000002, iParam1)) && (iVar1 < 0x0000004B && iVar1 > 0xFFFFFFB5)) || func_79(&(uParam0->f_F6.f_3), 0x000000FA, 0x00000000))
		{
			return 0x00000001;
		}
	}
	else if ((!unk_0x06F8112AA79C53D9(0x00000002, iParam1) && !unk_0x7FEE810EE9E768EB(0x00000002, iParam1)) || func_79(&(uParam0->f_F6.f_3), 0x000000FA, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_99(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_100(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

void func_101()
{
	unk_0x7E60D21B163E9D56();
}

void func_102(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
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
						fParam15 = func_104(fParam15);
					}
					else
					{
						fParam15 = func_103(fParam15);
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

float func_103(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_104(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_105(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
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
			if (func_110(iParam15) != 0x00000000)
			{
				unk_0x7ACC3006A87F8B39(func_107(func_110(iParam15), 0x00000000));
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
						iParam15 = SYSTEM::FLOOR(func_104(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_103(SYSTEM::TO_FLOAT(iParam15)));
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
				Var0 = { func_106(iParam15) };
				unk_0x7ACC3006A87F8B39(&Var0);
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000000:
			break;
	}
}

struct<4> func_106(int iParam0)
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

char* func_107(int iParam0, bool bParam1)
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
			if (func_109(iParam0, &Var0) != 0xFFFFFFFF)
			{
				if (bParam1)
				{
					return func_108(&(Var0.f_1F));
				}
				else
				{
					return func_108(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_108(var uParam0)
{
	return uParam0;
}

int func_109(int iParam0, var uParam1)
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

int func_110(int iParam0)
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

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
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

int func_112(var uParam0, var uParam1)
{
	if (!func_113(*uParam0))
	{
		return 0x00000000;
	}
	if (!func_113(*uParam1))
	{
		return 0x00000000;
	}
	if (unk_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

void func_114(var uParam0, var uParam1)
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

void func_115(var uParam0, var uParam1)
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
			if (func_118(uParam1, iVar3, &uVar0, 0x00000000))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 0x00000001;
				iVar3++;
				if (iVar3 >= 0x0000000C)
				{
					return;
				}
			}
			if (func_118(uParam1, iVar3, &uVar1, 0x00000001))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 0x00000002;
				iVar3++;
				if (iVar3 >= 0x0000000C)
				{
					return;
				}
			}
			if (func_118(uParam1, iVar3, &uVar2, 0x00000002))
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
		func_116(uParam1);
	}
}

void func_116(var uParam0)
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
	Var3 = { func_58(unk_0xD803B885F5E47A62()) };
	if (unk_0xE4F1C23C6353EC03(Global_1C0180.f_B0A))
	{
		iVar4 = unk_0x9B6FABF659F515A2(Global_1C0180.f_B0A);
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 0x0000000C)
			{
				func_117(&Global_1C11E9);
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
					if (func_112(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
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

void func_117(var uParam0)
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

int func_118(var uParam0, int iParam1, var uParam2, int iParam3)
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
				(uParam0[iParam1 /*100*/])->f_20 = { func_58(unk_0xD803B885F5E47A62()) };
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

void func_119(var uParam0)
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
	func_90(&(Global_1C0180.f_B0E));
}

void func_120(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x5D96D8530B3D0904(&iParam2, 0x00000007);
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sParam3);
	unk_0x0EF1238B8EFD4D04();
	unk_0x7E60D21B163E9D56();
}

int func_121(var uParam0)
{
	if (!Global_1C017C)
	{
		if (!func_81(&(Global_1C0180.f_B0B)))
		{
			func_80(&(Global_1C0180.f_B0B), 0x00000001, 0x00000000);
			return 0x00000000;
		}
		else if (!func_79(&(Global_1C0180.f_B0B), 0x000003E8, 0x00000001))
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
		func_156(uParam0);
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
	if (!func_154(uParam0))
	{
		return 0x00000000;
	}
	if (!func_152(uParam0))
	{
		return 0x00000000;
	}
	if (!func_138(uParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000006))
	{
		func_119(&Global_1C126B);
		func_115(uParam0, &Global_1C126B);
		func_114(uParam0, &Global_1C126B);
		unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000006);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000007))
	{
		if (!func_81(&(Global_1C0180.f_B0E)))
		{
			func_80(&(Global_1C0180.f_B0E), 0x00000001, 0x00000000);
		}
		else if (func_79(&(Global_1C0180.f_B0E), 0x00007530, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000007);
		}
		if (func_135(&Global_1C126B))
		{
		}
		else
		{
			return 0x00000000;
		}
		if (func_132(&Global_1C126B))
		{
		}
		else
		{
			return 0x00000000;
		}
		if (func_126(&Global_1C126B))
		{
			func_122(&Global_1C126B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000007);
			func_122(&Global_1C126B);
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_125(Global_1C0180.f_B0A);
	if (Global_1C0DF1.f_51[iVar2] != 0x00000000)
	{
		func_124(0xFFFFFFFF, iVar2);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		func_117(&Global_1C11E9);
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
			if (func_113((uParam0[iVar0 /*100*/])->f_2D))
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
	Global_1C0DF1.f_57[iVar2 /*3*/] = { func_123(unk_0xD803B885F5E47A62()) };
}

Vector3 func_123(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_124(int iParam0, int iParam1)
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

int func_125(int iParam0)
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

int func_126(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0x00000000 /*100*/])->f_4C)
	{
		case 0x00000000:
			func_130(uParam0);
			if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				(uParam0[0x00000000 /*100*/])->f_4C = 0x00000003;
				return 0x00000000;
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				if (func_113((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_129(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177E))
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
			if (func_127(&((uParam0[0x00000001 /*100*/])->f_4C), &(Global_1C177E.f_CE), &Global_1C177E, &(Global_1C177E.f_9D)))
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
					if (func_113((uParam0[iVar0 /*100*/])->f_20) && func_113(Global_1C177E[iVar1 /*13*/]))
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

int func_127(var uParam0, var uParam1, var uParam2, var uParam3)
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
					func_128(&uVar0, uParam3[iVar1 /*4*/]);
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

void func_128(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, sParam1);
}

int func_129(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		if (func_113(*(uParam1[iVar0 /*13*/])))
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

void func_130(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		func_131(&(Global_1C177E[iVar0 /*13*/]));
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

void func_131(var uParam0)
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

int func_132(var uParam0)
{
	int iVar0;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 0x00000001;
	}
	else if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		if (!func_134(uParam0))
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			if (!func_133(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0x00000000;
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_133(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 0x00000002)
	{
		return 0x00000001;
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (func_113(*uParam1))
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

int func_134(var uParam0)
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
				func_131(&(Global_1C0180.f_BD2[iVar1 /*13*/]));
				if (func_113((uParam0[iVar1 /*100*/])->f_20))
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
					if (func_113((uParam0[iVar1 /*100*/])->f_20))
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

int func_135(var uParam0)
{
	int iVar0;
	
	if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			if (!func_137(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C0180.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
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
			if (!func_136(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0x00000000;
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_136(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
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
			if (func_113(Var0))
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

int func_137(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
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
			if (func_113(Var1[0x00000000 /*13*/]))
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

int func_138(var uParam0)
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
	Var12 = { func_58(unk_0xD803B885F5E47A62()) };
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x0000000B, &Var12, func_151(), 0x00000000, 0x00000000, 0x00000000))
			{
				func_149(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0x00000000)
					{
						iVar7 = 0x00000000;
						iVar2 = 0x00000000;
						if (func_151())
						{
							iVar7 = 0x00000000;
							while (iVar7 < Var1.f_3)
							{
								unk_0xBC584396476EE48A(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0x00000000)
								{
									if (func_112(&Var0, &Var12) || func_112(&Var0, &(Global_1C0005.f_169)))
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
								func_148(&Var0);
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
								if (func_151() && iVar5 == 0x00000000)
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C0180.f_AD7[iVar9] = 0x00000000;
									Global_1C0180.f_A90[iVar9]++;
								}
								if (func_151() && (func_112(&Var0, &Var12) || func_112(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_112(&Var0, &Var12))
									{
										iVar5 = 0x00000000;
										Global_1C0180.f_AD7[iVar9] = 0x00000000;
									}
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 0x00000010);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_146(uParam0->f_2C))
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
									if (func_161(uParam0->f_2C))
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
						if (!func_151())
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
						func_148(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 0x00000001))
						{
							unk_0xBC584396476EE48A(iVar7, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B && Var0.f_60 > 0x00000001)
							{
								if (func_151() && iVar5 == iVar7)
								{
									if (!func_112(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20), &Var12))
									{
										func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_151() && (func_112(&Var0, &Var12) || func_112(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar9] < 0x0000000B)
								{
									if (func_113(Var0) && !func_112(&Var0, &(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20)))
									{
										if (func_112(&Var0, &Var12))
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
										if (func_146(uParam0->f_2C))
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
										if (func_161(uParam0->f_2C))
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
							func_148(&Var0);
							iVar7++;
						}
						unk_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_151())
							{
								if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
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
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar9] = 0xFFFFFFFF;
						(*uParam0)[iVar9] = 0x00000002;
					}
				}
				else
				{
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
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
			if (func_140(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, iVar11))
			{
				func_149(&Var1, &(uParam0->f_2C));
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
								if (func_151() && (func_112(&Var0, &Var12) || func_112(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0x00000000 || bVar10)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/]), {Var0.f_D}, 0x00000010);
									Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_3B = Var0.f_60;
									if (func_146(uParam0->f_2C))
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
									if (func_161(uParam0->f_2C))
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
									if (func_146(uParam0->f_2C))
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
									if (func_161(uParam0->f_2C))
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
							func_148(&Var0);
							iVar2++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 0x00000003;
				}
				else
				{
					unk_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar9);
					Global_1C0180.f_A90[iVar9] = 0x00000000;
					(*uParam0)[iVar9] = 0x00000003;
				}
				if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_151())
				{
					if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
					{
						func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
					}
					else
					{
						func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
					}
					Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
					Global_1C0180.f_A90[iVar9]++;
				}
			}
			break;
		
		case 0x00000003:
			func_139(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 0x00000004;
			break;
		
		case 0x00000004:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_151() && Global_1C0180.f_A90[iParam0] > Global_1C0180.f_AD7[iParam0]) && Global_1C0180.f_AD7[iParam0] >= 0x00000000)
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
		if (!func_151())
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

int func_140(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

void func_141(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1C0000 = 0x00000001;
	func_172(&(Global_1C0000.f_1), 0x00000001, 0x00000000);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

int func_142()
{
	if (unk_0x798A3F1296751F46() && !func_164())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_143()
{
	if (unk_0xA9C9C7E04514E320() || Global_1C0000)
	{
		func_144();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_144()
{
	if (func_79(&(Global_1C0000.f_1), 0x0001D4C0, 0x00000001))
	{
		unk_0x8EFB4731C3DCDA55(Global_1C0000.f_3, Global_1C0000.f_4, 0xFFFFFFFF);
		Global_1C0000 = 0x00000000;
		func_90(&(Global_1C0000.f_1));
	}
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0x00000000;
	*uParam1 = 0x00000000;
	Global_1C0000 = 0x00000000;
	func_90(&(Global_1C0000.f_1));
	unk_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, 0xFFFFFFFF);
}

int func_146(int iParam0)
{
	if ((((((iParam0 == 0x0000032F || iParam0 == 0x00000338) || iParam0 == 0x00000339) || iParam0 == 0x0000033A) || iParam0 == 0x0000033B) || iParam0 == 0x0000033C) || iParam0 == 0x00000351)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_147(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_161(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 0x00000010);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 0x00000010);
	}
	else
	{
		StringCopy(sParam1, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
		sParam1->f_20 = { func_58(unk_0xD803B885F5E47A62()) };
	}
	sParam1->f_3B = iParam2;
	if (func_146(uParam0->f_2C))
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

void func_148(var uParam0)
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

void func_149(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0x00000000;
}

int func_150(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

int func_151()
{
	if (Global_1C017C && Global_1C017D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_152(var uParam0)
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
	Var10 = { func_58(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[0x00000001])
	{
		case 0x00000000:
			iVar3 = unk_0xB552DC43762F9C85();
			Global_1C0180.f_AD7[0x00000001] = 0xFFFFFFFF;
			Global_1C0005.f_176 = 0xFFFFFFFF;
			Global_1C0180.f_A90[iVar9] = 0x00000000;
			if (iVar3 > 0x00000000)
			{
				if (func_151())
				{
					iVar8 = 0x00000000;
				}
				else
				{
					iVar8 = 0x00000001;
				}
				if (func_153(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0x00000000 /*66*/], iVar8, 0x00000000, 0x00000064))
				{
					func_149(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
					{
						if (func_151())
						{
							iVar6 = 0x00000000;
							iVar6 = 0x00000000;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0x00000000)
								{
									unk_0xBC584396476EE48A(iVar6, &Var0);
									if (func_161(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0x00000000)
										{
											if (func_112(&Var0, &(Global_1C0005.f_169)))
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
									func_148(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0x00000000)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0x00000000;
						if (func_151() && iVar4 == 0x00000000)
						{
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B)
							{
								func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
								Global_1C0180.f_AD7[iVar9] = 0x00000000;
								Global_1C0180.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0x00000000)
						{
							unk_0xBC584396476EE48A(0x00000000, &Var0);
							if (func_151() && (func_112(&Var0, &Var10) || func_112(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_113(Var0) && Global_1C0180.f_A90[iVar9] < 0x0000000B)
							{
								if (func_112(&Var0, &Var10))
								{
									iVar4 = 0x00000000;
									Global_1C0180.f_AD7[0x00000001] = 0x00000000;
								}
								MemCopy(&(Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 0x00000010);
								Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = 0x00000001;
								if (func_146(uParam0->f_2C))
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
								if (func_161(uParam0->f_2C))
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
								func_148(&Var0);
								unk_0xC4492EA0CF4852F9();
								func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C0180.f_A90[0x00000001] = 0x00000000;
								(*uParam0)[0x00000001] = 0x00000001;
								if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_151())
								{
									if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
									{
										func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
									}
									else
									{
										func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
									}
									Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
									Global_1C0180.f_A90[iVar9]++;
								}
								return 0x00000000;
							}
							func_148(&Var0);
						}
						else
						{
							Global_1C0180.f_A90[0x00000001] = 0x00000000;
							func_148(&Var0);
							unk_0xC4492EA0CF4852F9();
							func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_151())
							{
								if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[0x00000001] = 0x00000001;
							return 0x00000000;
						}
						if (!func_151())
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
								if (func_151() && iVar4 == iVar6)
								{
									if (!func_112(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20), &Var10))
									{
										func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_151() && (func_112(&Var0, &Var10) || func_112(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[0x00000001] < 0x0000000C)
								{
									if (func_113(Var0) && !func_112(&Var0, &(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20)))
									{
										if (func_112(&Var0, &Var10))
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
										if (func_146(uParam0->f_2C))
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
										if (func_161(uParam0->f_2C))
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
							func_148(&Var0);
							iVar6++;
						}
						unk_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[0x00000001] = 0x00000001;
						if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_151())
						{
							if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
							{
								func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
							}
							else
							{
								func_147(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
							}
							Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
							Global_1C0180.f_A90[iVar9]++;
						}
						return 0x00000000;
					}
					else
					{
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_A90[0x00000001] = 0x00000000;
						(*uParam0)[0x00000001] = 0x00000001;
						unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), 0x00000001);
						return 0x00000000;
					}
				}
			}
			else
			{
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C0180.f_A90[0x00000001] = 0x00000000;
				(*uParam0)[0x00000001] = 0x00000001;
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			func_139(iVar9, Global_1C0005.f_176);
			(*uParam0)[0x00000001] = 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

int func_154(var uParam0)
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
	Var0 = { func_58(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[iVar10])
	{
		case 0x00000000:
			Global_1C0180.f_AD7[iVar10] = 0xFFFFFFFF;
			Global_1C0180.f_A90[iVar10] = 0x00000000;
			Global_1C0005.f_176 = 0xFFFFFFFF;
			Global_1C017D = 0x00000000;
			if (func_155(uParam0->f_2C))
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x0000000B, &Var0, func_151(), 0x00000000, 0x00000000, 0x00000000))
			{
				func_149(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var2))
				{
					if (Var2.f_3 > 0x00000000)
					{
						iVar8 = 0x00000000;
						iVar3 = 0x00000000;
						if (func_151())
						{
							iVar8 = 0x00000000;
							while (iVar8 < Var2.f_3)
							{
								unk_0xBC584396476EE48A(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0x00000000)
								{
									if (func_112(&Var1, &Var0) || func_112(&Var1, &(Global_1C0005.f_169)))
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
								func_148(&Var1);
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
								if (func_151() && iVar6 == 0x00000000)
								{
									func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C0180.f_AD7[iVar10] = 0x00000000;
									Global_1C0180.f_A90[iVar10]++;
								}
								if (func_151() && (func_112(&Var1, &Var0) || func_112(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_112(&Var1, &Var0))
									{
										iVar6 = 0x00000000;
										Global_1C0180.f_AD7[iVar10] = 0x00000000;
									}
									MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 0x00000010);
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_146(uParam0->f_2C))
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
									if (func_161(uParam0->f_2C))
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
						if (!func_151())
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
						func_148(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 0x00000001))
						{
							unk_0xBC584396476EE48A(iVar8, &Var1);
							if (Global_1C0180.f_A90[iVar10] < 0x0000000B && Var1.f_60 > 0x00000001)
							{
								if (func_151() && iVar6 == iVar8)
								{
									if (!func_112(&(Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_20), &Var1))
									{
										func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
										Global_1C0180.f_A90[iVar10]++;
									}
								}
								if (func_151() && (func_112(&Var1, &Var0) || func_112(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar10] < 0x0000000B)
								{
									if (func_113(Var1) && !func_112(&(Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_20), &Var1))
									{
										if (func_112(&Var1, &Var0))
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
										if (func_146(uParam0->f_2C))
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
										if (func_161(uParam0->f_2C))
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
							func_148(&Var1);
							iVar8++;
						}
						unk_0xC4492EA0CF4852F9();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C0180.f_AD7[iVar10] == 0xFFFFFFFF && func_151())
							{
								if (Global_1C0180.f_A90[iVar10] >= 0x00000001)
								{
									func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 0x00000001);
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
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar10] = 0xFFFFFFFF;
						(*uParam0)[iVar10] = 0x00000001;
					}
				}
				else
				{
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
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
			if (func_140(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, iVar12))
			{
				func_149(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var2))
				{
					if (Var2.f_3 > 0x00000000)
					{
						iVar3 = 0x00000000;
						while (iVar3 < Var2.f_3)
						{
							unk_0xBC584396476EE48A(iVar3, &Var1);
							if (func_151() && (func_112(&Var1, &Var0) || func_112(&Var1, &(Global_1C0005.f_169))))
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
										if (func_146(uParam0->f_2C))
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
										if (func_161(uParam0->f_2C))
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
										if (func_146(uParam0->f_2C))
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
										if (func_161(uParam0->f_2C))
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
							func_148(&Var1);
							iVar3++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 0x00000002;
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar10);
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_A90[iVar10] = 0x00000000;
					(*uParam0)[iVar10] = 0x00000002;
					Global_1C0180.f_A90[0x00000001] = 0x00000000;
					(*uParam0)[0x00000001] = 0x00000001;
					Global_1C0180.f_A90[0x00000002] = 0x00000000;
					(*uParam0)[0x00000002] = 0x00000003;
				}
			}
			if (Global_1C0180.f_AD7[iVar10] == 0xFFFFFFFF && func_151())
			{
				if (Global_1C0180.f_A90[iVar10] >= 0x00000001)
				{
					func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 0x00000001) /*75*/].f_3B + 1);
				}
				else
				{
					func_147(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 0x00000001);
				}
				Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
				Global_1C0180.f_A90[iVar10]++;
			}
			break;
		
		case 0x00000002:
			func_139(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 0x00000003;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_155(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
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

void func_156(var uParam0)
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
			func_124(Global_1C0180.f_B0A, 0xFFFFFFFF);
		}
	}
}

void func_157(int iParam0)
{
	if (unk_0x83D8570832F172A7(iParam0))
	{
		unk_0x6567AE843FADBA94(iParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
				Var4 = { func_58(unk_0xD803B885F5E47A62()) };
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
							Var6 = { func_58(unk_0xD803B885F5E47A62()) };
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

void func_159(int iParam0, char* sParam1, var uParam2, int iParam3)
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

void func_160(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
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

int func_161(int iParam0)
{
	if (iParam0 == 0x00000339 || iParam0 == 0x0000033C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_162(int iParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

int func_163()
{
	return unk_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

bool func_164()
{
	return func_165(unk_0xD803B885F5E47A62());
}

int func_165(int iParam0)
{
	switch (func_166(iParam0))
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

int func_166(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4;
}

void func_167(int iParam0)
{
	Global_141384 = iParam0;
}

void func_168(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		func_171();
	}
	func_170(0x00000004, 0xFFFFFFFF);
	func_170(0x00000006, 0xFFFFFFFF);
	func_170(0x00000007, 0xFFFFFFFF);
	func_170(0x00000003, 0xFFFFFFFF);
	func_170(0x00000001, 0xFFFFFFFF);
	func_170(0x00000002, 0xFFFFFFFF);
	func_170(0x0000000B, 0xFFFFFFFF);
	func_170(0x0000000D, 0xFFFFFFFF);
	func_170(0x0000000E, 0xFFFFFFFF);
	func_170(0x00000010, 0xFFFFFFFF);
}

void func_170(int iParam0, int iParam1)
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

void func_171()
{
	Global_26B66F.f_11B4 = 0x00000000;
}

void func_172(var uParam0, bool bParam1, bool bParam2)
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

int func_173(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_C = iParam2;
	func_176(uParam0);
	func_175(uParam0);
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
			func_174(uParam0);
		}
		else if (uParam0->f_38 != 0x00000000)
		{
			func_48(uParam0, 0x00000001);
		}
		else
		{
			func_48(uParam0, 0x00000000);
		}
	}
	Global_12C53 = 0x00000001;
	return 0x00000001;
}

void func_174(var uParam0)
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
	func_9(unk_0xF59058FCB716F903(0x00000002, 0x000000BC, 0x00000001));
	func_14("ES_HELP_TU");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000001);
	func_9(unk_0xF59058FCB716F903(0x00000002, 0x000000BB, 0x00000001));
	func_14("ES_HELP_TD");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000000);
	func_9(unk_0xF59058FCB716F903(0x00000002, 0x000000CA, 0x00000001));
	func_14("ES_HELP_AB");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_175(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xEEF67251E263A87F(0x00000000);
	unk_0xD3539A877EC25E86(1f, func_62(16f));
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

void func_176(var uParam0)
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

void func_177(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_257(iParam0, 0x00000004))
	{
		return;
	}
	else
	{
		func_180(&(iParam0->f_1A));
		func_179(&(iParam0->f_1A), "BJ_SC_PASS", sParam1, 0x00000000);
		func_213(iParam0, 0x00000004, 0x00000001);
	}
	*uParam5 = 0x00000000;
	if (iParam3 > 0x00000001)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = SYSTEM::CEIL((100f * fParam6));
		}
	}
	iVar3 = SYSTEM::CEIL((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = SYSTEM::CEIL((fParam6 * 50f));
	iVar2 = SYSTEM::CEIL(((fParam6 * 1.5f) * SYSTEM::TO_FLOAT(iParam4)));
	*uParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 0x00000001)
	{
		if (iVar0 > 0x00000000)
		{
			func_178(&(iParam0->f_1A), 0x00000003, "BJ_SC_ALLG_RWD", "", iVar0, 0x00000000, 0x00000002, 0x00000000);
		}
		else
		{
			func_178(&(iParam0->f_1A), 0x00000003, "BJ_SC_ALLG_RWD", "", 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
		func_178(&(iParam0->f_1A), 0x00000002, "BJ_SC_GATES", "", iParam2, iParam3, 0x00000000, 0x00000000);
	}
	func_178(&(iParam0->f_1A), 0x0000000B, "BJ_SC_LAND_ACC", "", iParam4, 0x00000000, 0x00000000, 0x00000000);
	if (iParam3 > 0x00000001)
	{
		func_178(&(iParam0->f_1A), 0x00000003, "BJ_SC_GATE_RWD", "", iVar3, 0x00000000, 0x00000000, 0x00000000);
	}
	func_178(&(iParam0->f_1A), 0x00000003, "BJ_SC_ACC_RWD", "", SYSTEM::ROUND(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0x00000000, 0x00000000, 0x00000000);
	func_178(&(iParam0->f_1A), 0x00000003, "BJ_SC_TOT_RWD", "", *uParam5, 0x00000000, 0x00000000, 0x00000000);
}

void func_178(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_179(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0x00000000;
}

void func_180(var uParam0)
{
	func_176(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

char* func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "BJ_JUMP_01";
		
		case 0x00000001:
			return "BJ_JUMP_02";
		
		case 0x00000002:
			return "BJ_JUMP_03";
		
		case 0x00000003:
			return "BJ_JUMP_04";
		
		case 0x00000004:
			return "BJ_JUMP_05";
		
		case 0x00000005:
			return "BJ_JUMP_06";
		
		case 0x00000006:
			return "BJ_JUMP_07";
		
		case 0x00000007:
			return "BJ_JUMP_08";
		
		case 0x00000008:
			return "BJ_JUMP_09";
		
		case 0x00000009:
			return "BJ_JUMP_10";
		
		case 0x0000000A:
			return "BJ_JUMP_11";
		
		case 0x0000000B:
			return "BJ_JUMP_12";
		
		case 0x0000000C:
			return "BJ_JUMP_13";
		
		default:
	}
	return "";
}

int func_182(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (Global_1C0005.f_1 && !Global_1C0005.f_2)
	{
		func_191(iParam0, iParam1, fParam2, iParam3);
		Global_1C0005.f_2 = 0x00000001;
	}
	if (func_183(&uLocal_73))
	{
		Global_1C017C = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_183(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 0x00000004;
	Var2.f_3 = 0x00000020;
	Var2.f_24 = 0x00000020;
	if (func_161(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_58(unk_0xD803B885F5E47A62()) };
	}
	switch (Global_1C0005)
	{
		case 0x00000000:
			if (func_190(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_149(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = unk_0x3E935963A5A0820F(uParam0->f_2C, 0x00000000);
				iVar4 = 0x00000000;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_189(uParam0->f_2C, iVar4))
					{
						if (func_188(uParam0->f_2C, 0x00000004, iVar4))
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
						if (!func_113(Var0))
						{
							Global_1C0005.f_4 = 0x00000001;
						}
						else
						{
							iVar4 = 0x00000000;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_189(uParam0->f_2C, iVar4))
								{
									if (func_188(uParam0->f_2C, 0x00000004, iVar4))
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
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 0x00000001:
			Global_1C0005.f_1 = 0x00000001;
			if (Global_1C0005.f_2)
			{
				func_187();
				if (Global_1C0005.f_4)
				{
					if (func_186(uParam0->f_2C))
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
			if (unk_0x8CD06866876216F2() && func_185())
			{
				if (func_184())
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
			if (func_186(uParam0->f_2C))
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, &Var3, 0x00000001, 0x00000001, Global_1C0005.f_118.f_24[0x00000000], Global_1C0005.f_118.f_3[0x00000000]))
			{
				func_149(&Var1, &(uParam0->f_2C));
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
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 0x000003E7:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

bool func_184()
{
	return unk_0xEAE0D21A50E6C7F4(Global_EA450.f_8, 0x00000001);
}

var func_185()
{
	return Global_258538.f_3;
}

int func_186(int iParam0)
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

void func_187()
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

int func_188(int iParam0, int iParam1, int iParam2)
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

int func_189(int iParam0, int iParam1)
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

int func_190(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

void func_191(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	StringCopy(&(Var1[0x00000000 /*8*/]), "Location", 32);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_01", 24);
			break;
		
		case 0x00000001:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_02", 24);
			break;
		
		case 0x00000002:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_03", 24);
			break;
		
		case 0x00000003:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_04", 24);
			break;
		
		case 0x00000004:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_05", 24);
			break;
		
		case 0x00000005:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_06", 24);
			break;
		
		case 0x00000006:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_07", 24);
			break;
		
		case 0x00000007:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_08", 24);
			break;
		
		case 0x00000008:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_09", 24);
			break;
		
		case 0x00000009:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_10", 24);
			break;
		
		case 0x0000000A:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_11", 24);
			break;
		
		case 0x0000000B:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_12", 24);
			break;
		
		case 0x0000000C:
			StringCopy(&(Var0[0x00000000 /*6*/]), "BJUMP_13", 24);
			break;
	}
	if (func_193(0x00000112, &Var0, &Var1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000))
	{
		func_192(0x00000112, 0x00000083, iParam3, 0f, 0x00000000);
		if (iParam1 == 0x00000064)
		{
			func_192(0x00000112, 0x00000062, 0x00000001, 0f, 0x00000000);
		}
		else
		{
			func_192(0x00000112, 0x00000062, 0x00000000, 0f, 0x00000000);
		}
		func_192(0x00000112, 0x0000006D, 0x00000001, 0f, 0x00000000);
		func_192(0x00000112, 0x00000008, iParam3, 0f, 0x00000000);
		func_192(0x00000112, 0x0000005D, 0x00000000, fParam2, 0x00000000);
	}
}

void func_192(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
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
				else if (func_188(iParam0, 0x00000004, iVar1))
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

int func_193(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
				Var2 = { func_58(unk_0xD803B885F5E47A62()) };
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

void func_194(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&vVar0, "BJUMP_01", 24);
			break;
		
		case 0x00000001:
			StringCopy(&vVar0, "BJUMP_02", 24);
			break;
		
		case 0x00000002:
			StringCopy(&vVar0, "BJUMP_03", 24);
			break;
		
		case 0x00000003:
			StringCopy(&vVar0, "BJUMP_04", 24);
			break;
		
		case 0x00000004:
			StringCopy(&vVar0, "BJUMP_05", 24);
			break;
		
		case 0x00000005:
			StringCopy(&vVar0, "BJUMP_06", 24);
			break;
		
		case 0x00000006:
			StringCopy(&vVar0, "BJUMP_07", 24);
			break;
		
		case 0x00000007:
			StringCopy(&vVar0, "BJUMP_08", 24);
			break;
		
		case 0x00000008:
			StringCopy(&vVar0, "BJUMP_09", 24);
			break;
		
		case 0x00000009:
			StringCopy(&vVar0, "BJUMP_10", 24);
			break;
		
		case 0x0000000A:
			StringCopy(&vVar0, "BJUMP_11", 24);
			break;
		
		case 0x0000000B:
			StringCopy(&vVar0, "BJUMP_12", 24);
			break;
		
		case 0x0000000C:
			StringCopy(&vVar0, "BJUMP_13", 24);
			break;
	}
	func_195(&uLocal_73, 0x00000055, &vVar0, func_181(iParam0), iParam0, 0xFFFFFFFF, 0x00000000, 0x00000000);
}

void func_195(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 <= 0x00000000 || func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 <= 0x00000000 || func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 <= 0x00000000 || func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 <= 0x00000000 || func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 > 0x00000000 && !func_204())
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
				if (iParam5 <= 0x00000000 || func_204())
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
			MemCopy(&(Global_1C0180.f_ADC.f_9), {func_203(iParam1)}, 0x00000010);
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
				if (func_202(Global_440000.f_38DB3) || func_199(Global_440000.f_38DB3))
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
				else if (func_198(Global_440000.f_38DB3))
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
			MemCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), {func_197(iParam4)}, 0x00000008);
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
	Global_1C0180.f_B0A = func_196(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_196(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 0x00000010);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_161(iParam1))
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

struct<6> func_197(int iParam0)
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

bool func_198(int iParam0)
{
	return iParam0 == 0x0000004A;
}

var func_199(int iParam0)
{
	return (func_201(iParam0) || func_200(iParam0));
}

bool func_200(int iParam0)
{
	return iParam0 == 0x0000002C;
}

bool func_201(int iParam0)
{
	return iParam0 == 0x0000002D;
}

bool func_202(int iParam0)
{
	return iParam0 == 0x0000000C;
}

struct<6> func_203(int iParam0)
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

int func_204()
{
	if (((((((((((Global_440000.f_127B9 == 0x00000001 || Global_440000.f_127B9 == 0x00000003) || Global_440000.f_127B9 == 0x00000005) || Global_440000.f_127B9 == 0x00000007) || Global_440000.f_127B9 == 0x00000013) || Global_440000.f_127B9 == 0x00000008) || Global_440000.f_127B9 == 0x00000009) || Global_440000.f_127B9 == 0x0000000B) || Global_440000.f_127B9 == 0x0000000D) || Global_440000.f_127B9 == 0x00000015) || Global_440000.f_127B9 == 0x00000017) || Global_440000.f_127B9 == 0x00000019)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_205()
{
	return unk_0x58424C49F8924842();
}

void func_206(int iParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*iParam0 == 0x00000000)
	{
		*iParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	iParam0->f_1 = 0x00000000;
	iParam0->f_3[0x00000000] = iParam2;
	iParam0->f_3[0x00000001] = iParam4;
	iParam0->f_3[0x00000002] = iParam6;
	iParam0->f_3[0x00000003] = iParam8;
	iParam0->f_3[0x00000004] = 0x00000169;
	iParam0->f_3[0x00000005] = 0x00000169;
	iParam0->f_3[0x00000006] = 0x00000169;
	iParam0->f_3[0x00000007] = 0x00000169;
	iParam0->f_C[0x00000000] = func_207(iParam2 != 0x00000169, unk_0xF59058FCB716F903(0x00000002, iParam2, 0x00000001), "");
	iParam0->f_C[0x00000001] = func_207(iParam4 != 0x00000169, unk_0xF59058FCB716F903(0x00000002, iParam4, 0x00000001), "");
	iParam0->f_C[0x00000002] = func_207(iParam6 != 0x00000169, unk_0xF59058FCB716F903(0x00000002, iParam6, 0x00000001), "");
	iParam0->f_C[0x00000003] = func_207(iParam8 != 0x00000169, unk_0xF59058FCB716F903(0x00000002, iParam8, 0x00000001), "");
	iParam0->f_C[0x00000004] = 0x00000000;
	iParam0->f_C[0x00000005] = 0x00000000;
	iParam0->f_C[0x00000006] = 0x00000000;
	iParam0->f_C[0x00000007] = 0x00000000;
	iParam0->f_15[0x00000000] = sParam3;
	iParam0->f_15[0x00000001] = sParam5;
	iParam0->f_15[0x00000002] = iParam7;
	iParam0->f_15[0x00000003] = iParam9;
	if (bParam1)
	{
		iParam0->f_2 = 0x00000001;
	}
	else
	{
		iParam0->f_2 = 0x00000000;
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		func_21(&(iParam0->f_1), 0x00000001);
	}
}

char* func_207(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_208()
{
	func_209(unk_0x16F2683693E537C9(), "GENERIC_CURSE_MED", 0x00000018);
}

void func_209(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_210(iParam2), 0x00000001);
}

int func_210(int iParam0)
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

int func_211()
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

void func_212(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_213(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_25B), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(iParam0->f_25B), iParam1);
	}
}

int func_214(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)
{
	int iVar0;
	
	if (iParam1 > 0x00000001 && *uParam0 == (iParam1 - 0x00000001))
	{
		iVar0 = 0x00000064;
	}
	else
	{
		iVar0 = 0x00000000;
	}
	*uParam3 = 0x00000000;
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 1.5f) * SYSTEM::TO_FLOAT(*uParam2))));
	func_215(func_422(), 0x00000001, *uParam3, 0x00000000, 0x00000000);
	return 0x00000001;
}

void func_215(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_250(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_250(iParam0) == 0x00000004)
	{
		return;
	}
	func_216(func_250(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_249();
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
					func_357(0x00000063, 0x00000001);
					func_248(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_248(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_248(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_232(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_227(0x00000005))
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
							func_248(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_248(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_248(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_227(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_248(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_248(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_248(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_248(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_248(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_248(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_248(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_248(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_248(joaat("sp2_money_spent_property"), iParam3);
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
									func_248(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_248(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_248(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_248(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_248(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_248(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_227(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_248(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_248(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_248(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_248(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_248(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_248(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_226(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_357(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_357(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_357(0x00000060, iParam3);
					break;
			}
			func_357(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_219(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_219(iVar1);
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
					func_248(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_248(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_248(joaat("sp2_total_cash_earned"), iParam3);
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
	func_218(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_217(0x00000000);
	}
	return 0x00000001;
}

void func_217(bool bParam0)
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

void func_218(int iParam0)
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

void func_219(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_225(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_225(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_225(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_225(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_222(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_222(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_222(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_222(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_222(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_222(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_221() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_221() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_220(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_220(int iParam0)
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

int func_221()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_223(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_223(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_224();
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

int func_224()
{
	return Global_1407E9;
}

int func_225(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_224();
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

void func_226(int iParam0)
{
	func_357(0x0000005D, iParam0);
	func_357(0x0000001D, iParam0);
	func_357(0x0000001E, iParam0);
}

bool func_227(int iParam0)
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
		return func_229(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_229(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_229(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_229(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_228(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_228(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_228(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_228(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_228(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_228(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_221() /*10930*/].f_181E.f_A, iParam0);
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_223(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_229(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_224();
	}
	iVar1 = func_231(iParam0, iParam1);
	uVar2 = func_230(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_230(int iParam0)
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

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_224();
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

int func_232(bool bParam0)
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
		func_247(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_233(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_234(iParam0, iParam1);
}

int func_234(int iParam0, int iParam1)
{
	if (func_246(0x0000000E) && !func_245(iParam0))
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
	if (func_244(&Global_4127F1))
	{
		if (func_242(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_235(&Global_4127F1, iParam0))
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

int func_235(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_246(0x0000000E) && !func_245(iParam1))
	{
		return 0x00000000;
	}
	if (func_242(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_241(uParam0) < 0f)
	{
		func_240(uParam0, 0x00000000);
	}
	func_238(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_236(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_236(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_246(0x0000000E) && !func_245(iParam1))
	{
		return 0x00000000;
	}
	if (func_242(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_241(uParam0) < 0f)
	{
		func_240(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_237(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_237(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_238(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_239(uParam0, iVar0);
		iVar0++;
	}
	func_240(uParam0, (Global_4127F0 - 0.5f));
}

void func_239(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_240(var uParam0, float fParam1)
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

float func_241(var uParam0)
{
	return uParam0->f_50;
}

bool func_242(var uParam0, int iParam1)
{
	return func_243(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_243(var uParam0, int iParam1)
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

bool func_244(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_245(int iParam0)
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

bool func_246(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_247(int iParam0, int iParam1)
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

void func_248(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_249()
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

int func_250(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_251(int iParam0, int iParam1, int iParam2)
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
		func_225((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_252();
	}
}

void func_252()
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
		func_247(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_253() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_211();
				}
			}
		}
	}
}

int func_253()
{
	return Global_7830;
}

void func_254(int iParam0, int iParam1)
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

int func_255(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_256(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000014))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
}

bool func_257(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(iParam0->f_25B, iParam1);
}

int func_258()
{
	return unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_259(vector3 vParam0, int iParam1, int iParam2, int iParam3, var uParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar18;
	
	iVar0 = unk_0x16F2683693E537C9();
	iVar1 = 0x00000000;
	bVar2 = unk_0xEB6A8945D1AC98A1(iVar0);
	if (bVar2)
	{
		*iParam3 = 0x00000002;
		return;
	}
	iVar3 = unk_0x75B806D0A76CB67D(iVar0);
	iVar4 = unk_0x50D59C88203E680A(iVar0);
	bVar5 = unk_0xE934758D273C899A(iVar0);
	bVar6 = unk_0x869EFD0BC0868856(iVar0);
	bVar7 = unk_0xC844350D5D58C99A(iParam1);
	bVar8 = (bVar7 && unk_0x64E716CF8C283BF5(iVar0, iParam1));
	bVar9 = ((bVar7 && !unk_0xEB6A8945D1AC98A1(iParam2)) && unk_0x1B3D109B39CC2C89(iVar0, iParam2));
	bVar10 = (bVar7 && unk_0x565509D116400807(iParam1, &iVar1));
	bVar11 = ((bVar10 && !unk_0x437347B10A200C4B(iVar1, 0x00000000)) && unk_0x64E716CF8C283BF5(iVar0, iVar1));
	bVar12 = (!bVar7 && !func_425(vParam0));
	if (bVar12)
	{
		vVar13 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
		vVar14 = { vVar13 - vParam0 };
		fVar15 = SYSTEM::SQRT(((vVar14.x * vVar14.x) + (vVar14.y * vVar14.y)));
		*fParam5 = fVar15;
		if ((vVar14.z < 5f && vVar14.z > -2f) && fVar15 < 15f)
		{
			*uParam4 = func_262(SYSTEM::CEIL(((100f * (15f - fVar15)) / 15f)) + 4, 0x00000000, 0x00000064);
			*iParam3 = 0x00000001;
		}
		else
		{
			*iParam3 = 0x00000003;
		}
	}
	if (bVar7)
	{
		if (func_260(iParam1, iParam2))
		{
			*fParam5 = 0f;
			*uParam4 = 0x00000064;
			*iParam3 = 0x00000001;
		}
		else
		{
			*uParam4 = 0x00000000;
			*iParam3 = 0x00000003;
		}
	}
	if (bVar10)
	{
		unk_0x565509D116400807(iParam1, &iVar16);
		vVar17 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
		vVar18 = { unk_0x68F4C0EC296D3901(iVar16, 0x00000001) };
	}
}

int func_260(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	
	if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xC844350D5D58C99A(iParam0)) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		if (func_361(unk_0x134B62B726CEC8E6(iParam0)))
		{
			iVar4 = 0x00000000;
			iVar4 = 0x00000000;
			while (iVar4 < 0x00000006)
			{
				iVar1 = unk_0x5466F584D98DBA09(iParam0, iVar4);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					vVar2 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
					if (unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), iVar1))
					{
						return 0x00000001;
					}
				}
				iVar4++;
			}
		}
		if (unk_0xC844350D5D58C99A(iParam0))
		{
			unk_0x565509D116400807(iParam0, &iVar0);
			if ((unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), iParam0) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0)) || ((unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0x00000000)) && unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam1)))
			{
				if (vVar2.z < vVar3.z)
				{
					return 0x00000001;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), iVar0))
				{
					return 0x00000001;
				}
				else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iVar0))
				{
					vVar5 = { unk_0x5293C88BD2F4DE13(iVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) };
					vVar5.x = func_261((unk_0x755FF954DAE327E1(vVar5.x) - 1.305f), 0f);
					if (vVar5.y >= 0f)
					{
						vVar5.y = func_261((vVar5.y - 5.98f), 0f);
					}
					else
					{
						vVar5.y = func_261((-vVar5.y - 6.21f), 0f);
					}
					if (vVar5.y == 0f && vVar5.x == 0f)
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

float func_261(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_263(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	int iVar1;
	
	if (!func_456(&iParam1))
	{
		return;
	}
	fVar0 = func_455(&iParam1);
	if (fVar0 > 1.4f)
	{
		return;
	}
	iVar1 = (0x000000AA - SYSTEM::CEIL(((170f * fVar0) / 1.4f)));
	unk_0x922D0EFFF8F2403B(0x00000006, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 0x000000F0, 0x000000C8, 0x00000050, iVar1, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x922D0EFFF8F2403B(0x00000006, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 0x000000F0, 0x000000C8, 0x00000050, iVar1, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x922D0EFFF8F2403B(0x00000006, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 0x000000F0, 0x000000C8, 0x00000050, iVar1, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_264(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_362(uParam1);
	if (func_459(func_460(iParam2)))
	{
		if (!func_257(iParam0, 0x00000000))
		{
			if (iParam3 > 0x00000001)
			{
				func_334("BJ_MG_MTOBJ", 0x00001D4C, 0x00000001);
			}
			else if (iVar0 != 0x00000000)
			{
				if (func_361(iVar0))
				{
					func_334("BJ_MG_TRAIN", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_334("BJ_MG_BOAT", 0x00001D4C, 0x00000001);
				}
			}
			else
			{
				func_334("BJ_MG_STOBJ", 0x00001D4C, 0x00000001);
			}
			func_213(iParam0, 0x00000000, 0x00000001);
		}
	}
	if (func_331("BJ_FALLHLP") && Global_56C3.f_87)
	{
		unk_0xA37A90C62806D848(0x00000001);
		func_213(iParam0, 0x00000001, 0x00000000);
	}
	if (!func_257(iParam0, 0x00000001) && !Global_56C3.f_87)
	{
		unk_0x1E3A202C24F57DA6(0x00000000);
		unk_0xA37A90C62806D848(0x00000001);
		func_332("BJ_FALLHLP", 0xFFFFFFFF);
		func_213(iParam0, 0x00000001, 0x00000001);
	}
	else if (!func_257(iParam0, 0x00000002))
	{
		if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000001 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
		{
			unk_0xA37A90C62806D848(0x00000001);
			if (unk_0x91E3F625EF57450D(0x00000000))
			{
				func_332("BJ_PARAHLP_KM", 0x00002710);
			}
			else
			{
				func_332("BJ_PARAHLP", 0x00002710);
			}
			func_213(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (!func_257(iParam0, 0x00000003))
	{
		if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0xFFFFFFFF || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000003)
		{
			unk_0xA37A90C62806D848(0x00000001);
			func_213(iParam0, 0x00000003, 0x00000001);
		}
	}
}

void func_265(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x0FF5573D0492BF97(unk_0x16F2683693E537C9())))
		{
			vVar0 = { unk_0x698705F356FA8F72(unk_0x0FF5573D0492BF97(unk_0x16F2683693E537C9()), 0x00000000) };
		}
		else
		{
			vVar0 = { unk_0x698705F356FA8F72(unk_0x16F2683693E537C9(), 0x00000001) };
		}
		fVar7 = vVar0.y;
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		vVar1.z = 0f;
	}
	if (unk_0xC844350D5D58C99A(*iParam0) && unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		vVar2 = { unk_0x68F4C0EC296D3901(*iParam0, 0x00000001) };
		vVar2.z = 0f;
		vVar6 = { unk_0x56E9E0FD5ACCD35D(*iParam0) };
	}
	if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		unk_0x61890296D3AA030F(*iParam0, &vVar3, &uVar5, &uVar5, &uVar5);
		vVar3.z = 0f;
	}
	vVar4 = { vVar1 - vVar2 };
	vVar4.z = 0f;
	fVar9 = unk_0x755FF954DAE327E1(func_269(vVar4, vVar3));
	if (func_268(*iParam0))
	{
		fVar8 = func_49((fVar7 - (fVar9 / fVar7)), 2f, 3f);
	}
	else
	{
		fVar8 = func_49((fVar7 + (fVar9 / fVar7)), 3f, 10f);
	}
	fVar10 = func_49(func_266(vVar6.y, fVar8, 0.5f), vVar6.y, fVar7);
	vVar6.y = func_266(vVar6.y, fVar8, 0.5f);
	if (((unk_0xC844350D5D58C99A(*iParam0) && unk_0xDF1306B443CD3D15(*iParam0, 0x00000000)) && vVar6.y > 2f) && vVar6.y < unk_0xD890711CFD5AF100(*iParam0))
	{
		unk_0xE76AF7E1683414C6(unk_0xA30B8362589C124A(*iParam0, 0xFFFFFFFF, 0x00000000), fVar10);
	}
}

float func_266(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_267((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_267(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_268(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		unk_0x61890296D3AA030F(iParam0, &vVar4, &uVar2, &uVar2, &vVar1);
	}
	vVar3 = { vVar0 - vVar1 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_269(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_269(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

float func_270(int iParam0, int iParam1, bool bParam2)
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

Vector3 func_271(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0xE82754C349C7B581(vParam1, &uVar0, 0x00000000, 0x00000000))
	{
		vParam1.z = uVar0;
	}
	if (func_272(iParam0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
	return vParam1;
}

bool func_272(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_273(int iParam0, var uParam1)
{
	var uVar0[6];
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	if (!func_456(iParam0))
	{
		func_480(iParam0);
	}
	if (func_455(iParam0) < 1f)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return;
	}
	iVar4 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 0xFFFFFFFF);
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000006)
	{
		if ((unk_0xC844350D5D58C99A((*uParam1)[iVar5]) && !unk_0x437347B10A200C4B((*uParam1)[iVar5], 0x00000000)) && !unk_0xEB6A8945D1AC98A1((*uParam1)[iVar5]))
		{
			if (func_275((*uParam1)[iVar5], &uVar0) == 0xFFFFFFFF)
			{
				func_274(uParam1[iVar5]);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - unk_0x68F4C0EC296D3901((*uParam1)[iVar5], 0x00000001) };
				fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
				if (vVar2.z * vVar2.z) < (3f * fVar3)
				{
					func_274(uParam1[iVar5]);
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 0x00000000)
	{
		iVar5 = 0x00000000;
		while (iVar5 < iVar4)
		{
			if ((((unk_0xC844350D5D58C99A(uVar0[iVar5]) && !unk_0x437347B10A200C4B(uVar0[iVar5], 0x00000000)) && !unk_0xEB6A8945D1AC98A1(uVar0[iVar5])) && unk_0x232B70EDA3C8983B(uVar0[iVar5])) && !unk_0x405E212DDE472467(uVar0[iVar5], 0x00000001))
			{
				if (func_275(uVar0[iVar5], uParam1) == 0xFFFFFFFF)
				{
					vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - unk_0x68F4C0EC296D3901(uVar0[iVar5], 0x00000001) };
					fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
					if (vVar2.z * vVar2.z) > (3f * fVar3)
					{
						bVar7 = 0x00000000;
						iVar6 = 0x00000000;
						while (iVar6 < *uParam1)
						{
							if (!unk_0xC844350D5D58C99A((*uParam1)[iVar6]) || unk_0xEB6A8945D1AC98A1((*uParam1)[iVar6]))
							{
								(*uParam1)[iVar6] = uVar0[iVar5];
								unk_0xDD353D0E9C789D0E(&iVar1);
								unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@basejump@", "ped_a_intro", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iVar1);
								unk_0x78ADC381772E3D54(uVar0[iVar5], iVar1);
								unk_0xF82EA857DA10E0CD(&iVar1);
								iVar6 = *uParam1;
								bVar7 = 0x00000001;
							}
							iVar6++;
						}
						if (!bVar7)
						{
							return;
						}
					}
				}
			}
			iVar5++;
		}
	}
}

void func_274(var uParam0)
{
	unk_0xA3BF0AA5A2608191(*uParam0);
	unk_0xC6EB89C59F2AF6B8(*uParam0, "oddjobs@basejump@", "ped_a_exit", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	*uParam0 = 0x00000000;
}

int func_275(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < *uParam1)
		{
			if (unk_0xC844350D5D58C99A((*uParam1)[iVar0]))
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

void func_276(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	unk_0x4EBF4289AABAE861(*uParam36);
	func_370();
	func_369();
	func_490();
	func_44(&(iParam2->f_1A));
	*iParam19 = 0x00000000;
	*iParam21 = 0x00000000;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = 0xFFFFFFFF;
	*uParam29 = 0x00000000;
	*bParam30 = 0x00000000;
	func_321(iParam2);
	if (func_456(iParam24))
	{
		func_452(iParam24);
	}
	if (func_456(iParam23))
	{
		func_452(iParam23);
	}
	if (unk_0xC844350D5D58C99A(*iParam7))
	{
		if (func_361(func_362(uParam0)))
		{
			unk_0x86AA47F87DFBA4D0(iParam7);
		}
		else
		{
			if (!unk_0x437347B10A200C4B(*iParam7, 0x00000000))
			{
				iVar1 = unk_0xA30B8362589C124A(*iParam7, 0xFFFFFFFF, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					unk_0xEBA53F35D0085654(&iVar1);
				}
			}
			unk_0xA954465BA6FDEFE2(iParam7);
		}
	}
	iVar2 = 0x00000000;
	while (iVar2 < *iParam5)
	{
		if (unk_0xC844350D5D58C99A((*iParam5)[iVar2]) && !unk_0x437347B10A200C4B((*iParam5)[iVar2], 0x00000000))
		{
			unk_0xA3BF0AA5A2608191((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0x00000000;
		}
		iVar2++;
	}
	if (unk_0xC844350D5D58C99A(*iParam8))
	{
		unk_0xA954465BA6FDEFE2(iParam8);
	}
	if (unk_0xC844350D5D58C99A(*iParam9))
	{
		if (!func_320(*iParam9) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(*iParam9, 0xFFFFFFFF, 0x00000000)))
		{
			iVar3 = unk_0xA30B8362589C124A(*iParam9, 0xFFFFFFFF, 0x00000000);
			unk_0xEBA53F35D0085654(&iVar3);
		}
		unk_0xA954465BA6FDEFE2(iParam9);
	}
	if (!unk_0x437347B10A200C4B(*iParam4, 0x00000000))
	{
		unk_0x6DAD7906B73F064D(iParam4);
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 0x00000001);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, 0x00000001) + Vector(0f, 0f, 2f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			if (unk_0xC844350D5D58C99A(*iParam6) && iVar0 == *iParam6)
			{
				unk_0x7EA00EB725DAA91D(*iParam6);
				func_280(*iParam6, func_319(iParam20), func_318(iParam20), 0x00000018, 0x00000000);
				unk_0x37806EBF326ECEE9(iVar0, 0f, 0f, 0f);
				unk_0xA47B46945FF6DE74(iVar0, func_319(iParam20), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
				unk_0xD8F6A53F4799FAFE(iVar0, func_318(iParam20));
			}
			else
			{
				if (!unk_0xAF6690C489CC6203(iVar0))
				{
					unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
				}
				unk_0xA954465BA6FDEFE2(&iVar0);
			}
		}
	}
	*iParam15 = 0x00000000;
	*iParam17 = 0x00000000;
	*iParam18 = 0x00000001;
	*uParam26 = 0f;
	*uParam27 = 0f;
	*uParam28 = 0f;
	*bParam31 = 0x00000000;
	*bParam32 = 0x00000000;
	*bParam33 = 0x00000000;
	*bParam34 = 0x00000000;
	*iParam35 = 0x00000000;
	if (*iParam16 > 0xFFFFFFFF)
	{
		unk_0xE223EB8FE6F8CC15(*iParam11);
		unk_0xE223EB8FE6F8CC15(*iParam12);
		*iParam16 = 0xFFFFFFFF;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam13))
	{
		unk_0x142CC44DB769B57E(&iParam13);
	}
	if (unk_0xE4EDC4B0E92C078B(iParam14))
	{
		unk_0x142CC44DB769B57E(&iParam14);
	}
	iVar4 = 0x00000000;
	while (iVar4 < *iParam10)
	{
		if (unk_0xC844350D5D58C99A((*iParam10)[iVar4]) && !unk_0x437347B10A200C4B((*iParam10)[iVar4], 0x00000000))
		{
			unk_0xF8CF67C6E39C23A9((*iParam10)[iVar4], 1f);
			unk_0xE8832A9E16A57A1F((*iParam10)[iVar4], 0x00000000, 0x00000001);
		}
		(*iParam10)[iVar4] = 0x00000000;
		iVar4++;
	}
	func_279(iParam2);
	*iParam3 = 0x00000000;
	func_278();
	func_277();
	unk_0x53491B90E4FD0E56(0x00000320);
}

void func_277()
{
	Global_78C0 = 0x00000001;
}

void func_278()
{
	int iVar0;
	
	Local_66.f_42 = 0xFFFFFFFF;
	Local_66.f_43 = 10f;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		Local_66.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_66.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_66.f_9[iVar0 /*7*/].f_5 = 0x00000000;
		Local_66.f_9[iVar0 /*7*/].f_6 = 0x00000000;
		iVar0++;
	}
	Local_66.f_5 = 0x00000000;
	Local_66.f_5.f_1 = -1f;
	Local_66.f_5.f_2 = 0x00000000;
	Local_66 = 0x00000000;
	Local_66.f_1 = 0x00000000;
}

void func_279(int iParam0)
{
	iParam0->f_25B = 0x00000000;
}

void func_280(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_317(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_312(iParam0, &Var0);
		if (func_311(vParam1, 0f, 0f, 0f, 0x00000000))
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
		func_304(iParam3, &Var0, vParam1, fParam2, func_310(iParam0));
		func_281(iParam3, iParam0, 0x00000000);
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_301(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
				Global_1B416.f_7FE8.f_12C1 = func_514();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_300(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_282(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_282(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_283(iParam0))
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
	func_312(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_283(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_298(iParam0, 0x00000000, 0x00000000)) || func_298(iParam0, 0x00000001, 0x00000000)) || func_298(iParam0, 0x00000002, 0x00000000)) || func_310(iParam0) != 0x00000091) || func_297(iParam0)) || func_296(iParam0)) || func_295(iParam0)) || func_294(iParam0)) || !func_284(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_296(iParam0))
		{
		}
		if (func_296(iParam0))
		{
		}
		if (func_298(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_298(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_298(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_310(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_284(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_285(iParam0, 0x00000000))
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

int func_285(int iParam0, bool bParam1)
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
		if (!func_293())
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
		if ((((!func_292() && !func_291()) && !func_290()) && !func_289()) && !func_293())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_290())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_288(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_286(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_286(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_287())
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

int func_287()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_288(int iParam0)
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

int func_289()
{
	return 0x00000000;
}

int func_290()
{
	return 0x00000001;
}

int func_291()
{
	return 0x00000001;
}

int func_292()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_293()
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

int func_294(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_285(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_295(int iParam0)
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

int func_296(int iParam0)
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

int func_297(int iParam0)
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

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_299(iParam1, iVar0, &sVar1, &iVar2))
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

int func_299(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_300(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

int func_301(var uParam0, int iParam1)
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
			uParam0->f_4 = func_302(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_302(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_302(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_302(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_302(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_302(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_302(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_302(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_302(0x00000002, 0x00000001);
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
			if (func_293())
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
			if (func_293())
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
		if (!func_311(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_311(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_311(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_302(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_39(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_303(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_303(int iParam0, var uParam1, int iParam2)
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

void func_304(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_301(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_309(iParam0);
			func_308(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
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
			func_305(iParam0, 0x00000001);
		}
	}
}

void func_305(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_307(iParam0, 0x00000000))
		{
			func_306(iParam0, 0x00000001, 0x00000000);
			func_306(iParam0, 0x00000002, 0x00000000);
			func_306(iParam0, 0x00000003, 0x00000000);
			func_306(iParam0, 0x00000004, 0x00000000);
			func_306(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_306(iParam0, 0x00000000, 0x00000000);
	}
}

void func_306(int iParam0, int iParam1, bool bParam2)
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

bool func_307(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_308(var uParam0, var uParam1)
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

void func_309(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_301(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_305(iParam0, 0x00000000);
		}
	}
}

int func_310(int iParam0)
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

bool func_311(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_312(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_316(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_315(uParam1->f_42))
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
		func_314(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_313(iVar0 + 1));
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

int func_313(int iParam0)
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

int func_314(int iParam0, var uParam1, var uParam2)
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

int func_315(int iParam0)
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

void func_316(var uParam0)
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

void func_317(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_309(iParam0);
	func_305(iParam0, 0x00000000);
}

float func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 192.1528f;
		
		case 0x00000001:
			return 144.2205f;
		
		case 0x00000002:
			return 82.0341f;
		
		case 0x00000003:
			return 134.9389f;
		
		case 0x00000004:
			return 241.8704f;
		
		case 0x00000005:
			return 342.318f;
		
		case 0x00000006:
			return 174.9318f;
		
		case 0x00000007:
			return 186.4915f;
		
		case 0x00000008:
			return 93.0806f;
		
		case 0x00000009:
			return 213.7284f;
		
		case 0x0000000A:
			return 55.5964f;
		
		case 0x0000000B:
			return 61.2421f;
		
		case 0x0000000C:
			return 304.1476f;
		
		default:
	}
	return 0f;
	return 0f;
}

Vector3 func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -835.2823f, -1303.246f, 4.0004f;
		
		case 0x00000001:
			return 1236.613f, 143.0208f, 80.8622f;
		
		case 0x00000002:
			return 2463.523f, 1495.492f, 34.8794f;
		
		case 0x00000003:
			return -262.0742f, 6590.702f, 0.9787f;
		
		case 0x00000004:
			return -45.396f, -784.1727f, 43.2721f;
		
		case 0x00000005:
			return -182.8192f, -890.5899f, 28.3452f;
		
		case 0x00000006:
			return -1236.648f, 4557.094f, 185.7374f;
		
		case 0x00000007:
			return -731.5519f, 4497.153f, 75.5991f;
		
		case 0x00000008:
			return -790.7881f, 293.895f, 84.7917f;
		
		case 0x00000009:
			return -1426.048f, 4408.049f, 46.1198f;
		
		case 0x0000000A:
			return 2491.808f, 5001.821f, 44.1871f;
		
		case 0x0000000B:
			return 1067.101f, -198.2404f, 68.6323f;
		
		case 0x0000000C:
			return -762.3691f, 4301.332f, 145.2817f;
		
		default:
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

int func_320(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_321(int iParam0)
{
	if (*iParam0 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
	iParam0->f_1 = 0x00000000;
	iParam0->f_2 = 0x00000000;
	iParam0->f_C[0x00000000] = 0x00000000;
	iParam0->f_C[0x00000001] = 0x00000000;
	iParam0->f_C[0x00000002] = 0x00000000;
	iParam0->f_C[0x00000003] = 0x00000000;
	iParam0->f_C[0x00000004] = 0x00000000;
	iParam0->f_C[0x00000005] = 0x00000000;
	iParam0->f_C[0x00000006] = 0x00000000;
	iParam0->f_C[0x00000007] = 0x00000000;
	iParam0->f_3[0x00000000] = 0x00000169;
	iParam0->f_3[0x00000001] = 0x00000169;
	iParam0->f_3[0x00000002] = 0x00000169;
	iParam0->f_3[0x00000003] = 0x00000169;
	iParam0->f_3[0x00000004] = 0x00000169;
	iParam0->f_3[0x00000005] = 0x00000169;
	iParam0->f_3[0x00000006] = 0x00000169;
	iParam0->f_3[0x00000007] = 0x00000169;
	iParam0->f_15[0x00000000] = 0x00000000;
	iParam0->f_15[0x00000001] = 0x00000000;
	iParam0->f_15[0x00000002] = 0x00000000;
	iParam0->f_15[0x00000003] = 0x00000000;
}

int func_322(var uParam0, int iParam1, int iParam2)
{
	if ((unk_0x1C0640BA9A7327B3() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_5 = unk_0x1C0640BA9A7327B3();
	if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > iParam2)
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iParam1) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_3, iParam1))
		{
			uParam0->f_4 = unk_0x1C0640BA9A7327B3();
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_323(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	
	switch (uParam0->f_3)
	{
		case 0x00000000:
			if (func_455(iParam1) >= 0f)
			{
				vParam4.z = func_49(vParam4.z, -8.909f, 8.909f);
				uParam5->f_2 = (uParam5->f_2 + vParam4.z);
				vVar0 = { func_457(vParam3, vParam4.z) };
				unk_0x86F44313DFA8F00C(func_427(uParam0, 0x00000000), vParam2 + vVar0, *uParam5, *uParam6, 0x0000012C, 0x00000001, 0x00000001, 0x00000002);
				unk_0xF1E4C781086FABC1(func_427(uParam0, 0x00000001), func_427(uParam0, 0x00000000), SYSTEM::FLOOR((1000f * (1.1f - 0f))), 0x00000002, 0x00000001);
				uParam0->f_3 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_455(iParam1) >= 0f)
			{
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000001, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 0x00000000, 0x00000000, 0x00000000);
				uParam0->f_3 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_455(iParam1) >= 1.1f)
			{
				uParam0->f_3 = 0x00000003;
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_324(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = func_427(uParam1, 0x00000000);
	iVar2 = func_427(uParam1, 0x00000001);
	unk_0xDC3CC6D1845B0567(iVar2, func_325());
	vVar3 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 2f, -0.3f, -7.7824f) };
	unk_0x608A456FDD8A83D8(iVar2, vVar3);
	vVar0 = { unk_0x17D61C69BA58F815(iVar1, 0x00000002) };
	vVar0.x = 0f;
	unk_0x5F3CBA6EB9341C90(iVar2, vVar0, 0x00000002);
	unk_0x5818C8D5303DCCF8(iVar2, unk_0x86CC98177DFF41EC(iVar1));
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	uParam1->f_3 = 0x00000000;
	func_365(iParam2);
}

float func_325()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_326(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = func_427(uParam1, 0x00000000);
	vVar1 = { func_329(uParam2) };
	if (unk_0x89DF0B812BA6383B())
	{
		vVar1.y = (vVar1.y * -1f);
	}
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		uParam5->f_2 = (uParam5->f_2 - ((vVar1.x * unk_0x6117725E0134737F()) * 100f));
		*uParam5 = (*uParam5 + ((vVar1.y * unk_0x6117725E0134737F()) * 100f));
		if (unk_0x755FF954DAE327E1(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * unk_0x6117725E0134737F()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (unk_0x755FF954DAE327E1(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * unk_0x6117725E0134737F()) * 5f));
		}
		else
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		uParam5->f_2 = (-vVar1.x * 130f);
		*uParam5 = (vVar1.y * 130f);
	}
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * unk_0x6117725E0134737F()));
	if (uParam4->f_2 > (0.5f * 43.7465f))
	{
		uParam4->f_2 = (0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	else if (uParam4->f_2 < (-0.5f * 43.7465f))
	{
		uParam4->f_2 = (-0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	*uParam4 = (*uParam4 + (*uParam5 * unk_0x6117725E0134737F()));
	if (*uParam4 > (0.5f * 21.6f))
	{
		*uParam4 = (0.5f * 21.6f);
		*uParam5 = 0f;
	}
	else if (*uParam4 < (-0.5f * 21.6f))
	{
		*uParam4 = (-0.5f * 21.6f);
		*uParam5 = 0f;
	}
	vVar2 = { func_457(vParam7, uParam4->f_2) };
	unk_0x608A456FDD8A83D8(iVar0, vParam6 + vVar2);
	unk_0x5F3CBA6EB9341C90(iVar0, (-33f + *uParam4), 0f, ((-88.515f + func_458(uParam0)) + uParam4->f_2), 0x00000002);
	unk_0xDC3CC6D1845B0567(iVar0, func_325());
	if (!unk_0x0F1CCD77290EE12F() || !func_456(iParam3))
	{
		func_365(iParam3);
	}
	else
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			func_328("BJ_VLOOKHLP");
		}
		if (func_456(iParam3) && func_455(iParam3) > 0.5f)
		{
			if (func_327(uParam2, 0x00000001))
			{
				func_452(iParam3);
				unk_0xE03C71FA3398174A(iVar0);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_327(var uParam0, int iParam1)
{
	return (unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iParam1) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_3, iParam1));
}

void func_328(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

Vector3 func_329(var uParam0)
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_330(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = (0.006f * SYSTEM::SIN((((0.25f * 0.5f) * SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3())) + 1.5f)));
	fVar1 = (0.006f * SYSTEM::SIN((((0.25f * 0.4f) * SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3())) + 3f)));
	fVar2 = (0.006f * SYSTEM::SIN(((0.25f * 1f) * SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()))));
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1 + Vector(fVar2, fVar1, fVar0), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
}

bool func_331(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_332(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_333(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x562F77A7F33D2E46("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			unk_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_213(uParam0, 0x00000014, 0x00000000);
		}
	}
	else if (unk_0x562F77A7F33D2E46("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		unk_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_213(uParam0, 0x00000014, 0x00000000);
	}
}

void func_334(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

struct<4> func_335(int iParam0)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 0x00000003:
		case 0x0000000C:
		case 0x00000006:
			StringCopy(&Var0, "BJ_OBJ_JCL", 16);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "BJ_OBJ_JDB", 16);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "BJ_OBJ_JCR", 16);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "BJ_OBJ_JB", 16);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_336(int iParam0, float fParam1)
{
	if (!func_456(iParam0))
	{
		func_42(iParam0, fParam1);
	}
}

void func_337(int iParam0, int iParam1)
{
	if (func_456(iParam0))
	{
		if (func_339(iParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_209(unk_0x16F2683693E537C9(), "BASEJUMP_ABOUT_TO_JUMP", 0x00000018);
		}
	}
	else if (!func_338())
	{
		func_336(iParam0, 0f);
	}
}

int func_338()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_339(int iParam0, float fParam1)
{
	if (func_340(iParam0, fParam1))
	{
		func_452(iParam0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_340(int iParam0, float fParam1)
{
	if (func_456(iParam0))
	{
		if (func_455(iParam0) > fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_341(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), uParam0, 0x00000001);
		if ((((*uParam0 != 0x00000000 && *uParam0 != joaat("weapon_unarmed")) && *uParam0 != joaat("weapon_electric_fence")) && *uParam0 != joaat("gadget_parachute")) && *uParam0 != joaat("object"))
		{
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0xFFFFFFFF, 0x00000000, 0x00000001);
		}
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000042, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000043, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
		unk_0x3584F71E5CA29322(0x00000013);
	}
}

int func_342(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	vVar4 = { func_363(uParam0, *iParam6) };
	bVar15 = *iParam6 == (iParam9 - 0x00000001);
	(*iParam3)[0x00000000] = (*iParam3)[0x00000000];
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x61890296D3AA030F(unk_0x16F2683693E537C9(), &vVar0, &uVar1, &uVar2, &vVar3);
	}
	if (bVar15)
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			vVar9 = { unk_0x68E4ADDDDCD7BDDE(iParam1, func_364(uParam0)) };
			fVar14 = (vVar9.z - vVar4.z);
			if (bParam20)
			{
				if (unk_0xE4EDC4B0E92C078B(*iParam11))
				{
					unk_0x2F9282246F89FFD1(*iParam11, vVar9);
				}
				else
				{
					*iParam11 = unk_0x6CC513A908911CF0(vVar9);
					unk_0x61755AC17D8F538E(*iParam11, 0x00000005);
					unk_0x516E63E474722206(*iParam11, 1.2f);
					unk_0xDC5B2F9D0CCE3A10(*iParam11, "BJ_BLIP_TGT");
				}
			}
			vVar10 = { func_363(uParam0, 0x00000000) };
			vVar9.z = (vVar10.z + fVar14);
			vVar4 = { vVar9 };
		}
		else if (func_362(uParam0) != 0x00000000)
		{
			vVar9 = { func_363(uParam0, 0x00000000) };
			vVar4 = { vVar9 };
		}
		else
		{
			vVar9 = { vVar4 };
		}
		vVar6 = { vVar3 - vVar4 };
		if (func_362(uParam0) == 0x00000000)
		{
			unk_0x922D0EFFF8F2403B(0x00000006, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 0x000000F0, 0x000000C8, 0x00000050, func_351(vVar9, 0x000000AA, 0x000000C8), 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x922D0EFFF8F2403B(0x00000006, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 0x000000F0, 0x000000C8, 0x00000050, func_351(vVar9, 0x000000AA, 0x000000C8), 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x922D0EFFF8F2403B(0x00000006, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 0x000000F0, 0x000000C8, 0x00000050, func_351(vVar9, 0x000000AA, 0x000000C8), 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		if (*iParam7 != 0xFFFFFFFF)
		{
			unk_0xE223EB8FE6F8CC15(*iParam4);
			*iParam7 = 0xFFFFFFFF;
		}
	}
	else
	{
		unk_0xA402F6C87C08815C(0x00000086, &iVar17, &iVar18, &iVar19, &uVar20);
		vVar6 = { vVar3 - vVar4 };
		vVar5 = { func_363(uParam0, *iParam6 + 1) };
		unk_0x922D0EFFF8F2403B(0x00000006, vVar4, func_469(vVar6), 0f, 0f, 0f, 14f, 14f, 14f, 0x000000F0, 0x000000C8, 0x00000050, func_351(vVar4, 0x00000019, 0x000000C8), 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0x00000000)
			{
				unk_0xE223EB8FE6F8CC15(*iParam4);
				*iParam4 = 0x00000000;
				if (*iParam7 < (iParam9 - 0x00000002))
				{
					unk_0xE223EB8FE6F8CC15(*iParam5);
					*iParam4 = 0x00000000;
				}
			}
			*iParam4 = unk_0x1B26E47E3E30075B(0x00000011, vVar4, vVar5, 9f, iVar17, iVar18, iVar19, func_351(vVar9, 0x00000019, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(0x00000071) / SYSTEM::TO_FLOAT(0x000000AA))))), 0x00000000);
			if (*iParam6 < (iParam9 - 0x00000002))
			{
				*iParam5 = unk_0x1B26E47E3E30075B(0x00000011, vVar5, func_363(uParam0, *iParam6 + 2), (9f * 0.5f), iVar17, iVar18, iVar19, func_351(vVar9, 0x00000019, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(0x00000071) / SYSTEM::TO_FLOAT(0x000000AA))))), 0x00000000);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 0x00000001))
		{
			unk_0x922D0EFFF8F2403B(0x00000006, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 0x000000F0, 0x000000C8, 0x00000050, func_351(vVar5, 0x000000AA, 0x000000C8), 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x922D0EFFF8F2403B(0x00000006, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 0x000000F0, 0x000000C8, 0x00000050, func_351(vVar5, 0x000000AA, 0x000000C8), 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x922D0EFFF8F2403B(0x00000006, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 0x000000F0, 0x000000C8, 0x00000050, func_351(vVar5, 0x000000AA, 0x000000C8), 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0x922D0EFFF8F2403B(0x00000006, vVar5, func_469(vVar3 - vVar5), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 0x000000F0, 0x000000C8, 0x00000050, func_351(vVar5, 0x00000019, 0x000000C8), 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		if (*iParam4 != 0x00000000)
		{
			unk_0xF0B0A50DF3EA0E70(*iParam4, iVar17, iVar18, iVar19, func_351(vVar4, 0x00000019, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(0x00000071) / SYSTEM::TO_FLOAT(0x000000AA))))));
		}
		if (*iParam5 != 0x00000000)
		{
			unk_0xF0B0A50DF3EA0E70(*iParam5, iVar17, iVar18, iVar19, func_351(vVar5, 0x00000019, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(0x00000071) / SYSTEM::TO_FLOAT(0x000000AA))))));
		}
	}
	if (!bParam19)
	{
		return 0x00000000;
	}
	if ((unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000000 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000001) || (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002 && !unk_0x06F8112AA79C53D9(0x00000000, 0x00000050)))
	{
		if (!unk_0x362FD95670BFA2A6(vVar4, &uVar21, &uVar22))
		{
			if (iLocal_511)
			{
				func_349(vVar4, uParam15, uParam16, uParam17);
				if (func_456(&iLocal_513))
				{
					func_452(&iLocal_513);
				}
			}
			else if (func_456(&iLocal_513))
			{
				if (func_347(&iLocal_513) > 0.5f)
				{
					func_452(&iLocal_513);
					iLocal_511 = 0x00000001;
				}
			}
			else
			{
				func_480(&iLocal_513);
			}
		}
		else if (iLocal_511)
		{
			func_349(vVar4, uParam15, uParam16, uParam17);
			if (func_456(&iLocal_513))
			{
				if (func_347(&iLocal_513) > 0.5f)
				{
					func_452(&iLocal_513);
					iLocal_511 = 0x00000000;
				}
			}
			else
			{
				func_480(&iLocal_513);
			}
		}
		else if (func_456(&iLocal_513))
		{
			func_452(&iLocal_513);
		}
	}
	else
	{
		iLocal_511 = 0x00000000;
	}
	if (func_346(iParam14, uParam18, &iParam1))
	{
		if (unk_0xE4EDC4B0E92C078B(*iParam11))
		{
			unk_0x142CC44DB769B57E(iParam11);
		}
		if (unk_0xE4EDC4B0E92C078B(*iParam12))
		{
			unk_0x142CC44DB769B57E(iParam12);
		}
		if (!bVar15)
		{
			return 0x00000002;
		}
		fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
		if (((vVar6.z < 5f && vVar6.z > -2f) && fVar12 < 15f) || func_260(iParam1, iParam2))
		{
			*uParam10 = func_262(SYSTEM::CEIL(((100f * (15f - fVar12)) / 15f)) + 4, 0x00000000, 0x00000064);
			return 0x00000001;
		}
		else
		{
			return 0x00000003;
		}
	}
	else if (func_345())
	{
		if (unk_0x341D37321932F141(unk_0xD803B885F5E47A62()))
		{
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000000);
		}
	}
	else if (!bVar15)
	{
		fVar11 = SYSTEM::VMAG2(vVar6);
		if (fVar11 < (22f * 22f))
		{
			if (fVar11 < (10f * 10f))
			{
				bVar16 = 0x00000001;
			}
			else if (func_269(vVar0, -vVar6 / FtoV(SYSTEM::SQRT(fVar11))) < 0.08f)
			{
				bVar16 = 0x00000001;
			}
			if (bVar16)
			{
				*uParam8++;
				func_344(iParam13, 0x00000001);
				func_215(func_422(), 0x00000001, SYSTEM::FLOOR((30f * fParam21)), 0x00000000, 0x00000000);
				iLocal_512 = 0x00000000;
			}
			if (!bVar16 && !iLocal_512)
			{
				iLocal_512 = 0x00000001;
			}
		}
		else if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000000 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0xFFFFFFFF)
		{
			if (vVar6.z < -22f)
			{
				func_344(iParam13, 0x00000000);
				bVar16 = 0x00000001;
			}
		}
		else
		{
			vVar8 = { unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()) };
			vVar8.z = 0f;
			vVar8 = { func_469(vVar8) };
			vVar7 = { -vVar6.x, -vVar6.y, 0f };
			vVar7 = { func_469(vVar7) };
			fVar13 = ((vVar3.z - 32f) + (32f * func_343(vVar8, vVar7)));
			fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
			if ((vVar3.z - fVar13) < fVar12)
			{
				fVar13 = (fVar13 - (0.05f * ((fVar13 - vVar3.z) + fVar12)));
				if (fVar13 < (vVar4.z - 22f))
				{
					func_344(iParam13, 0x00000000);
					bVar16 = 0x00000001;
				}
			}
		}
		if (iLocal_512)
		{
			if (SYSTEM::VMAG2(vVar6) >= (22f * 22f))
			{
				*uParam8++;
				func_344(iParam13, 0x00000001);
				func_215(func_422(), 0x00000001, SYSTEM::FLOOR((30f * fParam21)), 0x00000000, 0x00000000);
				bVar16 = 0x00000001;
				iLocal_512 = 0x00000000;
			}
		}
		if (bVar16)
		{
			*iParam6++;
			if (unk_0xE4EDC4B0E92C078B(*iParam11))
			{
				unk_0x142CC44DB769B57E(iParam11);
			}
			if (unk_0xE4EDC4B0E92C078B(*iParam12))
			{
				*iParam11 = *iParam12;
				*iParam12 = 0x00000000;
				unk_0x516E63E474722206(*iParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 0x00000001))
				{
					unk_0xDC5B2F9D0CCE3A10(*iParam11, "BJ_BLIP_TGT");
				}
				else
				{
					unk_0xDC5B2F9D0CCE3A10(*iParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 0x00000001))
			{
				if (!unk_0xE4EDC4B0E92C078B(*iParam12))
				{
					*iParam12 = unk_0x6CC513A908911CF0(func_363(uParam0, *iParam6 + 1));
					unk_0x61755AC17D8F538E(*iParam12, 0x00000005);
					unk_0x516E63E474722206(*iParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 0x00000001))
					{
						unk_0xDC5B2F9D0CCE3A10(*iParam12, "BJ_BLIP_TGT");
					}
					else
					{
						unk_0xDC5B2F9D0CCE3A10(*iParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*iParam12 = 0x00000000;
			}
			unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), func_363(uParam0, *iParam6), 0xFFFFFFFF, 0x00000000, 0x00000002);
		}
	}
	return 0x00000000;
}

float func_343(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

void func_344(var uParam0, bool bParam1)
{
	*uParam0 = unk_0xD68EA767274B7444();
	if (bParam1)
	{
		unk_0x4D7F4CC43D4D0DE3(*uParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
	}
	else
	{
		func_334("BJ_MISSED", 0x00001D4C, 0x00000001);
		unk_0x4D7F4CC43D4D0DE3(*uParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
	}
}

int func_345()
{
	if (((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) && (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000003 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0xFFFFFFFF)) && unk_0xEE9925602B29903C(unk_0x16F2683693E537C9()) > 50f) && !unk_0x42CF608FD1475F11(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_346(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	iVar0 = unk_0x16F2683693E537C9();
	if (!*uParam1)
	{
		iVar1 = unk_0x50D59C88203E680A(iVar0);
		if (iVar1 != 0xFFFFFFFF && !unk_0xE934758D273C899A(iVar0))
		{
			*uParam1 = 0x00000001;
			*uParam0 = iVar1;
		}
	}
	return (((unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()) || (unk_0x75B806D0A76CB67D(iVar0) == 0x00000003 && !unk_0xE934758D273C899A(iVar0))) || (unk_0x75B806D0A76CB67D(iVar0) == 0xFFFFFFFF && !unk_0xE934758D273C899A(iVar0))) || (((unk_0xC844350D5D58C99A(*iParam2) && !unk_0xEB6A8945D1AC98A1(iVar0)) && !unk_0x437347B10A200C4B(*iParam2, 0x00000000)) && unk_0x64E716CF8C283BF5(iVar0, *iParam2)));
}

float func_347(int iParam0)
{
	if (func_456(iParam0))
	{
		if (func_348(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_43(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return 0f;
}

bool func_348(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000002);
}

void func_349(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x362FD95670BFA2A6(vParam0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_350(vParam0, &fVar2, &fVar3);
	if (fVar2 != 0f && fVar3 != 0f)
	{
		if (fVar2 >= 0.7999f)
		{
			fVar4 = 90f;
		}
		else if (fVar2 <= 0.2f)
		{
			fVar4 = -90f;
		}
		else if (fVar3 <= 0.2f)
		{
			fVar4 = 0f;
		}
		else if (fVar3 >= 0.7999f)
		{
			fVar4 = 180f;
		}
		unk_0x8A462DAA7D1D9008(&iVar8, &iVar9);
		fVar7 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iVar9));
		if (fVar4 == 0f || fVar4 == 180f)
		{
			fVar5 = ((0.05f * 16f) / 9f);
			fVar6 = (0.05f / fVar7);
		}
		else
		{
			fVar5 = 0.05f;
			fVar6 = (0.05f * ((16f / 9f) / fVar7));
		}
		if ((fVar4 != *uParam3 || (*uParam1 == 0f && *uParam2 == 0f)) || (unk_0x755FF954DAE327E1((fVar2 - *uParam1)) < 0.04f && unk_0x755FF954DAE327E1((fVar3 - *uParam2)) < 0.04f))
		{
			unk_0x539E86AE011A8B38("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 0x000000F0, 0x000000C8, 0x00000050, 0x000000AA, 0x00000000);
		}
		*uParam3 = fVar4;
	}
	*uParam1 = fVar2;
	*uParam2 = fVar3;
}

void func_350(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	if (!func_311(vParam0, 0f, 0f, 0f, 0x00000000))
	{
		unk_0xE464FC538618BC3D(vParam0, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		vVar2.x = (fVar0 - 0.5f);
	}
	else
	{
		vVar2.x = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		vVar2.y = (fVar1 - 0.5f);
	}
	else
	{
		vVar2.y = (0.5f - fVar1);
	}
	vVar2.z = 0f;
	func_469(vVar2);
	vVar2.x = (vVar2.x * 0.75f);
	vVar2.y = (vVar2.y * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + vVar2.x);
	}
	else
	{
		fVar0 = (0.5f - vVar2.x);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + vVar2.y);
	}
	else
	{
		fVar1 = (0.5f - vVar2.y);
	}
	*uParam1 = fVar0;
	*uParam2 = fVar1;
}

int func_351(vector3 vParam0, int iParam1, int iParam2)
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

void func_352(int iParam0)
{
	if (func_456(iParam0) && func_455(iParam0) > 7.5f)
	{
		func_452(iParam0);
	}
}

int func_353(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
	{
		*uParam2 = 0x00000001;
		return 0x00000001;
	}
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
		if (unk_0xE934758D273C899A(iVar0))
		{
			return 0x00000000;
		}
		else if (!unk_0xE82754C349C7B581(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), &fVar3, 0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		else if (vVar1.z >= (fVar3 + 1.5f))
		{
			return 0x00000000;
		}
	}
	if (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	else if (!unk_0xE82754C349C7B581(vVar1, &fVar3, 0x00000000, 0x00000000))
	{
		return 0x00000000;
	}
	else if (vVar1.z >= (fVar3 + 1.5f))
	{
		return 0x00000000;
	}
	vVar2 = { func_363(uParam0, 0x00000000) };
	if (vVar1.z < (vVar2.z + 5f))
	{
		*uParam2 = 0x00000001;
		return 0x00000001;
	}
	if (iParam1 == 0x00000005)
	{
		if (vVar1.z < 288f)
		{
			*uParam2 = 0x00000001;
			return 0x00000001;
		}
	}
	else if (iParam1 == 0x00000004)
	{
		if (vVar1.z < 305f)
		{
			*uParam2 = 0x00000001;
			return 0x00000001;
		}
	}
	else if (iParam1 == 0x00000008)
	{
		if (vVar1.z < 227f)
		{
			*uParam2 = 0x00000001;
			return 0x00000001;
		}
	}
	else if (iParam1 == 0x00000006 || iParam1 == 0x0000000C)
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), func_467(iParam1)) > 3600f)
		{
			*uParam2 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_354()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_355(var uParam0)
{
	return uParam0->f_54;
}

void func_356(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		return;
	}
	vVar2 = { unk_0x68F4C0EC296D3901(*iParam0, 0x00000001) };
	fVar4 = unk_0xD890711CFD5AF100(*iParam0);
	iVar1 = unk_0xA30B8362589C124A(*iParam0, 0xFFFFFFFF, 0x00000000);
	unk_0x1E9649458B15960F(*iParam0, 0x00000000);
	unk_0xDD353D0E9C789D0E(&iVar0);
	if (!bParam1)
	{
		unk_0x132B85BCE016BCA0(0x00000000, *iParam0, unk_0x68F4C0EC296D3901(*iParam0, 0x00000001), 0x00000004, 0f, 0x000C0025, 2f, 0f, 0x00000001);
	}
	unk_0x132B85BCE016BCA0(0x00000000, *iParam0, vVar2 + Vector(5f, 5f, 5f) * unk_0x08D89CE2E20AE305(*iParam0) + Vector(20f, 0f, 0f), 0x00000004, (0.3f * fVar4), 0x000C0025, 5f, 10f, 0x00000001);
	vVar3 = { Vector(1000f, 1000f, 1000f) * unk_0x08D89CE2E20AE305(*iParam0) };
	vVar3.z = 200f;
	unk_0x132B85BCE016BCA0(0x00000000, *iParam0, vVar2 + vVar3, 0x00000004, fVar4, 0x00040000, 15f, 10f, 0x00000001);
	unk_0x75ABDC5F81978924(iVar0);
	unk_0xA3BF0AA5A2608191(iVar1);
	unk_0x78ADC381772E3D54(iVar1, iVar0);
	unk_0xF82EA857DA10E0CD(&iVar0);
}

void func_357(int iParam0, int iParam1)
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

void func_358(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_412(0x00000000, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x8BCB70EB440DED83(0x00000001);
	}
	func_552(0x00000017, 0x00000000);
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("ruffian"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("blazer"):
		case joaat("blazer2"):
		case joaat("cruiser"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("pcj"):
		case joaat("policeb"):
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_360(var uParam0)
{
	return *uParam0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("freight"):
		case 0x33C9E158:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_362(var uParam0)
{
	return uParam0->f_1;
}

Vector3 func_363(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000000C)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_C[iParam1 /*3*/];
}

Vector3 func_364(var uParam0)
{
	return uParam0->f_6;
}

void func_365(int iParam0)
{
	func_42(iParam0, 0f);
}

int func_366(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_367(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_368(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

void func_369()
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

void func_370()
{
	struct<68> Var0;
	
	Global_1C0005 = 0x00000000;
	Global_1C0005.f_1 = 0x00000000;
	Global_1C0005.f_2 = 0x00000000;
	Global_1C0005.f_3 = 0x00000000;
	Global_1C0005.f_4 = 0x00000000;
	func_371(&(Global_1C0005.f_49));
	func_371(&(Global_1C0005.f_8E));
	func_371(&(Global_1C0005.f_D3));
	func_371(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_131(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = 0xFFFFFFFF;
	Global_1C017C = 0x00000000;
	Global_1C017D = 0x00000000;
	Var0.f_2.f_1 = 0x00000004;
	Global_1C0005.f_5 = { Var0 };
}

void func_371(var uParam0)
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

bool func_372(var uParam0)
{
	return uParam0->f_53;
}

int func_373(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, var uParam11, var uParam12)
{
	if (unk_0xFA06B985B30FB0FC(func_427(uParam3, 0x00000001)))
	{
		func_365(iParam5);
	}
	if (!*uParam10)
	{
		if (func_456(iParam7) && func_455(iParam7) >= func_394(uParam0))
		{
			func_356(iParam2, 0x00000000);
			func_452(iParam7);
			*uParam10 = 0x00000001;
		}
	}
	else if (unk_0xDF1306B443CD3D15(*iParam2, 0x00000000))
	{
		unk_0xFBFE633A7F731A67(*iParam2, 0.7f);
	}
	if (func_456(iParam5) && func_455(iParam5) > 0.2f)
	{
		func_452(iParam5);
		func_452(iParam6);
		return 0x00000001;
	}
	if (!func_456(iParam6))
	{
		func_480(iParam6);
	}
	else if ((uParam12 && unk_0x0F1CCD77290EE12F()) || (func_455(iParam6) > 0.5f && func_327(uParam4, 0x00000002)))
	{
		*uParam11 = 0x00000001;
		func_452(iParam5);
		func_452(iParam6);
		return 0x00000001;
	}
	unk_0x3584F71E5CA29322(0x00000002);
	if (func_456(iParam8))
	{
		if (func_460(iParam1) != 0x00000000)
		{
			func_452(iParam8);
		}
		else if (func_455(iParam8) > func_420(iParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0x00000000:
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000001:
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, 0xFFFFFFFF, 0x00000030, 0.681f, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000002:
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "playidles_cold", "blow_hands", 8f, -1.4f, 0xFFFFFFFF, 0x00000030, 0.537f, 0x00000000, 0x00000000, 0x00000000);
					break;
			}
			func_452(iParam8);
		}
	}
	if (unk_0x0F1CCD77290EE12F())
	{
		func_374();
	}
	else
	{
		func_365(iParam6);
	}
	return 0x00000000;
}

void func_374()
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_1B416.f_4A12;
	func_375(Var0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar1);
}

void func_375(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (func_389(0x00000001, Param0))
			{
				if (Global_12C4F == 0x00000003)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_12C4E = unk_0x1C0640BA9A7327B3();
					vLocal_22 = { unk_0x96792D8393A779D7(0x0000000F) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + unk_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_389(0x00000000, Param0))
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
				iVar11 = func_422();
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
				Var4 = { func_378(Global_12C4D, Global_12C4F, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0x75BBE9A62B73769F(fVar5, fVar6, 0f, 0.01f);
				unk_0xD3539A877EC25E86(0.67f, 0.67f);
				if (!unk_0x0D71AFA59EF5104F() && !unk_0x0DF32524CC9DB3EB())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_377(&Var4) > fLocal_24)
					{
						if (unk_0x2F1FB0453B36C270(0x0000000F))
						{
							unk_0x744B56EE9DE7B57F(0x0000000F, vLocal_22.x, (vLocal_22.y + fLocal_23));
							Global_12C51 = 0x00000001;
						}
					}
				}
				unk_0x070005E852D4C0E9(&Var4);
				unk_0xE0026608C37C7C41(fVar5, fVar6, 0x00000000);
				unk_0xD59EF13BB60323B9();
				if (Global_12C50 == 0x00000001)
				{
					func_376();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_376();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_376()
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

float func_377(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

struct<2> func_378(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 0x00000001:
			Var0 = { func_388(iParam0) };
			break;
		
		case 0x00000007:
			Var0 = { func_386(iParam0) };
			break;
		
		case 0x00000003:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0x00000000:
					Var0 = { func_385(iParam2) };
					break;
				
				case 0x00000008:
					Var0 = { func_384(iParam2) };
					break;
				
				case 0x00000007:
					Var0 = { func_383(iParam2) };
					break;
				
				case 0x0000000A:
					Var0 = { func_382(iParam2) };
					break;
				
				case 0x00000005:
					Var0 = { func_381(iParam2) };
					break;
				
				case 0x00000004:
					Var0 = { func_380(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_379(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_379(int iParam0)
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

struct<2> func_380(int iParam0)
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

struct<2> func_381(int iParam0)
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

struct<2> func_382(int iParam0)
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

struct<2> func_383(int iParam0)
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

struct<2> func_384(int iParam0)
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

struct<2> func_385(int iParam0)
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

struct<2> func_386(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_387(iParam0) };
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

struct<2> func_387(int iParam0)
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

struct<2> func_388(int iParam0)
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

int func_389(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_391(0x00000000) || Global_12C5B) || Global_12C50 == 0x00000001) || !unk_0x0F1CCD77290EE12F())
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
			if ((unk_0x22A8E52414415B76() || func_32(0x00000000)) || func_390(0x00000001))
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

bool func_390(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_391(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_392(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_392(int iParam0)
{
	return func_393(iParam0, Global_A1D7);
}

int func_393(int iParam0, int iParam1)
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

float func_394(var uParam0)
{
	return uParam0->f_50;
}

int func_395(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_396(sParam2, iParam3, 0x00000000);
}

int func_396(char* sParam0, int iParam1, bool bParam2)
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
					func_408();
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
		if (func_407(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_406();
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
				func_405();
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
				if (func_404())
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
			if (func_28())
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
			func_403();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_402();
		func_397();
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
		func_408();
	}
	return 0x00000000;
}

void func_397()
{
	if (!func_398())
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

int func_398()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_401())
	{
		return 0x00000000;
	}
	if (func_399(unk_0xD803B885F5E47A62()))
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

bool func_399(int iParam0)
{
	return func_400(iParam0, 0x00000014);
}

bool func_400(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_401()
{
	return 0xFFFFFFFF;
}

void func_402()
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

void func_403()
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

int func_404()
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

void func_405()
{
	if (func_246(0x0000000E))
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
		Global_4C1E = func_422();
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

void func_406()
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

bool func_407(int iParam0, int iParam1)
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

void func_408()
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

void func_409(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

var func_410(var uParam0)
{
	return uParam0->f_4;
}

void func_411(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = func_427(uParam0, 0x00000000);
	if (unk_0xC844350D5D58C99A(iParam5) && !unk_0x437347B10A200C4B(iParam5, 0x00000000))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(uParam1))), SYSTEM::SIN((-97.4239f + func_458(uParam1)))) };
		*uParam3 = { unk_0x68E4ADDDDCD7BDDE(iParam5, 1.12046f, -0.317773f, 1.3385f) };
		vVar1 = { func_457(*uParam4, uParam2->f_2) };
		vVar3 = { *uParam3 + vVar1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_458(uParam1)) };
		*uParam7 = 26f;
		vVar2 = { *uParam6 };
		vVar2.z = (vVar2.z + uParam2->f_2);
		unk_0x608A456FDD8A83D8(iVar0, vVar3);
		unk_0x5F3CBA6EB9341C90(iVar0, vVar2, 0x00000002);
		unk_0x5818C8D5303DCCF8(iVar0, *uParam7);
		unk_0xDC3CC6D1845B0567(iVar0, func_325());
	}
	unk_0xE3BB8E05FCEB3FBE(iVar0, 0x00000001);
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
}

void func_412(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_419(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_28())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_418(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_419(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_418(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_416(unk_0xD803B885F5E47A62())) && !func_414(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_413()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_416(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_413()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_414(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_415(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_415(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_224();
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

int func_416(int iParam0)
{
	if (func_414(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_417())
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

bool func_417()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_418(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_419(int iParam0)
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

float func_420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 6f;
				
				case 0x00000001:
					return 7.3f;
				
				case 0x00000002:
					return 6.8f;
				
				default:
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000000:
					return 4.2f;
				
				case 0x00000001:
					return 5.5f;
				
				case 0x00000002:
					return 5f;
				
				default:
			}
			break;
		
		case 0x00000005:
			return 0f;
		
		case 0x00000006:
			return 0f;
		
		case 0x0000000C:
			return 0f;
	}
	return 0f;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000005:
			return 0x00000BB8;
		
		case 0x00000006:
			return 0x000005DC;
		
		case 0x0000000C:
			return 0x000007D0;
		
		default:
	}
	return 0x00000000;
}

int func_422()
{
	func_423();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_423()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_37(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_36(unk_0x16F2683693E537C9());
			if (func_39(iVar0) && (!func_246(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_39(Global_1B416.f_936.f_21B.f_10E1))
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

float func_424(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_425(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000005:
			return -120.0078f, -976.4348f, 295.2008f;
		
		case 0x00000006:
			return -1242.709f, 4539.658f, 185.6828f;
		
		case 0x0000000C:
			return -768.0306f, 4330.409f, 147.6768f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_427(var uParam0, int iParam1)
{
	if (iParam1 >= 0x00000002)
	{
		return 0x00000000;
	}
	return (*uParam0)[iParam1];
}

void func_428(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_27(0x00000000);
	func_412(0x00000001, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_552(0x00000017, 0x00000001);
}

void func_429(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return;
	}
	if (func_425(func_451(uParam0)))
	{
	}
	else
	{
		unk_0xE342F209E49C5314(func_451(uParam0), func_450(uParam0), 0x00000000, 0x00000001);
	}
	iVar3 = 0x00000000;
	while (iVar3 < 0x0000000C)
	{
		if (!func_425(func_363(uParam0, iVar3)))
		{
			*uParam2 = iVar3 + 1;
		}
		else
		{
			iVar3 = 0x000F423F;
		}
		iVar3++;
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
	unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000000);
	unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0x00000001, 0x00000000, 0x00000000);
	unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
	if (iParam13 == 0x00000004)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000001) };
				if (((((vVar2.z > 320f && vVar2.z < 340f) && vVar2.x > -103f) && vVar2.x < -45f) && vVar2.y > -850f) && vVar2.y < -787f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -89.794f, -742.6727f, 43.7472f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iVar1, -109.33f);
					unk_0x05CA0E7946B27A19(iVar1, 0x00000001);
				}
			}
		}
	}
	else if (iParam13 == 0x00000003)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000001) };
				if (((((vVar2.z > 689.4f && vVar2.z < 701.8875f) && vVar2.x > 404.6f) && vVar2.x < 413.4f) && vVar2.y > 5700.6f) && vVar2.y < 5711.9f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -215.2838f, 6543.57f, 10.0967f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iVar1, 145.5732f);
					unk_0x05CA0E7946B27A19(iVar1, 0x00000001);
				}
			}
		}
	}
	else if (iParam13 == 0x00000005)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000001) };
				if (((((vVar2.z > 294.5f && vVar2.z < 298.9f) && vVar2.x > -121.3f) && vVar2.x < -116.5f) && vVar2.y > -978.1f) && vVar2.y < -973.2f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -118.1021f, -947.3954f, 27.3296f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iVar1, 341.9614f);
					unk_0x05CA0E7946B27A19(iVar1, 0x00000001);
				}
			}
		}
	}
	else if (iParam13 == 0x00000006)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000001) };
				if (((((vVar2.z > 182.7f && vVar2.z < 202.7f) && vVar2.x > -1252.7f) && vVar2.x < -1227.9f) && vVar2.y > 4525.8f) && vVar2.y < 4549.3f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -1237.022f, 4559.404f, 185.9418f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iVar1, 172.2123f);
					unk_0x05CA0E7946B27A19(iVar1, 0x00000001);
				}
			}
		}
	}
	else if (iParam13 == 0x00000008)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000001) };
				if (((((vVar2.z > 230f && vVar2.z < 244.5f) && vVar2.x > -809.6f) && vVar2.x < -747.7f) && vVar2.y > 310.6f) && vVar2.y < 346.6f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -1351.805f, 133.95f, 55.2558f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iVar1, 0.8373f);
					unk_0x05CA0E7946B27A19(iVar1, 0x00000001);
				}
			}
		}
	}
	else if (iParam13 == 0x0000000C)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
			{
				unk_0xA954465BA6FDEFE2(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000001) };
				if (((((vVar2.z > 143.6f && vVar2.z < 154.5f) && vVar2.x > -777f) && vVar2.x < -758.9f) && vVar2.y > 4328.3f) && vVar2.y < 4344f)
				{
					unk_0xA47B46945FF6DE74(iVar1, -765.8775f, 4294.807f, 145.6581f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iVar1, 349.2306f);
					unk_0x05CA0E7946B27A19(iVar1, 0x00000001);
				}
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000000);
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0x00000001, 0x00000000, 0x00000000);
	}
	iVar0 = func_460(iParam13);
	if (iVar0 != 0x00000000)
	{
		if (!unk_0x437347B10A200C4B(*iParam3, 0x00000000) || unk_0xC844350D5D58C99A(*iParam3))
		{
			unk_0x51B954DAB1BCAF73(*iParam3);
			unk_0xA47B46945FF6DE74(*iParam3, func_467(iParam13), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(*iParam3, func_458(uParam0));
		}
		else
		{
			*iParam3 = unk_0x122AAB0B1D6F55AD(iVar0, func_467(iParam13), func_458(uParam0), 0x00000001, 0x00000001, 0x00000000);
		}
		if (func_459(iVar0))
		{
			if (!unk_0xC844350D5D58C99A(*iParam8) || unk_0x437347B10A200C4B(*iParam8, 0x00000000))
			{
				*iParam8 = unk_0x852A19533F896693(*iParam3, 0x0000001A, iParam10, 0xFFFFFFFF, 0x00000001, 0x00000001);
				unk_0xCC095276B3DD380E(*iParam8, 0x00000000);
				func_449(*iParam8, iParam13);
				unk_0xE121AE1BBF90E186(*iParam8, 0x00000001);
			}
			unk_0x297734EBF6EB6285("SKY_DIVING_SHAKE", 0.15f);
			func_447(uParam1, *iParam8, func_448(iParam13));
			func_444(uParam1, unk_0x16F2683693E537C9(), func_446());
			unk_0xFBFE633A7F731A67(*iParam3, 0.7f);
			unk_0x1E9649458B15960F(*iParam3, 0x00000001);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam3, 0x00000000))
				{
					unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), *iParam3, 0x00000002);
				}
				else if (func_443(unk_0x16F2683693E537C9(), *iParam3) == 0x00000001)
				{
					unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), *iParam3, 0x00000002);
				}
			}
			if (!unk_0x437347B10A200C4B(*iParam3, 0x00000000))
			{
				*iParam14 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
				unk_0x6BE2EAE992FD7C26(*iParam14, *iParam3, unk_0xF653B9B22DA806A9(*iParam3, "Chassis"));
				unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 0x00000041, 0x00000000, 0x447A0000, 0x00000000);
				unk_0xC90224D9E95E5E3A(*iParam14, 0x00000001);
			}
			func_480(iParam12);
		}
		else if (func_359(iVar0))
		{
			func_444(uParam1, unk_0x16F2683693E537C9(), func_446());
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
			unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), *iParam3, 0xFFFFFFFF);
			unk_0x83F619A03CDDE284(unk_0x16F2683693E537C9(), 0x00000000, 0x00001000, 0xFFFFFFFF);
			func_480(iParam12);
		}
	}
	else
	{
		func_444(uParam1, unk_0x16F2683693E537C9(), func_446());
		if (func_372(uParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x7ED67A9BE53DAC95(unk_0x16F2683693E537C9())))
			{
				unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 0x00000001);
			}
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_467(iParam13), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_458(uParam0));
			unk_0x93D47DFD0AE94949(unk_0x16F2683693E537C9(), 0xFFFFFFFF);
			if (unk_0xC844350D5D58C99A(*iParam3))
			{
				iVar4 = 0xFFFFFFFF;
				while (iVar4 <= (unk_0xD6DF381716822EFE(*iParam3) - 0x00000001))
				{
					if (!unk_0xBBA8A868118C90ED(*iParam3, iVar4, 0x00000000))
					{
						iVar5 = unk_0xA30B8362589C124A(*iParam3, iVar4, 0x00000000);
						unk_0xEBA53F35D0085654(&iVar5);
					}
					iVar4++;
				}
				unk_0xA954465BA6FDEFE2(iParam3);
			}
		}
	}
	unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000024, 0x00000001);
	if (func_525(uParam0) != 0x00000000)
	{
		func_439(uParam0, iParam5, iParam13);
	}
	if (func_438(uParam0) != 0x00000000)
	{
		func_435(uParam0, iParam7);
	}
	iVar0 = func_362(uParam0);
	if (func_361(iVar0))
	{
		unk_0x52D3C9744D7CF20D();
		unk_0xF48790410026514E(0x00000000);
	}
	else if (iVar0 != 0x00000000)
	{
		unk_0x536F1BE96C726C4B(func_363(uParam0, 0x00000000), 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		if (unk_0xC844350D5D58C99A(*iParam4) && unk_0x437347B10A200C4B(*iParam4, 0x00000000))
		{
			unk_0xA954465BA6FDEFE2(iParam4);
		}
		if (!unk_0xC844350D5D58C99A(*iParam4))
		{
			*iParam4 = unk_0x122AAB0B1D6F55AD(iVar0, func_363(uParam0, 0x00000000), func_434(uParam0), 0x00000001, 0x00000001, 0x00000000);
			if (func_433(func_362(uParam0)))
			{
				unk_0xC6A6B4DDD6DC073A(*iParam4, 0x0000000B);
			}
			else if (func_432(func_362(uParam0)))
			{
				unk_0xD3421E391490133B(*iParam4, 0x00000001, 0x00000001);
				unk_0xC6A6B4DDD6DC073A(*iParam4, 0x00000006);
				unk_0x0882E3DC0C991680(*iParam4, 0x00000002);
				unk_0x29AA598B93E45D37(200f);
				unk_0x25BD67336EA4AECE(*iParam4, 0x000003E8);
			}
			unk_0xE8832A9E16A57A1F(*iParam4, 0x00000001, 0x00000001);
		}
		else if (!unk_0x437347B10A200C4B(*iParam4, 0x00000000))
		{
			unk_0x51B954DAB1BCAF73(*iParam4);
			unk_0xA47B46945FF6DE74(*iParam4, func_363(uParam0, 0x00000000), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(*iParam4, func_434(uParam0));
		}
		if (func_433(func_362(uParam0)))
		{
			if (unk_0xC844350D5D58C99A(*iParam6) && unk_0x437347B10A200C4B(*iParam6, 0x00000000))
			{
				unk_0xA954465BA6FDEFE2(iParam6);
			}
			if (!unk_0xC844350D5D58C99A(*iParam6))
			{
				*iParam6 = unk_0x122AAB0B1D6F55AD(joaat("trflat"), unk_0x68E4ADDDDCD7BDDE(*iParam4, 0f, -10f, 0f), func_434(uParam0), 0x00000001, 0x00000001, 0x00000000);
				unk_0xE8832A9E16A57A1F(*iParam6, 0x00000001, 0x00000001);
				unk_0x25BD67336EA4AECE(*iParam6, 0x000007D0);
			}
			else if (!unk_0x437347B10A200C4B(*iParam6, 0x00000000))
			{
				unk_0x51B954DAB1BCAF73(*iParam6);
			}
			if (!unk_0x6CFEA4CFD9C496C8(*iParam4))
			{
				unk_0xC74DAD25331A5425(*iParam4, *iParam6, 0x3F800000);
			}
		}
		if (unk_0xC844350D5D58C99A(*iParam9) && unk_0x437347B10A200C4B(*iParam9, 0x00000000))
		{
			unk_0xEBA53F35D0085654(iParam9);
		}
		if (!unk_0xC844350D5D58C99A(*iParam9))
		{
			*iParam9 = unk_0x852A19533F896693(*iParam4, 0x0000001A, iParam11, 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x73270B3C9CC833FD(*iParam9, 0x00000001, 0x00000000);
			unk_0x11AD11297DC58CC7(*iParam9, 0x00000001);
			func_431(*iParam9, iParam13);
			if (iParam13 == 0x00000000)
			{
				func_430(uParam1, 0x00000002, *iParam9, "EX3MERC1", 0x00000000, 0x00000001);
			}
		}
		else
		{
			unk_0xD458AC1C1D29C3B4(*iParam9, unk_0xC08489BCA49ECCA8(*iParam9), 0x00000000);
			unk_0x759A5E1D0F0A31A1(*iParam9);
			unk_0xA3BF0AA5A2608191(*iParam9);
			if (!unk_0xC42A92762C58E1B9(*iParam9, *iParam4, 0x00000000) || unk_0xA30B8362589C124A(*iParam4, 0xFFFFFFFF, 0x00000000) != *iParam9)
			{
				if (unk_0x405E212DDE472467(*iParam9, 0x00000001))
				{
					unk_0x975C58E0FC4955A9(*iParam9, 0x00000001);
				}
				unk_0xF821F915BC24D246(*iParam9, *iParam4, 0xFFFFFFFF);
			}
		}
		unk_0xE8832A9E16A57A1F(*iParam9, 0x00000001, 0x00000001);
	}
	if (func_422() == 0x00000000)
	{
		unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000009, 0x00000005, 0x00000000, 0x00000000);
	}
	else if (func_422() == 0x00000001)
	{
		unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000008, 0x00000001, 0x00000000, 0x00000000);
	}
	else if (func_422() == 0x00000002)
	{
		unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000008, 0x00000003, 0x00000000, 0x00000000);
	}
}

void func_430(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_431(int iParam0, int iParam1)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000002, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(iParam0, 0x00000000);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000002, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000001, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000001, 0x00000001, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(iParam0, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(iParam0, 0x00000001);
			break;
		
		case 0x00000007:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000008, 0x00000000, 0x00000001, 0x00000000);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			break;
	}
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("dinghy"):
		case joaat("jetmax"):
		case joaat("marquis"):
		case joaat("squalo"):
		case joaat("suntrap"):
		case joaat("tropic"):
		case joaat("predator"):
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hauler"):
		case joaat("biff"):
		case joaat("packer"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("phantom"):
		case joaat("pounder"):
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

var func_434(var uParam0)
{
	return uParam0->f_4D;
}

void func_435(var uParam0, int iParam1)
{
	if (!unk_0xC844350D5D58C99A(*iParam1))
	{
		*iParam1 = unk_0x122AAB0B1D6F55AD(func_438(uParam0), func_437(uParam0), func_436(uParam0), 0x00000001, 0x00000001, 0x00000000);
	}
	else if (unk_0x437347B10A200C4B(*iParam1, 0x00000000))
	{
		unk_0xA954465BA6FDEFE2(iParam1);
		*iParam1 = unk_0x122AAB0B1D6F55AD(func_438(uParam0), func_437(uParam0), func_436(uParam0), 0x00000001, 0x00000001, 0x00000000);
	}
	else
	{
		unk_0x51B954DAB1BCAF73(*iParam1);
	}
}

var func_436(var uParam0)
{
	return uParam0->f_4F;
}

Vector3 func_437(var uParam0)
{
	return uParam0->f_9;
}

int func_438(var uParam0)
{
	return uParam0->f_3;
}

void func_439(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(*uParam1))
	{
		if (!func_320(*uParam1) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000)))
		{
			iVar1 = unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000);
		}
		iVar2 = *uParam1;
	}
	iVar0 = func_442(iParam2);
	if (iVar0 != 0x00000000)
	{
		if (!unk_0xC844350D5D58C99A(iVar2))
		{
			iVar2 = unk_0x122AAB0B1D6F55AD(func_525(uParam0), func_441(uParam0), func_440(uParam0), 0x00000001, 0x00000001, 0x00000000);
		}
		else
		{
			unk_0xA47B46945FF6DE74(iVar2, func_441(uParam0), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(iVar2, func_440(uParam0));
		}
		unk_0x1E9649458B15960F(iVar2, 0x00000001);
		if (!unk_0xC844350D5D58C99A(iVar1))
		{
			iVar1 = unk_0x852A19533F896693(iVar2, 0x0000001A, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000001);
		}
		unk_0xCC095276B3DD380E(iVar1, 0x00000000);
		func_449(iVar1, iParam2);
	}
	else
	{
		if (!unk_0xC844350D5D58C99A(iVar2))
		{
			iVar2 = unk_0x122AAB0B1D6F55AD(func_525(uParam0), func_441(uParam0), func_440(uParam0), 0x00000001, 0x00000001, 0x00000000);
		}
		else
		{
			unk_0xA47B46945FF6DE74(iVar2, func_441(uParam0), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(iVar2, func_440(uParam0));
		}
		unk_0x1E9649458B15960F(iVar2, 0x00000001);
		if (!unk_0xC844350D5D58C99A(iVar1))
		{
			iVar1 = unk_0x852A19533F896693(iVar2, 0x0000001A, joaat("s_m_y_pilot_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
		}
		unk_0xCC095276B3DD380E(iVar1, 0x00000000);
		unk_0x9A28E8CB86CD4694(iVar1, 0x00000000, 0x00000002, 0x00000000, 0x00000000);
		unk_0x9A28E8CB86CD4694(iVar1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0x56FDC9ADE35F7DB0(iVar2, 0x00000001, 0x00000001, 0x00000000);
	unk_0xFBFE633A7F731A67(iVar2, 0.7f);
	unk_0xA3BF0AA5A2608191(iVar1);
	unk_0x93D47DFD0AE94949(iVar1, 0xFFFFFFFF);
	*uParam1 = iVar2;
}

var func_440(var uParam0)
{
	return uParam0->f_4E;
}

Vector3 func_441(var uParam0)
{
	return uParam0->f_46;
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return joaat("s_m_y_pilot_01");
		
		case 0x00000001:
			return joaat("s_m_y_pilot_01");
		
		case 0x00000002:
			return joaat("s_m_y_pilot_01");
		
		case 0x00000003:
			return joaat("s_m_y_pilot_01");
		
		case 0x00000007:
			return joaat("a_m_y_hippy_01");
		
		case 0x00000009:
			return joaat("s_m_y_pilot_01");
		
		case 0x0000000A:
			return joaat("s_m_y_pilot_01");
		
		case 0x0000000B:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0x00000000;
}

int func_443(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, 0xFFFFFFFF, 0x00000000) == iParam0)
			{
				return 0xFFFFFFFF;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000000, 0x00000000) == iParam0)
			{
				return 0x00000000;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000001, 0x00000000) == iParam0)
			{
				return 0x00000001;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000002, 0x00000000) == iParam0)
			{
				return 0x00000002;
			}
		}
	}
	return 0xFFFFFFFE;
}

void func_444(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_445();
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		func_430(uParam0, iVar0, iParam1, sParam2, 0x00000001, 0x00000001);
	}
	else
	{
		func_430(uParam0, iVar0, 0x00000000, sParam2, 0x00000000, 0x00000001);
	}
}

int func_445()
{
	if (func_422() == 0x00000001)
	{
		return 0x00000002;
	}
	if (func_422() == 0x00000002)
	{
		return 0x00000003;
	}
	return 0x00000001;
}

char* func_446()
{
	int iVar0;
	
	iVar0 = func_36(unk_0x16F2683693E537C9());
	switch (iVar0)
	{
		case 0x00000000:
			return "MICHAEL";
		
		case 0x00000002:
			return "TREVOR";
		
		case 0x00000001:
			return "FRANKLIN";
		
		default:
	}
	return "";
}

void func_447(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		func_430(uParam0, iVar0, iParam1, sParam2, 0x00000001, 0x00000001);
	}
	else
	{
		func_430(uParam0, iVar0, 0x00000000, sParam2, 0x00000000, 0x00000001);
	}
}

char* func_448(int iParam0)
{
	return "EXT1HELIPILOT";
}

void func_449(int iParam0, int iParam1)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000007:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000B:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000002, 0x00000000);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000000, 0x00000001, 0x00000002, 0x00000000);
			unk_0x9A28E8CB86CD4694(iParam0, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			break;
	}
}

Vector3 func_450(var uParam0)
{
	return uParam0->f_43;
}

Vector3 func_451(var uParam0)
{
	return uParam0->f_40;
}

void func_452(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

int func_453(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	if (!func_459(func_460(iParam3)))
	{
		unk_0xA0D09682534C2176(func_467(iParam3));
	}
	if (func_456(iParam1))
	{
		if (func_455(iParam1) >= 5f)
		{
			return 0x00000001;
		}
	}
	else
	{
		func_336(iParam1, 0f);
	}
	if (unk_0x757EF87A33649210())
	{
		if (!unk_0x68367101660E33F0())
		{
			return 0x00000000;
		}
	}
	if (func_459(func_460(iParam3)))
	{
		if (!unk_0xB4AE0788C1587752("veh@helicopter@rps@base"))
		{
			return 0x00000000;
		}
	}
	if (func_420(iParam3, 0x00000000) > 0f)
	{
		switch (iParam4)
		{
			case 0x00000000:
				StringCopy(&cVar0, "amb@world_human_hiker_standing@male@idle_a", 64);
				break;
			
			case 0x00000001:
				StringCopy(&cVar0, "amb@world_human_muscle_flex@arms_at_side@base", 64);
				break;
			
			case 0x00000002:
				StringCopy(&cVar0, "playidles_cold", 64);
				break;
		}
		if (!unk_0xB4AE0788C1587752(&cVar0))
		{
			return 0x00000000;
		}
	}
	if (func_454(uParam0))
	{
		if (unk_0x83D8570832F172A7(*uParam2))
		{
			if (unk_0x67C1D9E5B91B2E37(0x00000002))
			{
				if (unk_0x27117E2CDD4D67C3("basejumping"))
				{
					if (((unk_0xB4AE0788C1587752("oddjobs@basejump@") && unk_0xB4AE0788C1587752("skydive@freefall")) && unk_0xB4AE0788C1587752("skydive@parachute@chute")) && unk_0xB4AE0788C1587752("skydive@parachute@"))
					{
						if (unk_0x3FC59DD18F049D6E(0x00000000))
						{
							if (!bParam5 || unk_0x757EF87A33649210())
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

int func_454(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

float func_455(int iParam0)
{
	if (func_456(iParam0))
	{
		if (func_348(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_43(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_456(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001);
}

Vector3 func_457(vector3 vParam0, float fParam1)
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

float func_458(var uParam0)
{
	return uParam0->f_4C;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case joaat("annihilator"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("skylift"):
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			return joaat("maverick");
			break;
		
		case 0x00000004:
			return joaat("bati");
			break;
	}
	return 0x00000000;
}

void func_461(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	func_26(0x00000001);
	unk_0xC0FB48F966BB7D11(0x00000000);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x8B66ED74C2DC2E98(unk_0x16F2683693E537C9(), 2f);
	}
	switch (iParam1)
	{
		case 0x00000000:
			unk_0x7D6CA5F52B3748BF(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			func_466(0x00000001, 0x00000001);
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000C:
			break;
	}
	if (unk_0x757EF87A33649210())
	{
		unk_0x536F1BE96C726C4B(func_467(iParam1), 5000f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0xD7992BEF7A9D109E("BJUMP", 0x00000002);
	iVar0 = func_460(iParam1);
	if (iVar0 != 0x00000000)
	{
		if (func_459(iVar0))
		{
			unk_0x3F423BF5B8125A50("veh@helicopter@rps@base");
			*uParam3 = func_442(iParam1);
			func_464(uParam2, *uParam3);
		}
		func_464(uParam2, iVar0);
	}
	if (func_525(uParam0) != 0x00000000)
	{
		func_464(uParam2, func_525(uParam0));
		if (func_442(iParam1) != 0x00000000)
		{
			func_464(uParam2, func_442(iParam1));
		}
		else
		{
			func_464(uParam2, joaat("s_m_y_pilot_01"));
		}
	}
	iVar1 = func_362(uParam0);
	if (iVar1 != 0x00000000)
	{
		*uParam4 = func_463(iParam1);
		func_464(uParam2, *uParam4);
		func_464(uParam2, iVar1);
		func_464(uParam2, joaat("trflat"));
	}
	if (func_361(iVar1))
	{
		func_464(uParam2, joaat("freight"));
		func_464(uParam2, joaat("freightcar"));
		func_464(uParam2, joaat("freightgrain"));
		func_464(uParam2, joaat("freightcont1"));
		func_464(uParam2, joaat("freightcont2"));
		func_464(uParam2, joaat("tankercar"));
		func_464(uParam2, 0x33C9E158);
	}
	if (func_438(uParam0) != 0x00000000)
	{
		func_464(uParam2, func_438(uParam0));
	}
	*uParam5 = func_163();
	func_462(uParam2);
	unk_0x3F423BF5B8125A50("oddjobs@basejump@");
	unk_0x3F423BF5B8125A50("skydive@freefall");
	unk_0x3F423BF5B8125A50("skydive@parachute@chute");
	unk_0x3F423BF5B8125A50("skydive@parachute@");
	unk_0x0D3BE1DE0262A012("basejumping", 0x00000000);
	if (func_420(iParam1, 0x00000000) > 0f)
	{
		*uParam6 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
		switch (*uParam6)
		{
			case 0x00000000:
				unk_0x3F423BF5B8125A50("amb@world_human_hiker_standing@male@idle_a");
				break;
			
			case 0x00000001:
				unk_0x3F423BF5B8125A50("amb@world_human_muscle_flex@arms_at_side@base");
				break;
			}
	}
	if (func_460(iParam1) == 0x00000000)
	{
		unk_0xA0D09682534C2176(func_467(iParam1));
	}
}

void func_462(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			unk_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return joaat("a_m_y_beach_01");
		
		case 0x00000005:
			return joaat("s_m_m_trucker_01");
		
		case 0x00000007:
			return joaat("a_m_y_beach_01");
		
		default:
	}
	return 0x00000000;
}

int func_464(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	iVar1 = func_465(uParam0);
	if (iVar1 < 0x00000000 || iVar1 >= *uParam0)
	{
		return 0x00000000;
	}
	(*uParam0)[iVar1] = iParam1;
	return 0x00000001;
}

int func_465(var uParam0)
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

void func_466(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_78CE, iParam0);
	StringCopy(&(Global_78CF[iParam0 /*6*/]), unk_0xBB0808A181D4745C(), 24);
	Global_7906[iParam0] = iParam1;
}

Vector3 func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -1152.053f, -1857.884f, 204.0663f;
		
		case 0x00000001:
			return 885.114f, -437.352f, 529.867f;
		
		case 0x00000002:
			return 2034.912f, 1971.051f, 582.7461f;
		
		case 0x00000003:
			return 409.7498f, 5703.525f, 695.17f;
		
		case 0x00000004:
			return -74.9632f, -827.4467f, 324.9521f;
		
		case 0x00000005:
			return -117.6998f, -975.571f, 295f;
		
		case 0x00000006:
			return -1243.784f, 4534.163f, 184.8471f;
		
		case 0x00000007:
			return -359.1f, 4119.5f, 304.1f;
		
		case 0x00000008:
			return -807.073f, 330.8846f, 232.6766f;
		
		case 0x00000009:
			return -1286.99f, 3668.922f, 1072.466f;
		
		case 0x0000000A:
			return 1018.441f, 3956.706f, 1354f;
		
		case 0x0000000B:
			return 1627.196f, -421.7584f, 1321.484f;
		
		case 0x0000000C:
			return -766.5999f, 4334.805f, 147.1205f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_468(int iParam0)
{
	if (unk_0x757EF87A33649210())
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_467(iParam0), 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_467(iParam0), 0x00000000, 0x00000000, 0x00000000, 0x00000001);
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_467(iParam0), 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_469(vector3 vParam0)
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

Vector3 func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 0x00000001:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 0x00000002:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 0x00000003:
			return -39.935f, 0f, 12.8174f;
		
		case 0x00000004:
			return 0.9749f, 0f, -5.2236f;
		
		case 0x00000005:
			return -12.889f, 0f, 1.6227f;
		
		case 0x00000006:
			return -48.5605f, 0f, 160.4909f;
		
		case 0x00000007:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 0x00000008:
			return -17.4118f, 0f, 117.7175f;
		
		case 0x00000009:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 0x0000000A:
			return -20.9567f, 0f, 170.5743f;
		
		case 0x0000000B:
			return 1.9344f, 0f, -55.2084f;
		
		case 0x0000000C:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_471(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	vVar0 = { func_479(uParam1) };
	vVar1 = { func_478(uParam1) };
	fVar2 = func_477(uParam1);
	if (!unk_0x9F4FE516EAACCFC5(func_427(uParam0, 0x00000000)))
	{
		func_476(uParam0, 0x00000000, unk_0xAE06CCC36C49929C(0x019286A9, vVar0, vVar1, 65f, 0x00000000, 0x00000002), 0x00000001);
	}
	else
	{
		unk_0x608A456FDD8A83D8(func_427(uParam0, 0x00000000), vVar0);
		unk_0x5F3CBA6EB9341C90(func_427(uParam0, 0x00000000), vVar1, 0x00000002);
	}
	unk_0x5818C8D5303DCCF8(func_427(uParam0, 0x00000000), fVar2);
	unk_0xE3BB8E05FCEB3FBE(func_427(uParam0, 0x00000000), 0x00000001);
	if (bParam3)
	{
		vVar3 = { vVar0 };
		vVar3.z = (vVar3.z + 8f);
		unk_0x86F44313DFA8F00C(func_427(uParam0, 0x00000000), vVar3, vVar1, fVar2, func_475(iParam2), 0x00000001, 0x00000001, 0x00000002);
	}
	vVar0 = { func_474(uParam1) };
	vVar1 = { func_473(uParam1) };
	fVar2 = func_472(uParam1);
	if (!unk_0x9F4FE516EAACCFC5(func_427(uParam0, 0x00000001)))
	{
		func_476(uParam0, 0x00000001, unk_0xAE06CCC36C49929C(0x019286A9, vVar0, vVar1, 65f, 0x00000000, 0x00000002), 0x00000001);
	}
	else
	{
		unk_0x608A456FDD8A83D8(func_427(uParam0, 0x00000001), vVar0);
		unk_0x5F3CBA6EB9341C90(func_427(uParam0, 0x00000001), vVar1, 0x00000002);
	}
	unk_0x5818C8D5303DCCF8(func_427(uParam0, 0x00000001), fVar2);
	if (!unk_0x757EF87A33649210())
	{
		unk_0xF1E4C781086FABC1(func_427(uParam0, 0x00000001), func_427(uParam0, 0x00000000), func_475(iParam2), 0x00000001, 0x00000001);
	}
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	unk_0x297734EBF6EB6285("HAND_SHAKE", 0.2f);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
}

float func_472(var uParam0)
{
	return uParam0->f_52;
}

Vector3 func_473(var uParam0)
{
	return uParam0->f_3A;
}

Vector3 func_474(var uParam0)
{
	return uParam0->f_37;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000005:
		case 0x00000006:
		case 0x0000000C:
			return 0x00001770;
			break;
	}
	return 0x00002710;
}

void func_476(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 >= 0x00000002)
	{
		return;
	}
	if (iParam3 && !unk_0x9F4FE516EAACCFC5(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

var func_477(var uParam0)
{
	return uParam0->f_51;
}

Vector3 func_478(var uParam0)
{
	return uParam0->f_34;
}

Vector3 func_479(var uParam0)
{
	return uParam0->f_31;
}

void func_480(int iParam0)
{
	if (!func_456(iParam0))
	{
		func_365(iParam0);
	}
}

void func_481(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (func_301(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0x00000000 /*21*/], bParam2) <= fParam1)
			{
				func_482(iVar0);
			}
		}
		iVar0++;
	}
}

void func_482(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_301(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
			if (((((iParam0 == 0x00000018 && func_307(iParam0, 0x00000000)) && Global_12A3E.f_42 == 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] > 0x00000003) && (!func_483(0x00000000, Global_126B1.f_22B[0x00000000 /*21*/].f_C) || !func_483(0x00000001, Global_126B1.f_22B[0x00000000 /*21*/].f_C)))
			{
				func_308(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_305(iParam0, 0x00000000);
		}
	}
}

int func_483(int iParam0, int iParam1)
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
	if (iParam0 < 0x00000000 || iParam0 >= func_484(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0x00000000;
	}
	return func_285(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0x00000000);
}

int func_484(var uParam0)
{
	return *uParam0;
}

void func_485(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1AEC6 && iParam1)
	{
		if (func_331(sParam0) && !unk_0x79BBCD5833294FD5())
		{
			unk_0xA37A90C62806D848(0x00000000);
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_1B416.f_4FB5.f_91 - 0x00000002))
			{
				func_488(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_487((Global_1B416.f_4FB5.f_91 - 0x00000001));
			Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 0x00000001);
			func_486();
			return;
		}
		iVar0++;
	}
}

void func_486()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000000))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000000])
			{
				Global_1B416.f_4FB5.f_92[0x00000000] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000001))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000001])
			{
				Global_1B416.f_4FB5.f_92[0x00000001] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000002))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000002])
			{
				Global_1B416.f_4FB5.f_92[0x00000002] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_487(int iParam0)
{
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/].f_4), "", 16);
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = 0xFFFFFFFF;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = 0x00000000;
}

void func_488(int iParam0, int iParam1)
{
	Global_1B416.f_4FB5[iParam0 /*16*/] = { Global_1B416.f_4FB5[iParam1 /*16*/] };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_4 = { Global_1B416.f_4FB5[iParam1 /*16*/].f_4 };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = Global_1B416.f_4FB5[iParam1 /*16*/].f_8;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = Global_1B416.f_4FB5[iParam1 /*16*/].f_A;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = Global_1B416.f_4FB5[iParam1 /*16*/].f_9;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = Global_1B416.f_4FB5[iParam1 /*16*/].f_B;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = Global_1B416.f_4FB5[iParam1 /*16*/].f_C;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = Global_1B416.f_4FB5[iParam1 /*16*/].f_D;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = Global_1B416.f_4FB5[iParam1 /*16*/].f_E;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = Global_1B416.f_4FB5[iParam1 /*16*/].f_F;
}

void func_489(bool bParam0)
{
	if (bParam0)
	{
		unk_0x67E5ECB8FD7F5018(0x00000000);
		unk_0x65C5EBCA17A891FC(0x00000001);
		unk_0x2C84016B4A95F6BA(0x00000000);
		func_17(0x00000001);
		Global_16F32 = 0x00000001;
	}
	else
	{
		unk_0x67E5ECB8FD7F5018(0x00000001);
		unk_0x65C5EBCA17A891FC(0x00000000);
		unk_0x2C84016B4A95F6BA(0x00000001);
		func_17(0x00000000);
		Global_16F32 = 0x00000000;
	}
}

void func_490()
{
	func_491(&uLocal_73, 0x00000000);
}

void func_491(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0x00000000)
	{
		func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if ((((*uParam0)[0x00000000] != 0x00000000 || (*uParam0)[0x00000001] != 0x00000000) || (*uParam0)[0x00000002] != 0x00000000) || iParam1 == 0x00000001)
	{
		func_495(uParam0);
		func_494(uParam0);
		func_119(&Global_1C126B);
	}
	if (Global_1C0180.f_A94 != 0x00000000 || Global_1C0180.f_C70)
	{
		func_492();
	}
	if (unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		unk_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (unk_0x58424C49F8924842())
	{
		func_90(&(Global_1C171C.f_31));
	}
	Global_26B66F.f_F7F = 0x00000000;
}

void func_492()
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
	func_493(&(Global_1C0180.f_ADC));
	func_90(&(Global_1C0180.f_B07));
	Global_1C0180.f_B09 = 0xFFFFFFFF;
	Global_1C0180.f_B0A = 0x00000000;
	func_90(&(Global_1C0180.f_B0B));
	Global_1C0180.f_B0D = 0x00000000;
	func_90(&(Global_1C0180.f_B0E));
	Global_1C0180.f_B10 = 0x00000000;
	Global_1C0180.f_ADC.f_1C = 0x00000000;
	Global_1C0180.f_ADC.f_1B = 0x00000000;
	Global_1C0180.f_C70 = 0x00000000;
}

void func_493(var uParam0)
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

void func_494(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0x00000000;
	uParam0->f_F6.f_1 = 0xFFFFFFFF;
	uParam0->f_F6.f_2 = 0x00000000;
	func_90(&(uParam0->f_F6.f_3));
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

void func_495(var uParam0)
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

void func_496()
{
	Global_56C3.f_5 = 0x00000001;
}

void func_497(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 < 0x0000000B)
	{
		if (!func_257(uParam0, 0x00000013))
		{
			if ((iParam1 == 0x00000004 && !bParam3) && (unk_0x0F1CCD77290EE12F() || unk_0x7BCE0E6DD4A1F749()))
			{
				if (func_499(func_500(iParam2, 0x00000013), "", &(uParam0->f_25B), 0x00000013))
				{
				}
			}
		}
		if (!func_257(uParam0, 0x00000014))
		{
			if (iParam1 > 0x00000004)
			{
				if (func_499(func_500(iParam2, 0x00000014), func_500(iParam2, 0x00000013), &(uParam0->f_25B), 0x00000014))
				{
				}
			}
		}
		else if (!func_257(uParam0, 0x00000015))
		{
			if (iParam1 == 0x00000009)
			{
				if (func_499(func_500(iParam2, 0x00000015), func_500(iParam2, 0x00000014), &(uParam0->f_25B), 0x00000015))
				{
				}
			}
			else if (iParam1 == 0x00000008)
			{
				if (func_499(func_500(iParam2, 0x00000015), func_500(iParam2, 0x00000014), &(uParam0->f_25B), 0x00000015))
				{
				}
			}
		}
		else if (!func_257(uParam0, 0x00000016))
		{
			if (iParam1 == 0x00000009)
			{
				iVar0 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
				if (iVar0 == 0x00000001 || iVar0 == 0x00000002)
				{
					if (func_499(func_500(iParam2, 0x00000016), func_500(iParam2, 0x00000015), &(uParam0->f_25B), 0x00000016))
					{
					}
				}
			}
		}
		else if (iParam1 == 0x0000000A && !func_257(uParam0, 0x00000017))
		{
			func_498(func_500(iParam2, 0x00000016), &(uParam0->f_25B), 0x00000017);
		}
		else if (!func_257(uParam0, 0x00000017) && !unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0xE5305602B634A39A();
		}
	}
}

void func_498(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam1, iParam2))
	{
		unk_0x8910D3D58E0132B8(sParam0);
		unk_0x5D96D8530B3D0904(iParam1, iParam2);
	}
}

int func_499(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (unk_0x562F77A7F33D2E46(sParam1))
		{
			unk_0x8910D3D58E0132B8(sParam1);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(*iParam2, iParam3))
	{
		if (unk_0x8BC9595FD2792B5D(sParam0))
		{
			unk_0x5D96D8530B3D0904(iParam2, iParam3);
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

char* func_500(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam1)
	{
		case 0x00000013:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		
		case 0x00000014:
			if (func_459(func_460(iParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_359(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_MOTO";
			}
			else
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_ON_FOOT";
			}
			return sVar0;
		
		case 0x00000015:
			return "BASEJUMPS_SKYDIVE";
		
		case 0x00000016:
			return "BASEJUMPS_OPEN_PARACHUTE";
		
		default:
	}
	return "";
}

void func_501(var uParam0, int iParam1)
{
	if (iParam1 < 0x0000000B)
	{
		if (!func_257(uParam0, 0x0000000F))
		{
			if (iParam1 >= 0x00000004 && (unk_0x0F1CCD77290EE12F() || unk_0x7BCE0E6DD4A1F749()))
			{
				if (func_503(func_504(0x0000000B), &(uParam0->f_25B), 0x0000000B))
				{
					func_502(func_504(0x0000000F), &(uParam0->f_25B), 0x0000000F);
				}
			}
		}
		else if (!func_257(uParam0, 0x00000010))
		{
			if (iParam1 == 0x00000009)
			{
				if (func_503(func_504(0x0000000C), &(uParam0->f_25B), 0x0000000C))
				{
					func_502(func_504(0x00000010), &(uParam0->f_25B), 0x00000010);
				}
			}
			else if (iParam1 == 0x00000008)
			{
				if (func_503(func_504(0x0000000C), &(uParam0->f_25B), 0x0000000C))
				{
					func_502(func_504(0x00000010), &(uParam0->f_25B), 0x00000010);
				}
			}
		}
		else if (iParam1 == 0x0000000A && !func_257(uParam0, 0x00000011))
		{
			if (func_503(func_504(0x0000000D), &(uParam0->f_25B), 0x0000000D))
			{
				func_502(func_504(0x00000011), &(uParam0->f_25B), 0x00000011);
			}
		}
	}
}

int func_502(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam1, iParam2))
	{
		if (unk_0x13896FDECC859926(sParam0))
		{
			if (unk_0xC92DB9682A650680(sParam0))
			{
				unk_0x5D96D8530B3D0904(iParam1, iParam2);
				return 0x00000001;
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_503(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam1, iParam2))
	{
		if (unk_0x13896FDECC859926(sParam0))
		{
			unk_0x5D96D8530B3D0904(iParam1, iParam2);
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

char* func_504(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000F:
		case 0x0000000B:
			return "OJBJ_START";
		
		case 0x00000010:
		case 0x0000000C:
			return "OJBJ_JUMPED";
		
		case 0x00000011:
		case 0x0000000D:
			return "OJBJ_LANDED";
		
		case 0x00000012:
		case 0x0000000E:
			return "OJBJ_STOP";
		
		default:
	}
	return "";
}

void func_505(var uParam0)
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	unk_0xA2E3EDD0E119882F(0x00000000);
	unk_0xA2E3EDD0E119882F(0x00000002);
	func_512(&uVar1, &uVar2, &iVar3, &iVar4, unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()), unk_0x91E3F625EF57450D(0x00000002));
	Var0 = (SYSTEM::TO_FLOAT(iVar3) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(iVar4) / -128f);
	func_509(uParam0, Var0, Var0.f_1);
	func_508(uParam0);
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000E0))
	{
		func_507(uParam0, 0x00000000, 0x00000001);
	}
	if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000016) || unk_0x7FEE810EE9E768EB(0x00000000, 0x00000016))
	{
		func_507(uParam0, 0x00000001, 0x00000001);
	}
	if (func_506())
	{
		func_507(uParam0, 0x00000002, 0x00000001);
	}
	if (unk_0x7FEE810EE9E768EB(0x00000002, 0x00000016))
	{
		func_507(uParam0, 0x00000003, 0x00000001);
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000D8))
	{
		func_507(uParam0, 0x00000004, 0x00000001);
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000D7) || unk_0x7FEE810EE9E768EB(0x00000002, 0x000000C8))
	{
		func_507(uParam0, 0x00000005, 0x00000001);
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
	{
		func_507(uParam0, 0x00000006, 0x00000001);
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CA))
	{
		func_507(uParam0, 0x00000007, 0x00000001);
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000D3))
	{
		func_507(uParam0, 0x00000008, 0x00000001);
	}
}

int func_506()
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

void func_507(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_2), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_2), iParam1);
	}
}

void func_508(var uParam0)
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0x00000000;
}

void func_509(var uParam0, var uParam1, var uParam2)
{
	func_511(uParam0, uParam1);
	func_510(uParam0, uParam2);
}

void func_510(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_511(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_512(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam5 == 0x00000000)
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
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_513()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000055, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000F, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000010, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000011, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000032, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000035, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000036, 0x00000001);
	unk_0x3584F71E5CA29322(0x00000013);
	unk_0x3584F71E5CA29322(0x00000002);
	unk_0x3584F71E5CA29322(0x0000000E);
	unk_0x3584F71E5CA29322(0x00000010);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
}

var func_514()
{
	var uVar0;
	
	func_524(&uVar0, unk_0x4460E481B9E33ADA());
	func_523(&uVar0, unk_0x8D199E381D262EEF());
	func_522(&uVar0, unk_0xD8A54335F18763BA());
	func_517(&uVar0, unk_0x972A296334C9D57B());
	func_516(&uVar0, unk_0x118229AD063C3C1D());
	func_515(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_515(var uParam0, int iParam1)
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

void func_516(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_517(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_521(*uParam0);
	iVar1 = func_519(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_518(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_518(int iParam0, int iParam1)
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

var func_519(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_520(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_520(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_521(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_522(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_523(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_524(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_525(var uParam0)
{
	return uParam0->f_2;
}

void func_526(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_36(unk_0x16F2683693E537C9());
	switch (iParam1)
	{
		case 0x00000000:
			func_551(uParam0, 0x0000007D);
			func_550(uParam0, joaat("squalo"));
			func_549(uParam0, 41.0737f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, -1039.712f, -1731.145f, 1f);
			func_540(uParam0, 317.8872f);
			func_539(uParam0, 0f, -2f, 0f);
			func_538(uParam0, "BJ_01P");
			func_536(uParam0, func_537(0x00000000));
			func_535(uParam0, func_470(0x00000000));
			func_534(uParam0, 53.4142f);
			func_533(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_532(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_531(uParam0, 39.6124f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000000);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000001:
			func_551(uParam0, 0x0000007E);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 10.5f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, 978.232f, -397.611f, 416.607f);
			func_541(uParam0, 0x00000001, 873.389f, -183.851f, 302.972f);
			func_541(uParam0, 0x00000002, 1082.347f, -86.822f, 174.287f);
			func_541(uParam0, 0x00000003, 1151.098f, 124.6955f, 81.4805f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_02P");
			func_536(uParam0, func_537(0x00000001));
			func_535(uParam0, func_470(0x00000001));
			func_534(uParam0, 52.5984f);
			func_533(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_532(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_531(uParam0, 41.3305f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000000);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000002:
			func_551(uParam0, 0x0000007F);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 289.2623f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, 2028.516f, 1759.102f, 424.7939f);
			func_541(uParam0, 0x00000001, 2230.78f, 1600.25f, 318.384f);
			func_541(uParam0, 0x00000002, 2410.55f, 1739.71f, 253.494f);
			func_541(uParam0, 0x00000003, 2273.787f, 1885.168f, 152.702f);
			func_541(uParam0, 0x00000004, 2111.912f, 1887.456f, 92.5308f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_03P");
			func_536(uParam0, func_537(0x00000002));
			func_535(uParam0, func_470(0x00000002));
			func_534(uParam0, 31.9702f);
			func_533(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_532(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_531(uParam0, 50.8804f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000000);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000003:
			func_551(uParam0, 0x00000080);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 60.1427f);
			func_548(uParam0, joaat("frogger"));
			func_547(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_546(uParam0, 119.8889f);
			func_545(uParam0, 5f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, 320.69f, 5808.49f, 550.56f);
			func_541(uParam0, 0x00000001, 220.59f, 5943.149f, 415.514f);
			func_541(uParam0, 0x00000002, 30.63f, 6117.63f, 227.9f);
			func_541(uParam0, 0x00000003, -80.95f, 6440.43f, 100.48f);
			func_541(uParam0, 0x00000004, -273.773f, 6633.584f, 6.533f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0x00000000)
			{
				func_538(uParam0, "BJ_04M");
			}
			else if (iVar0 == 0x00000001)
			{
				func_538(uParam0, "BJ_04F");
			}
			else
			{
				func_538(uParam0, "BJ_04T");
			}
			func_536(uParam0, func_537(0x00000003));
			func_535(uParam0, func_470(0x00000003));
			func_534(uParam0, 44.3626f);
			func_533(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_532(uParam0, -5.0705f, 0f, 20.8267f);
			func_531(uParam0, 43.8549f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000001);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000004:
			func_551(uParam0, 0x00000081);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 1.8891f);
			func_548(uParam0, joaat("skylift"));
			func_547(uParam0, -75.3f, -823.9f, 329.2f);
			func_546(uParam0, 150f);
			func_545(uParam0, 4f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, -77.2067f, -444.208f, 37f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0x00000000)
			{
				func_538(uParam0, "BJ_05M");
			}
			else if (iVar0 == 0x00000001)
			{
				func_538(uParam0, "BJ_05F");
			}
			else
			{
				func_538(uParam0, "BJ_05T");
			}
			func_536(uParam0, func_537(0x00000004));
			func_535(uParam0, func_470(0x00000004));
			func_534(uParam0, 26.7726f);
			func_533(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_532(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_531(uParam0, 30.0131f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000000);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000005:
			func_551(uParam0, 0x00000082);
			func_550(uParam0, joaat("hauler"));
			func_549(uParam0, 358.9586f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, -96.9738f, -662.5833f, 34.7843f);
			func_540(uParam0, -18.6f);
			func_539(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0x00000000)
			{
				func_538(uParam0, "BJ_06M");
			}
			else if (iVar0 == 0x00000001)
			{
				func_538(uParam0, "BJ_06F");
			}
			else
			{
				func_538(uParam0, "BJ_06T");
			}
			func_536(uParam0, func_537(0x00000005));
			func_535(uParam0, func_470(0x00000005));
			func_534(uParam0, 55.7667f);
			func_533(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_532(uParam0, -7.6574f, 0f, 0.8528f);
			func_531(uParam0, 60f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000001);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000006:
			func_551(uParam0, 0x00000083);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 164.6178f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("blazer"));
			func_543(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_542(uParam0, 87.84f);
			func_541(uParam0, 0x00000000, -1246.49f, 4482.091f, 100.349f);
			func_541(uParam0, 0x00000001, -1309.67f, 4400.428f, 50.542f);
			func_541(uParam0, 0x00000002, -1304.67f, 4348.428f, 5.75f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0x00000000)
			{
				func_538(uParam0, "BJ_07M");
			}
			else if (iVar0 == 0x00000001)
			{
				func_538(uParam0, "BJ_07F");
			}
			else
			{
				func_538(uParam0, "BJ_07T");
			}
			func_536(uParam0, func_537(0x00000006));
			func_535(uParam0, func_470(0x00000006));
			func_534(uParam0, 47.1789f);
			func_533(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_532(uParam0, -13.6409f, 0f, 172.0553f);
			func_531(uParam0, 47.1789f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000001);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000007:
			func_551(uParam0, 0x00000084);
			func_550(uParam0, joaat("freight"));
			func_549(uParam0, 112.6f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, -487.5452f, 4252.192f, 87.712f);
			func_540(uParam0, 10.8894f);
			func_539(uParam0, 0f, -20f, 4f);
			func_538(uParam0, "BJ_08P");
			func_536(uParam0, func_537(0x00000007));
			func_535(uParam0, func_470(0x00000007));
			func_534(uParam0, 24.3623f);
			func_533(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_532(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_531(uParam0, 37.0424f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000000);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000008:
			func_551(uParam0, 0x00000085);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 104.207f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, -1154.443f, 204.1726f, 64.4915f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0x00000000)
			{
				func_538(uParam0, "BJ_09M");
			}
			else if (iVar0 == 0x00000001)
			{
				func_538(uParam0, "BJ_09F");
			}
			else
			{
				func_538(uParam0, "BJ_09T");
			}
			func_536(uParam0, func_537(0x00000008));
			func_535(uParam0, func_470(0x00000008));
			func_534(uParam0, 50f);
			func_533(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_532(uParam0, -19.7458f, 0f, 116.6405f);
			func_531(uParam0, 55.2882f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000001);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x00000009:
			func_551(uParam0, 0x00000086);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 329.4791f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("blazer"));
			func_543(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_542(uParam0, -89.36f);
			func_541(uParam0, 0x00000000, -1200f, 3616f, 964f);
			func_541(uParam0, 0x00000001, -1240f, 3307f, 854f);
			func_541(uParam0, 0x00000002, -1552f, 3456f, 655f);
			func_541(uParam0, 0x00000003, -1616f, 3808f, 505f);
			func_541(uParam0, 0x00000004, -1157.684f, 4128.348f, 288.607f);
			func_541(uParam0, 0x00000005, -1063.995f, 4246.137f, 163.291f);
			func_541(uParam0, 0x00000006, -938.541f, 4360.14f, 82.372f);
			func_541(uParam0, 0x00000007, -828.1418f, 4413.562f, 20.062f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_10P");
			func_536(uParam0, func_537(0x00000009));
			func_535(uParam0, func_470(0x00000009));
			func_534(uParam0, 31.7648f);
			func_533(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_532(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_531(uParam0, 39.6786f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000000);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x0000000A:
			func_551(uParam0, 0x00000087);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 0f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0x00000000);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0x00000000, 1239.342f, 4008.389f, 1135.372f);
			func_541(uParam0, 0x00000001, 1374.479f, 4156.592f, 1019.694f);
			func_541(uParam0, 0x00000002, 1391.31f, 4362.621f, 909.212f);
			func_541(uParam0, 0x00000003, 1240.832f, 4598.044f, 758.002f);
			func_541(uParam0, 0x00000004, 1382.169f, 4377.629f, 600.013f);
			func_541(uParam0, 0x00000005, 1624.116f, 4207.519f, 471.225f);
			func_541(uParam0, 0x00000006, 1910.345f, 4175.518f, 362.862f);
			func_541(uParam0, 0x00000007, 2236.975f, 4282.967f, 218.116f);
			func_541(uParam0, 0x00000008, 2330.282f, 4534.43f, 90f);
			func_541(uParam0, 0x00000009, 2473.344f, 4715.347f, 33.524f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_11P");
			func_536(uParam0, func_537(0x0000000A));
			func_535(uParam0, func_470(0x0000000A));
			func_534(uParam0, 27.2187f);
			func_533(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_532(uParam0, -54.7868f, 0f, -90.128f);
			func_531(uParam0, 35.5634f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000000);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x0000000B:
			func_551(uParam0, 0x00000088);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 24.92f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("sanchez"));
			func_543(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_542(uParam0, 130.39f);
			func_541(uParam0, 0x00000000, 1829.46f, -260.665f, 1141.852f);
			func_541(uParam0, 0x00000001, 1816.46f, -10.665f, 1033.084f);
			func_541(uParam0, 0x00000002, 1688.46f, 218.335f, 924.307f);
			func_541(uParam0, 0x00000003, 1503.46f, 382.335f, 815.529f);
			func_541(uParam0, 0x00000004, 1554.46f, 598.335f, 706.751f);
			func_541(uParam0, 0x00000005, 1813.46f, 724.335f, 597.973f);
			func_541(uParam0, 0x00000006, 1975.46f, 519.335f, 486.196f);
			func_541(uParam0, 0x00000007, 1946.46f, 125.335f, 364.417f);
			func_541(uParam0, 0x00000008, 1663.46f, -15.665f, 241.64f);
			func_541(uParam0, 0x00000009, 1396.64f, -62.665f, 118f);
			func_541(uParam0, 0x0000000A, 1278.5f, -41.05f, 61.7f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_12P");
			func_536(uParam0, func_537(0x0000000B));
			func_535(uParam0, func_470(0x0000000B));
			func_534(uParam0, 18.9374f);
			func_533(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_532(uParam0, -54.5827f, 0f, -2.0463f);
			func_531(uParam0, 56.4495f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000000);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 0x0000000C:
			func_551(uParam0, 0x00000089);
			func_550(uParam0, 0x00000000);
			func_549(uParam0, 359.2885f);
			func_548(uParam0, 0x00000000);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, joaat("sanchez"));
			func_543(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_542(uParam0, 104.35f);
			func_541(uParam0, 0x00000000, -771.9196f, 4400.453f, 60.5786f);
			func_541(uParam0, 0x00000001, -892.6581f, 4427.487f, 19.8561f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0x00000000)
			{
				func_538(uParam0, "BJ_13M");
			}
			else if (iVar0 == 0x00000001)
			{
				func_538(uParam0, "BJ_13F");
			}
			else
			{
				func_538(uParam0, "BJ_13T");
			}
			func_536(uParam0, func_537(0x0000000C));
			func_535(uParam0, func_470(0x0000000C));
			func_534(uParam0, 48.3921f);
			func_533(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_532(uParam0, -18.0357f, 0f, 6.0212f);
			func_531(uParam0, 48.3921f);
			func_530(uParam0, 0x00000000);
			func_529(uParam0, 0x00000001);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_527(var uParam0, vector3 vParam1)
{
	uParam0->f_43 = { vParam1 };
}

void func_528(var uParam0, vector3 vParam1)
{
	uParam0->f_40 = { vParam1 };
}

void func_529(var uParam0, int iParam1)
{
	uParam0->f_54 = iParam1;
}

void func_530(var uParam0, int iParam1)
{
	uParam0->f_53 = iParam1;
}

void func_531(var uParam0, float fParam1)
{
	uParam0->f_52 = fParam1;
}

void func_532(var uParam0, vector3 vParam1)
{
	uParam0->f_3A = { vParam1 };
}

void func_533(var uParam0, vector3 vParam1)
{
	uParam0->f_37 = { vParam1 };
}

void func_534(var uParam0, float fParam1)
{
	uParam0->f_51 = fParam1;
}

void func_535(var uParam0, vector3 vParam1)
{
	uParam0->f_34 = { vParam1 };
}

void func_536(var uParam0, vector3 vParam1)
{
	uParam0->f_31 = { vParam1 };
}

Vector3 func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 0x00000001:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 0x00000002:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 0x00000003:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 0x00000004:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 0x00000005:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 0x00000006:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 0x00000007:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 0x00000008:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 0x00000009:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 0x0000000A:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 0x0000000B:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 0x0000000C:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_538(var uParam0, char* sParam1)
{
	uParam0->f_4 = sParam1;
}

void func_539(var uParam0, vector3 vParam1)
{
	uParam0->f_6 = { vParam1 };
}

void func_540(var uParam0, float fParam1)
{
	uParam0->f_4D = fParam1;
}

void func_541(var uParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000000C)
	{
		return;
	}
	uParam0->f_C[iParam1 /*3*/] = { vParam2 };
}

void func_542(var uParam0, float fParam1)
{
	uParam0->f_4F = fParam1;
}

void func_543(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_545(var uParam0, float fParam1)
{
	uParam0->f_50 = fParam1;
}

void func_546(var uParam0, float fParam1)
{
	uParam0->f_4E = fParam1;
}

void func_547(var uParam0, vector3 vParam1)
{
	uParam0->f_46 = { vParam1 };
}

void func_548(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_549(var uParam0, float fParam1)
{
	uParam0->f_4C = fParam1;
}

void func_550(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_551(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_552(int iParam0, bool bParam1)
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

void func_553(int iParam0)
{
	func_376();
	Global_12C4D = iParam0;
	Global_12C4C = 0x00000000;
	Global_12C4F = 0x00000003;
}

void func_554(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_370();
	func_369();
	func_490();
	func_560(uParam1);
	func_552(0x00000017, 0x00000000);
	func_559(*uParam1);
	unk_0x4EBF4289AABAE861(*uParam16);
	unk_0x38DC636F3D2D2FA8("OJBJ_START");
	unk_0x38DC636F3D2D2FA8("OJBJ_JUMPED");
	unk_0x38DC636F3D2D2FA8("OJBJ_LANDED");
	unk_0xC92DB9682A650680("OJBJ_STOP");
	unk_0x8910D3D58E0132B8("BASEJUMPS_OPEN_PARACHUTE");
	unk_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	unk_0x8910D3D58E0132B8("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	unk_0x8910D3D58E0132B8("BASEJUMPS_SKYDIVE");
	unk_0x8910D3D58E0132B8("BASEJUMPS_OPEN_PARACHUTE");
	unk_0xE5305602B634A39A();
	uParam11 = uParam11;
	Global_16F31 = 0x00000000;
	Global_16F32 = 0x00000000;
	Global_16F33 = 0x00000000;
	func_20(0x00000000, 0x00000001);
	func_18(0x00000000, 0x00000001);
	func_17(0x00000000);
	unk_0x2C84016B4A95F6BA(0x00000001);
	unk_0x65C5EBCA17A891FC(0x00000000);
	unk_0x4DB69487E1A9EE2A(0x00000000);
	while (unk_0xD0BB2359EC70FC37())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (unk_0xF45FDB21A0F137CB())
	{
		unk_0xC1B8EFD8630D086B(0x00000001);
	}
	if (unk_0xE4EDC4B0E92C078B(iParam13))
	{
		unk_0x142CC44DB769B57E(&iParam13);
	}
	if (unk_0xE4EDC4B0E92C078B(iParam14))
	{
		unk_0x142CC44DB769B57E(&iParam14);
	}
	func_376();
	func_26(0x00000000);
	unk_0xDF9891243C73DEA5(unk_0xD803B885F5E47A62(), 0x00000000);
	func_558(0x00000001, 0x00000001);
	if (func_425(func_451(uParam0)))
	{
	}
	else
	{
		unk_0x2B25B48028758FE8();
	}
	unk_0xB547E3FFEB27073E();
	func_556(uParam7);
	func_277();
	unk_0xF5637CC664BEAAD0(0f, 0x00000000, 0x00000015);
	unk_0x7B0C620E7A619AA1(0x00000000);
	func_212(0x00000000, 0x00000000);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	if (iParam15 == 0x00000005)
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000092, 0x00000000);
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000000);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000024, 0x00000000);
		unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0x00000000);
		if (!bParam17)
		{
			unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("gadget_parachute"));
		}
		unk_0x8B66ED74C2DC2E98(unk_0x16F2683693E537C9(), 1f);
		unk_0xCC095276B3DD380E(unk_0x16F2683693E537C9(), 0x00000001);
	}
	iVar1 = 0x00000000;
	while (iVar1 < *uParam10)
	{
		if (unk_0xC844350D5D58C99A((*uParam10)[iVar1]) && !unk_0x437347B10A200C4B((*uParam10)[iVar1], 0x00000000))
		{
			unk_0xA3BF0AA5A2608191((*uParam10)[iVar1]);
			(*uParam10)[iVar1] = 0x00000000;
		}
		iVar1++;
	}
	if ((unk_0xC844350D5D58C99A(*iParam6) && *iParam6 != unk_0x728870EB733D12A1()) && !unk_0x437347B10A200C4B(*iParam6, 0x00000000))
	{
		unk_0x7EA00EB725DAA91D(*iParam6);
		func_280(*iParam6, func_319(iParam15), func_318(iParam15), 0x00000018, 0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1(*iParam8))
	{
		if (!unk_0x0A059E0DB9253280(*iParam8))
		{
			unk_0xEBA53F35D0085654(iParam8);
		}
		else
		{
			unk_0x6DAD7906B73F064D(iParam8);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(*uParam9))
	{
		unk_0xA3BF0AA5A2608191(*uParam9);
		unk_0x11AD11297DC58CC7(*uParam9, 0x00000001);
	}
	if (unk_0xC844350D5D58C99A(*iParam2))
	{
		if (func_459(func_460(iParam15)))
		{
			if ((!unk_0x437347B10A200C4B(*iParam2, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam2, 0x00000000))
			{
				unk_0x975C58E0FC4955A9(unk_0x16F2683693E537C9(), 0x00000001);
			}
			if (!unk_0x0A059E0DB9253280(*iParam2))
			{
				unk_0xA954465BA6FDEFE2(iParam2);
			}
			else
			{
				unk_0x046C362CF15F1935(iParam2);
			}
		}
		else
		{
			unk_0x046C362CF15F1935(iParam2);
		}
	}
	if (unk_0xC844350D5D58C99A(*uParam3))
	{
		if (func_361(func_362(uParam0)))
		{
			unk_0xDB7D85A79FCB0695(uParam3, 0x00000000);
			unk_0xF48790410026514E(0x00000001);
		}
	}
	if (unk_0xC844350D5D58C99A(*iParam4) && !unk_0x437347B10A200C4B(*iParam4, 0x00000000))
	{
		iVar0 = unk_0xA30B8362589C124A(*iParam4, 0xFFFFFFFF, 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0xEBA53F35D0085654(&iVar0);
		}
		unk_0xA954465BA6FDEFE2(iParam4);
	}
	iVar2 = 0x00000000;
	while (iVar2 < *uParam5)
	{
		if (unk_0xC844350D5D58C99A((*uParam5)[iVar2]) && !unk_0x437347B10A200C4B((*uParam5)[iVar2], 0x00000000))
		{
			unk_0xF8CF67C6E39C23A9((*uParam5)[iVar2], 1f);
			unk_0xE8832A9E16A57A1F((*uParam5)[iVar2], 0x00000000, 0x00000001);
		}
		iVar2++;
	}
	*iParam12 = 0x00000001;
	unk_0xA37A90C62806D848(0x00000001);
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	unk_0xC0FB48F966BB7D11(0x00000001);
	func_555();
	unk_0x31A33F7BCB08CB80(0x00000000);
	Global_1B416.f_4A12 = 0xFFFFFFFF;
	unk_0x10FAF14A60A0DBE1();
}

void func_555()
{
	Global_56C3.f_5 = 0x00000000;
}

void func_556(var uParam0)
{
	func_557(uParam0, 0x00000000);
	func_557(uParam0, 0x00000001);
	func_557(uParam0, 0x00000002);
}

void func_557(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_558(int iParam0, bool bParam1)
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

void func_559(var uParam0)
{
	unk_0xE17FDF9E3068281B(&uParam0);
}

void func_560(var uParam0)
{
	func_559(*uParam0);
}

