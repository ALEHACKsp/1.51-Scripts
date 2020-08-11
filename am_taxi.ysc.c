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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
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
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<194> Local_68 = { 0, 0, 8, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_69 = 0;
	struct<44> Local_70[32];
	int iLocal_71 = 0;
	int iLocal_72[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_73[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_74[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	float fLocal_80 = 0f;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	vector3 vLocal_96[50] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	float fLocal_106 = 0f;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	vector3 vLocal_110 = { 0f, 0f, 0f };
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 12;
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
	var uLocal_811 = 1065353216;
	struct<9> Local_812 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	char* sLocal_817 = NULL;
	int iLocal_818 = 0;
	vector3 vLocal_819 = { 0f, 0f, 0f };
	vector3 vLocal_820 = { 0f, 0f, 0f };
	vector3 vLocal_821 = { 0f, 0f, 0f };
	float fLocal_822 = 0f;
	vector3 vLocal_823 = { 0f, 0f, 0f };
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	float fLocal_826 = 0f;
	int iLocal_827 = 0;
	var uLocal_828 = 16;
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
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	struct<21> Local_995 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 0x00000003;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_66 = unk_0xAD1355DD1E5D2D9B();
	iLocal_67 = unk_0x817B3657F78A517A();
	iLocal_87 = joaat("prop_taxi_meter_2");
	fLocal_89 = 1f;
	fLocal_90 = (0.4f * fLocal_89);
	fLocal_91 = (0.6f * fLocal_89);
	fLocal_92 = 0.201f;
	fLocal_93 = 0.351f;
	iLocal_94 = 0x402818AB;
	iLocal_95 = 0x402C1827;
	iLocal_102 = 0x00000001;
	iLocal_104 = iLocal_103;
	fLocal_106 = 1.2f;
	fLocal_109 = SYSTEM::TO_FLOAT(iLocal_103);
	iLocal_816 = 0x00000001;
	sLocal_817 = unk_0xF59058FCB716F903(0x00000000, 0x000000DA, 0x00000001);
	iLocal_818 = unk_0xB3260A60545D3F11();
	vLocal_819 = { -0.01f, 0.6f, 0.24f };
	vLocal_820 = { -5f, 0f, 0f };
	vLocal_821 = { 0f, -0.25f, 0.55f };
	fLocal_822 = 50f;
	vLocal_823 = { -0.3f, 1f, 0.35f };
	fLocal_826 = 99999f;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_368(ScriptParam_995))
		{
			func_366();
		}
	}
	while (0x00000001)
	{
		func_365();
		if (func_354())
		{
			func_366();
		}
		if (unk_0x09BE1E6DF7B80B43())
		{
			if (func_353())
			{
				if (unk_0xF35A91B88CC1915F() != unk_0x919B85DC2734A661(unk_0xD803B885F5E47A62()))
				{
					func_366();
				}
			}
			else
			{
				func_366();
			}
		}
		else if (unk_0xF35A91B88CC1915F() != 0xFFFFFFFF)
		{
			func_366();
		}
		switch (func_352(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				Local_70[unk_0x57270EE11514DC67() /*44*/] = 0x00000001;
				if (func_351() == 0x00000004)
				{
					Local_70[unk_0x57270EE11514DC67() /*44*/] = 0x00000003;
				}
				break;
			
			case 0x00000001:
				if (func_351() == 0x00000001)
				{
					func_325();
					func_38();
				}
				else if (func_351() == 0x00000004)
				{
					Local_70[unk_0x57270EE11514DC67() /*44*/] = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_36(&(Local_68.f_C1));
				if (func_35(&(Local_68.f_C1)))
				{
					Local_70[unk_0x57270EE11514DC67() /*44*/] = 0x00000004;
				}
				break;
			
			case 0x00000002:
				Local_70[unk_0x57270EE11514DC67() /*44*/] = 0x00000004;
			
			case 0x00000004:
				func_366();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_351())
			{
				case 0x00000000:
					Local_68 = 0x00000001;
					break;
				
				case 0x00000001:
					func_4();
					func_3();
					if (func_1())
					{
						Local_68 = 0x00000004;
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
	return 0x00000000;
}

void func_3()
{
	switch (Local_68.f_BF)
	{
		case 0x00000000:
			Local_68.f_BF = 0x00000001;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			break;
	}
}

void func_4()
{
	if (iLocal_993 < unk_0x54EABC0DD106045B())
	{
		func_27();
		iLocal_993++;
	}
	else
	{
		func_5();
		unk_0x5D96D8530B3D0904(&(Local_68.f_2[iLocal_994 /*23*/].f_6), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Local_68.f_2[iLocal_994 /*23*/].f_6), 0x00000002);
		Local_68.f_BC = 0x00000000;
		iLocal_994++;
		if (iLocal_994 >= 0x00000008)
		{
			iLocal_993 = 0x00000000;
			iLocal_994 = 0x00000000;
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = iLocal_994;
	func_18(iVar0);
	func_6(iVar0);
}

void func_6(int iParam0)
{
	vector3 vVar0;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	if (Local_68.f_2[iParam0 /*23*/].f_7 != 0x0000000B && !unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000004))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000000))
		{
			func_17(iParam0, 0x0000000B);
			func_16(iParam0, 0x00000000);
		}
		else if (func_15(Local_68.f_2[iParam0 /*23*/].f_1) || !func_13(Local_68.f_2[iParam0 /*23*/]))
		{
			func_17(iParam0, 0x0000000B);
			func_16(iParam0, 0x00000000);
		}
		else if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000))
		{
			func_17(iParam0, 0x0000000B);
			func_16(iParam0, 0x00000000);
		}
	}
	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001) };
		switch (Local_68.f_2[iParam0 /*23*/].f_7)
		{
			case 0x00000000:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0x00000000)
				{
					func_17(iParam0, 0x00000004);
				}
				break;
			
			case 0x00000001:
				if (Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF)
				{
					if (func_12(vVar0, Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, 45f))
					{
						if (!func_11(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, 0f, 0f, 0f, 0x00000000))
						{
							func_17(iParam0, 0x00000002);
						}
					}
					else if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)))
					{
						if (func_10(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)), 0x00000001, 0x00000001))
						{
							if (func_12(vVar0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2))), 0x00000001), 5f))
							{
								func_17(iParam0, 0x00000002);
							}
						}
					}
				}
				else
				{
					func_17(iParam0, 0x00000008);
				}
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0x00000000)
				{
					func_17(iParam0, 0x00000004);
				}
				break;
			
			case 0x00000002:
				if (Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 0x00000015))
					{
						if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0xEFC8537E, 0x00000001))
						{
							if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x93A5526E, 0x00000001))
							{
								if (unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
								{
									func_17(iParam0, 0x00000003);
								}
							}
						}
						else if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)))
						{
							if (func_10(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)), 0x00000001, 0x00000001))
							{
								if (func_12(vVar0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2))), 0x00000001), 5f))
								{
									if (unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) || unk_0xBBB54639BF9AAB8A(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
									{
										func_17(iParam0, 0x00000003);
									}
									else if (!func_12(vVar0, Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, 10f))
									{
										func_17(iParam0, 0x00000003);
									}
								}
							}
						}
					}
				}
				else
				{
					func_17(iParam0, 0x00000008);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000002))
				{
					func_17(iParam0, 0x00000008);
				}
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0x00000000)
				{
					func_17(iParam0, 0x00000004);
				}
				break;
			
			case 0x00000003:
				if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000002))
				{
					func_17(iParam0, 0x00000008);
				}
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0x00000000)
				{
					func_17(iParam0, 0x00000004);
				}
				break;
			
			case 0x00000004:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) <= 0x00000000)
				{
					func_17(iParam0, 0x00000008);
				}
				else if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF)
				{
					if (!func_11(Local_68.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0x00000000))
					{
						func_17(iParam0, 0x00000005);
					}
				}
				break;
			
			case 0x00000005:
				if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF)
				{
					if (!func_11(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E, 0f, 0f, 0f, 0x00000000))
					{
						if (func_8(iParam0))
						{
							if (unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) || unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) < 2f)
							{
								func_17(iParam0, 0x00000006);
							}
						}
					}
				}
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) <= 0x00000000)
				{
					func_17(iParam0, 0x00000008);
				}
				break;
			
			case 0x00000006:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) <= 0x00000000)
				{
					func_17(iParam0, 0x00000008);
				}
				else
				{
					func_7(iParam0, 0x00000001);
				}
				break;
			
			case 0x00000007:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) <= 0x00000000)
				{
					func_17(iParam0, 0x00000008);
				}
				break;
			
			case 0x00000008:
				func_16(iParam0, 0x00000000);
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0x00000000)
				{
					unk_0x0674E58A79778E99(&(Local_68.f_2[iParam0 /*23*/].f_6), 0x00000003);
					if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF)
					{
						unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x00000014);
					}
					func_17(iParam0, 0x00000004);
				}
				break;
			
			case 0x00000009:
			case 0x0000000A:
				func_7(iParam0, 0x00000000);
				break;
			
			case 0x0000000B:
				func_16(iParam0, 0x00000000);
				break;
			}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]) && !unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_68.f_BE, iParam0) && !unk_0xEAE0D21A50E6C7F4(Local_68.f_BE, iParam0 + 8)) && Local_68.f_2[iParam0 /*23*/].f_2 == 0xFFFFFFFF)
		{
			if (Local_68.f_BD > 0x00000000)
			{
				Local_68.f_BD = (Local_68.f_BD - 0x00000001);
				unk_0x0674E58A79778E99(&(Local_68.f_BE), iParam0);
				unk_0x5D96D8530B3D0904(&(Local_68.f_BE), iParam0 + 8);
			}
		}
		if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF)
		{
			Local_68.f_2[iParam0 /*23*/].f_3 = 0xFFFFFFFF;
		}
		if (Local_68.f_2[iParam0 /*23*/].f_4 != 0xFFFFFFFF)
		{
			Local_68.f_2[iParam0 /*23*/].f_4 = 0xFFFFFFFF;
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 0x00000000)
			{
				if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0xFFFFFFFF, 0x00000000) == unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					iVar0 = unk_0xD6DF381716822EFE(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]));
					iVar1 = 0x00000000;
					iVar1 = 0x00000000;
					while (iVar1 < iVar0)
					{
						if (iVar1 != 0xFFFFFFFF)
						{
							iVar2 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), iVar1, 0x00000000);
							if (unk_0xC844350D5D58C99A(iVar2))
							{
								if (!unk_0xEB6A8945D1AC98A1(iVar2))
								{
									if (!func_9(iVar2, 0xCE98FBB3, 0x00000001) && !func_9(iVar2, 0x1AE73569, 0x00000001))
									{
										if (bParam1)
										{
											unk_0x75CDA8644CD3B5F5(iVar2, 0x00000000, 0x00000000);
										}
										else
										{
											unk_0x75CDA8644CD3B5F5(iVar2, 0x00000000, 0x00000040);
										}
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
	}
}

int func_8(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF)
	{
		if (unk_0x5A91F08DF773C39D(unk_0xA5FBBC2F619A4DE2(Local_68.f_2[iParam0 /*23*/]), Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E, 45f, 45f, 20f, 0x00000000, 0x00000001, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 0x00000014))
		{
			unk_0x5D96D8530B3D0904(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x00000014);
			if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x0E763797) == 0x00000007)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_9(int iParam0, int iParam1, bool bParam2)
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

int func_10(int iParam0, bool bParam1, bool bParam2)
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

bool func_11(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_12(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(vParam0, vParam1) <= (fParam2 * fParam2);
}

int func_13(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_14(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_14(int iParam0)
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

int func_15(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

void func_16(int iParam0, int iParam1)
{
	if ((Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF || !func_11(Local_68.f_2[iParam0 /*23*/].f_8, 0f, 0f, 0f, 0x00000000)) || iParam1)
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF)
		{
			unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_1), 0x00000000);
			unk_0x0674E58A79778E99(&(Local_68.f_C0), Local_68.f_2[iParam0 /*23*/].f_2);
			Local_68.f_2[iParam0 /*23*/].f_2 = 0xFFFFFFFF;
			Local_68.f_BB = (Local_68.f_BB - 0x00000001);
		}
		Local_68.f_2[iParam0 /*23*/].f_8 = { 0f, 0f, 0f };
		Local_68.f_2[iParam0 /*23*/].f_B = 0f;
		Local_68.f_2[iParam0 /*23*/].f_16 = 0x00000000;
		Local_68.f_2[iParam0 /*23*/].f_13 = 0x00000000;
		unk_0x0674E58A79778E99(&(Local_68.f_2[iParam0 /*23*/].f_6), 0x00000003);
		iLocal_74[iParam0] = 0x00000000;
	}
}

void func_17(int iParam0, int iParam1)
{
	Local_68.f_2[iParam0 /*23*/].f_7 = iParam1;
}

void func_18(int iParam0)
{
	if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF)
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)))
			{
				if (!func_26(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_15))
				{
					if (!unk_0x9868643FAC294133(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_15, 3f, 3f, 3f, 0x00000000))
					{
						if (func_19(iParam0, Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_15, Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_18, 0x00000000))
						{
							func_17(iParam0, 0x00000001);
						}
					}
				}
			}
		}
	}
	if (func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		Local_68.f_BC++;
	}
	if (Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF)
	{
		if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)))
		{
			unk_0x0674E58A79778E99(&(Local_68.f_C0), Local_68.f_2[iParam0 /*23*/].f_2);
			Local_68.f_2[iParam0 /*23*/].f_2 = 0xFFFFFFFF;
			Local_68.f_BB = (Local_68.f_BB - 0x00000001);
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF)
	{
		if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)))
		{
			Local_68.f_2[iParam0 /*23*/].f_3 = 0xFFFFFFFF;
		}
	}
}

int func_19(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (func_25(Global_26B66F.f_31C) && func_25(Global_26B66F.f_31D))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
		{
			if (func_22(&(Local_68.f_2[iParam0 /*23*/]), Global_26B66F.f_31C, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				if (bParam3)
				{
					unk_0xD8F6A53F4799FAFE(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), fParam2);
					unk_0xA47B46945FF6DE74(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68E4ADDDDCD7BDDE(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 2f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				unk_0xB9FD7450C0DAB575(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x40A00000);
				unk_0x4551D324905984CB(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001);
				unk_0x9A8BCD43DBDDCDCA(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000, 0x00000000);
				unk_0xDC2C59BD0989562B(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001);
				unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/], 0x00000001);
			}
		}
		if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (func_21(&(Local_68.f_2[iParam0 /*23*/].f_1), Local_68.f_2[iParam0 /*23*/], 0x00000019, Global_26B66F.f_31D, 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 5f);
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000001);
				unk_0x71199B01895C6202(Global_26B66F.f_31C);
				unk_0x71199B01895C6202(Global_26B66F.f_31D);
				unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000);
				unk_0x579B0182884711E5(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x0000001D, 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x000000FB, 0x00000001);
				unk_0x5507FCD92D15E617(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000000);
				unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000005, 0x00000000);
				unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000011, 0x00000001);
				unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000200, 0x00000000);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
				func_20(&uLocal_828, 0x00000008, unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "FM_TAXI", 0x00000000, 0x00000001);
				unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/].f_1, 0x00000001);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]) || !unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		return 0x00000000;
	}
	unk_0x0674E58A79778E99(&(Local_68.f_2[iParam0 /*23*/].f_6), 0x00000004);
	return 0x00000001;
}

