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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	struct<284> Local_80 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<5> Local_84[32];
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<18> Local_90[32];
	vector3 vLocal_91[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	struct<68> Local_99[1];
	struct<42> Local_100[32];
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
	var uLocal_129 = -1;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 1;
	var uLocal_138 = 0;
	var uLocal_139 = 32;
	var uLocal_140 = 0;
	var uLocal_141 = -1;
	var uLocal_142 = 0;
	var uLocal_143 = -1;
	var uLocal_144 = 0;
	var uLocal_145 = -1;
	var uLocal_146 = 0;
	var uLocal_147 = -1;
	var uLocal_148 = 0;
	var uLocal_149 = -1;
	var uLocal_150 = 0;
	var uLocal_151 = -1;
	var uLocal_152 = 0;
	var uLocal_153 = -1;
	var uLocal_154 = 0;
	var uLocal_155 = -1;
	var uLocal_156 = 0;
	var uLocal_157 = -1;
	var uLocal_158 = 0;
	var uLocal_159 = -1;
	var uLocal_160 = 0;
	var uLocal_161 = -1;
	var uLocal_162 = 0;
	var uLocal_163 = -1;
	var uLocal_164 = 0;
	var uLocal_165 = -1;
	var uLocal_166 = 0;
	var uLocal_167 = -1;
	var uLocal_168 = 0;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = -1;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
	var uLocal_176 = 0;
	var uLocal_177 = -1;
	var uLocal_178 = 0;
	var uLocal_179 = -1;
	var uLocal_180 = 0;
	var uLocal_181 = -1;
	var uLocal_182 = 0;
	var uLocal_183 = -1;
	var uLocal_184 = 0;
	var uLocal_185 = -1;
	var uLocal_186 = 0;
	var uLocal_187 = -1;
	var uLocal_188 = 0;
	var uLocal_189 = -1;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = -1;
	var uLocal_194 = 0;
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = -1;
	var uLocal_198 = 0;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = -1;
	var uLocal_202 = 0;
	var uLocal_203 = -1;
	var uLocal_204 = -1;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = -1;
	var uLocal_212 = -1;
	var uLocal_213 = -1;
	var uLocal_214 = -1;
	var uLocal_215 = -1;
	var uLocal_216 = 0;
	var uLocal_217 = 32;
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
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	var uLocal_646 = 0;
	int iLocal_647 = 0;
	var uLocal_648 = 0;
	struct<21> Local_649 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
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
	iLocal_82 = 0xFFFFFFFF;
	iLocal_643 = 0xFFFFFFFF;
	if (unk_0x8CD06866876216F2() && func_756(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
	{
		func_741(ScriptParam_649);
	}
	else
	{
		func_709();
	}
	while (0x00000001)
	{
		func_708();
		if (func_701())
		{
			func_709();
		}
		if (func_698(0x0000001D))
		{
			func_709();
		}
		if (func_696())
		{
			func_709();
		}
		if (func_695())
		{
			func_709();
		}
		iLocal_643 = 0xFFFFFFFF;
		if (unk_0xEAE0D21A50E6C7F4(iLocal_635, unk_0xD803B885F5E47A62()))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_636, unk_0x57270EE11514DC67()))
			{
				if (!func_693(unk_0xD803B885F5E47A62()))
				{
					iLocal_643 = unk_0x57270EE11514DC67();
				}
				else if (func_692() && !func_691())
				{
					iVar2 = func_689();
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar2);
						if (unk_0xFB75B0F82CA525F6(iVar3))
						{
							iVar4 = unk_0x7B9C1F53FE442D06(iVar3);
							iLocal_643 = iVar4;
						}
					}
				}
			}
		}
		func_668();
		if (func_667() < 0x00000002)
		{
			if (func_664(0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000018);
				func_622(0x00000000, 0xFFFFFFFF);
				func_709();
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000001)
		{
			func_621(iVar0, 0xFFFFFFFF);
			func_620(iVar0, 0xFFFFFFFF);
			func_619(iVar0, uVar1);
			unk_0x0674E58A79778E99(&iLocal_85, 0x00000000);
			iVar0++;
		}
		func_571();
		func_539();
		func_536();
		func_516();
		switch (func_515(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_514() == 0x00000001)
				{
					func_506(0x0000008D, func_513(0x00000000), 0x00000000, 0x00000000);
					func_505(0x00000001);
				}
				else if (func_514() == 0x00000004)
				{
					func_505(0x00000004);
				}
				break;
			
			case 0x00000001:
				if (func_514() == 0x00000001)
				{
					func_20();
				}
				else if (func_514() == 0x00000004)
				{
					func_19(&(Local_80.f_D3));
					func_505(0x00000003);
				}
				break;
			
			case 0x00000003:
				if (func_18(&(Local_80.f_D3)))
				{
					if (func_17(&(Local_80.f_D3)))
					{
						bVar5 = 0x00000001;
					}
				}
				else
				{
					bVar5 = 0x00000001;
				}
				if (bVar5)
				{
					func_505(0x00000004);
				}
				break;
			
			case 0x00000002:
				func_505(0x00000004);
			
			case 0x00000004:
				func_709();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_514())
			{
				case 0x00000000:
					func_16(0x00000001);
					break;
				
				case 0x00000001:
					func_1();
					break;
				
				case 0x00000004:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_12();
	switch (func_667())
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_D5, 0x00000000))
			{
				if (!func_18(&(Local_80.f_1.f_3)))
				{
					func_11(&(Local_80.f_1.f_3), 0x00000000, 0x00000001);
				}
				func_10(0x00000001);
			}
			break;
		
		case 0x00000001:
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_D5, 0x00000002))
			{
				iVar2 = Global_40001.f_2BB4;
				if (func_18(&(Local_80.f_1.f_1)))
				{
					if (func_9(&(Local_80.f_1.f_1), 0x00000000, 0x00000000) >= iVar2)
					{
						bVar1 = 0x00000001;
					}
				}
			}
			else
			{
				iVar2 = Global_40001.f_2BB5;
				if (func_18(&(Local_80.f_1.f_3)))
				{
					if (func_9(&(Local_80.f_1.f_3), 0x00000000, 0x00000000) >= iVar2)
					{
						bVar1 = 0x00000001;
					}
				}
			}
			if (bVar1)
			{
				func_10(0x00000002);
			}
			break;
		
		case 0x00000002:
			if (unk_0xEAE0D21A50E6C7F4(Local_80.f_D5, 0x00000001))
			{
				func_10(0x00000003);
			}
			break;
		
		case 0x00000003:
			func_10(0x00000004);
			break;
		
		case 0x00000004:
			func_16(0x00000004);
			break;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		func_2(iVar0);
		iVar0++;
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	iVar0 = func_8(iParam0);
	iVar1 = func_7(iParam0);
	bVar6 = func_18(&(Local_80.f_6[iParam0 /*204*/].f_46));
	if (iVar0 > 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_636, iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_635, iVar1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_80.f_1.f_1)))
					{
						if (!func_18(&(Local_80.f_6[iParam0 /*204*/].f_46)))
						{
							func_11(&(Local_80.f_6[iParam0 /*204*/].f_46), 0x00000000, 0x00000001);
						}
						else if ((func_5(&(Local_80.f_6[iParam0 /*204*/].f_46), 0x000003E8, 0x00000000) && func_9(&(Local_80.f_1.f_1), 0x00000000, 0x00000000) <= Global_40001.f_2BB4) && func_667() != 0x00000002)
						{
							iVar7 = func_9(&(Local_80.f_6[iParam0 /*204*/].f_46), 0x00000000, 0x00000001);
							fVar3 = SYSTEM::TO_FLOAT(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_40001.f_2BB8 * 1000));
							fVar4 = (SYSTEM::TO_FLOAT(Global_40001.f_2BB7) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(iParam0, iVar0, fVar2);
							bVar5 = 0x00000001;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = 0x00000001;
				}
			}
			else if (bVar6)
			{
				bVar5 = 0x00000001;
			}
		}
		else if (bVar6)
		{
			bVar5 = 0x00000001;
		}
	}
	else if (bVar6)
	{
		bVar5 = 0x00000001;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_80.f_6[iParam0 /*204*/].f_46));
			if (iVar0 > 0xFFFFFFFF)
			{
				func_11(&(Local_80.f_6[iParam0 /*204*/].f_46), 0x00000000, 0x00000001);
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_4(int iParam0, int iParam1, float fParam2)
{
	Local_80.f_6[iParam0 /*204*/].f_3[iParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_11(uParam0, bParam2, 0x00000000);
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

float func_6(int iParam0, int iParam1)
{
	return Local_80.f_6[iParam0 /*204*/].f_3[iParam1];
}

int func_7(int iParam0)
{
	return Local_80.f_6[iParam0 /*204*/].f_2;
}

int func_8(int iParam0)
{
	return Local_80.f_6[iParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

void func_10(int iParam0)
{
	Local_80.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
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

void func_12()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		switch (func_15(iVar0))
		{
			case 0x00000000:
				if (func_14(iVar0))
				{
					if (!func_18(&(Local_80.f_1.f_1)))
					{
						Local_80.f_1.f_3 = { Var1 };
						func_11(&(Local_80.f_1.f_1), 0x00000000, 0x00000001);
					}
					if (!func_18(&(Local_80.f_6[iVar0 /*204*/].f_46)))
					{
						func_11(&(Local_80.f_6[iVar0 /*204*/].f_46), 0x00000000, 0x00000001);
					}
					func_13(iVar0, 0x00000001);
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_D5, 0x00000002))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_D5), 0x00000002);
					}
				}
				break;
			
			case 0x00000001:
				if (!func_14(iVar0))
				{
					func_13(iVar0, 0x00000002);
				}
				break;
			
			case 0x00000002:
				if (func_14(iVar0))
				{
					func_13(iVar0, 0x00000001);
				}
				break;
		}
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0 /*204*/] = iParam1;
}

bool func_14(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_24;
}

int func_15(int iParam0)
{
	return Local_80.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_80 = iParam0;
}

int func_17(var uParam0)
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

bool func_18(var uParam0)
{
	return uParam0->f_1;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_11(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_20()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	char* sVar9;
	bool bVar10;
	
	func_487();
	func_486();
	func_484();
	if (func_482())
	{
		func_360(iVar0);
	}
	func_344(0x0000008D, func_359(0x00000000), &uLocal_648, SYSTEM::TO_FLOAT(Global_40001.f_2CE9), 0x447A0000, iLocal_647);
	if (func_303(0x00000000, 0x00000001))
	{
		func_302();
	}
	switch (func_667())
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			func_301();
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000001)
			{
				func_267(iVar0);
				func_266(iVar0);
				func_264(iVar0);
				if (iLocal_643 == unk_0x57270EE11514DC67())
				{
					if (!func_262(0x00000001, 0x00000000))
					{
						if (func_261(unk_0x57270EE11514DC67(), iVar0))
						{
							if (func_260(unk_0xD803B885F5E47A62()) == 0x0000008D)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000002))
								{
									unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000002);
									func_241(0x00000001);
								}
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000005))
							{
								unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000005);
							}
							if (func_8(iVar0) == unk_0x57270EE11514DC67())
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000014))
								{
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000014);
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000004))
						{
							if (func_8(iVar0) == unk_0x57270EE11514DC67())
							{
								unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000004);
							}
						}
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000002))
						{
							unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000002);
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000005))
						{
							unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000005);
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000004))
						{
							unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000004);
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000006))
						{
							unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000006);
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000007))
						{
							unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000007);
						}
					}
				}
				if (func_15(iVar0) == 0x00000000)
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000008))
					{
						if (!unk_0xFEBC1E4EC9E001F0())
						{
							if (!func_240())
							{
								if (iLocal_643 == unk_0x57270EE11514DC67())
								{
									if (!func_303(0x00000000, 0x00000000))
									{
										if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
											{
												func_239("KOTC_1STHELP", 0x00007530);
												func_238(0x00000000);
												unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0x00000000);
												unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000008);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_237("KOTC_1STHELP"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000008))
					{
						unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000008);
					}
				}
				if (iLocal_643 == unk_0x57270EE11514DC67())
				{
					if (func_236(iVar0) <= 500f)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000009))
						{
							unk_0x51B096AAC60548C1(0f);
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000009);
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000009))
					{
						unk_0x51B096AAC60548C1(1f);
						unk_0x0674E58A79778E99(&iLocal_85, 0x00000009);
					}
				}
				if (iLocal_643 != 0xFFFFFFFF)
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000E) && func_8(iVar0) != iLocal_643)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000015))
						{
							func_235(0x00000051);
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000015);
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000015))
					{
						unk_0x0674E58A79778E99(&iLocal_85, 0x00000015);
					}
				}
				if (func_15(iVar0) != 0x00000000)
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000001A))
					{
						func_209(0x0000008D, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000001A);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000001))
					{
						if (iLocal_643 != 0xFFFFFFFF)
						{
							if (!func_303(0x00000000, 0x00000000))
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[iLocal_643 /*18*/].f_1))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[iLocal_643 /*18*/].f_1))
									{
										if (func_8(iVar0) != 0xFFFFFFFF)
										{
											if (func_8(iVar0) != iLocal_643)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_208(unk_0xD803B885F5E47A62(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_206(0x00000051, sVar1, unk_0x6E524813889AECF8(func_7(iVar0)), func_207(), 0xFFFFFFFF, "KOTC_START", func_207());
											}
											else
											{
												func_205(0x00000051, "KOTC_START2", "KOTC_STRAP1", func_207(), 0xFFFFFFFF, func_207(), 0x00000001, 0x00000000);
												unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000E);
												unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000F);
											}
										}
										else
										{
											func_205(0x00000051, "KOTC_START", "KOTC_STRAP3", func_207(), 0xFFFFFFFF, func_207(), 0x00000001, 0x00000000);
										}
										unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000001);
									}
								}
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000002))
					{
						if (func_204(0x00000051))
						{
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000002);
						}
					}
					else if (iLocal_643 != 0xFFFFFFFF)
					{
						if (func_8(iVar0) == iLocal_643)
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000E))
							{
								if (!func_303(0x00000000, 0x00000000))
								{
									if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[iLocal_643 /*18*/].f_1))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[iLocal_643 /*18*/].f_1))
										{
											func_205(0x00000051, "KOTC_START2", "KOTC_STRAP1", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
											unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000E);
										}
									}
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000F))
							{
								if (func_204(0x00000051))
								{
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000F);
								}
							}
						}
						else
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000E))
							{
								unk_0x0674E58A79778E99(&iLocal_85, 0x0000000E);
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000F))
							{
								unk_0x0674E58A79778E99(&iLocal_85, 0x0000000F);
							}
						}
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000E))
						{
							unk_0x0674E58A79778E99(&iLocal_85, 0x0000000E);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000F))
						{
							unk_0x0674E58A79778E99(&iLocal_85, 0x0000000F);
						}
					}
				}
				else
				{
					func_203();
				}
				if (func_15(iVar0) == 0x00000001)
				{
					if (func_8(iVar0) != 0xFFFFFFFF)
					{
						if (iLocal_643 != 0xFFFFFFFF)
						{
							if (func_8(iVar0) == iLocal_643)
							{
								if (!func_303(0x00000001, 0x00000000))
								{
									func_200("KOTC_KINGOB1", 0x00000000);
								}
								else
								{
									func_203();
								}
								if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000A))
								{
									if (iLocal_643 == unk_0x57270EE11514DC67())
									{
										if (!unk_0xFEBC1E4EC9E001F0())
										{
											if (!func_240())
											{
												if (!func_303(0x00000000, 0x00000000))
												{
													if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
													{
														if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
														{
															if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000002))
															{
																if (!func_208(unk_0xD803B885F5E47A62(), func_7(iVar0)))
																{
																	if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000A))
																	{
																		func_239("KOTC_YOUKNG", 0x00007530);
																		func_238(0x00000001);
																		unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000006);
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
							}
							else
							{
								if (iLocal_643 == unk_0x57270EE11514DC67())
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000007))
									{
										if (func_199(unk_0x57270EE11514DC67()))
										{
											if (!unk_0xFEBC1E4EC9E001F0())
											{
												if (!func_240())
												{
													if (!func_303(0x00000000, 0x00000000))
													{
														if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
														{
															if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
															{
																if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000002))
																{
																	if (!func_208(unk_0xD803B885F5E47A62(), func_7(iVar0)))
																	{
																		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000007))
																		{
																			func_239("KOTC_OTHRKG", 0x00007530);
																			func_238(0x00000001);
																			unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000007);
																		}
																	}
																	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000B))
																	{
																		func_170("KOTC_OTHRKGGN", func_198(), 0x00000001, "KOTC_KINGBLIP", func_171(unk_0xD803B885F5E47A62(), 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000), 0xFFFFFFFF);
																		func_238(0x00000001);
																		unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000B);
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
								if (((func_199(iLocal_643) || unk_0xEAE0D21A50E6C7F4(Local_84[iLocal_643 /*5*/].f_4, 0x0000000C)) && unk_0xEAE0D21A50E6C7F4(iLocal_636, func_8(iVar0))) && !func_303(0x00000001, 0x00000000))
								{
									if (func_208(unk_0xD803B885F5E47A62(), func_7(iVar0)))
									{
										func_167("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 0x00000001, func_171(unk_0xD803B885F5E47A62(), 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000), 0x00000000);
									}
									else
									{
										func_156("KOTC_PERMKNG", &(Local_90[func_8(iVar0) /*18*/].f_2), 0x00000000, 0x00000001);
									}
								}
								else
								{
									func_203();
								}
							}
						}
						else
						{
							func_203();
						}
					}
					else if (iLocal_643 != 0xFFFFFFFF)
					{
						if (!func_303(0x00000001, 0x00000000))
						{
							if (func_261(unk_0x57270EE11514DC67(), iVar0))
							{
								func_200("KOTC_KLLALL", 0x00000000);
							}
							else
							{
								func_200("KOTC_ENTER", 0x00000000);
							}
						}
						else
						{
							func_203();
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000A))
						{
							if (iLocal_643 == unk_0x57270EE11514DC67())
							{
								if (func_199(unk_0x57270EE11514DC67()))
								{
									if (!unk_0xFEBC1E4EC9E001F0())
									{
										if (!func_240())
										{
											if (!func_303(0x00000000, 0x00000000))
											{
												if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
												{
													if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
													{
														if (func_155(iVar0))
														{
															func_239("KOTC_CONTS", 0x00007530);
															func_238(0x00000001);
															unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000A);
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
					else
					{
						func_203();
					}
				}
				if (iLocal_643 != 0xFFFFFFFF)
				{
					if (func_15(iVar0) == 0x00000002)
					{
						if (func_199(unk_0x57270EE11514DC67()) && !func_303(0x00000001, 0x00000000))
						{
							func_200("KOTC_ENTER", 0x00000000);
						}
						else
						{
							func_203();
						}
					}
				}
				else
				{
					func_203();
				}
				func_128(iVar0);
				if (func_260(unk_0xD803B885F5E47A62()) == 0x0000008D)
				{
					func_89(iVar0);
				}
				func_88();
				iVar0++;
			}
			break;
		
		case 0x00000002:
			iVar3 = 0xFFFFFFFF;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000001)
			{
				func_86(iVar0);
				func_84(iVar0);
				iVar0++;
			}
			func_203();
			func_302();
			func_80();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = 0xFFFFFFFF;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000001)
			{
				if (iLocal_643 != 0xFFFFFFFF)
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000014))
					{
						iVar2 = 0x00000000;
						while (iVar2 < 0x00000003)
						{
							if (Local_80.f_6[iVar0 /*204*/].f_4A[iVar2 /*4*/] == iLocal_643)
							{
								if (Local_80.f_6[iVar0 /*204*/].f_4A[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0x00000000:
											sVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											bVar6 = 0x00000001;
											break;
										
										case 0x00000001:
											sVar5 = "KOTC2ND_STR";
											bVar6 = 0x00000001;
											break;
										
										case 0x00000002:
											sVar5 = "KOTC3RD_STR";
											bVar6 = 0x00000001;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_128(iVar0);
				if (Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/] == 0xFFFFFFFF)
				{
					bVar8 = 0x00000001;
				}
				else if (!unk_0xEAE0D21A50E6C7F4(iLocal_636, Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/]))
				{
					bVar8 = 0x00000001;
				}
				else if (Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/].f_3 <= 0f)
				{
					bVar8 = 0x00000001;
				}
				iVar0++;
			}
			if (bVar6)
			{
				Local_81.f_5 = 0x00000001;
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000001) && func_79())
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000003))
				{
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000001)
					{
						if (func_15(iVar0) == 0x00000000)
						{
							if (!func_303(0x00000000, 0x00000000))
							{
								func_78("KOTC_NOENTRY");
							}
						}
						else if (bVar8)
						{
							if (iLocal_643 != 0xFFFFFFFF)
							{
								if (!func_303(0x00000000, 0x00000000))
								{
									if (!func_303(0x00000000, 0x00000000))
									{
										if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[iLocal_643 /*18*/].f_1))
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[iLocal_643 /*18*/].f_1))
											{
												if (func_199(iLocal_643))
												{
													func_205(0x00000044, "KOTC_OVER1", "KOTC_NOWIN", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
												}
												else
												{
													func_78("KOTC_NOWIN");
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (iLocal_643 != 0xFFFFFFFF)
							{
								if (!func_303(0x00000000, 0x00000000))
								{
									if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[iLocal_643 /*18*/].f_1))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[iLocal_643 /*18*/].f_1))
										{
											if (func_199(iLocal_643))
											{
												func_76(0x00000040, func_77(Local_80.f_6[iVar0 /*204*/].f_4A[iVar7 /*4*/].f_3), sVar5, sVar4, 0x00000001, 0x00003A98, 0xBF800000, 0x00000002);
											}
											else
											{
												func_75(sVar5, func_77(Local_80.f_6[iVar0 /*204*/].f_4A[iVar7 /*4*/].f_3));
											}
										}
									}
								}
							}
						}
						else if (iLocal_643 != 0xFFFFFFFF)
						{
							if (!func_303(0x00000000, 0x00000000))
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[iLocal_643 /*18*/].f_1))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[iLocal_643 /*18*/].f_1))
									{
										if (func_199(iLocal_643))
										{
											sVar5 = "KOTC_OVER3";
											if (func_73(Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/].f_1, 0x00000001))
											{
												sVar9 = func_63(Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/].f_1);
											}
											else
											{
												sVar9 = unk_0x6E524813889AECF8(Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/].f_1);
											}
											func_44(0x00000048, func_77(Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/].f_3), sVar5, sVar9, sVar4, 0x00000001, 0x00003A98, 0x00000002);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_32(sVar5, Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/].f_1, 0x00000001, func_77(Local_80.f_6[iVar0 /*204*/].f_4A[0x00000000 /*4*/].f_3), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
						{
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000003);
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000003))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000004))
					{
						if (iLocal_643 != 0xFFFFFFFF)
						{
							if (((((((func_204(0x00000040) || func_204(0x00000048)) || func_204(0x00000044)) || !func_199(iLocal_643)) || func_303(0x00000001, 0x00000001)) || unk_0x798A3F1296751F46()) || func_15(0x00000000) == 0x00000000) || iLocal_643 == 0xFFFFFFFF)
							{
								unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000004);
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000004);
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000004))
				{
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000001)
					{
						func_622(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = 0x00000001;
			if (func_303(0x00000000, 0x00000000))
			{
				bVar10 = 0x00000000;
			}
			if (func_15(0x00000000) == 0x00000000)
			{
				bVar10 = 0x00000000;
			}
			if (iLocal_643 == 0xFFFFFFFF)
			{
				bVar10 = 0x00000000;
			}
			if (func_21(&uLocal_92, bVar10) && unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000004))
			{
				if (!func_240() || unk_0x798A3F1296751F46())
				{
					unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000011);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000005))
					{
						unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000001);
						func_505(0x00000003);
					}
				}
			}
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
	}
}

int func_21(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0x00000000 && !func_240()) && !(func_31(unk_0xD803B885F5E47A62(), 0x00000000) && (func_30(unk_0xD803B885F5E47A62()) || func_28(unk_0xD803B885F5E47A62())))) && !func_25(unk_0xD803B885F5E47A62()))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0x00000000, 0x00000000);
			}
			else if (func_5(&(uParam0->f_3), 0x000003E8, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000019);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000000);
					func_11(&(uParam0->f_5), 0x00000000, 0x00000000);
				}
				func_11(&(uParam0->f_1), 0x00000000, 0x00000000);
				func_23(uParam0, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 0x00000BB8, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
			}
			else
			{
				bVar0 = 0x00000001;
			}
			if (bVar0)
			{
				func_22();
				func_23(uParam0, 0x00000002);
			}
			break;
		
		case 0x00000002:
			func_22();
			if (func_5(&(uParam0->f_1), 0x00003A98, 0x00000000))
			{
				if (func_237("AMEV_LBD_HELP"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				func_23(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000003:
			if (func_5(&(uParam0->f_1), 0x00005BCC, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
				func_23(uParam0, 0x00000004);
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
			return 0x00000001;
	}
	return 0x00000000;
}

void func_22()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0x757EF87A33649210())
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000001);
			func_239("AMEV_LBD_HELP", 0xFFFFFFFF);
			func_238(0x00000001);
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000000);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_25920E = 0x00000001;
}

int func_25(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000002;
			}
		}
	}
	return 0x00000000;
}

int func_26(int iParam0)
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

int func_27()
{
	return 0xFFFFFFFF;
}

bool func_28(int iParam0)
{
	return func_29(iParam0, 0x00000013);
}

bool func_29(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_29(iParam0, 0x00000009);
	}
	return 0x00000000;
}

int func_31(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_32(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(iParam2);
		unk_0xD06AC7C87A34A6AD(func_42(&Var1));
		unk_0x6D99DF8263D35CE5(iParam3);
		if (!bParam6)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		}
		else
		{
			Global_265942 = { func_41(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942))
			{
				iVar2 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE(&(Global_2658FC.f_16), "Leader") && Global_2658FC.f_1E == 0x00000000)
				{
					iVar2 = 0x00000001;
				}
				if (Global_2658FC.f_15 > 0x00000000)
				{
					iVar3 = 0x00000000;
				}
				else
				{
					iVar3 = 0x00000001;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_40(&Var1) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar3, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar2, 0x00000000, Global_2658FC, &Var1, Global_140CF2, Global_140CF3, Global_140CF4);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar3, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar2, 0x00000000, Global_2658FC, Global_140CF2, Global_140CF3, Global_140CF4);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
			}
		}
		func_33(0x0000000E, sParam0, 0x00000001, &Var1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_39() || !unk_0xA14BB9332558B949()) || !func_36(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_34(iParam2);
	if (iVar0 >= 0x00000000 && iVar0 < 0x00000005)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = iParam0;
		Global_197EBE.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000000] = iParam4;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000001] = iParam5;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000002] = iParam6;
		Global_197EBE.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_197EBE.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000000 /*6*/]), sParam9, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000001 /*6*/]), sParam10, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000002 /*6*/]), sParam11, 24);
	}
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_35(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_197EBE++;
	if (Global_197EBE > 0x00000005)
	{
		Global_197EBE = 0x00000005;
		return Global_197EBE;
	}
	return (Global_197EBE - 0x00000001);
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_36(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_37(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_37(int iParam0, bool bParam1)
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

int func_38()
{
	return Global_1407E9;
}

bool func_39()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

struct<16> func_40(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_41(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

var func_42(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_43(&cVar0);
}

var func_43(char[4] cParam0)
{
	return cParam0;
}

int func_44(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_62(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_19), sParam3, 64);
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 0x00000001)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0x00000000;
		}
	}
	func_61(uParam0, uParam0->f_11);
	func_59(uParam0);
	if (func_58())
	{
		func_59(uParam0);
	}
	if (func_57(uParam0->f_1))
	{
		func_50();
		if (Global_2537E2.f_AA3[0x00000000 /*80*/].f_2 == 0x00000000)
		{
			Global_2537E2.f_AA3[0x00000000 /*80*/] = { *uParam0 };
			return 0x00000001;
		}
		if (((Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x0000000D || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x00000035) || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x00000036) || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x0000003A)
		{
			Global_2537E2.f_AA3[0x00000000 /*80*/].f_2 = 0x00000005;
		}
		iVar0 = 0x00000002;
		while (iVar0 >= 0x00000001)
		{
			Global_2537E2.f_AA3[iVar0 + 1 /*80*/] = { Global_2537E2.f_AA3[iVar0 /*80*/] };
			iVar0 = (iVar0 + 0xFFFFFFFF);
		}
		Global_2537E2.f_AA3[0x00000001 /*80*/] = { *uParam0 };
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 == 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0x00000000)
			{
				func_50();
			}
			return 0x00000001;
		}
		else
		{
			if (uParam0->f_1 == 0x00000001)
			{
				func_48(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000002);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			}
			if (uParam0->f_1 == 0x00000056 && !func_47(uParam0->f_45, 0x00000080))
			{
				if (func_46(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
					func_48(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000058:
		case 0x00000057:
		case 0x0000005B:
		case 0x0000005C:
		case 0x00000056:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000059:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x0000005A:
		case 0x0000006E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_48(var uParam0, int iParam1)
{
	func_49(uParam0, iParam1);
}

void func_49(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_50()
{
	bool bVar0;
	
	if (Global_2537E2.f_BE6)
	{
		return;
	}
	if (!Global_12C5A)
	{
		Global_12C5A = 0x00000001;
		bVar0 = 0x00000001;
	}
	func_51();
	if (bVar0)
	{
		Global_12C5A = 0x00000000;
	}
}

void func_51()
{
	Global_2537E2.f_BE7 = 0x00000000;
	Global_2537E2.f_BE7.f_242 = 0x00000000;
	func_55(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0x00000000;
	func_52(&(Global_2537E2.f_BE7.f_1));
}

void func_52(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_54(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_53(0x00000000);
}

void func_53(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_54(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_55(var uParam0)
{
	func_56(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

void func_56(var uParam0)
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

int func_57(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 0x00000003 || iParam0 == 0x00000004) || iParam0 == 0x00000005) || iParam0 == 0x00000006) || iParam0 == 0x0000000B) || iParam0 == 0x0000000C) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E) || iParam0 == 0x00000018) || iParam0 == 0x00000020) || iParam0 == 0x0000001F) || iParam0 == 0x0000001A) || iParam0 == 0x00000019) || iParam0 == 0x00000038) || iParam0 == 0x00000007) || iParam0 == 0x00000008) || iParam0 == 0x00000009) || iParam0 == 0x0000000A) || iParam0 == 0x00000068) || iParam0 == 0x00000064) || iParam0 == 0x00000067) || iParam0 == 0x00000069) || iParam0 == 0x0000006E)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_58()
{
	return Global_2564C8.f_11;
}

