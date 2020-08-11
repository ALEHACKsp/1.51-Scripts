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
	vector3 vLocal_18 = { 0f, 0f, 0f };
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	vector3 vLocal_23 = { 0f, 0f, 0f };
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 10;
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
	vector3 vLocal_90 = { 0f, 0f, 0f };
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
	float fLocal_109 = 0f;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<45> Local_113 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 4;
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
	var uLocal_182 = 2;
	var uLocal_183 = 0;
	var uLocal_184 = 4;
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
	var uLocal_250 = 4;
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
	var uLocal_321 = 12;
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
	var uLocal_502 = 3;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	bool bLocal_512 = 0;
	int iLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	struct<6> Local_530 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<12> Local_531 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	struct<250> Local_532 = { 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	struct<18> Local_536[15];
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	float fLocal_548 = 0f;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_553 = { 0f, 0f, 0f };
	vector3 vLocal_554 = { 0f, 0f, 0f };
	vector3 vLocal_555 = { 0f, 0f, 0f };
	vector3 vLocal_556 = { 0f, 0f, 0f };
	vector3 vLocal_557 = { 0f, 0f, 0f };
	vector3 vLocal_558 = { 0f, 0f, 0f };
	vector3 vLocal_559 = { 0f, 0f, 0f };
	vector3 vLocal_560 = { 0f, 0f, 0f };
	vector3 vLocal_561 = { 0f, 0f, 0f };
	vector3 vLocal_562 = { 0f, 0f, 0f };
	vector3 vLocal_563 = { 0f, 0f, 0f };
	vector3 vLocal_564 = { 0f, 0f, 0f };
	vector3 vLocal_565 = { 0f, 0f, 0f };
	vector3 vLocal_566 = { 0f, 0f, 0f };
	vector3 vLocal_567 = { 0f, 0f, 0f };
	vector3 vLocal_568 = { 0f, 0f, 0f };
	vector3 vLocal_569 = { 0f, 0f, 0f };
	vector3 vLocal_570 = { 0f, 0f, 0f };
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	struct<15> Local_576 = { 0, 4200, 3600, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_577 = 0;
	var uLocal_578 = 8;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 4;
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
	var uLocal_597 = 4;
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
	var uLocal_612 = 4;
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
	var uLocal_627 = 4;
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
	var uLocal_642 = 4;
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
	var uLocal_657 = 4;
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
	var uLocal_672 = 4;
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
	var uLocal_687 = 4;
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
	var uLocal_700 = 8;
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
	var uLocal_725 = 8;
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
	var uLocal_751[2] = { 0, 0 };
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	char* sLocal_758 = NULL;
	vector3 vLocal_759 = { 0f, 0f, 0f };
	vector3 vLocal_760 = { 0f, 0f, 0f };
	vector3 vLocal_761 = { 0f, 0f, 0f };
	float fLocal_762 = 0f;
	vector3 vLocal_763 = { 0f, 0f, 0f };
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	vector3 vLocal_767 = { 0f, 0f, 0f };
	float fLocal_768 = 0f;
	vector3 vLocal_769 = { 0f, 0f, 0f };
	float fLocal_770 = 0f;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	char* sLocal_773 = NULL;
	int iLocal_774 = 0;
	vector3 vLocal_775 = { 0f, 0f, 0f };
	vector3 vLocal_776 = { 0f, 0f, 0f };
	float fLocal_777 = 0f;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	var uLocal_781 = 16;
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
	int iLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	struct<6> Local_953 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	int iLocal_958 = 0;
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
	var uLocal_971 = 8;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 4;
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
	var uLocal_990 = 4;
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
	var uLocal_1005 = 4;
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
	var uLocal_1020 = 4;
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
	var uLocal_1035 = 4;
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
	var uLocal_1050 = 4;
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
	var uLocal_1065 = 4;
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
	var uLocal_1080 = 4;
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
	char* sLocal_1103 = NULL;
	bool bLocal_1104 = 0;
	int iLocal_1105 = 0;
	int iLocal_1106 = 0;
	int iLocal_1107 = 0;
	int iLocal_1108 = 0;
	int iLocal_1109 = 0;
	bool bLocal_1110 = 0;
	int iLocal_1111 = 0;
	bool bLocal_1112 = 0;
	int iLocal_1113 = 0;
	int iLocal_1114 = 0;
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
	var uLocal_1147 = 3;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 1;
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
	var uLocal_1168 = 2;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 13;
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
	var uLocal_1186 = 13;
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
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
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
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 13;
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
	var uLocal_1462 = 0;
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
	var uLocal_1604 = 13;
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
	var uLocal_1618 = 13;
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
	var uLocal_1632 = 13;
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
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 13;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	int iLocal_1692 = 0;
	vector3 vLocal_1693 = { 0f, 0f, 0f };
	vector3 vLocal_1694 = { 0f, 0f, 0f };
	int iLocal_1695 = 0;
	vector3 vLocal_1696 = { 0f, 0f, 0f };
	vector3 vLocal_1697 = { 0f, 0f, 0f };
	int iLocal_1698 = 0;
	vector3 vLocal_1699 = { 0f, 0f, 0f };
	vector3 vLocal_1700 = { 0f, 0f, 0f };
	int iLocal_1701 = 0;
	vector3 vLocal_1702 = { 0f, 0f, 0f };
	vector3 vLocal_1703 = { 0f, 0f, 0f };
	struct<6> Local_1704 = { 10, 0, -1, 1000, -1, 0 } ;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 0x00000003;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 0x00000001;
	iLocal_39 = 0x00000041;
	iLocal_40 = 0x00000031;
	iLocal_41 = 0x00000040;
	vLocal_90 = { 500f, 500f, 500f };
	fLocal_109 = ((0.05f + 0.275f) - 0.01f);
	iLocal_510 = 0xFFFFFFFF;
	iLocal_511 = 0xFFFFFFFF;
	iLocal_513 = 0x00000001;
	iLocal_528 = 0xFFFFFFFF;
	iLocal_541 = 0xFFFFFFFF;
	iLocal_542 = 0xFFFFFFFF;
	iLocal_549 = 0xFFFFFFFF;
	iLocal_572 = unk_0xD68EA767274B7444();
	sLocal_758 = "random@street_race";
	iLocal_764 = 0x00000001;
	iLocal_765 = 0x00000001;
	iLocal_771 = 0xFFFFFFFF;
	vLocal_775 = { 0f, 0f, 0f };
	vLocal_776 = { 0f, 0f, 0f };
	fLocal_777 = 0f;
	iLocal_950 = unk_0xAD1355DD1E5D2D9B();
	iLocal_951 = unk_0x817B3657F78A517A();
	iLocal_952 = 0xFFFFFFFF;
	StringCopy(&Local_953, "", 24);
	iLocal_954 = 0xFFFFFFFF;
	iLocal_955 = 0xFFFFFFFF;
	iLocal_1106 = 0x00000001;
	iLocal_1107 = 0x00000001;
	iLocal_1111 = 0x00000001;
	iLocal_1113 = 0x00000001;
	iLocal_1114 = 0x00000001;
	vLocal_1693 = { -1107.184f, -1170.247f, 1.15909f };
	vLocal_1694 = { 0.01f, -0.01f, -44.69f };
	vLocal_1696 = { -1105.14f, -1171.53f, 1.16f };
	vLocal_1697 = { -0.13f, -0.21f, -65.97f };
	vLocal_1699 = { -928.3082f, -1070.008f, 1.155174f };
	vLocal_1700 = { -0.06f, 0.07f, -42.91f };
	vLocal_1702 = { -1104.51f, -1173.58f, 1.15f };
	vLocal_1703 = { 0f, 0f, -46.41f };
	Local_530 = { ScriptParam_1704 };
	if (unk_0x2EBF608FFE6CA406(0x00000053))
	{
		Local_531.f_B = 0x00000063;
		func_569(0x00000000);
	}
	unk_0x7798376279BB5369(0x00000001);
	if (Local_530.f_1 == 0x00000003)
	{
		func_568(0x00000007);
		func_567(0x00000007);
	}
	else
	{
		func_568(0x00000008);
		func_567(0x00000008);
	}
	switch (Local_530)
	{
		case 0x00000000:
			iLocal_954 = 0x00000001;
			break;
		
		case 0x00000001:
			iLocal_954 = 0x00000002;
			break;
		
		case 0x00000002:
			iLocal_954 = 0x00000004;
			break;
		
		case 0x00000003:
			iLocal_954 = 0x00000005;
			break;
		
		case 0x00000004:
			iLocal_954 = 0x00000006;
			break;
		
		case 0x00000005:
			iLocal_954 = 0x00000001;
			break;
		
		case 0x00000006:
			iLocal_954 = 0x00000002;
			break;
		
		case 0x00000007:
			iLocal_954 = 0x00000003;
			break;
		
		case 0x00000008:
			iLocal_954 = 0x00000004;
			break;
	}
	func_557(0x00000000, 0x00000001);
	func_556(0x00000001);
	func_555(0x00000001);
	if (Local_530 == 0x00000004)
	{
		unk_0x523BCC9DC80CD82F(0x27BAEB1A);
	}
	while (0x00000001)
	{
		switch (iLocal_524)
		{
			case 0x00000000:
				func_526();
				break;
			
			case 0x00000001:
				func_488();
				break;
			
			case 0x00000002:
				func_404();
				break;
			
			case 0x00000003:
				func_238();
				break;
			
			case 0x00000004:
				func_184();
				break;
			
			case 0x00000005:
				func_1();
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	unk_0xF3D5CA5E09CE41C7();
	switch (iLocal_525)
	{
		case 0x00000000:
			if (func_183())
			{
				func_181();
			}
			func_179(0x00000001);
			if (Local_530.f_1 == 0x00000003)
			{
				unk_0x8910D3D58E0132B8("SEA_RACE_DURING_RACE");
			}
			else
			{
				unk_0x8910D3D58E0132B8("STREET_RACE_DURING_RACE");
			}
			if (func_178(vLocal_18.x))
			{
				unk_0x7B4256FB57F5E15D(vLocal_18.x, 0x00000000);
			}
			unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000000);
			unk_0x38C3A68D7861DCFD(0x00000001, 0x00000050, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			func_173(0x00000000);
			sLocal_1103 = "";
			switch (iLocal_523)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (func_167() == 0x00000001)
					{
						sLocal_1103 = "RACES_R_INJ";
					}
					else if (func_167() == 0x00000000)
					{
						sLocal_1103 = "RACES_R_INJ_M";
					}
					else
					{
						sLocal_1103 = "RACES_R_INJ_T";
					}
					break;
				
				case 0x00000002:
					sLocal_1103 = "RACES_R_DEAD";
					break;
				
				case 0x00000003:
					if (func_167() == 0x00000001)
					{
						sLocal_1103 = "RACES_WRECK";
					}
					else if (func_167() == 0x00000000)
					{
						sLocal_1103 = "RACES_WRECK_M";
					}
					else
					{
						sLocal_1103 = "RACES_WRECK_T";
					}
					break;
				
				case 0x00000004:
					if (func_167() == 0x00000001)
					{
						sLocal_1103 = "RACES_ABAND";
					}
					else if (func_167() == 0x00000000)
					{
						sLocal_1103 = "RACES_ABAND_M";
					}
					else
					{
						sLocal_1103 = "RACES_ABAND_T";
					}
					break;
				
				case 0x00000005:
					if (func_167() == 0x00000001)
					{
						sLocal_1103 = "RACES_MISS";
					}
					else if (func_167() == 0x00000000)
					{
						sLocal_1103 = "RACES_MISS_M";
					}
					else
					{
						sLocal_1103 = "RACES_MISS_T";
					}
					break;
				
				case 0x00000006:
					if (func_167() == 0x00000001)
					{
						sLocal_1103 = "RACES_COPS";
					}
					else if (func_167() == 0x00000000)
					{
						sLocal_1103 = "RACES_COPS_M";
					}
					else
					{
						sLocal_1103 = "RACES_COPS_T";
					}
					break;
			}
			if (unk_0xEA6BC48857E0AC4C(sLocal_1103))
			{
				func_569(0x00000000);
			}
			else
			{
				iLocal_952 = unk_0x1C0640BA9A7327B3() + 4000;
				iLocal_525 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_149(&uLocal_1098, &uLocal_959, "SPR_UI_FAILD", sLocal_1103, &bLocal_1104, 0x0000004E, 0x00000007, 0x00000001, 0x41700000, 0x00000001))
			{
				if (bLocal_1104)
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					SYSTEM::WAIT(0x00000000);
					func_2(0x00000000);
				}
				else
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					SYSTEM::WAIT(0x00000000);
					Local_531.f_B = 0x00000063;
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
					func_569(0x00000000);
				}
			}
			break;
	}
}

void func_2(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (bParam0)
	{
		unk_0x3FC8DBCC154CA56B();
		func_148(0x000001F4, 0x00000000);
	}
	else
	{
		func_148(0x000001F4, 0x00000001);
	}
	if (Local_530.f_1 == 0x00000001)
	{
		unk_0x28F5E4DA506AC0CA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 50f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_147(&vLocal_18);
		func_146(&(vLocal_18.f_1));
	}
	if (Local_530.f_1 == 0x00000002)
	{
		if (!func_145())
		{
			func_37(&iVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0f, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000001, joaat("buffalo"), 0x00000000, 0x00000091, 0x00000001);
			vLocal_18.x = iVar0;
		}
	}
	else if (Local_530.f_1 == 0x00000001)
	{
		if (!func_35())
		{
			func_37(&iVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0f, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000001, joaat("bati"), 0x00000000, 0x00000091, 0x00000001);
			vLocal_18.x = iVar0;
		}
	}
	else if (Local_530.f_1 == 0x00000003)
	{
		if (!func_34())
		{
			func_37(&iVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0f, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000001, joaat("seashark"), 0x00000000, 0x00000091, 0x00000001);
			vLocal_18.x = iVar0;
		}
	}
	unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 100f, 0x00000000);
	unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 100f);
	unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
	unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
	Local_531.f_6 = 0x00000000;
	func_179(0x00000001);
	func_32(0x00000001);
	func_31(&iLocal_766);
	func_557(0x00000000, 0x00000001);
	unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Local_532.f_B5[Local_532.f_F9 /*3*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	unk_0x9E632F16E887F781(Local_532.f_B5[Local_532.f_F9 /*3*/], 500f, 0x00000000);
	bVar1 = 0x00000001;
	iVar2 = unk_0x1C0640BA9A7327B3() + 30000;
	while (bVar1)
	{
		if (unk_0x68367101660E33F0())
		{
			bVar1 = 0x00000000;
		}
		if (unk_0x1C0640BA9A7327B3() > iVar2)
		{
			bVar1 = 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
	func_29();
	func_24(0x00000000, 0x00000000);
	SYSTEM::WAIT(0x000003E8);
	func_23();
	func_11();
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	SYSTEM::WAIT(0x00000000);
	unk_0x28F5E4DA506AC0CA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 500f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	unk_0x2FB9A57162E54BAB(0f);
	Local_531.f_1 = 0x00000000;
	iVar3 = 0x00000000;
	while (iVar3 <= (Local_532.f_F9 - 0x00000001))
	{
		if (func_9(Local_536[iVar3 /*18*/].f_3))
		{
			unk_0xA3BF0AA5A2608191(Local_536[iVar3 /*18*/].f_3);
		}
		if (func_178(Local_536[iVar3 /*18*/].f_6))
		{
			unk_0xE0C0351D5B931E37(Local_536[iVar3 /*18*/].f_6, 0.1f, 0x00000001, 0x00000000);
			func_7(Local_536[iVar3 /*18*/].f_6, Local_532.f_B5[iVar3 /*3*/]);
			unk_0xD8F6A53F4799FAFE(Local_536[iVar3 /*18*/].f_6, Local_532.f_E6[iVar3]);
		}
		iVar3++;
	}
	SYSTEM::WAIT(0x000001F4);
	if (Local_530 == 0x00000001)
	{
		SYSTEM::WAIT(0x000003E8);
	}
	func_6(0x000001F4, 0x00000001);
	unk_0x8BC9595FD2792B5D("RACE_INTRO_GENERIC");
	func_3(&(Local_531.f_2));
	unk_0xEAB026E686C0D991(0x00000001, 0x00000050, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000050, 0x00000001);
	iLocal_524 = 0x00000001;
	iLocal_525 = 0x00000000;
}

void func_3(int iParam0)
{
	func_4(iParam0, 0f);
}

void func_4(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_5(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

float func_5(bool bParam0)
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

void func_6(int iParam0, bool bParam1)
{
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		if (!unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
}

Vector3 func_7(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0xE82754C349C7B581(vParam1, &uVar0, 0x00000000, 0x00000000))
	{
		vParam1.z = uVar0;
	}
	if (func_8(iParam0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
	return vParam1;
}

bool func_8(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

int func_9(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_10(int iParam0)
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

void func_11()
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	if (unk_0xE1DBBD6CE209517C(iVar0))
	{
		unk_0x98E4DC66A651C9FA(iVar0, 0x00000000, 0x00000010);
		unk_0x98E4DC66A651C9FA(iVar0, 0x00000000, 0x00000020);
		unk_0x67F91979413C5D76(iVar0, 0x00000000, 0x00000000);
		unk_0x56EA5D248F36A081(iVar0, 0x00000000);
		unk_0xBC03DF6093E8E71F(iVar0, 0x00000001);
	}
	func_13(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x536F1BE96C726C4B(func_12(iVar0), 50f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x28F5E4DA506AC0CA(func_12(iVar0), 500f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x745CE398A4B0A3C6(func_12(iVar0), 500f, 0x00000000);
	unk_0xF48790410026514E(0x00000000);
	unk_0x52D3C9744D7CF20D();
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(0x00000001);
}

Vector3 func_12(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_13(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_22(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_21())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_20(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_22(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_20(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_18(unk_0xD803B885F5E47A62())) && !func_15(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_14()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_18(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_14()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_16(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_17();
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

int func_17()
{
	return Global_1407E9;
}

int func_18(int iParam0)
{
	if (func_15(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_19())
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

bool func_19()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_20(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_21()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_22(int iParam0)
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

void func_23()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
		if (unk_0xC844350D5D58C99A(vLocal_18.x))
		{
			if (unk_0xDF1306B443CD3D15(vLocal_18.x, 0x00000000))
			{
				unk_0xA47B46945FF6DE74(vLocal_18.x, Local_532.f_B5[Local_532.f_F9 /*3*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(vLocal_18.x, Local_532.f_E6[Local_532.f_F9]);
				unk_0xB9FD7450C0DAB575(vLocal_18.x, 0x40A00000);
			}
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
			unk_0x4A4806F9D471E491(vLocal_18.x, 0x00000001, 0x00000000);
		}
	}
}

void func_24(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	iVar0 = (Local_532.f_F9 - 0x00000001);
	if ((func_9(iParam0) && func_178(iParam1)) && !unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_6))
	{
		Local_536[iVar0 /*18*/].f_6 = iParam1;
		Local_536[iVar0 /*18*/].f_5 = unk_0x134B62B726CEC8E6(iParam1);
		Local_536[iVar0 /*18*/].f_3 = iParam0;
		Local_536[iVar0 /*18*/].f_4 = unk_0x134B62B726CEC8E6(iParam0);
		func_28(iVar0);
	}
	func_27(0x00000001);
	iVar0 = 0x00000000;
	while (iVar0 <= (Local_532.f_F9 - 0x00000001))
	{
		while (!unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_6))
		{
			if (unk_0xB87F6CF6E5628C67(Local_536[iVar0 /*18*/].f_5))
			{
				vVar1 = { Local_532.f_B5[iVar0 /*3*/] };
				if (Local_530.f_1 == 0x00000003)
				{
					vVar1.x = (vVar1.x + unk_0x79833B02DBD2A244(-1f, 1f));
					vVar1.y = (vVar1.y + unk_0x79833B02DBD2A244(-1f, 1f));
				}
				else
				{
					vVar1 = { unk_0x8A5E176FF719A014(Local_532.f_B5[iVar0 /*3*/], Local_532.f_E6[iVar0], 0f, -3f, 0f) };
				}
				Local_536[iVar0 /*18*/].f_6 = unk_0x122AAB0B1D6F55AD(Local_536[iVar0 /*18*/].f_5, vVar1, Local_532.f_E6[iVar0], 0x00000001, 0x00000001, 0x00000000);
				if (Local_530.f_1 == 0x00000003)
				{
					unk_0xB9FD7450C0DAB575(Local_536[iVar0 /*18*/].f_6, 0x40A00000);
					unk_0x657C23FBB4F6EEA5(Local_536[iVar0 /*18*/].f_6, 0f);
					unk_0x104763F18983A32D(Local_536[iVar0 /*18*/].f_6, 0x00000001);
					unk_0xE52EED22AB2D2450(Local_536[iVar0 /*18*/].f_6, 0x00000001);
					if (unk_0x6AC695D09170F27D(Local_536[iVar0 /*18*/].f_6))
					{
						unk_0xB078AFA7242F1F7B(Local_536[iVar0 /*18*/].f_6, 0x00000001);
					}
					unk_0xEF190091B5B9F5EB(Local_536[iVar0 /*18*/].f_6, 0x00000000);
				}
				else
				{
					unk_0xB9FD7450C0DAB575(Local_536[iVar0 /*18*/].f_6, 0x40A00000);
				}
				unk_0xAB8E2DDC7AF955E0(Local_536[iVar0 /*18*/].f_5, 0x00000001);
			}
			SYSTEM::WAIT(0x00000000);
		}
		func_26();
		if (func_9(iParam0))
		{
			Local_536[(Local_532.f_F9 - 0x00000001) /*18*/].f_1 = 0x00000002;
		}
		while (!unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_3))
		{
			if ((unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_6) && unk_0xDF1306B443CD3D15(Local_536[iVar0 /*18*/].f_6, 0x00000000)) && unk_0xB87F6CF6E5628C67(Local_536[iVar0 /*18*/].f_4))
			{
				Local_536[iVar0 /*18*/].f_3 = unk_0x852A19533F896693(Local_536[iVar0 /*18*/].f_6, 0x0000001A, Local_536[iVar0 /*18*/].f_4, 0xFFFFFFFF, 0x00000001, 0x00000001);
				if (Local_530.f_1 != 0x00000003)
				{
					unk_0x8BE2A14C28ED9A87(Local_536[iVar0 /*18*/].f_6, 0x00000001);
					vVar2 = { unk_0x8A5E176FF719A014(Local_532.f_B5[iVar0 /*3*/], Local_532.f_E6[iVar0], 0f, 2.3f, 0f) };
					if (iVar0 == 0x00000000)
					{
						unk_0xDD353D0E9C789D0E(&iVar3);
						unk_0x78A77CDD64392938(0x00000000, 0x00000AF0);
						unk_0xE9362E4D600DD12A(0x00000000, Local_536[iVar0 /*18*/].f_6, vVar2, 1.5f, 0x00000000, Local_536[iVar0 /*18*/].f_5, 0x01040000, 0.5f, 15f);
						unk_0x75ABDC5F81978924(iVar3);
						unk_0x78ADC381772E3D54(Local_536[iVar0 /*18*/].f_3, iVar3);
						unk_0xF82EA857DA10E0CD(&iVar3);
					}
					else if (iVar0 == 0x00000001)
					{
						unk_0xDD353D0E9C789D0E(&iVar3);
						unk_0x78A77CDD64392938(0x00000000, 0x00000CE4);
						unk_0xE9362E4D600DD12A(0x00000000, Local_536[iVar0 /*18*/].f_6, vVar2, 1.2f, 0x00000000, Local_536[iVar0 /*18*/].f_5, 0x01040000, 0.5f, 15f);
						unk_0x75ABDC5F81978924(iVar3);
						unk_0x78ADC381772E3D54(Local_536[iVar0 /*18*/].f_3, iVar3);
						unk_0xF82EA857DA10E0CD(&iVar3);
					}
					else
					{
						unk_0xDD353D0E9C789D0E(&iVar3);
						unk_0x78A77CDD64392938(0x00000000, (0x0000157C + iVar0 * 100));
						unk_0xE9362E4D600DD12A(0x00000000, Local_536[iVar0 /*18*/].f_6, vVar2, 0.8f, 0x00000000, Local_536[iVar0 /*18*/].f_5, 0x01040000, 0.5f, 15f);
						unk_0x75ABDC5F81978924(iVar3);
						unk_0x78ADC381772E3D54(Local_536[iVar0 /*18*/].f_3, iVar3);
						unk_0xF82EA857DA10E0CD(&iVar3);
					}
				}
				if (Local_530.f_1 == 0x00000001)
				{
					unk_0x83F619A03CDDE284(Local_536[iVar0 /*18*/].f_3, 0x00000001, 0x00001000, 0xFFFFFFFF);
				}
				func_25(iVar0);
				if (func_9(Local_536[iVar0 /*18*/].f_3))
				{
					func_28(iVar0);
				}
			}
			SYSTEM::WAIT(0x00000000);
		}
		iVar0++;
	}
	if (func_9(iParam0))
	{
		Local_536[(Local_532.f_F9 - 0x00000001) /*18*/].f_1 = 0x00000002;
	}
	func_27(0x00000000);
	switch (Local_530)
	{
		case 0x00000000:
			sLocal_773 = "CityRace0_route1";
			break;
		
		case 0x00000001:
			sLocal_773 = "CityRace1_route1";
			break;
		
		case 0x00000002:
			sLocal_773 = "CityRace3_route1";
			break;
		
		case 0x00000003:
			sLocal_773 = "CityRace4_route1";
			break;
		
		case 0x00000004:
			sLocal_773 = "CityRace5_route1";
			break;
		
		case 0x00000005:
			sLocal_773 = "SeaRace0_route1";
			break;
		
		case 0x00000006:
			sLocal_773 = "SeaRace1_route1";
			break;
		
		case 0x00000007:
			sLocal_773 = "SeaRace2_route1";
			break;
		
		case 0x00000008:
			sLocal_773 = "SeaRace3_route1";
			break;
	}
	unk_0x29398344B9E5B8A7(sLocal_773);
	while (!unk_0x1C2E18E9C63BEB77(sLocal_773))
	{
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x51FE1B68F2818389(sLocal_773, &iLocal_946);
	iLocal_946 = (iLocal_946 - 0x00000001);
	if (Local_532.f_F7 == 0x00000000)
	{
		iLocal_538 = 0x00000000;
	}
	else
	{
		iLocal_538 = 0x00000001;
	}
}

void func_25(int iParam0)
{
	if (unk_0xC844350D5D58C99A(Local_536[iParam0 /*18*/].f_6) && !unk_0x437347B10A200C4B(Local_536[iParam0 /*18*/].f_6, 0x00000000))
	{
		unk_0xC6A6B4DDD6DC073A(Local_536[iParam0 /*18*/].f_6, unk_0x09AC81E49EA267F7(0x00000000, unk_0x792D3ECFF774F662(Local_536[iParam0 /*18*/].f_6)));
		if (unk_0x40B3F576B41FA183(Local_536[iParam0 /*18*/].f_6) > 0x00000000)
		{
			unk_0xF95FF0A179413A39(Local_536[iParam0 /*18*/].f_6, 0x00000000);
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000000) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000000, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000000)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000001) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000001, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000001)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000002) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000002, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000002)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000003) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000003, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000003)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000004) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000004, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000004)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000005) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000005, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000005)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000006) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000006, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000006)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000008) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000008, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000008)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000009) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x00000009, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x00000009)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x0000000B) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x0000000B, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x0000000B)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x0000000C) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x0000000C, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x0000000C)), 0x00000000);
			}
			if (unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x0000000D) > 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(Local_536[iParam0 /*18*/].f_6, 0x0000000D, unk_0x09AC81E49EA267F7(0x00000000, unk_0x461CAC843A21E4B6(Local_536[iParam0 /*18*/].f_6, 0x0000000D)), 0x00000000);
			}
			unk_0x73BEC6F1685574E6(Local_536[iParam0 /*18*/].f_6, 0x00000012, 0x00000001);
			unk_0x73BEC6F1685574E6(Local_536[iParam0 /*18*/].f_6, 0x00000011, 0x00000001);
			unk_0x73BEC6F1685574E6(Local_536[iParam0 /*18*/].f_6, 0x00000016, 0x00000001);
		}
	}
}

void func_26()
{
	if (Local_530 == 0x00000003)
	{
		Local_536[0x00000000 /*18*/].f_1 = 0x00000002;
		Local_536[0x00000001 /*18*/].f_1 = 0x00000002;
		Local_536[0x00000002 /*18*/].f_1 = 0x00000002;
		Local_536[0x00000003 /*18*/].f_1 = 0x00000001;
		Local_536[0x00000004 /*18*/].f_1 = 0x00000001;
		Local_536[0x00000005 /*18*/].f_1 = 0x00000000;
		Local_536[0x00000006 /*18*/].f_1 = 0x00000000;
	}
	else if (Local_530 == 0x00000007)
	{
		Local_536[0x00000000 /*18*/].f_1 = 0x00000002;
		Local_536[0x00000001 /*18*/].f_1 = 0x00000001;
		Local_536[0x00000002 /*18*/].f_1 = 0x00000000;
	}
	else
	{
		Local_536[0x00000000 /*18*/].f_1 = 0x00000002;
		Local_536[0x00000001 /*18*/].f_1 = 0x00000002;
		Local_536[0x00000002 /*18*/].f_1 = 0x00000001;
		Local_536[0x00000003 /*18*/].f_1 = 0x00000001;
		Local_536[0x00000004 /*18*/].f_1 = 0x00000000;
		Local_536[0x00000005 /*18*/].f_1 = 0x00000000;
		Local_536[0x00000006 /*18*/].f_1 = 0x00000000;
	}
}

void func_27(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000001)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (Local_532.f_F9 - 0x00000001))
		{
			if (Local_536[iVar0 /*18*/].f_4 == 0x00000000 || Local_536[iVar0 /*18*/].f_4 == 0x00000000)
			{
			}
			unk_0x523BCC9DC80CD82F(Local_536[iVar0 /*18*/].f_4);
			unk_0x523BCC9DC80CD82F(Local_536[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (Local_532.f_F9 - 0x00000001))
		{
			unk_0x71199B01895C6202(Local_536[iVar0 /*18*/].f_4);
			unk_0x71199B01895C6202(Local_536[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
}

void func_28(int iParam0)
{
	if (func_9(Local_536[iParam0 /*18*/].f_3))
	{
		unk_0x11AD11297DC58CC7(Local_536[iParam0 /*18*/].f_3, 0x00000001);
		unk_0xB8E3D4F5062815C2(Local_536[iParam0 /*18*/].f_6, 0x00000001);
		unk_0x05EC10F460C3A4AF(Local_536[iParam0 /*18*/].f_6, 0x00000000);
		unk_0x56FDC9ADE35F7DB0(Local_536[iParam0 /*18*/].f_6, 0x00000001, 0x00000001, 0x00000000);
		unk_0x7980D72D61BEF4D5(Local_536[iParam0 /*18*/].f_3, 0x00000001);
		unk_0x7980D72D61BEF4D5(Local_536[iParam0 /*18*/].f_6, 0x00000001);
		unk_0xD5A0214B20BCBAD8(Local_536[iParam0 /*18*/].f_6, 0x00000001);
		unk_0x44A200C9B6E1CEA6(Local_536[iParam0 /*18*/].f_6, 0x00000001);
		unk_0xA22F71BBC8173C39(Local_536[iParam0 /*18*/].f_6, 0x00000000);
		unk_0x4E885A246A9D983A(Local_536[iParam0 /*18*/].f_3, 0x00000020, 0x00000000);
		unk_0x4E885A246A9D983A(Local_536[iParam0 /*18*/].f_3, 0x0000001D, 0x00000000);
		unk_0x4E885A246A9D983A(Local_536[iParam0 /*18*/].f_3, 0x00000074, 0x00000000);
		unk_0x4E885A246A9D983A(Local_536[iParam0 /*18*/].f_3, 0x00000076, 0x00000000);
		unk_0x4E885A246A9D983A(Local_536[iParam0 /*18*/].f_3, 0x0000001A, 0x00000001);
		unk_0xE8832A9E16A57A1F(Local_536[iParam0 /*18*/].f_6, 0x00000001, 0x00000001);
		unk_0xFCCF7611216AE801(Local_536[iParam0 /*18*/].f_3, 0x00000000);
		if (Local_530.f_1 == 0x00000003)
		{
			unk_0x120A395B0ECB8EA5(Local_536[iParam0 /*18*/].f_6, 0x00000000);
			unk_0x545E1397F38D9D5A(Local_536[iParam0 /*18*/].f_3, 0x00000003);
		}
		Local_536[iParam0 /*18*/] = 0x00000000;
	}
}

void func_29()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	float fVar4;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(vLocal_18.x))
		{
			if (unk_0xDF1306B443CD3D15(vLocal_18.x, 0x00000000))
			{
				if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), vLocal_18.x) && unk_0xBBA8A868118C90ED(vLocal_18.x, 0xFFFFFFFF, 0x00000000))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), vLocal_18.x, 0xFFFFFFFF);
				}
				iVar0 = unk_0xA30EC016B12C03E4();
				unk_0x536F1BE96C726C4B(func_12(iVar0), 50f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x28F5E4DA506AC0CA(func_12(iVar0), 500f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x745CE398A4B0A3C6(func_12(iVar0), 500f, 0x00000000);
				vVar1 = { unk_0x8A5E176FF719A014(Local_532.f_B5[Local_532.f_F9 /*3*/], Local_532.f_E6[Local_532.f_F9], 0f, -15f, 1f) };
				func_30(&vVar1, 0x00000000);
				fVar2 = Local_532.f_E6[Local_532.f_F9];
				if (Local_530 == 0x00000002)
				{
					vVar1 = { -825.03f, -2575.13f, 13.25f };
					fVar2 = 334.98f;
				}
				else if (Local_530 == 0x00000004)
				{
					vVar1 = { -1093.493f, -1173.161f, 2.4978f };
				}
				else if (Local_530.f_1 == 0x00000003)
				{
					vVar1 = { Local_532.f_B5[Local_532.f_F9 /*3*/] };
				}
				if (Local_530.f_1 == 0x00000001)
				{
					vVar3 = { unk_0x8A5E176FF719A014(Local_532.f_B5[Local_532.f_F9 /*3*/], Local_532.f_E6[Local_532.f_F9], 0f, -1f, 0f) };
					fVar4 = 7f;
				}
				else
				{
					vVar3 = { unk_0x8A5E176FF719A014(Local_532.f_B5[Local_532.f_F9 /*3*/], Local_532.f_E6[Local_532.f_F9], 0f, 2.3f, 0f) };
					fVar4 = 3f;
				}
				unk_0x56FDC9ADE35F7DB0(vLocal_18.x, 0x00000001, 0x00000001, 0x00000000);
				unk_0xD8F6A53F4799FAFE(vLocal_18.x, fVar2);
				func_7(vLocal_18.x, vVar1);
				unk_0x05CA0E7946B27A19(vLocal_18.x, 0x00000001);
				unk_0xB8E3D4F5062815C2(vLocal_18.x, 0x00000001);
				if (Local_530.f_1 == 0x00000003)
				{
					unk_0xB9FD7450C0DAB575(vLocal_18.x, 0x40A00000);
					unk_0x657C23FBB4F6EEA5(vLocal_18.x, 0f);
					unk_0x104763F18983A32D(vLocal_18.x, 0x00000001);
					unk_0xE52EED22AB2D2450(vLocal_18.x, 0x00000001);
					if (unk_0x6AC695D09170F27D(vLocal_18.x))
					{
						unk_0xB078AFA7242F1F7B(vLocal_18.x, 0x00000001);
					}
				}
				else
				{
					unk_0xE9362E4D600DD12A(unk_0x16F2683693E537C9(), vLocal_18.x, vVar3, fVar4, 0x00000000, unk_0x134B62B726CEC8E6(vLocal_18.x), 0x01040000, 0.5f, 15f);
					unk_0x1AEF7184B203A58D(vLocal_18.x, fVar4);
					unk_0x295ACC5727E47CB7(vLocal_18.x);
				}
				unk_0x4A4806F9D471E491(vLocal_18.x, 0x00000001, 0x00000000);
				unk_0xD5A0214B20BCBAD8(vLocal_18.x, 0x00000001);
				unk_0x44A200C9B6E1CEA6(vLocal_18.x, 0x00000001);
				if ((Local_530.f_1 == 0x00000003 && func_9(unk_0x16F2683693E537C9())) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0x00000003);
				}
			}
		}
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
	}
}

int func_30(var uParam0, float fParam1)
{
	float fVar0;
	
	fVar0 = 0f;
	if (unk_0xE82754C349C7B581(*uParam0, &fVar0, 0x00000000, 0x00000000))
	{
		uParam0->f_2 = fVar0;
		uParam0->f_2 = (uParam0->f_2 + fParam1);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_31(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

void func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000E)
	{
		if (iVar0 < Local_532.f_F9)
		{
			unk_0xAB8E2DDC7AF955E0(Local_536[iVar0 /*18*/].f_5, 0x00000000);
		}
		if (iParam0 == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_3))
			{
				unk_0xEBA53F35D0085654(&(Local_536[iVar0 /*18*/].f_3));
			}
			if (unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_6))
			{
				unk_0xA954465BA6FDEFE2(&(Local_536[iVar0 /*18*/].f_6));
			}
		}
		else
		{
			if (unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_3))
			{
				if (!unk_0x437347B10A200C4B(Local_536[iVar0 /*18*/].f_3, 0x00000000))
				{
					unk_0xFADC0A217229F6B5(Local_536[iVar0 /*18*/].f_3, 0x00000001);
					if (unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_6) && !unk_0x437347B10A200C4B(Local_536[iVar0 /*18*/].f_6, 0x00000000))
					{
						unk_0x7980D72D61BEF4D5(Local_536[iVar0 /*18*/].f_3, 0x00000000);
						unk_0xE8832A9E16A57A1F(Local_536[iVar0 /*18*/].f_6, 0x00000000, 0x00000001);
						if (Local_530 == 0x00000008)
						{
							unk_0xDD353D0E9C789D0E(&iVar1);
							unk_0xE9362E4D600DD12A(0x00000000, Local_536[iVar0 /*18*/].f_6, 380.1007f, -3498.078f, -29.3627f, 20f, 0x00000000, unk_0x134B62B726CEC8E6(Local_536[iVar0 /*18*/].f_6), 0x000C00AB, 10f, 5f);
							unk_0xE072601B4380E9DF(0x00000000, Local_536[iVar0 /*18*/].f_6, 20f, 0x000C00AB);
							unk_0x75ABDC5F81978924(iVar1);
							unk_0x78ADC381772E3D54(Local_536[iVar0 /*18*/].f_3, iVar1);
						}
						else
						{
							unk_0xE072601B4380E9DF(Local_536[iVar0 /*18*/].f_3, Local_536[iVar0 /*18*/].f_6, 20f, 0x000C00AB);
						}
					}
				}
				func_33(&(Local_536[iVar0 /*18*/].f_3), 0x00000001, 0x00000000, 0x00000001);
			}
			if (unk_0xC844350D5D58C99A(Local_536[iVar0 /*18*/].f_6))
			{
				if (!unk_0x437347B10A200C4B(Local_536[iVar0 /*18*/].f_6, 0x00000000))
				{
					unk_0x7980D72D61BEF4D5(Local_536[iVar0 /*18*/].f_6, 0x00000000);
					unk_0xD5A0214B20BCBAD8(Local_536[iVar0 /*18*/].f_6, 0x00000000);
					unk_0x44A200C9B6E1CEA6(Local_536[iVar0 /*18*/].f_6, 0x00000000);
					unk_0xA22F71BBC8173C39(Local_536[iVar0 /*18*/].f_6, 0x00000001);
				}
				unk_0x046C362CF15F1935(&(Local_536[iVar0 /*18*/].f_6));
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
			if (iParam3 == 0x00000000)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 0x00000001)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0x00000000);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

int func_34()
{
	int iVar0;
	
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iLocal_551 = unk_0x728870EB733D12A1();
		if (func_178(iLocal_551))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_551);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_35()
{
	int iVar0;
	
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iLocal_551 = unk_0x728870EB733D12A1();
		if (func_178(iLocal_551))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_551);
			if ((unk_0x7D8B2A8F9EA82DB7(iVar0) && !unk_0xAD09C9A4B56FA133(iVar0)) && !func_36(iVar0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_37(int iParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	
	iVar0 = 0x00000001;
	if (!func_144() || !func_143())
	{
		iVar0 = 0x00000000;
	}
	if (iVar0 == 0x00000001)
	{
		if (!func_141(iParam4, iParam5, iParam6, iParam11))
		{
			iVar0 = 0x00000000;
		}
	}
	if (iVar0 == 0x00000001)
	{
		func_139();
		while (!func_138())
		{
			SYSTEM::WAIT(0x00000000);
		}
		*iParam0 = func_119(vParam1, fParam2);
	}
	else if (iParam7 == 0x00000001)
	{
		if (func_118(vParam1, 0f, 0f, 0f, 0x00000000))
		{
			vParam1 = { Global_19AE3.f_B4A };
			fParam2 = Global_19AE3.f_B4A.f_6;
		}
		unk_0x536F1BE96C726C4B(vParam1, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		func_109(vParam1, 5f, 0x00000000);
		if (func_108(iParam10))
		{
			func_106(iParam10, 0x00000000);
			while (!func_38(iParam0, iParam10, vParam1, fParam2, 0x00000001, 0x00000000))
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
		else
		{
			unk_0x523BCC9DC80CD82F(iParam8);
			while (!unk_0xB87F6CF6E5628C67(iParam8))
			{
				SYSTEM::WAIT(0x00000000);
			}
			*iParam0 = unk_0x122AAB0B1D6F55AD(iParam8, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(*iParam0) && !unk_0x437347B10A200C4B(*iParam0, 0x00000000))
			{
				if (iParam9 == 0x00000000)
				{
					unk_0xC6A6B4DDD6DC073A(*iParam0, 0x00000000);
				}
				else if (iParam9 > 0x00000000)
				{
					unk_0xC002508A277213DE(*iParam0, iParam9, iParam9);
				}
			}
			unk_0x71199B01895C6202(iParam8);
		}
	}
	if (iParam3 == 0x00000001)
	{
		if (((unk_0xC844350D5D58C99A(*iParam0) && !unk_0x437347B10A200C4B(*iParam0, 0x00000000)) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), *iParam0, 0xFFFFFFFF);
			unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
		}
	}
}

int func_38(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_108(iParam1))
	{
		Var2.f_B = 0x0000000C;
		Var2.f_1F = 0x00000031;
		Var2.f_51 = 0x00000002;
		func_105(iParam1, &Var2, iParam5);
		if (Var2 == 0x00000000)
		{
			return 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (unk_0x134B62B726CEC8E6(*iParam0) != Var2)
			{
			}
			return 0x00000001;
		}
		if ((iParam1 == 0x00000000 && !Global_1B416.f_936.f_21B.f_10DC) && Global_1B416.f_2378.f_63.f_3A[0x00000083])
		{
			Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/] = 0x00000000;
		}
		if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x523BCC9DC80CD82F(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/]);
			if (unk_0xB87F6CF6E5628C67(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0x00000000, 0x00000000, 0x00000000);
				unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
				unk_0x316958DDB94DF3FC(*iParam0, 0x00000000);
				unk_0x626D5ADA3EFAE431(*iParam0, 0x00000000);
				unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
				unk_0xD458AC1C1D29C3B4(*iParam0, 0x000004E2, 0x00000000);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var2.f_3 = 0x000004E2;
				unk_0xC002508A277213DE(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_7, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var2.f_2);
				iVar3 = 0x00000000;
				while (iVar3 < 0x0000000C)
				{
					unk_0xD3421E391490133B(*iParam0, iVar3 + 1, !Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_B[iVar3]);
					iVar3++;
				}
				if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_18)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_104(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1A >= 0x00000000 && Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1A < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_54, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_55, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_56);
				unk_0xA22F71BBC8173C39(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_58);
				unk_0x8BF0BEF985EB6D43(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_57);
				unk_0x85654A532F20966B(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5D, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5E, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5F);
				unk_0x7726E33AC3B60544(*iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5C, 0x0000001C));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5C, 0x0000001D));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5C, 0x0000001E));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5C, 0x0000001F));
				if (unk_0x579935D850368851(*iParam0) > 0x00000001 && Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_59 >= 0x00000000)
				{
					unk_0x446EA2500F021666(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5A > 0xFFFFFFFF)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5A == 0x00000006)
							{
								unk_0x920DACD685EA4957(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_100(iParam0, &(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_1F), &(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0947AEED9914905B(*iParam0, Var2.f_60);
				if (iParam1 == 0x00000002)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("bodhi2"))
					{
						func_98(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x71199B01895C6202(Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iParam1 /*98*/]);
				}
				func_97(*iParam0, iParam1);
				return 0x00000001;
			}
		}
		else if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x523BCC9DC80CD82F(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/]);
			if (unk_0xB87F6CF6E5628C67(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x122AAB0B1D6F55AD(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0x00000000, 0x00000000, 0x00000000);
				unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
				unk_0x316958DDB94DF3FC(*iParam0, 0x00000000);
				unk_0x626D5ADA3EFAE431(*iParam0, 0x00000000);
				unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
				unk_0xD458AC1C1D29C3B4(*iParam0, 0x000004E2, 0x00000000);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var2.f_3 = 0x000004E2;
				unk_0xC002508A277213DE(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_7, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var2.f_2);
				iVar4 = 0x00000000;
				while (iVar4 < 0x0000000C)
				{
					unk_0xD3421E391490133B(*iParam0, iVar4 + 1, !Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_B[iVar4]);
					iVar4++;
				}
				if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_18)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_104(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1A >= 0x00000000 && Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1A < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_54, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_55, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_56);
				unk_0xA22F71BBC8173C39(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_58);
				unk_0x8BF0BEF985EB6D43(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_57);
				unk_0x85654A532F20966B(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5D, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5E, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5F);
				unk_0x7726E33AC3B60544(*iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5C, 0x0000001C));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5C, 0x0000001D));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5C, 0x0000001E));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5C, 0x0000001F));
				if (unk_0x579935D850368851(*iParam0) > 0x00000001 && Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_59 >= 0x00000000)
				{
					unk_0x446EA2500F021666(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5A > 0xFFFFFFFF)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5A == 0x00000006)
							{
								unk_0x920DACD685EA4957(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_100(iParam0, &(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_1F), &(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0947AEED9914905B(*iParam0, Var2.f_60);
				if (iParam1 == 0x00000002)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("bodhi2"))
					{
						func_98(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x71199B01895C6202(Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iParam1 /*98*/]);
				}
				func_97(*iParam0, iParam1);
				return 0x00000001;
			}
		}
		else
		{
			unk_0x523BCC9DC80CD82F(Var2);
			if (unk_0xB87F6CF6E5628C67(Var2))
			{
				bVar5 = 0x00000001;
				*iParam0 = unk_0x122AAB0B1D6F55AD(Var2, vParam2, fParam3, 0x00000001, 0x00000001, 0x00000000);
				unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
				unk_0x316958DDB94DF3FC(*iParam0, 0x00000000);
				unk_0x626D5ADA3EFAE431(*iParam0, 0x00000000);
				unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
				StringCopy(&cVar6, unk_0x7888A5D2621AAF2D(*iParam0), 16);
				unk_0xD458AC1C1D29C3B4(*iParam0, 0x000004E2, 0x00000000);
				unk_0x5DAB50E08C3C504A(*iParam0, 1250f);
				unk_0xDC544F7DF5E5164D(*iParam0, 1250f);
				Var2.f_3 = 0x000004E2;
				unk_0xC002508A277213DE(*iParam0, Var2.f_5, Var2.f_6);
				unk_0x58A0C35FA7CA6162(*iParam0, Var2.f_7, Var2.f_8);
				unk_0xCCD53AC1B5D5E456(*iParam0, Var2.f_2);
				iVar7 = 0x00000000;
				while (iVar7 < 0x0000000C)
				{
					unk_0xD3421E391490133B(*iParam0, iVar7 + 1, !Var2.f_B[iVar7]);
					iVar7++;
				}
				if (Var2.f_18)
				{
					unk_0xDE00FFD6DD02A48E(*iParam0, Var2.f_18);
				}
				if (func_104(&uVar1, &iVar0))
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &uVar1);
					unk_0xA22B35B584F0580A(*iParam0, iVar0);
				}
				else
				{
					unk_0x55A3C4ED4728EA42(*iParam0, &(Var2.f_1B));
					if (Var2.f_1A >= 0x00000000 && Var2.f_1A < unk_0xBCB9B04D4DA658DF())
					{
						unk_0xA22B35B584F0580A(*iParam0, Var2.f_1A);
					}
				}
				unk_0x9F0DB8A295EA8513(*iParam0, Var2.f_54, Var2.f_55, Var2.f_56);
				unk_0xA22F71BBC8173C39(*iParam0, Var2.f_58);
				unk_0x8BF0BEF985EB6D43(*iParam0, Var2.f_57);
				unk_0x85654A532F20966B(*iParam0, Var2.f_5D, Var2.f_5E, Var2.f_5F);
				unk_0x7726E33AC3B60544(*iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(Var2.f_5C, 0x0000001C));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(Var2.f_5C, 0x0000001D));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(Var2.f_5C, 0x0000001E));
				unk_0x7726E33AC3B60544(*iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(Var2.f_5C, 0x0000001F));
				if (unk_0x579935D850368851(*iParam0) > 0x00000001 && Var2.f_59 >= 0x00000000)
				{
					unk_0x446EA2500F021666(*iParam0, Var2.f_59);
				}
				if (Var2.f_5A > 0xFFFFFFFF)
				{
					if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(*iParam0)))
					{
						if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*iParam0)))
						{
							if (Var2.f_5A == 0x00000006)
							{
								unk_0x920DACD685EA4957(*iParam0, Var2.f_5A);
							}
						}
						else
						{
							unk_0x920DACD685EA4957(*iParam0, Var2.f_5A);
						}
					}
				}
				func_100(iParam0, &(Var2.f_1F), &(Var2.f_51));
				unk_0x0947AEED9914905B(*iParam0, Var2.f_60);
				if (iParam1 == 0x00000001)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("bagger") && !Global_1B416.f_2378.f_63.f_3A[0x00000076])
					{
						unk_0x55A3C4ED4728EA42(*iParam0, &cVar6);
						bVar5 = 0x00000000;
					}
				}
				else if (iParam1 == 0x00000002)
				{
					if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("bodhi2"))
					{
						func_98(iParam0);
					}
				}
				else if (((iParam1 == 0x00000000 && !Global_1B416.f_936.f_21B.f_10DC) && Global_1B416.f_2378.f_63.f_3A[0x00000083]) && unk_0x134B62B726CEC8E6(*iParam0) == joaat("tailgater"))
				{
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000006, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x0000000E, 0x00000007, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x0000000B, 0x00000002, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000002, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000007, 0x00000005, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000000, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000003, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x0000000D, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000004, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x0000000C, 0x00000002, 0x00000000);
					unk_0x73BEC6F1685574E6(*iParam0, 0x00000016, 0x00000001);
					unk_0x920DACD685EA4957(*iParam0, 0x00000002);
					unk_0xEE6A1776A67F70C1(*iParam0, 0x00000017, 0x0000000B, 0x00000000);
					unk_0x8BF0BEF985EB6D43(*iParam0, 0x00000002);
					Global_1B416.f_936.f_21B.f_10DC = 0x00000001;
					func_39(iParam1, iParam0, 0x00000000, 0x00000001);
				}
				if (bParam4)
				{
					unk_0x71199B01895C6202(Var2);
				}
				if (bVar5)
				{
					func_97(*iParam0, iParam1);
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_39(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_108(iParam0) && unk_0xC844350D5D58C99A(*iParam1)) && unk_0xDF1306B443CD3D15(*iParam1, 0x00000000))
	{
		if (iParam2 > Global_1B416.f_936.f_21B.f_967)
		{
			return;
		}
		if (iParam2 == 0x00000000)
		{
		}
		else if (iParam2 == 0x00000001)
		{
		}
		else if (iParam2 == 0x00000002)
		{
		}
		else if (iParam2 == 0x00000003)
		{
			func_75(*iParam1, iParam0);
		}
		if (unk_0x40B3F576B41FA183(*iParam1) != 0x00000000)
		{
			unk_0xF95FF0A179413A39(*iParam1, 0x00000000);
		}
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/] = unk_0x134B62B726CEC8E6(*iParam1);
		if (unk_0x565509D116400807(*iParam1, &iVar1))
		{
			Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x134B62B726CEC8E6(iVar1);
		}
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xA471721ED5268046(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x7F6DC62EA9922664(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000000] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000001);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000001] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000002);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000002] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000003);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000003] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000004);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000004] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000005);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000005] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000006);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000006] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000007);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000007] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000008);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000008] = unk_0xDD62D560CFE11A27(*iParam1, 0x00000009);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x00000009] = unk_0xDD62D560CFE11A27(*iParam1, 0x0000000A);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x0000000A] = unk_0xDD62D560CFE11A27(*iParam1, 0x0000000B);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_B[0x0000000B] = unk_0xDD62D560CFE11A27(*iParam1, 0x0000000C);
		if (unk_0x587993B327460A82(*iParam1, 0x00000000))
		{
			iVar2 = unk_0x74A7D92E3874B5C7(*iParam1);
			if (iVar2 == 0x00000000 || iVar2 == 0x00000005)
			{
				Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0x00000001;
			}
			else
			{
				Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0x00000000;
			}
		}
		else
		{
			Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0x00000000;
		}
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_19 = unk_0xFC21F7E0F4D92523();
		StringCopy(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1B), unk_0x7888A5D2621AAF2D(*iParam1), 16);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1A = unk_0x4EB64970EC291A00(*iParam1);
		unk_0x9412F17E127D9759(*iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xD00EA977553939A7(*iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x4D842A28A29F18F6(*iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_54), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_55), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_56));
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_58 = unk_0x616632A7E7824A9A(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_57 = unk_0x214BEAD64D777E8F(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_59 = unk_0xF22DC2D0CA24A151(*iParam1);
		Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5A = unk_0x8EF9B42D5496EC5A(*iParam1);
		unk_0xE04A80C505823410(*iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5D), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5E), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5F));
		if (unk_0x812A93B166D97C60(*iParam1, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001C);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001C);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001D);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001D);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001E);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001E);
		}
		if (unk_0x812A93B166D97C60(*iParam1, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001F);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5C), 0x0000001F);
		}
		Global_1B416.f_936.f_21B.f_10DD[iParam0] = 0x0000000A;
		if (unk_0x67303E186EA6C9A0(*iParam1) >= 0x00000000 && func_44(*iParam1, 0x00000000, &uVar0))
		{
			func_43(iParam1, &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F), &(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_51));
			if (bParam3)
			{
				Global_1B416.f_4E91[iParam0 /*43*/].f_28 = 0x00000001;
				Global_1B416.f_4E91[iParam0 /*43*/] = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/];
				Global_1B416.f_4E91[iParam0 /*43*/].f_3 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_57;
				Global_1B416.f_4E91[iParam0 /*43*/].f_4 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_54;
				Global_1B416.f_4E91[iParam0 /*43*/].f_5 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_55;
				Global_1B416.f_4E91[iParam0 /*43*/].f_6 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_56;
				Global_1B416.f_4E91[iParam0 /*43*/].f_A = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5A;
				Global_1B416.f_4E91[iParam0 /*43*/].f_10 = !Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_58;
				Global_1B416.f_4E91[iParam0 /*43*/].f_13 = { Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1B };
				Global_1B416.f_4E91[iParam0 /*43*/].f_17 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1A;
				Global_1B416.f_4E91[iParam0 /*43*/].f_7 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x0000000B];
				Global_1B416.f_4E91[iParam0 /*43*/].f_8 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x0000000C];
				Global_1B416.f_4E91[iParam0 /*43*/].f_9 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000017];
				Global_1B416.f_4E91[iParam0 /*43*/].f_B = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000004];
				Global_1B416.f_4E91[iParam0 /*43*/].f_C = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x0000000F];
				Global_1B416.f_4E91[iParam0 /*43*/].f_D = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000010];
				Global_1B416.f_4E91[iParam0 /*43*/].f_E = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x0000000E];
				Global_1B416.f_4E91[iParam0 /*43*/].f_F = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000016];
				Global_1B416.f_4E91[iParam0 /*43*/].f_12 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000014];
				Global_1B416.f_4E91[iParam0 /*43*/].f_11 = Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_1F[0x00000012];
				Global_1B416.f_4E91[iParam0 /*43*/].f_18 = unk_0x461CAC843A21E4B6(*iParam1, 0x0000000B) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_19 = unk_0x461CAC843A21E4B6(*iParam1, 0x0000000C) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1A = unk_0x461CAC843A21E4B6(*iParam1, 0x00000004) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1B = unk_0x461CAC843A21E4B6(*iParam1, 0x00000017) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1C = unk_0x461CAC843A21E4B6(*iParam1, 0x0000000E) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1D = unk_0x461CAC843A21E4B6(*iParam1, 0x00000010) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_1E = unk_0x461CAC843A21E4B6(*iParam1, 0x0000000F) + 1;
				Global_1B416.f_4E91[iParam0 /*43*/].f_20 = unk_0xBB3F1A6E0A9B6511(*iParam1);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000000] = unk_0xC34A9D742FC099DC(*iParam1);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000001] = unk_0xEE936CC771514B50(*iParam1, 0x0000000E, 0x00000000);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000002] = unk_0xEE936CC771514B50(*iParam1, 0x0000000E, 0x00000001);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000003] = unk_0xEE936CC771514B50(*iParam1, 0x0000000E, 0x00000002);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000004] = unk_0xEE936CC771514B50(*iParam1, 0x0000000E, 0x00000003);
				Global_1B416.f_4E91[iParam0 /*43*/].f_27 = unk_0xFF4012C9B4D4F728(*iParam1);
				Global_1B416.f_4E91[iParam0 /*43*/].f_1F = func_42(*iParam1);
				Global_1B416.f_4E91[iParam0 /*43*/].f_21[0x00000000] = unk_0x80A2B6C1AD8E56D5(*iParam1);
				unk_0xF3400BB226B5BB56(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0x00000000)
				{
					iVar3 = 0x00000000;
				}
				else if (iVar4 == 0x00000001)
				{
					iVar3 = 0x00000001;
				}
				else if (iVar4 == 0x00000003)
				{
					iVar3 = 0x00000002;
				}
				else if (iVar4 == 0x00000004)
				{
					iVar3 = 0x00000003;
				}
				else if (iVar4 == 0x00000005)
				{
					iVar3 = 0x00000004;
				}
				else
				{
					iVar3 = 0xFFFFFFFF;
				}
				func_40(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 0x00000001, &(Global_1B416.f_4E91[iParam0 /*43*/].f_1));
				unk_0xB0010FD150C8A58B(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0x00000000)
				{
					iVar3 = 0x00000000;
				}
				else if (iVar4 == 0x00000001)
				{
					iVar3 = 0x00000001;
				}
				else if (iVar4 == 0x00000003)
				{
					iVar3 = 0x00000002;
				}
				else if (iVar4 == 0x00000004)
				{
					iVar3 = 0x00000003;
				}
				else if (iVar4 == 0x00000005)
				{
					iVar3 = 0x00000004;
				}
				else
				{
					iVar3 = 0xFFFFFFFF;
				}
				func_40(Global_1B416.f_936.f_21B.f_967[iParam2 /*295*/][iParam0 /*98*/].f_6, 0xFFFFFFFF, iVar3, 0x00000000, &(Global_1B416.f_4E91[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_40(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0x00000000;
	while (func_41(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == 0xFFFFFFFF) || iParam2 == 0x000000FF))
		{
			*uParam4 = iVar0;
			return 0x00000001;
		}
		iVar0++;
	}
	iParam0 = 0xFFFFFFFF;
	iParam1 = 0xFFFFFFFF;
	*uParam4 = 0xFFFFFFFF;
	return 0x00000000;
}

bool func_41(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = 0xFFFFFFFF;
	*uParam3 = 0xFFFFFFFF;
	*uParam4 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000076;
			*uParam4 = 0x00000003;
			break;
		
		case 0x00000001:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000093;
			*uParam4 = 0x00000004;
			break;
		
		case 0x00000002:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000060;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000047;
			*uParam4 = 0x00000091;
			break;
		
		case 0x00000004:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000087;
			*uParam4 = 0x00000087;
			break;
		
		case 0x00000005:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001D;
			*uParam4 = 0x0000001C;
			break;
		
		case 0x00000006:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000040;
			*uParam4 = 0x00000044;
			break;
		
		case 0x00000007:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000046;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000032;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000037;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000059;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000026;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000025;
			*uParam4 = 0x0000006A;
			break;
		
		case 0x0000000D:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000004;
			*uParam4 = 0x0000006F;
			break;
		
		case 0x0000000E:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 0x00000004;
			*uParam3 = 0x00000078;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000006F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000000;
			*uParam4 = 0x0000000A;
			break;
		
		case 0x00000011:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000001;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000012:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000000B;
			*uParam4 = 0x00000002;
			break;
		
		case 0x00000013:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000002;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000014:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000003;
			*uParam4 = 0x00000006;
			break;
		
		case 0x00000015:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000005;
			*uParam4 = 0x0000006F;
			break;
		
		case 0x00000016:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000006;
			*uParam4 = 0x00000004;
			break;
		
		case 0x00000017:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000007;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000018:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000008;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000019:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000009;
			*uParam4 = 0x00000007;
			break;
		
		case 0x0000001A:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000000A;
			*uParam4 = 0x00000007;
			break;
		
		case 0x0000001B:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001B;
			*uParam4 = 0x00000024;
			break;
		
		case 0x0000001C:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001C;
			*uParam4 = 0x0000001C;
			break;
		
		case 0x0000001D:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000096;
			*uParam4 = 0x0000002A;
			break;
		
		case 0x0000001E:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001E;
			*uParam4 = 0x00000024;
			break;
		
		case 0x0000001F:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000001F;
			*uParam4 = 0x0000001B;
			break;
		
		case 0x00000020:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000020;
			*uParam4 = 0x00000019;
			break;
		
		case 0x00000021:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000021;
			*uParam4 = 0x0000002F;
			break;
		
		case 0x00000022:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000022;
			*uParam4 = 0x0000002F;
			break;
		
		case 0x00000023:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000008F;
			*uParam4 = 0x0000001F;
			break;
		
		case 0x00000024:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000023;
			*uParam4 = 0x00000019;
			break;
		
		case 0x00000025:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000089;
			*uParam4 = 0x00000003;
			break;
		
		case 0x00000026:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000088;
			*uParam4 = 0x00000005;
			break;
		
		case 0x00000027:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000024;
			*uParam4 = 0x0000001A;
			break;
		
		case 0x00000028:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000026;
			*uParam4 = 0x00000025;
			break;
		
		case 0x00000029:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000008A;
			*uParam4 = 0x00000059;
			break;
		
		case 0x0000002A:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005A;
			*uParam4 = 0x00000066;
			break;
		
		case 0x0000002B:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000058;
			*uParam4 = 0x00000058;
			break;
		
		case 0x0000002C:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000059;
			*uParam4 = 0x00000058;
			break;
		
		case 0x0000002D:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005B;
			*uParam4 = 0x0000005B;
			break;
		
		case 0x0000002E:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000031;
			*uParam4 = 0x00000034;
			break;
		
		case 0x0000002F:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000032;
			*uParam4 = 0x00000035;
			break;
		
		case 0x00000030:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000033;
			*uParam4 = 0x00000042;
			break;
		
		case 0x00000031:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000034;
			*uParam4 = 0x0000003B;
			break;
		
		case 0x00000032:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000035;
			*uParam4 = 0x0000003B;
			break;
		
		case 0x00000033:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000036;
			*uParam4 = 0x0000003C;
			break;
		
		case 0x00000034:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005C;
			*uParam4 = 0x0000005C;
			break;
		
		case 0x00000035:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000008D;
			*uParam4 = 0x00000049;
			break;
		
		case 0x00000036:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000003D;
			*uParam4 = 0x0000003F;
			break;
		
		case 0x00000037:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000003E;
			*uParam4 = 0x00000044;
			break;
		
		case 0x00000038:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000003F;
			*uParam4 = 0x00000057;
			break;
		
		case 0x00000039:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000041;
			*uParam4 = 0x00000057;
			break;
		
		case 0x0000003A:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000042;
			*uParam4 = 0x0000003C;
			break;
		
		case 0x0000003B:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000043;
			*uParam4 = 0x00000043;
			break;
		
		case 0x0000003C:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000044;
			*uParam4 = 0x00000044;
			break;
		
		case 0x0000003D:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000045;
			*uParam4 = 0x0000004A;
			break;
		
		case 0x0000003E:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000049;
			*uParam4 = 0x00000049;
			break;
		
		case 0x0000003F:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000046;
			*uParam4 = 0x00000046;
			break;
		
		case 0x00000040:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000004A;
			*uParam4 = 0x0000004A;
			break;
		
		case 0x00000041:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000060;
			*uParam4 = 0x0000005F;
			break;
		
		case 0x00000042:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000065;
			*uParam4 = 0x0000005F;
			break;
		
		case 0x00000043:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005F;
			*uParam4 = 0x00000061;
			break;
		
		case 0x00000044:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000005E;
			*uParam4 = 0x00000068;
			break;
		
		case 0x00000045:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000061;
			*uParam4 = 0x00000062;
			break;
		
		case 0x00000046:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000067;
			*uParam4 = 0x00000068;
			break;
		
		case 0x00000047:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000068;
			*uParam4 = 0x00000068;
			break;
		
		case 0x00000048:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000062;
			*uParam4 = 0x0000005F;
			break;
		
		case 0x00000049:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000064;
			*uParam4 = 0x00000064;
			break;
		
		case 0x0000004A:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000066;
			*uParam4 = 0x00000069;
			break;
		
		case 0x0000004B:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000063;
			*uParam4 = 0x0000006A;
			break;
		
		case 0x0000004C:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000069;
			*uParam4 = 0x00000069;
			break;
		
		case 0x0000004D:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000006A;
			*uParam4 = 0x0000006A;
			break;
		
		case 0x0000004E:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000048;
			*uParam4 = 0x00000040;
			break;
		
		case 0x0000004F:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000092;
			*uParam4 = 0x00000091;
			break;
		
		case 0x00000050:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000091;
			*uParam4 = 0x0000004A;
			break;
		
		case 0x00000051:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000006B;
			*uParam4 = 0x0000006B;
			break;
		
		case 0x00000052:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x0000006F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000053:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0x00000000;
			*uParam3 = 0x00000070;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000054:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000000;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000055:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000093;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000001;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000057:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000000B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000058:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000002;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000059:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000003;
			*uParam4 = 0x00000002;
			break;
		
		case 0x0000005A:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000004;
			*uParam4 = 0x00000004;
			break;
		
		case 0x0000005B:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000005;
			*uParam4 = 0x00000005;
			break;
		
		case 0x0000005C:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000006;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000007;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000005E:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000008;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000005F:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000009;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000060:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000000A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000061:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000062:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001C;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000063:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001D;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000064:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000096;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000065:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000066:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000001F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000067:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000020;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000068:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000021;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000069:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000022;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006A:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000008F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006B:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000023;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006C:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000087;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006D:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000089;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006E:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000088;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000006F:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000024;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000070:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000008A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000071:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000063;
			*uParam4 = 0x00000063;
			break;
		
		case 0x00000072:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005A;
			*uParam4 = 0x00000066;
			break;
		
		case 0x00000073:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000058;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000074:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000075:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000031;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000076:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000033;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000077:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000034;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000078:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000035;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000079:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000036;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007A:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005C;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007B:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000008D;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007C:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000003D;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007D:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000003E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007E:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000003F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000007F:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000040;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000080:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000041;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000081:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000042;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000082:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000043;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000083:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000044;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000084:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000045;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000085:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000049;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000086:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000004A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000087:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000065;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000088:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005F;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000089:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000005E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008A:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000061;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008B:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000067;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008C:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000068;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008D:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000062;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008E:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000064;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000008F:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000066;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000090:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000063;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000091:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000069;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000092:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000006A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000093:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000047;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000094:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000048;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000095:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000008E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000096:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000091;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000097:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x0000006B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000098:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000070;
			*uParam4 = 0x00000000;
			break;
		
		case 0x00000099:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000000C;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009A:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000000D;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009B:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000000E;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009C:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000083;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009D:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000053;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009E:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000052;
			*uParam4 = 0x00000000;
			break;
		
		case 0x0000009F:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000054;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A0:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000095;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A1:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000094;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A2:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000027;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A3:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000028;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A4:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000029;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A5:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000002A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A6:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000080;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A7:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000097;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A8:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000009B;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000A9:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000098;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000AA:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x00000099;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000AB:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 0x00000002;
			*uParam3 = 0x0000009A;
			*uParam4 = 0x00000000;
			break;
		
		case 0x000000AC:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000075;
			*uParam4 = 0x00000012;
			break;
		
		case 0x000000AD:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000077;
			*uParam4 = 0x00000005;
			break;
		
		case 0x000000AE:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x0000009E;
			*uParam4 = 0x000000A0;
			break;
		
		case 0x000000AF:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 0x00000003;
			*uParam3 = 0x0000009F;
			*uParam4 = 0x000000A0;
			break;
	}
	return *uParam2 != 0xFFFFFFFF;
}

float func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 0x000186A0;
	iVar1 = 0x0000FDE8;
	iVar2 = 0x0000C350;
	iVar3 = 0x00004E20;
	iVar4 = 0x00004E20;
	iVar5 = iVar4;
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0x67303E186EA6C9A0(iParam0) >= 0x00000000)
	{
		if (unk_0xFF4012C9B4D4F728(iParam0) == 0x00000003)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 0x00000001)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 0x00000002)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xFF4012C9B4D4F728(iParam0) == 0x00000000)
		{
			if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_43(int iParam0, var uParam1, var uParam2)
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

int func_44(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0x00000000;
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0x4DAC2AD66FE0E696(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if ((!func_73(iVar0, bParam1, uParam2) && !func_72(unk_0xD803B885F5E47A62())) && !func_55(iParam0))
	{
		return 0x00000000;
	}
	if (func_72(unk_0xD803B885F5E47A62()))
	{
		if (func_54(iVar0))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	bVar1 = 0x00000000;
	if (func_53(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iVar0) || unk_0xC41A9202669A24C4(iVar0)))
	{
		bVar1 = 0x00000001;
	}
	if (((unk_0x56E1CD81AE700E98(iParam0) && !func_51(iParam0)) && !bVar1) && !(func_50(unk_0x134B62B726CEC8E6(iParam0)) && func_46(unk_0xD803B885F5E47A62())))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case 0xD039510B:
			case 0x287FA449:
			case 0x71D3B6F0:
			case 0x669EB40A:
			case 0x32174AFC:
			case 0xD556917C:
				*uParam2 = 0x00000010;
				break;
			
			default:
				*uParam2 = 0x00000002;
				break;
		}
		return 0x00000000;
	}
	if (!unk_0x8CD06866876216F2())
	{
		if ((func_45(iParam0) && unk_0x134B62B726CEC8E6(iParam0) != joaat("sentinel2")) && unk_0x134B62B726CEC8E6(iParam0) != joaat("issi2"))
		{
			*uParam2 = 0x00000002;
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_45(int iParam0)
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

int func_46(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_47(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_47(int iParam0)
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

int func_48(int iParam0, bool bParam1, bool bParam2)
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

int func_49()
{
	return 0xFFFFFFFF;
}

int func_50(int iParam0)
{
	if (((iParam0 == 0x73F4110E || iParam0 == 0x6290F15B) || iParam0 == 0x0D17099D) || iParam0 == 0x897AFC65)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_51(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 0xFE141DA6:
		case 0x0A90ED5C:
		case 0x171C92C4:
		case 0x5993F939:
		case 0x8FD54EBB:
		case 0x27D79225:
		case 0xBBA2A2F7:
		case 0x5BEB3CE0:
		case 0xDD71BFEB:
		case 0x9B065C9E:
		case 0x8644331A:
			return 0x00000001;
			break;
		
		case 0xD039510B:
		case 0x287FA449:
		case 0x71D3B6F0:
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (func_52(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
		
		case 0xB53C6C52:
		case joaat("burrito2"):
			return 0x00000001;
	}
	return 0x00000000;
}

int func_52(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_47(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_53(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_47(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0x81BD2ED0:
		case 0x58CDAF30:
		case 0x9B16A3B4:
		case 0xD6BC7523:
		case 0xAA6F980A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_55(int iParam0)
{
	if (func_71(unk_0xD803B885F5E47A62()) || func_70(unk_0xD803B885F5E47A62()))
	{
		if (func_56(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_56(int iParam0)
{
	if ((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_59(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
	{
		if (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") == unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
		{
			if (func_57(iParam0))
			{
				return 0x00000001;
			}
			switch (unk_0x134B62B726CEC8E6(iParam0))
			{
				case 0x097E5533:
				case 0x19DD9ED1:
				case 0x586765FB:
				case 0x34DBA661:
				case 0x5D1903F9:
				case 0xE78CC3D9:
				case 0x35DED0DD:
				case 0xE8A8BA94:
				case 0x4ABEBF23:
				case 0x546D8EEE:
					return 0x00000001;
					break;
				}
			}
	}
	return 0x00000000;
}

int func_57(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0x2189D250:
		case 0x711D4738:
		case 0xFE141DA6:
		case 0x34B82784:
		case 0xB7D9F7F1:
		case 0x50D4D19F:
		case 0x8D4B7A8A:
		case 0xB5EF4C33:
		case 0xF34DFB25:
		case 0x79DD18AE:
		case 0xD9F0503D:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_59(int iParam0, bool bParam1)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_61(unk_0x134B62B726CEC8E6(iParam0), 0x00000000))
			{
				if (Global_26B66F.f_12D == iParam0)
				{
					return 0x00000001;
				}
				else if (func_60(iParam0) != 0xFFFFFFFF && !bParam1)
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (Global_2537E2.f_274[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam1 == 0x00000000)
	{
		if (func_69(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_68();
			break;
		
		case joaat("sabregt"):
			if (Global_40001.f_378B)
			{
				return func_67();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_40001.f_378C)
			{
				return func_67();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_40001.f_378A)
			{
				return func_67();
			}
			break;
		
		case joaat("minivan"):
			if (Global_40001.f_378D)
			{
				return func_67();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_40001.f_378F)
			{
				return func_67();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_66();
			break;
		
		case joaat("comet2"):
			if (Global_40001.f_48ED)
			{
				return func_65();
			}
			break;
		
		case joaat("diablous"):
			if (Global_40001.f_48EF)
			{
				return func_65();
			}
			break;
		
		case joaat("fcr"):
			if (Global_40001.f_48F3)
			{
				return func_65();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_40001.f_48F0)
			{
				return func_65();
			}
			break;
		
		case joaat("nero"):
			if (Global_40001.f_48F7)
			{
				return func_65();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_40001.f_48F5)
			{
				return func_65();
			}
			break;
		
		case joaat("specter"):
			if (Global_40001.f_48FA)
			{
				return func_65();
			}
			break;
		
		case joaat("technical"):
			if (Global_40001.f_5091)
			{
				return func_64();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_40001.f_5092)
			{
				return func_64();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_63();
			break;
		
		case joaat("glendale"):
			if (func_63() || func_62())
			{
				return 0x00000001;
			}
			break;
		
		case 0x83070B62:
			return func_63();
			break;
		
		case 0x378236E1:
			return func_63();
			break;
		
		case joaat("gargoyle"):
			return func_63();
			break;
		
		case joaat("dominator"):
			return func_63();
			break;
		
		case joaat("dominator2"):
			return func_63();
			break;
		
		case 0x1A861243:
			return func_63();
			break;
		
		case 0x619C1B82:
			return func_63();
			break;
		
		case 0xD2F77E37:
			return func_63();
			break;
		
		case 0xFE5F0722:
			return func_63();
			break;
		
		case 0x93F09558:
			return func_63();
			break;
		
		case 0xAE12C99C:
			return func_63();
			break;
		
		case 0x3C26BD0C:
		case 0x7F81A829:
		case 0x27D79225:
		case 0x8526E2F5:
		case 0x256E92BA:
		case 0x669EB40A:
		case 0xBBA2A2F7:
		case 0xD039510B:
		case 0xD6FB0F30:
		case 0x20314B42:
		case 0x8D45DF49:
		case 0x8F49AE28:
		case 0x9B065C9E:
		case 0x163F8520:
		case 0x5BA0FF1E:
		case 0x32174AFC:
		case 0x5BEB3CE0:
		case 0x287FA449:
		case 0xAE0A3D4F:
		case 0xBE11EFC6:
		case 0x9804F4C7:
		case 0x798682A2:
		case 0x8644331A:
		case 0x67D52852:
		case 0x49E25BA1:
		case 0xD556917C:
		case 0xDD71BFEB:
		case 0x71D3B6F0:
		case 0xB2E046FB:
		case 0xA7DCC35C:
			return func_63();
			break;
		
		case joaat("youga2"):
			if (Global_40001.f_6F6C)
			{
				return func_62();
			}
			break;
		
		case 0x2B0C4DCD:
			if (Global_40001.f_70CA)
			{
				return func_62();
			}
			break;
		
		case joaat("manana"):
			if (Global_40001.f_6F6B)
			{
				return func_62();
			}
			break;
		
		case joaat("peyote"):
			if (Global_40001.f_70C9)
			{
				return func_62();
			}
			break;
		
		case 0x6F946279:
			if (Global_40001.f_70C8)
			{
				return func_62();
			}
			break;
	}
	return 0x00000000;
}

bool func_62()
{
	return unk_0xC146D5FBD23C6954(0x6C3AC5A8);
}

bool func_63()
{
	return unk_0xC146D5FBD23C6954(0x72DE9A30);
}

bool func_64()
{
	return unk_0xC146D5FBD23C6954(0x7B367103);
}

bool func_65()
{
	return unk_0xC146D5FBD23C6954(0xC6F11B25);
}

bool func_66()
{
	return unk_0xC146D5FBD23C6954(0x0C8638BD);
}

bool func_67()
{
	return unk_0xC146D5FBD23C6954(0x8F13E1D8);
}

bool func_68()
{
	return unk_0xC146D5FBD23C6954(0x61322A35);
}

int func_69(int iParam0, int iParam1)
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

int func_70(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_49())
			{
				return func_47(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000005;
			}
		}
	}
	return 0x00000000;
}

int func_71(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_49())
			{
				return func_47(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_72(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_47(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_73(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 0x00000001;
			return 0x00000000;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 0x73920F8E) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	bVar0 = 0x00000000;
	if (func_53(unk_0xD803B885F5E47A62()) && (unk_0xAFB8495D36825275(iParam0) || unk_0xC41A9202669A24C4(iParam0)))
	{
		bVar0 = 0x00000001;
	}
	if ((((((((((((!unk_0x8E39AC3C76C8AA58(iParam0) && !unk_0x7D8B2A8F9EA82DB7(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 0x5993F939) && iParam0 != 0x8FD54EBB) && iParam0 != 0x36A167E0) && iParam0 != 0x11F58A5A) && !bVar0)
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 0x00000002;
		return 0x00000000;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_74(iParam0))
		{
			*uParam2 = 0x00000002;
			return 0x00000000;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 0x00000002;
		}
	}
	return 0x00000001;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_80(iParam0))
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
	func_76(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_76(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_79(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_78(uParam1->f_42))
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
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_77(iVar0 + 1));
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

int func_77(int iParam0)
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

int func_78(int iParam0)
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

void func_79(var uParam0)
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

int func_80(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_95(iParam0, 0x00000000, 0x00000000)) || func_95(iParam0, 0x00000001, 0x00000000)) || func_95(iParam0, 0x00000002, 0x00000000)) || func_94(iParam0) != 0x00000091) || func_93(iParam0)) || func_92(iParam0)) || func_45(iParam0)) || func_91(iParam0)) || !func_81(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_92(iParam0))
		{
		}
		if (func_92(iParam0))
		{
		}
		if (func_95(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_95(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_95(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_94(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_81(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_82(iParam0, 0x00000000))
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

int func_82(int iParam0, bool bParam1)
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
		if (!func_90())
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
		if ((((!func_89() && !func_88()) && !func_87()) && !func_86()) && !func_90())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_87())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_85(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_83(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_83(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_84())
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

int func_84()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_85(int iParam0)
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

int func_86()
{
	return 0x00000000;
}

int func_87()
{
	return 0x00000001;
}

int func_88()
{
	return 0x00000001;
}

int func_89()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_90()
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

int func_91(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_82(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_92(int iParam0)
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

int func_93(int iParam0)
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

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_96(iParam1, iVar0, &sVar1, &iVar2))
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

int func_96(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_97(int iParam0, int iParam1)
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

void func_98(int iParam0)
{
	if (!func_99(*iParam0))
	{
		unk_0xD3421E391490133B(*iParam0, 0x00000005, !Global_1B416.f_2378.f_63.f_3A[0x00000077]);
	}
}

bool func_99(int iParam0)
{
	return unk_0xDD62D560CFE11A27(iParam0, 0x00000005);
}

int func_100(int iParam0, var uParam1, var uParam2)
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
	if (func_69(unk_0x134B62B726CEC8E6(*iParam0), 0x00000001) && unk_0x0ECB5CA5140957AD(*iParam0, 0x00000018) != func_103(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 0x00000018, func_103(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)), 0x00000000);
	}
	func_102(iParam0);
	if (func_101(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 0x00000001);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
	}
	return 0x00000001;
}

int func_101(int iParam0)
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

void func_102(var uParam0)
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

int func_103(int iParam0, int iParam1)
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

int func_104(var uParam0, int iParam1)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else if (Global_1B416.f_4E91.f_105)
	{
		*uParam0 = { Global_1B416.f_4E91.f_10B };
		*iParam1 = Global_1B416.f_4E91.f_10F;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_105(int iParam0, var uParam1, int iParam2)
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

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (iParam0 == 0x00000091 || Global_17755[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000000 || unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == func_107(iParam0, iParam1))
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

int func_107(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_108(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_105(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

bool func_108(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_109(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (func_117(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0x00000000 /*21*/], bParam2) <= fParam1)
			{
				func_110(iVar0);
			}
		}
		iVar0++;
	}
}

void func_110(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_117(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
			if (((((iParam0 == 0x00000018 && func_116(iParam0, 0x00000000)) && Global_12A3E.f_42 == 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] > 0x00000003) && (!func_114(0x00000000, Global_126B1.f_22B[0x00000000 /*21*/].f_C) || !func_114(0x00000001, Global_126B1.f_22B[0x00000000 /*21*/].f_C)))
			{
				func_113(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_111(iParam0, 0x00000000);
		}
	}
}

void func_111(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_116(iParam0, 0x00000000))
		{
			func_112(iParam0, 0x00000001, 0x00000000);
			func_112(iParam0, 0x00000002, 0x00000000);
			func_112(iParam0, 0x00000003, 0x00000000);
			func_112(iParam0, 0x00000004, 0x00000000);
			func_112(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_112(iParam0, 0x00000000, 0x00000000);
	}
}

void func_112(int iParam0, int iParam1, bool bParam2)
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

void func_113(var uParam0, var uParam1)
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

int func_114(int iParam0, int iParam1)
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
	if (iParam0 < 0x00000000 || iParam0 >= func_115(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0x00000000;
	}
	return func_82(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0x00000000);
}

int func_115(var uParam0)
{
	return *uParam0;
}

bool func_116(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

int func_117(var uParam0, int iParam1)
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
			uParam0->f_4 = func_107(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_107(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_107(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_107(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_107(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_107(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_107(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_107(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_107(0x00000002, 0x00000001);
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
			if (func_90())
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
			if (func_90())
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
		if (!func_118(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_118(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_118(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

bool func_118(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_119(vector3 vParam0, float fParam1)
{
	return func_120(&(Global_19AE3.f_B4A), vParam0, fParam1, 0x00000000);
}

int func_120(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_137(uParam0))
	{
		if (func_118(vParam1, 0f, 0f, 0f, 0x00000000))
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
		if (func_136(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_109(vParam1, 5f, 0x00000000);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_C.f_42, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0x00000000, 0x00000000, 0x00000001);
				}
				func_125(iVar0, &(uParam0->f_C), 0x00000000, 0x00000001);
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
							func_106(uParam0->f_B, 0x00000001);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_106(uParam0->f_B, 0x00000002);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0x00000000);
					unk_0x626D5ADA3EFAE431(iVar0, 0x00000000);
					unk_0x44A200C9B6E1CEA6(iVar0, 0x00000001);
					func_97(iVar0, uParam0->f_B);
				}
				else if ((!func_122(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar4 = func_121(iVar0);
					if (iVar4 == 0xFFFFFFFF)
					{
						uParam0->f_A = 0x00000000;
					}
					else
					{
						func_110(iVar4);
					}
				}
				if (((Global_181B8 != 0x0000000D && Global_181B8 != 0x0000000A) && Global_181B8 != 0x0000000B) && Global_181B8 != 0x0000000C)
				{
					if (unk_0x12AB0310C2281427(&(Global_181B8.f_3)) == Global_12A8D)
					{
						if (uParam0->f_C.f_42 == Global_1B416.f_7FE8.f_45[0x00000015 /*78*/].f_42)
						{
							func_111(0x00000018, 0x00000000);
							func_110(0x00000018);
						}
					}
				}
				if (uParam0->f_9 == 0x00000001)
				{
					func_75(iVar0, uParam0->f_B);
				}
				unk_0x71199B01895C6202(uParam0->f_C.f_42);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

int func_121(int iParam0)
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

int func_122(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_124(iParam0, Global_126B1.f_8B[0x00000026], 0x00000000))
			{
				func_110(0x00000026);
				return 0x00000001;
			}
			break;
		
		case 0x73920F8E:
			if (func_124(iParam0, Global_126B1.f_8B[0x0000002B], 0x00000001))
			{
				func_110(0x0000002B);
				return 0x00000001;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar3 = 0x00000000;
			while (iVar3 <= (iVar2 - 0x00000001))
			{
				if (func_124(iParam0, uVar1[iVar3], 0x00000001) && func_123(unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 2136.133f, 4780.563f, 39.9702f, 5f, 0x00000000))
				{
					if ((!bParam2 || func_118(vParam1, 0f, 0f, 0f, 0x00000000)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 0x00000001) < 10f)
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
					func_110(0x0000000E);
					return 0x00000001;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000014]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000014], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x00000014]) == joaat("swift2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x00000014]))
				{
					func_110(0x00000014);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_123(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_124(int iParam0, int iParam1, bool bParam2)
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

void func_125(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (!func_129(iParam0))
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
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_77(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_77(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_77(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_77(iVar1 + 1));
			}
		}
		else if (uParam1->f_42 == 0x1446590A || uParam1->f_42 == 0x8B213907)
		{
			iVar2 = 0x00000001;
			while (iVar2 <= 0x00000009)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_77(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_77(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_42 == 0x58F77553)
		{
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_77(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_77(iVar3));
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
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_77(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_77(iVar4));
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
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000F) || func_128(iParam0)) || (((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000) && uParam1->f_9[0x00000014] > 0x00000000)) && func_127())
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_78(uParam1->f_42))
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
						func_126(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_126(iParam0, uParam1->f_45);
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
			func_100(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_42) && !unk_0xA7082C42B8809BF2(uParam1->f_42))
		{
			iVar5 = 0x00000000;
			while (iVar5 <= 0x0000000B)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_77(iVar5 + 1)))
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

void func_126(int iParam0, int iParam1)
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

bool func_127()
{
	return unk_0xC146D5FBD23C6954(0x9B328228);
}

int func_128(int iParam0)
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

int func_129(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_135(unk_0xD803B885F5E47A62(), 0xFFFFFFFF))
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
	if (func_131(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_130(iParam0) != 0xFFFFFFFF)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_130(int iParam0)
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

int func_131(int iParam0)
{
	if (func_134(iParam0) == 0x000000E9)
	{
		return func_132(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_132(int iParam0)
{
	if (func_133(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_133(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_134(int iParam0)
{
	if (func_133(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_48(iParam0, 0x00000001, 0x00000001))
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

int func_136(var uParam0)
{
	if (func_137(uParam0))
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

int func_137(var uParam0)
{
	if (uParam0->f_C.f_42 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_82(uParam0->f_C.f_42, 0x00000000))
	{
		return 0x00000000;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_123(*uParam0, 1694.62f, 3276.27f, 41.31f, 0x3F000000, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_138()
{
	return func_136(&(Global_19AE3.f_B4A));
}

void func_139()
{
	func_140(&(Global_19AE3.f_B4A));
}

void func_140(var uParam0)
{
	if (func_137(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_C.f_42);
	}
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA7082C42B8809BF2(Global_19AE3.f_B4A.f_C.f_42))
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000000 && unk_0xAFB8495D36825275(Global_19AE3.f_B4A.f_C.f_42))
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000000 && func_36(Global_19AE3.f_B4A.f_C.f_42))
	{
		return 0x00000000;
	}
	if (iParam3 == 0x00000000 && unk_0xC41A9202669A24C4(Global_19AE3.f_B4A.f_C.f_42))
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (!func_142())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_142()
{
	float fVar0;
	
	if (!func_143())
	{
		return 0x00000000;
	}
	if ((unk_0xA7082C42B8809BF2(Global_19AE3.f_B4A.f_C.f_42) || unk_0xC41A9202669A24C4(Global_19AE3.f_B4A.f_C.f_42)) || unk_0xA7D7011F9888A365(Global_19AE3.f_B4A.f_C.f_42))
	{
		return 0x00000000;
	}
	fVar0 = unk_0x8B8E112F7172CF29(Global_19AE3.f_B4A.f_C.f_42);
	if (fVar0 < 37f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_143()
{
	return func_137(&(Global_19AE3.f_B4A));
}

int func_144()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_145()
{
	int iVar0;
	int iVar1;
	int iVar2[89];
	
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iLocal_551 = unk_0x728870EB733D12A1();
		if (func_178(iLocal_551))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_551);
			if (func_36(iVar0))
			{
				return 0x00000000;
			}
			if (((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2"))
			{
				return 0x00000000;
			}
			if (((unk_0x7D8B2A8F9EA82DB7(iVar0) || unk_0xA7082C42B8809BF2(iVar0)) || unk_0xAFB8495D36825275(iVar0)) || unk_0xC41A9202669A24C4(iVar0))
			{
				return 0x00000000;
			}
			iVar2[0x00000000] = joaat("ambulance");
			iVar2[0x00000001] = joaat("benson");
			iVar2[0x00000002] = joaat("biff");
			iVar2[0x00000003] = joaat("bus");
			iVar2[0x00000004] = 0x73920F8E;
			iVar2[0x00000005] = joaat("forklift");
			iVar2[0x00000006] = joaat("mule");
			iVar2[0x00000007] = joaat("mule2");
			iVar2[0x00000008] = joaat("packer");
			iVar2[0x00000009] = joaat("phantom");
			iVar2[0x0000000A] = joaat("mower");
			iVar2[0x0000000B] = joaat("stockade");
			iVar2[0x0000000C] = joaat("squalo");
			iVar2[0x0000000D] = joaat("maverick");
			iVar2[0x0000000E] = joaat("polmav");
			iVar2[0x0000000F] = joaat("airtug");
			iVar2[0x00000010] = joaat("pranger");
			iVar2[0x00000011] = joaat("annihilator");
			iVar2[0x00000012] = joaat("dinghy");
			iVar2[0x00000013] = joaat("police");
			iVar2[0x00000014] = joaat("ripley");
			iVar2[0x00000015] = joaat("trash");
			iVar2[0x00000016] = joaat("burrito");
			iVar2[0x00000017] = joaat("pony");
			iVar2[0x00000018] = joaat("speedo");
			iVar2[0x00000019] = joaat("marquis");
			iVar2[0x0000001A] = joaat("sanchez");
			iVar2[0x0000001B] = joaat("airtug");
			iVar2[0x0000001C] = joaat("taco");
			iVar2[0x0000001D] = joaat("barracks");
			iVar2[0x0000001E] = joaat("romero");
			iVar2[0x0000001F] = joaat("blazer");
			iVar2[0x00000020] = joaat("blazer2");
			iVar2[0x00000021] = joaat("bodhi2");
			iVar2[0x00000022] = joaat("boxville2");
			iVar2[0x00000023] = joaat("bulldozer");
			iVar2[0x00000024] = joaat("caddy");
			iVar2[0x00000025] = joaat("caddy2");
			iVar2[0x00000026] = joaat("camper");
			iVar2[0x00000027] = joaat("tiptruck");
			iVar2[0x00000028] = joaat("tourbus");
			iVar2[0x00000029] = joaat("towtruck");
			iVar2[0x0000002A] = joaat("towtruck2");
			iVar2[0x0000002B] = joaat("tractor");
			iVar2[0x0000002C] = joaat("tractor2");
			iVar2[0x0000002D] = joaat("utillitruck");
			iVar2[0x0000002E] = joaat("utillitruck2");
			iVar2[0x0000002F] = joaat("utillitruck3");
			iVar2[0x00000030] = joaat("ratloader");
			iVar2[0x00000031] = joaat("dloader");
			iVar2[0x00000032] = joaat("docktug");
			iVar2[0x00000033] = joaat("dump");
			iVar2[0x00000034] = joaat("gburrito");
			iVar2[0x00000035] = joaat("handler");
			iVar2[0x00000036] = joaat("hauler");
			iVar2[0x00000037] = joaat("journey");
			iVar2[0x00000038] = joaat("rentalbus");
			iVar2[0x00000039] = joaat("mixer");
			iVar2[0x0000003A] = joaat("rhino");
			iVar2[0x0000003B] = joaat("cutter");
			iVar2[0x0000003C] = joaat("pounder");
			iVar2[0x0000003D] = joaat("tiptruck2");
			iVar2[0x0000003E] = joaat("mixer2");
			iVar2[0x0000003F] = joaat("rubble");
			iVar2[0x00000040] = joaat("scrap");
			iVar2[0x00000041] = joaat("armytanker");
			iVar2[0x00000042] = joaat("barracks2");
			iVar2[0x00000043] = joaat("airbus");
			iVar2[0x00000044] = joaat("coach");
			iVar2[0x00000045] = joaat("pbus");
			iVar2[0x00000046] = joaat("riot");
			iVar2[0x00000047] = joaat("boxville3");
			iVar2[0x00000048] = joaat("stockade3");
			iVar2[0x00000049] = joaat("flatbed");
			iVar2[0x0000004A] = joaat("boxville");
			iVar2[0x0000004B] = joaat("burrito2");
			iVar2[0x0000004C] = joaat("burrito3");
			iVar2[0x0000004D] = joaat("burrito4");
			iVar2[0x0000004E] = joaat("rumpo");
			iVar2[0x0000004F] = joaat("speedo2");
			iVar2[0x00000050] = joaat("blimp");
			iVar2[0x00000051] = joaat("blimp2");
			iVar2[0x00000052] = joaat("submersible");
			iVar2[0x00000053] = joaat("submersible2");
			iVar2[0x00000054] = joaat("blazer3");
			iVar2[0x00000055] = joaat("pony2");
			iVar2[0x00000056] = joaat("rumpo2");
			iVar2[0x00000057] = joaat("taxi");
			iVar2[0x00000058] = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 0x00000000;
				}
				iVar1++;
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_146(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_147(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		if (func_178(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
			{
				if (func_10(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000))
					{
						unk_0x046C362CF15F1935(iParam0);
						return;
					}
				}
				unk_0xA954465BA6FDEFE2(iParam0);
			}
		}
		else
		{
			if (func_10(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000))
				{
					unk_0x046C362CF15F1935(iParam0);
					return;
				}
			}
			unk_0xA954465BA6FDEFE2(iParam0);
		}
	}
}

void func_148(int iParam0, bool bParam1)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if (!unk_0xD0BB2359EC70FC37())
		{
			unk_0x53491B90E4FD0E56(iParam0);
			if (bParam1)
			{
				while (!unk_0x757EF87A33649210())
				{
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
	}
}

int func_149(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
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
			if (func_166(iParam5, 0x00000004))
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
			func_165(sParam3);
			unk_0x3CAEA85DA607305E(0x00000064);
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7A8BB56B212464AC();
			if (func_166(iParam5, 0x00000020))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 0x00000001;
				}
			}
			if (!func_166(iParam5, 0x00000001))
			{
				unk_0x5EEBDFEE72949D59(0x00000000);
			}
			func_164(&(uParam1->f_A), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			func_163(&(uParam1->f_A), "IB_RETRY", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
			func_163(&(uParam1->f_A), "FE_HLP16", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
			if (func_166(iParam5, 0x00000004))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ScreenFlash", "MissionFailedSounds", 0x00000001);
			}
			if (func_166(iParam5, 0x00000008))
			{
				switch (func_167())
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
			if (!func_162(&(uParam1->f_1)))
			{
				func_161(&(uParam1->f_1));
			}
			if (func_166(iParam5, 0x00000002))
			{
				if (!func_162(&(uParam1->f_4)))
				{
					func_161(&(uParam1->f_4));
				}
			}
			*uParam1 = 0x00000002;
			break;
		
		case 0x00000002:
			unk_0xBD706C594F6DCD4A();
			if (func_166(iParam5, 0x00000020))
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
			func_159(uParam0, 0x00000000, 0x00000000);
			if (!func_166(iParam5, 0x00000010) && (func_157(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x757EF87A33649210()))
			{
				func_151(&(uParam1->f_A), 0x43480000, iParam6, bParam7, 0x00000001, 0x3F800000);
				unk_0x5D80F91A16C40CDE();
				if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
				{
					uParam1->f_8A = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_166(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_150(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_166(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_150(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			if (func_166(iParam5, 0x00000002))
			{
				if (func_157(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_166(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_150(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			func_159(uParam0, 0x00000000, 0x00000000);
			unk_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_8A || !((unk_0x7F8A39872A07D2CE("stunt_plane_races", unk_0xBB0808A181D4745C()) || unk_0x7F8A39872A07D2CE("pilot_school", unk_0xBB0808A181D4745C())) || (unk_0x7F8A39872A07D2CE("bj", unk_0xBB0808A181D4745C()) && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))))
			{
				unk_0x82E51BCA72537B6C(0x000009C4);
			}
			if (func_166(iParam5, 0x00000040) && uParam1->f_8A)
			{
				unk_0x53491B90E4FD0E56(0x000001F4);
			}
			func_3(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(0x00000000);
			}
			*uParam1 = 0x00000004;
			break;
		
		case 0x00000004:
			if (func_157(&(uParam1->f_4)) <= 0.1f)
			{
				func_159(uParam0, 0x00000000, 0x00000000);
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

void func_150(int iParam0)
{
	if (*iParam0 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
	iParam0->f_1 = 0x00000000;
	iParam0->f_7B = 0x00000000;
}

void func_151(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (!func_156(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_166(uParam0->f_1, 0x00000100) || (func_166(uParam0->f_1, 0x00002000) && unk_0xB8E3620B82AD47D7(0x00000002)))
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
			unk_0x1200CC973A2399C8(func_166(uParam0->f_1, 0x00001000));
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
							func_155(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_165(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_166(uParam0->f_1, 0x00001000))
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
		fVar8 = func_154(bParam4, func_154(func_166(uParam0->f_1, 0x00000020), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_153(&(uParam0->f_1), 0x00000100);
		func_152(&(uParam0->f_1), 0x00000080);
	}
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_154(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_155(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_156(var uParam0)
{
	if (*uParam0 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_153(&(uParam0->f_1), 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_157(var uParam0)
{
	if (func_162(uParam0))
	{
		if (func_158(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_158(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

int func_159(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_162(&(uParam0->f_2)))
	{
		func_3(&(uParam0->f_2));
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
	if (func_157(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_160(&(uParam0->f_2));
		return 0x00000000;
	}
	return 0x00000001;
}

void func_160(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

void func_161(int iParam0)
{
	if (!func_162(iParam0))
	{
		func_3(iParam0);
	}
}

bool func_162(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

int func_163(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_164(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0x00000000)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0x00000000;
	uParam0->f_7B = 0x00000000;
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 0x00000020);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_153(&(uParam0->f_1), 0x00000001);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 0x00000001);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_153(&(uParam0->f_1), 0x00001000);
		}
	}
	if (bParam4)
	{
		func_153(&(uParam0->f_1), 0x00002000);
	}
}

void func_165(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_166(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_167()
{
	func_168();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_168()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_171(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_170(unk_0x16F2683693E537C9());
			if (func_108(iVar0) && (!func_169(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_108(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_169(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_171(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_171(int iParam0)
{
	if (func_108(iParam0))
	{
		return func_172(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_172(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_173(int iParam0)
{
	if (func_177())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_176())
		{
			func_174(0x00000001, 0x00000001);
		}
		else
		{
			func_174(0x00000000, 0x00000000);
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
	if (!func_21())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_174(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_175(0x00000000))
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

int func_175(int iParam0)
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

bool func_176()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_177()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_178(int iParam0)
{
	if (func_10(iParam0))
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

void func_179(int iParam0)
{
	int iVar0;
	
	func_180();
	if (iParam0 == 0x00000001 && unk_0xE4EDC4B0E92C078B(vLocal_18.y))
	{
		unk_0x142CC44DB769B57E(&(vLocal_18.f_1));
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= (Local_532.f_F9 - 0x00000001))
	{
		func_146(&(Local_536[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

void func_180()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_543))
	{
		unk_0x142CC44DB769B57E(&iLocal_543);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_544))
	{
		unk_0x142CC44DB769B57E(&iLocal_544);
	}
	if (iLocal_545 != 0x00000000)
	{
		unk_0xE223EB8FE6F8CC15(iLocal_545);
	}
}

void func_181()
{
	Global_4CD7 = 0x00000000;
	func_182();
}

void func_182()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_183()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_184()
{
	int iVar0;
	
	unk_0xF3D5CA5E09CE41C7();
	unk_0xD60411959D5D930B(0f);
	switch (iLocal_525)
	{
		case 0x00000000:
			unk_0x3FC8DBCC154CA56B();
			if (func_9(iLocal_766) && func_9(unk_0x16F2683693E537C9()))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_766, 0xFFFFFFFF, 0x00000802, 0x00000004);
			}
			SYSTEM::WAIT(0x00000000);
			unk_0x3FC8DBCC154CA56B();
			func_237(&Local_576, 0x00000001, 0x00000000);
			func_224(&uLocal_1115, &(uLocal_751[0x00000000]));
			func_150(&(Local_576.f_E));
			iLocal_955 = unk_0x1C0640BA9A7327B3() + 2500;
			iLocal_1113 = 0x00000001;
			iLocal_1114 = 0x00000001;
			iLocal_525 = 0x00000001;
			break;
		
		case 0x00000001:
			unk_0x3FC8DBCC154CA56B();
			if (func_223(&Local_576))
			{
				iLocal_525 = 0x00000002;
			}
			if (func_9(iLocal_766))
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_955)
				{
					func_222();
				}
				if ((iLocal_1114 && unk_0xB4ECF989E2C1DAC8(iLocal_766, sLocal_758, "_grid_girl_end", 0x00000003)) && unk_0x8CA9406E01C7EE58(iLocal_766, sLocal_758, "_grid_girl_end") > 0.165f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "KISS", iLocal_766, "ROAD_RACE_SOUNDSET", 0x00000000, 0x00000000);
					iLocal_1114 = 0x00000000;
				}
			}
			break;
		
		case 0x00000002:
			func_186();
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			if (func_9(unk_0x16F2683693E537C9()))
			{
				unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
			}
			func_185(&Local_576);
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				if (unk_0x9F4FE516EAACCFC5(Local_576.f_5[iVar0]))
				{
					unk_0x9A8DDC7C522F5BF5(Local_576.f_5[iVar0], 0x00000000);
				}
				iVar0++;
			}
			if (Local_530.f_1 == 0x00000003)
			{
				func_569(0x00000000);
			}
			else
			{
				func_569(0x00000001);
			}
			break;
	}
}

void func_185(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_5[0x00000002]))
	{
		*uParam0 = 0x00000000;
		unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
	}
}

void func_186()
{
	float fVar0;
	
	if (Local_530.f_1 != 0x00000003)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_530.f_3);
		if (Local_531.f_B == 0x00000001)
		{
			fVar0 = (fVar0 * 4.5f);
			func_187(0x00000001, 0x00000001, SYSTEM::ROUND(fVar0), 0x00000000, 0x00000000);
		}
		else if (Local_531.f_B == 0x00000002)
		{
			func_187(0x00000001, 0x00000001, SYSTEM::ROUND(fVar0), 0x00000000, 0x00000000);
		}
		else if (Local_531.f_B == 0x00000003)
		{
			fVar0 = (fVar0 * 0.5f);
			func_187(0x00000001, 0x00000001, SYSTEM::ROUND(fVar0), 0x00000000, 0x00000000);
		}
	}
}

void func_187(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_221(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_221(iParam0) == 0x00000004)
	{
		return;
	}
	func_188(func_221(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_188(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_220();
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
					func_219(0x00000063, 0x00000001);
					func_218(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_218(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_218(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_203(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_198(0x00000005))
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
							func_218(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_218(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_218(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_198(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_218(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_218(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_218(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_218(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_218(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_218(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_218(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_218(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_218(joaat("sp2_money_spent_property"), iParam3);
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
									func_218(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_218(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_218(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_218(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_218(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_218(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_198(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_218(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_218(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_218(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_218(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_218(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_218(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_197(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_219(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_219(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_219(0x00000060, iParam3);
					break;
			}
			func_219(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_191(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_191(iVar1);
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
					func_218(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_218(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_218(joaat("sp2_total_cash_earned"), iParam3);
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
	func_190(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_189(0x00000000);
	}
	return 0x00000001;
}

void func_189(bool bParam0)
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

void func_190(int iParam0)
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

void func_191(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_196(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_196(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_196(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_196(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_194(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_194(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_194(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_194(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_194(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_194(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_193() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_193() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_192(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_192(int iParam0)
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

int func_193()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_17();
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

int func_196(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_17();
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

void func_197(int iParam0)
{
	func_219(0x0000005D, iParam0);
	func_219(0x0000001D, iParam0);
	func_219(0x0000001E, iParam0);
}

bool func_198(int iParam0)
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
		return func_200(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_200(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_200(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_200(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_199(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_199(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_199(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_199(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_199(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_199(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_193() /*10930*/].f_181E.f_A, iParam0);
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_195(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_200(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_17();
	}
	iVar1 = func_202(iParam0, iParam1);
	uVar2 = func_201(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_201(int iParam0)
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

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_17();
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

int func_203(bool bParam0)
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
		func_217(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_204(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_204(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_205(iParam0, iParam1);
}

int func_205(int iParam0, int iParam1)
{
	if (func_169(0x0000000E) && !func_216(iParam0))
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
	if (func_215(&Global_4127F1))
	{
		if (func_213(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_206(&Global_4127F1, iParam0))
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

int func_206(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_169(0x0000000E) && !func_216(iParam1))
	{
		return 0x00000000;
	}
	if (func_213(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_212(uParam0) < 0f)
	{
		func_211(uParam0, 0x00000000);
	}
	func_209(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_207(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_207(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_169(0x0000000E) && !func_216(iParam1))
	{
		return 0x00000000;
	}
	if (func_213(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_212(uParam0) < 0f)
	{
		func_211(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_208(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_208(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_209(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_210(uParam0, iVar0);
		iVar0++;
	}
	func_211(uParam0, (Global_4127F0 - 0.5f));
}

void func_210(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_211(var uParam0, float fParam1)
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

float func_212(var uParam0)
{
	return uParam0->f_50;
}

bool func_213(var uParam0, int iParam1)
{
	return func_214(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_214(var uParam0, int iParam1)
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

bool func_215(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_216(int iParam0)
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

int func_217(int iParam0, int iParam1)
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

void func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_219(int iParam0, int iParam1)
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

void func_220()
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

int func_221(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_222()
{
	vector3 vVar0;
	int iVar1;
	
	if (iLocal_1113)
	{
		if (func_9(iLocal_766))
		{
			if (Local_530 == 0x00000000)
			{
				vVar0 = { -193.8895f, -1608.292f, 32.9962f };
			}
			else if (Local_530 == 0x00000001)
			{
				vVar0 = { 315.519f, 334.9548f, 104.469f };
			}
			else if (Local_530 == 0x00000002)
			{
				vVar0 = { -679.8616f, -2360.6f, 12.86522f };
			}
			else if (Local_530 == 0x00000003)
			{
				vVar0 = { 816.6395f, -1170.496f, 27.6677f };
			}
			else if (Local_530 == 0x00000004)
			{
				vVar0 = { -997.5678f, -1153.997f, 1.15735f };
			}
			else
			{
				vVar0 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iLocal_766, 0x00000001), unk_0xD9522BA9E27E1349(iLocal_766), 0f, 5f, 0f) };
			}
			unk_0xDD353D0E9C789D0E(&iVar1);
			unk_0x96167B03C5A77156(0x00000000, vVar0, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			if (Local_530 == 0x00000002)
			{
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING", 0x00000000, 0x00000001);
			}
			else
			{
				unk_0x01E4BB5190DF7317(0x00000000, fLocal_770, 0x00000000);
			}
			unk_0x75ABDC5F81978924(iVar1);
			if (unk_0xB4ECF989E2C1DAC8(iLocal_766, sLocal_758, "_grid_girl_end", 0x00000003))
			{
				unk_0xFB131B855F2FD560(iLocal_766, sLocal_758, "_grid_girl_end", 0xC1000000);
			}
			unk_0xA3BF0AA5A2608191(iLocal_766);
			unk_0x78ADC381772E3D54(iLocal_766, iVar1);
			unk_0xBD453909DC26A85D(iLocal_766, 0xD827C3DB, 0x00000000, 0x00000000, 0x00000001);
			unk_0xF82EA857DA10E0CD(&iVar1);
			iLocal_1113 = 0x00000000;
		}
	}
}

int func_223(var uParam0)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (unk_0x9F4FE516EAACCFC5(uParam0->f_5[0x00000004]))
			{
				if (!unk_0xFA06B985B30FB0FC(uParam0->f_5[0x00000004]))
				{
					uParam0->f_5[0x00000005] = unk_0xAE06CCC36C49929C(0x019286A9, uParam0->f_8A[0x00000005 /*3*/], uParam0->f_A3[0x00000005 /*3*/], 25.3742f, 0x00000000, 0x00000002);
					unk_0xF1E4C781086FABC1(uParam0->f_5[0x00000005], uParam0->f_5[0x00000004], 0x00001194, 0x00000000, 0x00000001);
					unk_0x91F5B0244AAE6222(uParam0->f_5[0x00000005], "HAND_SHAKE", 0.3f);
					unk_0x9A8DDC7C522F5BF5(uParam0->f_5[0x00000004], 0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
				}
			}
			else if (unk_0x9F4FE516EAACCFC5(uParam0->f_5[0x00000005]))
			{
				if (!unk_0xFA06B985B30FB0FC(uParam0->f_5[0x00000005]))
				{
					uParam0->f_5[0x00000006] = unk_0xAE06CCC36C49929C(0x019286A9, uParam0->f_8A[0x00000006 /*3*/], uParam0->f_A3[0x00000006 /*3*/], 50f, 0x00000000, 0x00000002);
					uParam0->f_5[0x00000007] = unk_0xAE06CCC36C49929C(0x019286A9, uParam0->f_8A[0x00000007 /*3*/], uParam0->f_A3[0x00000007 /*3*/], 50f, 0x00000000, 0x00000002);
					unk_0xE3BB8E05FCEB3FBE(uParam0->f_5[0x00000006], 0x00000001);
					unk_0xF1E4C781086FABC1(uParam0->f_5[0x00000007], uParam0->f_5[0x00000006], 0x000007D0, 0x00000003, 0x00000001);
					unk_0x91F5B0244AAE6222(uParam0->f_5[0x00000007], "HAND_SHAKE", 0.3f);
					unk_0x9A8DDC7C522F5BF5(uParam0->f_5[0x00000005], 0x00000000);
				}
			}
			else if (unk_0x9F4FE516EAACCFC5(uParam0->f_5[0x00000007]))
			{
				if (!unk_0xFA06B985B30FB0FC(uParam0->f_5[0x00000007]))
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

void func_224(var uParam0, var uParam1)
{
	if (unk_0x1963B11DE70153E0() && unk_0x8BB6DE13A9F3105E())
	{
		func_236(*uParam1);
		func_228(&Local_113, 0x00000000);
	}
	func_225(uParam0);
}

void func_225(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_227(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_226(0x00000000);
}

void func_226(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_227(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_228(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0x00000000)
	{
		func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if ((((*uParam0)[0x00000000] != 0x00000000 || (*uParam0)[0x00000001] != 0x00000000) || (*uParam0)[0x00000002] != 0x00000000) || iParam1 == 0x00000001)
	{
		func_234(uParam0);
		func_233(uParam0);
		func_232(&Global_1C126B);
	}
	if (Global_1C0180.f_A94 != 0x00000000 || Global_1C0180.f_C70)
	{
		func_230();
	}
	if (unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		unk_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (unk_0x58424C49F8924842())
	{
		func_229(&(Global_1C171C.f_31));
	}
	Global_26B66F.f_F7F = 0x00000000;
}

void func_229(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_230()
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
	func_231(&(Global_1C0180.f_ADC));
	func_229(&(Global_1C0180.f_B07));
	Global_1C0180.f_B09 = 0xFFFFFFFF;
	Global_1C0180.f_B0A = 0x00000000;
	func_229(&(Global_1C0180.f_B0B));
	Global_1C0180.f_B0D = 0x00000000;
	func_229(&(Global_1C0180.f_B0E));
	Global_1C0180.f_B10 = 0x00000000;
	Global_1C0180.f_ADC.f_1C = 0x00000000;
	Global_1C0180.f_ADC.f_1B = 0x00000000;
	Global_1C0180.f_C70 = 0x00000000;
}

void func_231(var uParam0)
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

void func_232(var uParam0)
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
	func_229(&(Global_1C0180.f_B0E));
}

void func_233(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0x00000000;
	uParam0->f_F6.f_1 = 0xFFFFFFFF;
	uParam0->f_F6.f_2 = 0x00000000;
	func_229(&(uParam0->f_F6.f_3));
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

void func_234(var uParam0)
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

void func_235(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0x00000000;
	*uParam1 = 0x00000000;
	Global_1C0000 = 0x00000000;
	func_229(&(Global_1C0000.f_1));
	unk_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, 0xFFFFFFFF);
}

void func_236(var uParam0)
{
	unk_0xE17FDF9E3068281B(&uParam0);
}

void func_237(var uParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_5[0x00000002]))
	{
		*uParam0 = 0x00000000;
		unk_0x9A1335ECD7BD117F("MinigameTransitionIn");
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
		if (bParam1)
		{
			uParam0->f_5[0x00000003] = unk_0xAE06CCC36C49929C(0x019286A9, uParam0->f_8A[0x00000003 /*3*/], uParam0->f_A3[0x00000003 /*3*/], 25.3742f, 0x00000000, 0x00000002);
			unk_0xE3BB8E05FCEB3FBE(uParam0->f_5[0x00000003], 0x00000001);
			uParam0->f_5[0x00000004] = unk_0xAE06CCC36C49929C(0x019286A9, uParam0->f_8A[0x00000004 /*3*/], uParam0->f_A3[0x00000004 /*3*/], 25.3742f, 0x00000000, 0x00000002);
			unk_0xF1E4C781086FABC1(uParam0->f_5[0x00000004], uParam0->f_5[0x00000003], 0x00000258, 0x00000001, 0x00000001);
			unk_0xDE0127155AF9E64F(uParam0->f_5[0x00000003], 1f);
			unk_0x91F5B0244AAE6222(uParam0->f_5[0x00000003], "HAND_SHAKE", 0.3f);
			unk_0xDE0127155AF9E64F(uParam0->f_5[0x00000004], 1f);
			unk_0x91F5B0244AAE6222(uParam0->f_5[0x00000004], "HAND_SHAKE", 0.3f);
		}
		else
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, -5f, 1f) };
			vVar1 = { unk_0x835730A2D89F6093(unk_0x16F2683693E537C9(), 0x00000002) };
			uParam0->f_5[0x00000003] = unk_0xAE06CCC36C49929C(0x019286A9, vVar0 + Vector(20f, 0f, 0f), vVar1 + Vector(0f, 0f, 55f), 50f, 0x00000000, 0x00000002);
			unk_0xE3BB8E05FCEB3FBE(uParam0->f_5[0x00000003], 0x00000001);
			uParam0->f_5[0x00000004] = unk_0xAE06CCC36C49929C(0x019286A9, vVar0, vVar1, 50f, 0x00000000, 0x00000002);
			unk_0xF1E4C781086FABC1(uParam0->f_5[0x00000004], uParam0->f_5[0x00000003], 0x00000258, 0x00000001, 0x00000001);
			unk_0xDE0127155AF9E64F(uParam0->f_5[0x00000003], 1f);
			unk_0xDE0127155AF9E64F(uParam0->f_5[0x00000004], 1f);
			unk_0x9A8DDC7C522F5BF5(uParam0->f_5[0x00000002], 0x00000000);
			iParam2 = iParam2;
		}
		unk_0x82A772610883F395("MinigameTransitionOut", 0x00000000, 0x00000000);
	}
}

void func_238()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
	unk_0xF3D5CA5E09CE41C7();
	unk_0xD60411959D5D930B(0f);
	switch (iLocal_525)
	{
		case 0x00000000:
			func_403(joaat("a_f_y_genhot_01"));
			unk_0x3F423BF5B8125A50(sLocal_758);
			iLocal_752 = (unk_0x1C0640BA9A7327B3() - Local_531.f_5);
			iLocal_753 = 0xFFFFFFFF;
			iLocal_958 = unk_0x1C0640BA9A7327B3() + 1000;
			iLocal_1107 = 0x00000001;
			iLocal_1108 = 0x00000000;
			iLocal_1109 = 0x00000000;
			iLocal_1111 = 0x00000001;
			if (Local_532.f_F7 < 0x00000002)
			{
				Local_531.f_A = iLocal_752;
			}
			unk_0xA37A90C62806D848(0x00000001);
			iLocal_513 = 0x00000001;
			func_392(Local_530);
			func_389(&Local_576);
			bLocal_1110 = unk_0x1963B11DE70153E0();
			func_384(&uLocal_1115, Local_530, Local_531.f_B, Local_532.f_F9 + 1, iLocal_752);
			if (func_178(vLocal_18.x))
			{
				unk_0x7B4256FB57F5E15D(vLocal_18.x, 0x00000000);
			}
			iVar0 = unk_0xA30EC016B12C03E4();
			if (unk_0xE1DBBD6CE209517C(iVar0))
			{
				unk_0x98E4DC66A651C9FA(iVar0, 0x00000000, 0x00000000);
			}
			if (Local_530.f_1 == 0x00000003)
			{
				unk_0x11E0F00830F70E15((unk_0x1C0640BA9A7327B3() - iLocal_956), 0x00000007, Local_530);
			}
			else
			{
				unk_0x11E0F00830F70E15((unk_0x1C0640BA9A7327B3() - iLocal_956), 0x00000008, Local_530);
				fVar1 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
				fVar2 = func_383(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_532[0x00000000 /*3*/]);
				fVar3 = (fVar1 - fVar2);
				if (fVar3 < 20f && fVar3 > -20f)
				{
					unk_0xE9362E4D600DD12A(unk_0x16F2683693E537C9(), vLocal_18.x, Local_532[0x00000000 /*3*/], 25f, 0x00000001, unk_0x134B62B726CEC8E6(vLocal_18.x), 0x010C0024, 3f, 5f);
				}
			}
			iLocal_525 = 0x00000001;
			break;
		
		case 0x00000001:
			unk_0x3FC8DBCC154CA56B();
			func_392(Local_530);
			if (unk_0x91E3F625EF57450D(0x00000002))
			{
				unk_0x5D80F91A16C40CDE();
			}
			if (iLocal_546 != 0x00000000)
			{
				if (unk_0x9F4FE516EAACCFC5(Local_576.f_5[0x00000000]))
				{
					unk_0xE223EB8FE6F8CC15(iLocal_546);
					iLocal_546 = 0x00000000;
				}
			}
			if (func_178(vLocal_18.x))
			{
				if (func_381(&vLocal_18, &Local_576, Local_530))
				{
					if (func_368())
					{
						if (Local_530.f_1 == 0x00000003 && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
						{
							if (func_178(vLocal_18.x))
							{
								if (func_366(vLocal_18.x, 20f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000) && unk_0x6AC695D09170F27D(vLocal_18.x))
								{
									unk_0xB078AFA7242F1F7B(vLocal_18.x, 0x00000001);
								}
							}
						}
						if (iLocal_753 < 0x00000000)
						{
							iLocal_753 = unk_0x1C0640BA9A7327B3() + 2000;
							if (Local_530 == 0x00000004 && Local_531.f_B != 0x00000001)
							{
								unk_0xA47B46945FF6DE74(vLocal_18.x, -1051.519f, -1147.217f, 1.0868f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(vLocal_18.x, 303.3337f);
								unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
								unk_0x1AEF7184B203A58D(vLocal_18.x, 0f);
							}
						}
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), vLocal_18.x, 0x00000000) && unk_0xBBA8A868118C90ED(vLocal_18.x, 0xFFFFFFFF, 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), vLocal_18.x, 0xFFFFFFFF);
						}
						if (Local_530.f_1 == 0x00000003)
						{
							func_365();
						}
						else
						{
							func_32(0x00000001);
						}
						if (Local_576 == 0x00000003)
						{
							func_363(vLocal_18.x);
						}
						if (((unk_0x1963B11DE70153E0() && unk_0x8BB6DE13A9F3105E()) && iLocal_753 > 0x00000000) && unk_0x1C0640BA9A7327B3() > iLocal_753)
						{
							if (iLocal_1108)
							{
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
									func_150(&(Local_576.f_E));
									func_389(&Local_576);
									iLocal_1108 = 0x00000000;
								}
								else if (iLocal_1109)
								{
									if (func_362(&Local_113))
									{
										func_150(&(Local_576.f_E));
										func_164(&(Local_576.f_E), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
										func_163(&(Local_576.f_E), "HUD_INPUT43", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
										func_163(&(Local_576.f_E), "SCLB_PROFILE", 0x00000002, 0x000000D9, 0x00000001, 0x00000001, 0x00000000);
										iLocal_1109 = 0x00000000;
									}
								}
							}
							else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D3))
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
								func_150(&(Local_576.f_E));
								func_164(&(Local_576.f_E), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
								func_163(&(Local_576.f_E), "HUD_INPUT43", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
								if (func_362(&Local_113))
								{
									func_163(&(Local_576.f_E), "SCLB_PROFILE", 0x00000002, 0x000000D9, 0x00000001, 0x00000001, 0x00000000);
									iLocal_1109 = 0x00000000;
								}
								else
								{
									iLocal_1109 = 0x00000001;
								}
								iLocal_1108 = 0x00000001;
							}
						}
						if (iLocal_1111)
						{
							if (Local_531.f_B <= 0x00000001)
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MEDAL_UP", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
							}
							else
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "RACE_PLACED", "HUD_AWARDS", 0x00000001);
							}
							iLocal_1111 = 0x00000000;
						}
						if (iLocal_1108)
						{
							if (unk_0x1963B11DE70153E0())
							{
								func_287(&uLocal_751);
								func_151(&(Local_576.f_E), 0x43480000, 0x00000001, 0x00000000, 0x00000001, 0x3F800000);
							}
							else if (func_275(&iLocal_957, 0x00000000))
							{
								iLocal_957 = 0x00000000;
								func_150(&(Local_576.f_E));
								func_389(&Local_576);
								iLocal_1108 = 0x00000000;
								bLocal_1110 = 0x00000000;
							}
						}
						else
						{
							func_274(&uLocal_1115);
							if (unk_0x1963B11DE70153E0() != bLocal_1110)
							{
								func_150(&(Local_576.f_E));
								func_389(&Local_576);
								bLocal_1110 = unk_0x1963B11DE70153E0();
							}
							if (unk_0x1C0640BA9A7327B3() > iLocal_753)
							{
								func_151(&(Local_576.f_E), 0x43480000, 0x00000001, 0x00000000, 0x00000001, 0x3F800000);
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D7))
								{
									func_273(&uLocal_1115);
									unk_0x98868AF51859FC75(vLocal_18.x, 0x00000001);
									iLocal_525 = 0x00000002;
								}
								else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D8))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
									SYSTEM::WAIT(0x00000000);
									unk_0x3FC8DBCC154CA56B();
									func_224(&uLocal_1115, &(uLocal_751[0x00000000]));
									func_186();
									func_150(&(Local_576.f_E));
									func_270();
									if (func_178(vLocal_18.x))
									{
										unk_0x98868AF51859FC75(vLocal_18.x, 0x00000001);
									}
									if (Local_530.f_1 == 0x00000003)
									{
										if (func_178(vLocal_18.x))
										{
											unk_0xB078AFA7242F1F7B(vLocal_18.x, 0x00000000);
										}
									}
									func_2(0x00000001);
									func_237(&Local_576, 0x00000000, 0x00000000);
								}
							}
						}
					}
				}
				else
				{
					func_368();
					func_266(&uLocal_1115, 0x00000000, 0x00000000);
				}
			}
			if (iLocal_1107)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_958)
				{
					func_392(Local_530);
					iLocal_1107 = 0x00000000;
				}
			}
			break;
		
		case 0x00000002:
			unk_0x3FC8DBCC154CA56B();
			if (func_240(&uLocal_1115, 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000))
			{
				if (Local_530.f_1 == 0x00000003)
				{
					if (func_178(vLocal_18.x))
					{
						unk_0xB078AFA7242F1F7B(vLocal_18.x, 0x00000000);
					}
				}
				if (func_239())
				{
					if (func_9(iLocal_766))
					{
						unk_0xC6EB89C59F2AF6B8(iLocal_766, sLocal_758, "_grid_girl_end", 1000f, -8f, 0x0000157C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_524 = 0x00000004;
					iLocal_525 = 0x00000000;
				}
				else
				{
					func_224(&uLocal_1115, &(uLocal_751[0x00000000]));
					func_150(&(Local_576.f_E));
					func_237(&Local_576, 0x00000000, 0x00000001);
					if (unk_0x9F4FE516EAACCFC5(Local_576.f_5[0x00000004]))
					{
						if (!unk_0xFA06B985B30FB0FC(Local_576.f_5[0x00000004]))
						{
							if (unk_0x9F4FE516EAACCFC5(Local_576.f_5[0x00000003]))
							{
								unk_0xDE0127155AF9E64F(Local_576.f_5[0x00000003], 0f);
							}
							unk_0xDE0127155AF9E64F(Local_576.f_5[0x00000004], 0f);
							SYSTEM::WAIT(0x00000000);
							unk_0x3FC8DBCC154CA56B();
							unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
							iVar4 = 0x00000000;
							iVar4 = 0x00000000;
							while (iVar4 < 0x00000008)
							{
								if (unk_0x9F4FE516EAACCFC5(Local_576.f_5[iVar4]))
								{
									unk_0x9A8DDC7C522F5BF5(Local_576.f_5[iVar4], 0x00000000);
								}
								iVar4++;
							}
							iLocal_524 = 0x00000004;
							iLocal_525 = 0x00000002;
						}
					}
					else
					{
						iLocal_524 = 0x00000004;
						iLocal_525 = 0x00000002;
					}
				}
			}
			break;
	}
}

int func_239()
{
	if (Local_531.f_B == 0x00000001)
	{
		if ((((Local_530 == 0x00000000 || Local_530 == 0x00000001) || Local_530 == 0x00000002) || Local_530 == 0x00000003) || Local_530 == 0x00000004)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_240(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
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
	func_265(0x00000000);
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
		switch (func_170(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
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
		uParam0->f_230 = (uParam0->f_230 + func_264(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_264(25f)));
		if (uParam0->f_38 > 0x00000000)
		{
			uParam0->f_230 = (uParam0->f_230 + func_264((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_264(30f) - func_264(2f)));
		}
	}
	bVar0 = 0x00000001;
	while (bVar0)
	{
		func_226(0x00000001);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_243(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_242(uParam0->f_1E, 0f, 1f);
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
		uParam0->f_223 = func_242(uParam0->f_223, 0f, 1f);
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
		uParam0->f_224 = func_242(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0xB8E3620B82AD47D7(0x00000002))
			{
				if (unk_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_241(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
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
				func_241(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
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
				uParam0->f_22F = func_242((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_242((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_242((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_242((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
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
				func_226(0x00000000);
			}
			return !bVar0;
		}
	}
	func_226(0x00000000);
	return 0x00000001;
}

void func_241(var uParam0, bool bParam1)
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
	func_155(unk_0xF59058FCB716F903(0x00000002, 0x000000D7, 0x00000001));
	func_165("ES_HELP");
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
		func_155(unk_0xF59058FCB716F903(0x00000002, 0x000000D8, 0x00000001));
		func_165("ES_XPAND");
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

float func_242(float fParam0, float fParam1, float fParam2)
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

void func_243(var uParam0, float fParam1, bool bParam2)
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
	fVar1 = (func_263() * 0.25f);
	if (unk_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_165(&(uParam0->f_5));
				if (uParam0->f_22C == 0x00000004)
				{
					func_262(&(uParam0->f_D));
				}
				else
				{
					func_165(&(uParam0->f_D));
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
		func_261();
		unk_0x6567AE843FADBA94(uParam0->f_1, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_264((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
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
	fVar1 = (0.3f * func_263());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 0x00000004)
	{
		fVar7 = func_260(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x33D480CCE15C991A(0x00000000) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_260(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_263()) / 2.5f);
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
						func_257((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
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
	fVar1 = (fVar1 - func_264(6f));
	fVar1 = (fVar1 + (func_264(30f) - func_264((2f * 2f))));
	fVar11 = (fVar2 - func_264((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_242((fVar11 / (0.6f * func_264(25f))), 0f, 1f);
		func_261();
		unk_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_264((2f - 0.5f)) - 0.001388889f)), fVar6, func_256(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_264((2f * 0.3f)));
	if (uParam0->f_38 > 0x00000000)
	{
		fVar1 = (fVar1 + func_264((25f * 0.2f)));
	}
	iVar17 = 0x00000000;
	iVar17 = 0x00000000;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_263())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_242((fVar11 / (0.8f * func_264(25f))), 0f, 1f);
			func_253(uParam0, iVar17, (fVar1 + func_264(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_264(25f));
		if (uParam0->f_22C == 0x00000004)
		{
			if (iVar17 == (uParam0->f_240 - 0x00000001))
			{
				fVar1 = (fVar1 + func_264((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_263())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_264(2f));
					fVar12 = func_242((fVar11 / (0.6f * func_264(25f))), 0f, 1f);
					func_261();
					unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_264((2f * 0.5f))), fVar6, func_256(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
					fVar1 = (fVar1 + func_264((2f * 0.3f)));
					if (uParam0->f_38 > 0x00000000)
					{
						fVar1 = (fVar1 + func_264((25f * 0.2f)));
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
		fVar1 = (fVar1 + func_264((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_263())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_264(2f));
			fVar12 = func_242((fVar11 / (0.6f * func_264(25f))), 0f, 1f);
			func_261();
			unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_264((2f * 0.5f))), fVar6, func_256(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_264((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_263())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_242((fVar11 / (0.8f * func_264(25f))), 0f, 1f);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_246(0x00000007, 0x00000000, 0x00000001, &fVar18, &fVar19, 0x00000000);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB3260A60545D3F11() == 0x00000000)
			{
				fVar20 = (fVar9 + ((0.119f / func_263()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_263()) / 2.5f));
				if (uParam0->f_22C == 0x00000001)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_263()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_263()) / 2.5f));
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
			func_245(&(uParam0->f_226), fVar20, (fVar1 + func_264((2f * 2f))), 0x00000000, 0x00000000, 0x00000000);
			unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
			unk_0xEEF67251E263A87F(0x00000002);
			unk_0xD3539A877EC25E86(1f, 0.4f);
			unk_0xAAE406A7DA443B93(0x00000000);
			func_261();
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
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_264((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000001:
					unk_0x070005E852D4C0E9("FO_TWO_NUM");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0x6D99DF8263D35CE5(uParam0->f_22B);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_264((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0x070005E852D4C0E9("MTPHPER_XPNO");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_264((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000005:
					unk_0x070005E852D4C0E9("ESDOLLA");
					unk_0xCBD015EC7E4226BC(uParam0->f_22A, 0x00000001);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_264((2f * 2f))), 0x00000000);
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
				fVar32 = ((fVar21 + func_244(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_264(10f)) + fVar29);
				if (uParam0->f_22C == 0xFFFFFFFF)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x539E86AE011A8B38(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0x00000000);
			}
			fVar1 = (fVar1 + (func_264(30f) - 2f));
		}
	}
}

float func_244(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_245(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAAE406A7DA443B93(iParam3);
	unk_0x7BBAC160090910C3(iParam5);
	func_261();
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

int func_246(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_252(iParam0), 64);
	StringCopy(&cVar1, func_249(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_248())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_248())
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
		vVar7.x = (vVar7.x * (func_247(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_247(iParam0) / fVar4));
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

float func_247(int iParam0)
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

int func_248()
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

var func_249(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_251(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_250(&uVar1);
			}
		}
		else
		{
			return func_250(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_250(var uParam0)
{
	return uParam0;
}

struct<13> func_251(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_252(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_251(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_250(&uVar0);
		}
		else
		{
			return func_250(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_253(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
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
	unk_0xD3539A877EC25E86(1f, func_255(14f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7BBAC160090910C3(0x00000000);
	func_261();
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
			func_246(0x00000007, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_249(0x00000007, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_264(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000002:
			func_246(0x00000005, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_249(0x00000005, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_264(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000003:
			func_246(0x00000006, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_249(0x00000006, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_264(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
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
	unk_0xD3539A877EC25E86(1f, func_255(14f));
	if (uParam0->f_39[iParam1] == 0x00000005 || uParam0->f_39[iParam1] == 0x00000004)
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	func_254(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_254(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
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
	func_261();
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
			unk_0xD3539A877EC25E86(1f, func_255(18f));
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
			unk_0xD3539A877EC25E86(1f, func_255(14f));
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
			unk_0xD3539A877EC25E86(1f, func_255(18f));
		
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
			unk_0xD3539A877EC25E86(1f, func_255(14f));
		}
		else
		{
			unk_0xE0026608C37C7C41(fParam2, fParam3, 0x00000000);
		}
	}
}

float func_255(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_256(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_257(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_259(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_258(0x00000007, iVar0);
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
		Global_150976.f_11D2.f_165[iVar0] = bParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_258(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_259(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

float func_260(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return (unk_0x79E367314AFBB5CA(0x00000001) / 2f);
}

void func_261()
{
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		unk_0xD9ACBBA59FD5A09E(0x00000007);
	}
	unk_0x5DD950F92F816F03(0x00000000);
}

void func_262(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_263()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_264(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_265(int iParam0)
{
	if (func_177())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_175(0x00000000))
		{
			func_173(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

int func_266(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_C = iParam2;
	func_269(uParam0);
	func_268(uParam0);
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
			func_267(uParam0);
		}
		else if (uParam0->f_38 != 0x00000000)
		{
			func_241(uParam0, 0x00000001);
		}
		else
		{
			func_241(uParam0, 0x00000000);
		}
	}
	Global_12C53 = 0x00000001;
	return 0x00000001;
}

void func_267(var uParam0)
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
	func_155(unk_0xF59058FCB716F903(0x00000002, 0x000000BC, 0x00000001));
	func_165("ES_HELP_TU");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000001);
	func_155(unk_0xF59058FCB716F903(0x00000002, 0x000000BB, 0x00000001));
	func_165("ES_HELP_TD");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000000);
	func_155(unk_0xF59058FCB716F903(0x00000002, 0x000000CA, 0x00000001));
	func_165("ES_HELP_AB");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_268(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xEEF67251E263A87F(0x00000000);
	unk_0xD3539A877EC25E86(1f, func_255(16f));
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

void func_269(var uParam0)
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

void func_270()
{
	struct<68> Var0;
	
	Global_1C0005 = 0x00000000;
	Global_1C0005.f_1 = 0x00000000;
	Global_1C0005.f_2 = 0x00000000;
	Global_1C0005.f_3 = 0x00000000;
	Global_1C0005.f_4 = 0x00000000;
	func_272(&(Global_1C0005.f_49));
	func_272(&(Global_1C0005.f_8E));
	func_272(&(Global_1C0005.f_D3));
	func_272(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_271(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = 0xFFFFFFFF;
	Global_1C017C = 0x00000000;
	Global_1C017D = 0x00000000;
	Var0.f_2.f_1 = 0x00000004;
	Global_1C0005.f_5 = { Var0 };
}

void func_271(var uParam0)
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

void func_272(var uParam0)
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

void func_273(var uParam0)
{
	uParam0->f_232 = 0x00000000;
	uParam0->f_231 = 0x00000000;
	uParam0->f_22E = uParam0->f_23C + 500;
}

void func_274(var uParam0)
{
	func_240(uParam0, 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
}

int func_275(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0x00000002;
	if (Global_1C171C.f_2 + 5 < unk_0xF4CCC8CB6DE7F1AE() && Global_1C171C.f_2 > 0x00000000)
	{
		func_229(&Global_1C171C);
		func_229(&(Global_1C171C.f_31));
		*iParam0 = 0x00000000;
		Global_1C171C.f_2 = 0x00000000;
		func_286(0x00000000);
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
	if ((unk_0x33A494591F2C1975() && (((iVar1 == 0x00000004 || iVar1 == 0x00000002) || iVar1 == 0x00000001) || iVar1 == 0x00000005)) || (!func_284() && unk_0x58424C49F8924842()))
	{
		if (unk_0xACED3FBF20B322FA())
		{
			func_281(&(Global_1C171C.f_3), func_283(&(Global_1C171C.f_3)));
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004))
			{
				unk_0x5D96D8530B3D0904(iParam0, 0x00000004);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_279(&(Global_1C171C.f_3), 0x00000000);
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
			else if (!func_284())
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
				func_229(&(Global_1C171C.f_31));
				func_229(&Global_1C171C);
				*iParam0 = 0x00000000;
				Global_1C171C.f_2 = 0x00000000;
				func_286(0x00000000);
				return 0x00000001;
			}
		}
	}
	else
	{
		func_281(&(Global_1C171C.f_3), func_283(&(Global_1C171C.f_3)));
		if ((func_278(&(Global_1C171C.f_31)) && !func_276(&(Global_1C171C.f_31), 0x000007D0, 0x00000001)) && !unk_0x58424C49F8924842())
		{
			unk_0x5D96D8530B3D0904(iParam0, 0x00000003);
			StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
			func_279(&(Global_1C171C.f_3), 0x00000000);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000003))
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001))
			{
				unk_0xB0A3CB46BE5B746A(0x00000000);
				unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_279(&(Global_1C171C.f_3), 0x00000000);
			}
		}
		if (func_278(&Global_1C171C))
		{
			if (!func_276(&Global_1C171C, 0x00000FA0, 0x00000001))
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
							func_229(&Global_1C171C);
							*iParam0 = 0x00000000;
							Global_1C171C.f_2 = 0x00000000;
							func_286(0x00000000);
							return 0x00000001;
						}
					}
				}
				else
				{
					func_229(&Global_1C171C);
					*iParam0 = 0x00000000;
					Global_1C171C.f_2 = 0x00000000;
					func_286(0x00000000);
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
					func_229(&(Global_1C171C.f_31));
					func_229(&Global_1C171C);
					*iParam0 = 0x00000000;
					Global_1C171C.f_2 = 0x00000000;
					func_286(0x00000000);
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
						func_229(&(Global_1C171C.f_31));
						func_229(&Global_1C171C);
						*iParam0 = 0x00000000;
						Global_1C171C.f_2 = 0x00000000;
						func_286(0x00000000);
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_276(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_277(uParam0, bParam2, 0x00000000);
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

void func_277(var uParam0, bool bParam1, bool bParam2)
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

bool func_278(var uParam0)
{
	return uParam0->f_1;
}

void func_279(var uParam0, bool bParam1)
{
	func_280(uParam0);
	if (bParam1)
	{
		func_286(0x00000000);
	}
	uParam0->f_23 = 0x00000001;
}

void func_280(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_29 = 0x00000001;
	*uParam0 = { Var0 };
}

void func_281(var uParam0, int iParam1)
{
	if (iParam1 == 0x00000001)
	{
		*uParam0 = 0x00000000;
		func_282(uParam0);
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

void func_282(var uParam0)
{
	uParam0->f_23 = 0x00000000;
}

int func_283(var uParam0)
{
	return uParam0->f_23;
}

int func_284()
{
	if (func_285())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_285()
{
	return Global_258DFD;
}

void func_286(bool bParam0)
{
	unk_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		unk_0xA3B57116ADBCDF5F();
	}
}

void func_287(var uParam0)
{
	if (unk_0x1963B11DE70153E0() && unk_0x8BB6DE13A9F3105E())
	{
		func_288(&Local_113, uParam0);
	}
}

void func_288(var uParam0, var uParam1)
{
	if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()) && !unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()))
	{
		unk_0x3584F71E5CA29322(0x00000002);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008F, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000010, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000011, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000F, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000017, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x000000C8, 0x00000001);
	}
	Global_26B66F.f_F7F = 0x00000001;
	Global_193AF0 = 0x00000001;
	func_289(uParam1[0x00000000], uParam0);
}

void func_289(var uParam0, var uParam1)
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
	
	func_361(&(Global_1C171C.f_31), 0x00000001, 0x00000000);
	unk_0xE19C2AAC820D8ED5();
	func_360();
	func_265(0x00000000);
	unk_0x3FC8DBCC154CA56B();
	func_358(0x00000001);
	unk_0x3584F71E5CA29322(0x0000000A);
	func_357(0x00000001);
	func_356(0x00000001);
	if (!func_353())
	{
		if (!unk_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			unk_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000003))
	{
		*uParam0 = func_352();
		unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000003);
	}
	Var10 = { func_251(unk_0xD803B885F5E47A62()) };
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
				func_351(*uParam0, Global_1C0180.f_ADC);
				if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
				{
					if (!func_350(uParam1->f_2C))
					{
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							Var6 = { Global_1C0180.f_ADC.f_9 };
							func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					else if (!Global_1C0180.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C0180.f_ADC.f_1A > 0x00000000)
						{
							func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
						}
					}
					func_348(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
				}
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000004);
				func_347(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
				func_347(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				iVar9 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
				func_347(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000001);
				unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000001);
				func_346(*uParam0);
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
				unk_0xA37A90C62806D848(0x00000001);
			}
			else
			{
				func_346(*uParam0);
			}
		}
		else
		{
			if (Global_1C0180.f_B0D != 0x00000001)
			{
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
				Global_1C0180.f_B0D = 0x00000001;
			}
			if (!func_313(uParam1))
			{
				uParam1->f_F6.f_1 = 0xFFFFFFFF;
				unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000001);
				if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000000))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x7E60D21B163E9D56();
					func_351(*uParam0, Global_1C0180.f_ADC);
					if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_350(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 0x00000001, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						func_348(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
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
							func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000001)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
							func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000002)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
							func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000007);
						func_312(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09 = 0x00000001;
					func_229(&(Global_1C0180.f_B07));
				}
				else if (func_276(&(Global_1C0180.f_B07), 0x0000012C, 0x00000000))
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
							func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000001)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
							func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						else if (iVar0 == 0x00000002)
						{
							iVar9 = 0x00000000;
							unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
							func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
						}
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000007);
						func_312(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09++;
					if (Global_1C0180.f_B09 > 0x00000003)
					{
						Global_1C0180.f_B09 = 0x00000000;
					}
					func_229(&(Global_1C0180.f_B07));
				}
				func_346(*uParam0);
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
					func_351(*uParam0, Global_1C0180.f_ADC);
					if (unk_0xEF07223F00EBE9C9(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_350(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 0x00000001, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0x00000000)
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_349(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 0xFFFFFFFF);
							}
						}
						func_348(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_2A, 0x00000006))
					{
						func_232(&Global_1C126B);
						func_308(uParam1, &Global_1C126B);
						func_307(uParam1, &Global_1C126B);
					}
					iVar3 = 0x00000000;
					uParam1->f_F6.f_2 = 0x00000000;
					if ((Global_1C0180.f_A90[0x00000000] > 0x00000001 || (Global_1C0180.f_A90[0x00000000] > 0x00000000 && Global_1C0180.f_AD7[0x00000000] != 0xFFFFFFFF)) || (((Global_1C0180.f_A90[0x00000000] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_350(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000000] != 0xFFFFFFFF))
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
									func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
									iVar8[0x00000000] = 0x00000001;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 0x00000002)
							{
								if (!iVar8[0x00000001])
								{
									iVar9 = 0x00000000;
									unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
									if ((Global_1C0180.f_A90[0x00000001] < 0x00000001 && Global_1C0180.f_AD7[0x00000001] == 0xFFFFFFFF) && !(((Global_1C0180.f_A90[0x00000001] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_350(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000001] != 0xFFFFFFFF))
									{
										func_347(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
										bVar14 = 0x00000001;
									}
									else
									{
										func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
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
									if ((Global_1C0180.f_A90[0x00000002] < 0x00000002 && Global_1C0180.f_AD7[0x00000002] == 0xFFFFFFFF) && !(((Global_1C0180.f_A90[0x00000002] > 0x00000000 && Global_1C0180.f_ADC.f_1B) && func_350(uParam1->f_2C)) && Global_1C0180.f_AD7[0x00000002] != 0xFFFFFFFF))
									{
										bVar14 = 0x00000001;
									}
									if (bVar14)
									{
										func_347(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
									}
									else
									{
										func_347(*uParam0, &iVar3, iVar9, 0x00000000, 0x00000000);
									}
									iVar8[0x00000002] = 0x00000001;
								}
							}
							if (func_306(Global_1C126B[iVar0 /*100*/].f_20))
							{
								if (func_350(uParam1->f_2C))
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
										if (func_305(&(Global_1C126B[iVar0 /*100*/].f_20), &Var10))
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
									if (func_350(uParam1->f_2C))
									{
										Var6 = { Global_1C126B[iVar0 /*100*/] };
										if (!unk_0xEA6BC48857E0AC4C(&(Global_1C126B[iVar0 /*100*/].f_54)) && !unk_0x7F8A39872A07D2CE(&(Global_1C126B[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C126B[iVar0 /*100*/].f_54), 64);
										}
										func_304(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &Var6, &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_304(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &(Global_1C126B[iVar0 /*100*/]), &(Global_1C126B[iVar0 /*100*/].f_50));
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
												func_298(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], 0x00000000, Global_1C126B[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_298(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], Global_1C126B[iVar0 /*100*/].f_4A, Global_1C126B[iVar0 /*100*/].f_3A);
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
												func_295(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], 0x00000000);
											}
											else
											{
												func_295(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], Global_1C126B[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_294();
									uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 0x00000001)]++;
									if (uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 0x00000001)] == 0x00000002)
									{
										if (Global_1C126B[iVar0 /*100*/].f_3B > 0x00000002)
										{
											unk_0x5D96D8530B3D0904(&iVar9, 0x00000002);
											unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[0x00000000 /*15*/].f_1), 0x00000002);
											func_293(*uParam0, (iVar3 - 0x00000001), iVar9);
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
						func_347(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000005);
						func_347(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
						iVar9 = 0x00000000;
						unk_0x5D96D8530B3D0904(&iVar9, 0x00000006);
						func_347(*uParam0, &iVar3, iVar9, 0x00000001, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&(uParam1->f_2A), 0x00000001);
					unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
					func_346(*uParam0);
					unk_0xA37A90C62806D848(0x00000001);
					if (uParam1->f_F6.f_1 == 0xFFFFFFFF && !bVar4 == 0x00000001)
					{
						if (Global_1C0180.f_A90[0x00000000] > 0x00000001)
						{
							uParam1->f_F6.f_1 = 0x00000000;
							unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 0x00000003);
							func_293(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_346(*uParam0);
					func_290(uParam0, uParam1);
				}
			}
		}
	}
}

void func_290(var uParam0, var uParam1)
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
		func_292(&uVar5, &iVar6, &uVar7, &uVar8, 0x00000000);
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
				func_229(&(uParam1->f_F6.f_3));
				bVar0 = 0x00000001;
			}
		}
		else if (func_291(uParam1, 0x000000BC))
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
				func_229(&(uParam1->f_F6.f_3));
				bVar0 = 0x00000001;
			}
		}
		else if (func_291(uParam1, 0x000000BB))
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
			func_229(&(uParam1->f_F6.f_3));
			bVar0 = 0x00000001;
		}
	}
	else if (func_291(uParam1, 0x000000CC))
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
				func_293(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x5D96D8530B3D0904(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 0x00000003);
			func_293(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			unk_0x0674E58A79778E99(&(uParam1->f_2A), 0x00000002);
		}
		if (func_306(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
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

int func_291(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 0x000000BC || iParam1 == 0x000000BB)
	{
		func_292(&uVar0, &iVar1, &uVar2, &uVar3, 0x00000000);
		if (((!unk_0x06F8112AA79C53D9(0x00000002, iParam1) && !unk_0x7FEE810EE9E768EB(0x00000002, iParam1)) && (iVar1 < 0x0000004B && iVar1 > 0xFFFFFFB5)) || func_276(&(uParam0->f_F6.f_3), 0x000000FA, 0x00000000))
		{
			return 0x00000001;
		}
	}
	else if ((!unk_0x06F8112AA79C53D9(0x00000002, iParam1) && !unk_0x7FEE810EE9E768EB(0x00000002, iParam1)) || func_276(&(uParam0->f_F6.f_3), 0x000000FA, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_292(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_293(int iParam0, int iParam1, int iParam2)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7E60D21B163E9D56();
}

void func_294()
{
	unk_0x7E60D21B163E9D56();
}

void func_295(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
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
						fParam15 = func_297(fParam15);
					}
					else
					{
						fParam15 = func_296(fParam15);
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

float func_296(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_297(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_298(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
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
			if (func_303(iParam15) != 0x00000000)
			{
				unk_0x7ACC3006A87F8B39(func_300(func_303(iParam15), 0x00000000));
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
						iParam15 = SYSTEM::FLOOR(func_297(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_296(SYSTEM::TO_FLOAT(iParam15)));
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
				Var0 = { func_299(iParam15) };
				unk_0x7ACC3006A87F8B39(&Var0);
				unk_0x779B34565F4D71B1();
			}
			break;
		
		case 0x00000000:
			break;
	}
}

struct<4> func_299(int iParam0)
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

char* func_300(int iParam0, bool bParam1)
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
			if (func_302(iParam0, &Var0) != 0xFFFFFFFF)
			{
				if (bParam1)
				{
					return func_301(&(Var0.f_1F));
				}
				else
				{
					return func_301(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_301(var uParam0)
{
	return uParam0;
}

int func_302(int iParam0, var uParam1)
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

int func_303(int iParam0)
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

void func_304(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
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

int func_305(var uParam0, var uParam1)
{
	if (!func_306(*uParam0))
	{
		return 0x00000000;
	}
	if (!func_306(*uParam1))
	{
		return 0x00000000;
	}
	if (unk_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_306(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

void func_307(var uParam0, var uParam1)
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

void func_308(var uParam0, var uParam1)
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
			if (func_311(uParam1, iVar3, &uVar0, 0x00000000))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 0x00000001;
				iVar3++;
				if (iVar3 >= 0x0000000C)
				{
					return;
				}
			}
			if (func_311(uParam1, iVar3, &uVar1, 0x00000001))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 0x00000002;
				iVar3++;
				if (iVar3 >= 0x0000000C)
				{
					return;
				}
			}
			if (func_311(uParam1, iVar3, &uVar2, 0x00000002))
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
		func_309(uParam1);
	}
}

void func_309(var uParam0)
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
	Var3 = { func_251(unk_0xD803B885F5E47A62()) };
	if (unk_0xE4F1C23C6353EC03(Global_1C0180.f_B0A))
	{
		iVar4 = unk_0x9B6FABF659F515A2(Global_1C0180.f_B0A);
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 0x0000000C)
			{
				func_310(&Global_1C11E9);
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
					if (func_305(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
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

void func_310(var uParam0)
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

int func_311(var uParam0, int iParam1, var uParam2, int iParam3)
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
				(uParam0[iParam1 /*100*/])->f_20 = { func_251(unk_0xD803B885F5E47A62()) };
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

void func_312(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x5D96D8530B3D0904(&iParam2, 0x00000007);
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x7ACC3006A87F8B39(sParam3);
	unk_0x0EF1238B8EFD4D04();
	unk_0x7E60D21B163E9D56();
}

int func_313(var uParam0)
{
	if (!Global_1C017C)
	{
		if (!func_278(&(Global_1C0180.f_B0B)))
		{
			func_277(&(Global_1C0180.f_B0B), 0x00000001, 0x00000000);
			return 0x00000000;
		}
		else if (!func_276(&(Global_1C0180.f_B0B), 0x000003E8, 0x00000001))
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
		func_345(uParam0);
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
	if (!func_343(uParam0))
	{
		return 0x00000000;
	}
	if (!func_341(uParam0))
	{
		return 0x00000000;
	}
	if (!func_328(uParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000006))
	{
		func_232(&Global_1C126B);
		func_308(uParam0, &Global_1C126B);
		func_307(uParam0, &Global_1C126B);
		unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000006);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000007))
	{
		if (!func_278(&(Global_1C0180.f_B0E)))
		{
			func_277(&(Global_1C0180.f_B0E), 0x00000001, 0x00000000);
		}
		else if (func_276(&(Global_1C0180.f_B0E), 0x00007530, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000007);
		}
		if (func_325(&Global_1C126B))
		{
		}
		else
		{
			return 0x00000000;
		}
		if (func_322(&Global_1C126B))
		{
		}
		else
		{
			return 0x00000000;
		}
		if (func_317(&Global_1C126B))
		{
			func_314(&Global_1C126B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_2A), 0x00000007);
			func_314(&Global_1C126B);
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_314(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_316(Global_1C0180.f_B0A);
	if (Global_1C0DF1.f_51[iVar2] != 0x00000000)
	{
		func_315(0xFFFFFFFF, iVar2);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		func_310(&Global_1C11E9);
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
			if (func_306((uParam0[iVar0 /*100*/])->f_2D))
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
	Global_1C0DF1.f_57[iVar2 /*3*/] = { func_12(unk_0xD803B885F5E47A62()) };
}

void func_315(int iParam0, int iParam1)
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

int func_316(int iParam0)
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

int func_317(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0x00000000 /*100*/])->f_4C)
	{
		case 0x00000000:
			func_321(uParam0);
			if (unk_0x33A494591F2C1975() && !unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				(uParam0[0x00000000 /*100*/])->f_4C = 0x00000003;
				return 0x00000000;
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				if (func_306((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_320(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177E))
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
			if (func_318(&((uParam0[0x00000001 /*100*/])->f_4C), &(Global_1C177E.f_CE), &Global_1C177E, &(Global_1C177E.f_9D)))
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
					if (func_306((uParam0[iVar0 /*100*/])->f_20) && func_306(Global_1C177E[iVar1 /*13*/]))
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

int func_318(var uParam0, var uParam1, var uParam2, var uParam3)
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
					func_319(&uVar0, uParam3[iVar1 /*4*/]);
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

void func_319(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, sParam1);
}

int func_320(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		if (func_306(*(uParam1[iVar0 /*13*/])))
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

void func_321(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		func_271(&(Global_1C177E[iVar0 /*13*/]));
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

int func_322(var uParam0)
{
	int iVar0;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 0x00000001;
	}
	else if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		if (!func_324(uParam0))
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			if (!func_323(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0x00000000;
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_323(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 0x00000002)
	{
		return 0x00000001;
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (func_306(*uParam1))
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

int func_324(var uParam0)
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
				func_271(&(Global_1C0180.f_BD2[iVar1 /*13*/]));
				if (func_306((uParam0[iVar1 /*100*/])->f_20))
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
					if (func_306((uParam0[iVar1 /*100*/])->f_20))
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

int func_325(var uParam0)
{
	int iVar0;
	
	if (unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			if (!func_327(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C0180.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
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
			if (!func_326(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0x00000000;
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_326(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
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
			if (func_306(Var0))
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

int func_327(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
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
			if (func_306(Var1[0x00000000 /*13*/]))
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

int func_328(var uParam0)
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
	Var12 = { func_251(unk_0xD803B885F5E47A62()) };
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
			if (func_339(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x0000000B, &Var12, func_340(), 0x00000000, 0x00000000, 0x00000000))
			{
				func_338(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
				{
					if (Var1.f_3 > 0x00000000)
					{
						iVar7 = 0x00000000;
						iVar2 = 0x00000000;
						if (func_340())
						{
							iVar7 = 0x00000000;
							while (iVar7 < Var1.f_3)
							{
								unk_0xBC584396476EE48A(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0x00000000)
								{
									if (func_305(&Var0, &Var12) || func_305(&Var0, &(Global_1C0005.f_169)))
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
								func_337(&Var0);
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
								if (func_340() && iVar5 == 0x00000000)
								{
									func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C0180.f_AD7[iVar9] = 0x00000000;
									Global_1C0180.f_A90[iVar9]++;
								}
								if (func_340() && (func_305(&Var0, &Var12) || func_305(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_305(&Var0, &Var12))
									{
										iVar5 = 0x00000000;
										Global_1C0180.f_AD7[iVar9] = 0x00000000;
									}
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 0x00000010);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_335(uParam0->f_2C))
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
									if (func_350(uParam0->f_2C))
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
						if (!func_340())
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
						func_337(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 0x00000001))
						{
							unk_0xBC584396476EE48A(iVar7, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B && Var0.f_60 > 0x00000001)
							{
								if (func_340() && iVar5 == iVar7)
								{
									if (!func_305(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20), &Var12))
									{
										func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_340() && (func_305(&Var0, &Var12) || func_305(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar9] < 0x0000000B)
								{
									if (func_306(Var0) && !func_305(&Var0, &(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20)))
									{
										if (func_305(&Var0, &Var12))
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
										if (func_335(uParam0->f_2C))
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
										if (func_350(uParam0->f_2C))
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
							func_337(&Var0);
							iVar7++;
						}
						unk_0xC4492EA0CF4852F9();
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_340())
							{
								if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
								{
									func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
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
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar9] = 0xFFFFFFFF;
						(*uParam0)[iVar9] = 0x00000002;
					}
				}
				else
				{
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
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
			if (func_330(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, iVar11))
			{
				func_338(&Var1, &(uParam0->f_2C));
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
								if (func_340() && (func_305(&Var0, &Var12) || func_305(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0x00000000 || bVar10)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/]), {Var0.f_D}, 0x00000010);
									Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_3B = Var0.f_60;
									if (func_335(uParam0->f_2C))
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
									if (func_350(uParam0->f_2C))
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
									if (func_335(uParam0->f_2C))
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
									if (func_350(uParam0->f_2C))
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
							func_337(&Var0);
							iVar2++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 0x00000003;
				}
				else
				{
					unk_0xC4492EA0CF4852F9();
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar9);
					Global_1C0180.f_A90[iVar9] = 0x00000000;
					(*uParam0)[iVar9] = 0x00000003;
				}
				if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_340())
				{
					if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
					{
						func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
					}
					else
					{
						func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
					}
					Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
					Global_1C0180.f_A90[iVar9]++;
				}
			}
			break;
		
		case 0x00000003:
			func_329(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 0x00000004;
			break;
		
		case 0x00000004:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_329(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_340() && Global_1C0180.f_A90[iParam0] > Global_1C0180.f_AD7[iParam0]) && Global_1C0180.f_AD7[iParam0] >= 0x00000000)
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
		if (!func_340())
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

int func_330(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_333() && !func_332())
			{
				func_331(*uParam2);
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

void func_331(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1C0000 = 0x00000001;
	func_361(&(Global_1C0000.f_1), 0x00000001, 0x00000000);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

int func_332()
{
	if (unk_0x798A3F1296751F46() && !func_353())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_333()
{
	if (unk_0xA9C9C7E04514E320() || Global_1C0000)
	{
		func_334();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_334()
{
	if (func_276(&(Global_1C0000.f_1), 0x0001D4C0, 0x00000001))
	{
		unk_0x8EFB4731C3DCDA55(Global_1C0000.f_3, Global_1C0000.f_4, 0xFFFFFFFF);
		Global_1C0000 = 0x00000000;
		func_229(&(Global_1C0000.f_1));
	}
}

int func_335(int iParam0)
{
	if ((((((iParam0 == 0x0000032F || iParam0 == 0x00000338) || iParam0 == 0x00000339) || iParam0 == 0x0000033A) || iParam0 == 0x0000033B) || iParam0 == 0x0000033C) || iParam0 == 0x00000351)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_336(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_350(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 0x00000010);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 0x00000010);
	}
	else
	{
		StringCopy(sParam1, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), 64);
		sParam1->f_20 = { func_251(unk_0xD803B885F5E47A62()) };
	}
	sParam1->f_3B = iParam2;
	if (func_335(uParam0->f_2C))
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

void func_337(var uParam0)
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

void func_338(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0x00000000;
}

int func_339(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_333() && !func_332())
			{
				func_331(*uParam2);
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

int func_340()
{
	if (Global_1C017C && Global_1C017D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_341(var uParam0)
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
	Var10 = { func_251(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[0x00000001])
	{
		case 0x00000000:
			iVar3 = unk_0xB552DC43762F9C85();
			Global_1C0180.f_AD7[0x00000001] = 0xFFFFFFFF;
			Global_1C0005.f_176 = 0xFFFFFFFF;
			Global_1C0180.f_A90[iVar9] = 0x00000000;
			if (iVar3 > 0x00000000)
			{
				if (func_340())
				{
					iVar8 = 0x00000000;
				}
				else
				{
					iVar8 = 0x00000001;
				}
				if (func_342(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0x00000000 /*66*/], iVar8, 0x00000000, 0x00000064))
				{
					func_338(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && unk_0x54F772BC86327092(&Var1))
					{
						if (func_340())
						{
							iVar6 = 0x00000000;
							iVar6 = 0x00000000;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0x00000000)
								{
									unk_0xBC584396476EE48A(iVar6, &Var0);
									if (func_350(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0x00000000)
										{
											if (func_305(&Var0, &(Global_1C0005.f_169)))
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
									func_337(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0x00000000)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0x00000000;
						if (func_340() && iVar4 == 0x00000000)
						{
							if (Global_1C0180.f_A90[iVar9] < 0x0000000B)
							{
								func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
								Global_1C0180.f_AD7[iVar9] = 0x00000000;
								Global_1C0180.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0x00000000)
						{
							unk_0xBC584396476EE48A(0x00000000, &Var0);
							if (func_340() && (func_305(&Var0, &Var10) || func_305(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_306(Var0) && Global_1C0180.f_A90[iVar9] < 0x0000000B)
							{
								if (func_305(&Var0, &Var10))
								{
									iVar4 = 0x00000000;
									Global_1C0180.f_AD7[0x00000001] = 0x00000000;
								}
								MemCopy(&(Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 0x00000010);
								Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = 0x00000001;
								if (func_335(uParam0->f_2C))
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
								if (func_350(uParam0->f_2C))
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
								func_337(&Var0);
								unk_0xC4492EA0CF4852F9();
								func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C0180.f_A90[0x00000001] = 0x00000000;
								(*uParam0)[0x00000001] = 0x00000001;
								if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_340())
								{
									if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
									{
										func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
									}
									else
									{
										func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
									}
									Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
									Global_1C0180.f_A90[iVar9]++;
								}
								return 0x00000000;
							}
							func_337(&Var0);
						}
						else
						{
							Global_1C0180.f_A90[0x00000001] = 0x00000000;
							func_337(&Var0);
							unk_0xC4492EA0CF4852F9();
							func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_340())
							{
								if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
								{
									func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[0x00000001] = 0x00000001;
							return 0x00000000;
						}
						if (!func_340())
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
								if (func_340() && iVar4 == iVar6)
								{
									if (!func_305(&(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20), &Var10))
									{
										func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180[0x00000001 /*901*/][Global_1C0180.f_A90[0x00000001] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_340() && (func_305(&Var0, &Var10) || func_305(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[0x00000001] < 0x0000000C)
								{
									if (func_306(Var0) && !func_305(&Var0, &(Global_1C0180[iVar9 /*901*/][0x00000000 /*75*/].f_20)))
									{
										if (func_305(&Var0, &Var10))
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
										if (func_335(uParam0->f_2C))
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
										if (func_350(uParam0->f_2C))
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
							func_337(&Var0);
							iVar6++;
						}
						unk_0xC4492EA0CF4852F9();
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[0x00000001] = 0x00000001;
						if (Global_1C0180.f_AD7[iVar9] == 0xFFFFFFFF && func_340())
						{
							if (Global_1C0180.f_A90[iVar9] >= 0x00000001)
							{
								func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 0x00000001) /*75*/].f_3B + 1);
							}
							else
							{
								func_336(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 0x00000001);
							}
							Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
							Global_1C0180.f_A90[iVar9]++;
						}
						return 0x00000000;
					}
					else
					{
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_A90[0x00000001] = 0x00000000;
						(*uParam0)[0x00000001] = 0x00000001;
						unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), 0x00000001);
						return 0x00000000;
					}
				}
			}
			else
			{
				func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C0180.f_A90[0x00000001] = 0x00000000;
				(*uParam0)[0x00000001] = 0x00000001;
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			func_329(iVar9, Global_1C0005.f_176);
			(*uParam0)[0x00000001] = 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_342(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_333() && !func_332())
			{
				func_331(*uParam2);
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

int func_343(var uParam0)
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
	Var0 = { func_251(unk_0xD803B885F5E47A62()) };
	switch ((*uParam0)[iVar10])
	{
		case 0x00000000:
			Global_1C0180.f_AD7[iVar10] = 0xFFFFFFFF;
			Global_1C0180.f_A90[iVar10] = 0x00000000;
			Global_1C0005.f_176 = 0xFFFFFFFF;
			Global_1C017D = 0x00000000;
			if (func_344(uParam0->f_2C))
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
			if (func_339(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x0000000B, &Var0, func_340(), 0x00000000, 0x00000000, 0x00000000))
			{
				func_338(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var2))
				{
					if (Var2.f_3 > 0x00000000)
					{
						iVar8 = 0x00000000;
						iVar3 = 0x00000000;
						if (func_340())
						{
							iVar8 = 0x00000000;
							while (iVar8 < Var2.f_3)
							{
								unk_0xBC584396476EE48A(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0x00000000)
								{
									if (func_305(&Var1, &Var0) || func_305(&Var1, &(Global_1C0005.f_169)))
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
								func_337(&Var1);
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
								if (func_340() && iVar6 == 0x00000000)
								{
									func_336(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C0180.f_AD7[iVar10] = 0x00000000;
									Global_1C0180.f_A90[iVar10]++;
								}
								if (func_340() && (func_305(&Var1, &Var0) || func_305(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_305(&Var1, &Var0))
									{
										iVar6 = 0x00000000;
										Global_1C0180.f_AD7[iVar10] = 0x00000000;
									}
									MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 0x00000010);
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_335(uParam0->f_2C))
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
									if (func_350(uParam0->f_2C))
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
						if (!func_340())
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
						func_337(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 0x00000001))
						{
							unk_0xBC584396476EE48A(iVar8, &Var1);
							if (Global_1C0180.f_A90[iVar10] < 0x0000000B && Var1.f_60 > 0x00000001)
							{
								if (func_340() && iVar6 == iVar8)
								{
									if (!func_305(&(Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_20), &Var1))
									{
										func_336(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
										Global_1C0180.f_A90[iVar10]++;
									}
								}
								if (func_340() && (func_305(&Var1, &Var0) || func_305(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar10] < 0x0000000B)
								{
									if (func_306(Var1) && !func_305(&(Global_1C0180[iVar10 /*901*/][0x00000000 /*75*/].f_20), &Var1))
									{
										if (func_305(&Var1, &Var0))
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
										if (func_335(uParam0->f_2C))
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
										if (func_350(uParam0->f_2C))
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
							func_337(&Var1);
							iVar8++;
						}
						unk_0xC4492EA0CF4852F9();
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C0180.f_AD7[iVar10] == 0xFFFFFFFF && func_340())
							{
								if (Global_1C0180.f_A90[iVar10] >= 0x00000001)
								{
									func_336(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 0x00000001) /*75*/].f_3B + 1);
								}
								else
								{
									func_336(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 0x00000001);
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
						func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar10] = 0xFFFFFFFF;
						(*uParam0)[iVar10] = 0x00000001;
					}
				}
				else
				{
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
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
			if (func_330(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, iVar12))
			{
				func_338(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0x54F772BC86327092(&Var2))
				{
					if (Var2.f_3 > 0x00000000)
					{
						iVar3 = 0x00000000;
						while (iVar3 < Var2.f_3)
						{
							unk_0xBC584396476EE48A(iVar3, &Var1);
							if (func_340() && (func_305(&Var1, &Var0) || func_305(&Var1, &(Global_1C0005.f_169))))
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
										if (func_335(uParam0->f_2C))
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
										if (func_350(uParam0->f_2C))
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
										if (func_335(uParam0->f_2C))
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
										if (func_350(uParam0->f_2C))
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
							func_337(&Var1);
							iVar3++;
						}
					}
					unk_0xC4492EA0CF4852F9();
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 0x00000002;
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Global_1C0180.f_B10), iVar10);
					func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_A90[iVar10] = 0x00000000;
					(*uParam0)[iVar10] = 0x00000002;
					Global_1C0180.f_A90[0x00000001] = 0x00000000;
					(*uParam0)[0x00000001] = 0x00000001;
					Global_1C0180.f_A90[0x00000002] = 0x00000000;
					(*uParam0)[0x00000002] = 0x00000003;
				}
			}
			if (Global_1C0180.f_AD7[iVar10] == 0xFFFFFFFF && func_340())
			{
				if (Global_1C0180.f_A90[iVar10] >= 0x00000001)
				{
					func_336(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 0x00000001) /*75*/].f_3B + 1);
				}
				else
				{
					func_336(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 0x00000001);
				}
				Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
				Global_1C0180.f_A90[iVar10]++;
			}
			break;
		
		case 0x00000002:
			func_329(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 0x00000003;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_344(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
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

void func_345(var uParam0)
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
			func_315(Global_1C0180.f_B0A, 0xFFFFFFFF);
		}
	}
}

void func_346(int iParam0)
{
	if (unk_0x83D8570832F172A7(iParam0))
	{
		unk_0x6567AE843FADBA94(iParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
	}
}

void func_347(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
				Var4 = { func_251(unk_0xD803B885F5E47A62()) };
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
							Var6 = { func_251(unk_0xD803B885F5E47A62()) };
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

void func_348(int iParam0, char* sParam1, var uParam2, int iParam3)
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

void func_349(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
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

int func_350(int iParam0)
{
	if (iParam0 == 0x00000339 || iParam0 == 0x0000033C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_351(int iParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

int func_352()
{
	return unk_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

bool func_353()
{
	return func_354(unk_0xD803B885F5E47A62());
}

int func_354(int iParam0)
{
	switch (func_355(iParam0))
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

int func_355(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4;
}

void func_356(int iParam0)
{
	Global_141384 = iParam0;
}

void func_357(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		func_360();
	}
	func_359(0x00000004, 0xFFFFFFFF);
	func_359(0x00000006, 0xFFFFFFFF);
	func_359(0x00000007, 0xFFFFFFFF);
	func_359(0x00000003, 0xFFFFFFFF);
	func_359(0x00000001, 0xFFFFFFFF);
	func_359(0x00000002, 0xFFFFFFFF);
	func_359(0x0000000B, 0xFFFFFFFF);
	func_359(0x0000000D, 0xFFFFFFFF);
	func_359(0x0000000E, 0xFFFFFFFF);
	func_359(0x00000010, 0xFFFFFFFF);
}

void func_359(int iParam0, int iParam1)
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

void func_360()
{
	Global_26B66F.f_11B4 = 0x00000000;
}

void func_361(var uParam0, bool bParam1, bool bParam2)
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

int func_362(var uParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(uParam0->f_2A, 0x00000001) && Global_1C0180.f_A90[0x00000000] > 0x00000000) && uParam0->f_F6.f_1 >= 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_363(int iParam0)
{
	if (func_239())
	{
		if (!func_9(iLocal_766))
		{
			if (unk_0xB87F6CF6E5628C67(joaat("a_f_y_genhot_01")))
			{
				if (func_178(iParam0))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					unk_0x1AEF7184B203A58D(iParam0, 0f);
					unk_0xA47B46945FF6DE74(iParam0, vLocal_767, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iParam0, fLocal_768);
				}
				func_32(0x00000001);
				iLocal_766 = unk_0x36F2404464202779(0x00000005, joaat("a_f_y_genhot_01"), vLocal_769, fLocal_770, 0x00000001, 0x00000001);
				func_364(&uLocal_781, 0x00000003, iLocal_766, "StrRaceGirl", 0x00000001, 0x00000001);
				unk_0x33CE5A9E32EA10B2(iLocal_766, 0x00000001);
				unk_0x71199B01895C6202(joaat("a_f_y_genhot_01"));
			}
		}
	}
}

void func_364(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_365()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	switch (Local_530)
	{
		case 0x00000005:
			fVar2 = 180.8171f;
			break;
		
		case 0x00000006:
			fVar2 = 49.2605f;
			break;
		
		case 0x00000007:
			fVar2 = 69.4601f;
			break;
		
		case 0x00000008:
			fVar2 = 191.0019f;
			break;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= (Local_532.f_F9 - 0x00000001))
	{
		if (func_9(Local_536[iVar0 /*18*/].f_3) && func_178(Local_536[iVar0 /*18*/].f_6))
		{
			unk_0xA3BF0AA5A2608191(Local_536[iVar0 /*18*/].f_3);
			unk_0xD8F6A53F4799FAFE(Local_536[iVar0 /*18*/].f_3, fVar2);
			switch (iVar0)
			{
				case 0x00000000:
					if (Local_530 == 0x00000008)
					{
						unk_0xA47B46945FF6DE74(Local_536[iVar0 /*18*/].f_6, vVar1 + Vector(0f, -10f, 10f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
					else
					{
						unk_0xA47B46945FF6DE74(Local_536[iVar0 /*18*/].f_6, vVar1 + Vector(0f, 0f, 10f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
					break;
				
				case 0x00000001:
					if (Local_530 == 0x00000008)
					{
						unk_0xA47B46945FF6DE74(Local_536[iVar0 /*18*/].f_6, vVar1 + Vector(0f, -10f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
					else
					{
						unk_0xA47B46945FF6DE74(Local_536[iVar0 /*18*/].f_6, vVar1 + Vector(0f, 10f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
					break;
				
				case 0x00000002:
					if (Local_530 == 0x00000008)
					{
						unk_0xA47B46945FF6DE74(Local_536[iVar0 /*18*/].f_6, vVar1 + Vector(0f, -12f, -10f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
					else
					{
						unk_0xA47B46945FF6DE74(Local_536[iVar0 /*18*/].f_6, vVar1 + Vector(0f, 10f, 10f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
					break;
				
				default:
					func_31(&(Local_536[iVar0 /*18*/].f_3));
					func_147(&(Local_536[iVar0 /*18*/].f_6));
					break;
				}
		}
		iVar0++;
	}
}

int func_366(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_367(iParam0);
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

void func_367(int iParam0)
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

int func_368()
{
	if ((unk_0x1963B11DE70153E0() && unk_0x8BB6DE13A9F3105E()) && Local_113.f_2C > 0x00000000)
	{
		if (Global_1C0005.f_1 && !Global_1C0005.f_2)
		{
			func_377(Local_530, Local_531.f_B, iLocal_752, Local_531.f_A, vLocal_18.x);
			Global_1C0005.f_2 = 0x00000001;
		}
		if (func_369(&Local_113))
		{
			Global_1C017C = 0x00000001;
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_369(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 0x00000004;
	Var2.f_3 = 0x00000020;
	Var2.f_24 = 0x00000020;
	if (func_350(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_251(unk_0xD803B885F5E47A62()) };
	}
	switch (Global_1C0005)
	{
		case 0x00000000:
			if (func_376(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_338(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = unk_0x3E935963A5A0820F(uParam0->f_2C, 0x00000000);
				iVar4 = 0x00000000;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_375(uParam0->f_2C, iVar4))
					{
						if (func_374(uParam0->f_2C, 0x00000004, iVar4))
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
						if (!func_306(Var0))
						{
							Global_1C0005.f_4 = 0x00000001;
						}
						else
						{
							iVar4 = 0x00000000;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_375(uParam0->f_2C, iVar4))
								{
									if (func_374(uParam0->f_2C, 0x00000004, iVar4))
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
				func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 0x00000001:
			Global_1C0005.f_1 = 0x00000001;
			if (Global_1C0005.f_2)
			{
				func_373();
				if (Global_1C0005.f_4)
				{
					if (func_372(uParam0->f_2C))
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
			if (unk_0x8CD06866876216F2() && func_371())
			{
				if (func_370())
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
			if (func_372(uParam0->f_2C))
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
			if (func_339(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 0x00000001, &Var3, 0x00000001, 0x00000001, Global_1C0005.f_118.f_24[0x00000000], Global_1C0005.f_118.f_3[0x00000000]))
			{
				func_338(&Var1, &(uParam0->f_2C));
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
				func_235(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 0x000003E7:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

bool func_370()
{
	return unk_0xEAE0D21A50E6C7F4(Global_EA450.f_8, 0x00000001);
}

var func_371()
{
	return Global_258538.f_3;
}

int func_372(int iParam0)
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

void func_373()
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

int func_374(int iParam0, int iParam1, int iParam2)
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

int func_375(int iParam0, int iParam1)
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

int func_376(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_333() && !func_332())
			{
				func_331(*uParam2);
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

void func_377(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x1963B11DE70153E0() && unk_0x8BB6DE13A9F3105E())
	{
		StringCopy(&(Var0[0x00000000 /*8*/]), "GameType", 32);
		StringCopy(&(Var0[0x00000001 /*8*/]), "Location", 32);
		StringCopy(&(Var0[0x00000002 /*8*/]), "Type", 32);
		StringCopy(&(Var1[0x00000000 /*6*/]), "SP", 24);
		switch (iParam0)
		{
			case 0x00000000:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGCR_1", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "StreetRace", 24);
				break;
			
			case 0x00000001:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGCR_2", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "StreetRace", 24);
				break;
			
			case 0x00000002:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGCR_4", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "StreetRace", 24);
				break;
			
			case 0x00000003:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGCR_5", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "StreetRace", 24);
				break;
			
			case 0x00000004:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGCR_6", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "StreetRace", 24);
				break;
			
			case 0x00000005:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGSR_1", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "SeaRace", 24);
				break;
			
			case 0x00000006:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGSR_2", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "SeaRace", 24);
				break;
			
			case 0x00000007:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGSR_3", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "SeaRace", 24);
				break;
			
			case 0x00000008:
				StringCopy(&(Var1[0x00000001 /*6*/]), "MGSR_4", 24);
				StringCopy(&(Var1[0x00000002 /*6*/]), "SeaRace", 24);
				break;
			
			default:
				break;
		}
		func_380();
		if (func_379(0x00000331, &Var1, &Var0, 0x00000003, 0xFFFFFFFF, 0x00000001, 0x00000000))
		{
			func_378(0x00000331, 0x00000083, -iParam2, 0f, 0x00000000);
			func_378(0x00000331, 0x00000002, iParam3, 0f, 0x00000000);
			func_378(0x00000331, 0x00000093, iParam2, 0f, 0x00000000);
			func_378(0x00000331, 0x00000095, unk_0x134B62B726CEC8E6(iParam4), 0f, 0x00000000);
			func_378(0x00000331, 0x00000094, 0x00000000, 0f, 0x00000000);
			func_378(0x00000331, 0x0000006D, 0x00000001, 0f, 0x00000000);
			iVar2 = 0x00000000;
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			if (iParam1 == 0x00000001)
			{
				iVar2 = 0x00000001;
				iVar5 = 0x00000003;
			}
			else if (iParam1 == 0x00000002)
			{
				iVar3 = 0x00000001;
				iVar5 = 0x00000002;
			}
			else if (iParam1 == 0x00000003)
			{
				iVar4 = 0x00000001;
				iVar5 = 0x00000001;
			}
			unk_0x6106B2DBBCB1AA39(0x00000056, iVar2, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000009E, iVar3, 0f);
			unk_0x6106B2DBBCB1AA39(0x0000009D, iVar4, 0f);
			unk_0x6106B2DBBCB1AA39(0x00000060, iVar5, 0f);
		}
	}
}

void func_378(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
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
				else if (func_374(iParam0, 0x00000004, iVar1))
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

int func_379(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
				Var2 = { func_251(unk_0xD803B885F5E47A62()) };
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

void func_380()
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

int func_381(int iParam0, var uParam1, int iParam2)
{
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		return 0x00000000;
	}
	switch (*uParam1)
	{
		case 0x00000000:
			if (!unk_0x9F4FE516EAACCFC5(uParam1->f_5[0x00000000]))
			{
				func_382(uParam1, iParam2);
				uParam1->f_5[0x00000000] = unk_0xAE06CCC36C49929C(0x019286A9, uParam1->f_8A[0x00000000 /*3*/], uParam1->f_A3[0x00000000 /*3*/], uParam1->f_BC, 0x00000000, 0x00000002);
				uParam1->f_5[0x00000001] = unk_0xAE06CCC36C49929C(0x019286A9, uParam1->f_8A[0x00000001 /*3*/], uParam1->f_A3[0x00000001 /*3*/], uParam1->f_BC, 0x00000000, 0x00000002);
			}
			else if (!unk_0xFBB4F23D534EB790(uParam1->f_5[0x00000000]))
			{
				unk_0xE3BB8E05FCEB3FBE(uParam1->f_5[0x00000000], 0x00000001);
				unk_0xF1E4C781086FABC1(uParam1->f_5[0x00000001], uParam1->f_5[0x00000000], 0x000007D0, 0x00000000, 0x00000001);
				unk_0x82A772610883F395("MinigameEndFranklin", 0x00000000, 0x00000000);
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
				unk_0x66472309FEEB3793(0x00000001);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x91F5B0244AAE6222(uParam1->f_5[0x00000001], "HAND_SHAKE", 0.3f);
			}
			else
			{
				unk_0x98868AF51859FC75(*iParam0, 0x00000000);
				uParam1->f_3 = (unk_0x1C0640BA9A7327B3() + uParam1->f_1);
				uParam1->f_4 = (unk_0x1C0640BA9A7327B3() + uParam1->f_2);
				*uParam1 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (unk_0x9F4FE516EAACCFC5(uParam1->f_5[0x00000001]))
			{
				if (!unk_0xFA06B985B30FB0FC(uParam1->f_5[0x00000001]))
				{
					uParam1->f_5[0x00000002] = unk_0xAE06CCC36C49929C(0x019286A9, uParam1->f_8A[0x00000002 /*3*/], uParam1->f_A3[0x00000002 /*3*/], uParam1->f_BC, 0x00000000, 0x00000002);
					unk_0xF1E4C781086FABC1(uParam1->f_5[0x00000002], uParam1->f_5[0x00000001], 0x00000258, 0x00000001, 0x00000001);
					unk_0xDE0127155AF9E64F(uParam1->f_5[0x00000002], 1f);
					unk_0x9A1335ECD7BD117F("MinigameEndFranklin");
					unk_0x82A772610883F395("MinigameTransitionIn", 0x00000000, 0x00000001);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
					unk_0x9A8DDC7C522F5BF5(uParam1->f_5[0x00000000], 0x00000000);
					unk_0x9A8DDC7C522F5BF5(uParam1->f_5[0x00000001], 0x00000000);
				}
			}
			else if (unk_0x9F4FE516EAACCFC5(uParam1->f_5[0x00000002]))
			{
				if (!unk_0xFA06B985B30FB0FC(uParam1->f_5[0x00000002]))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
					*uParam1 = 0x00000003;
				}
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_382(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_178(vLocal_18.x))
	{
		iVar0 = unk_0x134B62B726CEC8E6(vLocal_18.x);
	}
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_8A[0x00000000 /*3*/] = { -165.9996f, -1593.64f, 36.05082f };
			uParam0->f_A3[0x00000000 /*3*/] = { -1.140186f, 0f, -18.93413f };
			uParam0->f_8A[0x00000001 /*3*/] = { -166.1385f, -1593.818f, 36.05508f };
			uParam0->f_A3[0x00000001 /*3*/] = { -1.140186f, 0f, -18.47817f };
			uParam0->f_8A[0x00000002 /*3*/] = { -166.1385f, -1593.818f, 46.05508f };
			uParam0->f_A3[0x00000002 /*3*/] = { 52.671f, 0f, -18.56f };
			uParam0->f_8A[0x00000003 /*3*/] = { -167.6591f, -1578.87f, 45.29414f };
			uParam0->f_A3[0x00000003 /*3*/] = { 52.671f, -0.1338f, 10.8626f };
			if (iVar0 == unk_0x12AB0310C2281427("DUBSTA3"))
			{
				uParam0->f_8A[0x00000004 /*3*/] = { -167.5634f, -1578.09f, 36.15f };
				uParam0->f_A3[0x00000004 /*3*/] = { -5.9218f, -0.0947f, 21.8453f };
				uParam0->f_8A[0x00000005 /*3*/] = { -166.1911f, -1577.527f, 36.0991f };
				uParam0->f_A3[0x00000005 /*3*/] = { -7.2671f, -0.0947f, 44.6906f };
			}
			else if (iVar0 == unk_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_8A[0x00000004 /*3*/] = { -172.7921f, -1581.98f, 36.2618f };
				uParam0->f_A3[0x00000004 /*3*/] = { -4.0569f, -0.1415f, -22.1047f };
				uParam0->f_8A[0x00000005 /*3*/] = { -172.311f, -1582.164f, 36.2613f };
				uParam0->f_A3[0x00000005 /*3*/] = { -4.0569f, -0.1415f, -19.9102f };
			}
			else
			{
				uParam0->f_8A[0x00000004 /*3*/] = { -167.6591f, -1578.87f, 35.29414f };
				uParam0->f_A3[0x00000004 /*3*/] = { -2.670335f, -0.13378f, 10.86258f };
				uParam0->f_8A[0x00000005 /*3*/] = { -167.4883f, -1578.681f, 35.28797f };
				uParam0->f_A3[0x00000005 /*3*/] = { -2.670335f, -0.133781f, 12.42358f };
			}
			if (iVar0 == unk_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_8A[0x00000006 /*3*/] = { -166.3731f, -1571.645f, 37.2137f };
				uParam0->f_A3[0x00000006 /*3*/] = { -10.5428f, -0.1337f, 132.3746f };
				uParam0->f_8A[0x00000007 /*3*/] = { -164.2483f, -1569.826f, 37.7305f };
				uParam0->f_A3[0x00000007 /*3*/] = { -10.5428f, -0.1337f, 142.4265f };
			}
			else
			{
				uParam0->f_8A[0x00000006 /*3*/] = { -165.8132f, -1572.278f, 35.57696f };
				uParam0->f_A3[0x00000006 /*3*/] = { -6.502827f, -0.133783f, 134.8512f };
				uParam0->f_8A[0x00000007 /*3*/] = { -165.6579f, -1571.71f, 35.63565f };
				uParam0->f_A3[0x00000007 /*3*/] = { -6.502827f, -0.133782f, 138.7487f };
			}
			uParam0->f_BC = 25f;
			break;
		
		case 0x00000001:
			uParam0->f_8A[0x00000000 /*3*/] = { 345.9444f, 326.0113f, 104.2977f };
			uParam0->f_A3[0x00000000 /*3*/] = { -2.2338f, 0.0066f, -123.2325f };
			uParam0->f_8A[0x00000001 /*3*/] = { 345.6188f, 325.8368f, 104.3046f };
			uParam0->f_A3[0x00000001 /*3*/] = { -2.2338f, 0.0066f, -125.4908f };
			uParam0->f_8A[0x00000002 /*3*/] = { 345.6188f, 325.8368f, 114.3046f };
			uParam0->f_A3[0x00000002 /*3*/] = { 61.4186f, 0.0066f, -125.2516f };
			uParam0->f_8A[0x00000003 /*3*/] = { 349.7675f, 318.5139f, 114.5701f };
			uParam0->f_A3[0x00000003 /*3*/] = { 61.4186f, 0.0683f, -51.2922f };
			if (iVar0 == unk_0x12AB0310C2281427("DUBSTA3"))
			{
				uParam0->f_8A[0x00000004 /*3*/] = { 350.6226f, 319.2393f, 105.5075f };
				uParam0->f_A3[0x00000004 /*3*/] = { -14.1152f, 0.0341f, -34.8046f };
				uParam0->f_8A[0x00000005 /*3*/] = { 352.4439f, 318.4305f, 105.5037f };
				uParam0->f_A3[0x00000005 /*3*/] = { -14.1153f, 0.0341f, -13.9017f };
			}
			else if (iVar0 == unk_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_8A[0x00000004 /*3*/] = { 345.9572f, 322.6875f, 105.8543f };
				uParam0->f_A3[0x00000004 /*3*/] = { -10.7212f, 0.079f, -88.9707f };
				uParam0->f_8A[0x00000005 /*3*/] = { 346.243f, 322.2848f, 105.8016f };
				uParam0->f_A3[0x00000005 /*3*/] = { -9.6145f, 0.079f, -87.2469f };
			}
			else
			{
				uParam0->f_8A[0x00000004 /*3*/] = { 349.7675f, 318.5139f, 104.5701f };
				uParam0->f_A3[0x00000004 /*3*/] = { -6.4077f, 0.0685f, -51.2659f };
				uParam0->f_8A[0x00000005 /*3*/] = { 349.9963f, 318.3574f, 104.561f };
				uParam0->f_A3[0x00000005 /*3*/] = { -6.4077f, 0.0685f, -46.9079f };
			}
			if (iVar0 == unk_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_8A[0x00000006 /*3*/] = { 357.8919f, 321.2549f, 105.4607f };
				uParam0->f_A3[0x00000006 /*3*/] = { -3.2542f, 0.0014f, 80.7604f };
				uParam0->f_8A[0x00000007 /*3*/] = { 359.4669f, 319.8764f, 105.6448f };
				uParam0->f_A3[0x00000007 /*3*/] = { -3.2542f, 0.0014f, 80.7604f };
			}
			else
			{
				uParam0->f_8A[0x00000006 /*3*/] = { 356.9244f, 319.9118f, 104.1889f };
				uParam0->f_A3[0x00000006 /*3*/] = { -3.2411f, 0.0035f, 62.3779f };
				uParam0->f_8A[0x00000007 /*3*/] = { 357.7713f, 320.1022f, 104.2291f };
				uParam0->f_A3[0x00000007 /*3*/] = { -3.2411f, 0.0035f, 74.7132f };
			}
			uParam0->f_BC = 25f;
			break;
		
		case 0x00000002:
			uParam0->f_8A[0x00000000 /*3*/] = { -796.1253f, -2532.318f, 13.7076f };
			uParam0->f_A3[0x00000000 /*3*/] = { 3.1635f, -0.0349f, 129.4171f };
			uParam0->f_8A[0x00000001 /*3*/] = { -796.1734f, -2532.26f, 13.7076f };
			uParam0->f_A3[0x00000001 /*3*/] = { 3.1635f, -0.0349f, 123.6241f };
			uParam0->f_8A[0x00000002 /*3*/] = { -796.1734f, -2532.26f, 23.7076f };
			uParam0->f_A3[0x00000002 /*3*/] = { 53.9221f, -0.0349f, 122.1631f };
			uParam0->f_8A[0x00000003 /*3*/] = { -796.4111f, -2523.561f, 23.9621f };
			uParam0->f_A3[0x00000003 /*3*/] = { 53.9221f, -0.0707f, -153.6631f };
			if (iVar0 == unk_0x12AB0310C2281427("DUBSTA3"))
			{
				uParam0->f_8A[0x00000004 /*3*/] = { -796.4529f, -2524.616f, 15.041f };
				uParam0->f_A3[0x00000004 /*3*/] = { -7.1159f, 0.0458f, -134.7064f };
				uParam0->f_8A[0x00000005 /*3*/] = { -797.3875f, -2525.879f, 15.0393f };
				uParam0->f_A3[0x00000005 /*3*/] = { -7.1159f, 0.0458f, -115.5518f };
			}
			else if (iVar0 == unk_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_8A[0x00000004 /*3*/] = { -791.3419f, -2519.918f, 15.0172f };
				uParam0->f_A3[0x00000004 /*3*/] = { -2.267f, 0.0182f, 170.5412f };
				uParam0->f_8A[0x00000005 /*3*/] = { -791.8328f, -2519.838f, 15.0171f };
				uParam0->f_A3[0x00000005 /*3*/] = { -2.267f, 0.0182f, 171.6637f };
			}
			else
			{
				uParam0->f_8A[0x00000004 /*3*/] = { -796.4111f, -2523.561f, 13.9621f };
				uParam0->f_A3[0x00000004 /*3*/] = { -2.3601f, -0.0691f, -153.523f };
				uParam0->f_8A[0x00000005 /*3*/] = { -796.5952f, -2523.708f, 13.9597f };
				uParam0->f_A3[0x00000005 /*3*/] = { -2.5866f, -0.0094f, -153.6361f };
			}
			if (iVar0 == unk_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_8A[0x00000006 /*3*/] = { -795.2563f, -2531.812f, 15.4606f };
				uParam0->f_A3[0x00000006 /*3*/] = { -7.3224f, -0.0241f, -23.3218f };
				uParam0->f_8A[0x00000007 /*3*/] = { -797.5802f, -2532.983f, 15.7165f };
				uParam0->f_A3[0x00000007 /*3*/] = { -7.3224f, -0.0241f, -24.3511f };
			}
			else
			{
				uParam0->f_8A[0x00000006 /*3*/] = { -797.7468f, -2530.266f, 14.2931f };
				uParam0->f_A3[0x00000006 /*3*/] = { -7.1993f, -0.0094f, -44.5229f };
				uParam0->f_8A[0x00000007 /*3*/] = { -796.9835f, -2531.192f, 14.3335f };
				uParam0->f_A3[0x00000007 /*3*/] = { -8.966f, -0.0094f, -29.9138f };
			}
			uParam0->f_BC = 25f;
			break;
		
		case 0x00000003:
			uParam0->f_8A[0x00000000 /*3*/] = { 750.5599f, -1140.983f, 30.1426f };
			uParam0->f_A3[0x00000000 /*3*/] = { 0.0483f, 0.0013f, -107.741f };
			uParam0->f_8A[0x00000001 /*3*/] = { 750.0837f, -1141.155f, 30.1422f };
			uParam0->f_A3[0x00000001 /*3*/] = { 0.0483f, 0.0013f, -117.1716f };
			uParam0->f_8A[0x00000002 /*3*/] = { 750.0837f, -1141.155f, 40.1422f };
			uParam0->f_A3[0x00000002 /*3*/] = { 46.0912f, 0.0013f, -117.2112f };
			uParam0->f_8A[0x00000003 /*3*/] = { 813.1603f, -1161.749f, 38.7039f };
			uParam0->f_A3[0x00000003 /*3*/] = { 11.999f, 0.0201f, -83.4509f };
			if (iVar0 == unk_0x12AB0310C2281427("DUBSTA3"))
			{
				uParam0->f_8A[0x00000004 /*3*/] = { 815.0908f, -1162.677f, 29.812f };
				uParam0->f_A3[0x00000004 /*3*/] = { -13.5952f, 0.056f, -61.7062f };
				uParam0->f_8A[0x00000005 /*3*/] = { 817.5979f, -1163.707f, 29.4702f };
				uParam0->f_A3[0x00000005 /*3*/] = { -13.1626f, 0.056f, -11.7796f };
			}
			else if (iVar0 == unk_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_8A[0x00000004 /*3*/] = { 810.162f, -1160.633f, 30.37f };
				uParam0->f_A3[0x00000004 /*3*/] = { -12.1619f, 0.0081f, -85.475f };
				uParam0->f_8A[0x00000005 /*3*/] = { 810.3062f, -1160.876f, 30.3431f };
				uParam0->f_A3[0x00000005 /*3*/] = { -11.7112f, 0.0081f, -83.0783f };
			}
			else
			{
				uParam0->f_8A[0x00000004 /*3*/] = { 813.1603f, -1161.749f, 28.7039f };
				uParam0->f_A3[0x00000004 /*3*/] = { -2.9712f, 0.0059f, -83.4627f };
				uParam0->f_8A[0x00000005 /*3*/] = { 813.6791f, -1162.024f, 28.6743f };
				uParam0->f_A3[0x00000005 /*3*/] = { -3.9024f, 0.0059f, -79.3115f };
			}
			if (iVar0 == unk_0x12AB0310C2281427("MONSTER"))
			{
				uParam0->f_8A[0x00000006 /*3*/] = { 822.7552f, -1160.912f, 29.7837f };
				uParam0->f_A3[0x00000006 /*3*/] = { -11.332f, 0.004f, 86.003f };
				uParam0->f_8A[0x00000007 /*3*/] = { 824.2561f, -1162.348f, 30.0892f };
				uParam0->f_A3[0x00000007 /*3*/] = { -6.1371f, 0.004f, 85.1825f };
			}
			else
			{
				uParam0->f_8A[0x00000006 /*3*/] = { 821.5195f, -1163.616f, 28.5451f };
				uParam0->f_A3[0x00000006 /*3*/] = { -4.4063f, -0.0244f, 60.9237f };
				uParam0->f_8A[0x00000007 /*3*/] = { 822.8655f, -1162.841f, 28.6227f };
				uParam0->f_A3[0x00000007 /*3*/] = { -0.9147f, -0.0244f, 75.4051f };
			}
			uParam0->f_BC = 25f;
			break;
		
		case 0x00000004:
			uParam0->f_8A[0x00000000 /*3*/] = { -1051.948f, -1152.604f, 1.7317f };
			uParam0->f_A3[0x00000000 /*3*/] = { 4.3072f, -0.0727f, 97.2603f };
			uParam0->f_8A[0x00000001 /*3*/] = { -1051.808f, -1152.268f, 1.7187f };
			uParam0->f_A3[0x00000001 /*3*/] = { 4.3072f, -0.0727f, 90.129f };
			uParam0->f_8A[0x00000002 /*3*/] = { -1051.808f, -1152.268f, 11.7187f };
			uParam0->f_A3[0x00000002 /*3*/] = { 52.162f, -0.0727f, 90.129f };
			uParam0->f_8A[0x00000003 /*3*/] = { -1023.002f, -1126.407f, 12.5596f };
			uParam0->f_A3[0x00000003 /*3*/] = { 52.162f, -0.0315f, 151.2765f };
			uParam0->f_8A[0x00000004 /*3*/] = { -1023.002f, -1126.407f, 2.5596f };
			uParam0->f_A3[0x00000004 /*3*/] = { -2.9801f, -0.0213f, 151.248f };
			uParam0->f_8A[0x00000005 /*3*/] = { -1023.498f, -1126.546f, 2.5418f };
			uParam0->f_A3[0x00000005 /*3*/] = { -2.9801f, -0.0213f, 155.1694f };
			uParam0->f_8A[0x00000006 /*3*/] = { -1028.427f, -1130.713f, 2.3506f };
			uParam0->f_A3[0x00000006 /*3*/] = { 4.2629f, -0.0213f, -73.0231f };
			uParam0->f_8A[0x00000007 /*3*/] = { -1028.617f, -1131.717f, 2.6039f };
			uParam0->f_A3[0x00000007 /*3*/] = { -1.0784f, -0.0213f, -61.3829f };
			uParam0->f_BC = 25f;
			break;
		
		case 0x00000005:
			uParam0->f_8A[0x00000000 /*3*/] = { 3006.734f, 1170.372f, 2.515141f };
			uParam0->f_A3[0x00000000 /*3*/] = { 4.303476f, 0f, -20.7533f };
			uParam0->f_8A[0x00000001 /*3*/] = { 3006.734f, 1170.372f, 2.515141f };
			uParam0->f_A3[0x00000001 /*3*/] = { 4.303476f, 0f, -20.7533f };
			uParam0->f_8A[0x00000002 /*3*/] = { 3006.734f, 1170.372f, 22.51514f };
			uParam0->f_A3[0x00000002 /*3*/] = { 54.30347f, 0f, -20.7533f };
			uParam0->f_BC = 35f;
			break;
		
		case 0x00000006:
			uParam0->f_8A[0x00000000 /*3*/] = { 3589.204f, 5155.575f, 11.8528f };
			uParam0->f_A3[0x00000000 /*3*/] = { -15.707f, -0.0486f, -159.6172f };
			uParam0->f_8A[0x00000001 /*3*/] = { 3589.204f, 5155.575f, 11.8528f };
			uParam0->f_A3[0x00000001 /*3*/] = { -15.707f, -0.0486f, -159.6172f };
			uParam0->f_8A[0x00000002 /*3*/] = { 3595.856f, 5136.728f, 24.00473f };
			uParam0->f_A3[0x00000002 /*3*/] = { 50.18856f, 0f, -162.0384f };
			uParam0->f_BC = 35f;
			break;
		
		case 0x00000007:
			uParam0->f_8A[0x00000000 /*3*/] = { -1466.864f, 2631.414f, 2.130511f };
			uParam0->f_A3[0x00000000 /*3*/] = { 3.075093f, -0.03981f, -114.1416f };
			uParam0->f_8A[0x00000001 /*3*/] = { -1466.864f, 2631.414f, 2.130511f };
			uParam0->f_A3[0x00000001 /*3*/] = { 3.075093f, -0.03981f, -114.1416f };
			uParam0->f_8A[0x00000002 /*3*/] = { -1466.864f, 2631.414f, 22.13051f };
			uParam0->f_A3[0x00000002 /*3*/] = { 53.07509f, -0.03981f, -114.1416f };
			uParam0->f_BC = 35f;
			break;
		
		case 0x00000008:
			uParam0->f_8A[0x00000000 /*3*/] = { 406.0171f, -2727.061f, 1.925007f };
			uParam0->f_A3[0x00000000 /*3*/] = { 2.283322f, 0.014f, -41.70963f };
			uParam0->f_8A[0x00000001 /*3*/] = { 406.0171f, -2727.061f, 1.925007f };
			uParam0->f_A3[0x00000001 /*3*/] = { 2.283322f, 0.014f, -41.70963f };
			uParam0->f_8A[0x00000002 /*3*/] = { 406.0171f, -2727.061f, 21.92501f };
			uParam0->f_A3[0x00000002 /*3*/] = { 52.28332f, 0.014f, -41.70963f };
			uParam0->f_BC = 35f;
			break;
	}
}

float func_383(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_384(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	func_388(uParam0);
	iVar0 = 0x00000000;
	sVar1 = "";
	switch (iParam2)
	{
		case 0x00000001:
			iVar0 = 0x00000003;
			sVar1 = "SPR_1stpl";
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			sVar1 = "SPR_2ndpl";
			break;
		
		case 0x00000003:
			iVar0 = 0x00000001;
			sVar1 = "SPR_3rdpl";
			break;
		
		case 0x00000004:
			iVar0 = 0x00000000;
			sVar1 = "SPR_4thpl";
			break;
		
		case 0x00000005:
			iVar0 = 0x00000000;
			sVar1 = "SPR_5thpl";
			break;
		
		case 0x00000006:
			iVar0 = 0x00000000;
			sVar1 = "SPR_6thpl";
			break;
		
		case 0x00000007:
			iVar0 = 0x00000000;
			sVar1 = "SPR_7thpl";
			break;
		
		case 0x00000008:
			iVar0 = 0x00000000;
			sVar1 = "SPR_8thpl";
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			sVar2 = "SLOSSANTOS";
			break;
		
		case 0x00000001:
			sVar2 = "CITYCIRCUIT";
			break;
		
		case 0x00000002:
			sVar2 = "AIRPORTR";
			break;
		
		case 0x00000003:
			sVar2 = "FREEWAY";
			break;
		
		case 0x00000004:
			sVar2 = "VERSPUCCI";
			break;
		
		case 0x00000005:
			sVar2 = "NORTHCOAST";
			break;
		
		case 0x00000006:
			sVar2 = "SOUTHCOAST";
			break;
		
		case 0x00000007:
			sVar2 = "CANYON";
			break;
		
		case 0x00000008:
			sVar2 = "LOSSANTOS";
			break;
	}
	func_387(uParam0, sVar1, sVar2, 0x00000000);
	func_386(uParam0, 0x00000012, "SPR_TIME", "", iParam4, 0x00000000, 0x00000000, 0x00000000);
	uParam0->f_231 = 0x00000001;
	if ((bLocal_512 && unk_0x1963B11DE70153E0()) && unk_0x8BB6DE13A9F3105E())
	{
		if (iLocal_511 > iParam4 || iLocal_511 <= 0x00000000)
		{
			iLocal_511 = iParam4;
		}
		func_386(uParam0, 0x00000012, "SPR_BESTTIME", "", iLocal_511, 0x00000000, 0x00000000, 0x00000000);
		if (iLocal_510 > iParam4 || iLocal_510 <= 0x00000000)
		{
			iLocal_510 = iParam4;
		}
		func_386(uParam0, 0x00000012, "LOB_SPLIT_0", "", iLocal_510, 0x00000000, 0x00000000, 0x00000000);
	}
	if (iParam2 <= 0x00000003)
	{
		func_385(uParam0, 0x00000001, "SPR_RESULT", iParam2, uParam3, 0x00000001, iVar0, 0x00000000);
	}
	else
	{
		func_385(uParam0, 0x00000000, "SPR_RESULT", iParam2, uParam3, 0x00000001, iVar0, 0x00000000);
	}
}

void func_385(var uParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = iParam3;
	uParam0->f_22B = uParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
	uParam0->f_240 = iParam7;
}

void func_386(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_387(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0x00000000;
}

void func_388(var uParam0)
{
	func_269(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

void func_389(var uParam0)
{
	func_164(&(uParam0->f_E), 0x00000000, 0x00000000, 0x00000001, 0x00000001);
	func_163(&(uParam0->f_E), "SPR_CONT2", 0x00000002, 0x000000D7, 0x00000001, 0x00000001, 0x00000000);
	func_163(&(uParam0->f_E), "SPR_UI_RETRY", 0x00000002, 0x000000D8, 0x00000001, 0x00000001, 0x00000000);
	if (unk_0x1963B11DE70153E0() && unk_0x8BB6DE13A9F3105E())
	{
		func_163(&(uParam0->f_E), "HUD_INPUT68", 0x00000002, 0x000000D3, 0x00000001, 0x00000001, 0x00000000);
	}
	func_391(&(uParam0->f_E), 0x00000001);
	func_390(&(uParam0->f_E), 0x00000001);
}

void func_390(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 0x00000010);
	}
	else
	{
		func_152(&(uParam0->f_1), 0x00000010);
	}
}

void func_391(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 0x00000400);
	}
	else
	{
		func_152(&(uParam0->f_1), 0x00000400);
	}
}

void func_392(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0x1963B11DE70153E0() && unk_0x8BB6DE13A9F3105E()) && iLocal_513)
	{
		switch (iParam0)
		{
			case 0x00000000:
				iVar0 = 0x00000000;
				iVar1 = 0x00000002;
				break;
			
			case 0x00000001:
				iVar0 = 0x00000001;
				iVar1 = 0x00000001;
				break;
			
			case 0x00000002:
				iVar0 = 0x00000002;
				iVar1 = 0x00000002;
				break;
			
			case 0x00000003:
				iVar0 = 0x00000003;
				iVar1 = 0x00000002;
				break;
			
			case 0x00000004:
				iVar0 = 0x00000004;
				iVar1 = 0x00000002;
				break;
			
			case 0x00000005:
				iVar0 = 0x00000005;
				iVar1 = 0x00000000;
				break;
			
			case 0x00000006:
				iVar0 = 0x00000006;
				iVar1 = 0x00000000;
				break;
			
			case 0x00000007:
				iVar0 = 0x00000007;
				iVar1 = 0x00000000;
				break;
			
			case 0x00000008:
				iVar0 = 0x00000008;
				iVar1 = 0x00000000;
				break;
			
			default:
				break;
		}
		func_393(&Local_113, 0x0000005B, "", "", iVar0, iVar1, 0x00000000, 0x00000000);
		iLocal_513 = 0x00000000;
	}
}

void func_393(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 <= 0x00000000 || func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 <= 0x00000000 || func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 <= 0x00000000 || func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 <= 0x00000000 || func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 > 0x00000000 && !func_402())
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
				if (iParam5 <= 0x00000000 || func_402())
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
			MemCopy(&(Global_1C0180.f_ADC.f_9), {func_401(iParam1)}, 0x00000010);
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
				if (func_400(Global_440000.f_38DB3) || func_397(Global_440000.f_38DB3))
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
				else if (func_396(Global_440000.f_38DB3))
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
			MemCopy(&(uParam0->f_2C.f_3.f_1[0x00000000 /*16*/].f_8), {func_395(iParam4)}, 0x00000008);
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
	Global_1C0180.f_B0A = func_394(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_394(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 0x00000010);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_350(iParam1))
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

struct<6> func_395(int iParam0)
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

bool func_396(int iParam0)
{
	return iParam0 == 0x0000004A;
}

var func_397(int iParam0)
{
	return (func_399(iParam0) || func_398(iParam0));
}

bool func_398(int iParam0)
{
	return iParam0 == 0x0000002C;
}

bool func_399(int iParam0)
{
	return iParam0 == 0x0000002D;
}

bool func_400(int iParam0)
{
	return iParam0 == 0x0000000C;
}

struct<6> func_401(int iParam0)
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

int func_402()
{
	if (((((((((((Global_440000.f_127B9 == 0x00000001 || Global_440000.f_127B9 == 0x00000003) || Global_440000.f_127B9 == 0x00000005) || Global_440000.f_127B9 == 0x00000007) || Global_440000.f_127B9 == 0x00000013) || Global_440000.f_127B9 == 0x00000008) || Global_440000.f_127B9 == 0x00000009) || Global_440000.f_127B9 == 0x0000000B) || Global_440000.f_127B9 == 0x0000000D) || Global_440000.f_127B9 == 0x00000015) || Global_440000.f_127B9 == 0x00000017) || Global_440000.f_127B9 == 0x00000019)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_403(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

void func_404()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	int iVar5;
	
	unk_0xF3D5CA5E09CE41C7();
	func_487();
	func_485(Local_530);
	if (Local_530 == 0x00000001)
	{
		if ((Local_531.f_6 > 0x00000007 && Local_531.f_6 < 0x00000011) || (Local_531.f_8 == 0x00000001 && Local_531.f_6 < 0x00000002))
		{
			unk_0xD60411959D5D930B(0f);
		}
		else if (Local_531.f_6 < 0x00000008)
		{
			unk_0xD60411959D5D930B(0.4f);
		}
		else
		{
			unk_0xD60411959D5D930B(0.1f);
		}
	}
	else if (Local_531.f_8 == 0x00000001 && Local_531.f_6 < 0x00000003)
	{
		unk_0xD60411959D5D930B(0f);
	}
	else
	{
		unk_0xD60411959D5D930B(0.1f);
	}
	switch (iLocal_525)
	{
		case 0x00000000:
			if (Local_530.f_1 == 0x00000003)
			{
				unk_0x55D0A2DB35045A35(iLocal_572);
				unk_0x8C26F31DFF77D124();
			}
			iLocal_526 = 0x00000000;
			iLocal_780 = 0xFFFFFFFF;
			iLocal_956 = unk_0x1C0640BA9A7327B3();
			iLocal_952 = 0xFFFFFFFF;
			func_484();
			iLocal_1106 = 0x00000001;
			func_474(0x00000001);
			iLocal_539 = Local_531.f_B;
			iLocal_540 = unk_0x1C0640BA9A7327B3() + 7500;
			if (Local_530.f_1 != 0x00000003 && Global_1B416.f_618E.f_5 < 0x00000003)
			{
				func_473("FM_IHELP_SLP", 0xFFFFFFFF);
				Global_1B416.f_618E.f_5++;
			}
			iLocal_525 = 0x00000001;
			break;
		
		case 0x00000001:
			func_447(0x00000001, 0x00000000);
			func_446();
			func_430();
			func_423();
			func_421();
			if (iLocal_529 > unk_0x1C0640BA9A7327B3())
			{
				unk_0x9501364A300048C6();
			}
			if (func_420())
			{
				iLocal_523 = 0x00000004;
				iLocal_524 = 0x00000005;
				iLocal_525 = 0x00000000;
			}
			if (func_407() && func_474(0x00000001))
			{
				if (Local_530.f_1 == 0x00000003)
				{
					unk_0xAD4193DCC43BF34B("RADIO_16_SILVERLAKE");
					unk_0x8910D3D58E0132B8("SEA_RACE_DURING_RACE");
					unk_0x8BC9595FD2792B5D("SEA_RACES_OUTRO");
				}
				else
				{
					unk_0x8910D3D58E0132B8("STREET_RACE_DURING_RACE");
					unk_0x8BC9595FD2792B5D("STREET_RACE_OUTRO");
				}
				vVar4 = { Local_532[(Local_532.f_F8 - 0x00000001) /*3*/] };
				unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &uVar3);
				if (iLocal_546 != 0x00000000)
				{
					unk_0xE223EB8FE6F8CC15(iLocal_546);
				}
				iLocal_546 = unk_0x1B26E47E3E30075B(0x0000000A, vVar4 + Vector(6f, 0f, 0f), Local_532[0x00000000 /*3*/], (8.5f * 1.333f), iVar0, iVar1, iVar2, 0x000000B4, 0x00000000);
				iLocal_525 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			iVar5 = unk_0xA30EC016B12C03E4();
			if (unk_0xE1DBBD6CE209517C(iVar5))
			{
				if (unk_0x3114787DB5A129EF(iVar5, 0x00000000))
				{
					unk_0x0D00405AED37B7C4(iVar5, 0x00000000);
				}
			}
			if (func_175(0x00000000))
			{
				func_173(0x00000000);
			}
			func_406();
			iLocal_524 = 0x00000003;
			iLocal_525 = 0x00000000;
			break;
	}
	func_405();
}

void func_405()
{
	switch (iLocal_527)
	{
		case 0x00000000:
			if (iLocal_528 > 0x00000000)
			{
				if (unk_0x1C0640BA9A7327B3() < iLocal_528)
				{
					if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000047))
					{
						if (func_178(vLocal_18.x) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), vLocal_18.x))
						{
							if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(vLocal_18.x)))
							{
								unk_0x26174EF2CA74767F(vLocal_18.x, 0x00000001);
							}
							unk_0x82A772610883F395("RaceTurbo", 0x00000000, 0x00000000);
							iLocal_528 = unk_0x1C0640BA9A7327B3() + 2000;
							iLocal_527 = 0x00000001;
						}
					}
				}
				else
				{
					iLocal_527 = 0x00000002;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0x1C0640BA9A7327B3() > iLocal_528)
			{
				if (func_178(vLocal_18.x) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), vLocal_18.x))
				{
					if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(vLocal_18.x)))
					{
						unk_0x26174EF2CA74767F(vLocal_18.x, 0x00000000);
					}
					iLocal_527 = 0x00000002;
				}
			}
			else if (func_178(vLocal_18.x) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), vLocal_18.x))
			{
				unk_0xDFC6BA855748EB10(vLocal_18.x, 0x00000000, 0f, 25f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			}
			break;
	}
}

void func_406()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000E)
	{
		func_146(&(Local_536[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

int func_407()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
		{
			iLocal_523 = 0x00000006;
			iLocal_524 = 0x00000005;
			iLocal_525 = 0x00000000;
			return 0x00000000;
		}
	}
	if (unk_0xC844350D5D58C99A(vLocal_18.x))
	{
		if (unk_0xDF1306B443CD3D15(vLocal_18.x, 0x00000000) && !func_419())
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), vLocal_18.x, 0x00000000))
			{
				func_417();
				func_410();
				return 0x00000001;
			}
			else if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				iLocal_523 = 0x00000004;
				iLocal_524 = 0x00000005;
				iLocal_525 = 0x00000000;
			}
			else
			{
				func_179(0x00000000);
				if (func_409("RACES_RHELP") && unk_0x1C0640BA9A7327B3() > iLocal_754)
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (!unk_0xE4EDC4B0E92C078B(vLocal_18.y) && !(Local_530.f_1 == 0x00000002 && (unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000000, 0x000003E8) || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000001, 0x000003E8))))
				{
					vLocal_18.y = unk_0x5C3B41825F6AC5A0(vLocal_18.x);
					unk_0x321E019A46034F39(vLocal_18.y, 0x00000001);
					unk_0x516E63E474722206(vLocal_18.y, 1f);
					if (Local_530.f_1 == 0x00000003)
					{
						unk_0xC92DB9682A650680("MGSR_FELL_OFF");
					}
					if (vLocal_18.z == 0x00000000)
					{
						vLocal_18.z = 0x00000001;
						switch (Local_530.f_1)
						{
							case 0x00000001:
								func_408("BIKE_BACK", 0x00001D4C, 0x00000001);
								break;
							
							case 0x00000002:
								func_408("CAR_BACK", 0x00001D4C, 0x00000001);
								break;
							
							case 0x00000003:
								func_408("SEA_BACK", 0x00001D4C, 0x00000001);
								break;
							}
						}
					}
			}
		}
		else
		{
			func_417();
			iLocal_523 = 0x00000003;
			iLocal_524 = 0x00000005;
			iLocal_525 = 0x00000000;
		}
	}
	return 0x00000000;
}

void func_408(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

bool func_409(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_410()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (func_9(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000110, 0x00000001);
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
			{
				iLocal_779 = 0x00000001;
				iLocal_526 = 0x00000003;
			}
			if (!func_409("RACES_RHELP"))
			{
				if (!func_416())
				{
					func_415("RACES_RHELP");
					iLocal_754 = unk_0x1C0640BA9A7327B3() + 1000;
				}
				if (((unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000002, 0x00007530) || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000003, 0x0000EA60)) || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000000, 0x00004E20)) || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000001, 0x00000BB8))
				{
					func_415("RACES_RHELP");
					iLocal_754 = unk_0x1C0640BA9A7327B3() + 1000;
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > iLocal_754)
			{
				if ((((func_416() || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000002, 0x00007530)) || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000003, 0x0000EA60)) || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000000, 0x00004E20)) || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000001, 0x00000BB8))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
		}
	}
	if ((unk_0x06F8112AA79C53D9(0x00000000, 0x0000004B) || unk_0x7FEE810EE9E768EB(0x00000000, 0x0000004B)) || iLocal_779 == 0x00000001)
	{
		switch (iLocal_526)
		{
			case 0x00000000:
				iLocal_780 = unk_0x1C0640BA9A7327B3();
				iLocal_526 = 0x00000001;
				break;
			
			case 0x00000001:
				if ((unk_0x1C0640BA9A7327B3() - iLocal_780) > 0x000001F4)
				{
					iLocal_780 = unk_0x1C0640BA9A7327B3();
					iLocal_526 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				func_414((unk_0x1C0640BA9A7327B3() - iLocal_780), 0x000005DC, "RACES_RMETER", 0x00000006, 0x00000000, 0x0000000A, -1f, -1f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
				if ((unk_0x1C0640BA9A7327B3() - iLocal_780) >= 0x00000190)
				{
					unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
				}
				if ((unk_0x1C0640BA9A7327B3() - iLocal_780) >= 0x000005DC)
				{
					iLocal_526 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
				if (unk_0xC844350D5D58C99A(vLocal_18.x))
				{
					if (Local_531.f_6 > 0x00000000)
					{
						vVar4 = { Local_532[(Local_531.f_6 - 0x00000001) /*3*/] };
					}
					else
					{
						vVar4 = { Local_532.f_B5[Local_532.f_F9 /*3*/] };
					}
					unk_0x9414396734E14897(sLocal_773, vVar4, &iVar0);
					iVar1 = iVar0 + 1;
					if (iVar1 >= iLocal_946)
					{
						iVar1 = 0x00000000;
					}
					unk_0xEF8F639897C675D5(sLocal_773, iVar0, &vVar2);
					unk_0xEF8F639897C675D5(sLocal_773, iVar1, &vVar3);
					if (!unk_0x558ADED8B93EA0F6(vVar2, 5f) || func_413(vLocal_18.x, vVar2, 0x00000001) < 5f)
					{
						unk_0xA47B46945FF6DE74(vLocal_18.x, vVar2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						func_411(vLocal_18.x, vVar3);
						unk_0x51B954DAB1BCAF73(vLocal_18.x);
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), vLocal_18.x, 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), vLocal_18.x, 0xFFFFFFFF);
						}
						unk_0xEF6276132B396452(0f, 0x3F800000);
						unk_0x2FB9A57162E54BAB(0f);
						if (func_409("RACES_RHELP"))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
						iLocal_526 = 0x00000004;
					}
				}
				break;
			
			case 0x00000004:
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
				if (!unk_0x06F8112AA79C53D9(0x00000000, 0x0000004B) && !unk_0x7FEE810EE9E768EB(0x00000000, 0x0000004B))
				{
					unk_0xEAB026E686C0D991(0x00000000, 0x0000004B, 0x00000001);
					iLocal_780 = 0xFFFFFFFF;
					iLocal_779 = 0x00000000;
					iLocal_526 = 0x00000000;
				}
				break;
		}
	}
	else
	{
		iLocal_780 = 0xFFFFFFFF;
		iLocal_779 = 0x00000000;
		iLocal_526 = 0x00000000;
	}
}

void func_411(int iParam0, vector3 vParam1)
{
	float fVar0;
	
	fVar0 = func_412(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1, 0x00000001);
	unk_0xD8F6A53F4799FAFE(iParam0, fVar0);
}

float func_412(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 0x00000001)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_413(int iParam0, vector3 vParam1, bool bParam2)
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

void func_414(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_259(0x00000000, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_258(0x00000000, iVar0);
		Global_150976.f_46F[iVar0] = iParam0;
		Global_150976.f_46F.f_B[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_46F.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_46F.f_C2[iVar0] = iParam3;
		Global_150976.f_46F.f_B7[iVar0] = iParam4;
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

void func_415(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_416()
{
	if (unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
	{
		if (Local_530.f_1 == 0x00000002 || Local_530.f_1 == 0x00000001)
		{
			return 0x00000000;
		}
		else if (iLocal_771 >= 0x00000000)
		{
			iLocal_771 = 0xFFFFFFFF;
		}
	}
	else if (Local_530.f_1 == 0x00000003)
	{
		if (unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
		{
			iLocal_771 = 0xFFFFFFFF;
			return 0x00000001;
		}
		if (iLocal_771 < 0x00000000)
		{
			iLocal_771 = unk_0x1C0640BA9A7327B3() + 2000;
		}
		else if (unk_0x1C0640BA9A7327B3() > iLocal_771)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_417()
{
	if (unk_0xE4EDC4B0E92C078B(vLocal_18.y))
	{
		unk_0x142CC44DB769B57E(&(vLocal_18.f_1));
		if (Local_530.f_1 == 0x00000003)
		{
			unk_0xC92DB9682A650680("MGSR_BACK_ON");
		}
	}
	if ((func_418("CAR_BACK", 0x00000000, 0x00000000) || func_418("BIKE_BACK", 0x00000000, 0x00000000)) || func_418("SEA_BACK", 0x00000000, 0x00000000))
	{
		unk_0x790015DC92C918E2();
	}
}

var func_418(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

int func_419()
{
	if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), vLocal_18.x, 0x00000000) && Local_530.f_1 == 0x00000002)
	{
		if (unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000000, 0x000003E8) || unk_0x7B5606C651AB51B5(vLocal_18.x, 0x00000001, 0x000003E8))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_420()
{
	int iVar0;
	
	if (iLocal_952 < 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (Local_532.f_F9 - 0x00000001))
		{
			if (Local_536[iVar0 /*18*/].f_9 > Local_532.f_F7)
			{
				iLocal_952 = (unk_0x1C0640BA9A7327B3() + 0x0001D4C0);
			}
			iVar0++;
		}
	}
	if (iLocal_952 > 0x00000000)
	{
		if (unk_0x1C0640BA9A7327B3() > iLocal_952)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_421()
{
	int iVar0;
	
	if (iLocal_1106 && Local_530 == 0x00000001)
	{
		unk_0x9414396734E14897(sLocal_773, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), &iVar0);
		if (iVar0 > 0x00000032 && iVar0 < 0x00000046)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_1105))
			{
				unk_0x523BCC9DC80CD82F(joaat("baller"));
				if (unk_0xB87F6CF6E5628C67(joaat("baller")))
				{
					iLocal_1105 = unk_0x122AAB0B1D6F55AD(joaat("baller"), -1080.728f, 454.4489f, 76.54124f, -32.27425f, 0x00000001, 0x00000001, 0x00000000);
				}
			}
		}
		else if (iVar0 > 0x0000005A)
		{
			if (unk_0xC844350D5D58C99A(iLocal_1105))
			{
				unk_0x71199B01895C6202(joaat("baller"));
				func_422(&iLocal_1105);
				iLocal_1106 = 0x00000000;
			}
		}
	}
}

void func_422(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0x00000000);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_423()
{
	if (func_167() == 0x00000001)
	{
		if (Local_531.f_B < iLocal_539)
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_540 && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), vLocal_18.x, 0x00000000))
			{
				func_428(unk_0x16F2683693E537C9(), "RACE_RANKUP", "FRANKLIN_NORMAL", 0x0000000A);
				iLocal_539 = Local_531.f_B;
				iLocal_540 = unk_0x1C0640BA9A7327B3() + 7500;
			}
			else
			{
				iLocal_539 = Local_531.f_B;
			}
		}
		else if (Local_531.f_B > iLocal_539)
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_540 && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), vLocal_18.x, 0x00000000))
			{
				func_428(unk_0x16F2683693E537C9(), "RACE_RANKDOWN", "FRANKLIN_NORMAL", 0x0000000A);
				iLocal_539 = Local_531.f_B;
				iLocal_540 = unk_0x1C0640BA9A7327B3() + 7500;
			}
			else
			{
				iLocal_539 = Local_531.f_B;
			}
		}
		if (func_178(vLocal_18.x))
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_540 && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), vLocal_18.x, 0x00000000))
			{
				if (func_427())
				{
					func_428(unk_0x16F2683693E537C9(), "RACE_CRASH", "FRANKLIN_NORMAL", 0x0000000A);
					iLocal_540 = unk_0x1C0640BA9A7327B3() + 7500;
				}
			}
		}
	}
	if (Local_530.f_1 != 0x00000003)
	{
		if (func_426(unk_0x16F2683693E537C9()))
		{
			if (iLocal_541 < 0x00000000)
			{
				iLocal_541 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x000009C4, 0x00001388));
			}
			else if (unk_0x1C0640BA9A7327B3() > iLocal_541)
			{
				unk_0xCEAA091B490F8407(iLocal_542, "DISTANT_RACERS", Local_536[func_424() /*18*/].f_6, "ROAD_RACE_SOUNDSET", 0x00000000, 0x00000000);
				iLocal_541 = 0xFFFFFFFF;
			}
		}
		else if (iLocal_541 > 0x00000000)
		{
			iLocal_541 = 0xFFFFFFFF;
		}
	}
}

int func_424()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 0f;
	fVar2 = 1E+10f;
	iVar0 = 0x00000000;
	while (iVar0 <= (Local_532.f_F9 - 0x00000001))
	{
		if (func_178(Local_536[iVar0 /*18*/].f_6))
		{
			fVar1 = func_425(unk_0x16F2683693E537C9(), Local_536[iVar0 /*18*/].f_6, 0x00000001);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

float func_425(int iParam0, int iParam1, bool bParam2)
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

int func_426(int iParam0)
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

int func_427()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Local_532.f_F9 - 0x00000001))
	{
		if (func_178(Local_536[iVar0 /*18*/].f_6))
		{
			if (unk_0x1B3D109B39CC2C89(vLocal_18.x, Local_536[iVar0 /*18*/].f_6))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_428(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_429(iParam3), 0x00000000);
}

int func_429(int iParam0)
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

void func_430()
{
	if ((((Local_530 == 0x00000005 || Local_530 == 0x00000006) || Local_530 == 0x00000007) || Local_530 == 0x00000008) || Local_530 == 0x00000001)
	{
		func_445();
		func_444((unk_0x1C0640BA9A7327B3() - Local_531.f_5), 0x00000000, "", Local_531.f_B, Local_532.f_F9 + 1, "", 0x00000000, 0x00000001, Local_531.f_6, Local_531.f_7, "", 0x00000001, 0x00000001, 0xFFFFFFFF, "", -1f, 0x00000001, -1f, iLocal_510, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
	}
	else
	{
		func_443();
		func_359(0x00000001, 0xFFFFFFFF);
		if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000014))
		{
			if (!Global_180528)
			{
				Global_180528 = 0x00000001;
			}
		}
		else if (Global_180528)
		{
			Global_180528 = 0x00000000;
		}
		func_445();
		func_431((unk_0x1C0640BA9A7327B3() - Local_531.f_5), 0x00000000, "", Local_531.f_8, Local_532.f_F7, "", Local_531.f_B, Local_532.f_F9 + 1, "", 0x00000000, 0x00000001, Local_531.f_6, Local_531.f_7, "", 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, "", 0x00000006, Local_531.f_A, "", (unk_0x1C0640BA9A7327B3() - Local_531.f_9), "", 0x00000000, 0x00000001, 0xFFFFFFFF, "", -1f, 0x00000001, 0x00000001, -1f, iLocal_510, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000);
	}
}

void func_431(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, char* sParam17, int iParam18, int iParam19, char* sParam20, int iParam21, char* sParam22, int iParam23, bool bParam24, int iParam25, char* sParam26, float fParam27, int iParam28, int iParam29, float fParam30, int iParam31, bool bParam32, int iParam33, int iParam34, char* sParam35, bool bParam36)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	char* sVar11;
	
	if (bParam24)
	{
		iVar0 = 0x00000001;
	}
	else
	{
		iVar0 = 0x00000000;
	}
	if (iParam34 != 0xFFFFFFFF)
	{
		func_257(iParam34, "TIMER_CHALLTIME", iParam9, iVar0, iParam25, 0x00000000, 0x0000000A, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	func_442();
	if (fParam27 > -1f)
	{
		func_439(0x00000000, "", iParam25, iParam28, 0x0000000A, 0x00000000, sParam26, 0x00000001, fParam27, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam15 > 0xFFFFFFFF)
	{
		sVar1 = sParam17;
		if (func_438(sVar1))
		{
			sVar1 = "TIM_DAMAGE";
		}
		func_414(iParam15, iParam16, sVar1, iParam18, iParam25, 0x0000000A, -1f, -1f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (!bParam32 || func_437())
	{
		if (iParam6 > 0xFFFFFFFF && iParam7 > 0x00000000)
		{
			sVar2 = sParam8;
			if (func_438(sVar2))
			{
				sVar2 = "TIM_POSIT";
			}
			func_436(iParam6, iParam7, sVar2, iParam10, iParam25, 0x00000007, 0x00000000, 0x00000000, 0x00000000, iParam10, 0x00000000);
		}
	}
	if (iParam3 > 0xFFFFFFFF)
	{
		sVar3 = sParam5;
		if (func_438(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam3 = iParam3;
		iParam4 = iParam4;
		if (Global_180528)
		{
			if (func_435())
			{
				func_434(iParam3, iParam4, sVar3, iParam25, 0x00000001, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x000000FF, 0x00000000);
			}
		}
	}
	if (iParam11 > 0xFFFFFFFF && iParam12 > 0xFFFFFFFF)
	{
		sVar4 = sParam13;
		if (func_438(sVar4))
		{
			sVar4 = "TIM_CHECKPOIN";
		}
		iParam14 = iParam14;
		if (Global_180528)
		{
			func_436(iParam11, iParam12, sVar4, iParam14, iParam25, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
	}
	if (fParam30 > -1f)
	{
		sVar5 = "TIM_DISTANCE";
		sVar6 = "FMMC_LENGTHM";
		func_439(0x00000000, sVar5, 0xFFFFFFFF, 0x00000001, 0x00000007, 0x00000000, sVar6, 0x00000001, fParam30, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam19 > 0xFFFFFFFF)
	{
		sVar7 = sParam20;
		if (func_438(sVar7))
		{
			sVar7 = "TIMER_BESLAP";
		}
	}
	if ((((Global_440000.f_127B9 != 0x00000001 && Global_440000.f_127B9 != 0x00000003) && Global_440000.f_127B9 != 0x00000005) && Global_440000.f_127B9 != 0x00000007) && Global_440000.f_127B9 != 0x00000013)
	{
		if (iParam21 > 0xFFFFFFFF)
		{
			if (!func_18(unk_0xD803B885F5E47A62()))
			{
				sVar8 = sParam22;
				if (func_438(sVar8))
				{
					sVar8 = "TIMER_CURLAP";
				}
				func_257(iParam21, sVar8, 0x00000000, 0x00000001, iParam25, iParam23, 0x00000006, 0x00000000, iParam29, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
		}
	}
	if (func_438(sVar9))
	{
		sVar9 = func_433(iParam1);
	}
	if (!bParam36)
	{
		if ((bParam32 || Global_180528) || func_432() == 0x00000002)
		{
			if (bParam32)
			{
				if (Global_180528 && !unk_0xEA6BC48857E0AC4C(sParam35))
				{
					func_257(iParam31, sParam35, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000, iParam31 <= 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				else if (iParam31 <= 0x00000000)
				{
					func_257(iParam31, sVar9, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				else
				{
					func_257(iParam31, sVar9, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
			else if (func_432() == 0x00000002 && !unk_0xEA6BC48857E0AC4C(sParam35))
			{
				func_257(iParam31, sParam35, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000, iParam31 <= 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else if (iParam31 <= 0x00000000)
			{
				func_257(iParam31, sVar9, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else
			{
				func_257(iParam31, sVar9, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
		}
	}
	else if (Global_180528 || func_432() == 0x00000002)
	{
		if (iParam19 <= 0x00000000)
		{
			func_257(iParam19, sParam20, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
		else
		{
			func_257(iParam19, sParam20, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
	}
	sVar10 = sParam2;
	if (func_438(sVar10))
	{
		sVar10 = "TIMER_TIME_RCE";
	}
	if (iParam0 > 0xFFFFFFFF)
	{
		func_257(iParam0, sVar10, iParam9, iVar0, iParam25, 0x00000000, 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	if (func_438(sVar11))
	{
		sVar11 = "TIMER_CHALLTIME";
	}
	iParam33 = iParam33;
}

int func_432()
{
	return Global_150392.f_44;
}

char* func_433(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "TIMER_WORLDTIME";
			break;
		
		case 0x00000001:
			return "FRIEND_WORLDTIME";
			break;
		
		case 0x00000002:
			return "CREW_WORLDTIME";
			break;
		
		case 0x00000003:
			return "PERS_WORLDTIME";
			break;
	}
	return "";
}

void func_434(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_259(0x00000004, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_258(0x00000004, iVar0);
		Global_150976.f_CC8[iVar0] = iParam0;
		Global_150976.f_CC8.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_CC8.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_CC8.f_B7[iVar0] = iParam3;
		Global_150976.f_CC8.f_D8[iVar0] = iParam5;
		Global_150976.f_CC8.f_C2[iVar0] = iParam4;
		Global_150976.f_CC8.f_E3[iVar0] = iParam6;
		Global_150976.f_CC8.f_10E[iVar0] = iParam7;
		Global_150976.f_CC8.f_119[iVar0] = iParam8;
		Global_150976.f_CC8.f_124[iVar0] = iParam9;
		Global_150976.f_CC8.f_12F[iVar0] = iParam10;
		Global_150976.f_CC8.f_13A[iVar0] = iParam11;
		Global_150976.f_CC8.f_145[iVar0] = iParam13;
		Global_150976.f_CC8.f_150[iVar0] = iParam14;
		Global_150976.f_CC8.f_15B[iVar0] = iParam15;
		if (((iParam0 > 0x00000009 && iParam1 > 0x00000009) && unk_0x0EFF6B4415DAF4A1()) && iParam12)
		{
			Global_150976.f_46A = 0x00000001;
		}
	}
}

int func_435()
{
	return 0x00000001;
	return 0x00000000;
}

void func_436(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_259(0x00000005, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_258(0x00000005, iVar0);
		Global_150976.f_E2E[iVar0] = iParam0;
		Global_150976.f_E2E.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_E2E.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_E2E.f_C2[iVar0] = uParam3;
		Global_150976.f_E2E.f_B7[iVar0] = iParam4;
		Global_150976.f_E2E.f_D8[iVar0] = iParam5;
		Global_150976.f_E2E.f_E3[iVar0] = iParam6;
		Global_150976.f_E2E.f_10E[iVar0] = iParam7;
		Global_150976.f_E2E.f_119[iVar0] = iParam8;
		Global_150976.f_E2E.f_124[iVar0] = iParam9;
		Global_150976.f_E2E.f_12F[iVar0] = iParam10;
	}
}

bool func_437()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000002);
}

int func_438(char* sParam0)
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

void func_439(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_259(0x00000006, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_258(0x00000006, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
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
		if (iParam15 == 0x00000005 && func_441())
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
			if (func_440())
			{
				Global_150976.f_46E = 0x00000001;
			}
		}
	}
}

int func_440()
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

int func_441()
{
	if (((unk_0xB3260A60545D3F11() == 0x00000008 || unk_0xB3260A60545D3F11() == 0x00000009) || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_442()
{
	char* sVar0;
	int iVar1;
	
	if ((Global_140643 == 0x00000001 || Global_14064A == 0x00000001) || Global_14063F.f_3 == 0x00000001)
	{
		if (Global_140643 == 0x00000001)
		{
			sVar0 = "HUD_SPIKES";
			iVar1 = 0x00000001;
		}
		else if (Global_14064A == 0x00000001)
		{
			switch (Global_14064A.f_1)
			{
				case 0x00000000:
					iVar1 = 0x00000002;
					sVar0 = "HUD_ROCKET";
					break;
				
				case 0x00000001:
					iVar1 = 0x00000003;
					sVar0 = "HUD_ROCKET_H";
					break;
				
				case 0x00000002:
					iVar1 = 0x00000002;
					sVar0 = "HUD_ROCKET_NH";
					break;
			}
		}
		else if (Global_14063F.f_3 == 0x00000001)
		{
			sVar0 = "HUD_BOOSTS";
			iVar1 = 0x00000004;
		}
		func_439(0x00000001, sVar0, 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, "", 0x00000000, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar1, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	else if (Global_14065A == 0x00000001)
	{
		sVar0 = "HUD_VEH_GUN";
		iVar1 = 0x00000009;
		func_439(Global_14065A.f_1, sVar0, 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, "", 0x00000000, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar1, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
}

void func_443()
{
	switch (iLocal_573)
	{
		case 0x00000001:
			iLocal_574 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
			if (unk_0x83D8570832F172A7(iLocal_574))
			{
				iLocal_573 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			unk_0x7E60C62A7CE58FC8(iLocal_574, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x7ACC3006A87F8B39("BM_LAP_STR");
			unk_0x3A820E495A7BA3E5(0x00000001);
			unk_0x6B012227B3921E18("BM_LAP");
			unk_0x3A820E495A7BA3E5(0x00000001);
			unk_0x6D99DF8263D35CE5(Local_531.f_8);
			unk_0x3A820E495A7BA3E5(0x00000001);
			unk_0x6D99DF8263D35CE5(Local_532.f_F7);
			unk_0x779B34565F4D71B1();
			unk_0x7A8BB56B212464AC();
			iLocal_575 = unk_0x1C0640BA9A7327B3() + 3000;
			iLocal_573 = 0x00000003;
			break;
		
		case 0x00000003:
			if (unk_0x1C0640BA9A7327B3() < (iLocal_575 - 0x000001F4))
			{
				if (unk_0x83D8570832F172A7(iLocal_574))
				{
					unk_0x6567AE843FADBA94(iLocal_574, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					unk_0xD9ACBBA59FD5A09E(0x00000004);
				}
			}
			else
			{
				unk_0x7E60C62A7CE58FC8(iLocal_574, "SHARD_ANIM_OUT");
				unk_0x3CAEA85DA607305E(0x00000001);
				unk_0x7C19E5E4784BD7CF(0.33f);
				unk_0x7E60D21B163E9D56();
				iLocal_573 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (unk_0x1C0640BA9A7327B3() < iLocal_575)
			{
				if (unk_0x83D8570832F172A7(iLocal_574))
				{
					unk_0x6567AE843FADBA94(iLocal_574, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					unk_0xD9ACBBA59FD5A09E(0x00000004);
				}
			}
			else
			{
				if (unk_0x83D8570832F172A7(iLocal_574))
				{
					unk_0xE17FDF9E3068281B(&iLocal_574);
				}
				iLocal_573 = 0x00000000;
			}
			break;
	}
}

void func_444(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, char* sParam22)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	
	if (bParam12)
	{
		iVar0 = 0x00000001;
	}
	else
	{
		iVar0 = 0x00000000;
	}
	if (iParam21 != 0xFFFFFFFF)
	{
		func_257(iParam21, "TIMER_CHALLTIME", iParam6, iVar0, iParam13, 0x00000000, 0x0000000A, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	func_442();
	if (fParam15 > -1f)
	{
		func_439(0x00000000, "", iParam13, iParam16, 0x00000008, 0x00000000, sParam14, 0x00000001, fParam15, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (!bParam19 || func_437())
	{
		if (iParam3 > 0xFFFFFFFF && iParam4 > 0x00000000)
		{
			sVar1 = sParam5;
			if (func_438(sVar1))
			{
				sVar1 = "TIM_POSIT";
			}
			func_436(iParam3, iParam4, sVar1, iParam7, iParam13, 0x00000007, 0x00000000, 0x00000000, 0x00000000, iParam7, 0x00000000);
		}
	}
	if (iParam8 > 0xFFFFFFFF && iParam9 > 0xFFFFFFFF)
	{
		sVar2 = sParam10;
		if (func_438(sVar2))
		{
			sVar2 = "TIM_CHECKPOIN";
		}
		iParam11 = iParam11;
		if (Global_180528)
		{
			func_436(iParam8, iParam9, sVar2, iParam11, iParam13, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
	}
	if (fParam17 > -1f)
	{
		sVar3 = "TIM_DISTANCE";
		sVar4 = "FMMC_LENGTHM";
		func_439(0x00000000, sVar3, 0xFFFFFFFF, 0x00000001, 0x00000006, 0x00000000, sVar4, 0x00000001, fParam17, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	sVar5 = sParam2;
	if (func_438(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE";
	}
	func_257(iParam0, sVar5, iParam6, iVar0, iParam13, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	if (func_438(sVar6))
	{
		sVar6 = func_433(iParam1);
	}
	if ((bParam19 || Global_180528) || func_432() == 0x00000002)
	{
		if (bParam19)
		{
			if (Global_180528 && !unk_0xEA6BC48857E0AC4C(sParam22))
			{
				func_257(iParam18, sParam22, iParam6, iVar0, iParam13, 0x00000000, 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000, iParam18 <= 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else if (iParam18 <= 0x00000000)
			{
				func_257(iParam18, sVar6, iParam6, iVar0, iParam13, 0x00000000, 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else
			{
				func_257(iParam18, sVar6, iParam6, iVar0, iParam13, 0x00000000, 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
		}
		else if (func_432() == 0x00000002 && !unk_0xEA6BC48857E0AC4C(sParam22))
		{
			func_257(iParam18, sParam22, iParam6, iVar0, iParam13, 0x00000000, 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000, iParam18 <= 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
		else if (iParam18 <= 0x00000000)
		{
			func_257(iParam18, sVar6, iParam6, iVar0, iParam13, 0x00000000, 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
		else
		{
			func_257(iParam18, sVar6, iParam6, iVar0, iParam13, 0x00000000, 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
	}
	if (func_438(sVar7))
	{
		sVar7 = "TIMER_CHALLTIME";
	}
	iParam20 = iParam20;
}

void func_445()
{
	Global_150976.f_46A = 0x00000001;
}

void func_446()
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		Local_531.f_B = 0x00000001;
		iVar0 = Local_531.f_6;
		fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_532[Local_531.f_6 /*3*/], 0x00000001);
		if (fVar1 > (fLocal_548 + 100f))
		{
			iVar2 = Local_531.f_6 + 1;
			if (iVar2 >= Local_532.f_F8)
			{
				iVar2 = 0x00000000;
			}
			fVar3 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_532[iVar2 /*3*/], 0x00000001);
			fVar4 = (unk_0x0EB28750412C3A5A(Local_532[iVar2 /*3*/], Local_532[Local_531.f_6 /*3*/], 0x00000001) + 20f);
			if (fVar3 < fVar4)
			{
				iLocal_523 = 0x00000005;
			}
			else
			{
				iLocal_523 = 0x00000004;
			}
			iLocal_524 = 0x00000005;
			iLocal_525 = 0x00000000;
			return;
		}
		else if (fVar1 > (fLocal_548 + 7.5f))
		{
			iVar5 = 0x00000000;
			fVar6 = 9999f;
			iVar5 = 0x00000000;
			while (iVar5 < Local_532.f_F8)
			{
				if (iVar5 < Local_531.f_6)
				{
					fVar7 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_532[iVar5 /*3*/], 0x00000001);
					if (fVar7 < fVar6)
					{
						fVar6 = fVar7;
						iVar0 = iVar5;
					}
				}
				iVar5++;
			}
		}
		iVar9 = 0x00000000;
		iVar9 = 0x00000000;
		while (iVar9 < Local_532.f_F9)
		{
			if (func_10(Local_536[iVar9 /*18*/].f_3))
			{
				if (Local_536[iVar9 /*18*/] == 0x00000003)
				{
					Local_531.f_B++;
				}
				else if (Local_536[iVar9 /*18*/].f_9 > Local_531.f_8)
				{
					Local_531.f_B++;
				}
				else if (Local_536[iVar9 /*18*/].f_9 == Local_531.f_8)
				{
					if (Local_536[iVar9 /*18*/].f_8 > iVar0)
					{
						Local_531.f_B++;
					}
					else if (Local_536[iVar9 /*18*/].f_8 == iVar0)
					{
						fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_532[iVar0 /*3*/], 0x00000001);
						fVar8 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Local_536[iVar9 /*18*/].f_6, 0x00000001), Local_532[Local_536[iVar9 /*18*/].f_8 /*3*/], 0x00000001);
						if (fVar8 < fVar1)
						{
							Local_531.f_B++;
						}
					}
				}
			}
			iVar9++;
		}
	}
}

void func_447(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Local_532.f_F9 - 0x00000001))
	{
		func_449(iVar0, iParam0, iParam1);
		iVar0++;
	}
	func_448();
}

void func_448()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x1C0640BA9A7327B3() > iLocal_550)
	{
		fVar1 = 1E+07f;
		iVar3 = 0x00000000;
		while (iVar3 <= (Local_532.f_F9 - 0x00000001))
		{
			if (func_178(Local_536[iVar3 /*18*/].f_6))
			{
				fVar0 = func_425(unk_0x16F2683693E537C9(), Local_536[iVar3 /*18*/].f_6, 0x00000001);
				if (fVar0 < fVar1)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
			iVar3++;
		}
		if (Local_530.f_1 == 0x00000003)
		{
			if (iLocal_549 > 0xFFFFFFFF && func_178(Local_536[iLocal_549 /*18*/].f_6))
			{
				unk_0x06FF977AA95DCCE3(Local_536[iLocal_549 /*18*/].f_6, 0x00000000);
				unk_0x2E1E5367A885F9B7(Local_536[iLocal_549 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0x00000000);
			}
			if (func_178(Local_536[iVar2 /*18*/].f_6))
			{
				unk_0x2E1E5367A885F9B7(Local_536[iVar2 /*18*/].f_6, "SEA_RACE_DURING_RACE_COLSEST_NPC", 0x00000000);
			}
		}
		else
		{
			if (iLocal_549 > 0xFFFFFFFF && func_178(Local_536[iLocal_549 /*18*/].f_6))
			{
				unk_0x06FF977AA95DCCE3(Local_536[iLocal_549 /*18*/].f_6, 0x00000000);
				unk_0x2E1E5367A885F9B7(Local_536[iLocal_549 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0x00000000);
			}
			if (func_178(Local_536[iVar2 /*18*/].f_6))
			{
				unk_0x2E1E5367A885F9B7(Local_536[iVar2 /*18*/].f_6, "STREET_RACE_NPC_CLOSEST", 0x00000000);
			}
		}
		iLocal_549 = iVar2;
		iLocal_550 = unk_0x1C0640BA9A7327B3() + 2000;
	}
}

void func_449(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (iParam0 >= 0x00000000 || iParam0 < Local_532.f_F9)
	{
		if (func_465(iParam0))
		{
			func_461(iParam0, iParam2);
			if (!unk_0xC42A92762C58E1B9(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, 0x00000000))
			{
				if (!unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001), 3f))
				{
					func_460(iParam0);
				}
				else
				{
					func_459(iParam0);
				}
			}
			else if (func_458(iParam0))
			{
				if (!unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001), 3f))
				{
					func_460(iParam0);
				}
			}
			else
			{
				func_457(iParam0);
				func_456(iParam0);
				switch (Local_536[iParam0 /*18*/])
				{
					case 0x00000000:
						Local_536[iParam0 /*18*/].f_8 = 0x00000000;
						Local_536[iParam0 /*18*/].f_9 = 0x00000001;
						if (Local_530.f_1 == 0x00000002)
						{
							if (uParam1 || iParam0 != 0x00000006)
							{
								unk_0xD1F0F33C375B8446(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, 0x0000001E, iParam0 + 1 * 100);
							}
						}
						Local_536[iParam0 /*18*/] = 0x00000001;
						break;
					
					case 0x00000001:
						if (((unk_0x1C0640BA9A7327B3() - Local_531.f_5) > iParam0 + 1 * 100 || Local_530.f_1 != 0x00000002) && unk_0x1C2E18E9C63BEB77(sLocal_773))
						{
							Local_536[iParam0 /*18*/].f_2 = func_455(iParam0);
							if ((((Local_530 == 0x00000000 || Local_530 == 0x00000001) || Local_530 == 0x00000002) || Local_530 == 0x00000003) || Local_530 == 0x00000004)
							{
								if ((iParam0 == 0x00000000 || iParam0 == 0x00000002) || iParam0 == 0x00000004)
								{
									iVar0 = 0x00000000;
								}
								else
								{
									iVar0 = 0x00000001;
								}
								vVar1 = { unk_0x68E4ADDDDCD7BDDE(Local_536[iVar0 /*18*/].f_6, 0f, 20f, 0f) };
								fVar2 = func_413(Local_536[iParam0 /*18*/].f_6, vVar1, 0x00000001);
								unk_0xDD353D0E9C789D0E(&iVar3);
								unk_0xE9362E4D600DD12A(0x00000000, Local_536[iParam0 /*18*/].f_6, vVar1, Local_536[iParam0 /*18*/].f_2, 0x00000001, unk_0x134B62B726CEC8E6(Local_536[iParam0 /*18*/].f_6), 0x010C0024, 3f, fVar2);
								unk_0x1B901F542DF070CF(0x00000000, Local_536[iParam0 /*18*/].f_6, sLocal_773, 0x000C0024, 0x00000000, 0x00000018, 0xFFFFFFFF, Local_536[iParam0 /*18*/].f_2, iLocal_538, 2f);
								unk_0x75ABDC5F81978924(iVar3);
								unk_0x78ADC381772E3D54(Local_536[iParam0 /*18*/].f_3, iVar3);
								unk_0xF82EA857DA10E0CD(&iVar3);
							}
							else
							{
								unk_0x1B901F542DF070CF(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, sLocal_773, 0x000C0024, 0x00000000, 0x00000010, 0xFFFFFFFF, Local_536[iParam0 /*18*/].f_2, iLocal_538, 2f);
							}
							Local_536[iParam0 /*18*/] = 0x00000002;
						}
						break;
					
					case 0x00000002:
						if (func_454(iParam0) && Local_536[iParam0 /*18*/].f_F != 0x00000001)
						{
							func_452(iParam0);
						}
						Local_536[iParam0 /*18*/].f_A = 0x00000000;
						break;
					
					case 0x00000003:
						break;
					}
			}
			func_450(&(Local_536[iParam0 /*18*/].f_7), Local_536[iParam0 /*18*/].f_6, 0x00000001, 0x41200000, 0x00000001);
		}
	}
}

void func_450(var uParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam4 == 0x00000001 && !unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		*uParam0 = func_451(unk_0x68F4C0EC296D3901(iParam1, 0x00000001), 0x00000000);
		if (bParam2)
		{
			unk_0x61755AC17D8F538E(*uParam0, 0x00000003);
			unk_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_FRIEND");
		}
		else
		{
			unk_0x61755AC17D8F538E(*uParam0, 0x00000001);
			unk_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_ENEMY");
		}
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x516E63E474722206(*uParam0, 0.7f);
		}
	}
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(*uParam0) };
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		vVar0.x = (vVar0.x + ((vVar1.x - vVar0.x) / fParam3));
		vVar0.y = (vVar0.y + ((vVar1.y - vVar0.y) / fParam3));
		vVar0.z = (vVar0.z + ((vVar1.z - vVar0.z) / fParam3));
		unk_0x2F9282246F89FFD1(*uParam0, vVar0);
	}
}

int func_451(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_154(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_452(int iParam0)
{
	int iVar0;
	
	if (Local_532.f_F7 == 0x00000000)
	{
		iVar0 = (Local_532.f_F8 - 0x00000002);
	}
	else
	{
		iVar0 = (Local_532.f_F8 - 0x00000001);
	}
	if (Local_536[iParam0 /*18*/].f_8 == iVar0)
	{
		Local_536[iParam0 /*18*/].f_8 = 0x00000000;
		Local_536[iParam0 /*18*/].f_9++;
		if (Local_536[iParam0 /*18*/].f_9 > Local_532.f_F7)
		{
			unk_0xE072601B4380E9DF(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, 30f, 0x000C0024);
		}
	}
	else
	{
		Local_536[iParam0 /*18*/].f_8++;
	}
	if (Local_536[iParam0 /*18*/] == 0x00000002)
	{
		func_453(iParam0);
	}
}

void func_453(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_455(iParam0);
	fVar1 = func_425(Local_536[iParam0 /*18*/].f_6, unk_0x16F2683693E537C9(), 0x00000001);
	if ((Local_536[iParam0 /*18*/].f_8 - 0x00000001) < Local_531.f_6)
	{
		if (fVar1 > 50f)
		{
			fVar0 = (fVar0 + (fVar0 * 1f));
		}
		else if (fVar1 > 25f)
		{
			fVar0 = (fVar0 + (fVar0 * 0.7f));
		}
		else
		{
			fVar0 = (fVar0 + (fVar0 * 0.3f));
		}
	}
	else if (fVar1 > 100f)
	{
		fVar0 = (fVar0 - (fVar0 * 0.3f));
	}
	else if (fVar1 > 25f)
	{
		fVar0 = (fVar0 - (fVar0 * 0.1f));
	}
	if (Local_536[iParam0 /*18*/].f_2 != fVar0)
	{
		Local_536[iParam0 /*18*/].f_2 = fVar0;
		unk_0x06736587AE5BE33B(Local_536[iParam0 /*18*/].f_3, fVar0);
	}
}

int func_454(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	vVar0 = { unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001) };
	if (unk_0x0EB28750412C3A5A(vVar0, Local_532[Local_536[iParam0 /*18*/].f_8 /*3*/], 0x00000000) <= 12f)
	{
		return 0x00000001;
	}
	iVar2 = 0x00000000;
	unk_0x9414396734E14897(sLocal_773, unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001), &iVar1);
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if ((iVar1 - iVar2) > 0x00000000)
		{
			unk_0xEF8F639897C675D5(sLocal_773, (iVar1 - iVar2), &vVar0);
			if (unk_0x0EB28750412C3A5A(vVar0, Local_532[Local_536[iParam0 /*18*/].f_8 /*3*/], 0x00000000) <= 12f)
			{
				return 0x00000001;
			}
		}
		iVar2++;
	}
	return 0x00000000;
}

float func_455(int iParam0)
{
	var uVar0;
	
	switch (Local_536[iParam0 /*18*/].f_1)
	{
		case 0x00000000:
			uVar0 = Local_532.f_FA;
			break;
		
		case 0x00000001:
			uVar0 = Local_532.f_FB;
			break;
		
		case 0x00000002:
			uVar0 = Local_532.f_FC;
			break;
	}
	return uVar0;
}

void func_456(int iParam0)
{
	if (func_178(vLocal_18.x) && func_9(unk_0x16F2683693E537C9()))
	{
		if (Local_536[iParam0 /*18*/].f_D)
		{
			if (unk_0x1B3D109B39CC2C89(vLocal_18.x, Local_536[iParam0 /*18*/].f_6))
			{
				Local_536[iParam0 /*18*/].f_D = 0x00000000;
				Local_536[iParam0 /*18*/].f_E = unk_0x1C0640BA9A7327B3() + 4000;
			}
		}
		else if (Local_536[iParam0 /*18*/].f_E > unk_0x1C0640BA9A7327B3())
		{
			unk_0x50155CDC2C5335FC(Local_536[iParam0 /*18*/].f_3, 0x00000001, unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 0x00000000, 0x00000096, 0x00000190);
		}
		else
		{
			Local_536[iParam0 /*18*/].f_D = 0x00000001;
		}
	}
}

void func_457(int iParam0)
{
	vector3 vVar0;
	
	switch (Local_536[iParam0 /*18*/].f_B)
	{
		case 0x00000000:
			vVar0 = { unk_0x5293C88BD2F4DE13(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001)) };
			if ((vVar0.x > -2f && vVar0.x < 2f) || iParam0 == 0x00000000)
			{
				Local_536[iParam0 /*18*/].f_C = unk_0x1C0640BA9A7327B3() + 2000;
				Local_536[iParam0 /*18*/].f_B = 0x00000001;
			}
			else
			{
				Local_536[iParam0 /*18*/].f_B = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (unk_0x1C0640BA9A7327B3() > Local_536[iParam0 /*18*/].f_C)
			{
				Local_536[iParam0 /*18*/].f_B = 0x00000002;
			}
			else
			{
				unk_0xDFC6BA855748EB10(Local_536[iParam0 /*18*/].f_6, 0x00000000, 0f, 25f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			}
			break;
	}
}

int func_458(int iParam0)
{
	if (Local_530.f_1 == 0x00000002)
	{
		if ((unk_0x377BE9A1BF38C7CE(Local_536[iParam0 /*18*/].f_6) || unk_0x7B5606C651AB51B5(Local_536[iParam0 /*18*/].f_6, 0x00000000, 0x00001B58)) || unk_0x7B5606C651AB51B5(Local_536[iParam0 /*18*/].f_6, 0x00000001, 0x00009C40))
		{
			return 0x00000001;
		}
	}
	if (unk_0x70EED0761B82965E(Local_536[iParam0 /*18*/].f_6))
	{
		if (Local_530.f_1 == 0x00000002 || Local_530.f_1 == 0x00000001)
		{
			return 0x00000001;
		}
	}
	if (unk_0x7B5606C651AB51B5(Local_536[iParam0 /*18*/].f_6, 0x00000002, 0x00007530) || unk_0x7B5606C651AB51B5(Local_536[iParam0 /*18*/].f_6, 0x00000003, 0x00007530))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_459(int iParam0)
{
	int iVar0;
	
	if (Local_536[iParam0 /*18*/].f_A == 0x00000000)
	{
		unk_0x9414396734E14897(sLocal_773, unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001), &iVar0);
		unk_0xDD353D0E9C789D0E(&iLocal_774);
		unk_0x5B1D360B9C6F0A09(0x00000000, Local_536[iParam0 /*18*/].f_6, 0x00002710, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
		unk_0x1B901F542DF070CF(0x00000000, Local_536[iParam0 /*18*/].f_6, sLocal_773, 0x000C0024, iVar0, 0x00000010, 0xFFFFFFFF, (func_455(iParam0) * 2f), iLocal_538, 2f);
		unk_0x75ABDC5F81978924(iLocal_774);
		unk_0x78ADC381772E3D54(Local_536[iParam0 /*18*/].f_3, iLocal_774);
		unk_0xF82EA857DA10E0CD(&iLocal_774);
		Local_536[iParam0 /*18*/].f_A = 0x00000001;
	}
}

void func_460(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	unk_0x9414396734E14897(sLocal_773, unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001), &iVar0);
	unk_0xEF8F639897C675D5(sLocal_773, iVar0, &vVar1);
	unk_0xEF8F639897C675D5(sLocal_773, iVar0 + 1, &vVar2);
	if (!unk_0x8E28E832BEAC3DCE(vVar1, 3f))
	{
		if (!unk_0x558ADED8B93EA0F6(vVar1, 5f) || func_413(Local_536[iParam0 /*18*/].f_6, vVar1, 0x00000001) < 5f)
		{
			unk_0xA47B46945FF6DE74(Local_536[iParam0 /*18*/].f_6, vVar1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			func_411(Local_536[iParam0 /*18*/].f_6, vVar2);
			if (!unk_0xC42A92762C58E1B9(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, 0x00000000))
			{
				unk_0xF821F915BC24D246(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, 0xFFFFFFFF);
			}
			unk_0x1B901F542DF070CF(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, sLocal_773, 0x000C0024, iVar0, 0x00000010, 0xFFFFFFFF, (func_455(iParam0) * 2f), iLocal_538, 2f);
			iLocal_529 = unk_0x1C0640BA9A7327B3() + 1500;
			iLocal_529 = iLocal_529;
		}
	}
}

void func_461(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar9;
	
	if (iParam1 && iParam0 == (Local_532.f_F9 - 0x00000001))
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 30f;
	}
	switch (Local_536[iParam0 /*18*/].f_F)
	{
		case 0x00000000:
			if (((func_464(iParam0, iParam1) && unk_0xC42A92762C58E1B9(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, 0x00000000)) && unk_0xDD4B920CF5E7E9EC(Local_536[iParam0 /*18*/].f_6)) && unk_0x1C2E18E9C63BEB77(sLocal_773))
			{
				iVar1 = unk_0x6B63E065F442DAD2(Local_536[iParam0 /*18*/].f_6);
				if (iVar1 < 0x00000001)
				{
					iVar1 = 0x00000001;
				}
				if (iVar1 < iLocal_946)
				{
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar3 = 0x00000001;
				}
				if ((unk_0x9414396734E14897(sLocal_773, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), &iVar2) && unk_0xEF8F639897C675D5(sLocal_773, iVar3, &vVar5)) && unk_0xEF8F639897C675D5(sLocal_773, iVar2, &vVar6))
				{
					fVar4 = unk_0x0EB28750412C3A5A(vVar6, vVar5, 0x00000001);
					if (((((fVar4 > 40f || Local_536[iParam0 /*18*/].f_9 < Local_531.f_8) && !func_463(unk_0x16F2683693E537C9(), Local_536[iParam0 /*18*/].f_6, fVar0, 0x00000001)) && !func_462(unk_0x16F2683693E537C9(), vVar5, fVar0)) && !unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001), 5f)) && !unk_0x8E28E832BEAC3DCE(vVar5, 5f))
					{
						if (iParam1 && iParam0 == (Local_532.f_F9 - 0x00000001))
						{
							Local_536[iParam0 /*18*/].f_11 = unk_0x1C0640BA9A7327B3() + 90;
						}
						else
						{
							Local_536[iParam0 /*18*/].f_11 = (unk_0x1C0640BA9A7327B3() + 100 + iParam0 * 10);
						}
						Local_536[iParam0 /*18*/].f_10 = iVar3;
						Local_536[iParam0 /*18*/].f_F = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (Local_536[iParam0 /*18*/].f_10 < iLocal_946)
			{
				iVar7 = Local_536[iParam0 /*18*/].f_10 + 1;
			}
			else
			{
				iVar7 = 0x00000001;
			}
			if (unk_0xEF8F639897C675D5(sLocal_773, Local_536[iParam0 /*18*/].f_10, &vVar8))
			{
				if (((((func_463(unk_0x16F2683693E537C9(), Local_536[iParam0 /*18*/].f_6, fVar0, 0x00000001) || func_462(unk_0x16F2683693E537C9(), vVar8, fVar0)) || unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(Local_536[iParam0 /*18*/].f_6, 0x00000001), 5f)) || unk_0x8E28E832BEAC3DCE(vVar8, 5f)) || (Local_536[iParam0 /*18*/].f_9 == Local_531.f_8 && Local_536[iParam0 /*18*/].f_8 >= Local_531.f_6)) || Local_536[iParam0 /*18*/].f_9 > Local_531.f_8)
				{
					unk_0x1B901F542DF070CF(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, sLocal_773, 0x000C0024, iVar7, 0x00000010, 0xFFFFFFFF, func_455(iParam0), iLocal_538, 2f);
					if (Local_530.f_1 == 0x00000003)
					{
						unk_0x1AEF7184B203A58D(Local_536[iParam0 /*18*/].f_6, (func_455(iParam0) * 0.25f));
					}
					else
					{
						unk_0x1AEF7184B203A58D(Local_536[iParam0 /*18*/].f_6, (func_455(iParam0) * 0.5f));
					}
					Local_536[iParam0 /*18*/].f_F = 0x00000000;
				}
				else if (unk_0x1C0640BA9A7327B3() > Local_536[iParam0 /*18*/].f_11)
				{
					if (!unk_0x558ADED8B93EA0F6(vVar8, 5f) || func_462(Local_536[iParam0 /*18*/].f_6, vVar8, 5f))
					{
						if (unk_0xEF8F639897C675D5(sLocal_773, iVar7, &vVar9))
						{
							unk_0xA47B46945FF6DE74(Local_536[iParam0 /*18*/].f_6, vVar8, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							func_411(Local_536[iParam0 /*18*/].f_6, vVar9);
							if (unk_0x0EB28750412C3A5A(vVar8, Local_532[Local_536[iParam0 /*18*/].f_8 /*3*/], 0x00000000) <= (12f * 2f))
							{
								func_452(iParam0);
							}
							Local_536[iParam0 /*18*/].f_10 = iVar7;
							Local_536[iParam0 /*18*/].f_11 = (unk_0x1C0640BA9A7327B3() + 100 + iParam0 * 10);
							if (!unk_0xC42A92762C58E1B9(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, 0x00000000))
							{
								unk_0xF821F915BC24D246(Local_536[iParam0 /*18*/].f_3, Local_536[iParam0 /*18*/].f_6, 0xFFFFFFFF);
							}
							iLocal_529 = unk_0x1C0640BA9A7327B3() + 1500;
							iLocal_529 = iLocal_529;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			break;
	}
}

bool func_462(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

bool func_463(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, bParam3), unk_0x68F4C0EC296D3901(iParam1, bParam3)) <= (fParam2 * fParam2);
}

int func_464(int iParam0, int iParam1)
{
	if (Local_536[iParam0 /*18*/].f_9 < Local_531.f_8)
	{
		return 0x00000001;
	}
	if (Local_536[iParam0 /*18*/].f_9 > Local_531.f_8)
	{
		return 0x00000000;
	}
	if (Local_536[iParam0 /*18*/].f_9 == Local_531.f_8 && Local_536[iParam0 /*18*/].f_8 >= Local_531.f_6)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000000)
	{
		return 0x00000001;
	}
	if (iParam1 && iParam0 != (Local_532.f_F9 - 0x00000001))
	{
		return 0x00000001;
	}
	if ((iParam1 && iParam0 == (Local_532.f_F9 - 0x00000001)) && Local_536[iParam0 /*18*/].f_8 > 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_465(int iParam0)
{
	if (unk_0xC844350D5D58C99A(Local_536[iParam0 /*18*/].f_3))
	{
		if (unk_0x437347B10A200C4B(Local_536[iParam0 /*18*/].f_3, 0x00000000))
		{
			iLocal_523 = 0x00000002;
			iLocal_524 = 0x00000005;
			iLocal_525 = 0x00000000;
		}
		else if (unk_0xEB6A8945D1AC98A1(Local_536[iParam0 /*18*/].f_3))
		{
			iLocal_523 = 0x00000002;
			iLocal_524 = 0x00000005;
			iLocal_525 = 0x00000000;
		}
		else if (func_466(Local_536[iParam0 /*18*/].f_3, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
		{
			iLocal_523 = 0x00000001;
			iLocal_524 = 0x00000005;
			iLocal_525 = 0x00000000;
		}
	}
	if (unk_0xC844350D5D58C99A(Local_536[iParam0 /*18*/].f_6))
	{
		if (unk_0x437347B10A200C4B(Local_536[iParam0 /*18*/].f_6, 0x00000000))
		{
			iLocal_523 = 0x00000002;
			iLocal_524 = 0x00000005;
			iLocal_525 = 0x00000000;
		}
		else if (unk_0xB87D13D0C064E9D1(Local_536[iParam0 /*18*/].f_6, unk_0x16F2683693E537C9(), 0x00000000))
		{
			iLocal_523 = 0x00000001;
			iLocal_524 = 0x00000005;
			iLocal_525 = 0x00000000;
		}
	}
	if (func_10(Local_536[iParam0 /*18*/].f_3) && func_10(Local_536[iParam0 /*18*/].f_6))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_466(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0x00000000)
	{
		iVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		iVar0 = 2f;
	}
	if (func_10(unk_0x16F2683693E537C9()) && func_10(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 0x00000001);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			iVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_472(iParam0, bParam1, iVar0, fVar1))
			{
				return 0x00000001;
			}
			if (func_467(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
		else
		{
			if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iVar0, 0x00000001))
					{
						return 0x00000001;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					iVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_472(iParam0, bParam1, iVar0, fVar1))
				{
					return 0x00000001;
				}
			}
			if (func_467(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_467(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_grenade"), fParam1, 0x00000001) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_molotov"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_smokegrenade"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_stickybomb"), 5f, 0x00000001))
		{
			if (bParam3)
			{
				if (func_468(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_468(iParam0, fParam1))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x723EE7F83DF1497D(vVar0, vVar1, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_468(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0x00000000) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0x00000000))
	{
		if (func_469(iParam0, vVar1, 90f, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_469(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_471(vParam1 - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_471(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_470(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_470(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_471(vector3 vParam0)
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

int func_472(int iParam0, bool bParam1, int iParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fParam3, fParam3, fParam3, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iParam2, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_473(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_474(bool bParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		func_476(bParam0);
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_532[Local_531.f_6 /*3*/], 0x00000001) <= 12f)
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0x00000000);
			if (Local_531.f_6 == (Local_531.f_7 - 0x00000001))
			{
				iVar0 = (unk_0x1C0640BA9A7327B3() - Local_531.f_9);
				if (Local_531.f_A < 0x00000000 || Local_531.f_A > iVar0)
				{
					Local_531.f_A = iVar0;
				}
				Local_531.f_9 = unk_0x1C0640BA9A7327B3();
				if (Local_531.f_8 == Local_532.f_F7)
				{
					func_180();
					return 0x00000001;
				}
				else
				{
					Local_531.f_8++;
					Local_531.f_6 = 0x00000000;
					iLocal_573 = 0x00000001;
				}
			}
			else
			{
				Local_531.f_6++;
			}
			func_475();
			func_180();
		}
	}
	return 0x00000000;
}

void func_475()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		fLocal_548 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_532[Local_531.f_6 /*3*/], 0x00000001);
	}
}

void func_476(bool bParam0)
{
	int iVar0;
	
	iVar0 = Local_531.f_6 + 1;
	if (Local_530.f_5)
	{
		if (Local_531.f_6 == (Local_532.f_F8 - 0x00000001))
		{
			func_478((Local_532.f_F8 - 0x00000001), 0x00000001, bParam0);
		}
		else
		{
			func_478(Local_531.f_6, 0x00000000, bParam0);
			if (iVar0 == (Local_532.f_F8 - 0x00000001))
			{
				func_477(Local_532[iVar0 /*3*/], 0x00000001);
			}
			else
			{
				func_477(Local_532[iVar0 /*3*/], 0x00000000);
			}
		}
	}
	else if (Local_531.f_6 == (Local_532.f_F8 - 0x00000001))
	{
		if (Local_531.f_8 == Local_532.f_F7)
		{
			func_478(Local_531.f_6, 0x00000001, bParam0);
		}
		else
		{
			func_478(Local_531.f_6, 0x00000000, bParam0);
			func_477(Local_532[0x00000000 /*3*/], 0x00000000);
		}
	}
	else
	{
		func_478(Local_531.f_6, 0x00000000, bParam0);
		if (iVar0 == (Local_532.f_F8 - 0x00000001))
		{
			func_477(Local_532[iVar0 /*3*/], 0x00000001);
		}
		else
		{
			func_477(Local_532[iVar0 /*3*/], 0x00000000);
		}
	}
}

void func_477(vector3 vParam0, bool bParam1)
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_544))
	{
		iLocal_544 = unk_0x6CC513A908911CF0(vParam0);
		unk_0xF2D30B8ACAF12A39(iLocal_544, 0x00000000);
		if (!bParam1)
		{
			unk_0x61755AC17D8F538E(iLocal_544, 0x00000005);
			unk_0x516E63E474722206(iLocal_544, 0.7f);
		}
		else if (Local_531.f_8 == Local_532.f_F7)
		{
			unk_0xBC8E0A7390523199(iLocal_544, 0x00000026);
			unk_0x516E63E474722206(iLocal_544, 1.2f);
		}
		unk_0xDC5B2F9D0CCE3A10(iLocal_544, "BLIP_CPOINT");
	}
}

void func_478(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	bool bVar17;
	
	iVar9 = func_483(iParam0);
	unk_0xA402F6C87C08815C(0x0000000D, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xA402F6C87C08815C(0x00000086, &iVar4, &iVar5, &iVar6, &uVar7);
	iVar3 = func_482(iParam0);
	if (unk_0xE4EDC4B0E92C078B(iLocal_543))
	{
		if (iLocal_545 != 0x00000000)
		{
			unk_0xF0B0A50DF3EA0E70(iLocal_545, iVar0, iVar1, iVar2, iVar3);
			unk_0xF08C5AE8AC5C7427(iLocal_545, iVar4, iVar5, iVar6, iVar3);
		}
	}
	else
	{
		vVar10 = { Local_532[iParam0 /*3*/] };
		vVar13 = { vVar10 };
		vVar13.z = (vVar13.z + 20f);
		bVar17 = 0x00000000;
		if (unk_0xE82754C349C7B581(vVar13, &fVar16, 0x00000000, 0x00000000))
		{
			if (fVar16 > (vVar10.z + 1f))
			{
				fVar14 = ((7.5f * 1f) * 0.66f);
				fVar15 = 2f;
				bVar17 = 0x00000001;
			}
			else
			{
				fVar14 = (8.5f * 1.333f);
				fVar15 = 6f;
			}
		}
		else
		{
			fVar14 = (8.5f * 1.333f);
			fVar15 = 6f;
		}
		if (iParam0 == (Local_532.f_F8 - 0x00000001))
		{
			vVar11 = { Local_532[0x00000000 /*3*/] };
		}
		else
		{
			vVar11 = { Local_532[iParam0 + 1 /*3*/] };
		}
		iVar8 = (iParam0 - 0x00000001);
		if (iVar8 < 0x00000000)
		{
			iVar8 = (Local_532.f_F8 - 0x00000001);
		}
		vVar12 = { Local_532[iVar8 /*3*/] };
		iLocal_543 = unk_0x6CC513A908911CF0(vVar10);
		unk_0xF2D30B8ACAF12A39(iLocal_543, 0x00000000);
		if (!bParam1)
		{
			unk_0x61755AC17D8F538E(iLocal_543, 0x00000005);
			unk_0x516E63E474722206(iLocal_543, 1.2f);
			unk_0x2A065371C9D96655(iLocal_543, 0x00000009);
			if (bVar17)
			{
				switch (iVar9)
				{
					case 0x00000013:
					case 0x00000008:
						iVar9 = 0x0000000E;
						break;
					
					case 0x00000012:
					case 0x00000007:
						iVar9 = 0x0000000D;
						break;
					
					case 0x00000011:
					case 0x00000006:
						iVar9 = 0x0000000C;
						break;
					}
			}
			iLocal_545 = unk_0x1B26E47E3E30075B(iVar9, vVar10 + Vector(fVar15, 0f, 0f), vVar11, fVar14, iVar0, iVar1, iVar2, iVar3, 0x00000000);
			unk_0xF08C5AE8AC5C7427(iLocal_545, iVar4, iVar5, iVar6, iVar3);
			func_479(iLocal_545, vVar10);
		}
		else
		{
			unk_0xBC8E0A7390523199(iLocal_543, 0x00000026);
			unk_0x2A065371C9D96655(iLocal_543, 0x00000007);
			unk_0x516E63E474722206(iLocal_543, 1.2f);
			iLocal_545 = unk_0x1B26E47E3E30075B(0x0000000A, vVar10 + Vector(fVar15, 0f, 0f), vVar11, fVar14, iVar0, iVar1, iVar2, iVar3, 0x00000000);
			unk_0xF08C5AE8AC5C7427(iLocal_545, iVar4, iVar5, iVar6, iVar3);
			func_479(iLocal_545, vVar10);
		}
		if (bParam2)
		{
			iVar9 = func_483(iVar8);
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iLocal_547);
			iLocal_547 = 0x000000B4;
			if (iLocal_546 != 0x00000000)
			{
				unk_0xE223EB8FE6F8CC15(iLocal_546);
			}
			iLocal_546 = unk_0x1B26E47E3E30075B(iVar9, vVar12 + Vector(fVar15, 0f, 0f), vVar10, fVar14, iVar0, iVar1, iVar2, iLocal_547, 0x00000000);
		}
		if (Local_530.f_1 == 0x00000003)
		{
			unk_0x39BB9CA9BC90525F(iLocal_545, 16f, 16f, 100f);
			unk_0x39BB9CA9BC90525F(iLocal_546, 16f, 16f, 100f);
		}
		else
		{
			unk_0x39BB9CA9BC90525F(iLocal_545, 9.5f, 9.5f, 100f);
			unk_0x39BB9CA9BC90525F(iLocal_546, 9.5f, 9.5f, 100f);
		}
		unk_0xDC5B2F9D0CCE3A10(iLocal_543, "BLIP_CPOINT");
	}
	if (iLocal_546 != 0x00000000)
	{
		iLocal_547 = (iLocal_547 - 0x00000019);
		if (iLocal_547 > 0x00000000)
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xF0B0A50DF3EA0E70(iLocal_546, iVar0, iVar1, iVar2, iLocal_547);
		}
		else
		{
			unk_0xE223EB8FE6F8CC15(iLocal_546);
		}
	}
}

void func_479(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1[8];
	float fVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000007)
	{
		vVar1[iVar0 /*3*/] = { vParam1 + func_481(iVar0) };
		unk_0xE82754C349C7B581(vVar1[iVar0 /*3*/], &fVar2, 0x00000000, 0x00000000);
		if (fVar2 < (vParam1.z - 2f) || fVar2 > (vParam1.z + 2f))
		{
			vVar1[iVar0 /*3*/].f_2 = vParam1.z;
		}
		else
		{
			vVar1[iVar0 /*3*/].f_2 = fVar2;
		}
		iVar0++;
	}
	vVar3 = { func_480(&vVar1) };
	unk_0x94BC93E0CAEF9AB6(iParam0, vParam1 - Vector(0.3f, 0f, 0f), vVar3);
}

Vector3 func_480(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		vVar1 = { *(uParam0[iVar0 /*3*/]) };
		vVar2 = { *(uParam0[(iVar0 + 1 % *uParam0) /*3*/]) };
		vVar3.x = (vVar3.x + ((vVar1.y - vVar2.y) * (vVar1.z + vVar2.z)));
		vVar3.y = (vVar3.y + ((vVar1.z - vVar2.z) * (vVar1.x + vVar2.x)));
		vVar3.z = (vVar3.z + ((vVar1.x - vVar2.x) * (vVar1.y + vVar2.y)));
		iVar0++;
	}
	return func_471(vVar3);
}

Vector3 func_481(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0f, 0f, 1f;
		
		case 0x00000001:
			return (7.5f / 2f), 0f, 1f;
		
		case 0x00000002:
			return (-7.5f / 2f), 0f, 1f;
		
		case 0x00000003:
			return 0f, (7.5f / 2f), 1f;
		
		case 0x00000004:
			return 0f, (-7.5f / 2f), 1f;
		
		case 0x00000005:
			return (7.5f / 2f), (7.5f / 2f), 1f;
		
		case 0x00000006:
			return (-7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 0x00000007:
			return (7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 0x00000008:
			return (-7.5f / 2f), (7.5f / 2f), 1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_482(int iParam0)
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0x000000F0;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		fVar0 = unk_0x0EB28750412C3A5A(Local_532[iParam0 /*3*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001);
		if (fVar0 > 100f)
		{
			iVar1 = 0x000000F0;
		}
		else
		{
			iVar1 = SYSTEM::ROUND((fVar0 * 2.4f));
		}
	}
	return iVar1;
}

int func_483(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	vVar0 = { Local_532[iParam0 /*3*/] };
	if (iParam0 + 1 == Local_532.f_F8)
	{
		vVar1 = { Local_532[0x00000000 /*3*/] };
	}
	else
	{
		vVar1 = { Local_532[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 0x00000001) >= 0x00000000)
	{
		vVar2 = { Local_532[(iParam0 - 0x00000001) /*3*/] };
	}
	vVar3 = { vVar2 - vVar0 };
	vVar4 = { vVar1 - vVar0 };
	fVar5 = unk_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, vVar4.x, vVar4.y);
	if (fVar5 > 180f)
	{
		fVar5 = (360f - fVar5);
	}
	if (fVar5 < fLocal_30)
	{
		return 0x00000008;
	}
	else if (fVar5 < fLocal_31)
	{
		return 0x00000007;
	}
	else if (fVar5 < fLocal_32)
	{
		return 0x00000006;
	}
	else
	{
		return 0x00000006;
	}
	return 0x00000006;
}

void func_484()
{
	iLocal_542 = unk_0xD68EA767274B7444();
	iLocal_541 = 0xFFFFFFFF;
}

void func_485(int iParam0)
{
	if ((!bLocal_512 && unk_0x1963B11DE70153E0()) && unk_0x8BB6DE13A9F3105E())
	{
		switch (iParam0)
		{
			case 0x00000000:
				iLocal_509 = 0x00000000;
				break;
			
			case 0x00000001:
				iLocal_509 = 0x00000001;
				break;
			
			case 0x00000002:
				iLocal_509 = 0x00000002;
				break;
			
			case 0x00000003:
				iLocal_509 = 0x00000003;
				break;
			
			case 0x00000004:
				iLocal_509 = 0x00000004;
				break;
			
			case 0x00000005:
				iLocal_509 = 0x00000005;
				break;
			
			case 0x00000006:
				iLocal_509 = 0x00000006;
				break;
			
			case 0x00000007:
				iLocal_509 = 0x00000007;
				break;
			
			case 0x00000008:
				iLocal_509 = 0x00000008;
				break;
		}
		bLocal_512 = func_486(&uLocal_506, &uLocal_507, &uLocal_508, iLocal_509, &iLocal_510, &iLocal_511);
	}
}

int func_486(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	struct<69> Var0;
	struct<69> Var1;
	struct<13> Var2;
	struct<4> Var3;
	struct<13> Var4;
	
	Var0.f_3.f_1 = 0x00000004;
	Var1.f_3.f_1 = 0x00000004;
	Var2.f_13.f_1 = 0x00000004;
	Var4 = { func_251(unk_0xD803B885F5E47A62()) };
	Var0 = 0x00000331;
	Var0.f_1 = 0x00000005;
	Var0.f_3 = 0x00000003;
	StringCopy(&(Var0.f_3.f_1[0x00000000 /*16*/]), "GameType", 32);
	StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/]), "Location", 32);
	StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/]), "Type", 32);
	StringCopy(&(Var0.f_3.f_1[0x00000000 /*16*/].f_8), "SP", 32);
	switch (iParam3)
	{
		case 0x00000000:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_1", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 0x00000001:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_2", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 0x00000002:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_4", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 0x00000003:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_5", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 0x00000004:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGCR_6", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 0x00000005:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGSR_1", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 0x00000006:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGSR_2", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 0x00000007:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGSR_3", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 0x00000008:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "MGSR_4", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 0x00000064:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "OR_RACE_01", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 0x00000065:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "OR_RACE_02", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 0x00000066:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "OR_RACE_03", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 0x00000067:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "OR_RACE_04", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 0x00000068:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "OR_RACE_05", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 0x00000069:
			StringCopy(&(Var0.f_3.f_1[0x00000001 /*16*/].f_8), "OR_RACE_06", 32);
			StringCopy(&(Var0.f_3.f_1[0x00000002 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		default:
			break;
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (func_330(uParam1, uParam2, &Var0, 0x00000001, 0x00000001))
			{
				func_338(&Var3, &Var0);
				if (*uParam2 && unk_0x54F772BC86327092(&Var3))
				{
					if (Var3.f_3 > 0x00000000)
					{
						unk_0xBC584396476EE48A(0x00000000, &Var2);
						if (!func_306(Var2))
						{
							*uParam0 = 0x00000002;
						}
						else
						{
							*iParam4 = unk_0x14B893B11D05C490(0x00000000, 0x00000003);
							*uParam0 = 0x00000001;
						}
					}
					else
					{
						*uParam0 = 0x00000002;
					}
					unk_0xC4492EA0CF4852F9();
				}
				else
				{
					*uParam0 = 0x00000002;
				}
				func_235(uParam1, uParam2, &Var0);
				Var0 = { Var1 };
			}
			break;
		
		case 0x00000001:
			if (func_376(uParam1, uParam2, &Var0, &Var4))
			{
				func_338(&Var3, &Var0);
				if (*uParam2 && unk_0x54F772BC86327092(&Var3))
				{
					if (Var3.f_3 > 0x00000000)
					{
						unk_0xBC584396476EE48A(0x00000000, &Var2);
						if (!func_306(Var2))
						{
							*uParam0 = 0x00000002;
						}
						else
						{
							*iParam5 = unk_0x14B893B11D05C490(0x00000000, 0x00000003);
							*uParam0 = 0x00000002;
						}
					}
					else
					{
						*uParam0 = 0x00000002;
					}
					unk_0xC4492EA0CF4852F9();
				}
				else
				{
					*uParam0 = 0x00000002;
				}
				func_235(uParam1, uParam2, &Var0);
				Var0 = { Var1 };
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_487()
{
	Global_56C3.f_6 = 0x00000001;
}

void func_488()
{
	int iVar0;
	int iVar1;
	
	unk_0xD60411959D5D930B(0f);
	func_525();
	func_487();
	func_508();
	func_485(Local_530);
	switch (iLocal_525)
	{
		case 0x00000000:
			func_6(0x000001F4, 0x00000001);
			func_507(&Local_531);
			unk_0xAE317D00A5A55DF6("HUD_321_GO", 0x00000001, 0xFFFFFFFF);
			iLocal_537 = 0x00000000;
			iLocal_528 = 0xFFFFFFFF;
			iLocal_527 = 0x00000000;
			func_505(&(Local_531.f_1), 0x00000008);
			func_505(&(Local_531.f_1), 0x00000004);
			func_505(&(Local_531.f_1), 0x00000002);
			func_505(&(Local_531.f_1), 0x00000001);
			func_160(&(Local_531.f_2));
			unk_0x0D3BE1DE0262A012("MPHUD", 0x00000000);
			unk_0x0D3BE1DE0262A012("SPROffroad", 0x00000000);
			unk_0x0D3BE1DE0262A012("SHARED", 0x00000000);
			unk_0xD7992BEF7A9D109E("SP_SPR", 0x00000003);
			uLocal_751[0x00000000] = func_352();
			uLocal_1098 = func_504();
			func_503(&uLocal_959, 0x3E99999A, 0x40000000);
			if (func_178(vLocal_18.x) && Local_530.f_1 != 0x00000003)
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0xE32750CAC756824F(vLocal_18.x, 0x00000001);
			}
			iLocal_525 = 0x00000001;
			break;
		
		case 0x00000001:
			unk_0xAE317D00A5A55DF6("HUD_321_GO", 0x00000001, 0xFFFFFFFF);
			if (func_502(&Local_531))
			{
				if (func_496(&Local_531, 0x00000001, 0x00000000, 0x00000000, 0x00000003, 0x00000001, 0x00000000, 0x00000000))
				{
					iLocal_525 = 0x00000002;
				}
				if (func_495(Local_531.f_1, 0x00000008))
				{
					if (iLocal_528 < 0x00000000)
					{
						iLocal_528 = unk_0x1C0640BA9A7327B3() + 500;
					}
					if (iLocal_537 == 0x00000000)
					{
						iLocal_537 = 0x00000001;
						func_494();
						unk_0x8910D3D58E0132B8("RACE_INTRO_GENERIC");
						func_493();
						if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						}
						if (func_178(vLocal_18.x))
						{
							if (Local_530.f_1 == 0x00000003)
							{
								iVar0 = 0x00000000;
								while (iVar0 <= (Local_532.f_F9 - 0x00000001))
								{
									if (func_178(Local_536[iVar0 /*18*/].f_6))
									{
										unk_0xB078AFA7242F1F7B(Local_536[iVar0 /*18*/].f_6, 0x00000000);
									}
									iVar0++;
								}
								unk_0xB078AFA7242F1F7B(vLocal_18.x, 0x00000000);
							}
							else
							{
								unk_0xE32750CAC756824F(vLocal_18.x, 0x00000000);
							}
						}
					}
					func_447(0x00000001, 0x00000000);
				}
			}
			break;
		
		case 0x00000002:
			func_492();
			func_491(&Local_531);
			func_490();
			iVar1 = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < iLocal_552)
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_552[iVar1]))
				{
					unk_0x9A8DDC7C522F5BF5(iLocal_552[iVar1], 0x00000000);
				}
				iVar1++;
			}
			iLocal_524 = 0x00000002;
			iLocal_525 = 0x00000000;
			break;
	}
	func_474(0x00000000);
	func_405();
	func_489();
}

void func_489()
{
	int iVar0;
	int iVar1;
	
	if ((func_9(unk_0x16F2683693E537C9()) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9())) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		iLocal_523 = 0x00000001;
		iLocal_524 = 0x00000005;
		iLocal_525 = 0x00000000;
		if (func_9(iLocal_755))
		{
			unk_0xF3268524E9BE6D6E(iLocal_755, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_755, 0x00000001);
		}
		if (func_9(iLocal_756))
		{
			unk_0xF3268524E9BE6D6E(iLocal_756, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_756, 0x00000001);
		}
		if (func_9(iLocal_757))
		{
			unk_0xF3268524E9BE6D6E(iLocal_757, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_757, 0x00000001);
		}
		iVar1 = 0x00000000;
		iVar1 = 0x00000000;
		while (iVar1 < Local_532.f_F9)
		{
			if (func_9(Local_536[iVar1 /*18*/].f_3))
			{
				unk_0xDD353D0E9C789D0E(&iVar0);
				unk_0x78A77CDD64392938(0x00000000, iVar1 * 60);
				if (func_178(Local_536[iVar1 /*18*/].f_6) && unk_0xC42A92762C58E1B9(Local_536[iVar1 /*18*/].f_3, Local_536[iVar1 /*18*/].f_6, 0x00000000))
				{
					unk_0xE072601B4380E9DF(0x00000000, Local_536[iVar1 /*18*/].f_6, 50f, 0x000C0024);
				}
				else
				{
					unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				unk_0x75ABDC5F81978924(iVar0);
				unk_0x78ADC381772E3D54(Local_536[iVar1 /*18*/].f_3, iVar0);
				unk_0xF82EA857DA10E0CD(&iVar0);
				unk_0xFADC0A217229F6B5(Local_536[iVar1 /*18*/].f_3, 0x00000001);
			}
			iVar1++;
		}
		if (func_178(vLocal_18.x))
		{
			if (Local_530.f_1 == 0x00000003)
			{
				unk_0xB078AFA7242F1F7B(vLocal_18.x, 0x00000000);
			}
			else
			{
				unk_0xE32750CAC756824F(vLocal_18.x, 0x00000000);
			}
		}
		func_490();
	}
}

void func_490()
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	func_33(&iLocal_755, 0x00000001, 0x00000000, 0x00000001);
	func_33(&iLocal_756, 0x00000001, 0x00000000, 0x00000001);
	func_33(&iLocal_757, 0x00000001, 0x00000000, 0x00000001);
	if (unk_0xE1DBBD6CE209517C(iVar0))
	{
		unk_0xBC03DF6093E8E71F(iVar0, 0x00000000);
		unk_0x98E4DC66A651C9FA(iVar0, 0x00000001, 0x00000000);
	}
	if (Local_530.f_1 == 0x00000001 || Local_530.f_1 == 0x00000002)
	{
		unk_0x2952D66A502EA873(iLocal_778, 0x00000000);
		unk_0x842F1AEB2FCC00B7(vLocal_775, vLocal_776, fLocal_777, 0x00000001);
	}
	func_13(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	unk_0xA37A90C62806D848(0x00000001);
}

void func_491(int iParam0)
{
	unk_0xE17FDF9E3068281B(iParam0);
	unk_0x8C26F31DFF77D124();
}

void func_492()
{
	int iVar0;
	vector3 vVar1;
	
	if (Local_530.f_1 == 0x00000002)
	{
		if (func_9(iLocal_756))
		{
			vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_756, 0f, 20f, 0f) };
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x80AA372E04ED318D(0x00000000, vVar1, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(iLocal_756, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		if (func_9(iLocal_757))
		{
			vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_757, 0f, 15f, 0f) };
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x80AA372E04ED318D(0x00000000, vVar1, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(iLocal_757, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		func_33(&iLocal_755, 0x00000001, 0x00000000, 0x00000001);
		func_33(&iLocal_756, 0x00000001, 0x00000000, 0x00000001);
		func_33(&iLocal_757, 0x00000001, 0x00000000, 0x00000001);
	}
}

void func_493()
{
	int iVar0;
	
	if (Local_530.f_1 == 0x00000003)
	{
		unk_0x8BC9595FD2792B5D("SEA_RACE_DURING_RACE");
	}
	else
	{
		unk_0x8BC9595FD2792B5D("STREET_RACE_DURING_RACE");
	}
	iVar0 = 0x00000000;
	while (iVar0 <= (Local_532.f_F9 - 0x00000001))
	{
		if (func_178(Local_536[iVar0 /*18*/].f_6))
		{
			if (Local_530.f_1 == 0x00000003)
			{
				unk_0x2E1E5367A885F9B7(Local_536[iVar0 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0x00000000);
			}
			else
			{
				unk_0x2E1E5367A885F9B7(Local_536[iVar0 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0x00000000);
			}
		}
		iVar0++;
	}
}

void func_494()
{
	Local_531.f_5 = unk_0x1C0640BA9A7327B3();
	Local_531.f_6 = 0x00000000;
	Local_531.f_8 = 0x00000001;
	Local_531.f_9 = unk_0x1C0640BA9A7327B3();
	Local_531.f_7 = Local_532.f_F8;
	func_475();
}

bool func_495(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_496(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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
		func_501(&(uParam0->f_2), 0x00000001);
	}
	if (!func_162(&(uParam0->f_2)))
	{
		func_3(&(uParam0->f_2));
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
		if (func_162(&(uParam0->f_2)))
		{
			if (func_158(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_5(0x00000001) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_160(&(uParam0->f_2));
					if (func_495(uParam0->f_1, 0x00000001))
					{
						func_499(&(uParam0->f_1), 0x00000008);
						unk_0xA402F6C87C08815C(0x00000012, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
						func_165("CNTDWN_GO");
						unk_0x3CAEA85DA607305E(iVar5);
						unk_0x3CAEA85DA607305E(iVar6);
						unk_0x3CAEA85DA607305E(iVar7);
						unk_0x1200CC973A2399C8(0x00000001);
						unk_0x7E60D21B163E9D56();
						return 0x00000001;
					}
					func_3(&(uParam0->f_2));
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
		iVar4 = SYSTEM::FLOOR(func_157(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = 0x00000000;
	if (!func_495(uParam0->f_1, 0x00000008))
	{
		if (iVar9 >= 0xFFFFFFFD && !func_495(uParam0->f_1, 0x00000001))
		{
			func_499(&(uParam0->f_1), 0x00000001);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_498(uParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFE && !func_495(uParam0->f_1, 0x00000002))
		{
			func_499(&(uParam0->f_1), 0x00000002);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_498(uParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFF && !func_495(uParam0->f_1, 0x00000004))
		{
			func_499(&(uParam0->f_1), 0x00000004);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_498(uParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFF && !func_495(uParam0->f_1, 0x00000010))
		{
			if (unk_0x755FF954DAE327E1((func_157(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_499(&(uParam0->f_1), 0x00000010);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar1, sVar2, 0x00000001);
				}
			}
		}
		else if (iVar9 >= 0x00000000 && !func_495(uParam0->f_1, 0x00000008))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar1, sVar2, 0x00000001);
			}
			func_499(&(uParam0->f_1), 0x00000008);
			unk_0xA402F6C87C08815C(0x00000012, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
			func_165("CNTDWN_GO");
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
	if ((iParam2 && func_497()) || iVar4 > 0x00000005)
	{
		bVar10 = 0x00000001;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0x00000000;
			func_160(&(uParam0->f_2));
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_497()
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

void func_498(var uParam0, int iParam1)
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

void func_499(var uParam0, int iParam1)
{
	func_500(uParam0, iParam1);
}

void func_500(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_501(int iParam0, bool bParam1)
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

bool func_502(var uParam0)
{
	return (unk_0x83D8570832F172A7(*uParam0) && unk_0xAE317D00A5A55DF6("HUD_321_GO", 0x00000000, 0xFFFFFFFF));
}

void func_503(var uParam0, int iParam1, int iParam2)
{
	if (func_162(&(uParam0->f_1)))
	{
		func_160(&(uParam0->f_1));
	}
	if (func_162(&(uParam0->f_4)))
	{
		func_160(&(uParam0->f_4));
	}
	func_150(&(uParam0->f_A));
	uParam0->f_86 = iParam1;
	uParam0->f_87 = iParam2;
	uParam0->f_89 = 0x00000001;
	uParam0->f_88 = 0x00000000;
	*uParam0 = 0x00000000;
}

int func_504()
{
	return unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_505(var uParam0, int iParam1)
{
	func_506(uParam0, iParam1);
}

void func_506(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_507(var uParam0)
{
	*uParam0 = unk_0xB01F55A0FD1CFD49("COUNTDOWN");
	unk_0xAE317D00A5A55DF6("HUD_321_GO", 0x00000000, 0xFFFFFFFF);
}

int func_508()
{
	int iVar0;
	int iVar1;
	
	if (Local_530.f_1 == 0x00000003)
	{
		if (unk_0x9F4FE516EAACCFC5(iLocal_552[0x00000000]))
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_772)
			{
				unk_0xF1E4C781086FABC1(iLocal_552[0x00000001], iLocal_552[0x00000000], 0x000001F4, 0x00000000, 0x00000001);
				unk_0xDE0127155AF9E64F(iLocal_552[0x00000001], 1f);
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "UNDER_WATER_COME_UP", 0x00000000, 0x00000001);
				unk_0x9A8DDC7C522F5BF5(iLocal_552[0x00000000], 0x00000000);
			}
			else
			{
				func_524(0x00000000);
			}
		}
		else if (unk_0x9F4FE516EAACCFC5(iLocal_552[0x00000001]))
		{
			if (!unk_0xFA06B985B30FB0FC(iLocal_552[0x00000001]))
			{
				unk_0xF1E4C781086FABC1(iLocal_552[0x00000002], iLocal_552[0x00000001], 0x00000BB8, 0x00000000, 0x00000001);
				unk_0x91F5B0244AAE6222(iLocal_552[0x00000002], "HAND_SHAKE", 0.3f);
				unk_0x9A8DDC7C522F5BF5(iLocal_552[0x00000001], 0x00000000);
			}
			else
			{
				func_524(0x00000001);
			}
		}
		else if (unk_0x9F4FE516EAACCFC5(iLocal_552[0x00000002]))
		{
			if (!unk_0xFA06B985B30FB0FC(iLocal_552[0x00000002]))
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_552[0x00000003], 0x00000001);
				unk_0xF1E4C781086FABC1(iLocal_552[0x00000004], iLocal_552[0x00000003], 0x00001388, 0x00000003, 0x00000001);
				unk_0x91F5B0244AAE6222(iLocal_552[0x00000004], "HAND_SHAKE", 0.3f);
				unk_0x9A8DDC7C522F5BF5(iLocal_552[0x00000002], 0x00000000);
				iLocal_772 = unk_0x1C0640BA9A7327B3() + 2000;
			}
			else
			{
				func_524(0x00000001);
			}
		}
		else if (unk_0x9F4FE516EAACCFC5(iLocal_552[0x00000004]))
		{
			if (!unk_0xFA06B985B30FB0FC(iLocal_552[0x00000004]))
			{
				unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
				iVar0 = 0x00000000;
				iVar0 = 0x00000000;
				while (iVar0 < iLocal_552)
				{
					if (unk_0x9F4FE516EAACCFC5(iLocal_552[iVar0]))
					{
						unk_0x9A8DDC7C522F5BF5(iLocal_552[iVar0], 0x00000000);
					}
					iVar0++;
				}
			}
			else
			{
				func_524(0x00000001);
			}
			if (unk_0x1C0640BA9A7327B3() > iLocal_772)
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(iLocal_552[0x00000001]))
	{
		if (!unk_0xFA06B985B30FB0FC(iLocal_552[0x00000001]))
		{
			if (iLocal_772 < 0x00000000)
			{
				iLocal_772 = unk_0x1C0640BA9A7327B3() + 1000;
			}
			else if (unk_0x1C0640BA9A7327B3() > iLocal_772)
			{
				unk_0xF1E4C781086FABC1(iLocal_552[0x00000003], iLocal_552[0x00000002], 0x00000FA0, 0x00000000, 0x00000001);
				unk_0x91F5B0244AAE6222(iLocal_552[0x00000002], "HAND_SHAKE", 1f);
				unk_0x91F5B0244AAE6222(iLocal_552[0x00000003], "HAND_SHAKE", 1f);
				unk_0x9A8DDC7C522F5BF5(iLocal_552[0x00000001], 0x00000000);
			}
		}
		else
		{
			func_524(0x00000000);
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(iLocal_552[0x00000003]))
	{
		if (!unk_0xFA06B985B30FB0FC(iLocal_552[0x00000003]))
		{
			unk_0xF1E4C781086FABC1(iLocal_552[0x00000005], iLocal_552[0x00000004], 0x00000FA0, 0x00000000, 0x00000001);
			unk_0x91F5B0244AAE6222(iLocal_552[0x00000004], "HAND_SHAKE", 1f);
			unk_0x91F5B0244AAE6222(iLocal_552[0x00000005], "HAND_SHAKE", 1f);
			unk_0x9A8DDC7C522F5BF5(iLocal_552[0x00000003], 0x00000000);
			if (Local_530 == 0x00000002 || Local_530 == 0x00000004)
			{
				if (unk_0xC844350D5D58C99A(vLocal_18.x))
				{
					if (unk_0xDF1306B443CD3D15(vLocal_18.x, 0x00000000))
					{
						unk_0xA47B46945FF6DE74(vLocal_18.x, Local_532.f_B5[Local_532.f_F9 /*3*/], 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(vLocal_18.x, Local_532.f_E6[Local_532.f_F9]);
						unk_0xB9FD7450C0DAB575(vLocal_18.x, 0x40A00000);
					}
				}
			}
		}
		else
		{
			if (func_9(iLocal_755))
			{
				if (iLocal_764)
				{
					if (func_510(&uLocal_781, "STR1AUD", "STR1_GIRL1", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_764 = 0x00000000;
					}
				}
			}
			func_524(0x00000001);
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(iLocal_552[0x00000005]))
	{
		if (!unk_0xFA06B985B30FB0FC(iLocal_552[0x00000005]))
		{
			if (func_509())
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_552[0x00000006], 0x00000001);
			}
			unk_0xF1E4C781086FABC1(iLocal_552[0x00000007], iLocal_552[0x00000006], 0x00000BB8, 0x00000003, 0x00000001);
			unk_0x91F5B0244AAE6222(iLocal_552[0x00000006], "HAND_SHAKE", 1f);
			unk_0x91F5B0244AAE6222(iLocal_552[0x00000007], "HAND_SHAKE", 1f);
			unk_0x9A8DDC7C522F5BF5(iLocal_552[0x00000005], 0x00000000);
			return 0x00000001;
		}
		else
		{
			if (func_9(iLocal_757))
			{
				if (iLocal_765)
				{
					if (func_510(&uLocal_781, "STR1AUD", "STR1_GIRL2", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_765 = 0x00000000;
					}
				}
			}
			func_524(0x00000001);
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(iLocal_552[0x00000007]))
	{
		if (!unk_0xFA06B985B30FB0FC(iLocal_552[0x00000007]))
		{
			unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
			iVar1 = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < iLocal_552)
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_552[iVar1]))
				{
					unk_0x9A8DDC7C522F5BF5(iLocal_552[iVar1], 0x00000000);
				}
				iVar1++;
			}
		}
		else
		{
			if (func_9(iLocal_757))
			{
				if (iLocal_765)
				{
					if (func_510(&uLocal_781, "STR1AUD", "STR1_GIRL2", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_765 = 0x00000000;
					}
				}
			}
			func_524(0x00000001);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_509()
{
	int iVar0;
	
	if (func_178(vLocal_18.x))
	{
		iVar0 = unk_0x134B62B726CEC8E6(vLocal_18.x);
		if (iVar0 == unk_0x12AB0310C2281427("MONSTER") || iVar0 == unk_0x12AB0310C2281427("MARSHALL"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_510(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_523(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_511(sParam2, iParam3, 0x00000000);
}

int func_511(char* sParam0, int iParam1, bool bParam2)
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
					func_522();
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
		if (func_521(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_520();
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
				func_519();
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
				if (func_518())
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
			if (func_21())
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
			func_517();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_516();
		func_512();
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
		func_522();
	}
	return 0x00000000;
}

void func_512()
{
	if (!func_513())
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

int func_513()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_49())
	{
		return 0x00000000;
	}
	if (func_514(unk_0xD803B885F5E47A62()))
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

bool func_514(int iParam0)
{
	return func_515(iParam0, 0x00000014);
}

bool func_515(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_516()
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

void func_517()
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

int func_518()
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

void func_519()
{
	if (func_169(0x0000000E))
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
		Global_4C1E = func_167();
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

void func_520()
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

bool func_521(int iParam0, int iParam1)
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

void func_522()
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

void func_523(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_524(bool bParam0)
{
	if (iLocal_571 == 0x00000000)
	{
		if (Local_530.f_1 == 0x00000003)
		{
			if (unk_0xE3934829A331AF92("INTRO_STREAM", "SEA_RACES_SOUNDSET"))
			{
				if (bParam0)
				{
					unk_0x7B1292B738DF9FAF();
					iLocal_571 = 0x00000001;
				}
			}
		}
		else if (Local_530.f_1 == 0x00000001)
		{
			if (unk_0xE3934829A331AF92("VESPUCCI_CANAL_INTRO", "ROAD_RACE_SOUNDSET"))
			{
				if (bParam0)
				{
					unk_0x7B1292B738DF9FAF();
					iLocal_571 = 0x00000001;
				}
			}
		}
		else if (unk_0xE3934829A331AF92("INTRO_STREAM", "ROAD_RACE_SOUNDSET"))
		{
			if (bParam0)
			{
				unk_0x7B1292B738DF9FAF();
				iLocal_571 = 0x00000001;
			}
		}
	}
}

void func_525()
{
	if (Local_530 == 0x00000004)
	{
		if (unk_0xB87F6CF6E5628C67(0x27BAEB1A))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_1692))
			{
				iLocal_1692 = unk_0x7707E48765093646(0x27BAEB1A, vLocal_1693, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC023D1C4BF532815(iLocal_1692, vLocal_1694, 0x00000002, 0x00000001);
				unk_0x1E9649458B15960F(iLocal_1692, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_1695))
			{
				iLocal_1695 = unk_0x7707E48765093646(0x27BAEB1A, vLocal_1696, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC023D1C4BF532815(iLocal_1695, vLocal_1697, 0x00000002, 0x00000001);
				unk_0x1E9649458B15960F(iLocal_1695, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_1698))
			{
				iLocal_1698 = unk_0x7707E48765093646(0x27BAEB1A, vLocal_1699, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC023D1C4BF532815(iLocal_1698, vLocal_1700, 0x00000002, 0x00000001);
				unk_0x1E9649458B15960F(iLocal_1698, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_1701))
			{
				iLocal_1701 = unk_0x7707E48765093646(0x27BAEB1A, vLocal_1702, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC023D1C4BF532815(iLocal_1701, vLocal_1703, 0x00000002, 0x00000001);
				unk_0x1E9649458B15960F(iLocal_1701, 0x00000001);
			}
		}
	}
}

void func_526()
{
	int iVar0;
	
	unk_0xD60411959D5D930B(0f);
	func_536(Local_953, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iLocal_954);
	func_525();
	func_485(Local_530);
	iVar0 = 0x00000000;
	switch (iLocal_525)
	{
		case 0x00000000:
			func_534(0x00000001, 0x00000000);
			func_534(0x00000007, 0x00000000);
			if (unk_0x1963B11DE70153E0())
			{
				func_380();
			}
			func_524(0x00000000);
			func_29();
			unk_0x8BC9595FD2792B5D("RACE_INTRO_GENERIC");
			unk_0x5BED90AC1E2BC558("AZ_DISTANT_VEHICLES_CITY_CENTRE", 0x00000000, 0x00000000);
			unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_01", 0x00000000, 0x00000000);
			unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_02", 0x00000000, 0x00000000);
			unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_03", 0x00000000, 0x00000000);
			unk_0xD7992BEF7A9D109E("HAO1", 0x00000000);
			func_11();
			func_533();
			func_532();
			unk_0x82A772610883F395("SwitchSceneFranklin", 0x00000000, 0x00000000);
			func_24(0x00000000, 0x00000000);
			func_530();
			iLocal_571 = 0x00000000;
			bLocal_1112 = 0x00000000;
			if (func_178(vLocal_18.x))
			{
				if (Local_530.f_1 == 0x00000003)
				{
					unk_0xA6C13961116F9033("RADIO_16_SILVERLAKE");
					unk_0xCD49775BBDC56D15("RADIO_16_SILVERLAKE");
					unk_0x8EF0C7EF9D046E34("RADIO_16_SILVERLAKE", "SEA_RACE_RADIO_PLAYLIST", 0x00000001);
					unk_0xDE6ABF42593E1194("RADIO_16_SILVERLAKE");
					unk_0x3E5CE368CD085FFA(vLocal_18.x, 0x00000001);
				}
				else
				{
					unk_0xA6C13961116F9033("RADIO_07_DANCE_01");
				}
				unk_0xC0FB48F966BB7D11(0x00000001);
			}
			iLocal_525 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_508())
			{
				func_529(0.32f);
				if (func_9(unk_0x16F2683693E537C9()))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				}
				iLocal_524 = 0x00000001;
				iLocal_525 = 0x00000000;
			}
			if (func_527(0x000003E8))
			{
				func_148(0x000001F4, 0x00000001);
				func_181();
				bLocal_1112 = 0x00000001;
				func_31(&iLocal_756);
				func_31(&iLocal_757);
				iLocal_525 = 0x00000002;
			}
			if (Local_530 == 0x00000004)
			{
				if (func_9(unk_0x16F2683693E537C9()))
				{
					unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000EC, 0x00000001);
				}
				iVar0 = 0x00000000;
				while (iVar0 <= (Local_532.f_F9 - 0x00000001))
				{
					if (func_9(Local_536[iVar0 /*18*/].f_3))
					{
						unk_0x9DD8618CA5BF832D(Local_536[iVar0 /*18*/].f_3, 0x000000EC, 0x00000001);
					}
					iVar0++;
				}
			}
			break;
		
		case 0x00000002:
			if (Local_530.f_1 == 0x00000003)
			{
				func_23();
			}
			func_529(0.27f);
			func_474(0x00000000);
			if (Local_530.f_1 == 0x00000003)
			{
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				SYSTEM::WAIT(0x00000000);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x2FB9A57162E54BAB(0f);
			}
			else if (bLocal_1112)
			{
				func_23();
				iVar0 = 0x00000000;
				while (iVar0 <= (Local_532.f_F9 - 0x00000001))
				{
					if (func_9(Local_536[iVar0 /*18*/].f_3))
					{
						unk_0xA3BF0AA5A2608191(Local_536[iVar0 /*18*/].f_3);
					}
					if (func_178(Local_536[iVar0 /*18*/].f_6))
					{
						unk_0xE0C0351D5B931E37(Local_536[iVar0 /*18*/].f_6, 0.1f, 0x00000001, 0x00000000);
						func_7(Local_536[iVar0 /*18*/].f_6, Local_532.f_B5[iVar0 /*3*/]);
						unk_0xD8F6A53F4799FAFE(Local_536[iVar0 /*18*/].f_6, Local_532.f_E6[iVar0]);
					}
					iVar0++;
				}
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				SYSTEM::WAIT(0x000001F4);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x2FB9A57162E54BAB(0f);
			}
			else
			{
				unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
			}
			func_6(0x000001F4, 0x00000001);
			func_474(0x00000000);
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < iLocal_552)
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_552[iVar0]))
				{
					unk_0x9A8DDC7C522F5BF5(iLocal_552[iVar0], 0x00000000);
				}
				iVar0++;
			}
			iLocal_524 = 0x00000001;
			iLocal_525 = 0x00000000;
			break;
	}
}

int func_527(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if ((unk_0x1C0640BA9A7327B3() - Global_1C) > iParam0)
		{
			Global_1B = unk_0x1C0640BA9A7327B3();
		}
		Global_1C = unk_0x1C0640BA9A7327B3();
		if ((unk_0x1C0640BA9A7327B3() - Global_1B) > iParam0)
		{
			if (func_528())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_528()
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

void func_529(int iParam0)
{
	int iVar0;
	
	if (Local_530.f_1 == 0x00000002)
	{
		if (func_9(iLocal_755))
		{
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_758, "grid_girl_race_start", 4f, -8f, 0xFFFFFFFF, 0x00000008, iParam0, 0x00000000, 0x00000000, 0x00000000);
			unk_0x80AA372E04ED318D(0x00000000, vLocal_763, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(iLocal_755, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
	}
}

void func_530()
{
	int iVar0;
	vector3 vVar1;
	
	if (Local_530.f_1 == 0x00000002)
	{
		unk_0x523BCC9DC80CD82F(joaat("a_f_y_genhot_01"));
		unk_0x3F423BF5B8125A50(sLocal_758);
		func_531();
		while (!unk_0xB87F6CF6E5628C67(joaat("a_f_y_genhot_01")))
		{
			SYSTEM::WAIT(0x00000000);
		}
		while (!unk_0xB4AE0788C1587752(sLocal_758))
		{
			SYSTEM::WAIT(0x00000000);
		}
		iLocal_755 = unk_0x36F2404464202779(0x00000019, joaat("a_f_y_genhot_01"), vLocal_759, fLocal_762, 0x00000001, 0x00000001);
		func_411(iLocal_755, vLocal_763);
		iLocal_756 = unk_0x36F2404464202779(0x00000019, joaat("a_f_y_genhot_01"), vLocal_760, fLocal_762, 0x00000001, 0x00000001);
		func_411(iLocal_756, vLocal_763);
		iLocal_757 = unk_0x36F2404464202779(0x00000019, joaat("a_f_y_genhot_01"), vLocal_761, fLocal_762, 0x00000001, 0x00000001);
		func_411(iLocal_757, vLocal_763);
		unk_0x78A77CDD64392938(iLocal_755, 0xFFFFFFFF);
		func_364(&uLocal_781, 0x00000003, iLocal_755, "GIRL1", 0x00000000, 0x00000001);
		iLocal_764 = 0x00000001;
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_756, 0f, 20f, 0f) };
		unk_0xDD353D0E9C789D0E(&iVar0);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_758, "grid_girl_a", 8f, -8f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x80AA372E04ED318D(0x00000000, vVar1, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
		unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
		unk_0x75ABDC5F81978924(iVar0);
		unk_0x78ADC381772E3D54(iLocal_756, iVar0);
		unk_0xF82EA857DA10E0CD(&iVar0);
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_757, 0f, 15f, 0f) };
		unk_0xDD353D0E9C789D0E(&iVar0);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_758, "grid_girl_b", 8f, -8f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x80AA372E04ED318D(0x00000000, vVar1, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
		unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
		unk_0x75ABDC5F81978924(iVar0);
		unk_0x78ADC381772E3D54(iLocal_757, iVar0);
		unk_0xF82EA857DA10E0CD(&iVar0);
		func_364(&uLocal_781, 0x00000004, iLocal_757, "GIRL2", 0x00000000, 0x00000001);
		iLocal_765 = 0x00000001;
		unk_0x71199B01895C6202(joaat("a_f_y_genhot_01"));
	}
}

void func_531()
{
	switch (Local_530)
	{
		case 0x00000000:
			vLocal_759 = { -155.6468f, -1566.949f, 33.9936f };
			vLocal_760 = { -153.63f, -1563.7f, 34.95f };
			vLocal_761 = { -148.09f, -1557.66f, 34.75f };
			fLocal_762 = -30.86f;
			vLocal_763 = { -141.65f, -1550.75f, 33.46f };
			break;
		
		case 0x00000001:
			vLocal_759 = { 367.6161f, 312.4572f, 102.5861f };
			vLocal_760 = { 368.4547f, 312.2108f, 102.5678f };
			vLocal_761 = { 375.17f, 310.64f, 103.44f };
			fLocal_762 = -103.75f;
			vLocal_763 = { 386.63f, 307.77f, 102.2f };
			break;
		
		case 0x00000002:
			vLocal_759 = { -813.8033f, -2546.801f, 12.80013f };
			vLocal_760 = { -814.4293f, -2547.748f, 12.80057f };
			vLocal_761 = { -816.56f, -2554.45f, 13.77f };
			fLocal_762 = 157.75f;
			vLocal_763 = { -819.68f, -2562.68f, 12.75f };
			break;
		
		case 0x00000003:
			vLocal_759 = { 777.3962f, -1148.09f, 28.05913f };
			vLocal_760 = { 778.6312f, -1148.07f, 28.00819f };
			vLocal_761 = { 787f, -1148.06f, 28.92f };
			fLocal_762 = -89.3f;
			vLocal_763 = { 795.3f, -1147.23f, 27.98f };
			break;
	}
}

void func_532()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_552)
	{
		if (unk_0x9F4FE516EAACCFC5(iLocal_552[iVar0]))
		{
			unk_0x9A8DDC7C522F5BF5(iLocal_552[iVar0], 0x00000000);
		}
		iVar0++;
	}
	if (Local_530.f_1 == 0x00000003)
	{
		iLocal_552[0x00000000] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_553, vLocal_554, 35f, 0x00000000, 0x00000002);
		unk_0xE3BB8E05FCEB3FBE(iLocal_552[0x00000000], 0x00000001);
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		iLocal_552[0x00000001] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_569, vLocal_570, 35f, 0x00000000, 0x00000002);
		iLocal_552[0x00000002] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_555, vLocal_556, 35f, 0x00000000, 0x00000002);
		iLocal_552[0x00000003] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_557, vLocal_558, 50f, 0x00000000, 0x00000002);
		iLocal_552[0x00000004] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_559, vLocal_560, 50f, 0x00000000, 0x00000002);
		iLocal_772 = unk_0x1C0640BA9A7327B3() + 250;
	}
	else
	{
		if (Local_530 == 0x00000004)
		{
			iLocal_552[0x00000000] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_553, vLocal_554, 40f, 0x00000000, 0x00000002);
		}
		else
		{
			iLocal_552[0x00000000] = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
			unk_0x5818C8D5303DCCF8(iLocal_552[0x00000000], 40f);
			unk_0xC5940439E4EB9A33(iLocal_552[0x00000000], vLocal_18.x, vLocal_553, 0x00000001);
			unk_0x1305278186D1C53E(iLocal_552[0x00000000], vLocal_18.x, vLocal_554, 0x00000001);
		}
		iLocal_552[0x00000001] = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
		unk_0x5818C8D5303DCCF8(iLocal_552[0x00000001], 40f);
		unk_0xC5940439E4EB9A33(iLocal_552[0x00000001], vLocal_18.x, vLocal_555, 0x00000001);
		unk_0x1305278186D1C53E(iLocal_552[0x00000001], vLocal_18.x, vLocal_556, 0x00000001);
		unk_0xE3BB8E05FCEB3FBE(iLocal_552[0x00000000], 0x00000001);
		unk_0xF1E4C781086FABC1(iLocal_552[0x00000001], iLocal_552[0x00000000], 0x00000BB8, 0x00000001, 0x00000001);
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		unk_0x91F5B0244AAE6222(iLocal_552[0x00000000], "ROAD_VIBRATION_SHAKE", 0.5f);
		unk_0x91F5B0244AAE6222(iLocal_552[0x00000001], "ROAD_VIBRATION_SHAKE", 0.5f);
		iLocal_552[0x00000002] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_557, vLocal_558, 40f, 0x00000000, 0x00000002);
		iLocal_552[0x00000003] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_559, vLocal_560, 40f, 0x00000000, 0x00000002);
		iLocal_552[0x00000004] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_561, vLocal_562, 40f, 0x00000000, 0x00000002);
		iLocal_552[0x00000005] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_563, vLocal_564, 40f, 0x00000000, 0x00000002);
		if (func_509())
		{
			iLocal_552[0x00000006] = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
			unk_0x5818C8D5303DCCF8(iLocal_552[0x00000006], 50f);
			unk_0xC5940439E4EB9A33(iLocal_552[0x00000006], vLocal_18.x, vLocal_565, 0x00000001);
			unk_0x1305278186D1C53E(iLocal_552[0x00000006], vLocal_18.x, vLocal_566, 0x00000001);
			iLocal_552[0x00000007] = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
			unk_0x5818C8D5303DCCF8(iLocal_552[0x00000007], 50f);
			unk_0xC5940439E4EB9A33(iLocal_552[0x00000007], vLocal_18.x, vLocal_567, 0x00000001);
			unk_0x1305278186D1C53E(iLocal_552[0x00000007], vLocal_18.x, vLocal_568, 0x00000001);
		}
		else
		{
			iLocal_552[0x00000006] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_565, vLocal_566, 50f, 0x00000000, 0x00000002);
			iLocal_552[0x00000007] = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_567, vLocal_568, 50f, 0x00000000, 0x00000002);
		}
		iLocal_772 = 0xFFFFFFFF;
	}
}

void func_533()
{
	if (Global_1FE1[0x00000000 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000000 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	if (Global_1FE1[0x00000001 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000001 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	if (Global_1FE1[0x00000002 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000002 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000019);
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
}

void func_534(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000107)
	{
		if (Global_79AA[iVar0 /*23*/].f_10 == iParam0)
		{
			func_535(iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_535(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	iVar1 = iParam0;
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar1 /*23*/].f_B, 0x00000003))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar1 /*23*/].f_B), 0x00000012);
		if (Global_79A7 == 0x00000001)
		{
			Global_79A8 = 0x00000001;
		}
		Global_79A7 = 0x00000001;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar1 /*23*/].f_B), 0x00000003);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar1 /*23*/].f_B), 0x00000003);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar1 /*23*/].f_B, 0x00000003))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar1 /*23*/].f_13))
		{
			unk_0xCD816869CA451988(0x00000001);
			unk_0x142CC44DB769B57E(&(Global_79AA[iVar1 /*23*/].f_13));
			unk_0xCD816869CA451988(0x00000000);
		}
	}
}

void func_536(char[24] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (func_550(0x00000001, cParam0))
			{
				if (Global_12C4F == 0x00000003)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_22 > fVar0)
				{
					Global_12C4E = unk_0x1C0640BA9A7327B3();
					vLocal_23 = { unk_0x96792D8393A779D7(0x0000000F) };
					fLocal_22 = 0f;
				}
				else
				{
					fLocal_22 = (fLocal_22 + unk_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_22 = 0f;
			}
		}
		else
		{
			if (!func_550(0x00000000, cParam0))
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
				iVar11 = func_167();
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
				Var4 = { func_539(Global_12C4D, Global_12C4F, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0x75BBE9A62B73769F(fVar5, fVar6, 0f, 0.01f);
				unk_0xD3539A877EC25E86(0.67f, 0.67f);
				if (!unk_0x0D71AFA59EF5104F() && !unk_0x0DF32524CC9DB3EB())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_538(&Var4) > fLocal_25)
					{
						if (unk_0x2F1FB0453B36C270(0x0000000F))
						{
							unk_0x744B56EE9DE7B57F(0x0000000F, vLocal_23.x, (vLocal_23.y + fLocal_24));
							Global_12C51 = 0x00000001;
						}
					}
				}
				unk_0x070005E852D4C0E9(&Var4);
				unk_0xE0026608C37C7C41(fVar5, fVar6, 0x00000000);
				unk_0xD59EF13BB60323B9();
				if (Global_12C50 == 0x00000001)
				{
					func_537();
					fLocal_22 = 0f;
				}
			}
			else
			{
				func_537();
				fLocal_22 = 0f;
			}
		}
	}
}

void func_537()
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

float func_538(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

struct<2> func_539(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 0x00000001:
			Var0 = { func_549(iParam0) };
			break;
		
		case 0x00000007:
			Var0 = { func_547(iParam0) };
			break;
		
		case 0x00000003:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0x00000000:
					Var0 = { func_546(iParam2) };
					break;
				
				case 0x00000008:
					Var0 = { func_545(iParam2) };
					break;
				
				case 0x00000007:
					Var0 = { func_544(iParam2) };
					break;
				
				case 0x0000000A:
					Var0 = { func_543(iParam2) };
					break;
				
				case 0x00000005:
					Var0 = { func_542(iParam2) };
					break;
				
				case 0x00000004:
					Var0 = { func_541(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_540(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_540(int iParam0)
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

struct<2> func_541(int iParam0)
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

struct<2> func_542(int iParam0)
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

struct<2> func_543(int iParam0)
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

struct<2> func_544(int iParam0)
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

struct<2> func_545(int iParam0)
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

struct<2> func_546(int iParam0)
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

struct<2> func_547(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_548(iParam0) };
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

struct<2> func_548(int iParam0)
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

struct<2> func_549(int iParam0)
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

int func_550(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_552(0x00000000) || Global_12C5B) || Global_12C50 == 0x00000001) || !unk_0x0F1CCD77290EE12F())
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
			if ((unk_0x22A8E52414415B76() || func_175(0x00000000)) || func_551(0x00000001))
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

bool func_551(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_552(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_553(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_553(int iParam0)
{
	return func_554(iParam0, Global_A1D7);
}

int func_554(int iParam0, int iParam1)
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

void func_555(bool bParam0)
{
	unk_0xAB8E2DDC7AF955E0(joaat("airbus"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("benson"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("biff"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("coach"), bParam0);
	unk_0xAB8E2DDC7AF955E0(0x73920F8E, bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("flatbed"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("mule"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("mule2"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("packer"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("pounder"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("rubble"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("tiptruck"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("tiptruck2"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("tourbus"), bParam0);
	unk_0xAB8E2DDC7AF955E0(joaat("trash"), bParam0);
}

void func_556(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_1B066, unk_0xBB0808A181D4745C(), 24);
		Global_1B060 = 0x00000001;
	}
	else
	{
		StringCopy(&Global_1B066, "NULL", 24);
		Global_1B060 = 0x00000000;
	}
}

void func_557(bool bParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(vLocal_18.x))
	{
	}
	else if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		func_364(&uLocal_781, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			vLocal_18.x = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		}
		else
		{
			vLocal_18.x = unk_0x728870EB733D12A1();
			if (func_178(vLocal_18.x))
			{
				unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), vLocal_18.x, 0xFFFFFFFF);
			}
		}
	}
	iLocal_524 = 0x00000000;
	iLocal_525 = 0x00000000;
	iLocal_523 = 0x00000000;
	func_566(Local_530, &Local_532);
	unk_0xB975E4541DDAB1F5(0x00000002);
	func_564();
	if (bParam0)
	{
		func_563();
	}
	else
	{
		func_561();
	}
	func_560();
	unk_0xFF42993F8A095C58(0x00000000);
	unk_0x2733E1E56786AB9E(0x00000001);
	unk_0xC83E7A5E408DF68C(0x00000002);
	unk_0x3F50EAA916065520(0x00000001);
	unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x060F249A9A3E3F4E(0x00000000);
	unk_0xCE1730371ACDCCFC(0x00000001);
	unk_0xCD7D80FD792F9954("DRIVE", 0x00000000);
	unk_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0x00000000, 0x00000001);
	unk_0x21688103CC7F9B19(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0x00000000);
	if ((iParam1 && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (Local_530.f_1 == 0x00000001 || Local_530.f_1 == 0x00000002)
		{
			iLocal_778 = func_559(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 60f);
			func_558(Local_530, &vLocal_775, &vLocal_776, &fLocal_777);
			unk_0xB5376EA942202450(vLocal_775, vLocal_776, fLocal_777, 0x00000000, 0x00000000, 0x00000001);
		}
		unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 500f, 0x00000000);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	}
	unk_0x51B096AAC60548C1(0.1f);
	vLocal_18.z = 0x00000000;
}

void func_558(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 0x00000001:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 0x00000002:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 0x00000003:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 0x00000004:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_559(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0x7D6CA5F52B3748BF(vParam0 - vVar0, vParam0 + vVar0, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
}

void func_560()
{
	switch (Local_530)
	{
		case 0x00000000:
			vLocal_767 = { -168.6f, -1575.16f, 34.7f };
			fLocal_768 = 141.57f;
			vLocal_769 = { -170.0685f, -1573.866f, 34.307f };
			fLocal_770 = 191.3066f;
			break;
		
		case 0x00000001:
			vLocal_767 = { 353.12f, 321.39f, 103.65f };
			fLocal_768 = 77.4f;
			vLocal_769 = { 353.4853f, 323.3662f, 103.0862f };
			fLocal_770 = 127.4f;
			break;
		
		case 0x00000002:
			vLocal_767 = { -794.5402f, -2527.393f, 12.7891f };
			fLocal_768 = 332.72f;
			vLocal_769 = { -792.37f, -2527.87f, 13.83f };
			fLocal_770 = 22.72f;
			break;
		
		case 0x00000003:
			vLocal_767 = { 818.13f, -1161.54f, 28f };
			fLocal_768 = 76.46f;
			vLocal_769 = { 818.5804f, -1159.643f, 27.2778f };
			fLocal_770 = 126.46f;
			break;
		
		case 0x00000004:
			vLocal_767 = { -1025.28f, -1130.25f, 1.7f };
			fLocal_768 = 305.27f;
			vLocal_769 = { -1024.548f, -1131.254f, 1.1861f };
			fLocal_770 = 355.27f;
			break;
	}
}

void func_561()
{
	switch (Local_530)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			Local_536[0x00000000 /*18*/].f_5 = joaat("banshee");
			Local_536[0x00000001 /*18*/].f_5 = joaat("feltzer2");
			Local_536[0x00000002 /*18*/].f_5 = joaat("sentinel");
			Local_536[0x00000003 /*18*/].f_5 = joaat("banshee");
			Local_536[0x00000004 /*18*/].f_5 = joaat("feltzer2");
			Local_536[0x00000005 /*18*/].f_5 = joaat("sentinel");
			Local_536[0x00000006 /*18*/].f_5 = joaat("banshee");
			break;
		
		case 0x00000004:
			Local_536[0x00000000 /*18*/].f_5 = joaat("bati");
			Local_536[0x00000001 /*18*/].f_5 = joaat("bati");
			Local_536[0x00000002 /*18*/].f_5 = joaat("ruffian");
			Local_536[0x00000003 /*18*/].f_5 = joaat("ruffian");
			Local_536[0x00000004 /*18*/].f_5 = joaat("bati");
			Local_536[0x00000005 /*18*/].f_5 = joaat("ruffian");
			Local_536[0x00000006 /*18*/].f_5 = joaat("bati");
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
			Local_536[0x00000000 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000001 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000002 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000003 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000004 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000005 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000006 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000007 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000008 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x00000009 /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x0000000A /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x0000000B /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x0000000C /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x0000000D /*18*/].f_5 = func_562(Local_530.f_1);
			Local_536[0x0000000E /*18*/].f_5 = func_562(Local_530.f_1);
			break;
	}
	switch (Local_530)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			Local_536[0x00000000 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_536[0x00000001 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_536[0x00000002 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_536[0x00000003 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_536[0x00000004 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_536[0x00000005 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_536[0x00000006 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_536[0x00000007 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_536[0x00000008 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_536[0x00000009 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_536[0x0000000A /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_536[0x0000000B /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_536[0x0000000C /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_536[0x0000000D /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_536[0x0000000E /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			break;
		
		case 0x00000004:
			Local_536[0x00000000 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_536[0x00000001 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_536[0x00000002 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_536[0x00000003 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_536[0x00000004 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_536[0x00000005 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_536[0x00000006 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_536[0x00000007 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_536[0x00000008 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_536[0x00000009 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_536[0x0000000A /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_536[0x0000000B /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_536[0x0000000C /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_536[0x0000000D /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_536[0x0000000E /*18*/].f_4 = joaat("a_m_y_motox_02");
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
			Local_536[0x00000000 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000001 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000002 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000003 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000004 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000005 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000006 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000007 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000008 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x00000009 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x0000000A /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x0000000B /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x0000000C /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x0000000D /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_536[0x0000000E /*18*/].f_4 = joaat("a_m_y_jetski_01");
			break;
	}
}

int func_562(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = joaat("bati");
			break;
		
		case 0x00000002:
			iVar0 = joaat("ninef");
			break;
		
		case 0x00000003:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_563()
{
	Local_536[0x00000000 /*18*/].f_5 = joaat("prairie");
	Local_536[0x00000001 /*18*/].f_5 = joaat("dominator");
	Local_536[0x00000002 /*18*/].f_5 = joaat("sentinel");
	Local_536[0x00000003 /*18*/].f_5 = joaat("prairie");
	Local_536[0x00000004 /*18*/].f_5 = joaat("dominator");
	Local_536[0x00000005 /*18*/].f_5 = joaat("sentinel");
	Local_536[0x00000006 /*18*/].f_5 = joaat("prairie");
	Local_536[0x00000000 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_536[0x00000001 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_536[0x00000002 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_536[0x00000003 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_536[0x00000004 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_536[0x00000005 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_536[0x00000006 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_536[0x00000007 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_536[0x00000008 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_536[0x00000009 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_536[0x0000000A /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_536[0x0000000B /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_536[0x0000000C /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_536[0x0000000D /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_536[0x0000000E /*18*/].f_4 = joaat("a_m_y_eastsa_01");
}

void func_564()
{
	if (Local_530.f_1 == 0x00000002)
	{
		if (func_565())
		{
			vLocal_553 = { -0.7054f, 6.3148f, 2.0821f };
			vLocal_554 = { 0.9495f, 3.9011f, 2.7419f };
			vLocal_555 = { -0.567f, 2.6724f, 1.0077f };
			vLocal_556 = { 0.094f, -0.2423f, 0.7483f };
		}
		else if (func_509())
		{
			vLocal_553 = { -1.6831f, 6.0271f, 4.2228f };
			vLocal_554 = { -0.0245f, 3.5705f, 4.6855f };
			vLocal_555 = { -1.0281f, 4.6872f, 0.9868f };
			vLocal_556 = { -0.185f, 1.8112f, 1.1221f };
		}
		else
		{
			vLocal_553 = { -1.5802f, 5.8398f, 2.2274f };
			vLocal_554 = { 0.197f, 3.5006f, 2.8356f };
			vLocal_555 = { -0.6678f, 1.974f, 0.6876f };
			vLocal_556 = { 0.144f, -0.9013f, 0.417f };
		}
	}
	switch (Local_530)
	{
		case 0x00000000:
			vLocal_557 = { -159.2159f, -1564.125f, 34.6164f };
			vLocal_558 = { -0.073293f, 0.055f, -119.2735f };
			vLocal_559 = { -158.8115f, -1563.369f, 34.61729f };
			vLocal_560 = { -0.073293f, 0.055f, -123.7305f };
			vLocal_561 = { -156.8608f, -1565.342f, 35.70965f };
			vLocal_562 = { -8.040299f, -0.0005f, -49.00647f };
			vLocal_563 = { -155.1768f, -1567.141f, 35.70965f };
			vLocal_564 = { -8.040299f, -0.0005f, -41.34629f };
			vLocal_565 = { -142.3124f, -1550.574f, 34.58047f };
			vLocal_566 = { -2.928405f, -0.000499f, 142.6203f };
			vLocal_567 = { -141.3225f, -1546.89f, 34.7891f };
			vLocal_568 = { -2.8368f, 0f, 139.8128f };
			break;
		
		case 0x00000001:
			vLocal_557 = { 368.3612f, 317.4821f, 102.8912f };
			vLocal_558 = { 4.9194f, 0.0225f, -176.9747f };
			vLocal_559 = { 369.0639f, 317.4726f, 102.8941f };
			vLocal_560 = { 5.042f, 0.0225f, 178.1396f };
			vLocal_561 = { 367.0291f, 314.8014f, 104.37f };
			vLocal_562 = { -7.4995f, 0.0233f, -111.5294f };
			vLocal_563 = { 366.4452f, 312.9081f, 104.3692f };
			vLocal_564 = { -7.4995f, 0.0233f, -100.7122f };
			vLocal_565 = { 386.8919f, 308.6107f, 103.2039f };
			vLocal_566 = { 0.3447f, 0.0472f, 82.1591f };
			vLocal_567 = { 390.2213f, 309.4721f, 103.7617f };
			vLocal_568 = { -4.3057f, 0.0299f, 76.2809f };
			break;
		
		case 0x00000002:
			vLocal_557 = { -809.5582f, -2548.848f, 13.2619f };
			vLocal_558 = { 6.3036f, 0.0031f, 78.738f };
			vLocal_559 = { -809.6061f, -2549.241f, 13.2619f };
			vLocal_560 = { 3.5967f, 0.0031f, 75.5951f };
			vLocal_561 = { -811.1327f, -2544.394f, 14.5064f };
			vLocal_562 = { -5.1571f, 0.0031f, 151.0646f };
			vLocal_563 = { -812.3164f, -2543.757f, 14.5063f };
			vLocal_564 = { -5.1571f, 0.0031f, 154.2332f };
			vLocal_565 = { -819.8916f, -2564.119f, 13.8366f };
			vLocal_566 = { -3.7349f, 0.0039f, -21.4233f };
			vLocal_567 = { -819.4815f, -2566.388f, 14.1387f };
			vLocal_568 = { -5.6248f, 0.0039f, -24.2558f };
			break;
		
		case 0x00000003:
			vLocal_557 = { 776.7724f, -1143.73f, 28.3016f };
			vLocal_558 = { 11.6472f, -0.0085f, -162.2849f };
			vLocal_559 = { 778.136f, -1143.352f, 28.3014f };
			vLocal_560 = { 10.4548f, -0.0085f, -170.727f };
			vLocal_561 = { 775.2812f, -1146.74f, 29.6806f };
			vLocal_562 = { -6.3919f, -0.0085f, -92.6672f };
			vLocal_563 = { 775.3398f, -1148.591f, 29.6808f };
			vLocal_564 = { -6.3919f, -0.0085f, -84.5603f };
			vLocal_565 = { 795.929f, -1146.452f, 29.5086f };
			vLocal_566 = { -2.946f, -0.0103f, 96.9974f };
			vLocal_567 = { 799.178f, -1144.664f, 29.6776f };
			vLocal_568 = { -3.7454f, -0.0103f, 96.6498f };
			break;
		
		case 0x00000004:
			vLocal_553 = { -1081.793f, -1162.103f, 6.1895f };
			vLocal_554 = { 9.5571f, 0.0247f, 143.3313f };
			vLocal_555 = { -0.2995f, 1.6679f, 0.9952f };
			vLocal_556 = { 0.7073f, -1.1228f, 0.5493f };
			vLocal_557 = { -1059.43f, -1154.967f, 1.585626f };
			vLocal_558 = { 5.101318f, 0.220638f, 46.04638f };
			vLocal_559 = { -1060.099f, -1155.654f, 1.589301f };
			vLocal_560 = { 5.101318f, 0.220639f, 55.21057f };
			vLocal_561 = { -1057.833f, -1153.64f, 2.157057f };
			vLocal_562 = { -1.541381f, 0.155416f, 92.08984f };
			vLocal_563 = { -1058.799f, -1151.695f, 3.019048f };
			vLocal_564 = { -8.483372f, 0.155417f, 120.0729f };
			vLocal_565 = { -1073.324f, -1160.225f, 2.467393f };
			vLocal_566 = { -9.078616f, 0.014872f, -56.52562f };
			vLocal_567 = { -1074.407f, -1161.541f, 2.727543f };
			vLocal_568 = { -9.078616f, 0.014872f, -56.52562f };
			break;
		
		case 0x00000005:
			vLocal_553 = { 3071.705f, 680.4286f, -0.578093f };
			vLocal_554 = { -14.99741f, 0f, 169.4703f };
			vLocal_569 = { 3071.258f, 678.9485f, 3.839843f };
			vLocal_570 = { -0.639399f, 0f, 168.9246f };
			vLocal_555 = { 3070.761f, 677.4249f, 3.822088f };
			vLocal_556 = { -0.639399f, 0f, 169.1743f };
			vLocal_557 = { 3074.792f, 632.8167f, 2.242464f };
			vLocal_558 = { 0.235991f, 0f, 58.90903f };
			vLocal_559 = { 3072.679f, 629.8298f, 2.241469f };
			vLocal_560 = { 0.235991f, 0f, 32.61848f };
			break;
		
		case 0x00000006:
			vLocal_553 = { 3482.451f, 5171.12f, -2.622287f };
			vLocal_554 = { -12.38926f, 0f, 26.13617f };
			vLocal_569 = { 3481.747f, 5172.554f, 6.65429f };
			vLocal_570 = { -9.870142f, 0f, 26.13616f };
			vLocal_555 = { 3479.127f, 5173.103f, 6.487341f };
			vLocal_556 = { -9.603036f, 0f, 21.92711f };
			vLocal_557 = { 3457.328f, 5187.86f, 4.6358f };
			vLocal_558 = { -24.8126f, 0.0397f, -41.5662f };
			vLocal_559 = { 3456.51f, 5197.896f, 3.9627f };
			vLocal_560 = { -23.4737f, 0.0397f, -128.4928f };
			break;
		
		case 0x00000007:
			vLocal_553 = { 190.5428f, 3596.879f, 28.21027f };
			vLocal_554 = { -16.6129f, -1E-06f, -17.12342f };
			vLocal_569 = { 190.9281f, 3598.446f, 33.46021f };
			vLocal_570 = { -6.51379f, 0f, -20.80637f };
			vLocal_555 = { 189.0555f, 3599.194f, 33.45909f };
			vLocal_556 = { -6.431107f, 0f, -24.99328f };
			vLocal_557 = { 187.3536f, 3623.253f, 31.378f };
			vLocal_558 = { 0.968793f, 0f, -171.1333f };
			vLocal_559 = { 189.6363f, 3623.848f, 31.37059f };
			vLocal_560 = { 0.968793f, 0f, 175.6184f };
			break;
		
		case 0x00000008:
			vLocal_553 = { 617.7053f, -2150.886f, -6.053663f };
			vLocal_554 = { -12.89488f, -2E-06f, -21.27229f };
			vLocal_569 = { 616.8138f, -2149.222f, 1.441951f };
			vLocal_570 = { 5.644659f, -2E-06f, -24.9429f };
			vLocal_555 = { 615.142f, -2147.596f, 1.518046f };
			vLocal_556 = { 3.451776f, -2E-06f, -29.07558f };
			vLocal_557 = { 615.4761f, -2124.192f, 1.467611f };
			vLocal_558 = { 0.143961f, 0f, -156.6226f };
			vLocal_559 = { 617.9708f, -2122.319f, 1.464393f };
			vLocal_560 = { 0.143961f, 0f, 179.0641f };
			break;
	}
	if (func_509())
	{
		vLocal_565 = { -2.0797f, -1.409f, 1.3288f };
		vLocal_566 = { -2.1875f, 1.5807f, 1.1049f };
		vLocal_567 = { -0.6528f, -5.8087f, 2.317f };
		vLocal_568 = { -0.7557f, -2.8423f, 1.8806f };
	}
}

int func_565()
{
	int iVar0;
	
	if (func_178(vLocal_18.x))
	{
		iVar0 = unk_0x134B62B726CEC8E6(vLocal_18.x);
		if (((((((((((((((((((((((((((((((iVar0 == joaat("baller") || iVar0 == joaat("baller2")) || iVar0 == joaat("bison")) || iVar0 == joaat("bison2")) || iVar0 == joaat("bison3")) || iVar0 == joaat("bobcatxl")) || iVar0 == joaat("cavalcade")) || iVar0 == joaat("cavalcade2")) || iVar0 == joaat("crusader")) || iVar0 == joaat("dubsta")) || iVar0 == joaat("dubsta2")) || iVar0 == joaat("fq2")) || iVar0 == joaat("granger")) || iVar0 == joaat("gresley")) || iVar0 == joaat("landstalker")) || iVar0 == joaat("mesa")) || iVar0 == joaat("mesa2")) || iVar0 == joaat("mesa3")) || iVar0 == joaat("patriot")) || iVar0 == joaat("radi")) || iVar0 == joaat("rancherxl")) || iVar0 == joaat("rancherxl2")) || iVar0 == joaat("rebel")) || iVar0 == joaat("rocoto")) || iVar0 == joaat("sadler")) || iVar0 == joaat("sadler2")) || iVar0 == joaat("sandking")) || iVar0 == joaat("sandking2")) || iVar0 == joaat("seminole")) || iVar0 == joaat("superd")) || iVar0 == unk_0x12AB0310C2281427("huntley")) || iVar0 == unk_0x12AB0310C2281427("DUBSTA3"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_566(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0x00000000:
			uParam6->f_F7 = 0x00000002;
			uParam6->f_FA = 30f;
			uParam6->f_FB = 38f;
			uParam6->f_FC = 46f;
			uParam6->f_F9 = 0x00000005;
			uParam6->f_B5[0x00000000 /*3*/] = { -151.94f, -1566.87f, 34.48f };
			uParam6->f_E6[0x00000000] = 139.8f;
			uParam6->f_B5[0x00000001 /*3*/] = { -155.98f, -1563.47f, 34.6f };
			uParam6->f_E6[0x00000001] = 139.8f;
			uParam6->f_B5[0x00000002 /*3*/] = { -146.4f, -1560.51f, 34.28f };
			uParam6->f_E6[0x00000002] = 139.8f;
			uParam6->f_B5[0x00000003 /*3*/] = { -150.53f, -1556.87f, 34.4f };
			uParam6->f_E6[0x00000003] = 139.8f;
			uParam6->f_B5[0x00000004 /*3*/] = { -141.15f, -1553.81f, 33.98f };
			uParam6->f_E6[0x00000004] = 139.8f;
			uParam6->f_B5[0x00000005 /*3*/] = { -144.97f, -1550.67f, 34.07f };
			uParam6->f_E6[0x00000005] = 139.8f;
			uParam6->f_F8 = 0x00000012;
			*(uParam6[0x00000000 /*3*/]) = { -177.4019f, -1594.644f, 33.4994f };
			*(uParam6[0x00000001 /*3*/]) = { -181.9884f, -1688.1f, 32.2323f };
			*(uParam6[0x00000002 /*3*/]) = { -68.2538f, -1793.952f, 26.8799f };
			*(uParam6[0x00000003 /*3*/]) = { 56.0836f, -1894.422f, 20.5566f };
			*(uParam6[0x00000004 /*3*/]) = { 102.9353f, -1868.229f, 23.1889f };
			*(uParam6[0x00000005 /*3*/]) = { 236.2683f, -1924.712f, 23.29643f };
			*(uParam6[0x00000006 /*3*/]) = { 287.2185f, -1884.079f, 25.9619f };
			*(uParam6[0x00000007 /*3*/]) = { 397.2169f, -1948.52f, 23.3175f };
			*(uParam6[0x00000008 /*3*/]) = { 552.7326f, -1879.798f, 24.4769f };
			*(uParam6[0x00000009 /*3*/]) = { 599.2975f, -1699.438f, 21.9581f };
			*(uParam6[0x0000000A /*3*/]) = { 603.7488f, -1595.439f, 25.5479f };
			*(uParam6[0x0000000B /*3*/]) = { 514.6337f, -1443.954f, 28.3433f };
			*(uParam6[0x0000000C /*3*/]) = { 471.4342f, -1433.925f, 28.34211f };
			*(uParam6[0x0000000D /*3*/]) = { 293.2f, -1521.2f, 28.3415f };
			*(uParam6[0x0000000E /*3*/]) = { 182.5014f, -1585.272f, 28.3099f };
			*(uParam6[0x0000000F /*3*/]) = { 16.9636f, -1465.682f, 29.5632f };
			*(uParam6[0x00000010 /*3*/]) = { -73.9895f, -1476.329f, 31.1385f };
			*(uParam6[0x00000011 /*3*/]) = { -155.8476f, -1566.98f, 34.00011f };
			break;
		
		case 0x00000001:
			uParam6->f_F7 = 0x00000001;
			uParam6->f_FA = 30f;
			uParam6->f_FB = 38f;
			uParam6->f_FC = 46f;
			uParam6->f_F9 = 0x00000005;
			uParam6->f_B5[0x00000000 /*3*/] = { 368.64f, 309.52f, 103.16f };
			uParam6->f_E6[0x00000000] = 74.34f;
			uParam6->f_B5[0x00000001 /*3*/] = { 370.33f, 314.66f, 103.07f };
			uParam6->f_E6[0x00000001] = 74.34f;
			uParam6->f_B5[0x00000002 /*3*/] = { 376.31f, 307.58f, 102.9f };
			uParam6->f_E6[0x00000002] = 74.34f;
			uParam6->f_B5[0x00000003 /*3*/] = { 377.5f, 313f, 103.04f };
			uParam6->f_E6[0x00000003] = 74.34f;
			uParam6->f_B5[0x00000004 /*3*/] = { 383.49f, 305.81f, 102.86f };
			uParam6->f_E6[0x00000004] = 74.34f;
			uParam6->f_B5[0x00000005 /*3*/] = { 385.23f, 311.22f, 102.77f };
			uParam6->f_E6[0x00000005] = 74.34f;
			uParam6->f_F8 = 0x0000003C;
			*(uParam6[0x00000000 /*3*/]) = { 176.5163f, 368.2185f, 107.7932f };
			*(uParam6[0x00000001 /*3*/]) = { 74.6353f, 326.5884f, 111.1838f };
			*(uParam6[0x00000002 /*3*/]) = { 40.98252f, 278.1664f, 108.628f };
			*(uParam6[0x00000003 /*3*/]) = { -6.5086f, 269.1777f, 107.8002f };
			*(uParam6[0x00000004 /*3*/]) = { -157.2158f, 260.5422f, 92.9641f };
			*(uParam6[0x00000005 /*3*/]) = { -306.6567f, 264.1079f, 86.8654f };
			*(uParam6[0x00000006 /*3*/]) = { -510.8915f, 258.964f, 82.0697f };
			*(uParam6[0x00000007 /*3*/]) = { -677.1512f, 285.4961f, 81.0311f };
			*(uParam6[0x00000008 /*3*/]) = { -829.2744f, 291.7629f, 85.4059f };
			*(uParam6[0x00000009 /*3*/]) = { -854.5978f, 467.9413f, 86.39626f };
			*(uParam6[0x0000000A /*3*/]) = { -877.5402f, 535.0839f, 90.45716f };
			*(uParam6[0x0000000B /*3*/]) = { -1006.234f, 596.4271f, 101.8474f };
			*(uParam6[0x0000000C /*3*/]) = { -1211.74f, 545.4279f, 96.67117f };
			*(uParam6[0x0000000D /*3*/]) = { -1247.746f, 481.3893f, 92.658f };
			*(uParam6[0x0000000E /*3*/]) = { -1209.511f, 468.7086f, 88.8673f };
			*(uParam6[0x0000000F /*3*/]) = { -1096.542f, 456.5062f, 76.7926f };
			*(uParam6[0x00000010 /*3*/]) = { -1077.046f, 385.2891f, 68.0071f };
			*(uParam6[0x00000011 /*3*/]) = { -1081.664f, 292.3875f, 63.0137f };
			*(uParam6[0x00000012 /*3*/]) = { -1128.989f, 267.3287f, 64.9992f };
			*(uParam6[0x00000013 /*3*/]) = { -1274.646f, 228.7755f, 59.809f };
			*(uParam6[0x00000014 /*3*/]) = { -1408.295f, 193.1421f, 57.5883f };
			*(uParam6[0x00000015 /*3*/]) = { -1429.799f, -18.8745f, 51.4889f };
			*(uParam6[0x00000016 /*3*/]) = { -1466.38f, -91.9526f, 49.9463f };
			*(uParam6[0x00000017 /*3*/]) = { -1582.228f, -187.6987f, 54.6562f };
			*(uParam6[0x00000018 /*3*/]) = { -1633.187f, -302.6338f, 50.4393f };
			*(uParam6[0x00000019 /*3*/]) = { -1755.927f, -441.1943f, 41.2927f };
			*(uParam6[0x0000001A /*3*/]) = { -1675.621f, -568.3997f, 33.2031f };
			*(uParam6[0x0000001B /*3*/]) = { -1556.63f, -662.1553f, 27.9556f };
			*(uParam6[0x0000001C /*3*/]) = { -1441.304f, -761.7834f, 22.5293f };
			*(uParam6[0x0000001D /*3*/]) = { -1327.756f, -861.1824f, 15.5558f };
			*(uParam6[0x0000001E /*3*/]) = { -1254.9f, -1062.5f, 7.4798f };
			*(uParam6[0x0000001F /*3*/]) = { -1306.2f, -1091.1f, 6f };
			*(uParam6[0x00000020 /*3*/]) = { -1266.1f, -1265.2f, 3f };
			*(uParam6[0x00000021 /*3*/]) = { -1206.7f, -1251.5f, 6f };
			*(uParam6[0x00000022 /*3*/]) = { -1149.227f, -1305.18f, 4.164155f };
			*(uParam6[0x00000023 /*3*/]) = { -933.4516f, -1221.172f, 4.1712f };
			*(uParam6[0x00000024 /*3*/]) = { -804.6487f, -1141.681f, 8.1794f };
			*(uParam6[0x00000025 /*3*/]) = { -653.9498f, -1049.006f, 16.1054f };
			*(uParam6[0x00000026 /*3*/]) = { -635.1398f, -891.9207f, 23.9038f };
			*(uParam6[0x00000027 /*3*/]) = { -633.6005f, -739.1533f, 26.37f };
			*(uParam6[0x00000028 /*3*/]) = { -627.4288f, -582.9346f, 33.6256f };
			*(uParam6[0x00000029 /*3*/]) = { -625.0278f, -397.2912f, 33.7955f };
			*(uParam6[0x0000002A /*3*/]) = { -586.7f, -378.4f, 33.9005f };
			*(uParam6[0x0000002B /*3*/]) = { -437.4909f, -388.7413f, 32.1535f };
			*(uParam6[0x0000002C /*3*/]) = { -231.909f, -410.7465f, 29.6085f };
			*(uParam6[0x0000002D /*3*/]) = { -147.8854f, -373.2199f, 32.7875f };
			*(uParam6[0x0000002E /*3*/]) = { -115.0438f, -285.8302f, 40.5101f };
			*(uParam6[0x0000002F /*3*/]) = { -51.4044f, -257.3596f, 44.7924f };
			*(uParam6[0x00000030 /*3*/]) = { 85.9933f, -309.274f, 45.4642f };
			*(uParam6[0x00000031 /*3*/]) = { 225.0007f, -356.0629f, 43.2898f };
			*(uParam6[0x00000032 /*3*/]) = { 370.0895f, -402.5069f, 44.9239f };
			*(uParam6[0x00000033 /*3*/]) = { 481.0543f, -305.9488f, 45.6763f };
			*(uParam6[0x00000034 /*3*/]) = { 527.0013f, -220.0025f, 49.7887f };
			*(uParam6[0x00000035 /*3*/]) = { 546.5042f, -101.5203f, 64.26041f };
			*(uParam6[0x00000036 /*3*/]) = { 636.0579f, -57.7903f, 75.5052f };
			*(uParam6[0x00000037 /*3*/]) = { 703.7552f, 18.0953f, 83.1893f };
			*(uParam6[0x00000038 /*3*/]) = { 778.6013f, 128.2524f, 78.3677f };
			*(uParam6[0x00000039 /*3*/]) = { 751.6663f, 181.9566f, 81.9156f };
			*(uParam6[0x0000003A /*3*/]) = { 609.8065f, 232.9736f, 101.0741f };
			*(uParam6[0x0000003B /*3*/]) = { 369.29f, 312.41f, 103.24f };
			break;
		
		case 0x00000002:
			uParam6->f_F7 = 0x00000002;
			uParam6->f_FA = 34f;
			uParam6->f_FB = 40f;
			uParam6->f_FC = 46f;
			uParam6->f_F9 = 0x00000005;
			uParam6->f_B5[0x00000000 /*3*/] = { -816.46f, -2547.3f, 13.5f };
			uParam6->f_E6[0x00000000] = 341.07f;
			uParam6->f_B5[0x00000001 /*3*/] = { -812.31f, -2549.09f, 13.33f };
			uParam6->f_E6[0x00000001] = 341.07f;
			uParam6->f_B5[0x00000002 /*3*/] = { -818.74f, -2553.95f, 13.38f };
			uParam6->f_E6[0x00000002] = 341.07f;
			uParam6->f_B5[0x00000003 /*3*/] = { -815.07f, -2555.46f, 13.41f };
			uParam6->f_E6[0x00000003] = 341.07f;
			uParam6->f_B5[0x00000004 /*3*/] = { -822.05f, -2559.68f, 13.49f };
			uParam6->f_E6[0x00000004] = 341.07f;
			uParam6->f_B5[0x00000005 /*3*/] = { -817.13f, -2562.07f, 13.34f };
			uParam6->f_E6[0x00000005] = 341.07f;
			uParam6->f_F8 = 0x0000001E;
			*(uParam6[0x00000000 /*3*/]) = { -807.6469f, -2469.847f, 12.7351f };
			*(uParam6[0x00000001 /*3*/]) = { -846.8392f, -2324.698f, 16.9914f };
			*(uParam6[0x00000002 /*3*/]) = { -762.691f, -2198.874f, 14.9078f };
			*(uParam6[0x00000003 /*3*/]) = { -656.6849f, -2105.357f, 14.517f };
			*(uParam6[0x00000004 /*3*/]) = { -562.5864f, -2083.101f, 26.3678f };
			*(uParam6[0x00000005 /*3*/]) = { -336.5846f, -2111.548f, 22.7184f };
			*(uParam6[0x00000006 /*3*/]) = { -238.7528f, -2134.771f, 21.7367f };
			*(uParam6[0x00000007 /*3*/]) = { -18.5043f, -2050.755f, 18.0635f };
			*(uParam6[0x00000008 /*3*/]) = { 109.6071f, -2047.105f, 17.3701f };
			*(uParam6[0x00000009 /*3*/]) = { 162.2125f, -2017.698f, 17.2636f };
			*(uParam6[0x0000000A /*3*/]) = { 215.2578f, -1946.236f, 20.9418f };
			*(uParam6[0x0000000B /*3*/]) = { 200.6974f, -1907.024f, 22.7627f };
			*(uParam6[0x0000000C /*3*/]) = { 113.3993f, -1865.566f, 23.4617f };
			*(uParam6[0x0000000D /*3*/]) = { 68.2166f, -1891.056f, 20.7378f };
			*(uParam6[0x0000000E /*3*/]) = { -111.4028f, -1759.604f, 28.8334f };
			*(uParam6[0x0000000F /*3*/]) = { -242.8844f, -1813.055f, 28.7495f };
			*(uParam6[0x00000010 /*3*/]) = { -364.17f, -1821.922f, 21.5683f };
			*(uParam6[0x00000011 /*3*/]) = { -478.9611f, -1885.955f, 16.6741f };
			*(uParam6[0x00000012 /*3*/]) = { -598.0135f, -1999.651f, 16.4316f };
			*(uParam6[0x00000013 /*3*/]) = { -720.7257f, -2133.103f, 12.3082f };
			*(uParam6[0x00000014 /*3*/]) = { -777.2783f, -2181.116f, 14.8988f };
			*(uParam6[0x00000015 /*3*/]) = { -863.5436f, -2251.442f, 17.3272f };
			*(uParam6[0x00000016 /*3*/]) = { -948.965f, -2368.096f, 19.205f };
			*(uParam6[0x00000017 /*3*/]) = { -990.7916f, -2440.438f, 19.2041f };
			*(uParam6[0x00000018 /*3*/]) = { -1089.384f, -2613.615f, 19.2104f };
			*(uParam6[0x00000019 /*3*/]) = { -1084.455f, -2680.642f, 19.2111f };
			*(uParam6[0x0000001A /*3*/]) = { -996.711f, -2742.934f, 19.206f };
			*(uParam6[0x0000001B /*3*/]) = { -926.4546f, -2730.204f, 19.2052f };
			*(uParam6[0x0000001C /*3*/]) = { -874.8831f, -2665.625f, 18.6777f };
			*(uParam6[0x0000001D /*3*/]) = { -813.0546f, -2546.738f, 12.7888f };
			break;
		
		case 0x00000003:
			uParam6->f_F7 = 0x00000002;
			uParam6->f_FA = 34f;
			uParam6->f_FB = 40f;
			uParam6->f_FC = 46f;
			uParam6->f_F9 = 0x00000005;
			uParam6->f_B5[0x00000000 /*3*/] = { 780.54f, -1150.96f, 28.65f };
			uParam6->f_E6[0x00000000] = 93.71f;
			uParam6->f_B5[0x00000001 /*3*/] = { 780.24f, -1145.74f, 28.56f };
			uParam6->f_E6[0x00000001] = 93.71f;
			uParam6->f_B5[0x00000002 /*3*/] = { 787.47f, -1150.53f, 28.5f };
			uParam6->f_E6[0x00000002] = 93.71f;
			uParam6->f_B5[0x00000003 /*3*/] = { 787.19f, -1145.74f, 28.66f };
			uParam6->f_E6[0x00000003] = 93.71f;
			uParam6->f_B5[0x00000004 /*3*/] = { 794.1f, -1149.95f, 28.66f };
			uParam6->f_E6[0x00000004] = 93.71f;
			uParam6->f_B5[0x00000005 /*3*/] = { 793.58f, -1144.73f, 28.59f };
			uParam6->f_E6[0x00000005] = 93.71f;
			uParam6->f_F8 = 0x00000018;
			*(uParam6[0x00000000 /*3*/]) = { 660.2601f, -1154.407f, 40.641f };
			*(uParam6[0x00000001 /*3*/]) = { 571.5685f, -1178.696f, 41.2734f };
			*(uParam6[0x00000002 /*3*/]) = { 421.5113f, -1184.212f, 39.7127f };
			*(uParam6[0x00000003 /*3*/]) = { 268.5206f, -1176.572f, 37.1933f };
			*(uParam6[0x00000004 /*3*/]) = { 186.8177f, -1162.025f, 37.1079f };
			*(uParam6[0x00000005 /*3*/]) = { 71f, -1163.3f, 28.7f };
			*(uParam6[0x00000006 /*3*/]) = { 74.9529f, -1267.338f, 28.19373f };
			*(uParam6[0x00000007 /*3*/]) = { 244.1904f, -1226.699f, 37.3049f };
			*(uParam6[0x00000008 /*3*/]) = { 394.5264f, -1224.619f, 39.1224f };
			*(uParam6[0x00000009 /*3*/]) = { 519.6835f, -1228.254f, 40.9569f };
			*(uParam6[0x0000000A /*3*/]) = { 643.6398f, -1244.262f, 40.9174f };
			*(uParam6[0x0000000B /*3*/]) = { 765.5765f, -1242.766f, 25.9457f };
			*(uParam6[0x0000000C /*3*/]) = { 851.6f, -1254.2f, 26.9066f };
			*(uParam6[0x0000000D /*3*/]) = { 859.1f, -1326.3f, 37.0286f };
			*(uParam6[0x0000000E /*3*/]) = { 739.5747f, -1347.013f, 38.903f };
			*(uParam6[0x0000000F /*3*/]) = { 695.9282f, -1292.136f, 41.1269f };
			*(uParam6[0x00000010 /*3*/]) = { 729.7197f, -1235.624f, 43.9479f };
			*(uParam6[0x00000011 /*3*/]) = { 755.8483f, -1195.996f, 44.0202f };
			*(uParam6[0x00000012 /*3*/]) = { 724.6743f, -1156.984f, 43.7047f };
			*(uParam6[0x00000013 /*3*/]) = { 688.6f, -1101.7f, 40.8716f };
			*(uParam6[0x00000014 /*3*/]) = { 732.4061f, -1045.311f, 39.4973f };
			*(uParam6[0x00000015 /*3*/]) = { 815.3089f, -1042.096f, 41.2541f };
			*(uParam6[0x00000016 /*3*/]) = { 865.2093f, -1093.343f, 35.9246f };
			*(uParam6[0x00000017 /*3*/]) = { 777.4238f, -1148.405f, 28.07877f };
			break;
		
		case 0x00000004:
			uParam6->f_F7 = 0x00000002;
			uParam6->f_FA = 34f;
			uParam6->f_FB = 40f;
			uParam6->f_FC = 46f;
			uParam6->f_F9 = 0x00000005;
			uParam6->f_B5[0x00000000 /*3*/] = { -1063.95f, -1153.21f, 1.52f };
			uParam6->f_E6[0x00000000] = 299.67f;
			uParam6->f_B5[0x00000001 /*3*/] = { -1062.53f, -1155.37f, 1.46f };
			uParam6->f_E6[0x00000001] = 299.67f;
			uParam6->f_B5[0x00000002 /*3*/] = { -1068.6f, -1155.54f, 1.61f };
			uParam6->f_E6[0x00000002] = 299.67f;
			uParam6->f_B5[0x00000003 /*3*/] = { -1066.89f, -1157.64f, 1.56f };
			uParam6->f_E6[0x00000003] = 299.67f;
			uParam6->f_B5[0x00000004 /*3*/] = { -1072.76f, -1158.02f, 1.53f };
			uParam6->f_E6[0x00000004] = 299.67f;
			uParam6->f_B5[0x00000005 /*3*/] = { -1072.01f, -1160.27f, 1.48f };
			uParam6->f_E6[0x00000005] = 299.67f;
			uParam6->f_F8 = 0x00000019;
			*(uParam6[0x00000000 /*3*/]) = { -925.4882f, -1072.804f, 1.1502f };
			*(uParam6[0x00000001 /*3*/]) = { -838.902f, -1020.697f, 12.2795f };
			*(uParam6[0x00000002 /*3*/]) = { -752.4019f, -968.1661f, 15.5933f };
			*(uParam6[0x00000003 /*3*/]) = { -660.0514f, -959.4323f, 20.3359f };
			*(uParam6[0x00000004 /*3*/]) = { -643.1226f, -996.0269f, 19.6655f };
			*(uParam6[0x00000005 /*3*/]) = { -755.0204f, -1100.572f, 9.7347f };
			*(uParam6[0x00000006 /*3*/]) = { -844.4481f, -1152.17f, 5.5481f };
			*(uParam6[0x00000007 /*3*/]) = { -934.6541f, -1204.102f, 4.1492f };
			*(uParam6[0x00000008 /*3*/]) = { -968.2922f, -1181.906f, 2.909f };
			*(uParam6[0x00000009 /*3*/]) = { -1023.329f, -1087.952f, 1.0397f };
			*(uParam6[0x0000000A /*3*/]) = { -1078.633f, -994.3664f, 1.2191f };
			*(uParam6[0x0000000B /*3*/]) = { -1170.782f, -837.8701f, 13.2119f };
			*(uParam6[0x0000000C /*3*/]) = { -1312.033f, -658.3402f, 25.5365f };
			*(uParam6[0x0000000D /*3*/]) = { -1375.911f, -560.5161f, 29.234f };
			*(uParam6[0x0000000E /*3*/]) = { -1446.224f, -460.4871f, 34.1264f };
			*(uParam6[0x0000000F /*3*/]) = { -1487.252f, -447.6395f, 34.594f };
			*(uParam6[0x00000010 /*3*/]) = { -1638.216f, -562.0701f, 32.4537f };
			*(uParam6[0x00000011 /*3*/]) = { -1625.822f, -610.9568f, 31.6803f };
			*(uParam6[0x00000012 /*3*/]) = { -1531.39f, -684.85f, 27.8725f };
			*(uParam6[0x00000013 /*3*/]) = { -1424.36f, -771.3326f, 21.8328f };
			*(uParam6[0x00000014 /*3*/]) = { -1300.448f, -901.4435f, 10.3951f };
			*(uParam6[0x00000015 /*3*/]) = { -1257.012f, -1048.034f, 7.5077f };
			*(uParam6[0x00000016 /*3*/]) = { -1211.112f, -1198.487f, 6.755771f };
			*(uParam6[0x00000017 /*3*/]) = { -1104.378f, -1177.508f, 1.2615f };
			*(uParam6[0x00000018 /*3*/]) = { -1062.986f, -1153.365f, 1.129525f };
			break;
		
		case 0x00000005:
			uParam6->f_F7 = 0x00000001;
			uParam6->f_FA = 52f;
			uParam6->f_FB = 56f;
			uParam6->f_FC = 60f;
			uParam6->f_F9 = 0x00000007;
			uParam6->f_B5[0x00000000 /*3*/] = { 3058.771f, 637.4882f, 0f };
			uParam6->f_E6[0x00000000] = 24f;
			uParam6->f_B5[0x00000001 /*3*/] = { 3061.604f, 638.7496f, 0f };
			uParam6->f_E6[0x00000001] = 24f;
			uParam6->f_B5[0x00000002 /*3*/] = { 3064.437f, 640.0109f, 0f };
			uParam6->f_E6[0x00000002] = 24f;
			uParam6->f_B5[0x00000003 /*3*/] = { 3067.27f, 641.2722f, 0f };
			uParam6->f_E6[0x00000003] = 24f;
			uParam6->f_B5[0x00000004 /*3*/] = { 3061.63f, 631.067f, 0f };
			uParam6->f_E6[0x00000004] = 24f;
			uParam6->f_B5[0x00000005 /*3*/] = { 3064.463f, 632.3283f, 0f };
			uParam6->f_E6[0x00000005] = 24f;
			uParam6->f_B5[0x00000006 /*3*/] = { 3067.296f, 633.5896f, 0f };
			uParam6->f_E6[0x00000006] = 24f;
			uParam6->f_B5[0x00000007 /*3*/] = { 3070.129f, 634.851f, 0f };
			uParam6->f_E6[0x00000007] = 24f;
			uParam6->f_F8 = 0x00000013;
			*(uParam6[0x00000000 /*3*/]) = { 2978.929f, 778.0858f, 0f };
			*(uParam6[0x00000001 /*3*/]) = { 2925.586f, 840.1877f, 0f };
			*(uParam6[0x00000002 /*3*/]) = { 2913.896f, 1011.495f, 0f };
			*(uParam6[0x00000003 /*3*/]) = { 2903.343f, 1120.076f, 0f };
			*(uParam6[0x00000004 /*3*/]) = { 2944.478f, 1197.342f, 0f };
			*(uParam6[0x00000005 /*3*/]) = { 3020.189f, 1217.427f, 0f };
			*(uParam6[0x00000006 /*3*/]) = { 3107.794f, 1212.536f, 0f };
			*(uParam6[0x00000007 /*3*/]) = { 3164.754f, 1246.812f, 0f };
			*(uParam6[0x00000008 /*3*/]) = { 3185.532f, 1293.382f, 0f };
			*(uParam6[0x00000009 /*3*/]) = { 3122.885f, 1432.143f, 0f };
			*(uParam6[0x0000000A /*3*/]) = { 3021.7f, 1553.274f, 0f };
			*(uParam6[0x0000000B /*3*/]) = { 3014.559f, 1634.445f, 0f };
			*(uParam6[0x0000000C /*3*/]) = { 3045.481f, 1681.173f, 0f };
			*(uParam6[0x0000000D /*3*/]) = { 3104.443f, 1687.211f, 0f };
			*(uParam6[0x0000000E /*3*/]) = { 3147.714f, 1629.84f, 0f };
			*(uParam6[0x0000000F /*3*/]) = { 3119.681f, 1571.555f, 0f };
			*(uParam6[0x00000010 /*3*/]) = { 3005.006f, 1482.663f, 0f };
			*(uParam6[0x00000011 /*3*/]) = { 2973.872f, 1355.766f, 0f };
			*(uParam6[0x00000012 /*3*/]) = { 3014.149f, 1187.6f, 0f };
			break;
		
		case 0x00000006:
			uParam6->f_F7 = 0x00000001;
			uParam6->f_FA = 62f;
			uParam6->f_FB = 66f;
			uParam6->f_FC = 70f;
			uParam6->f_F9 = 0x00000007;
			uParam6->f_B5[0x00000000 /*3*/] = { 3477.927f, 5203.865f, 0f };
			uParam6->f_E6[0x00000000] = 227.2083f;
			uParam6->f_B5[0x00000001 /*3*/] = { 3473.713f, 5199.313f, 0f };
			uParam6->f_E6[0x00000001] = 227.2083f;
			uParam6->f_B5[0x00000002 /*3*/] = { 3469.5f, 5194.762f, 0f };
			uParam6->f_E6[0x00000002] = 227.2083f;
			uParam6->f_B5[0x00000003 /*3*/] = { 3465.287f, 5190.21f, 0f };
			uParam6->f_E6[0x00000003] = 227.2083f;
			uParam6->f_B5[0x00000004 /*3*/] = { 3472.768f, 5208.64f, 0f };
			uParam6->f_E6[0x00000004] = 227.2083f;
			uParam6->f_B5[0x00000005 /*3*/] = { 3468.555f, 5204.088f, 0f };
			uParam6->f_E6[0x00000005] = 227.2083f;
			uParam6->f_B5[0x00000006 /*3*/] = { 3464.342f, 5199.537f, 0f };
			uParam6->f_E6[0x00000006] = 227.2083f;
			uParam6->f_B5[0x00000007 /*3*/] = { 3460.128f, 5194.985f, 0f };
			uParam6->f_E6[0x00000007] = 227.2083f;
			uParam6->f_F8 = 0x0000001D;
			*(uParam6[0x00000000 /*3*/]) = { 3533.901f, 5140.196f, 0f };
			*(uParam6[0x00000001 /*3*/]) = { 3561.557f, 5013.942f, 0f };
			*(uParam6[0x00000002 /*3*/]) = { 3602.232f, 4928.896f, 0f };
			*(uParam6[0x00000003 /*3*/]) = { 3682.408f, 4853.424f, 0f };
			*(uParam6[0x00000004 /*3*/]) = { 3776.303f, 4862.4f, 0f };
			*(uParam6[0x00000005 /*3*/]) = { 3838.789f, 4851.96f, 0f };
			*(uParam6[0x00000006 /*3*/]) = { 3879.336f, 4777.732f, 0f };
			*(uParam6[0x00000007 /*3*/]) = { 3875.379f, 4684.574f, 0f };
			*(uParam6[0x00000008 /*3*/]) = { 4004.355f, 4513.158f, 0f };
			*(uParam6[0x00000009 /*3*/]) = { 4028.42f, 4457.351f, 0f };
			*(uParam6[0x0000000A /*3*/]) = { 4011.752f, 4363.838f, 0f };
			*(uParam6[0x0000000B /*3*/]) = { 3965.229f, 4321.524f, 0f };
			*(uParam6[0x0000000C /*3*/]) = { 3958.307f, 4269.164f, 0f };
			*(uParam6[0x0000000D /*3*/]) = { 4007.071f, 4201.311f, 0f };
			*(uParam6[0x0000000E /*3*/]) = { 4067.812f, 4155.95f, 0f };
			*(uParam6[0x0000000F /*3*/]) = { 4124.166f, 4158.292f, 0f };
			*(uParam6[0x00000010 /*3*/]) = { 4173.66f, 4207.495f, 0f };
			*(uParam6[0x00000011 /*3*/]) = { 4200.325f, 4325.868f, 0f };
			*(uParam6[0x00000012 /*3*/]) = { 4232.361f, 4458.968f, 0f };
			*(uParam6[0x00000013 /*3*/]) = { 4212.95f, 4519.744f, 0f };
			*(uParam6[0x00000014 /*3*/]) = { 4137.386f, 4562.076f, 0f };
			*(uParam6[0x00000015 /*3*/]) = { 3952.561f, 4561.69f, 0f };
			*(uParam6[0x00000016 /*3*/]) = { 3850.727f, 4674.479f, 0f };
			*(uParam6[0x00000017 /*3*/]) = { 3840.677f, 4729.697f, 0f };
			*(uParam6[0x00000018 /*3*/]) = { 3868.624f, 4810.973f, 0f };
			*(uParam6[0x00000019 /*3*/]) = { 3861.741f, 4847.778f, 0f };
			*(uParam6[0x0000001A /*3*/]) = { 3819.871f, 4912.847f, 0f };
			*(uParam6[0x0000001B /*3*/]) = { 3707.324f, 5047.796f, 0f };
			*(uParam6[0x0000001C /*3*/]) = { 3603.679f, 5125.124f, 0f };
			break;
		
		case 0x00000007:
			uParam6->f_F7 = 0x00000001;
			uParam6->f_FA = 20f;
			uParam6->f_FB = 30f;
			uParam6->f_FC = 40f;
			uParam6->f_F9 = 0x00000003;
			uParam6->f_B5[0x00000000 /*3*/] = { 207.0846f, 3615.2f, 30.1f };
			uParam6->f_E6[0x00000000] = -188f;
			uParam6->f_B5[0x00000001 /*3*/] = { 200.9427f, 3616.063f, 30.1f };
			uParam6->f_E6[0x00000001] = -188f;
			uParam6->f_B5[0x00000002 /*3*/] = { 194.8008f, 3616.927f, 30.1f };
			uParam6->f_E6[0x00000002] = -188f;
			uParam6->f_B5[0x00000003 /*3*/] = { 188.6589f, 3617.79f, 30.1f };
			uParam6->f_E6[0x00000003] = -188f;
			uParam6->f_F8 = 0x0000000E;
			*(uParam6[0x00000000 /*3*/]) = { 156.2047f, 3459.932f, 30f };
			*(uParam6[0x00000001 /*3*/]) = { 113.8073f, 3309.78f, 27.996f };
			*(uParam6[0x00000002 /*3*/]) = { 36.4057f, 3136.948f, 25.0106f };
			*(uParam6[0x00000003 /*3*/]) = { -128.4259f, 3113.228f, 20.7191f };
			*(uParam6[0x00000004 /*3*/]) = { -232.13f, 3004.532f, 16.8594f };
			*(uParam6[0x00000005 /*3*/]) = { -371.5406f, 3013.692f, 11.5494f };
			*(uParam6[0x00000006 /*3*/]) = { -479.2344f, 2908.703f, 12.1299f };
			*(uParam6[0x00000007 /*3*/]) = { -611.1117f, 2960.914f, 12.2048f };
			*(uParam6[0x00000008 /*3*/]) = { -740.982f, 2867.565f, 12.1505f };
			*(uParam6[0x00000009 /*3*/]) = { -863.817f, 2804.024f, 8.5818f };
			*(uParam6[0x0000000A /*3*/]) = { -1023.538f, 2833.889f, 2.927f };
			*(uParam6[0x0000000B /*3*/]) = { -1160.616f, 2766.003f, -1.4915f };
			*(uParam6[0x0000000C /*3*/]) = { -1278.023f, 2669.231f, -0.6163f };
			*(uParam6[0x0000000D /*3*/]) = { -1450.428f, 2625.473f, 0f };
			break;
		
		case 0x00000008:
			uParam6->f_F7 = 0x00000001;
			uParam6->f_FA = 72f;
			uParam6->f_FB = 76f;
			uParam6->f_FC = 80f;
			uParam6->f_F9 = 0x00000007;
			uParam6->f_B5[0x00000000 /*3*/] = { 626.4072f, -2135.928f, 0f };
			uParam6->f_E6[0x00000000] = 176f;
			uParam6->f_B5[0x00000001 /*3*/] = { 623.3137f, -2135.712f, 0f };
			uParam6->f_E6[0x00000001] = 176f;
			uParam6->f_B5[0x00000002 /*3*/] = { 620.2201f, -2135.495f, 0f };
			uParam6->f_E6[0x00000002] = 176f;
			uParam6->f_B5[0x00000003 /*3*/] = { 617.1265f, -2135.279f, 0f };
			uParam6->f_E6[0x00000003] = 176f;
			uParam6->f_B5[0x00000004 /*3*/] = { 626.8975f, -2128.916f, 0f };
			uParam6->f_E6[0x00000004] = 176f;
			uParam6->f_B5[0x00000005 /*3*/] = { 623.804f, -2128.7f, 0f };
			uParam6->f_E6[0x00000005] = 176f;
			uParam6->f_B5[0x00000006 /*3*/] = { 620.7104f, -2128.483f, 0f };
			uParam6->f_E6[0x00000006] = 176f;
			uParam6->f_B5[0x00000007 /*3*/] = { 617.6168f, -2128.267f, 0f };
			uParam6->f_E6[0x00000007] = 176f;
			uParam6->f_F8 = 0x00000019;
			*(uParam6[0x00000000 /*3*/]) = { 628.2693f, -2361.573f, 0f };
			*(uParam6[0x00000001 /*3*/]) = { 624.4983f, -2472.271f, 0f };
			*(uParam6[0x00000002 /*3*/]) = { 656.1755f, -2551.063f, 0f };
			*(uParam6[0x00000003 /*3*/]) = { 707.1786f, -2577.509f, 0f };
			*(uParam6[0x00000004 /*3*/]) = { 821.6584f, -2613.453f, 0f };
			*(uParam6[0x00000005 /*3*/]) = { 913.3214f, -2662.629f, 0f };
			*(uParam6[0x00000006 /*3*/]) = { 992.793f, -2725.734f, 0f };
			*(uParam6[0x00000007 /*3*/]) = { 1010.991f, -2799.774f, 0f };
			*(uParam6[0x00000008 /*3*/]) = { 955.9268f, -2841.99f, 0f };
			*(uParam6[0x00000009 /*3*/]) = { 838.408f, -2820.556f, 0f };
			*(uParam6[0x0000000A /*3*/]) = { 788.3865f, -2739.525f, 0f };
			*(uParam6[0x0000000B /*3*/]) = { 781.0709f, -2635.677f, 0f };
			*(uParam6[0x0000000C /*3*/]) = { 707.1389f, -2600.342f, 0f };
			*(uParam6[0x0000000D /*3*/]) = { 581.391f, -2527.31f, -1f };
			*(uParam6[0x0000000E /*3*/]) = { 523.5403f, -2445.459f, 0f };
			*(uParam6[0x0000000F /*3*/]) = { 465.708f, -2385.965f, 0f };
			*(uParam6[0x00000010 /*3*/]) = { 409.5882f, -2270.467f, 0f };
			*(uParam6[0x00000011 /*3*/]) = { 323.1916f, -2259.304f, 0f };
			*(uParam6[0x00000012 /*3*/]) = { 271.27f, -2286.134f, 0f };
			*(uParam6[0x00000013 /*3*/]) = { 261.3279f, -2344.937f, 0f };
			*(uParam6[0x00000014 /*3*/]) = { 295.7343f, -2372.19f, 0f };
			*(uParam6[0x00000015 /*3*/]) = { 372.9001f, -2373.087f, 0f };
			*(uParam6[0x00000016 /*3*/]) = { 410.8412f, -2413.066f, 0f };
			*(uParam6[0x00000017 /*3*/]) = { 412.1277f, -2539.383f, 0f };
			*(uParam6[0x00000018 /*3*/]) = { 413.6328f, -2712.87f, 0f };
			break;
	}
}

void func_567(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(0x00000008, &uVar0, 0x00000001, 0x00000001);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(0x00000008, &cVar1);
	}
}

void func_568(int iParam0)
{
	func_537();
	Global_12C4D = iParam0;
	Global_12C4C = 0x00000000;
	Global_12C4F = 0x00000003;
}

void func_569(int iParam0)
{
	if ((Local_531.f_B == 0x00000001 || Local_531.f_B == 0x00000002) || Local_531.f_B == 0x00000003)
	{
		switch (Local_530)
		{
			case 0x00000005:
				func_583(0x00000084, 0x00000000, 0x00000000);
				break;
			
			case 0x00000006:
				func_583(0x00000085, 0x00000000, 0x00000000);
				break;
			
			case 0x00000007:
				func_583(0x00000086, 0x00000000, 0x00000000);
				break;
			
			case 0x00000008:
				func_583(0x00000087, 0x00000000, 0x00000000);
				break;
			
			case 0x00000000:
				func_583(0x0000008C, 0x00000000, 0x00000000);
				break;
			
			case 0x00000001:
				func_583(0x00000088, 0x00000000, 0x00000000);
				break;
			
			case 0x00000002:
				func_583(0x00000089, 0x00000000, 0x00000000);
				break;
			
			case 0x00000003:
				func_583(0x0000008A, 0x00000000, 0x00000000);
				break;
			
			case 0x00000004:
				func_583(0x0000008B, 0x00000000, 0x00000000);
				break;
		}
		if (Local_531.f_B == 0x00000001 && !Global_1B416.f_618E.f_4)
		{
			if (((((unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000000) || Local_530 == 0x00000000) && (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000001) || Local_530 == 0x00000001)) && (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000002) || Local_530 == 0x00000002)) && (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000003) || Local_530 == 0x00000003)) && (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000004) || Local_530 == 0x00000004))
			{
				if (func_582(0xC5E38D79, 0x00000006, 0x00000002, 0x00000035, 0x00000003, 0x00002710, 0x00002710, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000))
				{
					Global_1B416.f_618E.f_4 = 0x00000001;
				}
			}
		}
	}
	func_534(0x00000001, 0x00000001);
	func_534(0x00000007, 0x00000001);
	func_581(&(Local_530.f_2));
	func_537();
	func_580(&iLocal_1692, 0x00000000);
	func_580(&iLocal_1695, 0x00000000);
	func_580(&iLocal_1698, 0x00000000);
	func_580(&iLocal_1701, 0x00000000);
	func_572(iParam0);
	func_555(0x00000000);
	func_422(&iLocal_1105);
	func_270();
	func_228(&Local_113, 0x00000000);
	if (Local_530.f_1 == 0x00000003)
	{
		unk_0xAD4193DCC43BF34B("RADIO_16_SILVERLAKE");
	}
	unk_0x5BED90AC1E2BC558("AZ_DISTANT_VEHICLES_CITY_CENTRE", 0x00000001, 0x00000000);
	unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_01", 0x00000001, 0x00000000);
	unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_02", 0x00000001, 0x00000000);
	unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_03", 0x00000001, 0x00000000);
	switch (Local_530)
	{
		case 0x00000005:
			func_571(0x00000052, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_2), 0x00000000);
			break;
		
		case 0x00000006:
			func_571(0x00000053, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_2), 0x00000001);
			break;
		
		case 0x00000007:
			func_571(0x00000054, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_2), 0x00000002);
			break;
		
		case 0x00000008:
			func_571(0x00000055, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_2), 0x00000003);
			break;
		
		case 0x00000000:
			func_571(0x00000056, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000000);
			break;
		
		case 0x00000001:
			func_571(0x00000057, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000001);
			break;
		
		case 0x00000002:
			func_571(0x00000058, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000002);
			break;
		
		case 0x00000003:
			func_571(0x00000059, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000003);
			break;
		
		case 0x00000004:
			func_571(0x0000005A, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000004);
			break;
	}
	unk_0x11CCD0ACA866C6C5(0x00000000, 0x00000001);
	SYSTEM::WAIT(0x000003E8);
	unk_0xEAB026E686C0D991(0x00000001, 0x00000050, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000050, 0x00000001);
	unk_0x31A33F7BCB08CB80(0x00000000);
	func_570();
	unk_0x10FAF14A60A0DBE1();
}

void func_570()
{
	vector3 vVar0[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0x3CFFF3C8EACD8DC1(StackVal, 0x00000000, 0x00000000, 0x00000000);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x8DECFDD6715449E4(0x00000000, &cVar0);
	}
}

void func_571(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000F);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
		if (Global_79A7 == 0x00000001)
		{
			Global_79A8 = 0x00000001;
		}
		Global_79A7 = 0x00000001;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000003);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13))
		{
			unk_0xCD816869CA451988(0x00000001);
			unk_0x142CC44DB769B57E(&(Global_79AA[iVar0 /*23*/].f_13));
			unk_0xCD816869CA451988(0x00000000);
		}
	}
}

void func_572(int iParam0)
{
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	func_237(&Local_576, 0x00000001, 0x00000000);
	unk_0xB975E4541DDAB1F5(0x00000000);
	if ((Local_531.f_B == 0x00000001 || Local_531.f_B == 0x00000002) || Local_531.f_B == 0x00000003)
	{
		func_576();
	}
	if (Local_531.f_B == 0x00000001)
	{
		func_573();
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
	}
	if (func_9(unk_0x16F2683693E537C9()))
	{
		unk_0xCC095276B3DD380E(unk_0x16F2683693E537C9(), 0x00000001);
	}
	unk_0x2733E1E56786AB9E(0x00000000);
	unk_0xFF42993F8A095C58(0x00000003);
	unk_0x3F50EAA916065520(0x00000000);
	unk_0xC83E7A5E408DF68C(0x00000003);
	unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000001);
	unk_0x060F249A9A3E3F4E(0x00000001);
	unk_0x51B096AAC60548C1(1f);
	unk_0xF48790410026514E(0x00000001);
	unk_0xCD7D80FD792F9954("DRIVE", 0x00000001);
	unk_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0x00000001, 0x00000001);
	func_179(0x00000001);
	func_32(iParam0);
	if (!unk_0xEA6BC48857E0AC4C(sLocal_773))
	{
		unk_0x2F3540C2227116A3(sLocal_773);
	}
	func_33(&iLocal_766, 0x00000001, 0x00000000, 0x00000001);
	func_33(&iLocal_755, 0x00000001, 0x00000000, 0x00000001);
	func_33(&iLocal_756, 0x00000001, 0x00000000, 0x00000001);
	func_33(&iLocal_757, 0x00000001, 0x00000000, 0x00000001);
	if (unk_0xC844350D5D58C99A(vLocal_18.x))
	{
		if (!unk_0x437347B10A200C4B(vLocal_18.x, 0x00000000))
		{
			unk_0xD5A0214B20BCBAD8(vLocal_18.x, 0x00000000);
			unk_0x44A200C9B6E1CEA6(vLocal_18.x, 0x00000000);
			if ((Local_530.f_1 == 0x00000003 && func_9(unk_0x16F2683693E537C9())) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		func_422(&vLocal_18);
	}
	unk_0xCE1730371ACDCCFC(0x00000000);
	Global_180528 = 0x00000000;
	if (Local_530.f_1 == 0x00000003)
	{
		unk_0x55D0A2DB35045A35(iLocal_572);
		unk_0x8C26F31DFF77D124();
	}
	else
	{
		unk_0xE96F19797E59AB06();
	}
	if (Local_530.f_1 == 0x00000003)
	{
		unk_0xC92DB9682A650680("MGSR_STOP");
	}
}

void func_573()
{
	switch (Local_530)
	{
		case 0x00000005:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_1, 0x00000000))
			{
				func_575(0x00000052, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_1), 0x00000000);
				func_574();
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_1, 0x00000001))
			{
				func_575(0x00000053, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_1), 0x00000001);
				func_574();
			}
			break;
		
		case 0x00000007:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_1, 0x00000002))
			{
				func_575(0x00000054, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_1), 0x00000002);
				func_574();
			}
			break;
		
		case 0x00000008:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_1, 0x00000003))
			{
				func_575(0x00000055, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_1), 0x00000003);
				func_574();
			}
			break;
		
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000000))
			{
				func_575(0x00000056, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_2), 0x00000000);
				func_574();
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000001))
			{
				func_575(0x00000057, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_2), 0x00000001);
				func_574();
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000002))
			{
				func_575(0x00000058, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_2), 0x00000002);
				func_574();
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000003))
			{
				func_575(0x00000059, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_2), 0x00000003);
				func_574();
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, 0x00000004))
			{
				func_575(0x0000005A, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_2), 0x00000004);
				func_574();
			}
			break;
	}
}

int func_574()
{
	if (func_227(0x00000000))
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

void func_575(int iParam0, bool bParam1)
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

void func_576()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	iVar1 = 0xFFFFFFFF;
	switch (Local_530)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_1), 0x00000001);
				bVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000002) && Global_1B416.f_618E != 0x00000002)
			{
				Global_1B416.f_618E = 0x00000002;
				iVar1 = 0xE08DDE02;
				bVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000003) && Global_1B416.f_618E != 0x00000003)
			{
				Global_1B416.f_618E = 0x00000003;
				iVar1 = 0x10836E3E;
				bVar0 = 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000004) && Global_1B416.f_618E != 0x00000004)
			{
				Global_1B416.f_618E = 0x00000004;
				iVar1 = 0x1C6EE74F;
				bVar0 = 0x00000001;
			}
			break;
		
		case 0x00000004:
			break;
	}
	if (bVar0)
	{
		if (iVar1 != 0xFFFFFFFF)
		{
			func_577(iVar1, 0x00000001, 0x00000002, 0x00000035, 0x002BF200, 0x00002710, 0xFFFFFFFF, 0x000000BD, 0xFFFFFFFF, 0x00000000, 0x00000001);
		}
		func_574();
	}
}

int func_577(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<14> Var0;
	
	if (func_227(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam4 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam7 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam3 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0x00000000;
		}
	}
	if (iParam2 < 0x00000001 || iParam2 > 0x00000007)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_2FC < 0x00000008)
	{
		Var0 = iParam0;
		Var0.f_3 = func_579(iParam1);
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_A = 0xFFFFFFFF;
		Var0.f_B = 0xFFFFFFFF;
		Var0.f_D = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		Global_1B416.f_1E03.f_28B[Global_1B416.f_1E03.f_2FC /*14*/] = { Var0 };
		Global_1B416.f_1E03.f_2FC++;
		func_578(0x00000000);
		func_578(0x00000001);
		func_578(0x00000002);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_578(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_1B416.f_1E03[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < Global_1B416.f_1E03.f_2FC)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_3 == 0x00000005)
			{
				iVar1 = 0x00000005;
			}
		}
		iVar2++;
	}
	Global_1B416.f_1E03.f_397[iParam0] = iVar1;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000004;
			break;
		
		case 0x00000002:
			return 0x00000003;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000005:
		case 0x00000006:
			return 0x00000000;
			break;
	}
	return 0x00000007;
}

void func_580(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*iParam0);
		}
	}
}

void func_581(var uParam0)
{
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*uParam0 == Global_A1B1)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	*uParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

int func_582(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_227(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam8 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam9 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam3 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0x00000000;
		}
	}
	if (iParam4 < 0x00000003)
	{
		if (iParam4 != iParam3)
		{
			return 0x00000000;
		}
	}
	if (iParam2 < 0x00000001 || iParam2 > 0x00000007)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_88 < 0x00000009)
	{
		Var0 = iParam0;
		if (Global_1B416.f_1E03.f_38F == Var0)
		{
			Global_1B416.f_1E03.f_38F = 0xFFFFFFFF;
		}
		Var0.f_3 = func_579(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = iParam7;
		Var0.f_B = 0xFFFFFFFF;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000001);
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		if (iParam7 != 0xFFFFFFFF)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000B);
		}
		else if (iParam1 == 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000A);
		}
		Global_1B416.f_1E03[Global_1B416.f_1E03.f_88 /*15*/] = { Var0 };
		Global_1B416.f_1E03.f_88++;
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam2, iVar1))
			{
				func_578(iVar1);
			}
			iVar1++;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_583(int iParam0, int iParam1, int iParam2)
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
		func_196((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_584();
	}
}

void func_584()
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
		func_217(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_585() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_574();
				}
			}
		}
	}
}

int func_585()
{
	return Global_7830;
}