void func_20(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_21(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_22(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
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
			func_23(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_23(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_24(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
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

int func_24(int iParam0, vector3 vParam1, int iParam2)
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

bool func_25(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_26(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = iLocal_993;
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
	{
		iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
		iVar2 = unk_0x9539D44F3E4492F6(iVar1);
		if (!func_10(iVar1, 0x00000001, 0x00000001))
		{
			iVar3 = 0x00000000;
			while (iVar3 < 0x00000008)
			{
				if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					func_16(iVar3, 0x00000000);
				}
				if (Local_68.f_2[iVar3 /*23*/].f_3 == iVar0)
				{
					func_34(iVar3);
					Local_68.f_2[iVar3 /*23*/].f_3 = 0xFFFFFFFF;
					if (func_33(&uLocal_78))
					{
						func_32(&uLocal_78);
					}
				}
				iVar3++;
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_68.f_C0, iVar0) && unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_1, 0x00000000))
			{
				if (func_31())
				{
					func_30(iVar0);
					unk_0x5D96D8530B3D0904(&(Local_68.f_C0), iVar0);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Local_70[iVar0 /*44*/].f_1), 0x00000000);
				}
			}
			iVar3 = 0x00000000;
			while (iVar3 < 0x00000008)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_4.f_2, 0x00000012))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_2 != 0xFFFFFFFF)
					{
						func_16(iVar3, 0x00000000);
					}
					unk_0x0674E58A79778E99(&(Local_70[iVar0 /*44*/].f_4.f_2), 0x00000012);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_4.f_3, iVar3))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_7 != 0x0000000B)
					{
						if (Local_68.f_2[iVar3 /*23*/].f_7 != 0x00000009)
						{
							if (Local_68.f_2[iVar3 /*23*/].f_7 != 0x0000000A)
							{
								Local_68.f_2[iVar3 /*23*/].f_4 = iVar0;
								func_17(iVar3, 0x00000009);
								func_16(iVar3, 0x00000001);
							}
						}
					}
				}
				if (!func_15(Local_68.f_2[iVar3 /*23*/].f_1) && func_13(Local_68.f_2[iVar3 /*23*/]))
				{
					if (Local_68.f_2[iVar3 /*23*/].f_3 == 0xFFFFFFFF)
					{
						if (Local_70[iVar0 /*44*/].f_4.f_1 == iVar3 && Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000008)
						{
							func_17(iVar3, 0x00000003);
							if (Local_68.f_2[iVar3 /*23*/].f_2 == 0xFFFFFFFF)
							{
								Local_68.f_2[iVar3 /*23*/].f_2 = iVar0;
							}
							Local_70[iVar0 /*44*/].f_4.f_1 = 0xFFFFFFFF;
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_3, (0x00000000 + iVar3)))
						{
							if ((Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000008 || Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000001) || Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000002)
							{
								func_17(iVar3, 0x00000003);
							}
						}
						if ((((func_29(iVar1, unk_0xB177666FAB6F4417(Local_68.f_2[iVar3 /*23*/])) && Local_68.f_2[iVar3 /*23*/].f_7 != 0x00000006) && Local_68.f_2[iVar3 /*23*/].f_7 != 0x00000009) && Local_68.f_2[iVar3 /*23*/].f_7 != 0x0000000A) && Local_68.f_2[iVar3 /*23*/].f_7 != 0x0000000B)
						{
							unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000000);
							unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000002);
							if (Local_68.f_2[iVar3 /*23*/].f_2 != 0xFFFFFFFF)
							{
								unk_0x0674E58A79778E99(&(Local_68.f_C0), Local_68.f_2[iVar3 /*23*/].f_2);
								Local_68.f_2[iVar3 /*23*/].f_2 = 0xFFFFFFFF;
								Local_68.f_BB = (Local_68.f_BB - 0x00000001);
							}
							Local_68.f_2[iVar3 /*23*/].f_3 = iVar0;
						}
						else if (unk_0x12DE711B1C681E9E(iVar2, unk_0xB177666FAB6F4417(Local_68.f_2[iVar3 /*23*/]), 120f, 120f, 120f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (Local_68.f_2[iVar3 /*23*/].f_2 == 0xFFFFFFFF)
							{
								unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000002);
							}
							else if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000002);
							}
							unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000000);
						}
						else if (unk_0x12DE711B1C681E9E(iVar2, unk_0xB177666FAB6F4417(Local_68.f_2[iVar3 /*23*/]), 300f, 300f, 300f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000000);
						}
						if (unk_0x179932739160BA96(iVar1) > 0x00000000)
						{
							if (Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
							{
								unk_0x5D96D8530B3D0904(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000002);
							}
						}
					}
					else if (Local_68.f_2[iVar3 /*23*/].f_3 == iVar0)
					{
						if (!func_29(iVar1, unk_0xB177666FAB6F4417(Local_68.f_2[iVar3 /*23*/])))
						{
							func_16(iVar3, 0x00000001);
							Local_68.f_2[iVar3 /*23*/].f_3 = 0xFFFFFFFF;
						}
						else
						{
							if (Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000005 || Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000007)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iVar3 /*23*/].f_6, 0x00000003) && unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_4.f_2, 0x00000003))
								{
									unk_0x5D96D8530B3D0904(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000003);
									unk_0x0674E58A79778E99(&(Local_70[iVar0 /*44*/].f_4.f_2), 0x00000004);
									unk_0x0674E58A79778E99(&(Local_70[iVar0 /*44*/].f_4.f_2), 0x00000005);
									func_17(iVar3, 0x00000005);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_4.f_2, 0x00000004))
								{
									unk_0x0674E58A79778E99(&(Local_70[iVar0 /*44*/].f_4.f_2), 0x00000004);
									func_17(iVar3, 0x00000007);
								}
								else if (Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000007)
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_4.f_2, 0x00000005))
									{
										unk_0x0674E58A79778E99(&(Local_70[iVar0 /*44*/].f_4.f_2), 0x00000005);
										func_17(iVar3, 0x00000005);
									}
								}
							}
							if ((Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000005 || Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000007) || Local_68.f_2[iVar3 /*23*/].f_7 == 0x00000004)
							{
								if (Local_68.f_2[iVar3 /*23*/].f_13 != Local_70[iVar0 /*44*/].f_4.f_F)
								{
									Local_68.f_2[iVar3 /*23*/].f_8 = { Local_70[iVar0 /*44*/].f_4.f_5 };
									Local_68.f_2[iVar3 /*23*/].f_B = Local_70[iVar0 /*44*/].f_4.f_E;
									Local_68.f_2[iVar3 /*23*/].f_13 = Local_70[iVar0 /*44*/].f_4.f_F;
									func_17(iVar3, 0x00000005);
									unk_0x0674E58A79778E99(&(Local_70[iVar0 /*44*/].f_4.f_2), 0x00000014);
								}
							}
						}
						unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000000);
						unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000002);
					}
					if (Local_70[iVar0 /*44*/].f_4.f_13 == iVar3 && Local_68.f_2[iVar3 /*23*/].f_16 == 0x00000000)
					{
						if (Local_70[iVar0 /*44*/].f_4.f_12 != 0x00000000)
						{
							Local_68.f_2[iVar3 /*23*/].f_16 = Local_70[iVar0 /*44*/].f_4.f_12;
							Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_13 = 0xFFFFFFFF;
							Local_70[iVar0 /*44*/].f_4.f_12 = 0x00000000;
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_4.f_2, 0x00000006))
					{
						Local_68.f_2[iVar3 /*23*/].f_16 = 0x00000000;
						Local_70[iVar0 /*44*/].f_4.f_13 = 0xFFFFFFFF;
						unk_0x0674E58A79778E99(&(Local_70[iVar0 /*44*/].f_4.f_2), 0x00000006);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_70[iVar0 /*44*/].f_1, 0x00000000) || Local_68.f_2[iVar3 /*23*/].f_2 == iVar0)
				{
					unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000000);
					unk_0x0674E58A79778E99(&(Local_68.f_2[iVar3 /*23*/].f_6), 0x00000002);
				}
				else
				{
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar3 /*23*/].f_1))
					{
						func_28(&(Local_68.f_2[iVar3 /*23*/].f_1));
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar3 /*23*/]))
					{
						func_28(&(Local_68.f_2[iVar3 /*23*/]));
					}
					if (Local_68.f_2[iVar3 /*23*/].f_2 == 0xFFFFFFFF)
					{
						func_16(iVar3, 0x00000000);
					}
					if (Local_68.f_2[iVar3 /*23*/].f_3 != 0xFFFFFFFF)
					{
						func_16(iVar3, 0x00000001);
						Local_68.f_2[iVar3 /*23*/].f_3 = 0xFFFFFFFF;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_28(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xD6DF381716822EFE(iParam1) + 1;
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBBA8A868118C90ED(iParam1, (iVar0 - 0x00000001), 0x00000000))
			{
				iVar2 = unk_0xA30B8362589C124A(iParam1, (iVar0 - 0x00000001), 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						if (unk_0x9539D44F3E4492F6(iParam0) == iVar2)
						{
							return 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Local_68.f_2[iVar0 /*23*/].f_2 == 0xFFFFFFFF && !unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
		{
			Local_68.f_2[iVar0 /*23*/].f_2 = iParam0;
			Local_68.f_BB++;
			Local_68.f_BD++;
			unk_0x5D96D8530B3D0904(&(Local_68.f_BE), iVar0);
			unk_0x0674E58A79778E99(&(Local_68.f_BE), iVar0 + 8);
			unk_0x0674E58A79778E99(&(Local_70[iParam0 /*44*/].f_1), 0x00000000);
			unk_0x5D96D8530B3D0904(&(Local_68.f_2[iVar0 /*23*/].f_6), 0x00000004);
			return;
		}
		iVar0++;
	}
}

int func_31()
{
	if (Local_68.f_BB >= 0x00000008 || Local_68.f_BC >= 0x00000008)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_32(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

void func_34(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_4 = vLocal_96[iLocal_82 /*3*/];
	if (unk_0xE4EDC4B0E92C078B(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_4))
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		vLocal_96[iVar0 /*3*/] = { vVar1 };
		iVar0++;
	}
	iLocal_81 = 0x00000000;
}

int func_35(var uParam0)
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

void func_36(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_37(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_37(var uParam0, bool bParam1, bool bParam2)
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

void func_38()
{
	int iVar0;
	
	unk_0x0674E58A79778E99(&(Global_26B66F.f_31B), 0x00000001);
	func_324();
	func_323();
	func_302(iLocal_827);
	func_220();
	func_195(iLocal_827);
	func_194(iLocal_827);
	func_192(iLocal_827);
	if (iLocal_824 != iLocal_827)
	{
		func_195(iLocal_824);
		func_194(iLocal_824);
		func_192(iLocal_824);
	}
	iLocal_827++;
	if (iLocal_827 == 0x00000008)
	{
		fLocal_826 = 99999f;
		iLocal_824 = iLocal_825;
		iLocal_827 = 0x00000000;
	}
	func_45(iLocal_824);
	if (func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == unk_0x57270EE11514DC67())
				{
					func_39(0x00000001, 0x00000001, 0x00000001);
				}
				iVar0++;
			}
			func_39(0x00000000, 0x00000000, 0x00000000);
		}
	}
	else
	{
		if (unk_0x81A93C8315C28F58(unk_0xFB04705FDFDCE640()))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == unk_0x57270EE11514DC67())
				{
					func_39(0x00000001, 0x00000001, 0x00000001);
				}
				iVar0++;
			}
		}
		func_39(0x00000001, 0x00000001, 0x00000000);
	}
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	
	if (((((((Local_70[unk_0x57270EE11514DC67() /*44*/].f_4 != 0xFFFFFFFF || !func_11(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_5, 0f, 0f, 0f, 0x00000000)) || iLocal_104 != iLocal_103) || Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_12 != 0x00000000) || Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_13 != 0xFFFFFFFF) || unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x0000000A)) || unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000011)) || iParam2)
	{
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000002);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000003);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000004);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000005);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000007);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000A);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000B);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000C);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000D);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000E);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000014);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000015);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000016);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000017);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000018);
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000019);
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_5 = { 0f, 0f, 0f };
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_E = 0f;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_F = 0x00000000;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4 = 0xFFFFFFFF;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1 = 0xFFFFFFFF;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_22 = 0xFFFFFFFF;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1A = { 0f, 0f, 0f };
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1D = 0f;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1E = { 0f, 0f, 0f };
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_21 = 0f;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_23 = 0xFFFFFFFF;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_24 = { 0f, 0f, 0f };
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000032)
		{
			vLocal_96[iVar0 /*3*/] = { vVar1 };
			iVar0++;
		}
		iLocal_82 = 0x00000000;
		iLocal_84 = 0x00000000;
		iLocal_85 = 0x00000000;
		bLocal_99 = 0x00000000;
		Global_1B063 = 0x00000000;
		fLocal_109 = SYSTEM::TO_FLOAT(iLocal_103);
		iLocal_104 = iLocal_103;
		iLocal_105 = iLocal_103;
		func_32(&uLocal_107);
		fLocal_106 = fLocal_106;
		vLocal_110 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_12 = 0x00000000;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_13 = 0xFFFFFFFF;
		func_42(0x00000001, 0xFFFFFFFF);
		unk_0xF3039DE1FDB4F6FD(0x00000001);
		unk_0x8D17794CE3273D70("ODDJOBS@TAXI@DRIVER");
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_4 = 0x00000000;
		func_32(&uLocal_76);
	}
	if (iParam0 == 0x00000001)
	{
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_15 = { 0f, 0f, 0f };
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_18 = 0f;
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1A = { 0f, 0f, 0f };
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1D = 0f;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_31B), 0x00000002);
	}
	if (unk_0xE6CD5C6925050049("taxi"))
	{
		unk_0x683413D9B7010687("taxi");
	}
	if (unk_0xC844350D5D58C99A(iLocal_86))
	{
		unk_0xF690C84DADBB3551(&iLocal_86);
		unk_0x71199B01895C6202(iLocal_87);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_815))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_815, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(iLocal_815, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		func_40();
	}
	if (iLocal_814 == 0x00000000)
	{
		iLocal_814 = 0x00000001;
	}
	if (iParam1 == 0x00000001 && Local_70[unk_0x57270EE11514DC67() /*44*/].f_1 != 0x00000000)
	{
		Local_70[unk_0x57270EE11514DC67() /*44*/].f_1 = 0x00000000;
	}
}

void func_40()
{
	func_41(0x00000004, 0x00000000, 0xFFFFFFFF);
	unk_0xFB452C6B9BE826C7();
	unk_0xF737A3AD8873CE16();
	unk_0xF91D0B1DCE756AFB(0x00000000);
	unk_0x0D4F19AA64A65336(iLocal_816);
	unk_0x4DC7B72197441408(0x00000000);
}

void func_41(int iParam0, bool bParam1, int iParam2)
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

void func_42(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_44(&iVar0, 0x00000000, iParam1))
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
		func_43(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_43(int iParam0)
{
	if (iParam0->f_9 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0x00000000;
		iParam0->f_9 = 0x00000000;
	}
}

int func_44(var uParam0, bool bParam1, int iParam2)
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

void func_45(int iParam0)
{
	if (func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000))
			{
				func_184(iParam0);
				func_177(iParam0);
				func_51(iParam0);
			}
			else
			{
				func_46(iParam0);
			}
		}
		else
		{
			func_46(iParam0);
		}
	}
	else
	{
		func_46(iParam0);
	}
}

void func_46(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_71, (0x00000000 + iParam0)))
	{
		unk_0x0674E58A79778E99(&iLocal_71, (0x00000000 + iParam0));
		if (func_33(&uLocal_78))
		{
			func_32(&uLocal_78);
		}
		if (func_50("TXM_H02"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_3, (0x00000000 + iParam0)))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			iLocal_100 = 0x00000000;
		}
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_3), (0x00000000 + iParam0));
	}
	func_48(&(uLocal_73[iParam0]));
	if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4 == iParam0)
	{
		func_39(0x00000001, 0x00000001, 0x00000000);
	}
	func_47(iParam0);
}

void func_47(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_72[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(iLocal_72[iParam0]));
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000C);
	}
}

void func_48(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_49(*uParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*uParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*uParam0 = 0xFFFFFFFF;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_50(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_51(int iParam0)
{
	if (((unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000) && !unk_0xE64AC821059A938D(unk_0x16F2683693E537C9())) && !unk_0x36646919F20EAFFC(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1))) && !unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3, iParam0))
	{
		unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
		if (func_176(iParam0) && unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
		{
			if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000006)
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_815))
				{
					unk_0xE3BB8E05FCEB3FBE(iLocal_815, 0x00000000);
					unk_0x9A8DDC7C522F5BF5(iLocal_815, 0x00000000);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					func_40();
				}
				if (unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
				{
					func_154(iParam0);
				}
			}
			else
			{
				if ((unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000 || Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000009) || Local_68.f_2[iParam0 /*23*/].f_7 == 0x0000000A)
				{
					func_7(iParam0, 0x00000000);
				}
				func_88(iParam0);
			}
			if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4 != iParam0)
			{
				Local_70[unk_0x57270EE11514DC67() /*44*/].f_4 = iParam0;
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_31B), 0x00000002);
			}
			func_82(iParam0);
			func_81(iParam0);
		}
		func_57(iParam0);
		unk_0xA2E3EDD0E119882F(0x00000000);
		unk_0xA2E3EDD0E119882F(0x00000001);
		unk_0xA2E3EDD0E119882F(0x00000002);
		func_56();
		func_55();
		unk_0xAFF39FB306F8E232(unk_0x16F2683693E537C9(), 0x00000002, 0x00000000);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x000000C8, 0x00000001);
		func_54();
		if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000178, 0x00000001);
		}
		if (func_53() || func_52(0x00000000))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
		}
	}
	else if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4 == iParam0)
	{
		if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				if ((Local_68.f_2[iParam0 /*23*/].f_7 != 0x00000009 && Local_68.f_2[iParam0 /*23*/].f_7 != 0x0000000A) && !unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3, iParam0))
				{
					func_154(iParam0);
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iParam0);
			}
		}
		func_39(0x00000001, 0x00000001, 0x00000000);
		func_34(iParam0);
		if (func_33(&uLocal_78))
		{
			func_32(&uLocal_78);
		}
	}
}

int func_52(int iParam0)
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

bool func_53()
{
	return Global_12061;
}

void func_54()
{
	Global_26E1B2.f_102 = 0x00000001;
}

void func_55()
{
	Global_26B66F.f_11B4 = 0x00000000;
}

void func_56()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

void func_57(int iParam0)
{
	char* sVar0;
	
	if (func_71())
	{
		if (unk_0x83D8570832F172A7(iLocal_111))
		{
			if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
			{
				sVar0 = unk_0xF59058FCB716F903(0x00000002, 0x000000DA, 0x00000001);
				if (!unk_0x7F8A39872A07D2CE(sLocal_817, sVar0))
				{
					sLocal_817 = sVar0;
					iLocal_813 = 0x00000001;
				}
			}
			if (iLocal_813 == 0x00000001)
			{
				Local_812 = { func_70() };
				func_68(&uLocal_112);
				func_67(0x00000000, 0x0000004B, "TXM_EXIT", &uLocal_112, 0x00000000, 0x00000169);
				if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
				{
					if (Local_68.f_2[iParam0 /*23*/].f_7 != 0x00000006)
					{
						if (Global_1B063 == 0x00000001 || bLocal_99 == 0x00000001)
						{
							if (iLocal_81 > 0x00000001)
							{
								func_67(0x00000002, 0x000000DA, "TXM_CDES", &uLocal_112, 0x00000000, 0x00000169);
							}
						}
						if (!bLocal_99)
						{
							if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_F != vLocal_96[iLocal_82 /*3*/])
							{
								func_67(0x00000000, 0x000000B0, "TXM_SLCT", &uLocal_112, 0x00000000, 0x00000169);
							}
						}
						else if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000005)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000004))
							{
								func_67(0x00000000, 0x000000B1, "TXM_STOP", &uLocal_112, 0x00000000, 0x00000169);
							}
							if (bLocal_97)
							{
								func_67(0x00000000, 0x000000B0, "TXM_SLCT", &uLocal_112, 0x00000000, 0x00000169);
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000003) && !unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000003))
							{
								if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000005)
								{
									func_67(0x00000000, 0x000000B3, "TXM_HURY", &uLocal_112, 0x00000000, 0x00000169);
								}
							}
						}
						else if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000007)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000005))
							{
								func_67(0x00000000, 0x000000B1, "TXM_STRT", &uLocal_112, 0x00000000, 0x00000169);
							}
							if (bLocal_97)
							{
								func_67(0x00000000, 0x000000B0, "TXM_SLCT", &uLocal_112, 0x00000000, 0x00000169);
							}
						}
						if (unk_0x91E3F625EF57450D(0x00000002))
						{
							func_67(0x00000002, 0x000000C7, "SPEC_PAUSE", &uLocal_112, 0x00000000, 0x00000169);
						}
					}
				}
				iLocal_813 = 0x00000000;
			}
			unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
			unk_0x5DD950F92F816F03(0x00000000);
			func_66(0x00000001);
			func_65(0x00000001);
			func_58(&iLocal_111, &Local_812, &uLocal_112, func_64(&uLocal_112));
		}
		else
		{
			iLocal_111 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
	}
	else
	{
		unk_0xE17FDF9E3068281B(&iLocal_111);
		iLocal_813 = 0x00000001;
	}
}

void func_58(int iParam0, var uParam1, var uParam2, int iParam3)
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
		func_63(uParam2);
	}
	if (Global_141384 < 0x00000002)
	{
		func_65(0x00000001);
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
						func_62(unk_0xF59058FCB716F903(iVar1, iVar2, 0x00000001));
						if (iVar3 < 0x00000169)
						{
							func_62(unk_0xF59058FCB716F903(iVar1, iVar3, 0x00000001));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_37;
						func_62(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, 0x00000001));
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
						func_61(&(uParam2->f_1[iVar0 /*57*/].f_20));
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
					func_62(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_10)))
					{
						func_62(&(uParam2->f_1[iVar0 /*57*/].f_10));
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
						func_61(&(uParam2->f_1[iVar0 /*57*/].f_20));
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
		func_60(*iParam0, uParam1);
	}
	func_59();
}

void func_59()
{
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
}

void func_60(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0x00000000);
}

void func_61(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_62(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_63(var uParam0)
{
	uParam0->f_2B4 = 0x00000000;
}

int func_64(var uParam0)
{
	return uParam0->f_2B4;
}

void func_65(int iParam0)
{
	Global_141384 = iParam0;
}

void func_66(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_67(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
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

void func_68(var uParam0)
{
	func_69(uParam0);
	uParam0->f_2B4 = 0x00000001;
}

void func_69(var uParam0)
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

struct<9> func_70()
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

int func_71()
{
	if (!func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		return 0x00000000;
	}
	if (!func_76(0x00000001, 0x00000001))
	{
		return 0x00000000;
	}
	if (func_75())
	{
		return 0x00000000;
	}
	if (func_53())
	{
		return 0x00000000;
	}
	if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		return 0x00000000;
	}
	if (func_74(0x00000000))
	{
		return 0x00000000;
	}
	if (!func_72())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_72()
{
	if (func_73() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_73()
{
	return Global_1406D3.f_12;
}

bool func_74(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

bool func_75()
{
	return Global_181EC.f_15A > 0x00000000;
}

int func_76(int iParam0, int iParam1)
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (func_80())
		{
			return 0x00000000;
		}
	}
	if (func_79())
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000001)
	{
		if (func_52(0x00000000))
		{
			return 0x00000000;
		}
	}
	if (func_78(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return 0x00000000;
	}
	if (func_77())
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

bool func_77()
{
	return Global_14086D;
}

bool func_78(int iParam0, int iParam1)
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

bool func_79()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

bool func_80()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_81(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x0000000B))
	{
		if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_12 == 0x00000000)
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_12 = 0x0000001A;
				Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_13 = iParam0;
				unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000B);
			}
		}
	}
}

void func_82(int iParam0)
{
	if (bLocal_99)
	{
		if (func_87(&uLocal_107, 0x00002710, 0x00000000))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000003))
			{
				fLocal_109 = (fLocal_109 + (fLocal_106 * 1.5f));
			}
			else
			{
				fLocal_109 = (fLocal_109 + fLocal_106);
			}
			func_32(&uLocal_107);
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vLocal_110, 0x00000000) > 50f)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000003))
			{
				fLocal_109 = (fLocal_109 + (fLocal_106 * 1.5f));
			}
			else
			{
				fLocal_109 = (fLocal_109 + fLocal_106);
			}
			func_32(&uLocal_107);
			vLocal_110 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
		}
		iLocal_104 = SYSTEM::CEIL(fLocal_109);
		if (iLocal_104 > 0x00001388)
		{
			iLocal_104 = 0x00001388;
		}
		if (iLocal_104 != iLocal_105)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_88, "SET_TAXI_PRICE");
			unk_0x3CAEA85DA607305E(iLocal_104);
			unk_0x7E60D21B163E9D56();
			iLocal_105 = iLocal_104;
			func_85("\ntaxiService currentJourneyPrice = ");
			func_83(iLocal_104);
			func_85("\n");
		}
	}
}

void func_83(int iParam0)
{
	func_84(iParam0);
}

void func_84(int iParam0)
{
	if (iParam0 > 0x00000000)
	{
	}
}