void func_59(var uParam0)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_48 = func_207();
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
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
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_61(var uParam0, int iParam1)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_49 = 0x00000001;
	}
	if (iParam1 == func_27() || !func_756(iParam1, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_47 == 0x00000001)
		{
			uParam0->f_49 = func_171(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

void func_62(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_27();
	uParam1->f_12 = func_27();
	uParam1->f_13 = func_27();
	uParam1->f_14 = func_27();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 0x00000001;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 0x00000001;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 0x00000001;
	uParam1->f_4A = 0x00000001;
	uParam1->f_4B = 0x00000001;
	uParam1->f_4C = 0x00000000;
	uParam1->f_4D = 0x00000000;
	uParam1->f_49 = 0x00000000;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

char* func_63(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_72(&(Global_18D84D[iParam0 /*615*/].f_B.f_68));
		return sVar0;
	}
	if (Global_18D84D[iParam0 /*615*/].f_B.f_78 != Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_78)
	{
		sVar0 = func_67(iParam0, 0x00000000);
		return sVar0;
	}
	if (((func_29(iParam0, 0x0000001C) || func_29(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_66(iParam0)) && !func_65(iParam0))
	{
		return func_67(iParam0, 0x00000000);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_27())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_67(iVar1, 0x00000000);
			}
		}
	}
	if (iVar1 != func_27())
	{
		sVar0 = func_72(&(Global_18D84D[iVar1 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_67(iVar1, 0x00000000);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_64(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_27();
}

int func_65(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_66(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_27())
	{
		Var0 = { func_41(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				return 0x00000000;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

char* func_67(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0, 0x00000001))
		{
			return func_68();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_68()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

bool func_69(int iParam0, bool bParam1)
{
	return func_70(iParam0, bParam1, 0x00000001);
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_71(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_27() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_27())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_27())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

var func_72(var uParam0)
{
	return uParam0;
}

bool func_73(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_74(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_27();
}

int func_74(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_27())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_75(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
	func_33(0x00000003, sParam0, 0x00000001, "", iParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

int func_76(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_62(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_48 = iParam7;
	return func_45(&Var0);
}

int func_77(float fParam0)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR(fParam0);
	iVar0 = (iVar0 / Global_40001.f_2BB7);
	iVar0 = (iVar0 * Global_40001.f_2BB7);
	return iVar0;
}

int func_78(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
	func_33(0x00000000, sParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

bool func_79()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000019);
}

void func_80()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000008)
		{
			func_81(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_513(iParam0);
	if (iParam1 != 0xFFFFFFFF)
	{
		iVar0 = iParam1;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_86, iVar0))
	{
		unk_0x4A847DA194A5532B(func_83(iParam0, 0x00000000), 0x00000000, func_82(iParam0, 0x00000001));
		if (iVar0 == 0x00000004)
		{
			unk_0x4A847DA194A5532B(func_83(iParam0, 0x00000001), 0x00000000, func_82(iParam0, 0x00000001));
		}
		unk_0x0674E58A79778E99(&iLocal_86, iVar0);
	}
}

int func_82(int iParam0, bool bParam1)
{
	if (func_8(iParam0) <= 0xFFFFFFFF)
	{
		if (bParam1)
		{
			return 0x00000015;
		}
		return 0x00000015;
	}
	else if (func_8(iParam0) == unk_0x57270EE11514DC67())
	{
		return 0x00000009;
	}
	else if (func_208(unk_0xD803B885F5E47A62(), func_7(iParam0)))
	{
		return func_171(unk_0xD803B885F5E47A62(), 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
	}
	return 0x00000006;
}

int func_83(int iParam0, bool bParam1)
{
	switch (func_513(iParam0))
	{
		case 0x00000000:
			return 0x00000006;
		
		case 0x00000001:
			return 0x00000009;
		
		case 0x00000002:
			return 0x00000008;
		
		case 0x00000003:
			return 0x0000000A;
		
		case 0x00000005:
			return 0x0000000B;
		
		case 0x00000006:
			return 0x0000000C;
		
		case 0x00000007:
			return 0x0000000D;
		
		case 0x00000004:
			if (!bParam1)
			{
				return 0x00000007;
			}
			else
			{
				return 0x0000000E;
			}
			break;
	}
	return 0x00000006;
}

void func_84(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(func_85(iParam0)))
	{
		unk_0x142CC44DB769B57E(&(Local_99[iParam0 /*68*/].f_1C));
	}
}

var func_85(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_1C;
}

void func_86(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(func_87(iParam0)))
	{
		unk_0x142CC44DB769B57E(&(Local_99[iParam0 /*68*/].f_1B));
	}
}

var func_87(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_1B;
}

void func_88()
{
	bool bVar0;
	
	if (iLocal_643 != 0xFFFFFFFF)
	{
		if (func_199(iLocal_643))
		{
			bVar0 = 0x00000001;
		}
	}
	if (bVar0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000010))
		{
			unk_0x8BC9595FD2792B5D("MP_Deathmatch_Type_Challenge_Scene");
			unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000010);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000010))
	{
		unk_0x8910D3D58E0132B8("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x0674E58A79778E99(&iLocal_85, 0x00000010);
	}
}

void func_89(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_199(unk_0x57270EE11514DC67()) && !func_303(0x00000001, 0x00000001)) && iLocal_643 == unk_0x57270EE11514DC67()) && !func_113(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000)) && !func_112(unk_0xD803B885F5E47A62())) && !func_111())
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000012))
		{
			if (iLocal_647 == 0x00000000)
			{
				iLocal_647 = 0x00000001;
			}
			func_100(0x00000001, 0x00000001, 0x00000000, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000, 0x40A00000, 0x00000000, 0x3F8CCCCD, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x42200000);
			func_95();
			unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000012);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000012))
	{
		if (iLocal_647)
		{
			iLocal_647 = 0x00000000;
		}
		func_90();
		func_100(0x00000000, 0x00000001, 0x00000000, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000, 0x40A00000, 0x00000000, 0x3F8CCCCD, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x42200000);
		unk_0x0674E58A79778E99(&iLocal_85, 0x00000012);
	}
}

void func_90()
{
	if (func_94() && !func_93())
	{
		func_92();
	}
	func_91();
	Global_24B2D0.f_2C2 = 0x00000000;
}

void func_91()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 0x3F800000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000064)
	{
		Global_24B2D0.f_2C2.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_92()
{
	if (func_93())
	{
		if (Global_24B2D0.f_2C2.f_206 == Global_24B2D0.f_4C9.f_206)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_4C9), &(Global_24B2D0.f_2C2), 0x00000207);
		Global_24B2D0.f_1ED = { Global_24B2D0.f_1E7 };
		Global_24B2D0.f_6D0 = 0x00000001;
	}
}

int func_93()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_94()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_95()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000003C)
		{
			func_98(func_513(iVar0), iVar1, &vVar2, &uVar3, &uVar4);
			func_96(vVar2, uVar3, uVar4);
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(vector3 vParam0, var uParam1, var uParam2)
{
	func_97(vParam0, uParam1, uParam2);
}

void func_97(vector3 vParam0, var uParam1, var uParam2)
{
	if (!Global_24B2D0.f_6D1)
	{
	}
	if (Global_24B2D0.f_2C2 < 0x00000064)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_24B2D0.f_2C2.f_1[Global_24B2D0.f_2C2 /*5*/] = { vParam0 };
		Global_24B2D0.f_2C2.f_1[Global_24B2D0.f_2C2 /*5*/].f_3 = uParam1;
		Global_24B2D0.f_2C2.f_1[Global_24B2D0.f_2C2 /*5*/].f_4 = uParam2;
		Global_24B2D0.f_2C2++;
	}
}

void func_98(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000001:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000002:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000003:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000004:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000005:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000006:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000007:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000008:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000009:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000A:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000B:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000C:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000D:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000E:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000F:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000010:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000011:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000012:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000013:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000014:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000015:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000016:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000017:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000018:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000019:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001A:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001B:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001C:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001D:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001E:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001F:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000020:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000021:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000022:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000023:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000024:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000025:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000026:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000027:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000028:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000029:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002A:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002B:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002C:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002D:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002E:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002F:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000030:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000031:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000032:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000033:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000034:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000035:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000036:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000037:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000038:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000039:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003A:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003B:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000001:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000002:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000003:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000004:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000005:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000006:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000007:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000008:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000009:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000A:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000B:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000C:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000D:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000E:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000F:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000010:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000011:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000012:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000013:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000014:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000015:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000016:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000017:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000018:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000019:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001A:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001B:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001C:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001D:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001E:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000001F:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000020:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000021:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000022:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000023:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000024:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000025:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000026:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000027:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000028:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000029:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002A:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002B:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002C:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002D:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002E:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002F:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000030:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000031:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000032:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000033:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000034:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000035:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000036:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000037:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000038:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000039:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003A:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003B:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000001:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000002:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000003:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000004:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000005:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000006:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000007:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000008:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000009:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000A:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000B:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000C:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000D:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000E:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000F:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000010:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000011:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000012:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000013:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000014:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000015:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000016:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000017:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000018:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000019:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001A:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001B:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001C:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001D:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001E:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000001F:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000020:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000021:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000022:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000023:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000024:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000025:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000026:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000027:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000028:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000029:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002A:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002B:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002C:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002D:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002E:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002F:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000030:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000031:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000032:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000033:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000034:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000035:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000036:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000037:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000038:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000039:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003A:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003B:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000001:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000002:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000003:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000004:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000005:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000006:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000007:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000008:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000009:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000A:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000B:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000C:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000D:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000E:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000F:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000010:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000011:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000012:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000013:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000014:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000015:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000016:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000017:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000018:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000019:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001A:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001B:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001C:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001D:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001E:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001F:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000020:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000021:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000022:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000023:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000024:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000025:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000026:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000027:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000028:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000029:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002A:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002B:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002C:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002D:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002E:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002F:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000030:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000031:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000032:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000033:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000034:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000035:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000036:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000037:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000038:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000039:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003A:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003B:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000001:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000002:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000003:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000004:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000005:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000006:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000007:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000008:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000009:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000A:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000B:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000C:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000D:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000E:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000F:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000010:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000011:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000012:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000013:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000014:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000015:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000016:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000017:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000018:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000019:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001A:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001B:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001C:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001D:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001E:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001F:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000020:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000021:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000022:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000023:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000024:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000025:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000026:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000027:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000028:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000029:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002A:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002B:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002C:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002D:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002E:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002F:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000030:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000031:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000032:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000033:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000034:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000035:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000036:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000037:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000038:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000039:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003A:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003B:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000001:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000002:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000003:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000004:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000005:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000006:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000007:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000008:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000009:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000A:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000B:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000C:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000D:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000E:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000F:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000010:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000011:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000012:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000013:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000014:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000015:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000016:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000017:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000018:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000019:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001A:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001B:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001C:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001D:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001E:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001F:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000020:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000021:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000022:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000023:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000024:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000025:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000026:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000027:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000028:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000029:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002A:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002B:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002C:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002D:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002E:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002F:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000030:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000031:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000032:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000033:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000034:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000035:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000036:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000037:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000038:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000039:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003A:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003B:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000001:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000002:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000003:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000004:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000005:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000006:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000007:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000008:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000009:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000A:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000B:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000C:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000D:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000E:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000F:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000010:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000011:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000012:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000013:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000014:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000015:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000016:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000017:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000018:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000019:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001A:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001B:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001C:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001D:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001E:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000001F:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000020:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000021:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000022:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000023:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000024:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000025:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000026:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000027:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000028:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000029:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002A:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002B:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002C:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002D:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002E:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002F:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000030:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000031:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000032:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000033:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000034:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000035:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000036:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000037:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000038:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000039:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003A:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003B:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000001:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000002:
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000003:
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000004:
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000005:
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000006:
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000007:
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000008:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000009:
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000A:
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000B:
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000C:
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000000D:
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x0000000E:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000000F:
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000010:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000011:
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000012:
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000013:
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_99(iParam0, 0x00000000);
					break;
				
				case 0x00000014:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000015:
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000016:
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000017:
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000018:
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000019:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001A:
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001B:
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001C:
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001D:
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001E:
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x0000001F:
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000020:
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000021:
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000022:
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000023:
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000024:
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000025:
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000026:
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000027:
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_99(iParam0, 0x00000001);
					break;
				
				case 0x00000028:
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000029:
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002A:
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002B:
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002C:
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002D:
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002E:
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000002F:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000030:
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000031:
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000032:
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000033:
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000034:
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000035:
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000036:
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000037:
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000038:
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x00000039:
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003A:
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
				
				case 0x0000003B:
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_99(iParam0, 0x00000002);
					break;
			}
			break;
	}
}

float func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return Global_40001.f_2C91;
				
				case 0x00000001:
					return Global_40001.f_2C92;
				
				case 0x00000002:
					return Global_40001.f_2C93;
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return Global_40001.f_2C94;
				
				case 0x00000001:
					return Global_40001.f_2C95;
				
				case 0x00000002:
					return Global_40001.f_2C96;
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return Global_40001.f_2C97;
				
				case 0x00000001:
					return Global_40001.f_2C98;
				
				case 0x00000002:
					return Global_40001.f_2C99;
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return Global_40001.f_2C9A;
				
				case 0x00000001:
					return Global_40001.f_2C9B;
				
				case 0x00000002:
					return Global_40001.f_2C9C;
				
				default:
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					return Global_40001.f_2C9D;
				
				case 0x00000001:
					return Global_40001.f_2C9E;
				
				case 0x00000002:
					return Global_40001.f_2C9F;
				
				default:
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000000:
					return Global_40001.f_2CA0;
				
				case 0x00000001:
					return Global_40001.f_2CA1;
				
				case 0x00000002:
					return Global_40001.f_2CA2;
				
				default:
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000000:
					return Global_40001.f_2CA3;
				
				case 0x00000001:
					return Global_40001.f_2CA4;
				
				case 0x00000002:
					return Global_40001.f_2CA5;
				
				default:
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000000:
					return Global_40001.f_2CA6;
				
				case 0x00000001:
					return Global_40001.f_2CA7;
				
				case 0x00000002:
					return Global_40001.f_2CA8;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_100(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_94())
		{
			func_92();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_90();
		func_103(0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_2C2.f_1FB = iParam11;
		Global_24B2D0.f_2C2.f_200 = iParam3;
		Global_24B2D0.f_2C2.f_201 = iParam4;
		Global_24B2D0.f_2C2.f_1FE = iParam5;
		Global_24B2D0.f_2C2.f_1FF = iParam6;
		Global_24B2D0.f_2C2.f_202 = iParam7;
		Global_24B2D0.f_2C2.f_203 = iParam8;
		Global_24B2D0.f_2C2.f_204 = iParam9;
		Global_24B2D0.f_2C2.f_205 = iParam14;
		Global_24B2D0.f_2C2.f_1FC = iParam12;
		Global_24B2D0.f_2C2.f_1FD = iParam13;
		Global_24B2D0.f_6D1 = 0x00000001;
	}
	else
	{
		func_101();
	}
}

void func_101()
{
	if (func_94() && !func_93())
	{
		func_92();
	}
	if (func_93())
	{
		func_102();
	}
	else
	{
		func_90();
		func_103(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_6D1 = 0x00000000;
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

void func_102()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 0x00000207);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_27())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0x00000000) && func_104())
		{
			iParam0 = 0x00000017;
		}
	}
	if (iParam0 != 0x00000012 && iParam0 != 0x00000011)
	{
		Global_24D062 = 0x00000000;
	}
	Global_24B2D0.f_1E7 = iParam0;
	Global_24B2D0.f_1E7.f_1 = unk_0x0D0A574C76D769AC();
	Global_24B2D0.f_1E7.f_2 = iParam1;
	Global_24B2D0.f_1E7.f_3 = iParam2;
	Global_24B2D0.f_1E7.f_4 = iParam3;
	Global_24B2D0.f_1E7.f_5 = iParam4;
}