void func_85(char* sParam0)
{
	func_86(sParam0);
}

void func_86(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

int func_87(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_37(uParam0, bParam2, 0x00000000);
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

void func_88(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
	{
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]) && unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/]) && unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
			{
				unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/], 0x00000000);
				unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/].f_1, 0x00000000);
				if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x0000000A))
				{
					func_146(iParam0);
					func_113(iParam0);
				}
				if (func_112(iParam0))
				{
					func_89(iParam0);
					iLocal_813 = 0x00000001;
				}
			}
			else
			{
				if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/]))
				{
					unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/], 0x00000000);
				}
				else if (unk_0x8D30F6387EE75385(Local_68.f_2[iParam0 /*23*/]))
				{
				}
				if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					unk_0x866EE3B81CEF363A(Local_68.f_2[iParam0 /*23*/].f_1, 0x00000000);
				}
			}
		}
	}
	else
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
		if (unk_0x9F4FE516EAACCFC5(iLocal_815))
		{
			unk_0xE3BB8E05FCEB3FBE(iLocal_815, 0x00000000);
			unk_0x9A8DDC7C522F5BF5(iLocal_815, 0x00000000);
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			func_40();
		}
	}
}

void func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!iLocal_85)
	{
		iVar0 = func_111();
		iLocal_84 = iVar0;
		iLocal_74[iParam0] = 0x00000000;
		iLocal_85 = 0x00000001;
	}
	if (func_97(iParam0))
	{
		iVar1 = 0x00000000;
		unk_0x7E60C62A7CE58FC8(iLocal_88, "CLEAR_TAXI_DISPLAY");
		unk_0x7E60D21B163E9D56();
		iVar1 = 0x00000000;
		while (iVar1 < iLocal_81)
		{
			if (!unk_0xE4EDC4B0E92C078B(vLocal_96[iVar1 /*3*/]))
			{
				iLocal_814 = 0x00000001;
				iLocal_74[iParam0] = 0x00000000;
				return;
			}
			if (func_96(vLocal_96[iVar1 /*3*/]) == 0xFFFFFFFF)
			{
				iLocal_814 = 0x00000001;
				iLocal_74[iParam0] = 0x00000000;
				return;
			}
			if (func_95(unk_0xAC14F6E4B17D7835(vLocal_96[iVar1 /*3*/]), 0f, 0f, 0f, 0x3F000000, 0x00000000))
			{
				iLocal_814 = 0x00000001;
				iLocal_74[iParam0] = 0x00000000;
				return;
			}
			unk_0x7E60C62A7CE58FC8(iLocal_88, "ADD_TAXI_DESTINATION");
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(unk_0x301901B13DC3365B(vLocal_96[iVar1 /*3*/]));
			if ((func_96(vLocal_96[iVar1 /*3*/]) == 0x000001EC || func_96(vLocal_96[iVar1 /*3*/]) == 0x000001DB) && unk_0x76137156E5D43335(vLocal_96[iVar1 /*3*/]) == 0x00000000)
			{
				func_94(unk_0x8FBD6436A27198B4(vLocal_96[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0x3CAEA85DA607305E(iVar2);
				unk_0x3CAEA85DA607305E(iVar3);
				unk_0x3CAEA85DA607305E(iVar4);
			}
			else
			{
				unk_0xA402F6C87C08815C(unk_0x76137156E5D43335(vLocal_96[iVar1 /*3*/]), &iVar2, &iVar3, &iVar4, &uVar5);
				unk_0x3CAEA85DA607305E(iVar2);
				unk_0x3CAEA85DA607305E(iVar3);
				unk_0x3CAEA85DA607305E(iVar4);
			}
			iVar7 = func_92(vLocal_96[iVar1 /*3*/]);
			if (iVar7 == 0xFFFFFFFF)
			{
				unk_0x7ACC3006A87F8B39("STRING");
				unk_0xC5561E751FF4B1E4(vLocal_96[iVar1 /*3*/]);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("STRING");
				unk_0x6B012227B3921E18(func_90(iVar7));
				unk_0x779B34565F4D71B1();
			}
			if (unk_0xDC7D2B8A563DB482(vLocal_96[iVar1 /*3*/]) == 0x00000002)
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(unk_0x63EC65B0F6B7C26F(vLocal_96[iVar1 /*3*/]))))
				{
					vVar6 = { unk_0x68F4C0EC296D3901(unk_0x940C1429253D3B1B(unk_0x63EC65B0F6B7C26F(vLocal_96[iVar1 /*3*/])), 0x00000001) };
				}
			}
			else if (unk_0xDC7D2B8A563DB482(vLocal_96[iVar1 /*3*/]) == 0x00000001)
			{
				if (unk_0xDF1306B443CD3D15(unk_0x63EC65B0F6B7C26F(vLocal_96[iVar1 /*3*/]), 0x00000000))
				{
					vVar6 = { unk_0x68F4C0EC296D3901(unk_0x63EC65B0F6B7C26F(vLocal_96[iVar1 /*3*/]), 0x00000001) };
				}
			}
			else
			{
				vVar6 = { unk_0xAC14F6E4B17D7835(vLocal_96[iVar1 /*3*/]) };
			}
			func_61(unk_0xA5A6BB5EBAD59A21(vVar6));
			if (((((((func_96(vLocal_96[iVar1 /*3*/]) == 0x00000028 || func_96(vLocal_96[iVar1 /*3*/]) == 0x00000165) || func_96(vLocal_96[iVar1 /*3*/]) == 0x000001DB) || func_96(vLocal_96[iVar1 /*3*/]) == 0x000001EC) || func_96(vLocal_96[iVar1 /*3*/]) == 0x0000022D) || func_96(vLocal_96[iVar1 /*3*/]) == 0x0000024E) || func_96(vLocal_96[iVar1 /*3*/]) == 0x0000024F) || func_96(vLocal_96[iVar1 /*3*/]) == 0x00000266)
			{
				iVar8 = 0x00000000;
				while (iVar8 < 0x0000007E)
				{
					iVar9 = iVar8;
					if (func_11(vVar6, Global_100542[iVar9 /*1951*/].f_3[0x00000000 /*3*/], 0x00000000))
					{
						iVar8 = 0x0000007E;
						unk_0x7ACC3006A87F8B39("STRTNM1");
						unk_0x6B012227B3921E18(&(Global_100542[iVar9 /*1951*/].f_10));
						unk_0x779B34565F4D71B1();
						func_61("");
					}
					iVar8++;
				}
			}
			else if (vLocal_96[iVar1 /*3*/].f_2 == 0x00000000)
			{
				if (vLocal_96[iVar1 /*3*/].f_1 != 0x00000000)
				{
					unk_0x7ACC3006A87F8B39("STRTNM1");
					unk_0xAE3C6C08E5688EDF(vLocal_96[iVar1 /*3*/].f_1);
					unk_0x779B34565F4D71B1();
					func_61("");
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("STRTNM2");
				unk_0xAE3C6C08E5688EDF(vLocal_96[iVar1 /*3*/].f_1);
				unk_0xAE3C6C08E5688EDF(vLocal_96[iVar1 /*3*/].f_2);
				unk_0x779B34565F4D71B1();
			}
			if (((iLocal_818 == 0x00000008 || iLocal_818 == 0x00000009) || iLocal_818 == 0x0000000A) || iLocal_818 == 0x0000000C)
			{
				unk_0x1200CC973A2399C8(0x00000001);
			}
			else
			{
				unk_0x1200CC973A2399C8(0x00000000);
			}
			unk_0x7E60D21B163E9D56();
			if (bLocal_99)
			{
				if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_F == vLocal_96[iVar1 /*3*/])
				{
					iLocal_82 = iVar1;
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_4))
			{
				if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_4 == vLocal_96[iVar1 /*3*/])
				{
					iLocal_82 = iVar1;
				}
			}
			iVar1++;
		}
		if (bLocal_99)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_88, "SHOW_TAXI_DESTINATION");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_88, "HIGHLIGHT_DESTINATION");
			unk_0x3CAEA85DA607305E(iLocal_82);
			unk_0x7E60D21B163E9D56();
		}
		else
		{
			unk_0x7E60C62A7CE58FC8(iLocal_88, "SET_TAXI_PRICE");
			unk_0x3CAEA85DA607305E(iLocal_104);
			if (((iLocal_818 == 0x00000008 || iLocal_818 == 0x00000009) || iLocal_818 == 0x0000000A) || iLocal_818 == 0x0000000C)
			{
				unk_0x1200CC973A2399C8(0x00000001);
			}
			else
			{
				unk_0x1200CC973A2399C8(0x00000000);
			}
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_88, "SHOW_TAXI_DESTINATION");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_88, "HIGHLIGHT_DESTINATION");
			unk_0x3CAEA85DA607305E(iLocal_82);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xE4EDC4B0E92C078B(vLocal_96[iLocal_82 /*3*/]))
		{
			vVar10 = { unk_0xAC14F6E4B17D7835(vLocal_96[iLocal_82 /*3*/]) };
			if ((!func_26(vVar10) && unk_0x9F4FE516EAACCFC5(iLocal_815)) && unk_0xFBB4F23D534EB790(iLocal_815))
			{
				unk_0xDB111A9E05F41582(vVar10.x, vVar10.y);
			}
		}
		iLocal_814 = 0x00000000;
		unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000A);
	}
}

char* func_90(int iParam0)
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
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000008:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000009:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000000A:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000000B:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000000C:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000000D:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000000E:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000000F:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000010:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000011:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000012:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000013:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000014:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000015:
			return func_91(iParam0, 0x00000000);
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
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000028:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x00000029:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000002A:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000002B:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000002C:
			return func_91(iParam0, 0x00000000);
			break;
		
		case 0x0000002D:
			return func_91(iParam0, 0x00000000);
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

char* func_91(int iParam0, int iParam1)
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

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		iVar1 = iVar0;
		iVar2 = func_93(iVar1);
		if (Global_79AA[iVar2 /*23*/].f_13 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_93(int iParam0)
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

void func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0xDC4DD3980107166C(iParam0, 0x00000018, 0x0000001F);
	*uParam2 = unk_0xDC4DD3980107166C(iParam0, 0x00000010, 0x00000017);
	*uParam3 = unk_0xDC4DD3980107166C(iParam0, 0x00000008, 0x0000000F);
	*uParam4 = unk_0xDC4DD3980107166C(iParam0, 0x00000000, 0x00000007);
}

int func_95(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_96(int iParam0)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		iVar0 = unk_0x301901B13DC3365B(iParam0);
	}
	return iVar0;
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	switch (iLocal_74[iParam0])
	{
		case 0x00000000:
			func_34(iParam0);
			break;
		
		case 0x00000001:
			func_98(iParam0, iLocal_66, 0x00000000);
			func_98(iParam0, 0x0000004D, 0x00000000);
			func_98(iParam0, 0x0000004F, 0x00000000);
			func_98(iParam0, 0x00000125, 0x00000000);
			func_98(iParam0, iLocal_67, 0x00000000);
			func_98(iParam0, 0x000000E1, 0x00000000);
			func_98(iParam0, 0x0000015C, 0x00000000);
			break;
		
		case 0x00000002:
			func_98(iParam0, 0x0000006E, 0x00000001);
			break;
		
		case 0x00000003:
			func_98(iParam0, 0x00000077, 0x00000001);
			func_98(iParam0, 0x00000067, 0x00000001);
			break;
		
		case 0x00000004:
			func_98(iParam0, 0x0000007A, 0x00000001);
			func_98(iParam0, 0x0000006D, 0x00000001);
			break;
		
		case 0x00000005:
			func_98(iParam0, 0x00000137, 0x00000001);
			func_98(iParam0, 0x0000005A, 0x00000001);
			break;
		
		case 0x00000006:
			func_98(iParam0, 0x00000130, 0x00000001);
			break;
		
		case 0x00000007:
			func_98(iParam0, 0x00000136, 0x00000001);
			break;
		
		case 0x00000008:
			func_98(iParam0, 0x00000135, 0x00000001);
			break;
		
		case 0x00000009:
			func_98(iParam0, 0x000000B0, 0x00000001);
			break;
		
		case 0x0000000A:
			func_98(iParam0, 0x00000131, 0x00000001);
			break;
		
		case 0x0000000B:
			func_98(iParam0, 0x00000054, 0x00000001);
			break;
		
		case 0x0000000C:
			func_98(iParam0, 0x0000005E, 0x00000001);
			break;
		
		case 0x0000000D:
			func_98(iParam0, 0x00000034, 0x00000001);
			break;
		
		case 0x0000000E:
			func_98(iParam0, 0x00000087, 0x00000001);
			break;
		
		case 0x0000000F:
			func_98(iParam0, 0x00000028, 0x00000000);
			func_98(iParam0, 0x00000165, 0x00000000);
			func_98(iParam0, 0x000001DB, 0x00000000);
			func_98(iParam0, 0x000001EC, 0x00000000);
			func_98(iParam0, 0x000001D9, 0x00000000);
			func_98(iParam0, 0x000001F0, 0x00000000);
			func_98(iParam0, 0x000001F1, 0x00000000);
			func_98(iParam0, 0x000001F2, 0x00000000);
			func_98(iParam0, 0x000001F3, 0x00000000);
			func_98(iParam0, 0x0000022D, 0x00000000);
			func_98(iParam0, 0x0000024E, 0x00000000);
			func_98(iParam0, 0x0000024F, 0x00000000);
			func_98(iParam0, 0x000001F4, 0x00000000);
			func_98(iParam0, 0x00000266, 0x00000000);
			break;
		
		case 0x00000010:
			func_98(iParam0, 0x00000079, 0x00000001);
			break;
		
		case 0x00000011:
			func_98(iParam0, 0x00000047, 0x00000001);
			break;
		
		case 0x00000012:
			func_98(iParam0, 0x00000048, 0x00000001);
			break;
		
		case 0x00000013:
			func_98(iParam0, 0x000001BE, 0x00000001);
			break;
		
		case 0x00000014:
			func_98(iParam0, 0x00000049, 0x00000001);
			break;
		
		case 0x00000015:
			func_98(iParam0, 0x0000004B, 0x00000001);
			break;
		
		case 0x00000016:
			iLocal_84 = func_111();
			if (unk_0xE4EDC4B0E92C078B(vLocal_96[iLocal_82 /*3*/]))
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000032)
				{
					if (unk_0xE4EDC4B0E92C078B(vLocal_96[iVar0 /*3*/]))
					{
						if (vLocal_96[iLocal_82 /*3*/] == vLocal_96[iVar0 /*3*/])
						{
							if (func_11(unk_0xAC14F6E4B17D7835(vLocal_96[iLocal_82 /*3*/]), unk_0xAC14F6E4B17D7835(vLocal_96[iVar0 /*3*/]), 0x00000000))
							{
								vVar2 = { unk_0xAC14F6E4B17D7835(vLocal_96[iVar0 /*3*/]) };
								if ((!func_26(vVar2) && unk_0x9F4FE516EAACCFC5(iLocal_815)) && unk_0xFBB4F23D534EB790(iLocal_815))
								{
									unk_0xDB111A9E05F41582(vVar2.x, vVar2.y);
								}
								iLocal_82 = iVar0;
								iVar0 = 0x00000032;
								iVar1 = 0x00000001;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 == 0x00000000)
				{
					iLocal_82 = 0x00000000;
				}
			}
			else
			{
				iLocal_82 = 0x00000000;
			}
			break;
	}
	if (iLocal_74[iParam0] >= 0x00000016)
	{
		return 0x00000001;
	}
	else
	{
		iLocal_74[iParam0]++;
	}
	return 0x00000000;
}

void func_98(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	iVar2 = unk_0xCDB86175B3C461EB(iParam1);
	while (unk_0xE4EDC4B0E92C078B(iVar2))
	{
		if (iLocal_81 < 0x00000032)
		{
			if (func_110(iVar2))
			{
				if (func_109(vVar0))
				{
					if (!func_108(&iVar2))
					{
						bVar1 = 0x00000000;
						switch (iParam1)
						{
							case 0x0000004D:
							case 0x0000004F:
							case 0x00000125:
							case 0x000000E1:
							case 0x0000015C:
							case 0x0000005A:
							case 0x0000006D:
							case 0x0000007A:
							case 0x00000077:
							case 0x00000137:
							case 0x00000067:
							case 0x00000117:
							case 0x00000130:
							case 0x00000136:
							case 0x00000135:
							case 0x00000026:
							case 0x000000B0:
							case 0x00000131:
							case 0x00000054:
							case 0x0000005E:
							case 0x0000007E:
							case 0x00000034:
							case 0x00000063:
							case 0x00000066:
							case 0x00000087:
							case 0x00000088:
							case 0x00000028:
							case 0x00000165:
							case 0x0000006E:
							case 0x00000079:
							case 0x00000047:
							case 0x00000048:
							case 0x000001BE:
							case 0x00000049:
							case 0x0000006F:
							case 0x0000004B:
							case 0x000001DB:
							case 0x000001D9:
							case 0x000001EC:
							case 0x000001F0:
							case 0x000001F1:
							case 0x000001F2:
							case 0x000001F3:
							case 0x000001F4:
							case 0x0000022D:
							case 0x0000024E:
							case 0x0000024F:
							case 0x00000266:
							case default:
						}
						bVar1 = 0x00000001;
						vVar3 = { unk_0xAC14F6E4B17D7835(iVar2) };
						if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000010)
						{
							if (iParam1 == 0x0000006E)
							{
								if (vVar3.y < 200f)
								{
									bVar1 = 0x00000001;
								}
								else
								{
									bVar1 = 0x00000000;
								}
							}
						}
						if (iParam1 == iLocal_67)
						{
							bVar1 = 0x00000001;
						}
						if (func_11(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							bVar1 = 0x00000000;
						}
						else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vVar3, 250f, 250f, 250f, 0x00000000, 0x00000001, 0x00000000))
						{
							bVar1 = 0x00000000;
						}
						else if (iParam1 != iLocal_67)
						{
							iVar4 = 0x00000000;
							while (iVar4 < 0x00000001)
							{
								if (func_107(vVar3, Global_26B66F.f_EE[iVar4 /*3*/], 200f, 0x00000001) && !func_11(Global_26B66F.f_EE[iVar4 /*3*/], 0f, 0f, 0f, 0x00000000))
								{
									bVar1 = 0x00000000;
								}
								iVar4++;
							}
						}
						if (bVar1)
						{
							bVar1 = 0x00000000;
							if (func_110(iVar2))
							{
								if ((((unk_0xDC7D2B8A563DB482(iVar2) == 0x00000004 || unk_0xDC7D2B8A563DB482(iVar2) == 0x00000005) || unk_0xDC7D2B8A563DB482(iVar2) == 0x00000001) || unk_0xDC7D2B8A563DB482(iVar2) == 0x00000006) || unk_0xDC7D2B8A563DB482(iVar2) == 0x00000003)
								{
									bVar1 = 0x00000001;
								}
							}
							if (bVar1)
							{
								if (func_110(iVar2))
								{
									func_106(iParam0, &iVar2, &vVar0);
									func_99(vVar0, bParam2, iParam0);
								}
							}
						}
					}
				}
			}
		}
		iVar2 = unk_0x92BE25195E14900E(iParam1);
	}
}

void func_99(vector3 vParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		if (func_96(vLocal_96[iVar0 /*3*/]) == func_96(vParam0.x))
		{
			iVar1 = iVar0;
			iVar0 = 0x00000032;
		}
		else if (iVar0 == iLocal_81)
		{
			iVar1 = iVar0;
			iVar0 = 0x00000032;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_81)
		{
			if (func_96(vLocal_96[iVar0 /*3*/]) == func_96(vParam0.x))
			{
				if (func_103(vParam0, vLocal_96[iVar0 /*3*/]))
				{
					if (bParam1)
					{
						func_102(vParam0, iVar0, iParam2);
						iVar0 = 0x00000032;
						return;
					}
					else
					{
						func_100(vParam0, iVar0, iParam2);
						iLocal_81++;
						iVar0 = 0x00000032;
						return;
					}
				}
				else if (bParam1)
				{
					iVar0 = 0x00000032;
					return;
				}
				else
				{
					func_100(vParam0, iVar0, iParam2);
					iLocal_81++;
					iVar0 = 0x00000032;
					return;
				}
			}
			else
			{
				func_100(vParam0, iVar0, iParam2);
				iLocal_81++;
				iVar0 = 0x00000032;
				return;
			}
		}
		else
		{
			func_100(vParam0, iVar0, iParam2);
			iLocal_81++;
			iVar0 = 0x00000032;
			return;
		}
		iVar0++;
	}
}

void func_100(vector3 vParam0, int iParam1, int iParam2)
{
	func_85("INSERT_NEW_DESTINATION_TO_LIST - start \n");
	func_101(iParam1);
	vLocal_96[iParam1 /*3*/] = { vParam0 };
	if (func_96(vLocal_96[iParam1 /*3*/]) == unk_0x817B3657F78A517A())
	{
		if (Local_68.f_2[iParam2 /*23*/].f_3 != 0xFFFFFFFF)
		{
			Local_70[Local_68.f_2[iParam2 /*23*/].f_3 /*44*/].f_4.f_23 = iParam1;
			Local_70[Local_68.f_2[iParam2 /*23*/].f_3 /*44*/].f_4.f_24 = { unk_0xAC14F6E4B17D7835(vLocal_96[iParam1 /*3*/]) };
		}
	}
}

void func_101(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	func_85("SHIFT_LIST_DOWN_1_PLACE_FROM_POSITION - start, position = ");
	func_83(iParam0);
	func_85("\n");
	iVar0 = 0x00000031;
	while (iVar0 > iParam0)
	{
		vVar1 = { vLocal_96[(iVar0 - 0x00000001) /*3*/] };
		vLocal_96[iVar0 /*3*/] = { vVar1 };
		iVar0 = (iVar0 - 0x00000001);
	}
}

void func_102(vector3 vParam0, int iParam1, int iParam2)
{
	func_85("REPLACE_LIST_DESTINATION_WITH_NEW_DESTINATION - start \n");
	vLocal_96[iParam1 /*3*/] = { vParam0 };
	if (func_96(vLocal_96[iParam1 /*3*/]) == unk_0x817B3657F78A517A())
	{
		if (Local_68.f_2[iParam2 /*23*/].f_3 != 0xFFFFFFFF)
		{
			Local_70[Local_68.f_2[iParam2 /*23*/].f_3 /*44*/].f_4.f_23 = iParam1;
			Local_70[Local_68.f_2[iParam2 /*23*/].f_3 /*44*/].f_4.f_24 = { unk_0xAC14F6E4B17D7835(vLocal_96[iParam1 /*3*/]) };
		}
	}
}

int func_103(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	if (func_104(iParam0) < func_104(iParam3))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_104(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 1E+07f };
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0))
		{
			vVar0 = { func_105(iParam0) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
	}
	return SYSTEM::VMAG(vVar0);
}

Vector3 func_105(int iParam0)
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

void func_106(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = *iParam1;
	if (!*uParam2 == Global_1B052)
	{
		unk_0xA53EC9C7DB1E3684(func_105(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	}
	else
	{
		unk_0xA53EC9C7DB1E3684(Local_68.f_2[iParam0 /*23*/].f_8, &(uParam2->f_1), &(uParam2->f_2));
	}
}

bool func_107(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	return unk_0x0EB28750412C3A5A(vParam0, vParam1, bParam3) <= fParam2;
}

int func_108(int iParam0)
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
	if (func_11(unk_0xAC14F6E4B17D7835(*iParam0), 0f, 0f, 0f, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_96(*iParam0) == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_109(int iParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	if (!func_96(iParam0) == iLocal_66)
	{
		fVar0 = func_104(iParam0);
		if (fVar0 > 40f)
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

int func_110(int iParam0)
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

int func_111()
{
	int iVar0;
	
	iVar0 = unk_0xB7B9B7C245ECD0D7();
	if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x0000000C))
	{
		iVar0 = (iVar0 - 0x00000001);
	}
	return iVar0;
}

int func_112(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (SYSTEM::TIMERB() > 0x000001F4)
	{
		iVar2 = unk_0xB3260A60545D3F11();
		if (iLocal_818 != iVar2)
		{
			if (((iLocal_818 == 0x00000008 || iLocal_818 == 0x00000009) || iLocal_818 == 0x0000000A) || iLocal_818 == 0x0000000C)
			{
				if (((iVar2 != 0x00000008 && iVar2 != 0x00000009) && iVar2 != 0x0000000A) && iVar2 != 0x0000000C)
				{
					iLocal_818 = iVar2;
					iLocal_814 = 0x00000001;
					iLocal_74[iParam0] = 0x00000000;
					SYSTEM::SETTIMERB(0x00000000);
				}
			}
			else if (((iVar2 == 0x00000008 || iVar2 == 0x00000009) || iVar2 == 0x0000000A) || iVar2 == 0x0000000C)
			{
				iLocal_818 = iVar2;
				iLocal_814 = 0x00000001;
				iLocal_74[iParam0] = 0x00000000;
				SYSTEM::SETTIMERB(0x00000000);
			}
		}
		if (!iLocal_814)
		{
			iVar3 = func_111();
			if (iLocal_84 != iVar3)
			{
				iLocal_814 = 0x00000001;
				iLocal_74[iParam0] = 0x00000000;
				iLocal_84 = iVar3;
				SYSTEM::SETTIMERB(0x00000000);
			}
		}
		if (!iLocal_814)
		{
			if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF)
			{
				if (Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_23 == 0xFFFFFFFF)
				{
					iVar1 = unk_0xCDB86175B3C461EB(unk_0x817B3657F78A517A());
					if (unk_0xE4EDC4B0E92C078B(iVar1))
					{
						vVar0 = { unk_0xAC14F6E4B17D7835(iVar1) };
						if (SYSTEM::VDIST(vVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 250f)
						{
							iLocal_814 = 0x00000001;
							iLocal_74[iParam0] = 0x00000000;
							Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_23 = 0xFFFFFFFF;
							Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_24 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0x00000000);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(vLocal_96[Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_23 /*3*/]))
				{
					if (func_96(vLocal_96[Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_23 /*3*/]) == unk_0x817B3657F78A517A())
					{
						vVar0 = { unk_0xAC14F6E4B17D7835(vLocal_96[Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_23 /*3*/]) };
						if (!func_11(vVar0, Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_24, 0x00000000))
						{
							iLocal_814 = 0x00000001;
							iLocal_74[iParam0] = 0x00000000;
							Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_23 = 0xFFFFFFFF;
							Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_24 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0x00000000);
						}
					}
					else
					{
						iLocal_814 = 0x00000001;
						iLocal_74[iParam0] = 0x00000000;
						Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_23 = 0xFFFFFFFF;
						Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_24 = { 0f, 0f, 0f };
						SYSTEM::SETTIMERB(0x00000000);
					}
				}
				else
				{
					iLocal_814 = 0x00000001;
					iLocal_74[iParam0] = 0x00000000;
					Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_23 = 0xFFFFFFFF;
					Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_24 = { 0f, 0f, 0f };
					SYSTEM::SETTIMERB(0x00000000);
				}
			}
		}
		SYSTEM::SETTIMERB(0x00000000);
	}
	return iLocal_814;
}

void func_113(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_71())
	{
		if (iLocal_814 == 0x00000000)
		{
			func_145(&iVar0, &uVar1, &uVar2, &uVar3, 0x00000000);
			if (unk_0x91E3F625EF57450D(0x00000002))
			{
				unk_0x558EC149EB2BC0A2(0x00000002, 0x000000F1);
				unk_0x558EC149EB2BC0A2(0x00000002, 0x000000F2);
				unk_0x558EC149EB2BC0A2(0x00000002, 0x000000B4);
				unk_0x558EC149EB2BC0A2(0x00000002, 0x000000B5);
			}
			if (iVar0 > 0x0000001C || unk_0xD245978525608929(0x00000002, 0x000000B4))
			{
				if (!iLocal_100)
				{
					func_143();
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_100 = 0x00000001;
				}
			}
			else
			{
				iLocal_100 = 0x00000000;
			}
			if (iVar0 < 0xFFFFFFE4 || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B5))
			{
				if (!iLocal_101)
				{
					func_141();
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_101 = 0x00000001;
				}
			}
			else
			{
				iLocal_101 = 0x00000000;
			}
		}
		if (!bLocal_99)
		{
			if (iLocal_81 > 0x00000000)
			{
				unk_0xF3039DE1FDB4F6FD(0x00000001);
				if (iLocal_814 == 0x00000000)
				{
					if (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B0))
					{
						if (unk_0xE4EDC4B0E92C078B(vLocal_96[iLocal_82 /*3*/]))
						{
							if (func_140(unk_0xAC14F6E4B17D7835(vLocal_96[iLocal_82 /*3*/])))
							{
								iLocal_102 = 0x00000000;
								Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_F = { vLocal_96[iLocal_82 /*3*/] };
								Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_5 = { unk_0xAC14F6E4B17D7835(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_F) };
								vLocal_110 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
								func_32(&uLocal_107);
								func_82(iParam0);
								bLocal_99 = 0x00000001;
								if (iLocal_816 != 0x00000005)
								{
									unk_0x0D4F19AA64A65336(iLocal_816);
								}
								iLocal_102 = 0x00000000;
								bLocal_97 = 0x00000000;
								iLocal_98 = 0x00000001;
								iLocal_813 = 0x00000001;
								func_116(0x00000002, iParam0);
								unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000004);
								unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000014);
								unk_0x0674E58A79778E99(&(Local_68.f_2[iParam0 /*23*/].f_6), 0x00000003);
							}
							else
							{
								func_116(0x0000001B, iParam0);
							}
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000007) && bLocal_99 == 0x00000000)
			{
				iLocal_813 = 0x00000001;
				func_116(0x00000001, iParam0);
				unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000007);
			}
		}
		else
		{
			unk_0xF3039DE1FDB4F6FD(0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000004) && Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000005)
			{
				if (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B1))
				{
					unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000004);
					unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000005);
					iLocal_813 = 0x00000001;
					func_116(0x00000018, iParam0);
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000005) && Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000007)
			{
				if (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B1))
				{
					unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000005);
					unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000004);
					iLocal_813 = 0x00000001;
					func_116(0x00000019, iParam0);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000003) && !unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000003))
			{
				if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000005 && !unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000004))
				{
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
					if (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B3))
					{
						func_116(0x00000014, iParam0);
						func_115(iParam0, 0x00000000, 0x00000000);
						iLocal_813 = 0x00000001;
						unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000003);
					}
				}
			}
			if (bLocal_97)
			{
				if (func_114())
				{
					if (iLocal_814 == 0x00000000)
					{
						if (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B0))
						{
							if (unk_0xE4EDC4B0E92C078B(vLocal_96[iLocal_82 /*3*/]))
							{
								if (func_140(unk_0xAC14F6E4B17D7835(vLocal_96[iLocal_82 /*3*/])))
								{
									func_116(0x00000009, iParam0);
									if (iLocal_816 != 0x00000005)
									{
										unk_0x0D4F19AA64A65336(iLocal_816);
									}
									iLocal_102 = 0x00000000;
									bLocal_97 = 0x00000000;
									iLocal_98 = 0x00000001;
									Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_F = { vLocal_96[iLocal_82 /*3*/] };
									Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_5 = { unk_0xAC14F6E4B17D7835(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_F) };
									Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1E = { 0f, 0f, 0f };
									Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_21 = 0f;
									Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_22 = 0xFFFFFFFF;
									unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000004);
									unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000014);
									func_115(iParam0, 0x00000000, 0x00000000);
									SYSTEM::SETTIMERA(0x00000000);
									iLocal_813 = 0x00000001;
								}
								else
								{
									func_116(0x0000001B, iParam0);
								}
							}
						}
					}
				}
				if (SYSTEM::TIMERA() > 0x00001388)
				{
					if (iLocal_816 != 0x00000005)
					{
						unk_0x0D4F19AA64A65336(iLocal_816);
					}
					iLocal_102 = 0x00000000;
					bLocal_97 = 0x00000000;
					iLocal_98 = 0x00000001;
				}
			}
			else if (!iLocal_98)
			{
				if (SYSTEM::TIMERA() > 0x00000000)
				{
					if (iLocal_816 != 0x00000005)
					{
						unk_0x0D4F19AA64A65336(iLocal_816);
					}
					bLocal_97 = 0x00000000;
					iLocal_102 = 0x00000000;
					iLocal_98 = 0x00000001;
				}
			}
		}
	}
	else
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
	}
	unk_0x3039591AD3E735CE(iLocal_83);
	unk_0xD9ACBBA59FD5A09E(0x00000004);
	unk_0x5DD950F92F816F03(0x00000001);
	if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000))
	{
		unk_0xEF45C43067063F18(iLocal_88, fLocal_92, fLocal_93, fLocal_90, fLocal_91, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000);
	}
}

int func_114()
{
	if (unk_0x9F4FE516EAACCFC5(iLocal_815))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_815))
		{
			return 0x00000001;
		}
	}
	if (bLocal_97 || !iLocal_98)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_115(int iParam0, bool bParam1, bool bParam2)
{
	if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
	{
		if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1)))
			{
				if (bParam2)
				{
					unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
				}
				if (bParam1)
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
				}
				else if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 0x00000003))
				{
					if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 0x00000003))
					{
						if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 0x00000003))
						{
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
						}
					}
				}
			}
		}
	}
}

void func_116(int iParam0, int iParam1)
{
	if (!func_15(Local_68.f_2[iParam1 /*23*/].f_1))
	{
		if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam1 /*23*/].f_1))
		{
			if (!func_139())
			{
				if (iParam0 != 0x00000000)
				{
					func_20(&uLocal_828, 0x00000008, unk_0x1B50683925F00106(Local_68.f_2[iParam1 /*23*/].f_1), "FM_TAXI", 0x00000000, 0x00000001);
					if (func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
					{
						unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_68.f_2[iParam1 /*23*/].f_1), unk_0x16F2683693E537C9(), 0x00000FA0, 0x00000000, 0x00000002);
					}
					switch (iParam0)
					{
						case 0x00000001:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_WT", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x00000002:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_BJ", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x00000005:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_AR", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x00000007:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_NM", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x00000009:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_CD", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x0000000C:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_RA", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x0000000D:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_OE", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x00000018:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_SR", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x00000019:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_ST", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x0000001A:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_DB", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x0000001B:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_US", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						
						case 0x00000014:
							func_117(&uLocal_828, "MPTXIAU", "MPTXI_SO", 0x0000000C, 0x00000000, 0x00000000, 0x00000001);
							iParam0 = 0x00000000;
							break;
						}
				}
			}
			else
			{
				iParam0 = 0x00000000;
			}
		}
	}
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_118(sParam2, iParam3, 0x00000000);
}

int func_118(char* sParam0, int iParam1, bool bParam2)
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
					func_137();
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
		if (func_78(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_136();
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
				func_128();
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
				if (func_127())
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
			if (func_126())
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
			func_125();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_124();
		func_119();
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
		func_137();
	}
	return 0x00000000;
}

void func_119()
{
	if (!func_120())
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

int func_120()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_123())
	{
		return 0x00000000;
	}
	if (func_121(unk_0xD803B885F5E47A62()))
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

bool func_121(int iParam0)
{
	return func_122(iParam0, 0x00000014);
}

bool func_122(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_123()
{
	return 0xFFFFFFFF;
}

void func_124()
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

void func_125()
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

int func_126()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_127()
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

void func_128()
{
	if (func_135(0x0000000E))
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
		Global_4C1E = func_129();
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

var func_129()
{
	func_130();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_130()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_133(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_132(unk_0x16F2683693E537C9());
			if (func_131(iVar0) && (!func_135(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_131(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_131(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_133(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_133(int iParam0)
{
	if (func_131(iParam0))
	{
		return func_134(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_134(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_135(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_136()
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

void func_137()
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

void func_138(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_139()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_140(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (!func_26(Global_26B66F.f_EE[iVar0 /*3*/]))
		{
			if (func_107(vParam0, Global_26B66F.f_EE[iVar0 /*3*/], 200f, 0x00000001))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_141()
{
	if (bLocal_99)
	{
		if (bLocal_97)
		{
			func_142();
		}
		else if (!unk_0xFBB4F23D534EB790(iLocal_815))
		{
			iLocal_102 = 0x00000001;
			iLocal_813 = 0x00000001;
		}
		else
		{
			func_142();
		}
		bLocal_97 = 0x00000001;
		iLocal_98 = 0x00000001;
	}
	else
	{
		func_142();
	}
}

void func_142()
{
	vector3 vVar0;
	
	unk_0x7E60C62A7CE58FC8(iLocal_88, "SET_INPUT_EVENT");
	unk_0x3CAEA85DA607305E(0x00000009);
	unk_0x7E60D21B163E9D56();
	iLocal_82++;
	if (iLocal_82 > (iLocal_81 - 0x00000001))
	{
		iLocal_82 = 0x00000000;
	}
	if (unk_0xE4EDC4B0E92C078B(vLocal_96[iLocal_82 /*3*/]))
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(vLocal_96[iLocal_82 /*3*/]) };
		if (!func_26(vVar0))
		{
			unk_0xDB111A9E05F41582(vVar0.x, vVar0.y);
		}
	}
}

void func_143()
{
	if (bLocal_99)
	{
		if (bLocal_97)
		{
			func_144();
		}
		else if (!unk_0xFBB4F23D534EB790(iLocal_815))
		{
			iLocal_102 = 0x00000001;
			iLocal_813 = 0x00000001;
		}
		else
		{
			func_144();
		}
		bLocal_97 = 0x00000001;
		iLocal_98 = 0x00000001;
	}
	else
	{
		func_144();
	}
}

void func_144()
{
	vector3 vVar0;
	
	unk_0x7E60C62A7CE58FC8(iLocal_88, "SET_INPUT_EVENT");
	unk_0x3CAEA85DA607305E(0x00000008);
	unk_0x7E60D21B163E9D56();
	iLocal_82 = (iLocal_82 - 0x00000001);
	if (iLocal_82 < 0x00000000)
	{
		iLocal_82 = (iLocal_81 - 0x00000001);
		if (iLocal_82 < 0x00000000)
		{
			iLocal_82 = 0x00000000;
		}
	}
	if (unk_0xE4EDC4B0E92C078B(vLocal_96[iLocal_82 /*3*/]))
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(vLocal_96[iLocal_82 /*3*/]) };
		if (!func_26(vVar0))
		{
			unk_0xDB111A9E05F41582(vVar0.x, vVar0.y);
		}
	}
}

void func_145(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_146(int iParam0)
{
	if (func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (!unk_0x9F4FE516EAACCFC5(iLocal_815))
		{
			if ((!func_153() && !func_78(0x00000008, 0xFFFFFFFF)) && Local_68.f_2[iParam0 /*23*/].f_7 != 0x00000006)
			{
				iLocal_815 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000001);
				unk_0xC5940439E4EB9A33(iLocal_815, unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), vLocal_821, 0x00000001);
				func_149(iParam0);
				unk_0xA2071E69C1AE8451(iLocal_815, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x4DC7B72197441408(0x00000001);
				iLocal_813 = 0x00000001;
				Global_1B063 = 0x00000001;
			}
		}
		else if (bLocal_99)
		{
			if (!Global_1B063)
			{
				if (iLocal_102)
				{
					if (!unk_0xFBB4F23D534EB790(iLocal_815))
					{
						iLocal_816 = unk_0x6137B42401E1313B();
						if (iLocal_816 != 0x00000005)
						{
							if (unk_0x6137B42401E1313B() != 0x00000004)
							{
								unk_0x0D4F19AA64A65336(0x00000004);
							}
						}
						func_41(0x00000004, 0x00000001, 0xFFFFFFFF);
						func_148();
						Global_1B063 = 0x00000001;
						unk_0xE3BB8E05FCEB3FBE(iLocal_815, 0x00000001);
						unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						unk_0x4DC7B72197441408(0x00000001);
						func_149(iParam0);
						iLocal_813 = 0x00000001;
						iLocal_102 = 0x00000000;
						Global_1B063 = 0x00000001;
					}
				}
			}
			if ((((unk_0x6137B42401E1313B() == 0x00000004 && !unk_0xBFC0798A6E3417F9(0x00000002, 0x00000017)) && !func_153()) && !func_78(0x00000008, 0xFFFFFFFF)) && Local_68.f_2[iParam0 /*23*/].f_7 != 0x00000006)
			{
				if (unk_0xFBB4F23D534EB790(iLocal_815))
				{
					func_149(iParam0);
				}
			}
			else if ((unk_0xFBB4F23D534EB790(iLocal_815) && !func_153()) && !func_78(0x00000008, 0xFFFFFFFF))
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_815, 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				if (iLocal_816 != 0x00000005)
				{
					unk_0x0D4F19AA64A65336(iLocal_816);
				}
				iLocal_102 = 0x00000000;
				bLocal_97 = 0x00000000;
				iLocal_98 = 0x00000001;
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x4DC7B72197441408(0x00000000);
				Global_1B063 = 0x00000000;
				unk_0xFB452C6B9BE826C7();
				unk_0xF737A3AD8873CE16();
				unk_0xF91D0B1DCE756AFB(0x00000000);
				iLocal_813 = 0x00000001;
				func_147();
			}
		}
		else if (unk_0xFBB4F23D534EB790(iLocal_815))
		{
			func_149(iParam0);
		}
	}
}

void func_147()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_81)
	{
		if (bLocal_99)
		{
			if (iLocal_63 == vLocal_96[iVar0 /*3*/])
			{
				iLocal_82 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0x7E60C62A7CE58FC8(iLocal_88, "HIGHLIGHT_DESTINATION");
	unk_0x3CAEA85DA607305E(iLocal_82);
	unk_0x7E60D21B163E9D56();
}

void func_148()
{
	if (!func_26(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_5))
	{
		if (unk_0x9F4FE516EAACCFC5(iLocal_815) && unk_0xFBB4F23D534EB790(iLocal_815))
		{
			unk_0xDB111A9E05F41582(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_5, Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_5.f_1);
			unk_0x3B05E4399DC8490C(0x00000000);
			unk_0xF91D0B1DCE756AFB(0x00000578);
		}
	}
}

void func_149(int iParam0)
{
	if (unk_0x9F4FE516EAACCFC5(iLocal_815))
	{
		func_150(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), &iLocal_815, vLocal_823);
		unk_0x5818C8D5303DCCF8(iLocal_815, fLocal_822);
		unk_0xDC3CC6D1845B0567(iLocal_815, 0.01f);
	}
	if (unk_0x798A3F1296751F46())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x0000000D))
		{
			unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000D);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x0000000D))
	{
		func_148();
		unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000D);
	}
	unk_0x2BDA118EC94F4D04();
	unk_0xDC355804A9511111();
}

void func_150(int iParam0, int iParam1, vector3 vParam2)
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
			vVar4 = { func_152(unk_0x68E4ADDDDCD7BDDE(iParam0, vParam2) - unk_0x68E4ADDDDCD7BDDE(iParam0, vLocal_821)) };
			func_151(vVar4, &fVar1, &fVar2, 0x00000001);
			unk_0x5F3CBA6EB9341C90(*iParam1, fVar1, fVar3, fVar2, 0x00000002);
		}
	}
}

void func_151(vector3 vParam0, var uParam1, var uParam2, int iParam3)
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

Vector3 func_152(vector3 vParam0)
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

bool func_153()
{
	return Global_56C1;
}

void func_154(int iParam0)
{
	var uVar0;
	
	if ((((Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000002 || Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000004) || Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000005) || Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000006) || Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000007)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000002))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
			{
				if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF && unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)))
				{
					if (Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						if (unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) > 5f)
						{
							func_116(0x0000000C, iParam0);
							if (iLocal_104 > iLocal_103)
							{
								if (!unk_0x36646919F20EAFFC(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)))))
								{
									unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iParam0);
									unk_0x2956AF9855DAF065(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)), 0x00000025, unk_0xBC64C2447446D57B(0x00000002));
									if (!unk_0xFEBC1E4EC9E001F0())
									{
										func_175("TXI_HWRUN", 0xFFFFFFFF);
									}
								}
							}
						}
						else if (iLocal_104 > iLocal_103)
						{
							if (func_172(unk_0xD803B885F5E47A62()) >= iLocal_104 && unk_0x7A7BDE279347E517(iLocal_104, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000))
							{
								if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000006)
								{
									func_116(0x00000005, iParam0);
								}
								else
								{
									func_116(0x0000000D, iParam0);
								}
								if (func_171())
								{
									func_158(0x92AEAB9C, iLocal_104, &uVar0, 0x00000000, 0x00000001, 0x00000000);
								}
								else
								{
									func_155(-iLocal_104, 0x00000000);
									unk_0xD6F9EF2CBF17C39A(iLocal_104, 0x00000000, 0x00000001);
								}
							}
							else
							{
								func_116(0x00000007, iParam0);
								if (!unk_0x36646919F20EAFFC(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)))))
								{
									unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iParam0);
									unk_0x2956AF9855DAF065(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_3)), 0x00000025, unk_0xBC64C2447446D57B(0x00000002));
									if (!unk_0xFEBC1E4EC9E001F0())
									{
										func_175("TXI_HNMON", 0xFFFFFFFF);
									}
								}
							}
						}
						else
						{
							func_116(0x0000000D, iParam0);
						}
						unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000002);
						func_32(&uLocal_78);
					}
				}
			}
		}
	}
}