int func_104()
{
	if ((((((func_110(unk_0xD803B885F5E47A62()) == 0x000000E5 || func_110(unk_0xD803B885F5E47A62()) == 0x000000BF) || func_109()) || func_111()) || func_108(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 0x00000001) || (Global_24B2D0.f_6D1 && func_105(unk_0xD803B885F5E47A62())))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_105(int iParam0)
{
	if (func_107(iParam0))
	{
		return 0x00000001;
	}
	if (func_106(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_106(int iParam0)
{
	return func_29(iParam0, 0x00000014);
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

int func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0x00000000;
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
	return 0x00000000;
}

int func_109()
{
	if (Global_440000 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_110(int iParam0)
{
	if (func_31(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

bool func_111()
{
	return Global_180605;
}

int func_112(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000E))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_113(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_184507[iParam0 /*876*/].f_112.f_1C > 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
		if (func_127(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam3)
	{
		if (func_25(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam4)
	{
		if (func_126(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam5)
	{
		if (func_125(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam6)
	{
		if (func_124(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam7)
	{
		if (func_123(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam8)
	{
		if (func_122(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam9)
	{
		if (func_121(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam10)
	{
		if (func_120(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam11)
	{
		if (func_119(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (!bParam12)
	{
		if (func_118(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam13)
	{
		if (func_117(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam14)
	{
		if (func_116(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam15)
	{
		if (func_115(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam16)
	{
		if (func_114(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_114(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000011;
			}
		}
	}
	return 0x00000000;
}

int func_115(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000010;
			}
		}
	}
	return 0x00000000;
}

int func_116(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_117(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_118(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_119(int iParam0, bool bParam1)
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
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_27())
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_120(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_121(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_122(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_27())
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_123(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_124(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_125(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000004;
			}
		}
	}
	return 0x00000000;
}

int func_126(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_127(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_756(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_26(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000000;
			}
		}
	}
	return 0x00000000;
}

void func_128(int iParam0)
{
	if (func_15(iParam0) != 0x00000000)
	{
		func_360(iParam0);
		func_129(iParam0);
	}
}

void func_129(int iParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[3];
	
	if (iLocal_643 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_303(0x00000000, 0x00000000))
	{
		return;
	}
	iVar3 = (Global_40001.f_2BB4 + 1000 - func_9(&(Local_80.f_1.f_1), 0x00000000, 0x00000000));
	if (iVar3 < 0x00000000)
	{
		iVar3 = 0x00000000;
	}
	if (func_15(iParam0) == 0x00000000)
	{
		return;
	}
	if (iVar3 > 0x00007530)
	{
		iVar4 = 0x00000001;
	}
	else
	{
		iVar4 = 0x00000006;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_84[iLocal_643 /*5*/].f_4, 0x0000000C))
	{
		if (!func_199(iLocal_643))
		{
			func_152(iVar3, iVar4, func_153());
			return;
		}
	}
	func_151(iVar3);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/] = 0xFFFFFFFF;
		Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_1 = 0xFFFFFFFF;
		Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_2 = func_27();
		Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/] = Local_80.f_6[iParam0 /*204*/].f_4A[iVar0 /*4*/];
		Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_1 = Local_80.f_6[iParam0 /*204*/].f_4A[iVar0 /*4*/].f_1;
		Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_2 = Local_80.f_6[iParam0 /*204*/].f_4A[iVar0 /*4*/].f_2;
		Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_3 = SYSTEM::TO_FLOAT(func_77(Local_80.f_6[iParam0 /*204*/].f_4A[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		uVar1[iVar0] = func_77(Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_3);
		iVar5[iVar0] = 0x00000000;
		if (func_150(0x00000001))
		{
			if (Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_1 != 0xFFFFFFFF)
			{
				if (unk_0x40B8C182D63932FC(Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_1))
				{
					if (func_73(Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_1, 0x00000001))
					{
						iVar5[iVar0] = func_171(Local_99[iParam0 /*68*/].f_35[iVar0 /*4*/].f_1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
		}
		iVar0++;
	}
	iVar2 = func_77(func_148(iParam0, iLocal_643));
	func_131(Local_99[iParam0 /*68*/].f_35[0x00000000 /*4*/].f_1, Local_99[iParam0 /*68*/].f_35[0x00000001 /*4*/].f_1, Local_99[iParam0 /*68*/].f_35[0x00000002 /*4*/].f_1, uVar1[0x00000000], uVar1[0x00000001], uVar1[0x00000002], iVar2, iVar3, &uLocal_646, iVar4, func_153(), 0x00000001, iVar5[0x00000000], iVar5[0x00000001], iVar5[0x00000002]);
	if (Local_99[iParam0 /*68*/].f_35[0x00000000 /*4*/] == unk_0x57270EE11514DC67())
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000017))
		{
			if (func_130(0x00000001))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0x00000000);
			}
			else
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Enter_1st", "GTAO_FM_Events_Soundset", 0x00000000);
			}
			unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000017);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000017))
	{
		if (func_130(0x00000001))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0x00000000);
		}
		else
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Lose_1st", "GTAO_FM_Events_Soundset", 0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_85, 0x00000017);
	}
}

bool func_130(bool bParam0)
{
	return func_69(unk_0xD803B885F5E47A62(), bParam0);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_145(0x00000000) == 0x00000000)
	{
		return;
	}
	func_144();
	iVar1 = 0x00000000;
	if (((Global_259033[0x00000000] != iParam0 || Global_259033[0x00000001] != iParam1) || Global_259033[0x00000002] != iParam2) || *uParam8)
	{
		iVar1 = 0x00000001;
	}
	Global_259033[0x00000000] = iParam0;
	Global_259033[0x00000001] = iParam1;
	Global_259033[0x00000002] = iParam2;
	Global_259033[0x00000003] = 0x00000000;
	Global_259033[0x00000004] = 0x00000000;
	if (Global_259033[0x00000000] != func_27())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000000]);
			Global_259039[0x00000000 /*16*/] = { func_143(0x00000001, sVar0) };
		}
		if (iParam3 > 0x00000000)
		{
			func_140(iParam3, &(Global_259039[0x00000000 /*16*/]), 0xFFFFFFFF, 0x0000006D, 0x00000008, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam12, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000001] != func_27())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000001]);
			Global_259039[0x00000001 /*16*/] = { func_143(0x00000002, sVar0) };
		}
		if (iParam4 > 0x00000000)
		{
			func_140(iParam4, &(Global_259039[0x00000001 /*16*/]), 0xFFFFFFFF, 0x0000006C, 0x00000007, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam13, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000002] != func_27())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000002]);
			Global_259039[0x00000002 /*16*/] = { func_143(0x00000003, sVar0) };
		}
		if (iParam5 > 0x00000000)
		{
			func_140(iParam5, &(Global_259039[0x00000002 /*16*/]), 0xFFFFFFFF, 0x0000006B, 0x00000006, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam14, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	switch (iParam11)
	{
		case 0x00000000:
			if (unk_0xD803B885F5E47A62() != func_27())
			{
				if (func_136(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_140(iParam6, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
				}
			}
			break;
		
		case 0x00000001:
			if (func_136(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_140(iParam6, "HUD_USCORE", 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000002:
			if (func_136(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_140(iParam6, "HUD_UBEST", 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			}
			break;
		
		case 0x00000003:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_135(sParam10))
	{
		sVar2 = sParam10;
	}
	func_132(iParam7, sVar2, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam9, 0x00000000, 0x00000000, 0x00000000, iParam9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	*uParam8 = 0x00000000;
}

void func_132(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_134(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_133(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = uParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = uParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = uParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_133(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_135(char* sParam0)
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

bool func_136(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		if (((func_139() && !func_138()) || func_137(unk_0xD803B885F5E47A62(), 0x00000015)) || func_137(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		if (func_18(&(Global_1806FA.f_D)))
		{
			if (!func_5(&(Global_1806FA.f_D), Global_40001.f_E, 0x00000000))
			{
				return 0x00000001;
			}
			func_3(&(Global_1806FA.f_D));
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009);
}

bool func_137(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_138()
{
	return Global_1406A2.f_1;
}

bool func_139()
{
	return Global_1406A2;
}

void func_140(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_134(0x00000006, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_133(0x00000006, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
		Global_150976.f_F68.f_104[iVar0] = iParam4;
		Global_150976.f_F68.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_F68.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_F68.f_1BB[iVar0] = iParam7;
		Global_150976.f_F68.f_1C6[iVar0] = iParam8;
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
		if (iParam15 == 0x00000005 && func_142())
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
			if (func_141())
			{
				Global_150976.f_46E = 0x00000001;
			}
		}
	}
}

int func_141()
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

int func_142()
{
	if (((unk_0xB3260A60545D3F11() == 0x00000008 || unk_0xB3260A60545D3F11() == 0x00000009) || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<16> func_143(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 0x00000001:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFIRST"), 64);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSSECOND"), 64);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSTHIRD"), 64);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFOURTH"), 64);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_144()
{
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	Global_259211 = 0x00000001;
}

int func_145(bool bParam0)
{
	if (func_147())
	{
		return 0x00000000;
	}
	if (func_146())
	{
		return 0x00000000;
	}
	if (!bParam0)
	{
		if (func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) == 0x00000000)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_146()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

bool func_147()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x0000000C);
}

float func_148(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_149(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_149(int iParam0, int iParam1)
{
	return Local_80.f_6[iParam0 /*204*/].f_24[iParam1];
}

bool func_150(bool bParam0)
{
	return func_73(unk_0xD803B885F5E47A62(), bParam0);
}

void func_151(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_26B66F.f_1363)))
			{
				unk_0xA6C13961116F9033(&(Global_26B66F.f_1363));
			}
			unk_0xBEF52C1D400C0A44(0x00000001);
			unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
			unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
			unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
			if (Global_26B66F.f_136B > 0xFFFFFFFF)
			{
				unk_0x43A06902454A1172(Global_26B66F.f_136B);
				Global_26B66F.f_136B = 0xFFFFFFFF;
			}
			Global_26B66F.f_1361 = 0x00000000;
		}
	}
	else if (iParam0 < 0x00007530)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000004))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000002))
				{
					if (unk_0x3133F8A3F91571F1())
					{
						if ((!unk_0x7F8A39872A07D2CE(unk_0xE4B65163E4129619(unk_0xFC21F7E0F4D92523()), "OFF") && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && !unk_0xEA6BC48857E0AC4C(&(Global_26B66F.f_1363)))
						{
							StringCopy(&(Global_26B66F.f_1363), "", 32);
							unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
							unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
							unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
							unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
							unk_0xBEF52C1D400C0A44(0x00000001);
							unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
						}
					}
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000005))
				{
					unk_0xA6C13961116F9033("OFF");
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000001))
			{
				if (iParam0 < 0x00002710)
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 0x00004E20)
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_30S");
				}
				unk_0x8BC9595FD2792B5D("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000001);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000004))
			{
				if (iParam0 < 0x00006B6C)
				{
					if (unk_0x0931E02856C8B6A4() != 0x00000000)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x3F02B7BDF1B316D6())
						{
							StringCopy(&(Global_26B66F.f_1363), unk_0x04DF2A8CF5EBE3B0(), 32);
							unk_0xA6C13961116F9033("OFF");
						}
						unk_0xBEF52C1D400C0A44(0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000004);
					}
				}
			}
			if (iParam0 < 0x00002710)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000003))
				{
					Global_26B66F.f_136B = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Global_26B66F.f_136B, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000003);
				}
			}
		}
		else if (iParam0 > 0x00002710)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
			{
				Global_26B66F.f_1361 = 0x00000000;
				Global_26B66F.f_136B = 0xFFFFFFFF;
				unk_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
				unk_0xBEF52C1D400C0A44(0x00000000);
				unk_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
				unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
				unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
				unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000000);
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000002))
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000005);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000005);
					unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000002);
				}
			}
		}
	}
	else if (iParam0 < 0x00009C40 && iParam0 > 0x00007530)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			Global_26B66F.f_1361 = 0x00000000;
			Global_26B66F.f_136B = 0xFFFFFFFF;
			unk_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
			unk_0xBEF52C1D400C0A44(0x00000000);
			unk_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
			unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000000);
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000005);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000002);
				unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000005);
			}
		}
	}
}

void func_152(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_145(0x00000000) == 0x00000000)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_135(sParam2))
	{
		sVar0 = sParam2;
	}
	func_132(iParam0, sVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam1, 0x00000000, 0x00000000, 0x00000000, iParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

char* func_153()
{
	return "HUD_COUNTDOWN";
	switch (func_260(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
			return "AET_HOT_TARG";
		
		case 0x00000084:
			return "AET_CHK_COLL";
		
		case 0x00000085:
			switch (func_154())
			{
				case 0x00000000:
					return "AET_CHALL_LJ";
				
				case 0x00000001:
					return "AET_CHALL_LS";
				
				case 0x00000002:
					return "AET_CHALL_HS";
				
				case 0x00000003:
					return "AET_CHALL_LST";
				
				case 0x00000004:
					return "AET_CHALL_LW";
				
				case 0x00000005:
					return "AET_CHALL_NC";
				
				case 0x00000006:
					return "AET_CHALL_LP";
				
				case 0x00000007:
					return "AET_CHALL_VS";
				
				case 0x00000008:
					return "AET_CHALL_NM";
				
				case 0x00000009:
					return "AET_CHALL_RD";
				
				case 0x0000000A:
					return "AET_CHALL_LF";
				
				case 0x0000000B:
					return "AET_CHALL_LFL";
				
				case 0x0000000C:
					return "AET_CHALL_LFI";
				
				case 0x0000000D:
					return "AET_CHALL_LB";
				
				case 0x0000000E:
					return "AET_CHALL_MB";
				
				case 0x0000000F:
					return "AET_CHALL_HSH";
				
				case 0x00000010:
					return "AET_CHALL_DB";
				
				case 0x00000011:
					return "AET_CHALL_ML";
				
				case 0x00000012:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "AET_PENNED";
		
		case 0x0000008A:
			return "AET_PARCEL";
		
		case 0x0000008B:
			return "AET_PROPERTY";
		
		case 0x0000008C:
			return "AET_DDROP";
		
		case 0x0000008D:
			return "AET_KCASTLE";
		
		case 0x00000090:
			return "AET_BLAST";
		
		case 0x00000081:
			return "AET_UWARF";
		
		case 0x00000092:
			return "AET_BEAST";
	}
	return "";
}

int func_154()
{
	if (func_260(unk_0xD803B885F5E47A62()) == 0x00000085)
	{
		return Global_26B66F.f_13B5;
	}
	return 0xFFFFFFFF;
}

bool func_155(int iParam0)
{
	return Local_80.f_6[iParam0 /*204*/].f_48;
}

int func_156(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam1) > 0x0000003F)
	{
		return 0x00000000;
	}
	if (func_166(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0x00000000;
	}
	uVar0 = Global_140749.f_36;
	func_160();
	Global_140749 = 0x00000009;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	Global_140749.f_3A = iParam3;
	Global_140749.f_38 = iParam3;
	Global_140749.f_36 = uVar0;
	func_159();
	func_158(bParam2);
	func_157();
	return 0x00000001;
}

void func_157()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_159()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

void func_160()
{
	func_162();
	func_161(0x00000000);
}

void func_161(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 0x00000014;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0x00000000;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0x00000000;
	Global_140749.f_35 = 0x00000000;
	Global_140749.f_36 = 0x00000000;
	Global_140749.f_37 = 0xFFFFFFFF;
	Global_140749.f_38 = 0x00000000;
	Global_140749.f_3B = 0x00000000;
	if (bParam0)
	{
		return;
	}
}

void func_162()
{
	if (!func_165())
	{
	}
	if (func_164())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_163();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_163()
{
	switch (Global_140749)
	{
		case 0x00000014:
			return;
		
		case 0x00000000:
			return;
		
		case 0x00000001:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 0x00000002:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 0x00000003:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000004:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000005:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000006:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000007:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000008:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000009:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000A:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 0x0000000C:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000D:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000B:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000E:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000F:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000011:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 0x00000010:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000013:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000012:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_164()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_165()
{
	if (!func_164())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_163();
	return unk_0xB165082A56EE6E7F();
}

bool func_166(char* sParam0, char* sParam1)
{
	if (!func_164())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_167(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_168(sParam0, unk_0x6E524813889AECF8(iParam1), sParam2, bParam5, iParam3))
	{
		Global_140749 = 0x0000000F;
		Global_140749.f_38 = iParam3;
		Global_140749.f_39 = iParam4;
		Global_140749.f_36 = iParam1;
	}
}

int func_168(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam1) > 0x0000003F)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 0x0000003F)
	{
		return 0x00000000;
	}
	if (func_169(sParam0, sParam1, sParam2) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0x00000000;
	}
	func_160();
	Global_140749 = 0x0000000A;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	StringCopy(&(Global_140749.f_20), sParam2, 64);
	Global_140749.f_3A = uParam4;
	Global_140749.f_38 = uParam4;
	func_159();
	func_158(bParam3);
	func_157();
	return 0x00000001;
}

bool func_169(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_164())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10)))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam2) == unk_0x12AB0310C2281427(&(Global_140749.f_20));
}

void func_170(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	if (!iParam4 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam4);
	}
	unk_0x6B012227B3921E18(sParam3);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam5);
}

int func_171(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_693(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	if (iParam1 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000004)
		{
			if (Global_440000.f_2E673[iVar0] != 0xFFFFFFFF)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_693(unk_0xD803B885F5E47A62()) || (func_197() && func_692())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_196();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_756(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_194(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_184(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_184(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_194(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_172(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_172(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_194(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_184(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_184(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_172(bool bParam0, int iParam1, bool bParam2)
{
	return func_173(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_173(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_183() || (func_182() && func_180())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_179(iParam2, iVar0);
		}
		else
		{
			return func_179(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_178(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_177(0x00000001);
				}
				else
				{
					return func_177(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_174(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_174(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_177(0x00000001);
	}
	return func_177(0x00000000);
}

int func_174(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_176(iParam0, iParam1, iParam3);
	if (func_175(Global_440000.f_2F9AE, 0x00000001))
	{
		if (iVar0 == 0x00000001)
		{
			iVar0 = 0x00000000;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			
			case 0x00000003:
				return 0x0000001F;
			
			case 0x00000004:
				return 0x00000020;
			
			case 0x00000005:
				return 0x00000021;
			
			case 0x00000006:
				return 0x00000022;
			
			case 0x00000007:
				return 0x00000023;
			
			case 0x00000008:
				return 0x00000024;
			
			case 0x00000009:
				return 0x00000025;
			
			case 0x0000000A:
				return 0x00000026;
			
			case 0x0000000B:
				return 0x00000027;
			
			case 0x0000000C:
				return 0x00000028;
			
			case 0x0000000D:
				return 0x00000029;
			
			case 0x0000000E:
				return 0x0000002A;
			
			case 0x0000000F:
				return 0x0000002B;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			}
		
		default:
	}
	return 0x0000001C;
}

int func_175(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 0x00000041)
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_178(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_177(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0x00000001)
	{
		if (iParam0 == iParam1)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((iParam0 > 0xFFFFFFFF && iParam1 > 0xFFFFFFFF) && iParam0 == iParam1)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000000);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000001);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000002);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000003);
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000004);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000005);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000006);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000007);
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000008);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000009);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000A);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000B);
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000C);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000D);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000E);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000F);
				
				default:
			}
			break;
	}
	return 0x00000000;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_176(iParam1, iParam0, 0x00000004);
	}
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		default:
	}
	return 0x0000001C;
}

bool func_180()
{
	if (func_181())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_181()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_182()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_183()
{
	if (func_181() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094)
	{
		bVar1 = 0x00000001;
	}
	iVar2 = iParam0;
	if (iVar2 > 0xFFFFFFFF)
	{
		if (Global_184507[iVar2 /*876*/] == 0x00000094)
		{
			bVar1 = 0x00000001;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 0xFFFFFFFF)
		{
			if (func_190())
			{
				iVar3 = func_189(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_187(iVar3);
				}
			}
			if ((func_186(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_178(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_177(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_185(0x00000001);
			}
			else
			{
				return func_173(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_177(0x00000001);
			}
			else
			{
				return func_173(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_189(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_187(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_185(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_186(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0xFFFFFFFE)
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iParam1) == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && iParam2 == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_187(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_188(iParam0);
		switch (iVar0)
		{
			case 0x00000000:
				return 0x000000C0;
			
			case 0x00000001:
				return 0x000000C1;
			
			case 0x00000002:
				return 0x000000C2;
			
			case 0x00000003:
				return 0x000000C3;
			
			case 0x00000004:
				return 0x000000C4;
			
			case 0x00000005:
				return 0x000000C5;
			
			case 0x00000006:
				return 0x000000C6;
			
			case 0x00000007:
				return 0x000000C7;
			
			case 0x00000008:
				return 0x000000C8;
			
			case 0x00000009:
				return 0x000000C9;
			
			case 0x0000000A:
				return 0x000000CA;
			
			case 0x0000000B:
				return 0x000000CB;
			
			case 0x0000000C:
				return 0x000000CC;
			
			case 0x0000000D:
				return 0x000000CD;
			
			case 0x0000000E:
				return 0x000000CE;
			}
		
		default:
	}
	return 0x00000001;
}

var func_188(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_189(int iParam0)
{
	if (!iParam0 == func_27())
	{
		if (func_73(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_64(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_190()
{
	if (((func_193() || func_192()) || func_58()) || func_191())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_191()
{
	return Global_2564C8.f_13;
}

var func_192()
{
	return Global_2564C8.f_10;
}

var func_193()
{
	return Global_2564C8.f_F;
}

int func_194(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_190())
	{
		iVar2 = func_189(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_187(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_27())
	{
		if (Global_440000.f_2E673[iParam0] != 0xFFFFFFFF && Global_440000.f_2E673[iParam0] <= 0x00000004)
		{
			if (Global_440000.f_2E673[iParam0] == 0x00000000)
			{
				iVar0 = 0x0000000F;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000001)
			{
				iVar0 = 0x00000012;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000002)
			{
				iVar0 = 0x00000018;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000004)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001D))
				{
					iVar0 = 0x00000015;
				}
				else
				{
					iVar0 = 0x00000006;
				}
			}
			else
			{
				iVar0 = Global_440000.f_2E673[iParam0];
			}
		}
		else
		{
			iVar0 = func_173(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_195(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_178(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_185(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_195(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_440000.f_38E2F;
			break;
		
		case 0x00000001:
			iVar0 = Global_440000.f_38E30;
			break;
		
		case 0x00000002:
			iVar0 = Global_440000.f_38E31;
			break;
		
		case 0x00000003:
			iVar0 = Global_440000.f_38E32;
			break;
	}
	switch (iVar0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		case 0x00000004:
			return 0x00000006;
		
		case 0x00000005:
			return 0x00000009;
		
		case 0x00000006:
			return 0x00000003;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x0000000C;
		
		case 0x00000009:
			return 0x00000002;
		
		default:
	}
	return 0x00000002;
}

var func_196()
{
	return Global_240006.f_2;
}

bool func_197()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

char* func_198()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_64(unk_0xD803B885F5E47A62());
	if (iVar0 != func_27())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_29(iVar0, 0x0000001C) || func_29(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_66(iVar0)) && !func_65(iVar0))
			{
				return func_67(iVar0, 0x00000000);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_67(iVar0, 0x00000000);
			}
		}
		sVar1 = func_72(&(Global_18D84D[iVar0 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return func_67(iVar0, 0x00000000);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_199(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_84[iParam0 /*5*/].f_4, 0x00000002))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_84[iParam0 /*5*/].f_4, 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000D))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_200(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_201(sParam0))
	{
		return;
	}
	func_160();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_159();
	func_158(bParam1);
	func_157();
}

bool func_201(char* sParam0)
{
	if (!func_164())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_202(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_202(char* sParam0)
{
	if (!func_164())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_203()
{
	if (!func_164())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_160();
}

bool func_204(int iParam0)
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == iParam0;
}

int func_205(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_62(iParam0, &Var0, 0xFFFFFFFF, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0x00000000)
	{
		func_48(&(Var0.f_45), iParam7);
	}
	return func_45(&Var0);
}

int func_206(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_62(iParam0, &Var0, 0xFFFFFFFF, sParam1, sParam5);
	StringCopy(&(Var0.f_19), sParam2, 64);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam6;
	return func_45(&Var0);
}

int func_207()
{
	return 0x00000015;
}

int func_208(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_209(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
	if (iParam0 != 0x00000085)
	{
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
	}
	Global_26B66F.f_136B = 0xFFFFFFFF;
	bVar0 = (func_31(unk_0xD803B885F5E47A62(), 0x00000000) && func_30(unk_0xD803B885F5E47A62()));
	if (bParam6)
	{
		func_233(func_234(iParam0), 0x00000001);
	}
	else
	{
		func_230(iParam0, 0xFFFFFFFF);
		if (func_229(unk_0xD803B885F5E47A62()))
		{
			Global_1806FA.f_3 = iParam0;
		}
		else
		{
			func_228(iParam0);
		}
		Global_1806FA.f_4 = 0xFFFFFFFF;
		if (func_229(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000005);
		}
		if (((func_139() && !func_138()) || func_137(unk_0xD803B885F5E47A62(), 0x00000015)) || func_137(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000004);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000011);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000014);
		if (func_227(iParam0))
		{
			func_226();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_222(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x51B096AAC60548C1(fParam2);
			if (iParam0 == 0x00000092)
			{
				unk_0x34D79252800B23FF(0x00000000);
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
		if (func_220(iParam0))
		{
			unk_0x34D79252800B23FF(0x00000000);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000008);
		}
		if (bParam3)
		{
			if (!Global_247C05)
			{
				func_218(0x00000001);
				if (func_215(0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
				}
				if (!bParam6)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
				}
			}
		}
		if (bParam4)
		{
			func_213(0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
		}
		if (bParam5)
		{
			func_212();
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
		}
		if (!bParam6)
		{
			if (func_210(iParam0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000015);
			}
		}
	}
	Global_2658D5 = 0x00000001;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000081:
		case 0x00000083:
		case 0x0000008D:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x00000090:
		case 0x00000092:
		case 0x000000EC:
		case 0x00000096:
			return 0x00000001;
		
		default:
	}
	if (func_211())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_211()
{
	switch (func_154())
	{
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_212()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1362), 0x00000000);
}

void func_213(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_181EC.f_8 = 0x00000001;
	}
	else
	{
		Global_181EC.f_8 = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_214(iVar0);
		iVar0++;
	}
}

void func_214(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

int func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(0x000009E6, 0xFFFFFFFF, 0x00000000);
	if (iParam0 == 0x00000000)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000008))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000009) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000A)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000B))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_217(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
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

void func_218(int iParam0)
{
	if (func_219() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0x00000000;
	Global_247C08 = 0x00000000;
}

int func_219()
{
	if ((((Global_EC6CD != 0xFFFFFFFF && Global_EC6CD != 0x00000021) && Global_EC6CD != 0x00000023) && Global_EC6CD != 0x00000025) && Global_EC6CD != 0x00000015)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
		case 0x00000090:
		case 0x00000081:
			return 0x00000001;
		
		case 0x0000008D:
			if (func_221(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

void func_222(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_223())
	{
		return;
	}
	fVar0 = (Global_26B66F.f_13FF - fParam0);
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26B66F.f_13FF = fParam0;
	Global_26B66F.f_1400 = unk_0x0D0A574C76D769AC();
}

int func_223()
{
	switch (func_225())
	{
		case 0x00000000:
			return func_224();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_224()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_225()
{
	return Global_7830;
}

void func_226()
{
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_C8 = 0x00000000;
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11D1), 0x00000001);
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_228(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/] = iParam0;
}

bool func_229(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000002);
}

void func_230(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 0xFFFFFFFF || iParam1 != 0xFFFFFFFF)
	{
		iVar0 = iParam0;
		if (iVar0 == 0xFFFFFFFF)
		{
			iVar0 = iParam1;
		}
		if (func_232(0x00000000) || func_232(func_231(iVar0)))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000002);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000002);
		}
	}
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
			return 0x0000000A;
		
		case 0x00000084:
			return 0x00000001;
		
		case 0x00000085:
			return 0x00000002;
		
		case 0x00000088:
			return 0x0000000B;
		
		case 0x0000008A:
			return 0x00000005;
		
		case 0x0000008B:
			return 0x00000006;
		
		case 0x00000081:
			return 0x00000008;
		
		case 0x0000008C:
			return 0x00000004;
		
		case 0x0000008D:
			return 0x00000009;
		
		case 0x00000090:
			return 0x00000003;
		
		case 0x00000092:
			return 0x00000007;
		
		case 0x000000EC:
			return 0x0000000C;
		
		case 0x00000096:
			return 0x0000000C;
		
		default:
	}
	return Global_40001.f_5C52;
}

bool func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(0x000009B0, 0xFFFFFFFF, 0x00000000);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

void func_233(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
	}
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000086:
			return 0x00000015;
		
		case 0x000000FE:
			return 0x00000019;
		
		default:
	}
	return 0x00000000;
}

void func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_48(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

float func_236(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_28;
}

bool func_237(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_238(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(0x00000003, 0x00000015, 0x000000C8, 0x00000000, 0x00000000);
	if (iParam0 && !func_240())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0x00000000);
	}
}

void func_239(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam1);
}

bool func_240()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

void func_241(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
		{
			if (((!func_106(unk_0xD803B885F5E47A62()) && !func_259(unk_0xD803B885F5E47A62())) && !func_136(unk_0xD803B885F5E47A62())) && !func_108(unk_0xD803B885F5E47A62()))
			{
				if (func_139())
				{
					func_251(0x00000002, 0x00000000, 0x00000001);
					func_250();
				}
				if (func_232(0x00000000))
				{
					uVar0 = func_216(0x000009B0, 0xFFFFFFFF, 0x00000000);
					unk_0x0674E58A79778E99(&uVar0, 0x00000000);
					func_250();
				}
				if (func_232(func_231(func_260(unk_0xD803B885F5E47A62()))))
				{
					uVar0 = func_216(0x000009B0, 0xFFFFFFFF, 0x00000000);
					unk_0x0674E58A79778E99(&uVar0, func_231(func_260(unk_0xD803B885F5E47A62())));
					func_250();
				}
				if (func_249())
				{
					func_250();
				}
				if (func_260(unk_0xD803B885F5E47A62()) > 0xFFFFFFFF)
				{
					unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000007);
					if (func_248(unk_0xD803B885F5E47A62()))
					{
						func_247();
					}
					func_244(func_246(func_260(unk_0xD803B885F5E47A62())));
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000007);
		func_242();
	}
}

void func_242()
{
	if (func_243())
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000011);
	}
}

bool func_243()
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000011);
}

void func_244(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_245() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
		{
			if (Global_14073A.f_1[iVar0] == 0xFFFFFFFF)
			{
				Global_14073A.f_1[iVar0] = iParam0;
				Global_14073A = 0x00000001;
				return;
			}
		}
		iVar0++;
	}
}

int func_245()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000096:
			return 0x00000043;
		
		case 0x000000EC:
			return 0x00000043;
		
		case 0x00000085:
			return 0x00000045;
		
		default:
	}
	return 0x00000044;
}

void func_247()
{
	if (!func_243())
	{
		Global_26B66F.f_19B1 = unk_0x2B6E0A53779D29EA();
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000011);
	}
}

int func_248(int iParam0)
{
	if (func_260(iParam0) == 0x000000EC || func_260(iParam0) == 0x00000096)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_249()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_250()
{
	if (func_249())
	{
		Global_2537E2.f_484.f_10 = 0x00000001;
	}
}

void func_251(int iParam0, int iParam1, bool bParam2)
{
	if (func_139())
	{
		if (iParam1 == 0x00000001)
		{
			if (Global_26B66F.f_112B == 0xFFFFFFFF)
			{
				Global_26B66F.f_112B = Global_40001.f_6719;
			}
			func_258(&(Global_26B66F.f_1129), 0x00000000, 0x00000000);
			if (bParam2)
			{
				if (Global_26B66F.f_112E == 0xFFFFFFFF)
				{
					Global_26B66F.f_112E = Global_40001.f_671A;
				}
				func_258(&(Global_26B66F.f_112C), 0x00000000, 0x00000000);
			}
			else
			{
				Global_1406A2 = 0x00000000;
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
				func_257(0x00000001);
			}
		}
		else
		{
			Global_1406A2 = 0x00000000;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
			func_257(0x00000001);
		}
		if ((!unk_0xA14BB9332558B949() && !func_256()) && !func_252(unk_0xD803B885F5E47A62()))
		{
			Global_EC6CC = 0x00000000;
		}
		unk_0x6EC9FBED3024FDF5(0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, iParam0);
	}
}

int func_252(int iParam0)
{
	if (func_253(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_254(iParam0))
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

bool func_254(int iParam0)
{
	return func_255(iParam0);
}

bool func_255(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

bool func_256()
{
	return Global_2564C8.f_2E4;
}

void func_257(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_139())
		{
			if (func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000000);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000000);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0x00000000);
			unk_0xDC4BBCD7EBECDC32(0x00000001);
			if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
			{
				Global_1406A2.f_2 = 0x00000000;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0x00000000, 0x00000000);
				}
			}
		}
		else
		{
			if (func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000001);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
				{
					unk_0x03718F4C6E876DE6(0x00000001, 0x00000000);
				}
			}
			unk_0x2F82E0AC5EC27DF2(0x00000001);
			unk_0xDC4BBCD7EBECDC32(0x00000000);
		}
	}
}

void func_258(var uParam0, bool bParam1, bool bParam2)
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

bool func_259(int iParam0)
{
	if (func_229(iParam0))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008);
}

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

bool func_261(int iParam0, int iParam1)
{
	return Local_84[iParam0 /*5*/].f_1[iParam1];
}

int func_262(bool bParam0, bool bParam1)
{
	if (func_259(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (bParam0)
	{
		if (func_136(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	if (bParam1)
	{
		if (func_263(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_263(int iParam0)
{
	return func_36(iParam0, 0x00000000);
}

void func_264(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000016))
	{
		if (iLocal_643 == unk_0x57270EE11514DC67())
		{
			if (func_199(unk_0x57270EE11514DC67()))
			{
				if (!func_303(0x00000001, 0x00000001))
				{
					if (Local_80.f_6[iParam0 /*204*/].f_4A[0x00000000 /*4*/] != 0xFFFFFFFF)
					{
						if (Local_80.f_6[iParam0 /*204*/].f_4A[0x00000000 /*4*/].f_3 > 0f)
						{
							if (Local_80.f_6[iParam0 /*204*/].f_4A[0x00000000 /*4*/] != unk_0x57270EE11514DC67())
							{
								if (!func_208(unk_0xD803B885F5E47A62(), Local_80.f_6[iParam0 /*204*/].f_4A[0x00000000 /*4*/].f_1))
								{
									func_265();
									unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000016);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_265()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x00000013);
}

void func_266(int iParam0)
{
	if (iLocal_82 != func_8(iParam0))
	{
		iLocal_82 = func_8(iParam0);
		if (iLocal_82 > 0xFFFFFFFF)
		{
			iLocal_83++;
			unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000019);
		}
	}
}

void func_267(int iParam0)
{
	if (func_667() == 0x00000001)
	{
		if (func_8(iParam0) == unk_0x57270EE11514DC67() && !func_262(0x00000001, 0x00000000))
		{
			if (!func_221(unk_0xD803B885F5E47A62()))
			{
				func_268(0x00000001);
			}
		}
		else if (func_221(unk_0xD803B885F5E47A62()))
		{
			func_268(0x00000000);
		}
	}
}

void func_268(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000000))
		{
			Global_259486 = func_260(unk_0xD803B885F5E47A62());
			if (Global_259486 == 0xFFFFFFFF)
			{
				Global_259486 = Global_1806FA.f_4;
			}
			if (func_300(Global_259486) == 0x00000000)
			{
				if (func_299(0x00000001) > 0x00000000)
				{
					func_298(0x0000001A, 0xFFFFFFFF);
				}
			}
			if (func_139())
			{
				func_251(0x00000002, 0x00000000, 0x00000001);
				func_250();
			}
			if (func_232(0x00000000))
			{
				uVar1 = func_216(0x000009B0, 0xFFFFFFFF, 0x00000000);
				unk_0x0674E58A79778E99(&uVar1, 0x00000000);
				func_250();
			}
			if (func_232(func_231(func_260(unk_0xD803B885F5E47A62()))))
			{
				uVar1 = func_216(0x000009B0, 0xFFFFFFFF, 0x00000000);
				unk_0x0674E58A79778E99(&uVar1, func_231(func_260(unk_0xD803B885F5E47A62())));
				func_250();
			}
			if (func_249())
			{
				func_250();
			}
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000000);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000000))
	{
		if ((!func_297() && !func_296()) && !func_295())
		{
			Global_259486 = 0xFFFFFFFF;
			func_294(0x0000001A, 0xFFFFFFFF);
		}
		else if (func_300(Global_259486) == 0x00000000)
		{
			iVar0 = func_280(0x00000001);
			if (iVar0 > 0x00000000)
			{
				func_275(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_271(0x0000078C, 0x00000001, 0xFFFFFFFF);
				func_275(joaat("mpply_activity_ended"), 0x00000001);
			}
		}
		else if (func_269(0x0000001A, 0xFFFFFFFF))
		{
			Global_259486 = 0xFFFFFFFF;
			func_294(0x0000001A, 0xFFFFFFFF);
		}
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000000);
	}
}

bool func_269(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_38();
	}
	iVar0 = func_270(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_38();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x0000038D;
			break;
		
		case 0x00000001:
			iVar0 = 0x0000038E;
			break;
		
		case 0x00000002:
			iVar0 = 0x0000038F;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000390;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000391;
			break;
	}
	return iVar0;
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_216(iParam0, func_217(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_274(iParam0))
	{
		func_273(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_272(iParam0, iVar0, iParam2, 0x00000001);
	}
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_217(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_217(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_217(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_217(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_274(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 0x00000313:
			case 0x00000314:
			case 0x00000315:
			case 0x00000316:
			case 0x00002216:
			case 0x00000309:
			case 0x0000030A:
			case 0x0000030B:
			case 0x0000030C:
			case 0x00002218:
			case 0x000002FF:
			case 0x00000300:
			case 0x00000301:
			case 0x00000302:
			case 0x0000221A:
			case 0x000002F5:
			case 0x000002F6:
			case 0x000002F7:
			case 0x000002F8:
			case 0x0000221C:
			case 0x00000517:
			case 0x00001C41:
			case 0x0000027F:
			case 0x000004FE:
			case 0x000002FC:
			case 0x000002FD:
			case 0x000002FE:
			case 0x0000221B:
			case 0x000004D4:
			case 0x00000754:
			case 0x000008DB:
			case 0x00000B71:
			case 0x00000BF2:
			case 0x00002720:
			case 0x00000BED:
			case 0x00000BEE:
			case 0x00000BEF:
			case 0x00000BF0:
			case 0x00000BF1:
			case 0x00000CA0:
			case 0x00000CA2:
			case 0x00000E34:
			case 0x00000E35:
			case 0x00000E36:
			case 0x00000E37:
			case 0x00000E38:
			case 0x00000E39:
			case 0x00000E3A:
			case 0x00000E3B:
			case 0x00000E3C:
			case 0x00000E3D:
			case 0x00000C9B:
			case 0x00000C95:
			case 0x00000E4F:
			case 0x00000E50:
			case 0x00000E51:
			case 0x00000E52:
			case 0x00000E53:
			case 0x00000E54:
			case 0x00000E69:
			case 0x00000C9E:
			case 0x00000C9D:
			case 0x00000FB4:
			case 0x00000FB3:
			case 0x00000FB7:
			case 0x00000FB6:
			case 0x00000FBA:
			case 0x00000FB9:
			case 0x00000FBD:
			case 0x00000FBC:
			case 0x000017DE:
			case 0x000017DD:
			case 0x00001818:
			case 0x00001817:
			case 0x00001985:
			case 0x00001984:
			case 0x00001992:
			case 0x00001991:
			case 0x0000199F:
			case 0x0000199E:
			case 0x000019A2:
			case 0x000019A1:
			case 0x000019A5:
			case 0x000019A4:
			case 0x00001C73:
			case 0x00001C75:
			case 0x00001C77:
			case 0x0000205A:
			case 0x0000205B:
			case 0x0000205C:
			case 0x0000205D:
			case 0x0000205E:
			case 0x0000205F:
			case 0x00002060:
			case 0x00002061:
			case 0x00002062:
			case 0x00002063:
			case 0x00002064:
			case 0x00002065:
			case 0x00002066:
			case 0x00001F4A:
			case 0x00002156:
			case 0x0000230F:
			case 0x00002311:
			case 0x00002312:
			case 0x00002314:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_279(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_278(iParam0))
	{
		func_277(iParam0, iVar0);
	}
	else
	{
		func_276(iParam0, iVar0);
	}
}

void func_276(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_278(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_279(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_280(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000002;
	iVar1 = 0x00000000;
	if (Global_259029 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_295())
	{
		if (unk_0xA14BB9332558B949() || (func_293() || func_291()))
		{
			Global_258C0C = 0x00000001;
		}
	}
	Global_259029 = 0x00000000;
	if (Global_141378)
	{
		iVar0 = 0x00000001;
	}
	if (Global_258C0C)
	{
		iVar0 = 0x00000001;
	}
	if (Global_258C0B)
	{
		iVar0 = 0x00000001;
	}
	if (func_47(Global_1B04A.f_1, 0x00000020))
	{
		iVar0 = 0x00000001;
	}
	if (Global_258BBE)
	{
		iVar0 = 0x00000001;
	}
	if (func_290(0x00000200))
	{
		iVar0 = 0x00000001;
	}
	if (func_289(0x00000080))
	{
		iVar0 = 0x00000001;
	}
	if (Global_141390 == 0x00000001 && iVar1 == 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (func_288())
	{
		iVar0 = 0x00000000;
	}
	if (Global_258DF8)
	{
		iVar0 = 0x00000002;
	}
	if (iParam0 == 0x00000000)
	{
		if (!func_286())
		{
			if (Global_440000.f_30296 == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
		}
	}
	if (func_36(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		iVar0 = 0x00000000;
	}
	if (func_285())
	{
		iVar0 = 0x00000000;
	}
	if ((Global_258C0C || Global_258C0B) || Global_141378)
	{
		if (func_291())
		{
			iVar0 = 0x00000000;
		}
	}
	Global_258DF8 = 0x00000000;
	Global_258C0B = 0x00000000;
	Global_258C0C = 0x00000000;
	Global_141378 = 0x00000000;
	Global_258BBE = 0x00000000;
	func_283(&(Global_1B04A.f_1), 0x00000020);
	func_282(0x00000200);
	func_281(0x00000080);
	return iVar0;
}

void func_281(int iParam0)
{
	Global_1B083 = (Global_1B083 - (Global_1B083 && iParam0));
}

void func_282(int iParam0)
{
	Global_1B084 = (Global_1B084 - (Global_1B084 && iParam0));
}

void func_283(var uParam0, int iParam1)
{
	func_284(uParam0, iParam1);
}

void func_284(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_285()
{
	if (((Global_18061C || Global_1805FE) || func_36(unk_0xD803B885F5E47A62(), 0x00000000)) || func_197())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_286()
{
	switch (func_287())
	{
		case 0x0000000F:
		case 0x0000000E:
		case 0x0000000B:
		case 0x0000000D:
		case 0x0000000C:
		case 0x0000007A:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_287()
{
	return Global_2567E2.f_1.f_B06;
}

bool func_288()
{
	return Global_140856;
}

bool func_289(int iParam0)
{
	return (Global_1B083 && iParam0) != 0x00000000;
}

bool func_290(int iParam0)
{
	return (Global_1B084 && iParam0) != 0x00000000;
}

int func_291()
{
	if (func_300(Global_259486))
	{
		return 0x00000000;
	}
	if (func_292(unk_0xD803B885F5E47A62(), 0x00000092))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_292(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/] == iParam1)
	{
		return func_221(iParam0);
	}
	return 0x00000000;
}

int func_293()
{
	if (func_300(Global_259486))
	{
		return 0x00000000;
	}
	if (func_221(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_294(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x25C34E9F657F1C79(0x00000000, iParam1);
			break;
		
		default:
			iVar1 = func_270(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

bool func_295()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1406A9, 0x00000000);
}

bool func_296()
{
	return Global_14084E;
}

bool func_297()
{
	return Global_14086D;
}

void func_298(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x25C34E9F657F1C79(0x00000000, iParam1);
			break;
		
		default:
			iVar1 = func_270(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000002;
	iVar1 = 0x00000000;
	if (Global_141390 == 0x00000001 && iVar1 == 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (func_288())
	{
		iVar0 = 0x00000000;
	}
	if (iParam0 == 0x00000000)
	{
		if (!func_286())
		{
			if (Global_440000.f_30296 == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
		}
	}
	if (func_36(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		iVar0 = 0x00000000;
	}
	if (func_285())
	{
		iVar0 = 0x00000000;
	}
	Global_259029 = 0x00000001;
	return iVar0;
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
			if (Global_40001.f_2C7D)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000084:
			if (Global_40001.f_2C7F)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000085:
			if (Global_40001.f_2C7C)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000088:
			if (Global_40001.f_2C80)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008A:
			if (Global_40001.f_2C81)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008B:
			if (Global_40001.f_2C82)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000081:
			if (Global_40001.f_2C7E)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008C:
			if (Global_40001.f_2C83)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008D:
			if (Global_40001.f_2C84)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000090:
			if (Global_40001.f_2C85)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000092:
			if (Global_40001.f_2C86)
			{
				return 0x00000001;
			}
			break;
		
		case 0x000000EC:
		case 0x00000096:
			break;
	}
	return 0x00000000;
}

void func_301()
{
	if (func_303(0x00000000, 0x00000000))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000019))
	{
		if (iLocal_82 == unk_0x57270EE11514DC67())
		{
			if (Local_81.f_B == 0x00000000)
			{
				Local_81.f_B = unk_0xDD0E7998AE8AD485();
			}
		}
		unk_0x0674E58A79778E99(&iLocal_85, 0x00000019);
	}
}

void func_302()
{
	if (func_237("KOTC_1STHELP"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (func_237("KOTC_OTHRKG"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (func_237("KOTC_YOUKNG"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (func_237("KOTC_CONTS"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

int func_303(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000011))
	{
		return 0x00000001;
	}
	if (func_343(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_146())
	{
		return 0x00000001;
	}
	if (func_232(0x00000009))
	{
		return 0x00000001;
	}
	if (func_232(0x00000000))
	{
		return 0x00000001;
	}
	if (!func_318(0x00000000, 0x00000001, 0x00000001))
	{
		return 0x00000001;
	}
	if (func_311())
	{
		return 0x00000001;
	}
	if (func_306(0x00000004))
	{
		return 0x00000001;
	}
	if (func_305())
	{
		return 0x00000001;
	}
	if (func_262(bParam0, bParam1))
	{
		return 0x00000001;
	}
	if (Global_195C36)
	{
		return 0x00000001;
	}
	if (func_304(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_304(int iParam0)
{
	if (!func_756(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

bool func_305()
{
	return Global_181EC.f_15A > 0x00000000;
}

int func_306(int iParam0)
{
	int iVar0;
	
	if (func_305())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000035)
		{
			if (func_310(iVar0) == iParam0)
			{
				if (func_307(iVar0))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

bool func_307(int iParam0)
{
	return func_308(iParam0, 0x00000006, 0x00000001);
}

int func_308(int iParam0, int iParam1, bool bParam2)
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
		if (func_225() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_216(func_309(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_309(int iParam0)
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

int func_310(int iParam0)
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

int func_311()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_189.f_5, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_313() && Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 != 0x00000003)
	{
		return 0x00000001;
	}
	if (func_312() && Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 != 0x00000003)
	{
		return 0x00000001;
	}
	if (Global_248A90)
	{
		return 0x00000001;
	}
	if (Global_1806FA.f_14)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_312()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000005);
}

int func_313()
{
	if (((func_317() || func_316()) || func_315()) || func_314())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_314()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000001);
}

bool func_315()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000002);
}

bool func_316()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000014);
}

bool func_317()
{
	return Global_2564C8.f_256;
}

int func_318(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_342(unk_0xD803B885F5E47A62(), 0x0000001D))
	{
		return 0x00000000;
	}
	if (func_137(unk_0xD803B885F5E47A62(), 0x00000015))
	{
		return 0x00000000;
	}
	if (func_137(unk_0xD803B885F5E47A62(), 0x00000019))
	{
		return 0x00000000;
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0x00000000;
		}
	}
	if (func_252(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_341())
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		if (func_340(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (func_339())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (func_106(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	else if (func_331(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_330(unk_0xD803B885F5E47A62()) != func_27() && func_330(unk_0xD803B885F5E47A62()) == func_64(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_328(func_329()) && !func_248(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_297())
	{
		return 0x00000000;
	}
	if (func_146())
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	if (func_254(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_326())
	{
		return 0x00000000;
	}
	if (func_137(unk_0xD803B885F5E47A62(), 0x00000000) || func_137(unk_0xD803B885F5E47A62(), 0x00000003))
	{
		return 0x00000000;
	}
	if ((func_137(unk_0xD803B885F5E47A62(), 0x0000000C) || func_137(unk_0xD803B885F5E47A62(), 0x0000000E)) || func_137(unk_0xD803B885F5E47A62(), 0x0000000D))
	{
		return 0x00000000;
	}
	if (func_343(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (!func_325() && !Global_265A4F)
		{
			return 0x00000000;
		}
	}
	if (func_324(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_305())
	{
		return 0x00000000;
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (func_304(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_323())
	{
		return 0x00000000;
	}
	if (func_321(unk_0xD803B885F5E47A62()) && Global_1843A8.f_AB)
	{
		return 0x00000000;
	}
	if (func_320())
	{
		return 0x00000000;
	}
	if (func_108(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (Global_26B2C2)
	{
		return 0x00000000;
	}
	if (Global_19D9BB)
	{
		return 0x00000000;
	}
	if (!func_107(unk_0xD803B885F5E47A62()))
	{
		if (func_319(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_319(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0x00000000;
	}
	return 0x00000000;
}

bool func_320()
{
	return Global_199459.f_1DA;
}

int func_321(int iParam0)
{
	if (func_322(Global_184507[iParam0 /*876*/].f_112.f_1C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_322(int iParam0)
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

int func_323()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_324(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B);
}

bool func_325()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_326()
{
	if (func_327() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_327()
{
	return Global_1406D3.f_12;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x0000005A:
		case 0x0000006E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_329()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1;
}

int func_330(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_331(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 0x00000002;
	bVar1 = ((func_338(iParam0) && !func_229(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008));
	bVar2 = func_106(iParam0);
	bVar3 = func_139();
	uVar4 = func_332();
	if ((bVar1 && (func_107(iParam0) || func_221(iParam0))) || uVar4)
	{
		iVar0 = 0x00000000;
	}
	else if (bVar3 || ((!bVar2 && !func_30(iParam0)) && !func_28(iParam0)))
	{
		iVar0 = 0x00000002;
	}
	else
	{
		iVar0 = 0x00000003;
	}
	if (Global_26B66F.f_1404.f_D8 != iVar0)
	{
		Global_26B66F.f_1404.f_D8 = iVar0;
	}
	return iVar0;
}

int func_332()
{
	if ((func_29(unk_0xD803B885F5E47A62(), 0x00000015) || func_29(unk_0xD803B885F5E47A62(), 0x00000016)) || func_336())
	{
		return 0x00000001;
	}
	if (func_334())
	{
		func_333(0x00000016);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_333(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_334()
{
	if (func_31(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (((func_139() && !func_138()) || func_137(unk_0xD803B885F5E47A62(), 0x00000015)) || func_137(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		else
		{
			func_335(0x0000001B);
		}
	}
	return 0x00000000;
}

void func_335(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_336()
{
	return func_337(0x00000166, 0xFFFFFFFF);
}

int func_337(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_217(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_338(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

bool func_339()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000005;
}

int func_340(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0x00000000 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_341()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

bool func_342(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_343(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_27())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
	{
		return 0x00000001;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (bParam2)
	{
		if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_344(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, var uParam5)
{
	float fVar0;
	int iVar1;
	
	Global_1806FA.f_6 = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vParam1);
	if (fVar0 < fParam3 && !func_229(unk_0xD803B885F5E47A62()))
	{
		if ((iParam0 != 0x00000092 && !func_137(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_137(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			func_358(vParam1, 0x00000001, 0x00000000);
		}
		if ((!*uParam2 || unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000003)) && func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			*uParam2 = 0x00000001;
			func_222(func_357(iParam0));
			unk_0x51B096AAC60548C1(func_356(iParam0));
			if (iParam0 != 0x00000092)
			{
				iVar1 = func_355(iParam0);
				unk_0x34D79252800B23FF(iVar1);
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > iVar1)
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), iVar1, 0x00000001);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000008);
			}
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000003);
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000003);
		}
	}
	else if ((iParam0 == 0x00000092 && fVar0 < fParam4) && !func_229(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000003) && func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			func_354();
			unk_0x51B096AAC60548C1(Global_40001.f_2C89);
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000003);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000003);
		}
	}
	else if ((*uParam2 || unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000003)) && func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		*uParam2 = 0x00000000;
		func_354();
		unk_0x51B096AAC60548C1(1f);
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000008);
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000003);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000003);
		if (iParam0 != 0x00000092 && uParam5)
		{
			func_345();
		}
	}
}

void func_345()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 0x00000002);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 0x00000013);
	func_352();
	func_348(0x00000001, 0x00000001, 0x00000000);
	func_346();
}

void func_346()
{
	func_347(0x00000000, 0x00000000);
}

void func_347(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_348(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2D), &Global_24C384, 0x00000140);
	}
	else
	{
		Global_24B2D0.f_2D = { Global_24C384 };
		Global_24B2D0.f_2D.f_31 = { Global_24C384.f_31 };
		Global_24B2D0.f_2D.f_34 = Global_24C384.f_34;
		Global_24B2D0.f_2D.f_35 = Global_24C384.f_35;
	}
	if (bParam0)
	{
		func_351();
	}
	if (!bParam2)
	{
		func_100(0x00000000, 0x00000001, 0x00000000, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000, 0x40A00000, 0x00000000, 0x3F8CCCCD, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x42200000);
	}
	func_350(0x00000000);
	func_349();
}

void func_349()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_350(bool bParam0)
{
	if (bParam0)
	{
		Global_24B2D0.f_2C1 = 0x00000000;
	}
	else
	{
		Global_24B2D0.f_2C1 = 0x00000001;
	}
}

void func_351()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 0x00000079);
}

void func_352()
{
	func_353();
	Global_24B2D0.f_8CE = 0x00000000;
}

void func_353()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		Global_24B2D0.f_8CF[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_354()
{
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && Global_26B66F.f_13FF < 1f)
		{
			return;
		}
	}
	Global_26B66F.f_1400 = 0xFFFFFFFF;
	Global_26B66F.f_13FF = 1f;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
		case 0x0000008A:
		case 0x0000008C:
		case 0x0000008B:
		case 0x0000008D:
		case 0x00000092:
			return 0x00000000;
		
		case 0x00000090:
			return 0x00000000;
		
		default:
	}
	return 0x00000005;
}

float func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
		case 0x0000008A:
		case 0x0000008C:
		case 0x0000008B:
		case 0x0000008D:
		case 0x00000092:
		case 0x000000D8:
		case 0x000000DA:
		case 0x000000D7:
		case 0x000000D6:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000D9:
		case 0x000000DB:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F4:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
			return 0f;
		
		case 0x00000090:
			return 0f;
		
		case 0x000000B9:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x00000081:
		case 0x00000090:
		case 0x00000092:
		case 0x000000EC:
		case 0x00000096:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_358(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

Vector3 func_359(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_18;
}

void func_360(int iParam0)
{
	int iVar0;
	
	if (func_303(0x00000000, 0x00000000))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		Local_100[iVar0 /*42*/] = 0xFFFFFFFF;
		Local_100[iVar0 /*42*/].f_1 = func_27();
		Local_100[iVar0 /*42*/].f_9 = 0x00000000;
		Local_100[iVar0 /*42*/].f_1F = 0xFFFFFFFF;
		if (Local_80.f_6[iParam0 /*204*/].f_4A[iVar0 /*4*/] > 0xFFFFFFFF)
		{
			Local_100[iVar0 /*42*/] = Local_80.f_6[iParam0 /*204*/].f_4A[iVar0 /*4*/];
			Local_100[iVar0 /*42*/].f_1 = Local_80.f_6[iParam0 /*204*/].f_4A[iVar0 /*4*/].f_1;
			Local_100[iVar0 /*42*/].f_9 = func_77(Local_80.f_6[iParam0 /*204*/].f_4A[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_361(&Local_100, &(Local_99[iParam0 /*68*/].f_42), 0x0000001B, &uLocal_101, &uLocal_217, 0xFFFFFFFF, 0x00000000, 0x00000000);
}

void func_361(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_481(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 0xFFFFFFFF;
	iVar12 = 0xFFFFFFFF;
	iVar14 = 0x00000000;
	iVar15 = 0x00000000;
	uParam3->f_24 = 0x00000000;
	if (func_479() || iParam2 == 0x0000001C)
	{
		if (func_432(iParam1, iParam2, uParam3, Global_180529, 0x00000000, func_482(), sParam7))
		{
			func_431(0x00000001);
			if ((!func_430() && !func_429()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
			{
				if (func_428())
				{
					func_426();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
					if (uParam3->f_1B == 0x00000000)
					{
						func_425(0x00000001);
						Global_180529 = 0x00000000;
						iVar19 = 0xFFFFFFFF;
						if (Global_180606 != 0x00000001)
						{
							func_424(iParam1, 0x00000000, 0x00000000);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_21), 0x00000007);
							}
						}
						if (iParam2 == 0x0000001C)
						{
							iVar17 = 0x00000000;
							while (iVar17 < 0x00000020)
							{
								iVar1[iVar17] = 0xFFFFFFFF;
								iVar17++;
							}
							iVar17 = 0x00000000;
							while (iVar17 < 0x00000020)
							{
								if (func_756(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_36(iVar3, 0x00000000))
									{
										if ((func_423(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 0xFFFFFFFF) || func_422(iVar3))
										{
											iVar9 = iVar3;
											if (func_74(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_419(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_416(unk_0xD803B885F5E47A62(), 0x00000000) && func_110(unk_0xD803B885F5E47A62()) != 0x000000BC)
						{
							bVar2 = iVar0 > 0x00000000;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							if (func_415())
							{
								if (func_756(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_27();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_414(iVar3) && func_411(iVar3, iParam2)) && func_756(iVar3, 0x00000000, 0x00000001))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_406(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_41(iVar3) };
								iVar5 = func_400(iVar3);
								sVar4 = "";
								if (iVar5 != 0x00000000)
								{
									sVar4 = unk_0x5283D58F79627134(iVar5);
								}
								Global_180529++;
								if ((iParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_16;
								}
								if ((iParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_1F;
								}
								if ((iParam0[iVar17 /*42*/])->f_29 != 0xFFFFFFFF)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != 0xFFFFFFFF || (iParam0[iVar17 /*42*/])->f_16 != -1f) || (iParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									if (!func_415())
									{
										iVar15 = 0x00000001;
									}
								}
								if (iParam5 != 0xFFFFFFFF)
								{
									func_395(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_394(iParam5, 0x00000001, 0x00000000, 0x00000000), 16);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 0xFFFFFFFE;
									}
								}
								iVar16 = func_393(iVar3, 0x00000000);
								if (bVar2)
								{
									if (func_73(iVar3, 0x00000001) && iVar1[iVar9] != 0xFFFFFFFF)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((iParam0[iVar17 /*42*/])->f_27 != 0xFFFFFFFF)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_392(iParam5))
								{
									func_391(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_391(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							iVar3 = unk_0x117658E336116132(iVar17);
							if (func_756(iVar3, 0x00000000, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_27();
							}
							if (func_414(iVar3))
							{
								if (func_756(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_406(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_41(iVar3) };
									iVar5 = func_400(iVar3);
									sVar4 = "";
									if (iVar5 != 0x00000000)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_393(iVar3, 0x00000001);
									if (bVar2)
									{
										if (func_73(iVar3, 0x00000001))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_374(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							func_371(uParam3, iParam1, iParam2);
						}
						func_3(&(uParam3->f_15));
						func_370();
						uParam3->f_1B = 0x00000002;
					}
					if (uParam3->f_1B == 0x00000002)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
						{
							func_369(uParam3, iParam1);
							func_368(iParam1, 0x00000000, 0x00000001);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x00000007);
						}
						func_369(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x0000000B);
						}
						if (func_364(uParam3))
						{
							Global_180606 = 0x00000001;
						}
						func_362(uParam3);
						if (Global_180606 == 0x00000001)
						{
							uParam3->f_1B = 0x00000000;
						}
						if (Global_180606 == 0x00000002)
						{
							uParam3->f_1B = 0x00000000;
						}
					}
					if (unk_0x83D8570832F172A7(*iParam1))
					{
						unk_0xD9ACBBA59FD5A09E(0x00000007);
						unk_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
						unk_0xD9ACBBA59FD5A09E(0x00000004);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0x00000000;
			func_370();
			func_425(0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 0x00000007);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000A))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 0x0000000A);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_362(var uParam0)
{
	if (!func_18(&(uParam0->f_15)))
	{
		func_11(&(uParam0->f_15), 0x00000000, 0x00000000);
	}
	else if (func_5(&(uParam0->f_15), 0x000000FA, 0x00000000))
	{
		func_3(&(uParam0->f_15));
		func_363(0x00000000);
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (Global_180606 != 0x00000002)
		{
			Global_180606 = 0x00000002;
		}
	}
	else
	{
		switch (Global_180606)
		{
			case 0x00000000:
				Global_180606 = 0x00000001;
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				break;
			}
	}
}

int func_364(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0x00000000;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_27() && func_756(iVar3, 0x00000000, 0x00000001))
	{
		Var2 = { func_41(iVar3) };
		iVar1 = func_367(uParam0, uParam0->f_25);
		if (func_366(Var2))
		{
			switch (iVar1)
			{
				case 0x00000000:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_365(uParam0, iVar0, 0x00000002);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_365(uParam0, iVar0, 0x00000001);
					}
					break;
				
				case 0x00000002:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_365(uParam0, iVar0, 0x00000000);
						}
					}
					else
					{
						iVar4 = 0x00000001;
						func_365(uParam0, iVar0, 0x00000000);
					}
					break;
				
				case 0x00000001:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 0x00000001;
							func_365(uParam0, iVar0, 0x00000000);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_365(uParam0, iVar0, 0x00000000);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 0x00000020)
	{
		uParam0->f_25 = 0x00000000;
	}
	return iVar4;
}

void func_365(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_366(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

var func_367(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_368(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 0x00000001)
	{
		if (unk_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_369(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x0000000A))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 0x0000000A);
	}
}

void func_370()
{
	if (Global_180606 != 0x00000000)
	{
		Global_180606 = 0x00000000;
	}
}

void func_371(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_27())
		{
			if (func_756(iVar2, 0x00000000, 0x00000001))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 0xFFFFFFFF)
				{
					iVar1 = func_373(uParam0->f_26[iVar0 /*2*/], 0x00000000, iParam2);
					func_372(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_372(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 0x00000041)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_373(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000041;
	switch (iParam2)
	{
		case 0x00000015:
			iVar0 = 0x00000000;
			break;
	}
	if (bParam1)
	{
		iVar0 = 0x00000074;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 0x0000002F;
		
		case 0x00000001:
			return 0x00000031;
		
		default:
	}
	return iVar0;
}

void func_374(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_390() && iParam4 < func_389())
	{
		iParam4 = (iParam4 % 0x00000010);
		iVar0 = iParam4 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 0x00000001)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000008) || uParam3->f_6C == 0x00000006)
			{
				func_388("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_388(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 0x00000006)
			{
				func_388("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000041);
			}
			unk_0x3CAEA85DA607305E(0xFFFFFFFF);
			func_388("");
			if (uParam3->f_6C == 0x00000006)
			{
				func_388("");
			}
			else
			{
				func_388(&sParam5);
			}
			func_379(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_378(uParam3))
			{
				func_377("DPAD_FRIEND");
			}
			else if (func_376(uParam3))
			{
				func_377("DPAD_FRIEND");
			}
			else if (func_375(uParam3))
			{
				func_377("DPAD_CREW");
			}
			else
			{
				func_377("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_375(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000006);
}

bool func_376(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000005);
}

void func_377(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_378(var uParam0)
{
	if (func_376(uParam0) && func_375(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_379(var uParam0, int iParam1)
{
	if (func_387(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x00000079);
	}
	else if (func_383(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x0000007A);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 0x0000000F) && iParam1 > 0xFFFFFFFF) && iParam1 < 0x00000020) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0x00000000))
	{
		unk_0x3CAEA85DA607305E(0x0000007B);
	}
	else
	{
		if (func_380())
		{
			uParam0->f_24 = 0x00000000;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_380()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_381() || func_193())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_381()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_193();
	}
	return func_382(Global_440000.f_2F9AE);
}

int func_382(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_40001.f_137E[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_383(int iParam0)
{
	if ((func_756(iParam0, 0x00000000, 0x00000001) && func_384()) && func_69(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_384()
{
	if (func_338(unk_0xD803B885F5E47A62()) || func_386())
	{
		if (!func_385(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_385(int iParam0)
{
	if (func_260(iParam0) == 0x000000EC || func_260(iParam0) == 0x00000096)
	{
		return func_107(iParam0);
	}
	return 0x00000000;
}

int func_386()
{
	switch (func_110(unk_0xD803B885F5E47A62()))
	{
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000BC:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_387(int iParam0)
{
	if (func_380())
	{
		if (func_756(iParam0, 0x00000000, 0x00000001))
		{
			return func_74(iParam0);
		}
	}
	if ((func_756(iParam0, 0x00000000, 0x00000001) && func_384()) && func_71(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_388(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_389()
{
	int iVar0;
	
	if (Global_18052B)
	{
		iVar0 = 0x00000020;
	}
	else
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

int func_390()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_18052B)
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

void func_391(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_390() && iParam3 < func_389())
	{
		iParam3 = (iParam3 % 0x00000010);
		iVar0 = iParam3 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 0xFFFFFFFE)
			{
				iParam10 = 0xFFFFFFFF;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 0x00000001)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*iParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000008) || uParam2->f_6C == 0x00000006)
				{
					func_388("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_377(sParam16);
				}
				else
				{
					func_388(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 0x00000006)
				{
					func_388("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000041);
				}
				if (iParam12 == 0x00000001)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0xFFFFFFFF);
				}
				if (func_415())
				{
					func_388("");
				}
				else if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000005 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000007 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000008 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 0x00000001);
					}
					if (iParam10 != 0xFFFFFFFF)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_68));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000009)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x0000000A)
				{
					if (iParam10 == 0x00000000)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > 0xFFFFFFFF)
				{
					if (iParam15 == 0x00000000 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
					{
						func_377(&(uParam2->f_68));
					}
					else
					{
						func_388("");
					}
				}
				else if (iParam14 != 0xFFFFFFFF)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 0x00000006);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 0x00000001);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != 0xFFFFFFFF)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_388("");
				}
				if (uParam2->f_6C == 0x00000006)
				{
					func_388("");
				}
				else
				{
					func_388(&sParam4);
				}
				func_379(uParam2, iParam0);
				if (iParam12 == 0x00000001 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_388("");
					func_388("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_378(uParam2))
				{
					func_377("DPAD_FRIEND");
				}
				else if (func_376(uParam2))
				{
					func_377("DPAD_FRIEND");
				}
				else if (func_375(uParam2))
				{
					func_377("DPAD_CREW");
				}
				else
				{
					func_377("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_392(int iParam0)
{
	return 0x00000000;
	switch (iParam0)
	{
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_393(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000074;
	if ((!bParam1 && func_338(iParam0)) && !func_106(iParam0))
	{
		iVar0 = func_207();
	}
	iVar1 = func_189(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return func_187(iVar1);
	}
	return iVar0;
}

char* func_394(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 0x00000007:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 0x00000001)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_395(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_399(iParam3))
	{
		*fParam1 = (func_396(iParam3, iParam2) / 10f);
		return 0x00000001;
	}
	if (func_392(iParam3))
	{
		*fParam1 = (func_396(iParam3, iParam2) / 1000f);
		return 0x00000001;
	}
	*uParam0 = iParam2;
	return 0x00000000;
}

float func_396(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_398(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_397(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_397(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_398(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_400(int iParam0)
{
	int iVar0;
	
	iVar0 = func_403(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_401(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_401(int iParam0, bool bParam1)
{
	if (!func_756(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_403(iParam0) != 0xFFFFFFFF)
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
	if (func_402(iParam0))
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

int func_402(int iParam0)
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

int func_403(int iParam0)
{
	int iVar0;
	
	if (!func_756(iParam0, 0x00000000, 0x00000001))
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
			func_404(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_404(int iParam0)
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
	func_405(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_405(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_406(int iParam0)
{
	char cVar0[32];
	
	if (func_756(iParam0, 0x00000000, 0x00000001))
	{
		Global_265942 = { func_41(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_366(Global_265942))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_265942))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			return cVar0;
		}
		if (func_410(&Global_265942))
		{
			Global_2658FC = { func_408(iParam0) };
			func_407(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_407(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, sParam1);
}

struct<35> func_408(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_409(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_41(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 0x00000023, &Var0);
	return Var1;
}

int func_409(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_410(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_411(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000001B)
	{
		if ((func_229(iParam0) || func_413(iParam0)) || func_259(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_412(iParam0))
	{
		return 0x00000000;
	}
	if ((!func_423(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 0xFFFFFFFF) && !func_422(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_412(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000016);
}

int func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009));
	}
	return 0x00000000;
}

int func_414(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0x00000000;
	}
	if (func_36(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_8E, 0x00000002))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_415()
{
	switch (func_110(unk_0xD803B885F5E47A62()))
	{
		case 0x000000B3:
		case 0x000000B4:
		case 0x000000B6:
		case 0x000000B7:
		case 0x000000B8:
		case 0x000000B9:
		case 0x000000BA:
		case 0x000000BD:
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000C3:
		case 0x000000C5:
		case 0x000000C6:
		case 0x000000C8:
		case 0x000000C9:
		case 0x000000CA:
		case 0x000000CB:
		case 0x000000CC:
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	switch (func_260(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
		case 0x0000008C:
		case 0x0000008A:
		case 0x00000092:
			return 0x00000001;
			break;
	}
	if (func_106(unk_0xD803B885F5E47A62()))
	{
		switch (func_110(unk_0xD803B885F5E47A62()))
		{
			case 0x00000094:
			case 0x00000097:
			case 0x00000098:
			case 0x00000099:
			case 0x0000009D:
			case 0x0000009F:
			case 0x000000A2:
			case 0x000000A4:
			case 0x0000008E:
				return 0x00000001;
				break;
			}
	}
	if (func_385(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_416(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF && func_417(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 0x00000001;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF)
	{
		if (func_417(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000009B:
		case 0x000000A0:
		case 0x00000099:
		case 0x000000A2:
		case 0x0000009A:
		case 0x000000A3:
		case 0x000000AB:
		case 0x000000AC:
		case 0x000000F0:
		case 0x000000EF:
			return 0x00000001;
		
		default:
	}
	return func_418(iParam0, 0x00000000);
	return 0x00000000;
}

int func_418(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	if (iParam1 == 0x00000000)
	{
		switch (iParam0)
		{
			case 0x000000C2:
			case 0x000000C1:
			case 0x000000BD:
			case 0x00000099:
				return 0x00000001;
			}
		
		default:
	}
	return 0x00000000;
}

void func_419(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_756(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_36(iVar1, 0x00000000))
			{
				if ((func_423(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 0xFFFFFFFF) || func_422(iVar1))
				{
					if (func_420(iVar1, iParam1, 0x00000000))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_420(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_421(iParam0, iParam1))
			{
				return 0x00000000;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_27())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0x00000000;
}

int func_421(int iParam0, int iParam1)
{
	if (iParam1 != func_27())
	{
		if (iParam0 != func_27())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_27())
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

bool func_422(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

int func_423(int iParam0)
{
	if (func_756(iParam0, 0x00000000, 0x00000001))
	{
		if (func_756(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_110(iParam0) == 0x000000E9)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_424(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		if (Global_15038F.f_2 == 0x00000000)
		{
			Global_15038F.f_2 = 0x00000001;
		}
	}
	else if (Global_15038F.f_2 == 0x00000001)
	{
		Global_15038F.f_2 = 0x00000000;
	}
}

void func_426()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
	{
		if (func_240())
		{
			func_427();
		}
	}
}

void func_427()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_48(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

int func_428()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000) && func_240())
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001) && func_240())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_429()
{
	if (func_240())
	{
		if (func_46(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_430()
{
	if (func_240())
	{
		if (func_60(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_431(int iParam0)
{
	if (Global_15038F.f_1 != Global_15038F)
	{
		Global_15038F.f_1 = Global_15038F;
	}
	if (Global_15038F != iParam0)
	{
		Global_15038F = iParam0;
	}
}

int func_432(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 0x00000014;
	bVar3 = func_478(iParam1);
	fVar4 = func_477();
	iVar5 = 0xFFFFFFFF;
	if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
	{
		if (func_476())
		{
			if (func_475() > 0x00000000 && Global_18052B)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar4);
				unk_0x3584F71E5CA29322(0x00000012);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(0x0000000A);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_464())
		{
			func_463(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
	{
		func_463(iParam0, uParam2, 0x00000001);
		return 0x00000000;
	}
	if (!func_18(&(uParam2->f_13)))
	{
		if (func_475() == 0x00000001)
		{
			func_462(bVar3, iParam0, 0x00000000);
			func_11(&(uParam2->f_13), 0x00000000, 0x00000000);
			func_463(iParam0, uParam2, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (func_18(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(0x0000000A);
		if (func_5(&(uParam2->f_13), 0x00002710, 0x00000000) || (func_475() == 0x00000000 && !bParam5))
		{
			func_463(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
		else
		{
			if (bVar2 == 0x00000000)
			{
				func_461();
				if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(0x00000012);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000000))
			{
				if (bVar2 == 0x00000000)
				{
					func_461();
					if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(0x00000012);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_462(bVar3, iParam0, 0x00000000))
				{
					func_424(iParam0, 0x00000000, 0x00000000);
					sVar1 = func_459(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_457(iParam1) };
					if (bParam4)
					{
						func_454(iParam0, sVar1, "", 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
					}
					else if (iParam1 == 0x0000001B)
					{
						func_448(iParam0, func_451(uParam2), func_449(uParam2), 0xFFFFFFFF);
					}
					else if (iParam1 == 0x0000001C)
					{
						sVar6 = func_442(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_440(iParam0, sVar6, func_441(), 0xFFFFFFFF);
					}
					else if (func_380())
					{
						uParam2->f_22 = Global_18052A;
						func_454(iParam0, sVar1, &Var0, 0x00000001, 0xFFFFFFFF, Global_18052A, 0x00000001);
					}
					else if (bVar2)
					{
						iVar5 = func_433(iParam1);
						uParam2->f_22 = Global_18052A;
						func_454(iParam0, sVar1, "", 0x00000000, iVar5, Global_18052A, 0x00000001);
					}
					else
					{
						iVar5 = func_433(iParam1);
						func_454(iParam0, sVar1, &Var0, 0x00000001, iVar5, 0xFFFFFFFF, 0x00000001);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_21), 0x00000000);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000000))
			{
				Global_180529 = uParam3;
				Global_180528 = 0x00000001;
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_18052A)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_21), 0x00000000);
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_433(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (func_439())
	{
		iVar0 = 0x00000002;
	}
	switch (iParam0)
	{
		case 0x00000028:
			iVar0 = 0x00000016;
			break;
		
		case 0x00000000:
		case 0x0000001F:
		case 0x0000001E:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000006;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000005;
			break;
		
		case 0x0000001A:
			iVar0 = 0x00000015;
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			iVar0 = 0x00000004;
			break;
		
		case 0x00000007:
			iVar0 = 0x0000000A;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000011;
			break;
		
		case 0x00000010:
			iVar0 = 0x00000012;
			break;
		
		case 0x00000012:
			if (func_438(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000014;
			}
			if (func_437(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000013;
			}
			break;
	}
	if (func_436(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 0x00000002;
	}
	if (func_434())
	{
		iVar0 = 0x00000014;
	}
	return iVar0;
}

bool func_434()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_58();
	}
	return func_435(Global_440000.f_2F9AE);
}

int func_435(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_436(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000004;
}

bool func_437(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

bool func_438(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_439()
{
	return Global_440000.f_1 == 0x00000000;
}

void func_440(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_377(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_377("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_441()
{
	switch (func_110(unk_0xD803B885F5E47A62()))
	{
		case 0x000000A3:
			return "BD_SORT_1";
			break;
		
		case 0x000000A0:
			return "BD_SORT_4";
			break;
		
		case 0x0000009A:
			return "BD_SORT_3";
			break;
		
		case 0x0000009B:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_442(var uParam0)
{
	switch (uParam0->f_70)
	{
		case 0x00000000:
			return "GR_DPD_E";
			break;
		
		case 0x00000001:
			return "GR_DPD_F";
			break;
		
		case 0x00000002:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0x00000000:
			return "GR_DPD_A";
			break;
		
		case 0x00000001:
			return "GR_DPD_B";
			break;
		
		case 0x00000002:
			return "GR_DPD_C";
			break;
		
		case 0x00000003:
			return "GR_DPD_D";
			break;
	}
	switch (func_110(unk_0xD803B885F5E47A62()))
	{
		case 0x000000E9:
			return "H2_DPAD_SET";
			break;
		
		case 0x000000B4:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 0x000000B6:
			return "DEAL_DEALN";
			break;
		
		case 0x000000C2:
			return "PI_BIK_13_0";
			break;
		
		case 0x000000BD:
			return "PI_BIK_4_1";
			break;
		
		case 0x000000C1:
			return "PI_BIK_13_1";
			break;
		
		case 0x000000CD:
			return "PI_BIK_13_3";
			break;
		
		case 0x000000BA:
			return "CELL_BIKER_CK";
			break;
		
		case 0x000000CF:
			return "DV_SH_TITLE";
			break;
		
		case 0x000000D0:
			return "BA_SH_TITLE";
			break;
		
		case 0x000000D1:
			return "SHU_SH_TITLE";
			break;
		
		case 0x000000D2:
			return "PI_BIK_13_4";
			break;
		
		case 0x000000B7:
			return "CELL_BIKER_RESC";
			break;
		
		case 0x000000C7:
			return "CELL_BIKER_SEAR";
			break;
		
		case 0x000000C9:
			return "CELL_BIKER_STAN";
			break;
		
		case 0x0000008E:
			return "PIM_MAGM210";
			break;
		
		case 0x000000A3:
			return "PIM_MAGM608";
			break;
		
		case 0x000000A0:
			return "PIM_MAGM604";
			break;
		
		case 0x0000009A:
			return "PIM_MAGM602";
			break;
		
		case 0x0000009B:
			return "PIM_MAGM603";
			break;
		
		case 0x00000094:
			if (func_444())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 0x00000097:
			if (func_130(0x00000001))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 0x00000098:
			return "PIM_MAGM204";
			break;
		
		case 0x00000099:
			if (func_130(0x00000001))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 0x0000009D:
			return "PIM_MAGM207";
			break;
		
		case 0x0000009F:
			return "PIM_MAGM206";
			break;
		
		case 0x000000A2:
			return "PIM_MAGM607";
			break;
		
		case 0x000000A4:
			return "PIM_MAGM212";
			break;
		
		case 0x000000A6:
			return "GB_DPAD_HEAD";
		
		case 0x000000A7:
			return "GB_DPAD_BUY";
		
		case 0x000000A8:
			return "GB_DPAD_SELL";
		
		case 0x000000A9:
			return "GB_DPAD_DEF";
		
		case 0x000000AA:
			return "GB_DPAD_AIR";
		
		case 0x000000AB:
			return "GB_DPAD_CASH";
		
		case 0x000000AC:
			return "GB_DPAD_SAL";
		
		case 0x000000AD:
			return "GB_DPAD_FRA";
		
		case 0x000000B2:
			return "VEX_TITLEa";
		
		case 0x000000BC:
			return "VEX_TITLEb";
		
		case 0x000000DA:
			return "FRT_MODE";
		
		case 0x000000D9:
			return "FRT_TRNS";
		
		case 0x000000D6:
			return "MODE_PLW";
		
		case 0x000000D7:
			return "MODE_FUL";
		
		case 0x000000D8:
			return "MODE_AA";
		
		case 0x000000DB:
			return "MODE_VEL";
		
		case 0x000000DC:
			return "MODE_RMP";
		
		case 0x000000DD:
			return "MODE_STK";
		
		case 0x000000E1:
			return "GR_TITLEL";
		
		case 0x000000E2:
			return "GRS_TITLEL";
		
		case 0x000000E3:
			return "GRD_TITLEL";
		
		case 0x000000C3:
			return "GB_STEAL_T";
		
		case 0x000000C6:
			return "SC_MENU_TITLE";
		
		case 0x000000BE:
			return "GB_DPAD_BSEL";
		
		case 0x000000BF:
			return "GB_DPAD_BDEF";
		
		case 0x000000B9:
			return "GB_DPAD_GFH";
		
		case 0x000000C5:
			return "GB_DPAD_JB";
		
		case 0x000000B3:
			return "CELL_JOUST";
		
		case 0x000000C8:
			return "CAG_BLIP";
		
		case 0x000000C0:
			if (func_443(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_444()
{
	return (func_447() && func_445(func_446()));
}

int func_445(int iParam0)
{
	return func_71(iParam0, 0x00000001);
}

int func_446()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

bool func_447()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094;
}

void func_448(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_377(sParam1);
		}
		else if (func_260(unk_0xD803B885F5E47A62()) == 0x00000085)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_377("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_449(var uParam0)
{
	int iVar0;
	
	iVar0 = func_260(unk_0xD803B885F5E47A62());
	if (func_450())
	{
		if (uParam0->f_67 != 0xFFFFFFFF)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 0x00000083:
			return "";
		
		case 0x00000084:
			return "FM_AE_SORT_5";
		
		case 0x00000085:
			switch (func_154())
			{
				case 0x00000000:
					return "FM_AE_SORT_2";
				
				case 0x00000001:
					return "FM_AE_SORT_2";
				
				case 0x00000002:
					return "FM_AE_SORT_3";
				
				case 0x00000003:
					return "FM_AE_SORT_2";
				
				case 0x00000004:
					return "FM_AE_SORT_2";
				
				case 0x00000005:
					return "FM_AE_SORT_2";
				
				case 0x00000006:
					return "FM_AE_SORT_2";
				
				case 0x00000007:
					return "FM_AE_SORT_13";
				
				case 0x00000008:
					return "FM_AE_SORT_4";
				
				case 0x00000009:
					return "FM_AE_SORT_2";
				
				case 0x0000000A:
					return "FM_AE_SORT_2";
				
				case 0x0000000B:
					return "FM_AE_SORT_2";
				
				case 0x0000000C:
					return "FM_AE_SORT_2";
				
				case 0x0000000D:
					return "FM_AE_SORT_2";
				
				case 0x0000000E:
					return "FM_AE_SORT_5";
				
				case 0x0000000F:
					return "FM_AE_SORT_9";
				
				case 0x00000010:
					return "FM_AE_SORT_9";
				
				case 0x00000011:
					return "FM_AE_SORT_9";
				
				case 0x00000012:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "";
		
		case 0x0000008A:
			return "";
		
		case 0x0000008B:
			return "FM_AE_SORT_10";
		
		case 0x0000008C:
			return "";
		
		case 0x0000008D:
			return "FM_AE_SORT_5";
		
		case 0x00000090:
			return "FM_AE_SORT_1";
		
		case 0x00000081:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_450()
{
	return Global_184488;
}

char* func_451(var uParam0)
{
	int iVar0;
	
	iVar0 = func_260(unk_0xD803B885F5E47A62());
	if (func_450())
	{
		if (uParam0->f_67 != 0xFFFFFFFF)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 0x00000083:
			return "PIM_TA9";
		
		case 0x00000084:
			if (func_453() == 0x00000000)
			{
				return "CPC_TILEL";
			}
			else if (func_453() == 0x00000001)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 0x00000085:
			switch (func_154())
			{
				case 0x00000000:
					return "AMCH_0SLC";
				
				case 0x00000001:
					return "AMCH_1SLC";
				
				case 0x00000002:
					return "AMCH_2SLC";
				
				case 0x00000003:
					return "AMCH_3SLC";
				
				case 0x00000004:
					return "AMCH_4SLC";
				
				case 0x00000005:
					return "AMCH_5SLC";
				
				case 0x00000006:
					return "AMCH_6SLC";
				
				case 0x00000007:
					return "AMCH_7SLC";
				
				case 0x00000008:
					return "AMCH_8SLC";
				
				case 0x00000009:
					return "AMCH_12SLC";
				
				case 0x0000000A:
					return "AMCH_13SLC";
				
				case 0x0000000B:
					return "AMCH_15SLC";
				
				case 0x0000000C:
					return "AMCH_16SLC";
				
				case 0x0000000D:
					return "AMCH_23SLC";
				
				case 0x0000000E:
					return "AMCH_9SLC";
				
				case 0x0000000F:
					return "AMCH_19SLC";
				
				case 0x00000010:
					return "AMCH_20SLC";
				
				case 0x00000011:
					return "AMCH_21SLC";
				
				case 0x00000012:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "PIM_TA10";
		
		case 0x0000008A:
			return "PIM_TA4";
		
		case 0x0000008B:
			return "PIM_TA5";
		
		case 0x0000008C:
			return "PIM_TA3";
		
		case 0x0000008D:
			return "PIM_TA8";
		
		case 0x00000090:
			return "PIM_TA2";
		
		case 0x00000081:
			if (func_452() == 0x00000001)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 0x00000092:
			return "PIM_TA6";
	}
	return "";
}

int func_452()
{
	return Global_26B66F.f_13B8;
}

int func_453()
{
	if (func_260(unk_0xD803B885F5E47A62()) == 0x00000084)
	{
		return Global_26B66F.f_13B3;
	}
	return 0xFFFFFFFF;
}

void func_454(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_388(sParam1);
		}
		else if (iParam5 != 0xFFFFFFFF)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_377(sParam1);
		}
		if (func_476() && iParam6)
		{
			if (func_456())
			{
				iVar0 = 0x00000002;
				iVar1 = 0x00000002;
			}
			else
			{
				iVar0 = 0x00000001;
				iVar1 = 0x00000002;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_377(sParam2);
		}
		if (iParam4 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_455(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(0x000000A6);
			}
			else if (func_58())
			{
				unk_0x3CAEA85DA607305E(0x000000DC);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_455(int iParam0)
{
	if (func_438(iParam0) || func_437(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_456()
{
	return Global_18052B;
}

struct<4> func_457(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_458(unk_0xD803B885F5E47A62()) || func_436(unk_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000012:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_CC, 16);
			break;
	}
	if (func_380() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_458(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000005;
}

char* func_459(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 0x00000014 && (!func_380() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_460();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 0x00000019)
	{
		if (Global_180619 == 0x00000000)
		{
			Global_180619 = 0x00000001;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_180619 == 0x00000001)
		{
			Global_180619 = 0x00000000;
		}
		return sParam1;
	}
	else
	{
		if (Global_180619 == 0x00000000)
		{
			Global_180619 = 0x00000001;
		}
		switch (iParam0)
		{
			case 0x00000000:
			case 0x0000001F:
				return "HUD_LBD_DM";
				break;
			
			case 0x00000001:
				return "HUD_LBD_TDM";
				break;
			
			case 0x00000005:
				return "HUD_LBD_GRCE";
				break;
			
			case 0x00000004:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
			case 0x0000001A:
			case 0x0000000B:
				return "HUD_LBD_RCE";
				break;
			
			case 0x00000007:
				return "HUD_LBD_BRCE";
				break;
			
			case 0x00000012:
			case 0x0000000E:
			case 0x00000011:
			case 0x0000000F:
			case 0x0000000D:
			case 0x0000000C:
			case 0x00000010:
			case 0x00000013:
				return "HUD_TITLEMC";
				break;
			
			case 0x00000003:
				return "HUD_LBD_HRD";
				break;
			
			case 0x00000016:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_460()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_461()
{
	Global_A56F = 0x00000001;
}

bool func_462(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*iParam1);
}

void func_463(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000007);
	Global_180529 = 0x00000000;
	func_370();
	Global_180528 = 0x00000000;
	uParam1->f_1B = 0x00000000;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_13)))
		{
			func_3(&(uParam1->f_13));
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_21, 0x00000000))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000000);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_464()
{
	if (func_474())
	{
		return 0x00000000;
	}
	if (func_339())
	{
		return 0x00000000;
	}
	if (!func_472())
	{
		return 0x00000000;
	}
	if (!func_326())
	{
		return 0x00000000;
	}
	if (func_471(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (func_475() == 0x00000002)
	{
		return 0x00000000;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0x00000000;
	}
	if (func_146())
	{
		return 0x00000000;
	}
	else if (!func_253(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && Global_1403E4[0x00000000 /*4*/] > 0x00000000)
	{
		return 0x00000000;
	}
	if (((func_470(0x00000001) || func_468(0x00000001)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (func_467() && Global_19DEEC == 0x00000002)
	{
		return 0x00000000;
	}
	if (func_693(unk_0xD803B885F5E47A62()) && !func_467())
	{
		return 0x00000000;
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (Global_195C3B)
	{
		return 0x00000000;
	}
	if (func_466(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000004))
	{
		return 0x00000000;
	}
	if (Global_14E876)
	{
		return 0x00000000;
	}
	if ((Global_19C478.f_2CE.f_5 || Global_19CF82.f_2CE.f_5) || Global_19C0AC.f_2CE.f_5)
	{
		return 0x00000000;
	}
	if ((Global_19E2B1.f_2D4.f_5 || Global_19E2B1.f_2E8.f_2D4.f_5) || Global_19E2B1.f_5D9.f_2D4.f_5)
	{
		return 0x00000000;
	}
	if (func_465(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_465(int iParam0)
{
	if (iParam0 == func_27())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 0x00000006);
}

bool func_466(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

bool func_467()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_468(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_469(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000019) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000044))
				{
					return 0x00000000;
				}
			}
		}
	}
	if (Global_56C3.f_82)
	{
		return 0x00000000;
	}
	if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000013) || (!bParam0 && unk_0x7FEE810EE9E768EB(0x00000000, 0x00000013)))
	{
		return 0x00000001;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0x00000000, 0x000000A6) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A7)) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A8)) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A9))
		{
			return 0x00000001;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A6) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A7)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A8)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A9))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_469(int iParam0)
{
	int iVar0;
	
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 0x0A914799)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_470(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

bool func_471(int iParam0, int iParam1)
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

int func_472()
{
	if (func_473())
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

bool func_473()
{
	return Global_1406B8;
}

bool func_474()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_475()
{
	return Global_150392.f_44;
}

int func_476()
{
	if (Global_18052A > 0x00000010)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_477()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000014:
		case 0x00000015:
		case 0x0000001B:
		case 0x0000001C:
		case 0x00000028:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_479()
{
	if (func_482())
	{
		return 0x00000001;
	}
	if (func_259(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_450())
	{
		return 0x00000001;
	}
	if (func_338(unk_0xD803B885F5E47A62()))
	{
		switch (func_260(unk_0xD803B885F5E47A62()))
		{
			case 0x00000083:
			case 0x00000084:
			case 0x00000085:
			case 0x00000088:
			case 0x0000008A:
			case 0x0000008B:
			case 0x0000008D:
			case 0x00000090:
			case 0x00000092:
				return 0x00000001;
				break;
			
			case 0x0000008C:
				if (!func_480(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000081:
				if (!func_480(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AE:
				if (!func_480(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AF:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

bool func_480(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000004);
}

int func_481(int iParam0)
{
	if (iParam0 == 0x0000001C)
	{
		if ((func_338(unk_0xD803B885F5E47A62()) && !func_106(unk_0xD803B885F5E47A62())) && !func_385(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x0000001B)
	{
		if (func_31(unk_0xD803B885F5E47A62(), 0x00000000) && func_106(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
		if (func_331(unk_0xD803B885F5E47A62()) == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_482()
{
	if (func_483(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0x00000000;
}

int func_483(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_36(iParam0, 0x00000000))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0x00000000;
}

void func_484()
{
	if (!func_18(&uLocal_88))
	{
		if (func_485(unk_0x57270EE11514DC67()))
		{
			func_11(&uLocal_88, 0x00000000, 0x00000001);
		}
	}
}

int func_485(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_84[iParam0 /*5*/].f_4, 0x00000005))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_84[iParam0 /*5*/].f_4, 0x00000004))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_84[iParam0 /*5*/].f_4, 0x00000006))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_84[iParam0 /*5*/].f_4, 0x00000007))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_486()
{
	if (func_303(0x00000001, 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000008))
		{
			unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000008);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000008))
	{
		unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000008);
	}
	if (func_303(0x00000000, 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000009))
		{
			unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000009);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000009))
	{
		unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000009);
	}
	if (func_303(0x00000001, 0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x0000000A))
		{
			unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x0000000A);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x0000000A))
	{
		unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x0000000A);
	}
	if (func_303(0x00000000, 0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x0000000B))
		{
			unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x0000000B);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x0000000B))
	{
		unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x0000000B);
	}
}

void func_487()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		func_494(iVar0);
		func_488(iVar0);
		switch (func_15(iVar0))
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				break;
		}
		iVar0++;
	}
}

void func_488(int iParam0)
{
	if (func_303(0x00000000, 0x00000000) || iLocal_643 == 0xFFFFFFFF)
	{
		func_84(iParam0);
		func_86(iParam0);
		func_81(iParam0, 0xFFFFFFFF);
		return;
	}
	if (func_7(iParam0) == 0xFFFFFFFF)
	{
		if (func_261(unk_0x57270EE11514DC67(), iParam0))
		{
			func_86(iParam0);
		}
		else
		{
			func_490(iParam0);
		}
	}
	else
	{
		func_86(iParam0);
	}
	if (iLocal_644 != func_82(iParam0, 0x00000001))
	{
		switch (iLocal_645)
		{
			case 0x00000000:
				func_81(iParam0, 0xFFFFFFFF);
				iLocal_645++;
				break;
			
			case 0x00000001:
				func_489(iParam0);
				iLocal_644 = func_82(iParam0, 0x00000001);
				iLocal_645 = 0x00000000;
				break;
			}
	}
}

void func_489(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_86, func_513(iParam0)))
	{
		unk_0x4A847DA194A5532B(func_83(iParam0, 0x00000000), 0x00000001, func_82(iParam0, 0x00000001));
		if (func_513(iParam0) == 0x00000004)
		{
			unk_0x4A847DA194A5532B(func_83(iParam0, 0x00000001), 0x00000001, func_82(iParam0, 0x00000001));
		}
		unk_0x5D96D8530B3D0904(&iLocal_86, func_513(iParam0));
	}
}

void func_490(int iParam0)
{
	if (!unk_0xE4EDC4B0E92C078B(func_87(iParam0)))
	{
		func_493(iParam0, unk_0x6CC513A908911CF0(func_359(iParam0)));
		unk_0x2A065371C9D96655(func_87(iParam0), 0x0000000C);
		if (unk_0xEF07223F00EBE9C9("KOTC_AREANAME"))
		{
			unk_0xDC5B2F9D0CCE3A10(func_87(iParam0), "KOTC_AREANAME");
		}
		unk_0xBC8E0A7390523199(func_87(iParam0), 0x000001B6);
		func_491(&(Local_99[iParam0 /*68*/].f_1B), func_82(iParam0, 0x00000001));
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000D))
		{
			unk_0xF412DD40DE84CE72(Local_99[iParam0 /*68*/].f_1B, 0x00000001);
			unk_0x0EC848EFF66DF45A(Local_99[iParam0 /*68*/].f_1B, 0x00001B58);
			unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000D);
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x0000000C))
		{
			unk_0x4A51D2E4732BD556();
			unk_0x5D96D8530B3D0904(&iLocal_85, 0x0000000C);
		}
		unk_0xF2D30B8ACAF12A39(func_87(iParam0), 0x00000001);
		unk_0xA6B0C9C2D8FC9744(func_87(iParam0), 0x00000001);
	}
	else
	{
		func_491(&(Local_99[iParam0 /*68*/].f_1B), func_82(iParam0, 0x00000000));
		if (unk_0xE4EDC4B0E92C078B(func_87(iParam0)))
		{
			if (unk_0xEF07223F00EBE9C9("KOTC_AREANAME"))
			{
				unk_0xDC5B2F9D0CCE3A10(func_87(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_491(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		iVar0 = func_492(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, iVar0);
	}
}

int func_492(int iParam0)
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

void func_493(int iParam0, int iParam1)
{
	Local_99[iParam0 /*68*/].f_1B = iParam1;
}

void func_494(int iParam0)
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar2[3];
	var uVar3[3];
	vector3 vVar4[3];
	var uVar5[3];
	bool bVar6;
	float fVar7;
	float fVar8;
	
	fVar7 = 10f;
	fVar8 = 25f;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (func_513(iParam0) == 0x00000007)
		{
			fVar7 = 5f;
			fVar8 = 9f;
		}
		vVar1[iVar0 /*3*/] = { func_504(iParam0, iVar0) };
		vVar2[iVar0 /*3*/] = { func_503(iParam0, iVar0) };
		uVar3[iVar0] = func_502(iParam0, iVar0);
		func_501(iParam0, iVar0, &(vVar4[iVar0 /*3*/]), &(uVar5[iVar0]));
		if (unk_0xEAE0D21A50E6C7F4(iLocal_636, unk_0x57270EE11514DC67()))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, Local_90[unk_0x57270EE11514DC67() /*18*/].f_1))
				{
					if (!func_303(0x00000001, 0x00000001))
					{
						if (iLocal_643 == unk_0x57270EE11514DC67())
						{
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
							{
								if ((!func_500(vVar1[iVar0 /*3*/]) && !func_500(vVar2[iVar0 /*3*/])) && uVar3[iVar0] > 0f)
								{
									if (unk_0x3D1053F9EB43B7AD(vLocal_91[unk_0xD803B885F5E47A62() /*3*/].f_2, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0x00000000, 0x00000001, 0x00000000))
									{
										bVar6 = 0x00000001;
									}
								}
								if (func_513(iParam0) == 0x00000007)
								{
									if (func_499(iParam0) < 0f)
									{
										if (func_499(iParam0) <= fVar7 && func_499(iParam0) >= (fVar7 * -1f))
										{
											if (func_498(iParam0) <= fVar8)
											{
												bVar6 = 0x00000001;
											}
										}
									}
								}
								else if (!func_500(vVar4[iVar0 /*3*/]))
								{
									if (func_497(iParam0, iVar0) < 0f)
									{
										if (func_497(iParam0, iVar0) >= (uVar5[iVar0] * -1f))
										{
											if (func_496(iParam0, iVar0) <= uVar5[iVar0])
											{
												bVar6 = 0x00000001;
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
		iVar0++;
	}
	func_495(iParam0, bVar6);
}

void func_495(int iParam0, bool bParam1)
{
	Local_84[unk_0x57270EE11514DC67() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_3), iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_3), iParam0);
	}
}

float func_496(int iParam0, int iParam1)
{
	return Local_99[iParam0 /*68*/].f_29[iParam1];
}

float func_497(int iParam0, int iParam1)
{
	return Local_99[iParam0 /*68*/].f_2D[iParam1];
}

float func_498(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_26;
}

float func_499(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_27;
}

int func_500(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_501(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000002:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000004:
					*uParam2 = { 2515.966f, 3777.477f, 51.767f };
					*fParam3 = 5.3f;
					break;
				
				case 0x00000001:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000003:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000005:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000006:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000007:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 0x00000001:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000002:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000004:
					*uParam2 = { 2515.315f, 3789.364f, 52.088f };
					*fParam3 = 3.35f;
					break;
				
				case 0x00000001:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000003:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000005:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000006:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000007:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 0x00000002:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000002:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000004:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000001:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000003:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000005:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000006:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 0x00000007:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_502(int iParam0, int iParam1)
{
	return Local_99[iParam0 /*68*/].f_14[iParam1];
}

Vector3 func_503(int iParam0, int iParam1)
{
	return Local_99[iParam0 /*68*/].f_A[iParam1 /*3*/];
}

Vector3 func_504(int iParam0, int iParam1)
{
	return Local_99[iParam0 /*68*/][iParam1 /*3*/];
}

void func_505(int iParam0)
{
	Local_84[unk_0x57270EE11514DC67() /*5*/] = iParam0;
}

void func_506(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000088:
			switch (iParam1)
			{
				case 0x00000000:
					func_507("kwUfKUus6EuQyNSL8KpY-w");
					func_507("yMTOFLfO2UKwzKrmgPP7kg");
					func_507("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 0x00000002:
					func_507("tP5HSeCA0UiHnkRzakdO2Q");
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					func_507("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 0x00000003:
					func_507("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 0x00000006:
					func_507("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 0x0000008B:
			switch (iParam1)
			{
				case 0x00000001:
					func_507("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 0x00000002:
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 0x0000008A:
			switch (iParam1)
			{
				case 0x00000002:
					func_507("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 0x00000003:
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					func_507("92t91kL3Wkqvl2Kc82cNSA");
					func_507("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 0x00000005:
					func_507("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 0x00000006:
					func_507("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 0x00000007:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 0x0000008D:
			switch (iParam1)
			{
				case 0x00000000:
					func_507("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 0x00000086:
			switch (iParam1)
			{
				case 0x00000001:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 0x00000004:
					func_507("fOfm7nzMLkav0ldcSCNAzA");
					func_507("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 0x00000005:
					func_507("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0x00000000:
					func_507("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 0x00000009:
					func_507("Ma78E44OMkGfYPmCPZXUNA");
					func_507("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 0x00000013:
					func_507("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 0x0000000A:
					func_507("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 0x0000008C:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							func_507("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000002:
							func_507("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 0x00000002:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000001:
							func_507("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 0x00000002:
							func_507("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 0x00000004:
					func_507("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 0x00000002:
							func_507("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							func_507("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 0x00000001:
							func_507("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 0x00000002:
							func_507("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 0x00000003:
							func_507("fOfm7nzMLkav0ldcSCNAzA");
							func_507("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							func_507("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 0x00000001:
							func_507("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							func_507("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 0x00000002:
							func_507("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000003:
							func_507("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 0x00000004:
					switch (iParam2)
					{
						case 0x00000001:
							func_507("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 0x00000005:
					switch (iParam2)
					{
						case 0x00000001:
							func_507("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 0x00000002:
							func_507("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 0x00000003:
							func_507("fOfm7nzMLkav0ldcSCNAzA");
							func_507("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 0x00000006:
					switch (iParam2)
					{
						case 0x00000000:
							func_507("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 0x00000001:
							func_507("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 0x00000007:
					switch (iParam2)
					{
						case 0x00000000:
							func_507("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 0x00000002:
							func_507("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 0x00000008:
					switch (iParam2)
					{
						case 0x00000003:
							func_507("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam3)
			{
				case 0x00000000:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000001:
									func_507("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 0x00000002:
									func_507("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 0x00000002:
									func_507("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 0x00000003:
									func_507("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 0x00000004:
									func_507("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000000:
									func_507("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 0x00000002:
									func_507("aGBjo2rKi0yMDLl3a2ATGA");
									func_507("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 0x00000003:
									func_507("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 0x00000003:
							switch (iParam2)
							{
								case 0x00000001:
									func_507("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 0x00000004:
									func_507("f2lnL6wZPkGWUowu0yLm1Q");
									func_507("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000001:
									func_507("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 0x00000002:
									func_507("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 0x00000005:
							switch (iParam2)
							{
								case 0x00000000:
									func_507("W-OJzHlM-0ym9PsIASYZtw");
									func_507("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 0x00000001:
									func_507("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 0x00000003:
									func_507("TjGz31AMYE6bGCjAIitu6w");
									func_507("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 0x00000006:
							switch (iParam2)
							{
								case 0x00000002:
									func_507("QmlvLMLCwkOvoZlkAstYxw");
									func_507("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 0x00000003:
									func_507("BktATxH9R0Wp2x0kWSbqjw");
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 0x00000004:
									func_507("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000001:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 0x00000003:
									func_507("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									func_507("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 0x00000001:
									func_507("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 0x00000002:
									func_507("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 0x00000003:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000003:
									func_507("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 0x00000002:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									func_507("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000004:
									func_507("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_507(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_C, 0x0000000B))
		{
			if (func_508(&(Global_2401A9[iVar1 /*26*/].f_F)) == iVar0)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_D, 0x0000001A))
				{
					unk_0x5D96D8530B3D0904(&(Global_2401A9[iVar1 /*26*/].f_D), 0x0000001A);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_508(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	iVar2 = func_510(uParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			Var0 = { func_509(uParam0) };
			return Var0.f_1;
		
		case 0x0000003E:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_509(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	iVar1 = func_510(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_1A2B5[iVar1 /*13*/];
		
		case 0x0000003E:
			return Global_E012E.f_24BD[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_510(var uParam0)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(&(uParam0->f_3)))
	{
		return 0xFFFFFFFF;
	}
	if (func_512(uParam0->f_1))
	{
		if (func_511(uParam0))
		{
			return 0x0000270F;
		}
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (Global_14010B.f_5)
				{
					return 0xFFFFFFFF;
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x000004C2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar0 /*88*/].f_4C, 0x0000000D))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 0xFFFFFFFF;
		
		case 0x0000003E:
			if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (Global_14010B.f_5)
				{
					return 0xFFFFFFFF;
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000064)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 0x0000000D))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 0xFFFFFFFF;
		
		case 0x00000028:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
		{
			if (Global_14010B.f_5)
			{
				return 0xFFFFFFFF;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000003E)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return 0xFFFFFFFF;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_511(var uParam0)
{
	if (Global_249797)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_512(int iParam0)
{
	return iParam0 == 0x0000270F;
}

int func_513(int iParam0)
{
	return Local_80.f_6[iParam0 /*204*/].f_45;
}

int func_514()
{
	return Local_80;
}

int func_515(int iParam0)
{
	return Local_84[iParam0 /*5*/];
}

void func_516()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0xFFFFFFFF;
	if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000000))
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000001)
		{
			if (func_513(iVar2) > 0xFFFFFFFF)
			{
				iVar3 = 0x00000000;
				while (iVar3 < 0x00000003)
				{
					func_534(iVar2, iVar3, func_535(iVar2, iVar3));
					func_532(iVar2, iVar3, func_533(iVar2, iVar3));
					func_530(iVar2, func_531(iVar2));
					func_528(iVar2, iVar3, func_529(iVar2, iVar3));
					unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000000);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000001)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_527(iVar2) <= 0x00000001)
			{
				func_526(iVar2, 0x00000000);
			}
			else
			{
				func_526(iVar2, 0x00000001);
			}
		}
		if (func_8(iVar2) == 0xFFFFFFFF)
		{
			if (!func_155(iVar2))
			{
				unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000000);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = 0x00000001;
			if (unk_0xBFF81ED3B99522C7())
			{
				func_526(iVar2, 0x00000000);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_155(iVar2))
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					if (iVar0 > 0xFFFFFFFF)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_636, iVar0))
						{
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000000);
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_635, iVar0))
						{
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000000);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_637, iVar0))
						{
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000000);
						}
						if (!func_261(iVar0, iVar2))
						{
							unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000000);
						}
					}
				}
			}
			else if (iVar0 > 0xFFFFFFFF)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_636, iVar0))
				{
					bVar5 = 0x00000001;
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_635, iVar1))
				{
					bVar5 = 0x00000001;
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_637, iVar1))
				{
					bVar5 = 0x00000001;
				}
				if (!func_261(iVar0, iVar2))
				{
					bVar5 = 0x00000001;
				}
			}
		}
		if (bVar5)
		{
			if (unk_0xBFF81ED3B99522C7())
			{
				func_525(iVar2, 0xFFFFFFFF);
				func_524(iVar2, 0xFFFFFFFF);
			}
			func_523(iVar2, uVar4);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000000))
		{
			if (func_522(iVar2) > 0xFFFFFFFF && func_521(iVar2) > 0xFFFFFFFF)
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					func_525(iVar2, func_522(iVar2));
					func_524(iVar2, func_521(iVar2));
					func_523(iVar2, func_520(iVar2));
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_6[iVar2 /*204*/].f_CB, func_522(iVar2)))
					{
						unk_0x5D96D8530B3D0904(&(Local_80.f_6[iVar2 /*204*/].f_CB), func_522(iVar2));
					}
				}
			}
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			func_517(iVar2);
		}
		iVar2++;
	}
}

void func_517(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 0x0000001F;
	while (iVar0 >= 0x00000000)
	{
		iVar1 = 0x0000001F;
		while (iVar1 >= 0x00000000)
		{
			if ((iVar1 - 0x00000001) >= 0x00000000)
			{
				if (Local_80.f_6[iParam0 /*204*/].f_4A[iVar1 /*4*/].f_3 > Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/].f_3)
				{
					uVar3 = Local_80.f_6[iParam0 /*204*/].f_4A[iVar1 /*4*/].f_3;
					uVar4 = Local_80.f_6[iParam0 /*204*/].f_4A[iVar1 /*4*/];
					uVar5 = Local_80.f_6[iParam0 /*204*/].f_4A[iVar1 /*4*/].f_1;
					Local_80.f_6[iParam0 /*204*/].f_4A[iVar1 /*4*/].f_3 = Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/].f_3;
					Local_80.f_6[iParam0 /*204*/].f_4A[iVar1 /*4*/] = Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/];
					Local_80.f_6[iParam0 /*204*/].f_4A[iVar1 /*4*/].f_1 = Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/].f_1;
					Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/].f_3 = uVar3;
					Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/] = uVar4;
					Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/].f_1 = uVar5;
				}
				if ((iVar1 - 0x00000001) == 0x00000000 && Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/].f_3 > 0f)
				{
					if (!Local_80.f_11B == Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/])
					{
						Local_80.f_11B = Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/];
						Var2.f_2 = 0x11B1FFFA;
						Var2.f_A = unk_0x117658E336116132(Local_80.f_6[iParam0 /*204*/].f_4A[(iVar1 - 0x00000001) /*4*/].f_1);
						func_518(Var2, func_519(0x00000001));
					}
				}
			}
			iVar1 = (iVar1 + 0xFFFFFFFF);
		}
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

void func_518(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_519(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_756(iVar2, 0x00000000, 0x00000000))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_520(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_1F;
}

int func_521(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_23;
}

int func_522(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_22;
}

void func_523(int iParam0, var uParam1)
{
	Local_99[iParam0 /*68*/].f_1E = uParam1;
}

void func_524(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_525(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_80.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_526(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0 /*204*/].f_48 = iParam1;
}

int func_527(int iParam0)
{
	return Local_99[iParam0 /*68*/].f_25;
}

void func_528(int iParam0, int iParam1, var uParam2)
{
	Local_99[iParam0 /*68*/].f_14[iParam1] = uParam2;
}

float func_529(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return 23f;
				
				case 0x00000002:
					return 6f;
				
				case 0x00000004:
					return 7f;
				
				case 0x00000001:
					return 8.25f;
				
				case 0x00000003:
					return 16.5f;
				
				case 0x00000005:
					return 9.65f;
				
				case 0x00000006:
					return 9.15f;
				
				case 0x00000007:
					return 0f;
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return 23f;
				
				case 0x00000002:
					return 0f;
				
				case 0x00000004:
					return 0f;
				
				case 0x00000001:
					return 3.5f;
				
				case 0x00000003:
					return 0f;
				
				case 0x00000005:
					return 0f;
				
				case 0x00000006:
					return 0f;
				
				case 0x00000007:
					return 0f;
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return 23f;
				
				case 0x00000002:
					return 0f;
				
				case 0x00000004:
					return 0f;
				
				case 0x00000001:
					return 0f;
				
				case 0x00000003:
					return 0f;
				
				case 0x00000005:
					return 0f;
				
				case 0x00000006:
					return 0f;
				
				case 0x00000007:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_530(int iParam0, vector3 vParam1)
{
	Local_99[iParam0 /*68*/].f_18 = { vParam1 };
}

Vector3 func_531(int iParam0)
{
	switch (func_513(iParam0))
	{
		case 0x00000000:
			return -1195.435f, -1788.217f, 14.6269f;
		
		case 0x00000002:
			return -379.8141f, 6087.215f, 43.2552f;
		
		case 0x00000004:
			return 2516.59f, 3784.677f, 52.0053f;
		
		case 0x00000001:
			return 1667.193f, -27.4697f, 183.774f;
		
		case 0x00000003:
			return -746.2f, 5594.6f, 41.7f;
		
		case 0x00000005:
			return -389.3f, 1135.7f, 322.6f;
		
		case 0x00000006:
			return 473.6f, -1339.1f, 35.2f;
		
		case 0x00000007:
			return -1459.651f, 179.275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_532(int iParam0, int iParam1, vector3 vParam2)
{
	Local_99[iParam0 /*68*/].f_A[iParam1 /*3*/] = { vParam2 };
}

Vector3 func_533(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return -1178.575f, -1795.219f, 22.42828f;
				
				case 0x00000002:
					return -377.4193f, 6083.058f, 46.63536f;
				
				case 0x00000004:
					return 2518.118f, 3772.498f, 58.13546f;
				
				case 0x00000001:
					return 1673.975f, -24.62664f, 199.2563f;
				
				case 0x00000003:
					return -756.4877f, 5594.868f, 44.17008f;
				
				case 0x00000005:
					return -391.5381f, 1125.141f, 325.0288f;
				
				case 0x00000006:
					return 470.2388f, -1335.768f, 38.44154f;
				
				case 0x00000007:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return -1180.375f, -1777.348f, 22.48125f;
				
				case 0x00000002:
					return 0f, 0f, 0f;
				
				case 0x00000004:
					return 0f, 0f, 0f;
				
				case 0x00000001:
					return 1676.203f, -25.81484f, 200.1802f;
				
				case 0x00000003:
					return 0f, 0f, 0f;
				
				case 0x00000005:
					return 0f, 0f, 0f;
				
				case 0x00000006:
					return 0f, 0f, 0f;
				
				case 0x00000007:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return -1194.205f, -1806.82f, 22.48f;
				
				case 0x00000002:
					return 0f, 0f, 0f;
				
				case 0x00000004:
					return 0f, 0f, 0f;
				
				case 0x00000001:
					return 0f, 0f, 0f;
				
				case 0x00000003:
					return 0f, 0f, 0f;
				
				case 0x00000005:
					return 0f, 0f, 0f;
				
				case 0x00000006:
					return 0f, 0f, 0f;
				
				case 0x00000007:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_534(int iParam0, int iParam1, vector3 vParam2)
{
	Local_99[iParam0 /*68*/][iParam1 /*3*/] = { vParam2 };
}

Vector3 func_535(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return -1212.381f, -1780.108f, 7.481341f;
				
				case 0x00000002:
					return -381.2328f, 6089.681f, 34.37778f;
				
				case 0x00000004:
					return 2516.82f, 3795.646f, 49.82948f;
				
				case 0x00000001:
					return 1660.532f, -27.94882f, 181.587f;
				
				case 0x00000003:
					return -736.0183f, 5595.02f, 40.53122f;
				
				case 0x00000005:
					return -386.508f, 1144.122f, 321.5792f;
				
				case 0x00000006:
					return 479.0627f, -1343.186f, 34.14154f;
				
				case 0x00000007:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return -1209.83f, -1798.181f, 7.481341f;
				
				case 0x00000002:
					return 0f, 0f, 0f;
				
				case 0x00000004:
					return 0f, 0f, 0f;
				
				case 0x00000001:
					return 1669.613f, -27.26755f, 182.2874f;
				
				case 0x00000003:
					return 0f, 0f, 0f;
				
				case 0x00000005:
					return 0f, 0f, 0f;
				
				case 0x00000006:
					return 0f, 0f, 0f;
				
				case 0x00000007:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (func_513(iParam0))
			{
				case 0x00000000:
					return -1197.333f, -1769.584f, 7.474364f;
				
				case 0x00000002:
					return 0f, 0f, 0f;
				
				case 0x00000004:
					return 0f, 0f, 0f;
				
				case 0x00000001:
					return 0f, 0f, 0f;
				
				case 0x00000003:
					return 0f, 0f, 0f;
				
				case 0x00000005:
					return 0f, 0f, 0f;
				
				case 0x00000006:
					return 0f, 0f, 0f;
				
				case 0x00000007:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_536()
{
	func_538();
	iLocal_634++;
	func_537();
}

void func_537()
{
	if (iLocal_634 >= (unk_0x54EABC0DD106045B() - 0x00000001))
	{
		iLocal_634 = 0x00000000;
	}
}

void func_538()
{
	if (iLocal_634 == 0x00000000)
	{
	}
}

void func_539()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	vector3 vVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	vector3 vVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		vLocal_91[iVar1 /*3*/] = func_27();
		vLocal_91[iVar1 /*3*/].f_1 = 0xFFFFFFFF;
		vLocal_91[iVar1 /*3*/].f_2 = uVar3;
		unk_0x0674E58A79778E99(&iLocal_635, iVar1);
		unk_0x0674E58A79778E99(&iLocal_637, iVar1);
		iVar1++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		Local_90[iVar0 /*18*/] = func_570();
		Local_90[iVar0 /*18*/].f_1 = 0xFFFFFFFF;
		unk_0x0674E58A79778E99(&iLocal_636, iVar0);
		if (unk_0xBFF81ED3B99522C7())
		{
			iVar8 = 0x00000000;
			while (iVar8 < 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Local_80.f_6[iVar8 /*204*/].f_49), iVar0);
				iVar8++;
			}
		}
		Local_90[iVar0 /*18*/].f_2 = { Var4 };
		iVar0++;
	}
	iVar8 = 0x00000000;
	while (iVar8 < 0x00000001)
	{
		func_569(iVar8, 0x00000000);
		func_568(iVar8, 0x00000000);
		func_567(iVar8, 0f);
		func_566(iVar8, 0f);
		func_565(iVar8, 0f);
		iVar11 = 0x00000000;
		while (iVar11 < 0x00000003)
		{
			func_564(iVar8, iVar11, 0f);
			func_563(iVar8, iVar11, 0f);
			func_562(iVar8, iVar11, 0f);
			iVar11++;
		}
		iVar8++;
	}
	bVar13 = 0x00000001;
	bVar14 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			Local_90[iVar0 /*18*/] = iVar0;
			unk_0x5D96D8530B3D0904(&iLocal_636, iVar0);
			iVar2 = unk_0x4B2BFE4A3BC248ED(Local_90[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_756(iVar2, 0x00000000, 0x00000001))
			{
				vLocal_91[iVar1 /*3*/] = iVar2;
				Local_90[iVar0 /*18*/].f_1 = iVar1;
				vLocal_91[iVar1 /*3*/].f_1 = iVar0;
				vLocal_91[iVar1 /*3*/].f_2 = unk_0x9539D44F3E4492F6(iVar2);
				StringCopy(&(Local_90[iVar0 /*18*/].f_2), unk_0x6E524813889AECF8(iVar2), 64);
				iVar10++;
				if (func_485(iVar0))
				{
					iVar12++;
				}
				unk_0x5D96D8530B3D0904(&iLocal_635, iVar1);
				if ((unk_0x437347B10A200C4B(vLocal_91[iVar1 /*3*/].f_2, 0x00000000) || unk_0xEB6A8945D1AC98A1(vLocal_91[iVar1 /*3*/].f_2)) || !unk_0xE1DBBD6CE209517C(vLocal_91[iVar1 /*3*/]))
				{
					unk_0x5D96D8530B3D0904(&iLocal_637, iVar1);
				}
				if (unk_0xBFF81ED3B99522C7())
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_84[iVar0 /*5*/].f_4, 0x00000000))
					{
						bVar13 = 0x00000000;
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_84[iVar0 /*5*/].f_4, 0x00000001))
					{
						bVar14 = 0x00000000;
					}
				}
				func_560(iVar1, 0x00000002);
				if (func_259(iVar1))
				{
					if (unk_0xBFF81ED3B99522C7())
					{
						func_558(iVar0);
					}
				}
				if (func_136(iVar1))
				{
					if (unk_0xBFF81ED3B99522C7())
					{
						func_558(iVar0);
					}
				}
				if (func_263(iVar1))
				{
					if (unk_0xBFF81ED3B99522C7())
					{
						func_558(iVar0);
					}
				}
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&iLocal_636, iVar0);
			if (func_667() <= 0x00000001)
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					func_558(iVar0);
				}
			}
		}
		iVar8 = 0x00000000;
		while (iVar8 < 0x00000001)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_D5, 0x00000001))
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					func_557(iVar0, iVar8);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_636, iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_635, iVar1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_80.f_D5, 0x00000001))
					{
						if (unk_0xBFF81ED3B99522C7())
						{
							func_556(iVar0, iVar1, iVar8, func_148(iVar8, iVar0));
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, iVar1))
					{
						if (iVar0 == unk_0x57270EE11514DC67())
						{
							fVar19 = func_555(vLocal_91[iVar1 /*3*/].f_2, func_359(iVar8), 0x00000000);
							fVar20 = func_555(vLocal_91[iVar1 /*3*/].f_2, func_359(iVar8), 0x00000001);
							vVar21 = { unk_0x68F4C0EC296D3901(vLocal_91[iVar1 /*3*/].f_2, 0x00000001) };
							fVar22 = (Local_99[iVar8 /*68*/].f_18.f_2 - vVar21.z);
							func_567(iVar8, fVar19);
							func_566(iVar8, fVar22);
							func_565(iVar8, fVar20);
							iVar11 = 0x00000000;
							while (iVar11 < 0x00000003)
							{
								vVar5 = { 0f, 0f, 0f };
								fVar6 = 0f;
								func_501(iVar8, iVar11, &vVar5, &fVar6);
								if (!func_500(vVar5))
								{
									fVar23 = func_555(vLocal_91[iVar1 /*3*/].f_2, vVar5, 0x00000000);
									fVar24 = func_555(vLocal_91[iVar1 /*3*/].f_2, vVar5, 0x00000001);
									fVar25 = (vVar5.z - vVar21.z);
									func_564(iVar8, iVar11, fVar23);
									func_563(iVar8, iVar11, fVar25);
									func_562(iVar8, iVar11, fVar24);
								}
								iVar11++;
							}
						}
						if (func_261(iVar0, iVar8))
						{
							func_569(iVar8, 0x00000001);
							iVar9 = func_527(iVar8);
							iVar9++;
							func_568(iVar8, iVar9);
							if (func_8(iVar8) != iVar0 && func_7(iVar8) != iVar1)
							{
								if (func_522(iVar8) == 0xFFFFFFFF)
								{
									func_621(iVar8, iVar0);
								}
								if (func_521(iVar8) == 0xFFFFFFFF)
								{
									func_620(iVar8, iVar1);
								}
								func_619(iVar8, vLocal_91[iVar1 /*3*/].f_2);
							}
							if (unk_0xBFF81ED3B99522C7())
							{
								unk_0x5D96D8530B3D0904(&(Local_80.f_6[iVar8 /*204*/].f_49), iVar0);
							}
						}
					}
					if (iVar0 == unk_0x57270EE11514DC67())
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, iVar1))
						{
							if (func_236(iVar8) <= IntToFloat(Global_40001.f_2CE9))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_84[iVar0 /*5*/].f_4, 0x0000000C))
								{
									unk_0x5D96D8530B3D0904(&(Local_84[iVar0 /*5*/].f_4), 0x0000000C);
								}
							}
							else if (func_236(iVar8) >= IntToFloat(Global_40001.f_2CEA))
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_84[iVar0 /*5*/].f_4, 0x0000000C))
								{
									unk_0x0674E58A79778E99(&(Local_84[iVar0 /*5*/].f_4), 0x0000000C);
								}
							}
							if (!func_262(0x00000001, 0x00000000))
							{
								if (func_236(iVar8) <= IntToFloat(Global_40001.f_2CE9))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_84[iVar0 /*5*/].f_4, 0x00000003))
									{
										unk_0x5D96D8530B3D0904(&(Local_84[iVar0 /*5*/].f_4), 0x00000003);
									}
								}
								else if (func_236(iVar8) >= IntToFloat(Global_40001.f_2CEA))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_84[iVar0 /*5*/].f_4, 0x00000003))
									{
										unk_0x0674E58A79778E99(&(Local_84[iVar0 /*5*/].f_4), 0x00000003);
									}
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Local_84[iVar0 /*5*/].f_4, 0x00000003))
							{
								unk_0x0674E58A79778E99(&(Local_84[iVar0 /*5*/].f_4), 0x00000003);
							}
						}
					}
				}
				iVar7 = 0x00000006;
				if (unk_0xD803B885F5E47A62() != vLocal_91[iVar1 /*3*/])
				{
					if (func_208(unk_0xD803B885F5E47A62(), vLocal_91[iVar1 /*3*/]))
					{
						iVar7 = func_171(unk_0xD803B885F5E47A62(), 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, iVar1))
				{
					if (func_303(0x00000000, 0x00000000))
					{
						func_554(iVar1);
					}
					else if (func_7(iVar8) != iVar1)
					{
						func_554(iVar1);
					}
					else if (func_667() != 0x00000001)
					{
						func_554(iVar1);
					}
					else
					{
						func_549(iVar1);
						if (iVar0 != unk_0x57270EE11514DC67())
						{
							if (func_199(unk_0x57270EE11514DC67()))
							{
								unk_0xA402F6C87C08815C(iVar7, &iVar15, &iVar16, &iVar17, &iVar18);
								iVar18 = 0x00000064;
								unk_0x922D0EFFF8F2403B(0x00000002, unk_0x68F4C0EC296D3901(vLocal_91[iVar1 /*3*/].f_2, 0x00000001) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar15, iVar16, iVar17, iVar18, 0x00000001, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
				}
				if (func_756(vLocal_91[iVar1 /*3*/], 0x00000001, 0x00000001))
				{
					if (func_547(vLocal_91[iVar1 /*3*/]))
					{
						func_540(vLocal_91[iVar1 /*3*/], func_492(iVar7), func_543(iVar0, iVar1, iVar8), 0x00000000);
					}
				}
			}
			iVar8++;
		}
		iVar0++;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		if (bVar13)
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_D5), 0x00000000);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_80.f_D5), 0x00000000);
		}
		if (bVar14)
		{
			unk_0x5D96D8530B3D0904(&(Local_80.f_D5), 0x00000001);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_80.f_D5), 0x00000001);
		}
	}
	if (iVar12 > iLocal_87)
	{
		iLocal_87 = iVar12;
	}
	if (iVar10 > iLocal_638)
	{
		iLocal_638 = iVar10;
	}
	else
	{
		Local_80.f_D8 = (iLocal_638 - iVar10);
	}
}

void func_540(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_542(iParam0))
	{
		return;
	}
	if (func_541(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = uParam1;
		}
	}
}

int func_541(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x1727A44C562FBED2(*uParam1) || *uParam1 == unk_0x0D0A574C76D769AC())
		{
			*uParam1 = unk_0x0D0A574C76D769AC();
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
	}
	if (!unk_0x1727A44C562FBED2(*uParam0) || *uParam0 == unk_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 0x00000001;
				unk_0x5D96D8530B3D0904(iParam2, iParam4);
			}
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 0x00000001;
				unk_0x0674E58A79778E99(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x0D0A574C76D769AC())
			{
				*uParam1 = 0xFFFFFFFF;
			}
			*uParam0 = 0xFFFFFFFF;
		}
		return 0x00000001;
	}
	else if (unk_0x1727A44C562FBED2(*uParam1) && !*uParam1 == unk_0x0D0A574C76D769AC())
	{
	}
	return 0x00000000;
}

int func_542(int iParam0)
{
	if (iParam0 == func_27())
	{
		return 0x00000001;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_223())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_543(int iParam0, int iParam1, int iParam2)
{
	if (func_303(0x00000000, 0x00000000))
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0x57270EE11514DC67())
	{
		return 0x00000000;
	}
	if (func_544(iParam1))
	{
		return 0x00000000;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 0x00000001;
	}
	if (unk_0x57270EE11514DC67() != func_8(iParam2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_544(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return func_139();
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_F1.f_88[func_546(0x0000000A) /*33*/][iParam0], func_545(0x0000000A));
}

int func_545(int iParam0)
{
	return (iParam0 % 0x00000020);
}

int func_546(int iParam0)
{
	return (iParam0 / 0x00000020);
}

bool func_547(int iParam0)
{
	return func_548(&(Global_24DDCF.f_26D[iParam0]));
}

int func_548(var uParam0)
{
	if (unk_0x1727A44C562FBED2(*uParam0))
	{
		if (!*uParam0 == unk_0x0D0A574C76D769AC())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_549(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000006;
	if (iParam0 > 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_635, iParam0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, iParam0))
			{
				if (func_208(unk_0xD803B885F5E47A62(), vLocal_91[iParam0 /*3*/]))
				{
					iVar0 = func_171(unk_0xD803B885F5E47A62(), 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
				}
				func_552(vLocal_91[iParam0 /*3*/], 0x000001B7, 0x00000001, 0x00000000);
				if (func_547(vLocal_91[iParam0 /*3*/]))
				{
					func_540(vLocal_91[iParam0 /*3*/], func_492(iVar0), 0x00000001, 0x00000000);
				}
				func_550(vLocal_91[iParam0 /*3*/], 0x00000001, 0x00000001, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_642, iParam0);
			}
		}
	}
}

void func_550(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_542(iParam0))
	{
		return;
	}
	if (func_541(&(Global_24DDCF.f_333[iParam0]), &(Global_24DDCF.f_49E[iParam0]), &(Global_24DDCF.f_16F), bParam1, iParam0, bParam3, &uVar0))
	{
		func_551(iParam0, bParam2);
	}
}

void func_551(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_170), iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_24DDCF.f_170), iParam0);
	}
	if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iParam0]))
	{
		if (bParam1)
		{
			unk_0x6ABCCE651368DB93(Global_24DDCF[iParam0], 0x00000000);
		}
		else
		{
			unk_0x6ABCCE651368DB93(Global_24DDCF[iParam0], 0x00000001);
		}
	}
}

void func_552(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_542(iParam0))
	{
		return;
	}
	if (func_541(&(Global_24DDCF.f_24C[iParam0]), &(Global_24DDCF.f_3B7[iParam0]), &(Global_24DDCF.f_184), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1A7[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_553();
		}
	}
}

void func_553()
{
	Global_24DDCF.f_64E = 0x00000001;
}

void func_554(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000006;
	if (unk_0xEAE0D21A50E6C7F4(iLocal_642, iParam0))
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_635, iParam0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_637, iParam0))
				{
					if (unk_0xD803B885F5E47A62() != vLocal_91[iParam0 /*3*/])
					{
						if (func_208(unk_0xD803B885F5E47A62(), vLocal_91[iParam0 /*3*/]))
						{
							iVar0 = func_171(unk_0xD803B885F5E47A62(), 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					func_552(vLocal_91[iParam0 /*3*/], 0x000001B7, 0x00000000, 0x00000000);
					if (func_547(vLocal_91[iParam0 /*3*/]))
					{
						func_540(vLocal_91[iParam0 /*3*/], func_492(iVar0), 0x00000000, 0x00000000);
					}
					func_550(vLocal_91[iParam0 /*3*/], 0x00000000, 0x00000000, 0x00000000);
					unk_0x0674E58A79778E99(&iLocal_642, iParam0);
				}
			}
		}
	}
}

float func_555(int iParam0, vector3 vParam1, bool bParam2)
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

void func_556(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Local_80.f_6[iParam2 /*204*/].f_4A[iParam0 /*4*/] = iParam0;
	Local_80.f_6[iParam2 /*204*/].f_4A[iParam0 /*4*/].f_1 = iParam1;
	Local_80.f_6[iParam2 /*204*/].f_4A[iParam0 /*4*/].f_2 = iParam1;
	Local_80.f_6[iParam2 /*204*/].f_4A[iParam0 /*4*/].f_3 = fParam3;
}

void func_557(int iParam0, int iParam1)
{
	Local_80.f_6[iParam1 /*204*/].f_4A[iParam0 /*4*/] = 0xFFFFFFFF;
	Local_80.f_6[iParam1 /*204*/].f_4A[iParam0 /*4*/].f_1 = 0xFFFFFFFF;
	Local_80.f_6[iParam1 /*204*/].f_4A[iParam0 /*4*/].f_2 = func_27();
	Local_80.f_6[iParam1 /*204*/].f_4A[iParam0 /*4*/].f_3 = -1f;
}

void func_558(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (func_6(iVar0, iParam0) > 0f || func_149(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_559(iVar0, iParam0, 0f);
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000020)
		{
			if (Local_80.f_D9[iVar1] > 0f)
			{
				if (Local_80.f_FA[iVar1] == iParam0)
				{
					Local_80.f_D9[iVar1] = 0f;
					Local_80.f_FA[iVar1] = 0xFFFFFFFF;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_559(int iParam0, int iParam1, float fParam2)
{
	Local_80.f_6[iParam0 /*204*/].f_24[iParam1] = fParam2;
}

void func_560(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000000))
	{
		return;
	}
	if (func_18(&(Global_1806FA.f_12)))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_2, iParam0))
	{
		if (Global_1806FA < iParam1 && unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000000);
			return;
		}
		if (Global_1806FA != 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000001);
		}
		Global_1806FA = 0x00000000;
		Global_1806FA.f_2 = 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(Global_1806FA.f_2), iParam0);
	bVar0 = 0x00000001;
	if (func_229(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (func_561(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (func_36(iParam0, 0x00000000))
	{
		bVar0 = 0x00000000;
	}
	if (func_259(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (bVar0)
	{
		Global_1806FA++;
	}
}

bool func_561(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A);
}

void func_562(int iParam0, int iParam1, float fParam2)
{
	Local_99[iParam0 /*68*/].f_31[iParam1] = fParam2;
}

void func_563(int iParam0, int iParam1, float fParam2)
{
	Local_99[iParam0 /*68*/].f_2D[iParam1] = fParam2;
}

void func_564(int iParam0, int iParam1, float fParam2)
{
	Local_99[iParam0 /*68*/].f_29[iParam1] = fParam2;
}

void func_565(int iParam0, float fParam1)
{
	Local_99[iParam0 /*68*/].f_28 = fParam1;
}

void func_566(int iParam0, float fParam1)
{
	Local_99[iParam0 /*68*/].f_27 = fParam1;
}

void func_567(int iParam0, float fParam1)
{
	Local_99[iParam0 /*68*/].f_26 = fParam1;
}

void func_568(int iParam0, int iParam1)
{
	Local_99[iParam0 /*68*/].f_25 = iParam1;
}

void func_569(int iParam0, int iParam1)
{
	Local_99[iParam0 /*68*/].f_24 = iParam1;
}

int func_570()
{
	return 0xFFFFFFFF;
}

void func_571()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000B9)
		{
			func_572(iVar0);
		}
		if (iVar1 == 0x0000009A)
		{
		}
		iVar0++;
	}
}

void func_572(int iParam0)
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
	struct<6> Var11;
	struct<14> Var12;
	float fVar13;
	
	iVar6 = 0xFFFFFFFF;
	iVar7 = 0xFFFFFFFF;
	iVar8 = 0xFFFFFFFF;
	unk_0x218F818E64020C17(0x00000001, iParam0, &Var11, 0x0000000D);
	if (unk_0xC844350D5D58C99A(Var11))
	{
		if (unk_0xEC560E589DF8370E(Var11))
		{
			iVar0 = unk_0x940C1429253D3B1B(Var11);
			if (unk_0x34BFC6F0CB887BC2(iVar0))
			{
				iVar2 = unk_0x83FACCC48B68F9D1(iVar0);
				if (unk_0xFB75B0F82CA525F6(iVar2))
				{
					iVar4 = unk_0x7B9C1F53FE442D06(iVar2);
					if (unk_0x81A93C8315C28F58(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != 0xFFFFFFFF)
				{
					if (unk_0xC844350D5D58C99A(Var11.f_1))
					{
						if (unk_0xEC560E589DF8370E(Var11.f_1))
						{
							iVar1 = unk_0x940C1429253D3B1B(Var11.f_1);
							if (unk_0x34BFC6F0CB887BC2(iVar1))
							{
								iVar3 = unk_0x83FACCC48B68F9D1(iVar1);
								iVar8 = iVar3;
								if (unk_0xFB75B0F82CA525F6(iVar3))
								{
									iVar5 = unk_0x7B9C1F53FE442D06(iVar3);
									if (unk_0x81A93C8315C28F58(iVar5))
									{
										iVar6 = iVar5;
									}
									if (iVar6 != 0xFFFFFFFF)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0x00000000;
											while (iVar9 < 0x00000001)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_262(0x00000001, 0x00000000))
													{
														if (iVar7 == unk_0x57270EE11514DC67())
														{
															if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000007))
															{
																unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000007);
															}
														}
													}
													if (Var11.f_5)
													{
														if (iVar6 == unk_0x57270EE11514DC67())
														{
															if (iLocal_641 < func_618())
															{
																iLocal_641++;
																func_576(0x00000000, iVar1, "", 0x91280CCE, 0x7F093492, func_617(), 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
																Local_81.f_7 = (Local_81.f_7 + func_617());
															}
															else
															{
																iLocal_641++;
															}
														}
														if (unk_0xBFF81ED3B99522C7())
														{
															fVar13 = func_149(iVar9, iVar6);
															fVar13 = (fVar13 + IntToFloat(Global_40001.f_2BB9));
															func_559(iVar9, iVar6, fVar13);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == unk_0x57270EE11514DC67())
													{
														if (!func_262(0x00000001, 0x00000000))
														{
															if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000006))
															{
																unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000006);
															}
															if (!unk_0xEAE0D21A50E6C7F4(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000002))
															{
																unk_0x5D96D8530B3D0904(&(Local_84[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000002);
																func_241(0x00000001);
															}
														}
														if (Var11.f_5)
														{
															if (iLocal_639 < func_575())
															{
																iLocal_639++;
																func_576(0x00000000, iVar1, "", 0x91280CCE, 0x7F093492, func_574(), 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
																Local_81.f_7 = (Local_81.f_7 + func_574());
															}
															else
															{
																iLocal_639++;
															}
														}
													}
													if (iVar7 == unk_0x57270EE11514DC67())
													{
														iLocal_640++;
													}
													if (func_261(iVar6, iVar9))
													{
														if (Var11.f_5)
														{
															if (unk_0xBFF81ED3B99522C7())
															{
																if (func_522(iVar9) == 0xFFFFFFFF)
																{
																	func_621(iVar9, iVar6);
																}
																if (func_521(iVar9) == 0xFFFFFFFF)
																{
																	func_620(iVar9, iVar8);
																}
																unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000000);
															}
														}
													}
													else if (Var11.f_5)
													{
														if (unk_0xBFF81ED3B99522C7())
														{
															Var12.f_2 = 0x294902C4;
															Var12.f_A = iVar3;
															iVar10 = 0x00000000;
															while (iVar10 < 0x00000020)
															{
																if (unk_0xEAE0D21A50E6C7F4(iLocal_636, iVar10))
																{
																	if (unk_0xEAE0D21A50E6C7F4(iLocal_635, Local_90[iVar10 /*18*/].f_1))
																	{
																		if (!unk_0xEAE0D21A50E6C7F4(Local_84[iVar10 /*5*/].f_4, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(Local_84[iVar10 /*5*/].f_4, 0x0000000A))
																		{
																			if (func_199(iVar10))
																			{
																				func_518(Var12, func_573(Local_90[iVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																iVar10++;
															}
														}
													}
												}
												iVar9++;
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
	}
}

int func_573(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_574()
{
	return Global_40001.f_2AF6;
}

int func_575()
{
	return Global_40001.f_2AF8;
}

int func_576(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_577(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_577(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_587(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 0xDCB673B3 || iParam4 == 0x8DD87E4F)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_583(unk_0x64430C979F516F7A(iVar1, 0x0000796E, 0f, 0f, 0f), iVar0, 0x00000000, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_578(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_578(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_581(iParam0, 0x00000001) };
	if (iParam0 == func_580(unk_0x16F2683693E537C9()))
	{
		func_579(0x00000001);
	}
	func_583(vVar0, iParam1, 0x00000000, sParam2, iParam3);
}

void func_579(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_580(int iParam0)
{
	return iParam0;
}

Vector3 func_581(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar1 = { unk_0x3B276DB863622D2E(0x00000002) };
	}
	if (iParam0 == func_582(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	fVar2 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		fVar2 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_582(int iParam0)
{
	return iParam0;
}

void func_583(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0x00000000)
	{
		iVar1 = 0xFFFFFFFF;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000014)
		{
			if (Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000000 || Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000007)
			{
				iVar1 = iVar0;
				iVar0 = 0x00000014;
			}
			iVar0++;
		}
		if (iVar1 != 0xFFFFFFFF)
		{
			Global_2537E2.f_50A[iVar1 /*30*/] = { vParam0 };
			Global_2537E2.f_50A[iVar1 /*30*/].f_6 = 0x00000001;
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_586(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_585();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_584();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_584()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0x00000000;
		return 0x00000001;
	}
	Global_2537E2.f_763 = 0x00000000;
	return 0x00000000;
}

var func_585()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 0x00000001;
	return uVar0;
}

float func_586(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, 0x00000001);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_587(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_588(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_588(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_616(unk_0xD803B885F5E47A62()) || func_615(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_25A3 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_25A3;
		}
	}
	else if (func_434() || func_613(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_58F6 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_58F6;
		}
	}
	else if (Global_40001.f_19EB > 0x00003A98)
	{
		iVar2 = 0x00003A98;
	}
	else
	{
		iVar2 = Global_40001.f_19EB;
	}
	if (func_135(sParam2))
	{
	}
	if (func_612())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_610(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_609(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_606(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_606(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_603(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_19BCBA)
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 0x00000001)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 0x00000002 || iParam0 == 0x00000003)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_271(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_595((func_602(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_271(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_591(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_589((func_590(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_589((func_590(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_589(int iParam0)
{
	if (func_612())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_277(joaat("mpply_globalxp"), iParam0);
	}
}

int func_590(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_756(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_279(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_279(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

void func_591(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_41(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_593(func_594(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_592(&Global_152D8B, iParam0);
				func_276(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_592(&Global_152D8C, iParam0);
				func_276(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_592(&Global_152D8D, iParam0);
				func_276(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_592(&Global_152D8E, iParam0);
				func_276(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_592(&Global_152D8F, iParam0);
				func_276(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_592(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_593(int iParam0)
{
	if (iParam0 == Global_152D86)
	{
		return 0x00000000;
	}
	else if (iParam0 == Global_152D87)
	{
		return 0x00000001;
	}
	else if (iParam0 == Global_152D88)
	{
		return 0x00000002;
	}
	else if (iParam0 == Global_152D89)
	{
		return 0x00000003;
	}
	else if (iParam0 == Global_152D8A)
	{
		return 0x00000004;
	}
	else
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_594(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_258BBD;
		}
	}
	return Global_258BBD;
}

void func_595(int iParam0, int iParam1, int iParam2)
{
	if (func_612())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_217(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_217(0xFFFFFFFF)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 == 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xBAEFBC23, 0xAFCE7619);
				if (iParam2 == 0x00000000)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 < 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xA169804B, iParam1);
				return;
			}
		}
		if (func_601(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_599(iParam0, 0x00000001);
		}
		func_272(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_273(0x00000280, func_599(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_217(0xFFFFFFFF)] = iParam0;
		func_596(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_596(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_598(iParam1, iParam2))
	{
		iVar0 = func_597();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_597()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000009;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (Global_258B8D[iVar1] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

int func_598(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000016)
	{
		return 0x00000001;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 0x00000003) || iParam0 == 0x0000000A) || iParam0 == 0x0000000B) || iParam0 == 0x0000001B) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E)
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_599(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_600(iParam0, 0x00000000);
}

int func_600(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0x00000000)
	{
	}
	iVar1 = 0x00001F40;
	iVar2 = 0x00000000;
	iVar3 = ((iVar1 - iVar2) / 0x00000002);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000064)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 0x00001F40;
			if (iVar3 == 0x00000000)
			{
				iVar3 = 0x00000001;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 0x00000001);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 0x00001F40;
}

int func_601(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

int func_602(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_217(0xFFFFFFFF)];
			}
			else if (func_601(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_217(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_603(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != 0xFFFFFFFF)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_178(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_605(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_604(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_604(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_604(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_605(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_41(iParam0) };
		Global_26594F = { func_41(iParam1) };
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

void func_606(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_756(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_605(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			iVar4 = iVar0;
			if (func_756(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_607(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_605(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_604(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_604(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_607(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_608(iParam0), func_608(iParam1));
	return 0f;
}

Vector3 func_608(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_604(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_610(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_602(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_602(unk_0xD803B885F5E47A62());
		}
	}
	if (func_611(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_611(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_602(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_611(0x00001F40, 0x00000000, 0x00000000) - func_602(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_611(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0x00000000)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 0x00001F40)
	{
		iParam0 = 0x00001F40;
	}
	return Global_4713D[iParam0];
}

int func_612()
{
	return 0x00000001;
}

int func_613(int iParam0)
{
	return func_614(func_110(iParam0));
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_615(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_616(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

int func_617()
{
	return Global_40001.f_2AF7;
}

int func_618()
{
	return Global_40001.f_2AF9;
}

void func_619(int iParam0, var uParam1)
{
	Local_99[iParam0 /*68*/].f_1F = uParam1;
}

void func_620(int iParam0, int iParam1)
{
	Local_99[iParam0 /*68*/].f_23 = iParam1;
}

void func_621(int iParam0, int iParam1)
{
	Local_99[iParam0 /*68*/].f_22 = iParam1;
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000005))
	{
		if (func_15(iParam0) != 0x00000000)
		{
			if (!func_259(unk_0xD803B885F5E47A62()))
			{
				if (!func_136(unk_0xD803B885F5E47A62()))
				{
					if (func_485(unk_0x57270EE11514DC67()))
					{
						if (iParam1 <= 0x00000002)
						{
							if (func_199(unk_0x57270EE11514DC67()) || func_485(unk_0x57270EE11514DC67()))
							{
								func_649(func_663(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_648(0x00000001);
						}
						if (iVar1 > 0x00000000)
						{
							func_647();
							func_576(0x00000000, unk_0x16F2683693E537C9(), "", 0x9E79F1A6, 0xB549C072, iVar1, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							Local_81.f_7 = (Local_81.f_7 + iVar1);
						}
						if (iVar0 > 0x00000000)
						{
							func_636(&iVar0, 0x00000001);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0x00000000)
						{
							if (func_635())
							{
								func_624(0xF353DF93, iVar0, &uVar3, 0x00000000, 0x00000001, 0x00000000);
							}
							else
							{
								unk_0x9AC21D04D5646532(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_81.f_6 = (Local_81.f_6 + iVar0);
							if (!Global_40001.f_2C8C)
							{
								if (Local_81.f_6 > 0x00000000)
								{
									func_623(0x00000010, Local_81.f_6);
								}
							}
							Global_2594A0 = iVar0;
						}
					}
					else
					{
						func_648(0x00000000);
					}
				}
				else
				{
					func_648(0x00000000);
				}
			}
			else
			{
				func_648(0x00000000);
			}
		}
		else
		{
			func_648(0x00000000);
		}
		unk_0x5D96D8530B3D0904(&iLocal_85, 0x00000005);
	}
}

void func_623(int iParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		if (Global_40001.f_5BC1 == 0x00000000 || Global_40001.f_5BC1 == 0x00000001)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_40001.f_5BC1 == 0x00000001)
			{
				Global_26B66F.f_11B = iParam0;
				if (iParam1 > Global_40001.f_19B8)
				{
					iParam1 = Global_40001.f_19B8;
				}
				Global_26B66F.f_11C = iParam1;
				Global_26B66F.f_11D = 0x00000000;
			}
		}
	}
}

void func_624(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_635())
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
				func_625(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_625(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_625(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_625(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_625(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_635())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_38()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_632(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_631(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_626(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_626(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_627(iParam0);
	}
}

void func_627(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_635())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_630(iParam0))
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
		func_628(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_628(var uParam0)
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
	func_629(&(uParam0->f_E));
	func_629(&(uParam0->f_E.f_D));
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

void func_629(var uParam0)
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

int func_630(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_631(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_632(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_635())
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
				func_633(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_633(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_573(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_634();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_634()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_635()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

void func_636(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0x00000000)
	{
		if (!func_646())
		{
			if (func_150(0x00000000))
			{
				if (!func_130(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_645()))
					{
						if (func_644() == 0x00000064)
						{
							iVar0 = *iParam0;
							*iParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*iParam0 / 0x00000064) * func_644());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_642(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_641("GB_BCUT_TICK1", func_645(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_640(0x00000014);
						func_637(func_645(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_637(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_756(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_639(iParam0);
		func_638(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_573(iParam0));
	}
}

void func_638(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_639(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_640(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_641(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_171(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_42(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_33(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_642(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_643(0x00000001);
	}
	else
	{
		iVar1 = func_643(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_643(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_644()
{
	return Global_40001.f_3065;
}

int func_645()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_646()
{
	return func_74(unk_0xD803B885F5E47A62());
}

void func_647()
{
	Global_25920D = 0x00000001;
}

void func_648(bool bParam0)
{
	if (bParam0)
	{
		if (func_215(0x00000001))
		{
			unk_0x5D96D8530B3D0904(&Global_180713, 0x00000001);
		}
	}
	else if (func_215(0x00000002))
	{
		unk_0x5D96D8530B3D0904(&Global_180713, 0x00000002);
	}
}

void func_649(float fParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_88, 0x00000000, 0x00000000) / 0x0000003C) / 0x000003E8);
	if (iVar0 > Global_40001.f_2CAB)
	{
		iVar0 = Global_40001.f_2CAB;
	}
	else if (iVar0 < 0x00000001)
	{
		iVar0 = 0x00000001;
	}
	*uParam3 = (func_662() * iVar0);
	*uParam2 = (func_661() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_40001.f_2BB4 / 0x0000003C) / 0x000003E8);
		if (iVar1 > func_660())
		{
			iVar1 = func_660();
		}
		iVar2 = iLocal_87;
		if (iVar2 > func_659())
		{
			iVar2 = func_659();
		}
		*uParam1 = SYSTEM::ROUND((IntToFloat(func_652(func_658(), func_657(), iVar1, fParam0, func_656(), func_655(), func_654(), iVar2)) * Global_40001.f_2CC6));
		*uParam2 = (*uParam2 + SYSTEM::ROUND((IntToFloat(func_652(func_651(), func_650(), iVar1, fParam0, func_656(), func_655(), func_654(), iVar2)) * Global_40001.f_2CC7)));
	}
}

int func_650()
{
	return Global_40001.f_2AF3;
}

int func_651()
{
	return Global_40001.f_2AF5;
}

int func_652(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_653(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 0x00000032, 0x00000000);
}

int func_653(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 0x00000001)
		{
		}
		return iVar1;
	}
	if (iParam2 == 0x00000001)
	{
	}
	return iVar0;
}

float func_654()
{
	return Global_40001.f_2AFC;
}

float func_655()
{
	return Global_40001.f_2AFB;
}

float func_656()
{
	return Global_40001.f_2AFA;
}

int func_657()
{
	return Global_40001.f_2AF2;
}

int func_658()
{
	return Global_40001.f_2AF4;
}

int func_659()
{
	return Global_40001.f_2C53;
}

int func_660()
{
	return Global_40001.f_2C52;
}

int func_661()
{
	return Global_40001.f_2AF1;
}

int func_662()
{
	return Global_40001.f_2AF0;
}

float func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_40001.f_2AFD;
		
		case 0x00000001:
			return Global_40001.f_2AFE;
		
		case 0x00000002:
			return Global_40001.f_2AFF;
		
		default:
	}
	return 0f;
}

int func_664(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_31(unk_0xD803B885F5E47A62(), 0x00000000) || func_416(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (func_30(unk_0xD803B885F5E47A62()) || func_106(unk_0xD803B885F5E47A62()))
		{
			bParam2 = 0x00000000;
		}
	}
	if (unk_0x981819F6C45DDB49() < iParam0)
	{
		if (bParam2)
		{
			func_666(sParam3, sParam4, 0x00000001);
		}
		if (func_269(0x0000001A, 0xFFFFFFFF))
		{
			func_294(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	if (func_18(&(Global_1806FA.f_12)))
	{
		if (!func_5(&(Global_1806FA.f_12), 0x00001D4C, 0x00000000))
		{
			return 0x00000000;
		}
		func_3(&(Global_1806FA.f_12));
	}
	if (func_665())
	{
		if (bParam2)
		{
			func_666(sParam3, sParam4, 0x00000000);
		}
		if (func_269(0x0000001A, 0xFFFFFFFF))
		{
			func_294(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	if (iParam1 && unk_0x0DC0B2DBBD52B0C0() < iParam0)
	{
		if (bParam2)
		{
			func_666(sParam3, sParam4, 0x00000001);
		}
		if (func_269(0x0000001A, 0xFFFFFFFF))
		{
			func_294(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_665()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000000);
}

void func_666(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000002) && !func_229(unk_0xD803B885F5E47A62())) && !func_259(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xEA6BC48857E0AC4C(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_205(0x00000042, sParam0, sParam1, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000002);
	}
}

int func_667()
{
	return Local_80.f_1;
}

void func_668()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000006))
	{
		func_687();
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000006);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000007))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000004) || unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000010))
		{
			if (((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_240()) && func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000007);
				func_239("FME_PASINT", 0x00007530);
				func_238(0x00000001);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000011))
		{
			if (func_139() && !func_138())
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000011);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000010);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000017))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0xFEBC1E4EC9E001F0())
		{
			if (func_685())
			{
				func_239("AMEV_GA_RP", 0xFFFFFFFF);
				if (func_110(unk_0xD803B885F5E47A62()) != 0x000000C8)
				{
					func_238(0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000017);
			}
		}
	}
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 0x0000000F)
	{
		if (func_221(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(0x502431FB))
			{
				unk_0x8134AB7E30C9809E(0x502431FB);
			}
		}
		else if (unk_0x70305AA977EFE679(0x502431FB))
		{
			unk_0x64366F76B4845277(0x502431FB);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000009))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_240()) && func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !func_137(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_137(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000009);
			func_684(0x00000000);
			func_239("FME_TBL00", 0xFFFFFFFF);
			func_238(0x00000001);
		}
	}
	if (func_338(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000012))
		{
			if ((func_137(unk_0xD803B885F5E47A62(), 0x00000015) && unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000014)) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000013))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000012);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000012))
		{
			if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_240()) && func_756(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && unk_0x0F1CCD77290EE12F()) && !Global_26B66F.f_13C1)
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000012);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000013);
				func_239("AMTT_RPAS", 0xFFFFFFFF);
				func_238(0x00000001);
			}
		}
	}
	if (((((func_338(unk_0xD803B885F5E47A62()) && !func_229(unk_0xD803B885F5E47A62())) && func_260(unk_0xD803B885F5E47A62()) != 0x00000092) && !func_259(unk_0xD803B885F5E47A62())) && !func_136(unk_0xD803B885F5E47A62())) && !func_678())
	{
		if (func_220(func_260(unk_0xD803B885F5E47A62())))
		{
			unk_0x25A1F489CCEE528A(unk_0xD803B885F5E47A62());
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000016))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000016);
		}
		if (func_107(unk_0xD803B885F5E47A62()) || func_211())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000A))
			{
				if (func_676(func_260(unk_0xD803B885F5E47A62())))
				{
					if (func_215(0x00000000) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
					}
					if (!Global_247C05)
					{
						func_218(0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000A);
			}
		}
		if (func_221(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000B))
			{
				if (!Global_181EC.f_8)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
					func_213(0x00000001);
				}
				if (!func_675())
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000D);
					func_212();
				}
				if (!Global_247C05)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
					if (func_215(0x00000000) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
					}
					func_218(0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000B);
			}
		}
		else
		{
			func_673(0x00000000);
		}
	}
	else
	{
		func_673(0x00000001);
	}
	func_669();
	if (func_210(func_260(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000015))
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000015);
	}
	if (((func_139() && !func_138()) || func_137(unk_0xD803B885F5E47A62(), 0x00000015)) || func_137(unk_0xD803B885F5E47A62(), 0x00000019))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000A))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000A);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000A))
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000A);
	}
}

void func_669()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_240())
	{
		iVar2 = 0x0000003F;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000053)
		{
			if (func_204(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 0x0000003F || iVar0 >= 0x00000051)
				{
					iVar1 = 0x00003A98;
				}
				else
				{
					iVar1 = 0x00000BB8;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000001A))
				{
					unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000001A);
				}
				func_670(iVar0, iVar1);
				iVar2 = 0x00000053;
			}
			iVar2++;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000001A))
	{
		func_3(&(Global_1806FA.f_16));
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000001A);
	}
}

void func_670(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1806FA.f_16)))
	{
		func_11(&(Global_1806FA.f_16), 0x00000000, 0x00000000);
	}
	else if (func_5(&(Global_1806FA.f_16), iParam1, 0x00000000))
	{
		if (func_475() > 0x00000000)
		{
			func_235(iParam0);
			if (func_237("AMEV_LBD_HELP"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			func_3(&(Global_1806FA.f_16));
		}
	}
	else
	{
		func_672(0x00000000);
		func_671();
	}
}

void func_671()
{
	Global_26B66F.f_11B4 = 0x00000000;
}

void func_672(int iParam0)
{
	Global_150392.f_44 = iParam0;
}

void func_673(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000B) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000A) && iParam0)) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000016) && iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000C))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000C);
			func_213(0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000D))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000D);
			func_674();
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000E) && !func_31(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000E);
			func_218(0x00000000);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000B);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000A);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000016);
	}
}

void func_674()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1362), 0x00000000);
}

bool func_675()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1362, 0x00000000);
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000081:
		case 0x00000084:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
			return 0x00000001;
		
		case 0x00000083:
		case 0x00000092:
			return func_221(unk_0xD803B885F5E47A62());
		
		case 0x00000085:
			return (func_211() || func_677(func_154()));
		
		default:
	}
	return 0x00000000;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x0000000A:
		case 0x00000006:
		case 0x0000000C:
		case 0x0000000B:
		case 0x0000000E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_678()
{
	if (((((((((func_317() || func_316()) || func_315()) || func_146()) || (func_312() && !unk_0xA14BB9332558B949())) || (func_681() && !func_680())) || Global_248A6D) || Global_248A6D.f_1 != 0x00000000) || Global_248AB7 != 0x00000000) || (func_679() == 0x00000002 && !unk_0xA14BB9332558B949()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_679()
{
	return Global_EC6CD;
}

bool func_680()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000001B);
}

int func_681()
{
	if (func_683() || func_682())
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 == 0x00000008;
	}
	return 0x00000000;
}

var func_682()
{
	return Global_2564C8.f_27B;
}

bool func_683()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

void func_684(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(0x000009E6, 0xFFFFFFFF, 0x00000000);
	if (iParam0 == 0x00000000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000005);
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000007);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000008))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000009))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000009);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000A))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000A);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000B))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000B);
		}
	}
	func_273(0x000009E6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

int func_685()
{
	int iVar0;
	
	if (!func_18(&(Global_1806FA.f_F)))
	{
		func_11(&(Global_1806FA.f_F), 0x00000000, 0x00000000);
		Global_1806FA.f_11 = 0x00000000;
	}
	else if (func_5(&(Global_1806FA.f_F), 0x000003E8, 0x00000000))
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11));
			if (unk_0x40B8C182D63932FC(iVar0))
			{
				if (func_756(iVar0, 0x00000001, 0x00000001) && func_686(iVar0, 0x00000006))
				{
					if (SYSTEM::VDIST(func_608(unk_0xD803B885F5E47A62()), func_608(iVar0)) < 80f)
					{
						return 0x00000001;
					}
				}
			}
		}
		Global_1806FA.f_11++;
		if (Global_1806FA.f_11 >= 0x00000020)
		{
			Global_1806FA.f_11 = 0x00000000;
			func_3(&(Global_1806FA.f_F));
		}
	}
	return 0x00000000;
}

int func_686(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_225() != 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_601(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (Global_184507[iVar0 /*876*/] == iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_687()
{
	unk_0x34D79252800B23FF(0x00000005);
	func_354();
	unk_0x51B096AAC60548C1(1f);
	unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000008);
	func_688();
}

void func_688()
{
	if (Global_19824D)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000000))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000001))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000005))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000005);
		}
		if (unk_0x76395FF5E8D5E643(0xEACBE1C2))
		{
			unk_0x1BA7FCEAFCE8D46E(0xEACBE1C2, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xDD5EF4CE))
		{
			unk_0x1BA7FCEAFCE8D46E(0xDD5EF4CE, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xAAFA1005))
		{
			unk_0x1BA7FCEAFCE8D46E(0xAAFA1005, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0x2C6E2BFC))
		{
			unk_0x1BA7FCEAFCE8D46E(0x2C6E2BFC, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xB232A0B6))
		{
			unk_0x1BA7FCEAFCE8D46E(0xB232A0B6, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xA405045B))
		{
			unk_0x1BA7FCEAFCE8D46E(0xA405045B, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xCF9D5B8B))
		{
			unk_0x1BA7FCEAFCE8D46E(0xCF9D5B8B, 0x00000001, 0x00000000, 0x00000000);
		}
		Global_19824E = 0x00000000;
	}
	Global_19824D = 0x00000000;
}

var func_689()
{
	if (unk_0xC844350D5D58C99A(func_690()))
	{
		return func_690();
	}
	return func_196();
}

var func_690()
{
	return Global_240006.f_3;
}

bool func_691()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x0000000B);
}

bool func_692()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

int func_693(int iParam0)
{
	if (func_36(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_694())
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

bool func_694()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_695()
{
	return Global_1806FA.f_18;
}

int func_696()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_26B66F.f_135F)
	{
		return 0x00000000;
	}
	iVar2 = unk_0x6794171A1021C2D8();
	if (func_18(&(Local_80.f_1.f_1)))
	{
		iVar0 = func_697(&iVar2, &(Local_80.f_1.f_1));
		iVar1 = Global_40001.f_2BB4;
	}
	else if (func_18(&(Local_80.f_1.f_3)))
	{
		iVar0 = func_697(&iVar2, &(Local_80.f_1.f_3));
		iVar1 = Global_40001.f_2BB5;
	}
	else
	{
		return 0x00000000;
	}
	iVar1 = (iVar1 + 0x000493E0);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_697(int iParam0, var uParam1)
{
	return unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(*iParam0, *uParam1));
}

bool func_698(int iParam0)
{
	return !func_699(iParam0);
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			if (Global_40001.f_1A04)
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (Global_40001.f_1A05)
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (Global_40001.f_1A06)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			if (Global_40001.f_1A07)
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000F:
			if (func_700(0x00000004))
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000011:
			if (func_700(0x00000004))
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000010:
			if (func_700(0x00000004))
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000012:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
			if (func_700(0x00000004))
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000013:
			if (func_700(0x00000004))
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000014:
			if (func_700(0x00000004))
			{
				return 0x00000000;
			}
			if (func_137(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000C:
			break;
	}
	return 0x00000001;
}

int func_700(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_756(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iVar0 /*421*/].f_D0, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_701()
{
	var uVar0;
	
	func_705(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_704())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_703())
	{
		return 0x00000001;
	}
	if (func_702(0x0000009F))
	{
		if (!func_317())
		{
			return 0x00000001;
		}
	}
	if (func_702(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_223() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_223()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_702(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_703()
{
	return Global_258C08;
}

bool func_704()
{
	return Global_2564C8.f_251;
}

void func_705(var uParam0)
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
					func_706(iVar0);
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

void func_706(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_756(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_707(iVar2, &bVar3))
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

int func_707(int iParam0, var uParam1)
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

void func_708()
{
	SYSTEM::WAIT(0x00000000);
}

void func_709()
{
	int iVar0;
	
	func_203();
	func_740(0x0000008D);
	func_720(0x0000008D, 0x00000000, unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000005));
	func_302();
	func_241(0x00000000);
	if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000010))
	{
		unk_0x8910D3D58E0132B8("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x0674E58A79778E99(&iLocal_85, 0x00000010);
	}
	unk_0x51B096AAC60548C1(1f);
	func_80();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		func_717(iVar0);
		iVar0++;
	}
	func_349();
	func_715();
	func_714(0x00000000);
	func_233(0x0000001D, 0x00000000);
	if (func_701())
	{
		Local_81.f_5 = 0x00000005;
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_85, 0x00000018))
	{
		Local_81.f_5 = 0x00000006;
	}
	else if (Local_81.f_5 != 0x00000001)
	{
		Local_81.f_5 = 0x00000002;
	}
	Local_81 = Local_80.f_D6;
	Local_81.f_1 = Local_80.f_D7;
	Local_81.f_4 = Local_80.f_D8;
	Local_81.f_3 = iLocal_87;
	Local_81.f_A = (unk_0xDD0E7998AE8AD485() - Local_81.f_9);
	if (!Global_40001.f_2C8C)
	{
		if (Local_81.f_6 > 0x00000000)
		{
			if (Local_81.f_5 == 0x00000001)
			{
				func_713();
			}
		}
	}
	if (unk_0x57270EE11514DC67() != 0xFFFFFFFF)
	{
		func_711(Local_81, iLocal_83, iLocal_641, iLocal_640, func_77(func_148(0x00000000, unk_0x57270EE11514DC67())), 0xFFFFFFFF, 0xFFFFFFFF);
	}
	func_710();
}

void func_710()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_711(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (Param0.f_9 == 0x00000000)
	{
		Param0.f_A = 0x00000000;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_12B4E)
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_C = uParam1;
			unk_0x9534DF96382FA79D(&Var1);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, func_712()))
		{
			Var2 = { Param0 };
			Var2.f_C = uParam1;
			Var2.f_D = iParam2;
			unk_0x68F74D8294339590(&Var2);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_C = uParam1;
			Var3.f_D = iParam2;
			Var3.f_E = iParam3;
			Var3.f_F = uParam4;
			Var3.f_10 = iParam5;
			Var3.f_11 = iParam6;
			unk_0xB4378BE34ED99E2A(&Var3);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_C = uParam1;
			Var4.f_D = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 0x00000001)
			{
				Var4.f_D = (Var4.f_D / 10f);
			}
			unk_0xE20208601F5C75BD(&Var4);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
		{
			unk_0xAE4A25D32825E179(&Param0);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_C = uParam1;
			unk_0xAD412B113AE8E374(&Var5);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_C = uParam1;
			Var6.f_D = iParam2;
			unk_0xAFD26850D8F9D951(&Var6);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_C = uParam1;
			Var7.f_D = iParam2;
			unk_0x2320D6A9337F16FD(&Var7);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_C = uParam1;
			Var8.f_D = iParam2;
			Var8.f_E = iParam3;
			Var8.f_F = uParam4;
			unk_0x8EFE08564F2B2A96(&Var8);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_C = uParam1;
			unk_0x99DAD54B2D0F4291(&Var9);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0x00000000)
			{
				Var10 = { Param0 };
				Var10.f_C = uParam1;
				Var10.f_D = iParam2;
				unk_0xC6463777F834DA6F(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_C = uParam1;
				Var11.f_D = iParam2;
				unk_0x9563472595C7B3E7(&Var11);
			}
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_C = uParam1;
			unk_0x9BF192C4E1EF8A54(&Var12);
		}
	}
}

char* func_712()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_713()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x00000012);
}

void func_714(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 0x00000009))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x00000009);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C6, 0x00000009))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C6), 0x00000009);
	}
}

void func_715()
{
	if (Global_24D54B.f_6 == unk_0x0D0A574C76D769AC())
	{
		func_716();
	}
}

void func_716()
{
	struct<28> Var0;
	
	if (unk_0x1727A44C562FBED2(Global_24D54B.f_6))
	{
		if (!Global_24D54B.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	Var0.f_7 = 0x00000001;
	Var0.f_8 = 0x00000001;
	Var0.f_15 = 0x42820000;
	Var0.f_1B = 0xBF800000;
	Global_24D54B = { Var0 };
	Global_24D54B.f_6 = 0xFFFFFFFF;
}

void func_717(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < func_719(iParam0))
	{
		func_718(iVar0);
		iVar0++;
	}
	func_349();
	func_715();
	func_358(func_359(iParam0), 0x00000000, 0x00000000);
}

void func_718(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > 0xFFFFFFFF && iParam0 < 0x0000000A)
	{
		if (Global_24B2D0.f_16D[iParam0 /*12*/].f_9)
		{
			Global_24B2D0.f_16D[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000002;
		
		case 0x00000004:
			return 0x00000001;
		
		case 0x00000002:
			return 0x00000002;
		
		case 0x00000001:
			return 0x00000003;
		
		case 0x00000003:
			return 0x00000003;
		
		case 0x00000005:
			return 0x00000004;
		
		case 0x00000006:
			return 0x00000004;
		
		case 0x00000007:
			return 0x00000004;
		
		default:
	}
	return 0x00000000;
}

void func_720(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
	}
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000D))
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000D);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000E))
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000E);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000015))
	{
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000015);
	}
	func_736();
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
	unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
	if (bParam1)
	{
		uVar0 = func_735(func_260(unk_0xD803B885F5E47A62()));
		func_233(func_234(iParam0), 0x00000000);
	}
	else
	{
		if ((bParam2 && unk_0xD803B885F5E47A62() != 0xFFFFFFFF) && func_734(unk_0xD803B885F5E47A62()) >= 0x0000000C)
		{
			func_733(0x000009F2, 0xFFFFFFFF);
			iVar1 = func_216(0x000009F2, 0xFFFFFFFF, 0x00000000);
			if (iVar1 == 0x00000002)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000000);
			}
			else if (iVar1 == 0x00000004)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000001);
			}
			else if (iVar1 == 0x00000006)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000002);
			}
			else if (iVar1 == 0x00000008)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000003);
			}
			else if (iVar1 == 0x0000000A)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000004);
			}
			else if (iVar1 == 0x0000000C)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000005);
			}
		}
		func_732();
		func_731();
		func_730();
		if ((!func_30(unk_0xD803B885F5E47A62()) && !func_28(unk_0xD803B885F5E47A62())) && !func_111())
		{
			func_345();
		}
		func_729();
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000001))
		{
			func_687();
		}
		func_728();
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6D2), 0x00000002);
		func_727();
		func_726();
	}
	if (unk_0x70305AA977EFE679(0x502431FB))
	{
		unk_0x64366F76B4845277(0x502431FB);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0xD803B885F5E47A62() != 0xFFFFFFFF && !func_137(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_137(unk_0xD803B885F5E47A62(), 0x00000019)) && !func_31(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_218(0x00000000);
			func_213(0x00000000);
			if (!bParam1)
			{
				func_725();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_269(0x0000001A, 0xFFFFFFFF))
		{
			Global_259486 = 0xFFFFFFFF;
			func_294(0x0000001A, 0xFFFFFFFF);
		}
	}
	if (!func_721())
	{
		Global_2658D5 = 0x00000001;
	}
}

int func_721()
{
	if ((((((!func_455(unk_0xD803B885F5E47A62()) && !func_436(unk_0xD803B885F5E47A62())) && func_260(unk_0xD803B885F5E47A62()) != 0x00000092) && !func_724()) && !func_723()) && !func_722(Global_440000.f_38DB3)) && !func_191())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_722(int iParam0)
{
	return iParam0 == 0x00000039;
}

int func_723()
{
	if (Global_440000.f_2F9AE == Global_40001.f_257C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_724()
{
	if ((Global_440000 == 0x00000000 && unk_0xA14BB9332558B949()) && (((((((Global_440000.f_5 != 0x00000000 || Global_440000.f_38DB3 > 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000000F)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000012)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000013)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000001D)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000001C)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_5, 0x00000017)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_725()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar0 /*26*/].f_C, 0x0000000B))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar0 /*26*/].f_D, 0x0000001A))
			{
				unk_0x0674E58A79778E99(&(Global_2401A9[iVar0 /*26*/].f_D), 0x0000001A);
			}
		}
		iVar0++;
	}
}

void func_726()
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_7 = 0x00000000;
}

void func_727()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000001))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000001);
	}
	if (Global_26B66F.f_1361 > 0x00000000)
	{
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_KILL");
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
		unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xBEF52C1D400C0A44(0x00000001);
		Global_26B66F.f_1361 = 0x00000000;
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
		unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
		if (!unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "am_pi_menu"))
		{
			if (Global_26B66F.f_136B > 0xFFFFFFFF)
			{
				unk_0x43A06902454A1172(Global_26B66F.f_136B);
				Global_26B66F.f_136B = 0xFFFFFFFF;
			}
		}
	}
}

void func_728()
{
	struct<25> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_15 = 0xFFFFFFFF;
	Global_1806FA = { Var0 };
}

void func_729()
{
	var uVar0;
	
	Global_1420BD = uVar0;
}

void func_730()
{
	Global_26B66F.f_1362 = 0x00000000;
}

void func_731()
{
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1 = 0x00000000;
	}
}

void func_732()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (iVar0 != 0xFFFFFFFF)
	{
		Global_18D84D[iVar0 /*615*/] = 0xFFFFFFFF;
	}
}

void func_733(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_216(iParam0, func_217(iParam1), 0x00000000);
	iVar0++;
	if (!func_274(iParam0))
	{
		func_273(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_272(iParam0, iVar0, iParam1, 0x00000001);
	}
}

int func_734(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

int func_735(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000085:
		case 0x00000084:
		case 0x0000008A:
		case 0x00000090:
		case 0x0000008C:
		case 0x0000008B:
		case 0x00000083:
		case 0x0000008D:
		case 0xFFFFFFFF:
			return 0x00000001;
		
		case 0x00000092:
			if (func_221(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_736()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000004))
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000005))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000005);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000003))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000003);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000004))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000004);
	}
	func_739(0x00000000);
	func_738(0x00000000);
	func_737(0x00000000);
}

void func_737(int iParam0)
{
	if (Global_26B66F.f_11A8 != iParam0)
	{
		Global_26B66F.f_11A8 = iParam0;
	}
}

void func_738(bool bParam0)
{
	if (Global_26B66F.f_11A7 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26B66F.f_11A7 = bParam0;
	}
}

void func_739(int iParam0)
{
	if (Global_26B66F.f_11A5 != iParam0)
	{
		Global_26B66F.f_11A5 = iParam0;
	}
}

void func_740(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_741(struct<21> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_755(Param0);
	func_754(iVar3, Param0);
	func_753(0x00000000, 0xFFFFFFFF, 0x00000000);
	func_751(0x0000008D);
	unk_0x9752E7BAEABA939E(&Local_80, 0x0000011C);
	unk_0x35B62793EAE9ADDF(&Local_84, 0x000000A1);
	if (!func_750())
	{
		func_709();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
		func_233(0x0000001D, 0x00000001);
		if (unk_0xBFF81ED3B99522C7())
		{
			iVar0 = func_746();
			func_743(func_745(0x0000008D, iVar0, 0x00000000, 0x00000000));
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000001)
			{
				func_742(iVar1, iVar0);
				iVar1++;
			}
			unk_0xCB466C2A425A9168(&(Local_80.f_D6), &(Local_80.f_D7));
		}
		Local_81.f_2 = unk_0x981819F6C45DDB49();
		Local_81.f_9 = unk_0xDD0E7998AE8AD485();
		Local_81.f_8 = unk_0xDD0E7998AE8AD485();
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000020)
		{
			Local_80.f_FA[iVar2] = 0xFFFFFFFF;
			iVar2++;
		}
		func_505(0x00000000);
	}
	else
	{
		func_709();
	}
}

void func_742(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0 /*204*/].f_45 = iParam1;
}

void func_743(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 0x76289B27;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam0;
	iVar1 = func_744(0x00000001, 0x00000001);
	if (!iVar1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iVar1);
	}
}

var func_744(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_756(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_36(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_745(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000088:
		case 0x0000008B:
		case 0x0000008D:
		case 0x00000085:
		case 0x0000008A:
		case 0x00000090:
		case 0x000000EC:
		case 0x00000096:
			return iParam1;
		
		case 0x00000084:
			switch (iParam2)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						case 0x00000003:
							return 0x00000003;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000004;
						
						case 0x00000001:
							return 0x00000005;
						
						case 0x00000002:
							return 0x00000006;
						
						case 0x00000003:
							return 0x00000007;
						
						default:
					}
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam3)
			{
				case 0x00000000:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000000;
								
								case 0x00000001:
									return 0x00000001;
								
								case 0x00000002:
									return 0x00000002;
								
								case 0x00000003:
									return 0x00000003;
								
								case 0x00000004:
									return 0x00000004;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000005;
								
								case 0x00000001:
									return 0x00000006;
								
								case 0x00000002:
									return 0x00000007;
								
								case 0x00000003:
									return 0x00000008;
								
								case 0x00000004:
									return 0x00000009;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000A;
								
								case 0x00000001:
									return 0x0000000B;
								
								case 0x00000002:
									return 0x0000000C;
								
								case 0x00000003:
									return 0x0000000D;
								
								case 0x00000004:
									return 0x0000000E;
								
								default:
							}
							break;
						
						case 0x00000003:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000F;
								
								case 0x00000001:
									return 0x00000010;
								
								case 0x00000002:
									return 0x00000011;
								
								case 0x00000003:
									return 0x00000012;
								
								case 0x00000004:
									return 0x00000013;
								
								default:
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000014;
								
								case 0x00000001:
									return 0x00000015;
								
								case 0x00000002:
									return 0x00000016;
								
								case 0x00000003:
									return 0x00000018;
								
								case 0x00000004:
									return 0x00000019;
								
								default:
							}
							break;
						
						case 0x00000005:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000001A;
								
								case 0x00000001:
									return 0x0000001B;
								
								case 0x00000002:
									return 0x0000001C;
								
								case 0x00000003:
									return 0x0000001D;
								
								case 0x00000004:
									return 0x0000001E;
								
								default:
							}
							break;
						
						case 0x00000006:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000001F;
								
								case 0x00000001:
									return 0x00000020;
								
								case 0x00000002:
									return 0x00000021;
								
								case 0x00000003:
									return 0x00000022;
								
								case 0x00000004:
									return 0x00000023;
								
								default:
							}
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000000;
								
								case 0x00000001:
									return 0x00000001;
								
								case 0x00000002:
									return 0x00000002;
								
								case 0x00000003:
									return 0x00000003;
								
								case 0x00000004:
									return 0x00000004;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000005;
								
								case 0x00000001:
									return 0x00000006;
								
								case 0x00000002:
									return 0x00000007;
								
								case 0x00000003:
									return 0x00000008;
								
								case 0x00000004:
									return 0x00000009;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000A;
								
								case 0x00000001:
									return 0x0000000B;
								
								case 0x00000002:
									return 0x0000000C;
								
								case 0x00000003:
									return 0x0000000D;
								
								case 0x00000004:
									return 0x0000000E;
								
								default:
							}
							break;
					}
					break;
				
				case 0x00000002:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000029;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000001:
									return 0x0000002A;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000002:
									return 0x0000002B;
								
								default:
							}
							break;
						
						case 0x00000003:
							switch (iParam2)
							{
								case 0x00000003:
									return 0x0000002C;
								
								default:
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000004:
									return 0x0000002D;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						case 0x00000003:
							return 0x00000003;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000004;
						
						case 0x00000001:
							return 0x00000005;
						
						case 0x00000002:
							return 0x00000006;
						
						case 0x00000003:
							return 0x00000007;
						
						case 0x00000004:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000000C;
						
						case 0x00000001:
							return 0x0000000D;
						
						case 0x00000002:
							return 0x0000000E;
						
						case 0x00000003:
							return 0x0000000F;
						
						case 0x00000004:
							return 0x00000010;
						
						default:
					}
					break;
				
				case 0x00000004:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000011;
						
						case 0x00000001:
							return 0x00000012;
						
						case 0x00000002:
							return 0x00000013;
						
						case 0x00000003:
							return 0x00000014;
						
						case 0x00000004:
							return 0x00000015;
						
						default:
					}
					break;
				
				case 0x00000005:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000016;
						
						case 0x00000001:
							return 0x00000018;
						
						case 0x00000002:
							return 0x00000019;
						
						case 0x00000003:
							return 0x0000001A;
						
						default:
					}
					break;
				
				case 0x00000006:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000001B;
						
						case 0x00000001:
							return 0x0000001C;
						
						case 0x00000002:
							return 0x0000001D;
						
						default:
					}
					break;
				
				case 0x00000007:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000001E;
						
						case 0x00000001:
							return 0x0000001F;
						
						case 0x00000002:
							return 0x00000020;
						
						default:
					}
					break;
				
				case 0x00000008:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000021;
						
						case 0x00000001:
							return 0x00000022;
						
						case 0x00000002:
							return 0x00000023;
						
						case 0x00000003:
							return 0x00000024;
						
						default:
					}
					break;
				
				case 0x00000009:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000025;
						
						case 0x00000001:
							return 0x00000026;
						
						case 0x00000002:
							return 0x00000027;
						
						case 0x00000003:
							return 0x00000028;
						
						default:
					}
					break;
			}
			break;
		
		case 0x0000008C:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000003;
						
						case 0x00000001:
							return 0x00000004;
						
						case 0x00000002:
							return 0x00000005;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000006;
						
						case 0x00000001:
							return 0x00000007;
						
						case 0x00000002:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
				
				case 0x00000004:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000000C;
						
						case 0x00000001:
							return 0x0000000D;
						
						case 0x00000002:
							return 0x0000000E;
						
						default:
					}
					break;
			}
			break;
		
		case 0x00000092:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000003;
						
						case 0x00000001:
							return 0x00000004;
						
						case 0x00000002:
							return 0x00000005;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000006;
						
						case 0x00000001:
							return 0x00000007;
						
						case 0x00000002:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
			}
			break;
	}
	return 0xFFFFFFFF;
}

var func_746()
{
	int iVar0;
	int iVar1[8];
	int iVar2;
	var uVar3;
	
	iVar2 = 0x00000000;
	while (iVar2 <= 0x00000007)
	{
		if (func_749(iVar2) && !func_747(0x0000008D, iVar2, 0x00000000, 0x00000000))
		{
			iVar1[iVar0] = iVar2;
			iVar0++;
		}
		iVar2++;
	}
	uVar3 = iVar1[unk_0x09AC81E49EA267F7(0x00000000, iVar0)];
	return uVar3;
}

int func_747(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0x00000084:
		case 0x00000090:
		case 0x000000EC:
		case 0x00000096:
			return 0x00000000;
		
		default:
	}
	iVar1 = func_748(iParam0);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000015)
	{
		if (iVar0 < Global_40001.f_1FB0)
		{
			if (Global_263F7A.f_88[iVar0 /*2*/] == iVar1 && Global_263F7A.f_88[iVar0 /*2*/].f_1 == func_745(iParam0, iParam1, iParam2, iParam3))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
			return 0x0000000C;
		
		case 0x0000008B:
			return 0x0000000E;
		
		case 0x0000008D:
			return 0x00000010;
		
		case 0x00000085:
			return 0x00000009;
		
		case 0x0000008A:
			return 0x0000000D;
		
		case 0x00000090:
			return 0x00000011;
		
		case 0x00000084:
			return 0x00000008;
		
		case 0x00000083:
			return 0x0000000A;
		
		case 0x00000092:
			return 0x00000012;
		
		case 0x00000081:
			return 0x0000000B;
		
		case 0x0000008C:
			return 0x0000000F;
		
		case 0x000000EC:
			return 0x00000013;
		
		case 0x00000096:
			return 0x00000014;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_40001.f_2BBA)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			if (Global_40001.f_2BBB)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (Global_40001.f_2BBC)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (Global_40001.f_2BBD)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (Global_40001.f_2BBE)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (Global_40001.f_2BBF)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (Global_40001.f_2BC0)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (Global_40001.f_2BC1)
			{
				return 0x00000000;
			}
			break;
	}
	return 0x00000001;
}

int func_750()
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
		if (func_704())
		{
			return 0x00000000;
		}
		if (func_702(0x0000009D))
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

void func_751(int iParam0)
{
	func_728();
	func_752();
	func_730();
	Global_1806FA.f_4 = iParam0;
	Global_1806FA.f_5 = iParam0;
	func_230(iParam0, 0xFFFFFFFF);
	func_258(&(Global_1806FA.f_12), 0x00000000, 0x00000000);
	Global_26B66F.f_11EC = 0x00000000;
	Global_259033[0x00000000] = func_27();
	Global_259033[0x00000001] = func_27();
	Global_259033[0x00000002] = func_27();
	Global_259033[0x00000003] = func_27();
	Global_259033[0x00000004] = func_27();
	func_726();
	if (!func_328(func_329()))
	{
		func_427();
	}
	if (func_139() && !func_138())
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000010);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000011);
	}
}

void func_752()
{
	var uVar0;
	
	Global_180713 = uVar0;
}

int func_753(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_710();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_288())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_710();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_704())
				{
					if (!bParam2)
					{
						func_710();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_702(0x0000009D))
				{
					if (!bParam2)
					{
						func_710();
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
					func_710();
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
				func_710();
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
			func_710();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_754(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_710();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return 0x00000002;
		
		case 0x00000001:
			return 0x00000020;
		
		case 0x00000020:
			return 0x00000020;
		
		case 0x00000021:
			return 0x00000020;
		
		case 0x00000022:
			return 0x00000020;
		
		case 0x00000023:
			return 0x00000020;
		
		case 0x00000024:
			return 0x00000020;
		
		case 0x00000025:
			return 0x00000020;
		
		case 0x00000026:
			return 0x00000020;
		
		case 0x00000027:
			return 0x00000020;
		
		case 0x00000028:
			return 0x00000020;
		
		case 0x00000029:
			return 0x00000020;
		
		case 0x0000002A:
			return 0x00000020;
		
		case 0x0000002B:
			return 0x00000020;
		
		case 0x0000002C:
			return 0x00000020;
		
		case 0x0000002D:
			return 0x00000020;
		
		case 0x0000002E:
			return 0x00000020;
		
		case 0x0000002F:
			return 0x00000020;
		
		case 0x00000030:
			return 0x00000020;
		
		case 0x00000031:
			return 0x00000020;
		
		case 0x00000032:
			return 0x00000004;
		
		case 0x00000033:
			return 0x00000020;
		
		case 0x00000034:
			return 0x00000020;
		
		case 0x00000035:
			return 0x00000020;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000020;
		
		case 0x00000038:
			return 0x00000020;
		
		case 0x00000039:
			return 0x00000020;
		
		case 0x0000003A:
			return 0x00000020;
		
		case 0x0000003B:
			return 0x00000020;
		
		case 0x0000003C:
			return 0x00000020;
		
		case 0x0000003D:
			return 0x00000020;
		
		case 0x0000003E:
			return 0x00000020;
		
		case 0x0000003F:
			return 0x00000020;
		
		case 0x00000040:
			return 0x00000004;
		
		case 0x00000041:
			return 0x00000020;
		
		case 0x00000042:
			return 0x00000004;
		
		case 0x00000043:
			return 0x00000004;
		
		case 0x00000044:
			return 0x00000020;
		
		case 0x00000045:
			return 0x00000020;
		
		case 0x00000046:
			return 0x00000004;
		
		case 0x00000047:
			return 0x00000020;
		
		case 0x00000048:
			return 0x00000020;
		
		case 0x00000049:
		case 0x0000004A:
			return 0x00000004;
		
		case 0x0000004B:
			return 0x00000020;
		
		case 0x0000004C:
			return 0x00000020;
		
		case 0x0000004D:
			return 0x00000020;
		
		case 0x0000004E:
			return 0x00000020;
		
		case 0x0000004F:
			return 0x00000020;
		
		case 0x00000050:
			return 0x00000020;
		
		case 0x00000051:
			return 0x00000020;
		
		case 0x00000052:
			return 0x00000020;
		
		case 0x00000054:
			return 0x00000020;
		
		case 0x00000053:
			return 0x00000020;
		
		case 0x00000055:
			return 0x00000020;
		
		case 0x00000056:
			return 0x00000008;
		
		case 0x00000057:
			return 0x00000020;
		
		case 0x00000058:
			return 0x00000020;
		
		case 0x00000059:
			return 0x00000020;
		
		case 0x0000005A:
			return 0x00000020;
		
		case 0x0000005B:
			return 0x00000008;
		
		case 0x0000005C:
			return 0x00000020;
		
		case 0x0000005D:
			return 0x00000008;
		
		case 0x0000005E:
			return 0x00000008;
		
		case 0x00000066:
			return 0x00000008;
		
		case 0x0000005F:
			return 0x00000008;
		
		case 0x00000060:
			return 0x00000020;
		
		case 0x00000061:
			return 0x00000020;
		
		case 0x00000062:
			return 0x00000020;
		
		case 0x00000063:
			return 0x00000008;
		
		case 0x00000064:
			return 0x00000020;
		
		case 0x00000065:
			return 0x00000020;
		
		case 0x00000067:
			return 0x00000020;
		
		case 0x00000068:
			return 0x00000020;
		
		case 0x00000069:
			return 0x00000020;
		
		case 0x0000006A:
			return 0x00000008;
		
		case 0x0000006B:
			return 0x00000008;
		
		case 0x0000006C:
			return 0x00000008;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000008;
		
		case 0x0000006F:
			return 0x00000008;
		
		case 0x00000070:
			return 0x00000008;
		
		case 0x00000071:
			return 0x00000008;
		
		case 0x00000072:
			return 0x00000020;
		
		case 0x00000073:
			return 0x00000008;
		
		case 0x00000074:
			return 0x00000008;
		
		case 0x00000075:
			return 0x00000008;
		
		case 0x00000076:
			return 0x00000008;
		
		case 0x00000077:
			return 0x00000020;
		
		case 0x00000078:
			return 0x00000020;
		
		case 0x00000079:
			return 0x00000020;
		
		case 0x0000007A:
			return 0x00000020;
		
		case 0x0000007B:
			return 0x00000008;
		
		case 0x0000007C:
			return 0x00000008;
		
		case 0x0000007D:
			return 0x00000008;
		
		case 0x0000007E:
			return 0x00000008;
		
		case 0x0000007F:
			return 0x00000020;
		
		case 0x00000080:
			return 0x00000020;
		
		case 0x00000081:
			return 0x00000020;
		
		case 0x0000000C:
			return 0x00000020;
		
		case 0x00000004:
			return 0x00000010;
		
		case 0x0000000D:
			return 0x00000020;
		
		case 0x00000005:
			return 0x00000010;
		
		case 0x00000006:
			return 0x00000002;
		
		case 0x00000008:
			return 0x00000002;
		
		case 0x00000009:
			return 0x00000002;
		
		case 0x00000007:
			return 0x00000010;
		
		case 0x0000000A:
			return 0x00000002;
		
		case 0x0000000B:
			return 0x00000004;
		
		case 0x0000000F:
			return 0x00000020;
		
		case 0x00000010:
			return 0x00000020;
		
		case 0x0000001B:
			return 0x00000002;
		
		case 0x00000019:
			return 0x00000002;
		
		case 0x0000001A:
			return 0x00000002;
		
		case 0x00000012:
			return 0x00000020;
		
		case 0x0000001C:
			return 0x00000020;
		
		case 0x0000001D:
			return 0x00000002;
		
		case 0x0000001E:
			return 0x00000020;
		
		case 0x0000001F:
			return 0x00000020;
		
		case 0x00000011:
			return 0x00000002;
		
		case 0x00000082:
			return 0x00000020;
		
		case 0x00000083:
			return 0x00000020;
		
		case 0x00000013:
			return 0x00000020;
		
		case 0x00000016:
			return 0x00000020;
		
		case 0x00000017:
			return 0x00000020;
		
		case 0x00000018:
			return 0x00000020;
		
		case 0x00000014:
			return 0x00000002;
		
		case 0x00000000:
			return 0x00000000;
		
		case 0x00000015:
			return 0x00000020;
		
		case 0x0000008E:
			return 0x00000020;
		
		case 0x0000008F:
			return 0x00000020;
		
		case 0x00000084:
			return 0x00000020;
		
		case 0x00000085:
			return 0x00000020;
		
		case 0x00000089:
			return 0x00000020;
		
		case 0x00000087:
			return 0x00000020;
		
		case 0x00000088:
			return 0x00000020;
		
		case 0x0000008C:
			return 0x00000020;
		
		case 0x0000008D:
			return 0x00000020;
		
		case 0x0000008A:
			return 0x00000020;
		
		case 0x0000008B:
			return 0x00000020;
		
		case 0x00000090:
			return 0x00000020;
		
		case 0x00000091:
			return 0x00000020;
		
		case 0x00000092:
			return 0x00000020;
		
		case 0x00000093:
			return 0x00000020;
		
		case 0x00000094:
			return 0x00000002;
		
		case 0x00000099:
			return 0x00000001;
		
		case 0x00000095:
			return 0x00000002;
		
		case 0x00000096:
			return 0x00000004;
		
		case 0x00000097:
			return 0x00000002;
		
		case 0x00000098:
			return 0x00000002;
		
		case 0x00000086:
			return 0x00000001;
		
		case 0x0000009A:
			return 0x00000002;
		
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
			return 0x00000000;
		
		case 0x000000B0:
			return 0x00000001;
		
		case 0x000000A1:
			return 0x00000004;
		
		case 0x000000A4:
			return 0x00000004;
		
		case 0x000000A5:
			return 0x00000001;
		
		case 0x000000A6:
			return 0x00000001;
		
		case 0x000000AC:
			return 0x00000001;
		
		case 0x000000A8:
			return 0x00000002;
		
		case 0x000000AD:
			return 0x00000001;
		
		case 0x000000A9:
			return 0x00000001;
		
		case 0x000000A7:
			return 0x00000002;
		
		case 0x000000AA:
			return 0x00000008;
		
		case 0x000000AB:
			return 0x00000008;
		
		case 0x000000AE:
			return 0x00000001;
		
		case 0x000000A2:
			return 0x00000010;
		
		case 0x000000A3:
			return 0x00000020;
		
		default:
	}
	return 0x00000000;
}

int func_756(int iParam0, bool bParam1, bool bParam2)
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