void func_155(int iParam0, int iParam1)
{
	func_157(iParam0, 0x00000001, 0x00000001, 0x00000000);
	if (iParam1 == 0x00000001)
	{
		func_156(iParam0, 0x00000000);
	}
}

void func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_157(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 0x00000001)
	{
		iParam1 = 0x00000001;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0x00000000)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_4 = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 = (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 + iVar1);
	if (iParam2 == 0x00000001)
	{
		func_156(iVar1, 0x00000000);
	}
}

void func_158(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_171())
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
				func_159(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_159(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_159(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_159(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_171())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_170()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_166(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_165(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_160(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_161(iParam0);
	}
}

void func_161(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_171())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_164(iParam0))
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
		func_162(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_162(var uParam0)
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
	func_163(&(uParam0->f_E));
	func_163(&(uParam0->f_E.f_D));
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

void func_163(var uParam0)
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

int func_164(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_165(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_171())
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
				func_167(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_167(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_169(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_168();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_168()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_169(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_170()
{
	return Global_1407E9;
}

int func_171()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_172(int iParam0)
{
	var uVar0;
	
	uVar0 = func_173(iParam0);
	return uVar0;
}

int func_173(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(0xFFFFFFFF);
		}
		else if (func_174(iParam0))
		{
			return Global_184507[iParam0 /*876*/].f_D3.f_3;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_174(int iParam0)
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

void func_175(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_176(int iParam0)
{
	char* sVar0;
	
	sVar0 = "taxi_display";
	if (unk_0xC844350D5D58C99A(iLocal_86))
	{
		return 0x00000001;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_87);
		iLocal_88 = unk_0xB01F55A0FD1CFD49(sVar0);
		if (unk_0xB87F6CF6E5628C67(iLocal_87) && unk_0x83D8570832F172A7(iLocal_88))
		{
			if (func_13(Local_68.f_2[iParam0 /*23*/]))
			{
				iLocal_86 = unk_0x7707E48765093646(iLocal_87, unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001), 0x00000000, 0x00000000, 0x00000000);
				unk_0x9F528B1B53FBC5D9(iLocal_86, unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0xF653B9B22DA806A9(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), "Chassis"), vLocal_819, vLocal_820, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				if (!unk_0xE6CD5C6925050049("taxi"))
				{
					unk_0x268029E44B2B3E36("taxi", 0x00000000);
					if (!unk_0x55CB69E8157C5B54(unk_0x134B62B726CEC8E6(iLocal_86)))
					{
						unk_0x064E7408AD6E15E5(unk_0x134B62B726CEC8E6(iLocal_86));
					}
				}
				iLocal_83 = unk_0x3FF702268B97B673("taxi");
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_177(int iParam0)
{
	int iVar0;
	
	if (func_180())
	{
		if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000008 && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 20f, 20f, 3f, 0x00000000, 0x00000001, 0x00000001))
		{
			unk_0x3F423BF5B8125A50("TAXI_HAIL");
			if (unk_0xB4AE0788C1587752("TAXI_HAIL"))
			{
				if (uLocal_73[iParam0] == 0xFFFFFFFF)
				{
					func_179(&(uLocal_73[iParam0]), 0x00000000, "TXM_H01", 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				}
				if (func_178(uLocal_73[iParam0], 0x00000001))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007))
					{
						unk_0xDD353D0E9C789D0E(&iVar0);
						unk_0x9294582561BECEE7(0x00000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iVar0);
						unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar0);
						unk_0xF82EA857DA10E0CD(&iVar0);
					}
					else
					{
						unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					if (func_50("TXM_H01"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1 = iParam0;
					unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000017);
					unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000016);
					func_48(&(uLocal_73[iParam0]));
				}
			}
		}
		else
		{
			unk_0x8D17794CE3273D70("TAXI_HAIL");
			func_48(&(uLocal_73[iParam0]));
		}
	}
	else
	{
		unk_0x8D17794CE3273D70("TAXI_HAIL");
		func_48(&(uLocal_73[iParam0]));
	}
}

int func_178(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_52(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

void func_179(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == 0xFFFFFFFF)
		{
			func_48(uParam0);
		}
		return;
	}
	if (!*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*uParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_180()
{
	if (func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1 != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000000;
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
		{
			return 0x00000000;
		}
		if (func_181(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
		{
			return 0x00000000;
		}
		if (func_52(0x00000000))
		{
			return 0x00000000;
		}
		if (func_75())
		{
			return 0x00000000;
		}
		if (func_80())
		{
			return 0x00000000;
		}
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_181(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_182(iParam0))
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

bool func_182(int iParam0)
{
	return func_183(iParam0);
}

bool func_183(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (((((((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 10f, 10f, 2f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) < 3f) && !func_191(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0x00000000) && Local_68.f_2[iParam0 /*23*/].f_7 != 0x00000009) && Local_68.f_2[iParam0 /*23*/].f_7 != 0x0000000A) && Local_68.f_2[iParam0 /*23*/].f_7 != 0x0000000B)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_3, (0x00000000 + iParam0)))
		{
			func_145(&iVar0, &iVar1, &uVar2, &uVar3, 0x00000000);
			if (((iVar1 > 0x0000001C || iVar1 < 0xFFFFFFE4) || iVar0 > 0x0000001C) || iVar0 < 0xFFFFFFE4)
			{
				if (iLocal_100 == 0x00000000)
				{
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_100 = 0x00000001;
				}
			}
			else
			{
				iLocal_100 = 0x00000000;
			}
			if (iLocal_100 == 0x00000001)
			{
				if (SYSTEM::TIMERA() > 0x00000113)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_3), (0x00000000 + iParam0));
						iLocal_100 = 0x00000000;
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_71, (0x00000000 + iParam0)))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					iVar5 = func_190(0x000004A6, 0xFFFFFFFF, 0x00000000);
					if ((!unk_0xEAE0D21A50E6C7F4(iVar5, 0x00000007) || !unk_0xEAE0D21A50E6C7F4(iVar5, 0x00000008)) || !unk_0xEAE0D21A50E6C7F4(iVar5, 0x00000009))
					{
						if (func_87(&uLocal_78, 0x00004E20, 0x00000000))
						{
							if ((((unk_0x4D570FEF9D230CE7(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) == unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) && unk_0x10BA239D3B8FDC7F(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x42B40000)) && !unk_0x70EED0761B82965E(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]))) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_188(unk_0xD803B885F5E47A62()))
							{
								func_175("TXM_H02", 0xFFFFFFFF);
								if (!unk_0xEAE0D21A50E6C7F4(iVar5, 0x00000007))
								{
									unk_0x5D96D8530B3D0904(&iVar5, 0x00000007);
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iVar5, 0x00000008))
								{
									unk_0x5D96D8530B3D0904(&iVar5, 0x00000008);
								}
								else
								{
									unk_0x5D96D8530B3D0904(&iVar5, 0x00000009);
								}
								func_186(0x000004A6, iVar5, 0xFFFFFFFF, 0x00000001, 0x00000000);
								func_32(&uLocal_78);
								unk_0x5D96D8530B3D0904(&iLocal_71, (0x00000000 + iParam0));
							}
						}
					}
				}
			}
			if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000017))
			{
				if (SYSTEM::TIMERB() > 0x00000113)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_3, (0x00000000 + iParam0)))
					{
						if (func_185(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) == 0x00000001)
						{
							if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001, 0x00000000))
							{
								iVar4 = 0x00000001;
							}
							else if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000002, 0x00000000))
							{
								iVar4 = 0x00000002;
							}
							else
							{
								iVar4 = 0x00000000;
							}
						}
						else if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000002, 0x00000000))
						{
							iVar4 = 0x00000002;
						}
						else if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000, 0x00000000))
						{
							iVar4 = 0x00000000;
						}
						else
						{
							iVar4 = 0x00000001;
						}
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0xFFFFFFFF, iVar4, 1f, 0x00800000, 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_3), (0x00000000 + iParam0));
						iLocal_813 = 0x00000001;
					}
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0x00000000);
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_71, (0x00000000 + iParam0)))
		{
			unk_0x0674E58A79778E99(&iLocal_71, (0x00000000 + iParam0));
			if (func_50("TXM_H02"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_3, (0x00000000 + iParam0)))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				iLocal_100 = 0x00000000;
			}
			unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_3), (0x00000000 + iParam0));
		}
	}
}

int func_185(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
		else
		{
			return 0xFFFFFFFF;
		}
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 1f, -0.5f, 0f) };
		vVar3 = { vVar1 - vVar0 };
		vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam0, -1f, -0.5f, 0f) };
		vVar4 = { vVar2 - vVar0 };
		if (SYSTEM::VMAG(vVar3) < SYSTEM::VMAG(vVar4))
		{
			return 0x00000002;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0xFFFFFFFF;
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_187(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_187(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_170();
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

bool func_188(int iParam0)
{
	return func_189(iParam0) == joaat("weapon_minigun");
}

int func_189(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_253;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_187(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_191(int iParam0, bool bParam1)
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

void func_192(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
	{
		if (Local_68.f_2[iParam0 /*23*/].f_3 == 0xFFFFFFFF)
		{
			if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000003)
			{
				if (func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
				{
					if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1))
					{
						if (func_13(Local_68.f_2[iParam0 /*23*/]))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000))
							{
								func_193(iParam0);
								return;
							}
						}
					}
				}
			}
		}
	}
	func_47(iParam0);
}

void func_193(int iParam0)
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_72[iParam0]))
	{
		iLocal_72[iParam0] = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]));
		unk_0xBC8E0A7390523199(iLocal_72[iParam0], 0x000000C6);
		unk_0xDC5B2F9D0CCE3A10(iLocal_72[iParam0], "TXM_BLIP");
		unk_0xF412DD40DE84CE72(iLocal_72[iParam0], 0x00000001);
		unk_0x0EC848EFF66DF45A(iLocal_72[iParam0], 0x00001B58);
		unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000C);
	}
}

void func_194(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000001))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_72[iParam0]))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_31B), 0x00000001);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_1, 0x00000000))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
		{
			unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_1), 0x00000000);
		}
	}
}

void func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1) && func_13(Local_68.f_2[iParam0 /*23*/]))
	{
		if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1) && unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/]))
		{
			iVar3 = 0x00000003;
			vVar4 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000) };
			if (Local_68.f_2[iParam0 /*23*/].f_7 != 0x0000000B)
			{
				if (Local_68.f_2[iParam0 /*23*/].f_7 != 0x00000009)
				{
					if (Local_68.f_2[iParam0 /*23*/].f_7 != 0x0000000A)
					{
						unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x000000FB, 0x00000001);
						if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3, iParam0))
						{
							if (func_218(iParam0))
							{
								func_39(0x00000001, 0x00000001, 0x00000001);
								unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iParam0);
							}
						}
						if (Local_68.f_2[iParam0 /*23*/].f_7 != 0x00000008)
						{
							unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001);
						}
					}
				}
			}
			func_217(iParam0);
			switch (Local_68.f_2[iParam0 /*23*/].f_7)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF && Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
					{
						if (func_11(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, 0f, 0f, 0f, 0x00000000))
						{
							if (func_213(iParam0, func_216(unk_0xD803B885F5E47A62()), &(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A), &(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1D), &(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22), 0x000000FA))
							{
								Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22 = 0xFFFFFFFF;
								unk_0xE9362E4D600DD12A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, 12f, 0x00000000, unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
							}
						}
						else if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x93A5526E, 0x00000001))
						{
							iVar1 = iLocal_94;
							unk_0xE9362E4D600DD12A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, 12f, 0x00000000, unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])), iVar1, (45f - 20f), 20f);
						}
						unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 0x00000015);
					}
					break;
				
				case 0x00000002:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF && Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 0x00000015))
						{
							if (func_210(vVar4, Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1D, &(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A), &(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1D)))
							{
								unk_0x9992C3A6A1766168(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0.5f);
								if (unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 0x0000000E))
								{
									unk_0x27F3789FF35EEDF1(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1D, 0x00000000, 60f, 0x00000000);
								}
								else
								{
									unk_0x27F3789FF35EEDF1(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1A, Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_1D, 0x00000003, 60f, 0x00000000);
								}
								iLocal_813 = 0x00000001;
								unk_0x5D96D8530B3D0904(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 0x00000015);
							}
						}
						unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 0x00000016);
						unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 0x00000017);
					}
					break;
				
				case 0x00000003:
					if (Local_68.f_2[iParam0 /*23*/].f_2 != 0xFFFFFFFF && Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 0x00000017))
						{
							unk_0x67B9E919FADF78E0(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x000009C4, unk_0x12AB0310C2281427("NORMAL"), 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 0x00000017);
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2, 0x00000016))
						{
							unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001), 0x00000005, 5f, 0x402C08AB, -1f, 1f, 0x00000001);
							iLocal_813 = 0x00000001;
							unk_0x5D96D8530B3D0904(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 0x00000016);
						}
						else if (!unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
						{
							if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0xB41F1A34, 0x00000001) || unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) != 0x00000005)
							{
								unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_2), 0x00000016);
							}
						}
					}
					break;
				
				case 0x00000004:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF && Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E = { 0f, 0f, 0f };
						Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_21 = 0f;
						Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_22 = 0xFFFFFFFF;
					}
					if (func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0xB41F1A34, 0x00000001))
					{
						func_115(iParam0, 0x00000000, 0x00000000);
					}
					unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
					if (unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
					{
						if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 0x00000003))
						{
							if (unk_0xFCCE56DAE67AA889(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 0x00000003))
							{
								unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
								unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 0x00000003))
						{
							if (!unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
							{
								if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0xB41F1A34, 0x00000001))
								{
									unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), vVar4, 0x00000005, 5f, 0x402C08AB, -1f, 1f, 0x00000001);
								}
							}
							else if (unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000, 0x00000000))
							{
								unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
								unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, 0xFFFFFFFF, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
					break;
				
				case 0x00000005:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF && Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						if (func_11(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E, 0f, 0f, 0f, 0x00000000) && func_11(Local_68.f_2[iParam0 /*23*/].f_8, Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_5, 0x00000000))
						{
							if (Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_22 == 0xFFFFFFFF)
							{
								if (func_209(Local_68.f_2[iParam0 /*23*/].f_8, &(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E), &(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_21), iParam0) || func_199(Local_68.f_2[iParam0 /*23*/].f_8, &(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E), &(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_21), iParam0))
								{
									unk_0x5D96D8530B3D0904(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x0000000E);
									func_115(iParam0, 0x00000000, 0x00000000);
									iLocal_813 = 0x00000001;
								}
								Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_22 = 0x00000000;
							}
							else
							{
								iVar6 = unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]);
								if (func_196(&iVar6, Local_68.f_2[iParam0 /*23*/].f_8, &(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E), &(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_21), &(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_22), 0x000003E8))
								{
									unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x0000000E);
									Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_22 = 0x00000000;
									func_115(iParam0, 0x00000000, 0x00000000);
									iLocal_813 = 0x00000001;
								}
							}
						}
						if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 0x00000003))
						{
							unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
							if (unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
							{
								unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
								unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 0x00000003))
						{
							unk_0x8352CA08CF578D18(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_11(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E, 0f, 0f, 0f, 0x00000000))
						{
							if (!func_8(iParam0))
							{
								if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x0E763797, 0x00000001))
								{
									fVar2 = 15f;
									iVar1 = iLocal_94;
									iVar3 = 0x00000003;
									if (unk_0xEAE0D21A50E6C7F4(Local_68.f_2[iParam0 /*23*/].f_6, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000003))
									{
										fVar2 = 20f;
										iVar1 = iLocal_95;
									}
									if (unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 0x0000000E))
									{
										iVar3 = 0x00000000;
									}
									func_115(iParam0, 0x00000001, 0x00000001);
									unk_0x9992C3A6A1766168(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0.5f);
									unk_0xDD353D0E9C789D0E(&iVar0);
									unk_0xAB770AF6E04B282A(0x00000000, unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E, fVar2, iVar1, 45f);
									unk_0x27F3789FF35EEDF1(0x00000000, unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_1E, Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_21, iVar3, 60f, 0x00000001);
									unk_0x75ABDC5F81978924(iVar0);
									unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), iVar0);
									unk_0xF82EA857DA10E0CD(&iVar0);
									iLocal_813 = 0x00000001;
								}
							}
						}
						unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x00000018);
						unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x00000019);
					}
					break;
				
				case 0x00000006:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF && Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 0x00000018))
						{
							if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x0E763797, 0x00000001))
							{
								unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001), 0x00000005, 5f, 0x402C08AB, -1f, 1f, 0x00000001);
								iLocal_813 = 0x00000001;
								unk_0x5D96D8530B3D0904(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x00000018);
							}
						}
						else
						{
							if (!unk_0x8B38C0DAEEDB5F9C(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])))
							{
								if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0xB41F1A34, 0x00000001) || unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) != 0x00000005)
								{
									unk_0x0674E58A79778E99(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x00000018);
								}
							}
							func_7(iParam0, 0x00000001);
						}
					}
					break;
				
				case 0x00000007:
					if (Local_68.f_2[iParam0 /*23*/].f_3 != 0xFFFFFFFF && Local_68.f_2[iParam0 /*23*/].f_3 == unk_0x57270EE11514DC67())
					{
						iLocal_813 = 0x00000001;
						if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 0x00000003))
						{
							if (unk_0xFCCE56DAE67AA889(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 0x00000003))
							{
								unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
								if (unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
								{
									unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
									unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
						}
						else if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 0x00000003))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2, 0x00000019))
							{
								if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0xB41F1A34, 0x00000001) || unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) != 0x00000005)
								{
									func_115(iParam0, 0x00000001, 0x00000001);
									unk_0x27F3789FF35EEDF1(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000001), unk_0xD9522BA9E27E1349(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1)), 0x00000003, 60f, 0x00000000);
								}
								unk_0x5D96D8530B3D0904(&(Local_70[Local_68.f_2[iParam0 /*23*/].f_3 /*44*/].f_4.f_2), 0x00000019);
							}
						}
					}
					break;
				
				case 0x00000008:
					unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000);
					if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 0x00000003))
					{
						unk_0x3F423BF5B8125A50("ODDJOBS@TAXI@DRIVER");
						if (unk_0xB4AE0788C1587752("ODDJOBS@TAXI@DRIVER"))
						{
							unk_0xBC43ED9FE28DB191(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1));
							unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 0x00000003))
					{
						unk_0x8352CA08CF578D18(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0xB41F1A34, 0x00000001))
					{
						unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001), 0x00000008, 12f, 0x000C00A7, 400f, -1f, 0x00000000);
					}
					break;
				
				case 0x00000009:
				case 0x0000000A:
					func_7(iParam0, 0x00000000);
					if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 0x00000003))
					{
						unk_0x7720CBBC7DD82563(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 0x00000003))
					{
						unk_0x7720CBBC7DD82563(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 0x00000003))
					{
						unk_0x7720CBBC7DD82563(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
					}
					unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x000000FB, 0x00000000);
					unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000000);
					unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000);
					if (((!unk_0xE9FDA1035CFEA94F(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1)) && !func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x6BA30179, 0x00000001)) && !func_9(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0xF10822AA, 0x00000001)) && unk_0x8CB4A13C7BDA2B13(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/])) != 0x00000008)
					{
						if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x0000000A)
						{
							bVar5 = 0x00000001;
						}
						if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0xFFFFFFFF, 0x00000000) != unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1))
						{
							bVar5 = 0x00000001;
						}
						if (Local_68.f_2[iParam0 /*23*/].f_4 != 0xFFFFFFFF)
						{
							if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_4)))
							{
								iVar7 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_4)));
							}
						}
						if (!unk_0xC844350D5D58C99A(iVar7))
						{
							iVar7 = 0x00000000;
						}
						if (bVar5)
						{
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000002, 0x00000000);
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00010000, 0x00000001);
							if (unk_0xC844350D5D58C99A(iVar7))
							{
								unk_0xF3268524E9BE6D6E(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), iVar7, 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							}
							else
							{
								unk_0xEEB67C3D0A71A47B(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), vVar4, 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							}
						}
						else
						{
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00010000, 0x00000000);
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000002, 0x00000001);
							if (unk_0xC844350D5D58C99A(iVar7))
							{
								unk_0x89258193691A7600(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), iVar7, 0x00000008, 25f, 0x000C1024, 200f, 15f, 0x00000001);
							}
							else
							{
								unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), vVar4, 0x00000008, 25f, 0x000C1024, 200f, 15f, 0x00000001);
							}
						}
					}
					unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000001);
					break;
				
				case 0x0000000B:
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
					{
						unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000);
						func_28(&(Local_68.f_2[iParam0 /*23*/]));
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
					{
						unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x000000FB, 0x00000000);
						unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000000);
						func_28(&(Local_68.f_2[iParam0 /*23*/].f_1));
					}
					return;
					break;
				}
		}
		if (func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			fVar8 = unk_0x0EB28750412C3A5A(func_216(unk_0xD803B885F5E47A62()), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000001), 0x00000001);
			if (fVar8 < fLocal_826)
			{
				fLocal_826 = fVar8;
				iLocal_825 = iParam0;
			}
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_7 == 0x0000000B)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/]))
			{
				unk_0x490CE125A7B7CD42(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000);
				func_28(&(Local_68.f_2[iParam0 /*23*/]));
			}
		}
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/].f_1))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iParam0 /*23*/].f_1))
			{
				if (!func_15(Local_68.f_2[iParam0 /*23*/].f_1))
				{
					unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x000000FB, 0x00000000);
					unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1), 0x00000000);
				}
				func_28(&(Local_68.f_2[iParam0 /*23*/].f_1));
			}
		}
	}
}

int func_196(int iParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4, int iParam5)
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
	vector3 vVar22;
	float fVar23;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar5 = 0x00000000;
	bVar13 = 0x00000000;
	iVar14 = 0x00000001;
	if (!func_198(vParam1))
	{
		iVar14 = 0x00000009;
	}
	iVar15 = 0x00000001;
	iVar18 = *uParam4 + 2;
	iVar19 = 0x00000032;
	unk_0x10FEEAFF01E32639((vParam1.x - IntToFloat(iParam5)), (vParam1.y - IntToFloat(iParam5)), (vParam1.x + IntToFloat(iParam5)), (vParam1.y + IntToFloat(iParam5)));
	if (unk_0xD1B4D22E0BA9B0C8((vParam1.x - IntToFloat(iParam5)), (vParam1.y - IntToFloat(iParam5)), (vParam1.x + IntToFloat(iParam5)), (vParam1.y + IntToFloat(iParam5))))
	{
		while (!bVar13 && *uParam4 < iVar18)
		{
			if (vParam1.z == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x4A13F7D4B1E239A0(vParam1, *uParam4, &vVar22, &fVar23, &iVar6, iVar14, fVar0, fVar1))
			{
				iVar12 = unk_0xDEC4A70C9F250662(vVar22, 0x00000001, iVar14, 0x40400000, 0x00000000);
				if (unk_0x5DD62183BBF151CD(iVar12))
				{
					if (unk_0xC05DA9D35DAF88FD(vVar22, 1f, 0x00000001, &uVar4, &uVar3, &iVar8, &iVar7, &fVar10, iVar15))
					{
						if (fVar23 < 90f || fVar23 >= 270f)
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
									fVar9 = (4.5f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
								}
								else
								{
									fVar9 = (4.5f * SYSTEM::TO_FLOAT(iVar8));
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
									fVar9 = (4.5f * (SYSTEM::TO_FLOAT(iVar7) * 0.5f));
								}
								else
								{
									fVar9 = (4.5f * SYSTEM::TO_FLOAT(iVar7));
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
							if (unk_0x968116EE0D84C042(vVar22, &uVar21, &uVar20))
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
						fVar11 = (vParam1.z - vVar22.z);
						if (fVar11 < 0f)
						{
							fVar11 = (fVar11 * -1f);
						}
						if (func_197(vParam1, vVar22) || fVar11 < 0.5f)
						{
							vVar22 = { unk_0x8A5E176FF719A014(vVar22, fVar23, fVar9, 0f, 0f) };
							if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
							{
								iVar5 = *iParam0;
							}
							if (!unk_0x9868643FAC294133(vVar22, 3f, 3f, 3f, iVar5))
							{
								if (func_209(vVar22, &vVar22, &fVar23, 0x00000001) || func_199(vVar22, &vVar22, &fVar23, 0x00000001))
								{
								}
								bVar13 = 0x00000001;
							}
						}
					}
				}
			}
			*uParam4++;
			if (*uParam4 >= iVar19)
			{
				vVar22 = { vParam1 };
				bVar13 = 0x00000001;
			}
		}
	}
	if (bVar13)
	{
		*uParam2 = { vVar22 };
		*uParam3 = fVar23;
		vVar2 = { vParam1 - *uParam2 };
		vVar2.z = 0f;
		fLocal_80 = SYSTEM::VMAG(vVar2);
		if (fLocal_80 != 0f)
		{
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_197(vector3 vParam0, vector3 vParam1)
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
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 0x00000001;
	}
	fVar0 = SYSTEM::VDIST(vParam0, vParam1);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_85("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 0x00000001;
	}
	return 0x00000000;
}

int func_198(vector3 vParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA5A6BB5EBAD59A21(vParam0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x7F8A39872A07D2CE("SanAnd", sVar0) || unk_0x7F8A39872A07D2CE("Alamo", sVar0)) || unk_0x7F8A39872A07D2CE("ArmyB", sVar0)) || unk_0x7F8A39872A07D2CE("BhamCa", sVar0)) || unk_0x7F8A39872A07D2CE("Baytre", sVar0)) || unk_0x7F8A39872A07D2CE("BradT", sVar0)) || unk_0x7F8A39872A07D2CE("BradP", sVar0)) || unk_0x7F8A39872A07D2CE("CANNY", sVar0)) || unk_0x7F8A39872A07D2CE("CCreak", sVar0)) || unk_0x7F8A39872A07D2CE("ChamH", sVar0)) || unk_0x7F8A39872A07D2CE("CHU", sVar0)) || unk_0x7F8A39872A07D2CE("COSI", sVar0)) || unk_0x7F8A39872A07D2CE("CMSW", sVar0)) || unk_0x7F8A39872A07D2CE("Cypre", sVar0)) || unk_0x7F8A39872A07D2CE("Desrt", sVar0)) || unk_0x7F8A39872A07D2CE("ELGorl", sVar0)) || unk_0x7F8A39872A07D2CE("Galli", sVar0)) || unk_0x7F8A39872A07D2CE("Galfish", sVar0)) || unk_0x7F8A39872A07D2CE("Harmo", sVar0)) || unk_0x7F8A39872A07D2CE("HumLab", sVar0)) || unk_0x7F8A39872A07D2CE("Jail", sVar0)) || unk_0x7F8A39872A07D2CE("LAct", sVar0)) || unk_0x7F8A39872A07D2CE("LDam", sVar0)) || unk_0x7F8A39872A07D2CE("Lago", sVar0)) || unk_0x7F8A39872A07D2CE("MTChil", sVar0)) || unk_0x7F8A39872A07D2CE("MTJose", sVar0)) || unk_0x7F8A39872A07D2CE("MTGordo", sVar0)) || unk_0x7F8A39872A07D2CE("NCHU", sVar0)) || unk_0x7F8A39872A07D2CE("Oceana", sVar0)) || unk_0x7F8A39872A07D2CE("Palmpow", sVar0)) || unk_0x7F8A39872A07D2CE("PBluff", sVar0)) || unk_0x7F8A39872A07D2CE("Paleto", sVar0)) || unk_0x7F8A39872A07D2CE("PalCov", sVar0)) || unk_0x7F8A39872A07D2CE("PalFor", sVar0)) || unk_0x7F8A39872A07D2CE("PalHigh", sVar0)) || unk_0x7F8A39872A07D2CE("RTRAK", sVar0)) || unk_0x7F8A39872A07D2CE("Rancho", sVar0)) || unk_0x7F8A39872A07D2CE("SANDY", sVar0)) || unk_0x7F8A39872A07D2CE("TongvaH", sVar0)) || unk_0x7F8A39872A07D2CE("TongvaV", sVar0)) || unk_0x7F8A39872A07D2CE("Zenora", sVar0)) || unk_0x7F8A39872A07D2CE("Slab", sVar0)) || unk_0x7F8A39872A07D2CE("WindF", sVar0)) || unk_0x7F8A39872A07D2CE("Zancudo", sVar0)) || unk_0x7F8A39872A07D2CE("SanChia", sVar0)) || unk_0x7F8A39872A07D2CE("zQ_UAR", sVar0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_199(vector3 vParam0, var uParam1, float fParam2, int iParam3)
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
	
	if (func_208(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261.58f, -3332.685f, 5.4191f };
		*fParam2 = 163.87f;
		return 0x00000001;
	}
	else if (func_208(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577.16f, 5166.51f, 19.1864f };
		*fParam2 = 0f;
		return 0x00000001;
	}
	else if (func_208(vParam0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam1 = { -856.6151f, 163.7361f, 65.093f };
		*fParam2 = 355.3355f;
		return 0x00000001;
	}
	else if (func_208(vParam0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam1 = { -15.5181f, -1456.4f, 29.4244f };
		*fParam2 = 94.6893f;
		return 0x00000001;
	}
	else if (func_208(vParam0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
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
	if (func_205(0x00000003, vVar1))
	{
		if (func_204(vVar1, 0x00000003, 0x00000000, 0x00000000))
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
		if (func_203(vVar1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
			*fParam2 = 275.4274f;
			return 0x00000001;
		}
		if (func_203(vVar1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam1 = { 1334.386f, -1709.762f, 55.70131f };
			*fParam2 = 275.4411f;
			return 0x00000001;
		}
		if (func_203(vVar1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam1 = { 1246.166f, -1750.625f, 45.35691f };
			*fParam2 = 301.2981f;
			return 0x00000001;
		}
		if (func_203(vVar1, 1196.272f, -1753.051f, 37.63976f, 32f))
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
	if (func_203(vVar1, -1693.302f, -1109.13f, 17.89778f, 240f))
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
	if (!func_201())
	{
		vVar1 = { vParam0 };
		if (vParam0.z == 1f)
		{
			vVar1.z = 36.1141f;
		}
		if (func_205(0x00000007, vVar1))
		{
			if (func_204(vVar1, 0x00000007, 0x00000000, 0x00000000))
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
	if (func_205(0x00000002, vVar1))
	{
		if (func_204(vVar1, 0x00000002, 0x00000000, 0x00000000))
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
	fVar9 = func_200(vParam0, vVar7);
	vVar10 = { 2450.604f, 5129.224f, 45.9722f };
	fVar11 = 241.1957f;
	fVar12 = func_200(vParam0, vVar10);
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
	if (func_12(vVar1, -99.68751f, -2448.891f, 5.01731f, 230f))
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

float func_200(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return SYSTEM::VDIST2(Param0, Param0.f_1, 0f, Param2, Param2.f_1, 0f);
}

int func_201()
{
	int iVar0;
	
	iVar0 = func_129();
	if (iVar0 == 0x00000000)
	{
		if (func_202(0x00000041))
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
		if (func_202(0x00000042))
		{
			return 0x00000001;
		}
	}
	else if (iVar0 == 0x00000002)
	{
		if (func_202(0x00000041))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_202(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

bool func_203(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	
	vVar0 = { vParam1 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam2 * fParam2);
}

int func_204(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_205(int iParam0, vector3 vParam1)
{
	return SYSTEM::VDIST2(vParam1, func_207(iParam0)) < func_206(iParam0);
}

float func_206(int iParam0)
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

Vector3 func_207(int iParam0)
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

int func_208(vector3 vParam0, vector3 vParam1, vector3 vParam2)
{
	if (((((vParam0.x > vParam1.x && vParam0.x < vParam2.x) && vParam0.y > vParam1.y) && vParam0.y < vParam2.y) && vParam0.z > vParam1.z) && vParam0.z < vParam2.z)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_209(vector3 vParam0, var uParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar0.z = 28f;
	}
	if (unk_0x0399732A9EBC368E(vVar0, 400.9871f, -1659.756f, 26.91615f, 437.6566f, -1617.479f, 48.34185f, 45f, 0x00000000, 0x00000001))
	{
		if (iParam3 < 0x00000004)
		{
			*uParam1 = { 413.7399f, -1608.911f, 28.161f };
			*fParam2 = 238.2568f;
		}
		else
		{
			*uParam1 = { 416.8107f, -1666.514f, 28.1758f };
			*fParam2 = 144.8478f;
		}
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vVar0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0x00000000, 0x00000001))
	{
		if (iParam3 < 0x00000004)
		{
			*uParam1 = { -1094.492f, -2662.27f, 12.6066f };
			*fParam2 = 196.0365f;
		}
		else
		{
			*uParam1 = { -1076.736f, -2684.039f, 12.807f };
			*fParam2 = 211.7278f;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_210(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	
	iVar4 = 0x00000001;
	if (!func_198(vParam1))
	{
		iVar4 = 0x00000009;
	}
	iVar3 = unk_0xDEC4A70C9F250662(vParam1, 0x00000001, iVar4, 0x40400000, 0x00000000);
	if (unk_0x5DD62183BBF151CD(iVar3))
	{
		unk_0x8502D8EBA9E78216(iVar3, &vVar0);
		if (unk_0x48C17E97DDC41CBC(vVar0, 0x00000000, &vVar1) && unk_0x48C17E97DDC41CBC(vVar0, 0x00000001, &vVar2))
		{
			vVar5 = { vVar1 - vVar0 };
			vVar6 = { -vVar5.y, vVar5.x, 0f };
			vVar7 = { vParam0 - vParam1 };
			fVar8 = func_212(vVar6, vVar7);
			if (fVar8 < 0f)
			{
				*uParam3 = { vVar1 };
				*uParam4 = uParam2;
				return 0x00000001;
			}
			else
			{
				*uParam3 = { vVar2 };
				*uParam4 = (*uParam4 + 180f);
				*uParam4 = func_211(*uParam4, 0f, 360f);
				return 0x00000001;
			}
		}
		else if (unk_0x48C17E97DDC41CBC(vVar0, 0xFFFFFFFF, &vVar1))
		{
			*uParam3 = { vVar1 };
			*uParam4 = uParam2;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_211(float fParam0, float fParam1, float fParam2)
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

float func_212(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_213(int iParam0, vector3 vParam1, var uParam2, float fParam3, var uParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0x00000000;
	iVar6 = *uParam4 + 2;
	iVar7 = 0x00000032;
	bVar8 = 0x00000000;
	iVar9 = 0x00000001;
	if (!func_198(vParam1))
	{
		iVar9 = 0x00000009;
	}
	func_215(vParam1, vParam1, &(Local_68.f_2[iParam0 /*23*/].f_C), &(Local_68.f_2[iParam0 /*23*/].f_F), iParam5);
	if (func_214(Local_68.f_2[iParam0 /*23*/].f_C, Local_68.f_2[iParam0 /*23*/].f_F))
	{
		if (!func_209(vParam1, uParam2, fParam3, 0x00000001) && !func_199(vParam1, uParam2, fParam3, 0x00000001))
		{
			while (!bVar8 && *uParam4 < iVar6)
			{
				if (vParam1.z == 1f)
				{
					fVar0 = 0f;
				}
				if (unk_0x4A13F7D4B1E239A0(vParam1, *uParam4, uParam2, fParam3, &uVar4, iVar9, fVar0, fVar1))
				{
					iVar5 = unk_0xDEC4A70C9F250662(*uParam2, 0x00000001, iVar9, 0x40400000, 0x00000000);
					if (unk_0x5DD62183BBF151CD(iVar5))
					{
						fVar2 = (vParam1.z - uParam2->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_197(vParam1, *uParam2) || fVar2 < 0.5f)
						{
							if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000))
							{
								iVar3 = unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]);
							}
							if (!unk_0x9868643FAC294133(*uParam2, 3f, 3f, 3f, iVar3))
							{
								bVar8 = 0x00000001;
							}
						}
					}
				}
				*uParam4++;
				if (*uParam4 >= iVar7)
				{
					bVar8 = 0x00000001;
				}
			}
		}
		else
		{
			bVar8 = 0x00000001;
		}
		if (bVar8)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_214(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	if (unk_0xD1B4D22E0BA9B0C8(Param0, Param0.f_1, Param2, Param2.f_1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_215(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)
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
	if (!func_95(vVar0, *uParam4, 0x3F000000, 0x00000000) || !func_95(vVar0, *uParam4, 0x3F000000, 0x00000000))
	{
		*uParam4 = { vVar0 };
		*uParam5 = { vVar1 };
	}
	unk_0x10FEEAFF01E32639(*uParam4, uParam4->f_1, *uParam5, uParam5->f_1);
}

Vector3 func_216(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_217(int iParam0)
{
	if (Local_68.f_2[iParam0 /*23*/].f_16 != 0x00000000 && !unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000006))
	{
		func_116(Local_68.f_2[iParam0 /*23*/].f_16, iParam0);
		unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000006);
	}
}

int func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = unk_0x1B50683925F00106(Local_68.f_2[iParam0 /*23*/].f_1);
	iVar1 = unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]);
	vVar3 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_68.f_2[iParam0 /*23*/]), 0x00000000) };
	if (unk_0xE9FDA1035CFEA94F(iVar0))
	{
		return 0x00000001;
	}
	if (unk_0x4734A6196B611C3B(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	if (((unk_0x7B5606C651AB51B5(iVar1, 0x00000002, 0x00007530) || unk_0x7B5606C651AB51B5(iVar1, 0x00000003, 0x00007530)) || unk_0x7B5606C651AB51B5(iVar1, 0x00000000, 0x00001B58)) || unk_0x7B5606C651AB51B5(iVar1, 0x00000001, 0x00001B58))
	{
		return 0x00000001;
	}
	else if (unk_0xD3DCEC81D13AAFB1(vVar3, 7f, 0x00000000))
	{
		if (unk_0xD3DCEC81D13AAFB1(vVar3, 7f, 0x00000001))
		{
			func_219(unk_0x57270EE11514DC67(), 0x00000001, 0x00000025);
		}
		return 0x00000001;
	}
	else
	{
		fVar4 = 15f;
		vVar5 = { vVar3 };
		vVar6 = { vVar5 };
		vVar5.x = (vVar5.x - fVar4);
		vVar5.y = (vVar5.y - fVar4);
		vVar5.z = (vVar5.z - fVar4);
		vVar6.x = (vVar6.x + fVar4);
		vVar6.y = (vVar6.y + fVar4);
		vVar6.z = (vVar6.z + fVar4);
		if (unk_0x723EE7F83DF1497D(vVar5, vVar6, 0x00000000))
		{
			if (unk_0x723EE7F83DF1497D(vVar5, vVar6, 0x00000001))
			{
				func_219(unk_0x57270EE11514DC67(), 0x00000001, 0x00000025);
			}
			return 0x00000001;
		}
	}
	if (unk_0x81A93C8315C28F58(unk_0xFB04705FDFDCE640()))
	{
		iVar2 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xFB04705FDFDCE640()));
		if (!unk_0xEB6A8945D1AC98A1(iVar2))
		{
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0xB87D13D0C064E9D1(iVar1, iVar2, 0x00000001))
				{
					func_219(unk_0x57270EE11514DC67(), 0x00000001, 0x00000025);
					return 0x00000001;
				}
			}
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0xB87D13D0C064E9D1(iVar0, iVar2, 0x00000001))
				{
					func_219(unk_0x57270EE11514DC67(), 0x00000001, 0x00000025);
					return 0x00000001;
				}
			}
		}
	}
	if (Local_68.f_2[iParam0 /*23*/].f_3 == 0xFFFFFFFF && Local_68.f_2[iParam0 /*23*/].f_7 == 0x00000003)
	{
	}
	return 0x00000000;
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0xFFFFFFFF && unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iParam0)))
	{
		if (func_10(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iParam0)), 0x00000001, 0x00000001))
		{
			unk_0x2956AF9855DAF065(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iParam0)), iParam2, unk_0xBC64C2447446D57B(iParam1));
		}
	}
}

void func_220()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000013))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000010) && !unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000011))
		{
			if (!func_52(0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000011);
				func_39(0x00000001, 0x00000000, 0x00000000);
				unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000012);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x0000000F) && !unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000010))
		{
			if (func_52(0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000010);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x0000000F))
		{
			func_20(&uLocal_828, 0x00000007, 0x00000000, "TaxiDispatch", 0x00000000, 0x00000001);
			if (func_221(&uLocal_828, 0x00000083, "MPTXIAU", "MPTXI_E1", 0x00000000, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x0000000F);
			}
		}
	}
}

int func_221(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_300())
	{
		return 0x00000000;
	}
	if (func_299())
	{
		return 0x00000000;
	}
	sVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iVar2 = 0xFFFFFF9D;
	return func_222(uParam0, iParam1, sParam2, sParam3, 0x00000001, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, 0xFFFFFFFF);
}

int func_222(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_298(sParam2, sParam3);
	iVar2 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_297(iVar0, iVar1, iVar2))
	{
		return 0x00000001;
	}
	if (!func_292(iParam6))
	{
		return 0x00000000;
	}
	if (func_289(iVar0, iVar1, iVar2))
	{
		if (func_288())
		{
			return 0x00000000;
		}
		func_287();
		return func_229(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_228(iParam4))
	{
		return 0x00000000;
	}
	func_223(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0x00000000;
}

void func_223(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_14E99F.f_28.f_1 = iParam0;
	Global_14E99F.f_28.f_2 = iParam1;
	Global_14E99F.f_28.f_3 = iParam2;
	StringCopy(&(Global_14E99F.f_28.f_4), sParam3, 16);
	Global_14E99F.f_28.f_8 = iParam4;
	Global_14E99F.f_28.f_9 = iParam5;
	Global_14E99F.f_28.f_E = iParam6;
	func_224(iParam4);
	func_287();
	Global_14E99F.f_28.f_D = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x00001B58);
}

void func_224(int iParam0)
{
	if (func_227(iParam0))
	{
		func_226();
		return;
	}
	func_225();
}

void func_225()
{
	Global_14E99F.f_28.f_A = 0x00000000;
}

void func_226()
{
	Global_14E99F.f_28.f_A = 0x00000001;
}

int func_227(int iParam0)
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

bool func_228(int iParam0)
{
	return iParam0 > Global_14E99F.f_28.f_8;
}

int func_229(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_286();
	if (iParam6 == 0x00000005)
	{
		iParam6 = 0x00000000;
	}
	if (iParam5 == 0x00000008)
	{
		return func_283(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 0x00000004)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_280(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 0x00000001 || iParam5 == 0x00000007)
	{
		if (iParam6 == 0x00000002)
		{
			return func_283(uParam0, sParam3, sParam4);
		}
		return func_272(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 0x00000005)
	{
		return func_271(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000002)
	{
		return func_259(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000003)
	{
		return func_258(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000006)
	{
		return func_230(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0x00000000;
}

int func_230(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_257();
	bVar0 = 0x00000001;
	if (func_232(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_231(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_231(int iParam0)
{
	Global_14E99F.f_28.f_B = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_14E99F.f_28.f_C = 0x00000001;
}

int func_232(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_123();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_251(iVar0);
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
	sVar4 = func_250(sParam5, bParam6, &iVar3);
	uVar5 = func_248(iParam7, &iVar3);
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
		bVar12 = func_247(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_236(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_235();
	}
	func_257();
	func_234();
	func_233();
	return 0x00000001;
}

void func_233()
{
	Global_14E99F.f_39 = 0x00000000;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_234()
{
	Global_14E99F.f_28 = 0x00000003;
}

void func_235()
{
	unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000008);
}

int func_236(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_237(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
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

int func_237(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_128();
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
	if (func_246() == 0x00000000)
	{
		func_244();
		return 0x00000000;
	}
	func_243(Global_4126B5);
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
	func_128();
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
				func_242(0x00000000);
				break;
			
			case 0x00000001:
				func_242(0x00000001);
				break;
			
			case 0x00000002:
				func_242(0x00000002);
				break;
			
			case 0x00000003:
				func_242(0x00000003);
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
		func_128();
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
			if (!func_77())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_241(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_239(0x00000001);
			func_241(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_238(uParam0, sParam1);
	return 0x00000001;
}

void func_238(var uParam0, char* sParam1)
{
	if (!func_120())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0xB9A1844D, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

void func_239(int iParam0)
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
		if (func_135(0x0000000E))
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
								func_61(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_240(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
								func_240(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_240(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_240(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_240(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_61(&(Global_1CC3[iVar1 /*15*/]));
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
								func_61(&(Global_1CC3[iVar1 /*15*/]));
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
								func_61(&(Global_1CC3[iVar1 /*15*/]));
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
								func_61(&(Global_1CC3[iVar1 /*15*/]));
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
								func_61(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_240(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_240(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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

void func_240(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
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
		func_61(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_61(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_61(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_61(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_61(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_241(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
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

void func_242(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_243(int iParam0)
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

void func_244()
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
		if (!func_245(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
		{
			Global_4126B5 = iVar2;
		}
		iVar2++;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_18 = 0x00000001;
}

int func_245(struct<6> Param0, struct<6> Param1)
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

int func_246()
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
			if (!func_245(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
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

int func_247(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_237(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
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

int func_248(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFF9D)
	{
		return 0xFFFFFF9D;
	}
	func_249(0x00000002, iParam1);
	return iParam0;
}

void func_249(int iParam0, var uParam1)
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

char* func_250(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_249(0x00000001, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = func_254(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_252(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_252(int iParam0, bool bParam1)
{
	if (!func_10(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_254(iParam0) != 0xFFFFFFFF)
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
	if (func_253(iParam0))
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

int func_253(int iParam0)
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

int func_254(int iParam0)
{
	int iVar0;
	
	if (!func_10(iParam0, 0x00000000, 0x00000001))
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
			func_255(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_255(int iParam0)
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
	func_256(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_256(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_123();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_257()
{
	Global_14E99F.f_28.f_9 = 0x00000004;
}

int func_258(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_257();
	bVar0 = 0x00000000;
	return func_232(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_259(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	return func_260(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_260(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_123();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_251(iVar0);
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
	sVar4 = func_250(sParam5, bParam6, &iVar3);
	uVar5 = func_248(iParam7, &iVar3);
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
		bVar12 = func_270(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_262(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_235();
	}
	func_261();
	func_234();
	func_233();
	return 0x00000001;
}

void func_261()
{
	Global_14E99F.f_28.f_9 = 0x00000003;
}

int func_262(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_264(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			Global_1F1E[0x00000003 /*6*/] = { func_263(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<4> func_263(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_264(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_128();
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
	if (func_269() == 0x00000000)
	{
		func_267();
		return 0x00000000;
	}
	func_266(Global_5570);
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
		func_242(0x00000000);
		func_242(0x00000002);
		func_242(0x00000001);
	}
	else
	{
		func_128();
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
					func_242(0x00000000);
					Global_1F7E = 0x00000000;
					break;
				
				case 0x00000001:
					func_242(0x00000001);
					Global_1F7E = 0x00000001;
					break;
				
				case 0x00000002:
					func_242(0x00000002);
					Global_1F7E = 0x00000002;
					break;
				
				case 0x00000003:
					func_242(0x00000003);
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
		func_128();
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
			if (!func_77())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_241(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_239(0x00000001);
			func_241(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_265(uParam0, sParam1);
	return 0x00000001;
}

void func_265(var uParam0, char* sParam1)
{
	if (!func_120())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0x629E0CB1, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

void func_266(int iParam0)
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

void func_267()
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
		if (!func_268(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 0x00000001;
}

int func_268(struct<6> Param0, struct<6> Param1)
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

int func_269()
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
			if (!func_268(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
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

int func_270(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_264(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			Global_1F1E[0x00000003 /*6*/] = { func_263(iParam0) };
			Global_1F6B = iParam0;
			StringCopy(&Global_1F6C, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_271(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	func_261();
	bVar0 = 0x00000001;
	if (func_260(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_231(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_272(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
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
		bVar0 = func_279(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	else
	{
		bVar0 = func_278(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000003))
		{
			func_277(0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000005))
		{
			func_276(0x00000001);
		}
		func_275();
		func_234();
		func_274();
		func_273();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_273()
{
	Global_26DB8C = 0x00000000;
}

void func_274()
{
	Global_14E99F.f_39 = 0x00000001;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_275()
{
	Global_14E99F.f_28.f_9 = 0x00000001;
}

void func_276(int iParam0)
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

void func_277(int iParam0)
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

int func_278(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_138(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
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
	return func_118(sParam3, iParam4, bParam7);
}

int func_279(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_138(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
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
	return func_118(sParam3, iParam4, bParam7);
}

int func_280(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (func_282(uParam0, iParam1, sParam2, sParam3, 0x00000009, sParam4, 0x00000000, 0x00000000, 0x00000001))
	{
		func_281();
		func_275();
		func_234();
		func_274();
		func_273();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_281()
{
	Global_553F = 0x00000000;
}

bool func_282(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_138(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
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
	return func_118(sParam3, iParam4, bParam8);
}

int func_283(var uParam0, char* sParam1, char* sParam2)
{
	if (func_285(uParam0, sParam1, sParam2, 0x0000000C, 0x00000000, 0x00000000, 0x00000000))
	{
		func_284();
		func_234();
		func_274();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_284()
{
	Global_14E99F.f_28.f_9 = 0x00000002;
}

bool func_285(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_118(sParam2, iParam3, 0x00000000);
}

void func_286()
{
	Global_14E99F.f_37 = Global_14E99F.f_28.f_1;
	Global_14E99F.f_37.f_1 = Global_14E99F.f_28.f_A;
}

void func_287()
{
	Global_14E99F.f_28 = 0x00000001;
}

bool func_288()
{
	return Global_14E99F.f_28 == 0x00000001;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam0))
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

int func_290(int iParam0)
{
	if (!func_291())
	{
		return 0x00000000;
	}
	if (!Global_14E99F.f_28.f_1 == iParam0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_291()
{
	if (Global_14E99F.f_28 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_292(int iParam0)
{
	if (func_296())
	{
		return 0x00000000;
	}
	if (func_295())
	{
		return 0x00000000;
	}
	if (func_52(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_1406D3.f_12 != 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_195C36 || func_294())
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 0x00000006))
	{
		if (func_293())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_293()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_152CC2);
}

int func_294()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_295()
{
	return Global_14E99F.f_28 == 0x00000003;
}

bool func_296()
{
	return func_126();
}

int func_297(int iParam0, int iParam1, int iParam2)
{
	if (!func_295())
	{
		return 0x00000000;
	}
	return func_289(iParam0, iParam1, iParam2);
}

int func_298(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

bool func_299()
{
	return Global_26D039.f_1;
}

int func_300()
{
	if (Global_14EA5B.f_2)
	{
		return 0x00000001;
	}
	return func_301();
}

bool func_301()
{
	return func_296();
}

void func_302(int iParam0)
{
	if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iParam0 /*23*/]))
	{
		if (Local_68.f_2[iParam0 /*23*/].f_2 == unk_0x57270EE11514DC67())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000012))
			{
				if (func_26(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_15))
				{
					if (!func_87(&uLocal_76, 0x00007530, 0x00000000))
					{
						if (func_303(iParam0, 0x42200000))
						{
							Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1A = { 0f, 0f, 0f };
							Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_1D = 0f;
							func_32(&uLocal_76);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2, 0x00000013))
					{
						unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_2), 0x00000013);
					}
				}
			}
		}
	}
}

int func_303(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	if (func_10(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2)), 0x00000001, 0x00000001))
	{
		unk_0x523BCC9DC80CD82F(Global_26B66F.f_31C);
		unk_0x523BCC9DC80CD82F(Global_26B66F.f_31D);
		if (unk_0xB87F6CF6E5628C67(Global_26B66F.f_31C))
		{
			if (unk_0xB87F6CF6E5628C67(Global_26B66F.f_31D))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_68.f_2[iParam0 /*23*/].f_2))), 0x00000001) };
				if (!func_322(vVar1))
				{
					if (func_198(vVar1))
					{
						if (Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_19 < 0x00000002)
						{
							iVar3 = 0x00000000;
						}
						else if (Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_19 < 0x00000005)
						{
							iVar3 = 0x00000009;
						}
						else
						{
							iVar3 = 0x00000001;
						}
					}
					else if (Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_19 < 0x00000005)
					{
						iVar3 = 0x00000008;
					}
					else
					{
						iVar3 = 0x00000009;
					}
					if (Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22 == 0xFFFFFFFF)
					{
						Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22 = 0x00000000;
					}
					if (func_318(vVar1, &vVar0, &uVar2, &(Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22), iVar3, fParam1))
					{
						Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_15 = { vVar0 };
						Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_18 = uVar2;
						Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_19 = 0x00000000;
						Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22 = 0xFFFFFFFF;
						return 0x00000001;
					}
					else if (Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22 >= 0x00000005)
					{
						Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_19++;
						Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22 = 0x00000000;
					}
				}
				else if (func_304(vVar1, &vVar0, &uVar2))
				{
					Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_15 = { vVar0 };
					Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_18 = uVar2;
					Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_19 = 0x00000000;
					Local_70[Local_68.f_2[iParam0 /*23*/].f_2 /*44*/].f_4.f_22 = 0xFFFFFFFF;
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_304(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x0399732A9EBC368E(vParam0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0x00000000, 0x00000001))
	{
		iVar1 = 0x00000005;
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					vVar2 = { -988.9172f, -2428.579f, 19.0608f };
					fVar3 = 148.3473f;
					break;
				
				case 0x00000001:
					vVar2 = { -968.0948f, -2392.327f, 19.056f };
					fVar3 = 150.0203f;
					break;
				
				case 0x00000002:
					vVar2 = { -946.4792f, -2419.659f, 19.0562f };
					fVar3 = 91.6004f;
					break;
				
				case 0x00000003:
					vVar2 = { -899.0128f, -2432.842f, 19.0847f };
					fVar3 = 58.9819f;
					break;
				
				case 0x00000004:
					vVar2 = { -890.7079f, -2272.402f, 18.2077f };
					fVar3 = 135.9921f;
					break;
			}
			if (func_305(vVar2, 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				*uParam1 = { vVar2 };
				*uParam2 = fVar3;
				return 0x00000001;
			}
			iVar0++;
		}
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0x00000000, 0x00000001))
	{
		iVar1 = 0x00000005;
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					vVar2 = { -996.2861f, -2449.917f, 12.6953f };
					fVar3 = 148.5654f;
					break;
				
				case 0x00000001:
					vVar2 = { -1006.094f, -2421.448f, 12.9447f };
					fVar3 = 237.9966f;
					break;
				
				case 0x00000002:
					vVar2 = { -948.7274f, -2403.462f, 12.7341f };
					fVar3 = 111.3975f;
					break;
				
				case 0x00000003:
					vVar2 = { -895.4352f, -2364.867f, 13.4802f };
					fVar3 = 142.0129f;
					break;
				
				case 0x00000004:
					vVar2 = { -906.6598f, -2419.59f, 12.6381f };
					fVar3 = 78.0133f;
					break;
			}
			if (func_305(vVar2, 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				*uParam1 = { vVar2 };
				*uParam2 = fVar3;
				return 0x00000001;
			}
			iVar0++;
		}
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0x00000000, 0x00000001))
	{
		iVar1 = 0x00000005;
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					vVar2 = { -1084.003f, -2690.473f, 19.0585f };
					fVar3 = 213.4924f;
					break;
				
				case 0x00000001:
					vVar2 = { -1087.542f, -2660.057f, 19.0615f };
					fVar3 = 191.5389f;
					break;
				
				case 0x00000002:
					vVar2 = { -1083.4f, -2612.184f, 19.0622f };
					fVar3 = 153.7453f;
					break;
				
				case 0x00000003:
					vVar2 = { -1059.893f, -2570.656f, 19.061f };
					fVar3 = 150.5092f;
					break;
				
				case 0x00000004:
					vVar2 = { -1038.387f, -2533.845f, 19.0498f };
					fVar3 = 150.637f;
					break;
			}
			if (func_305(vVar2, 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				*uParam1 = { vVar2 };
				*uParam2 = fVar3;
				return 0x00000001;
			}
			iVar0++;
		}
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0x00000000, 0x00000001))
	{
		iVar1 = 0x00000005;
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					vVar2 = { -1076.408f, -2693.846f, 12.6509f };
					fVar3 = 221.0395f;
					break;
				
				case 0x00000001:
					vVar2 = { -1121.422f, -2703.146f, 12.9444f };
					fVar3 = 326.1454f;
					break;
				
				case 0x00000002:
					vVar2 = { -1095.97f, -2644.177f, 12.6382f };
					fVar3 = 182.0544f;
					break;
				
				case 0x00000003:
					vVar2 = { -1084.046f, -2601.412f, 12.6823f };
					fVar3 = 153.5335f;
					break;
				
				case 0x00000004:
					vVar2 = { -1049.575f, -2589.945f, 12.6066f };
					fVar3 = 135.7366f;
					break;
			}
			if (func_305(vVar2, 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				*uParam1 = { vVar2 };
				*uParam2 = fVar3;
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_305(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_312(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_306(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_306(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_310(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
		if (func_10(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_308(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_307(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
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
								if (unk_0x0EB28750412C3A5A(func_310(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_310(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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

int func_307(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_308(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_309(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_309(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_170();
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

Vector3 func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_311() && Global_184507[iVar0 /*876*/].f_34F) && !func_26(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_216(iParam0);
}

var func_311()
{
	return Global_2564C8.f_11;
}

int func_312(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_10(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_307(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_313(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_216(iVar1), vParam0, 0x00000001) < fParam1)
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

int func_313(int iParam0)
{
	if (func_317(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_316(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_314(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_314(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_315(iParam0);
	if (!iVar0 == func_123())
	{
		if (iVar0 == func_315(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_315(int iParam0)
{
	if (iParam0 != func_123())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_123();
}

struct<13> func_316(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_317(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_316(iParam0) };
		Global_26594F = { func_316(iParam1) };
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

int func_318(vector3 vParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	
	fVar3 = 0f;
	bVar5 = 0x00000001;
	if (iParam4 == 0x00000000)
	{
		bVar5 = 0x00000000;
	}
	bVar6 = 0x00000000;
	iVar7 = 0x00000000;
	fVar8 = 100f;
	fVar9 = 2.5f;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x4A13F7D4B1E239A0(vParam0, *uParam3, &vVar0, &fVar3, &uVar4, iParam4, fVar8, fVar9))
		{
			if (SYSTEM::VDIST2(vParam0, vVar0) <= (50f * 50f))
			{
				while (!bVar6 && iVar7 < 0x00000005)
				{
					if (unk_0x8F91E660145F47FF(&vVar0, &vVar1, &vVar2, 0f, 180f, fParam5, bVar5, 0x00000001, 0x00000000))
					{
						fVar3 = func_321(0f, 0f, 0f, vVar2, 0x00000001);
						if (func_319(vParam0, vVar1, 120f, fParam5))
						{
							if (func_305(*uParam1, 5f, 2f, 1f, 6f, 0x00000001, 0x00000001, 0x00000001, 120f, 0x00000000, 0xFFFFFFFF, 0x00000001, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								bVar6 = 0x00000001;
								vVar10 = { unk_0x8A5E176FF719A014(vVar1, fVar3, 0f, 1f, 0f) };
								vVar11 = { vVar10 - vVar1 };
								vVar12 = { vVar0 - vVar1 };
								if (unk_0x07AB02F3C4AE2B04(vVar11.x, vVar11.y, vVar12.x, vVar12.y) > 60f)
								{
									fVar3 = (fVar3 + 180f);
									fVar3 = func_211(fVar3, 0f, 360f);
								}
								*uParam1 = { vVar1 };
								*uParam2 = fVar3;
								return 0x00000001;
							}
							else
							{
								iVar7++;
							}
						}
						else
						{
							iVar7++;
						}
					}
					else
					{
						iVar7++;
					}
				}
			}
			*uParam3++;
		}
		else
		{
			*uParam3++;
		}
	}
	return 0x00000000;
}

int func_319(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(vParam0, vParam1);
	if (fVar0 >= (fParam2 * fParam2))
	{
		return 0x00000000;
	}
	if (fVar0 <= (fParam3 * fParam3))
	{
		return 0x00000000;
	}
	if (unk_0x8E28E832BEAC3DCE(vParam1, 2.5f))
	{
		return 0x00000000;
	}
	if (unk_0x9868643FAC294133(vParam1, 3f, 3f, 3f, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_320(vParam1, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_320(vector3 vParam0, bool bParam1)
{
	if (func_12(vParam0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_204(vParam0, 0x00000001, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (func_205(0x00000002, vParam0))
	{
		if (func_204(vParam0, 0x00000002, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_205(0x00000003, vParam0))
	{
		if (func_204(vParam0, 0x00000003, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_205(0x00000004, vParam0))
	{
		if (func_204(vParam0, 0x00000004, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_205(0x00000005, vParam0))
	{
		if (func_204(vParam0, 0x00000005, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_205(0x00000006, vParam0))
	{
		if (func_204(vParam0, 0x00000006, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (!func_201())
	{
		if (func_205(0x00000007, vParam0))
		{
			if (func_204(vParam0, 0x00000007, 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	if (func_205(0x00000008, vParam0))
	{
		if (func_204(vParam0, 0x00000008, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (unk_0x0399732A9EBC368E(vParam0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vParam0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vParam0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vParam0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (((unk_0x0399732A9EBC368E(vParam0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (func_12(vParam0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x0399732A9EBC368E(vParam0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (!bParam1)
	{
		if (unk_0x0399732A9EBC368E(vParam0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_321(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
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

int func_322(vector3 vParam0)
{
	if (unk_0x0399732A9EBC368E(vParam0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, -1116.893f, -2675.671f, 12.17757f, -1183.933f, -2789.451f, 38.95185f, 53f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_323()
{
	int iVar0;
	
	if (unk_0x81A93C8315C28F58(unk_0xFB04705FDFDCE640()))
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000008)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3, iVar0))
			{
				if ((Local_68.f_2[iVar0 /*23*/].f_7 == 0x0000000B || Local_68.f_2[iVar0 /*23*/].f_7 == 0x00000009) || Local_68.f_2[iVar0 /*23*/].f_7 == 0x0000000A)
				{
					unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iVar0);
				}
				else if (!unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					unk_0x0674E58A79778E99(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_3), iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_324()
{
	int iVar0;
	
	if (unk_0x81A93C8315C28F58(unk_0xFB04705FDFDCE640()))
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000008)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_3 != 0xFFFFFFFF)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 != unk_0x57270EE11514DC67())
				{
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 0x00000001);
						}
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 0x00000001);
						}
					}
				}
			}
			else if (Local_68.f_2[iVar0 /*23*/].f_2 != 0xFFFFFFFF)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_2 == unk_0x57270EE11514DC67())
				{
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 0x00000000);
						}
						else if (unk_0x8D30F6387EE75385(Local_68.f_2[iVar0 /*23*/]))
						{
						}
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 0x00000000);
						}
					}
				}
				else
				{
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 0x00000001);
						}
					}
					if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
						{
							unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 0x00000001);
						}
					}
				}
			}
			else
			{
				if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
				{
					if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
					{
						unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 0x00000001);
					}
				}
				if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
				{
					if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
					{
						unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 0x00000001);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_325()
{
	switch (Local_70[unk_0x57270EE11514DC67() /*44*/].f_2B)
	{
		case 0x00000000:
			if (Local_68.f_BF > 0x00000000)
			{
				Local_70[unk_0x57270EE11514DC67() /*44*/].f_2B = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_336();
			func_326();
			if (Local_68.f_BF >= 0x00000004)
			{
				Local_70[unk_0x57270EE11514DC67() /*44*/].f_2B = 0x00000004;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			func_366();
			break;
	}
}

void func_326()
{
	int iVar0;
	
	iVar0 = unk_0x11225ACFD0C1477E(0x00000000, 0x00000000);
	if (Local_68.f_BD != iVar0)
	{
		if (Local_68.f_BD < iVar0 || func_327(Local_68.f_BD, Local_68.f_BD, Local_68.f_BD, 0x00000000, 0x00000001))
		{
			unk_0x28E5F00F131890E3(Local_68.f_BD);
			unk_0x0BEC04ECA8485A3A(Local_68.f_BD);
			unk_0x3A4967AE7C71F999(Local_68.f_BD);
		}
	}
}

int func_327(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_335(iParam0, bParam3, bParam4) && func_334(iParam1, bParam3, bParam4)) && func_328(iParam2, bParam3, bParam4))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_328(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0x00000002, iParam0, 0x00000001, bParam1, bParam2);
}

int func_329(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_333(iParam0) - func_332(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_332(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_333(iParam0) - func_331(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_332(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_333(iParam0) - func_332(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_330(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x0000000A;
			break;
		
		case 0x00000002:
			return 0x0000000A;
			break;
	}
	return 0x00000000;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F0.f_1;
			break;
		
		case 0x00000001:
			return Global_1532F0.f_2;
			break;
		
		case 0x00000002:
			return Global_1532F0.f_3;
			break;
	}
	return 0x00000000;
}

int func_332(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0x00000000:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D1;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000001:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D2;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D3;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0x00000000);
			}
			break;
	}
	return 0x00000000;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F8;
			break;
		
		case 0x00000001:
			return Global_1532F9;
			break;
		
		case 0x00000002:
			return Global_1532FA;
			break;
	}
	return 0x00000000;
}

int func_334(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0x00000001, iParam0, 0x00000001, bParam1, bParam2);
}

int func_335(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0x00000000, iParam0, 0x00000001, bParam1, bParam2);
}

void func_336()
{
	int iVar0;
	struct<2> Var1;
	
	switch (iLocal_75)
	{
		case 0x00000000:
			if (func_350(0x00000083))
			{
				iVar0 = func_340();
				if (iVar0 == 0x00000000)
				{
					func_20(&uLocal_828, 0x00000007, 0x00000000, "TaxiDispatch", 0x00000000, 0x00000001);
					if (func_339(&uLocal_828, 0x00000083, "MPTXIAU", "MPTXI_P1", 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_75 = 0x00000001;
					}
				}
				else if (iVar0 == 0x00000009)
				{
				}
				else
				{
					StringCopy(&Var1, "MPTXI_N", 16);
					StringIntConCat(&Var1, iVar0, 16);
					func_20(&uLocal_828, 0x00000007, 0x00000000, "TaxiDispatch", 0x00000000, 0x00000001);
					if (func_339(&uLocal_828, 0x00000083, "MPTXIAU", &Var1, 0x0000000C, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
					}
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000000))
			{
				if (func_340() == 0x00000000)
				{
					if (!func_26(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_15))
					{
						Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_15 = { 0f, 0f, 0f };
						Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_18 = 0f;
					}
					unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_1), 0x00000000);
					iLocal_75 = 0x00000002;
				}
				unk_0x0674E58A79778E99(&(Global_26B66F.f_31B), 0x00000000);
			}
			break;
		
		case 0x00000001:
			if (func_338())
			{
				if (!func_337())
				{
					if (!func_26(Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_15))
					{
						Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_15 = { 0f, 0f, 0f };
						Local_70[unk_0x57270EE11514DC67() /*44*/].f_4.f_18 = 0f;
					}
					unk_0x5D96D8530B3D0904(&(Local_70[unk_0x57270EE11514DC67() /*44*/].f_1), 0x00000000);
					iLocal_75 = 0x00000002;
				}
				else
				{
					iLocal_75 = 0x00000000;
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_1, 0x00000000))
			{
				iLocal_75 = 0x00000000;
			}
			break;
	}
}

int func_337()
{
	if (Global_5176 == 0x00000001 || Global_553D == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_338()
{
	if (Global_5145 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_339(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_138(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
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
	Global_280001 = 0x00000001;
	return func_118(sParam3, iParam4, bParam8);
}

int func_340()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000000))
	{
		if (IntToFloat(func_172(unk_0xD803B885F5E47A62())) <= (IntToFloat(iLocal_103) * 1.5f))
		{
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				func_175("TXM_H03", 0xFFFFFFFF);
			}
			return 0x00000009;
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return 0x00000002;
		}
	}
	if (!func_31())
	{
		return 0x00000001;
	}
	if (func_349(unk_0x57270EE11514DC67()))
	{
		return 0x00000009;
	}
	iVar0 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xFB04705FDFDCE640()));
	if (!unk_0xEB6A8945D1AC98A1(iVar0))
	{
		if (unk_0x405E212DDE472467(iVar0, 0x00000000))
		{
			iVar1 = unk_0x6937EA2286828455(iVar0, 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
			{
				if (unk_0x4906F8A34E9F4814(iVar1, joaat("taxi")))
				{
					return 0x00000009;
				}
			}
		}
	}
	if (func_348(unk_0x57270EE11514DC67()))
	{
		return 0x00000004;
	}
	if (Local_70[unk_0x57270EE11514DC67() /*44*/].f_4 != 0xFFFFFFFF)
	{
		return 0x00000004;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_70[unk_0x57270EE11514DC67() /*44*/].f_1, 0x00000000))
	{
		return 0x00000004;
	}
	if (func_181(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000010)
	{
		return 0x00000001;
	}
	if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) >= 6f)
	{
		return 0x00000009;
	}
	if (func_347(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		return 0x00000009;
	}
	if (func_346(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000009;
	}
	if (func_345())
	{
		return 0x00000003;
	}
	if (!func_341(0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	fVar4 = 50f;
	iVar5 = 0x00000001;
	if (!func_198(vVar2))
	{
		iVar5 = 0x00000009;
	}
	if (!unk_0xDE5F9F54005367A1(vVar2, &vVar3, iVar5, 100f, 2.5f))
	{
		return 0x00000003;
	}
	if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vVar3, fVar4, fVar4, 20f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000003;
	}
	if (func_320(vVar2, 0x00000001))
	{
		return 0x00000003;
	}
	return 0x00000000;
}

int func_341(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_344(iParam0, bParam3, bParam4) || func_343(iParam1, bParam3, bParam4)) || func_342(iParam2, bParam3, bParam4))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_342(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0x00000002, iParam0, 0x00000000, bParam1, bParam2);
}

int func_343(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0x00000001, iParam0, 0x00000000, bParam1, bParam2);
}

int func_344(int iParam0, bool bParam1, bool bParam2)
{
	return func_329(0x00000000, iParam0, 0x00000000, bParam1, bParam2);
}

int func_345()
{
	if (func_10(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (unk_0x62438065F1C29508(unk_0x16F2683693E537C9(), -64f, -850f, 200f, -84f, -795f, 340f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_346(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

int func_347(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_123())
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

int func_348(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000008)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_2 != 0xFFFFFFFF)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_2 == iParam0)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_349(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000008)
		{
			if (Local_68.f_2[iVar0 /*23*/].f_3 != 0xFFFFFFFF)
			{
				if (Local_68.f_2[iVar0 /*23*/].f_3 == iParam0)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_350(int iParam0)
{
	if ((Global_559F || Global_559E) || Global_55A0)
	{
		if (iParam0 == 0x00000082)
		{
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (Global_4C1E.f_1 == 0x0000000A)
		{
			if (Global_1A0F == iParam0)
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
	return 0x00000000;
}

int func_351()
{
	return Local_68;
}

int func_352(int iParam0)
{
	return Local_70[iParam0 /*44*/];
}

bool func_353()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000012);
}

int func_354()
{
	var uVar0;
	
	func_362(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_361())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_360())
	{
		return 0x00000001;
	}
	if (func_359(0x0000009F))
	{
		if (!func_358())
		{
			return 0x00000001;
		}
	}
	if (func_359(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_355() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_355()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_355()
{
	switch (func_357())
	{
		case 0x00000000:
			return func_356();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_356()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_357()
{
	return Global_7830;
}

bool func_358()
{
	return Global_2564C8.f_256;
}

int func_359(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_360()
{
	return Global_258C08;
}

bool func_361()
{
	return Global_2564C8.f_251;
}

void func_362(var uParam0)
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
					func_363(iVar0);
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

void func_363(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_10(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_364(iVar2, &bVar3))
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

int func_364(int iParam0, var uParam1)
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

void func_365()
{
	SYSTEM::WAIT(0x00000000);
}

void func_366()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/]))
			{
				unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/], 0x00000001);
			}
		}
		if (unk_0xE9F78D191AD5EDBA(Local_68.f_2[iVar0 /*23*/].f_1))
		{
			if (unk_0x526BC32A660C89E6(Local_68.f_2[iVar0 /*23*/].f_1))
			{
				unk_0x866EE3B81CEF363A(Local_68.f_2[iVar0 /*23*/].f_1, 0x00000001);
			}
		}
		iVar0++;
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_815))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_815))
		{
			func_40();
		}
	}
	if (bLocal_99)
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
	}
	if (unk_0xC844350D5D58C99A(iLocal_86))
	{
		unk_0xF690C84DADBB3551(&iLocal_86);
		unk_0x71199B01895C6202(iLocal_87);
	}
	if (unk_0xE6CD5C6925050049("taxi"))
	{
		unk_0x683413D9B7010687("taxi");
	}
	func_367();
}

void func_367()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_368(struct<21> Param0)
{
	func_378(0x00000020, Param0);
	func_376(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_68, 0x000000C3);
	unk_0x35B62793EAE9ADDF(&Local_70, 0x00000581);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_375())
	{
		return 0x00000000;
	}
	if (unk_0x8CD06866876216F2())
	{
		func_369(0x00000083, 0x00000003, unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000004));
		func_37(&uLocal_78, 0x00000000, 0x00000000);
		Local_70[unk_0x57270EE11514DC67() /*44*/] = 0x00000000;
	}
	return 0x00000001;
}

void func_369(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_1F6A = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		func_128();
		if (iParam1 == 0x00000004)
		{
			func_374(iParam0, 0x00000000, 0x00000001);
			func_374(iParam0, 0x00000001, 0x00000001);
			func_374(iParam0, 0x00000002, 0x00000001);
			func_373(iParam0, 0x00000000, 0x00000001);
			func_373(iParam0, 0x00000001, 0x00000001);
			func_373(iParam0, 0x00000002, 0x00000001);
		}
		else
		{
			if (func_372(iParam0, iParam1) == 0x00000001 && func_371(iParam0, iParam1) == 0x00000001)
			{
				bParam2 = 0x00000000;
			}
			iVar0 = iParam1;
			func_374(iParam0, iVar0, 0x00000001);
			func_373(iParam0, iVar0, 0x00000001);
		}
		if (bParam2)
		{
			if (!Global_12B4E)
			{
				if (iParam1 != 0x00000004)
				{
					if (Global_4C1E != iParam1)
					{
						Global_1F4F[iParam1 /*4*/] = { func_263(iParam0) };
						Global_1F60[iParam1] = 0x00000001;
						Global_1F65[iParam1] = iParam0;
					}
					else if (iParam0 == Global_4C1E)
					{
					}
					else
					{
						Global_1F1E[0x00000001 /*6*/] = { func_263(iParam0) };
						Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
						func_370();
					}
				}
				else
				{
					Global_1F1E[0x00000001 /*6*/] = { func_263(iParam0) };
					Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
					func_370();
				}
			}
			else
			{
				Global_1F1E[0x00000001 /*6*/] = { func_263(iParam0) };
				Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
				func_370();
			}
		}
	}
}

void func_370()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_706[Global_1F6A /*29*/].f_7)), 64);
	if (Global_1F7D == 0x00000000)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar1, unk_0x19C9F30A7697B43C(&(Global_1F1E[0x00000001 /*6*/])), 64);
		sVar2 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, sVar2, &cVar1);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_1F1E[0x00000001 /*6*/]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, "", 0x00000000);
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000000);
}

int func_371(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

int func_372(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

void func_373(int iParam0, int iParam1, int iParam2)
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

void func_374(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

int func_375()
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
		if (func_361())
		{
			return 0x00000000;
		}
		if (func_359(0x0000009D))
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

int func_376(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_367();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_377())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_367();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_361())
				{
					if (!bParam2)
					{
						func_367();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_359(0x0000009D))
				{
					if (!bParam2)
					{
						func_367();
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
					func_367();
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
				func_367();
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
			func_367();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_377()
{
	return Global_140856;
}

void func_378(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_367();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

