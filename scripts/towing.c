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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
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
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<3> Local_43[8];
	struct<3> Local_44[1];
	int iLocal_45 = 0;
	int iLocal_46[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_47[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<165> Local_49 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char cLocal_61[16] = "";
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char cLocal_64[16] = "";
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	struct<3> Local_67[12];
	char cLocal_68[32] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 1132396544;
	var uLocal_76 = 1132396544;
	var uLocal_77 = 1132396544;
	var uLocal_78 = 0;
	var uLocal_79 = -1082130432;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 8;
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
	var uLocal_139 = -1;
	var uLocal_140 = 1092616192;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	bool bLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = -1;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 1000;
	var uLocal_157 = 1000;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 1097859072;
	var uLocal_163 = 1500;
	var uLocal_164 = 45;
	var uLocal_165 = 1103626240;
	var uLocal_166 = 5;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	bool bLocal_175 = 0;
	float fLocal_176 = 0f;
	float fLocal_177 = 0f;
	float fLocal_178 = 0f;
	float fLocal_179 = 0f;
	float fLocal_180 = 0f;
	float fLocal_181 = 0f;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	struct<3> Local_185 = { 0, 0, 0 } ;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	bool bLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
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
	int iLocal_203 = 0;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	bool bLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	bool bLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	bool bLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	int iLocal_222 = 0;
	struct<6> Local_223 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_224 = NULL;
	var uLocal_225 = 16;
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
	int iLocal_390 = 0;
	struct<23> Local_391[53];
	struct<28> Local_392[17];
	var uLocal_393 = 0;
	struct<165> Local_394 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<3> Local_413 = { 0, 0, 0 } ;
	float fLocal_414 = 0f;
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
	struct<18> Local_436[2];
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	float fLocal_444 = 0f;
	int iLocal_445 = 0;
	bool bLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
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
	char* sLocal_462 = NULL;
	char* sLocal_463 = NULL;
	char* sLocal_464[3] = { NULL, NULL, NULL };
	char* sLocal_465 = NULL;
	struct<3> Local_466[1];
	struct<3> Local_467 = { 0, 0, 0 } ;
	struct<3> Local_468 = { 0, 0, 0 } ;
	struct<3> Local_469 = { 0, 0, 0 } ;
	var uLocal_470 = 9;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 7;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 15;
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
	var uLocal_761 = 1;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	bool bLocal_767 = 0;
	bool bLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	bool bLocal_771 = 0;
	bool bLocal_772 = 0;
	int iLocal_773 = 0;
	bool bLocal_774 = 0;
	bool bLocal_775 = 0;
	var uLocal_776 = 0;
	bool bLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	bool bLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	var uLocal_787 = 0;
	bool bLocal_788 = 0;
	bool bLocal_789 = 0;
	bool bLocal_790 = 0;
	bool bLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	bool bLocal_796 = 0;
	bool bLocal_797 = 0;
	bool bLocal_798 = 0;
	int iLocal_799 = 0;
	bool bLocal_800 = 0;
	var uLocal_801 = 0;
	bool bLocal_802 = 0;
	bool bLocal_803 = 0;
	int iLocal_804 = 0;
	bool bLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	bool bLocal_811 = 0;
	var uLocal_812[2] = { 0, 0 };
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	int iLocal_817[1] = { 0 };
	var uLocal_818[2] = { 0, 0 };
	int iLocal_819 = 0;
	struct<2> Local_820 = { 0, 0 } ;
	var uLocal_821 = 0;
	struct<20> Local_822[1];
	struct<7> Local_823 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	int iLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	struct<3> Local_860 = { 0, 0, 0 } ;
	struct<3> Local_861 = { 0, 0, 0 } ;
	float fLocal_862 = 0f;
	float fLocal_863 = 0f;
	char cLocal_864[64] = "";
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	int iLocal_873 = 0;
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
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	char* sLocal_903 = NULL;
	int iLocal_904 = 0;
	var uLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 8;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	int iLocal_925 = 0;
	bool bLocal_926 = 0;
	struct<9> Local_927 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0,001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_48 = { 500f, 500f, 500f };
	fLocal_176 = 0f;
	fLocal_177 = 0f;
	fLocal_178 = 0f;
	fLocal_179 = 0,8f;
	fLocal_180 = 1,5f;
	fLocal_181 = 0,5f;
	Local_185 = { 401,55f, -1631,309f, 29,3f };
	iLocal_186 = 1;
	iLocal_187 = 1;
	iLocal_390 = joaat("towtruck");
	Local_413 = { -6,80809f, -1465,873f, 29,45427f };
	fLocal_414 = 275,5635f;
	iLocal_440 = -1;
	iLocal_441 = -1;
	iLocal_442 = -1;
	iLocal_443 = -1;
	fLocal_444 = 0f;
	sLocal_462 = "";
	sLocal_463 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_763 = 1;
	iLocal_764 = 1;
	iLocal_765 = 1;
	iLocal_773 = 1;
	iLocal_808 = 1;
	iLocal_837 = -1;
	Local_860 = { -229,8159f, -1172f, 21,8557f };
	iLocal_904 = 1;
	unk_0x925970A93719CADE(1);
	if (unk_0x96CFB880BAC634CE(67))
	{
		if (!func_303())
		{
			func_301(&Global_112617, 3);
			func_272(unk_0x1AF90EB93E0012D6());
		}
		func_268();
	}
	if (unk_0xFC8BFE4B41177C22(ScriptParam_927.f_0) && unk_0xFC8BFE4B41177C22(ScriptParam_927.f_1))
	{
		if (!unk_0x1C2F771CDC87A3A5(ScriptParam_927.f_0, 0) && !unk_0x1C2F771CDC87A3A5(ScriptParam_927.f_1, 0))
		{
			unk_0xEE0BCDB1B5E36BCB(ScriptParam_927.f_0, 1, 1);
			unk_0xEE0BCDB1B5E36BCB(ScriptParam_927.f_1, 1, 1);
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	}
	func_267(&Local_391);
	func_266(&Local_392);
	func_265();
	iVar0 = 0;
	func_264(&uLocal_880);
	switch (ScriptParam_927.f_2)
	{
		case 1:
			if (ScriptParam_927.f_4)
			{
				iLocal_168 = ScriptParam_927.f_3;
				if (iVar0 > 0)
				{
					iLocal_448 = iVar0;
				}
				else
				{
					iLocal_448 = func_263(100000f, iLocal_168, Global_113969.f_19976.f_9);
				}
			}
			else
			{
				if (Global_113969.f_19976.f_3 == 0)
				{
					bLocal_791 = true;
				}
				if (!func_262())
				{
					func_259();
				}
				else
				{
					iLocal_448 = Global_113969.f_19976.f_9;
					iLocal_168 = Global_113969.f_19976.f_2;
				}
				ScriptParam_927.f_3 = iLocal_168;
			}
			iLocal_819 = 0;
			break;
	}
	if (!bLocal_791)
	{
		func_258(&Local_394, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_168 == 0)
	{
		iLocal_794 = 1;
		if ((Global_113969.f_19976.f_6 % 2) == 0)
		{
			bLocal_797 = true;
		}
	}
	else if (iLocal_168 == 2)
	{
		bLocal_798 = true;
		iLocal_794 = 1;
	}
	if (iLocal_168 == 3 || iLocal_168 == 1)
	{
		iLocal_793 = 1;
		iLocal_794 = 1;
		iLocal_851 = 1;
	}
	else if (iLocal_168 == 4)
	{
		iLocal_794 = 1;
		iLocal_851 = Local_392[func_257() /*28*/].f_27;
	}
	func_256();
	func_232(&ScriptParam_927);
	if (Global_113969.f_19976.f_3 >= 5)
	{
		bLocal_777 = true;
		bLocal_777 = bLocal_777;
	}
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iLocal_898 = ScriptParam_927.f_1;
			uVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xFC8BFE4B41177C22(uVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
			{
				if (unk_0x4B423FAA24E8ABF0(iVar1) == joaat("towtruck") || unk_0x4B423FAA24E8ABF0(iVar1) == joaat("towtruck2"))
				{
					iLocal_898 = iVar1;
				}
			}
		}
	}
	unk_0x0A0A06C514052E80(0);
	unk_0x425BBE19F25A57AB(0,2f);
	if (unk_0xFC8BFE4B41177C22(iLocal_898))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
		{
			unk_0xEE0BCDB1B5E36BCB(iLocal_898, 1, 1);
			unk_0x306C263AAEC4A988(iLocal_898);
			unk_0x515A606E0E38355D(iLocal_898, 0);
			unk_0x5FE0938FDE9B0958(iLocal_898, 1);
		}
	}
	uLocal_901 = unk_0xA7B0B03284E7503C(Vector(27,5001f, -640,002f, 414,1398f) - Vector(50f, 50f, 50f), Vector(27,5001f, -640,002f, 414,1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1, 1);
	uLocal_902 = unk_0xA7B0B03284E7503C(Vector(21,8557f, -1172f, -229,8159f) - Vector(50f, 50f, 50f), Vector(21,8557f, -1172f, -229,8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1, 1);
	unk_0xA63572E348CC4CFB(Local_860 - Vector(15f, 15f, 15f), Local_860 + Vector(15f, 15f, 15f), 0, 1);
	unk_0xC4BCE90F7242F354(Local_860 - Vector(15f, 15f, 15f), Local_860 + Vector(15f, 15f, 15f), 0);
	func_231();
	while (true)
	{
		system::wait(0);
		func_227(&uLocal_488);
		func_226();
		unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
		if (bLocal_777 && !unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x15CCE8886267624F())
			{
				unk_0xAC48F8E2BF2BEBF7(408,8376f, -1638,952f, 28,2928f, -3,24f, 0f, -62,6001f, 20f, 0);
				while (!unk_0x9E2D35FA908F57B4())
				{
					system::wait(0);
				}
				unk_0x6981C3213B841071();
				unk_0x64BB72494B9DF6DC(0);
				unk_0xD815D4BD1AE9E85A(0, 1065353216);
				unk_0x60040CDD28AA1BC3(408,8376f, -1638,952f, 28,2928f, 8f, 0, 0, 0, 0, 0, 0, 0);
				unk_0x10B228D2FDB7AF16(500);
			}
		}
		if (iLocal_904 < 15)
		{
			func_224(&iLocal_898, &uLocal_815, &Local_822, &Local_466, &cLocal_864, &iLocal_852, iLocal_847, bLocal_790, &iLocal_799, iLocal_781, bLocal_771, bLocal_207, iLocal_904, 1);
		}
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			switch (iLocal_819)
			{
				case 0:
					if (iLocal_904 > 4 && iLocal_904 < 15)
					{
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_898, 0))
						{
						}
						if (iLocal_168 != 2 && iLocal_168 != 4)
						{
							if (!func_221(&uLocal_911, Local_822[0 /*20*/].f_6, iLocal_898, &uLocal_842, &uLocal_843, bLocal_777))
							{
								iLocal_873 = 15;
								func_268();
							}
						}
						if (bLocal_791 || uLocal_787)
						{
							func_220(&uLocal_912, iLocal_898, &uLocal_845, &uLocal_846, bLocal_777);
						}
					}
					if (bLocal_791)
					{
						if (iLocal_904 >= 7)
						{
							func_215(iLocal_898, Local_822[0 /*20*/].f_6, Local_823, &(Local_822[0 /*20*/].f_8), &Local_466, &cLocal_864, &Local_185, bLocal_791, &(Local_822[0 /*20*/]));
						}
					}
					bLocal_780 = false;
					if (((iLocal_168 == 0 || iLocal_168 == 2) && iLocal_904 > 4) && iLocal_904 < 17)
					{
						if (bLocal_797 && iLocal_808)
						{
							func_213();
							func_212(Local_822[0 /*20*/].f_6, Local_822[0 /*20*/]);
						}
						if (!bLocal_791)
						{
							func_201();
						}
					}
					else if ((iLocal_168 == 1 && iLocal_904 > 4) && iLocal_904 < 17)
					{
						if (func_197())
						{
							func_194();
						}
						if (iLocal_908 > 0)
						{
							func_190();
						}
					}
					else if (iLocal_168 == 3)
					{
						if ((iLocal_904 == 5 && iLocal_906 < 1) && !iLocal_762)
						{
							if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
							{
								if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), Local_822[0 /*20*/].f_6))
								{
									iLocal_762 = 1;
									unk_0x974022927CB47E68(Local_822[0 /*20*/]);
									unk_0x0E95B96CFEFE7B61(Local_822[0 /*20*/], unk_0x4A8C381C258A124D(), 0);
								}
							}
						}
					}
					if (iLocal_782 && !bLocal_188)
					{
						func_186(&(Local_392[func_257() /*28*/]), &(Local_392[func_257() /*28*/].f_10), Local_391[iLocal_448 /*23*/].f_1, &(Local_822[0 /*20*/]), &(Local_822[0 /*20*/].f_2), &uLocal_818, fLocal_862, sLocal_463, &sLocal_464, iLocal_851);
					}
					if (iLocal_168 == 4)
					{
						func_184(&uLocal_905, iLocal_899, iLocal_900, iLocal_898, &(Local_822[0 /*20*/].f_2), iLocal_851, sLocal_463, &sLocal_464, &iLocal_814, bLocal_777, &(Local_822[0 /*20*/].f_6));
					}
					if (!bLocal_777)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_814) && !unk_0x1C2F771CDC87A3A5(iLocal_814, 0))
						{
							if (func_176(iLocal_814, 0, &uLocal_160, &iLocal_167, 0, 1, 0, 1, 0))
							{
								bLocal_774 = true;
								unk_0xD844F5E50DAB6FF7(iLocal_814, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
							}
							if (func_174())
							{
								bLocal_775 = true;
							}
						}
					}
					if (bLocal_188 && !bLocal_796)
					{
						if (func_176(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, &uLocal_160, &iLocal_167, 0, 1, 1, 1, 0))
						{
							func_173();
							if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
							{
								unk_0x974022927CB47E68(Local_822[0 /*20*/]);
								unk_0x44FB298D6382876D(Local_822[0 /*20*/], 1);
								unk_0xD844F5E50DAB6FF7(Local_822[0 /*20*/], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
								iLocal_873 = 18;
							}
							if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_1, 0))
							{
								unk_0x974022927CB47E68(Local_822[0 /*20*/].f_1);
								unk_0x44FB298D6382876D(Local_822[0 /*20*/].f_1, 1);
								unk_0xD0557B139A542F12(&uLocal_169);
								unk_0xB5396F1FB088FE38(&uLocal_169);
								unk_0x092B9247AF00F5CF(0, 1, 256);
								unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
								unk_0x93C0674FC00824D0(uLocal_169);
								if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_1, 0))
								{
									unk_0x4BD42B0527065BB6(Local_822[0 /*20*/].f_1, uLocal_169);
								}
								unk_0xD0557B139A542F12(&uLocal_169);
								iLocal_873 = 18;
							}
							if (!bLocal_791)
							{
								switch (iLocal_167)
								{
									case 16:
										if (iLocal_168 == 2)
										{
											iLocal_873 = 17;
											func_268();
										}
										else
										{
											iLocal_873 = 16;
											func_268();
										}
										break;
									
									case 2:
										func_172(&Local_394, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_873 = 3;
										func_268();
										break;
								}
							}
							else
							{
								iLocal_873 = 21;
								func_268();
							}
							if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
							{
								func_268();
							}
						}
						if (func_176(Local_822[0 /*20*/].f_1, Local_822[0 /*20*/].f_6, &uLocal_160, &iLocal_167, 0, 1, 0, 1, 0))
						{
							func_173();
							if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_1, 0))
							{
								unk_0x974022927CB47E68(Local_822[0 /*20*/].f_1);
								unk_0x44FB298D6382876D(Local_822[0 /*20*/].f_1, 1);
								unk_0xD844F5E50DAB6FF7(Local_822[0 /*20*/].f_1, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
								iLocal_873 = 18;
							}
						}
					}
					else if (bLocal_796)
					{
					}
					if (!bLocal_780 && func_171(0))
					{
						if ((!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(iLocal_898, 0)) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_898, 0))
						{
							if (!iLocal_214)
							{
								if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/].f_6))
								{
									if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
									{
										func_148(&uLocal_147, unk_0xD1A6A821F5AC81DB(Local_822[0 /*20*/].f_6, 1), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_148(&uLocal_147, Local_467, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_171(0))
					{
						func_147(&uLocal_147, 0, 0);
					}
					func_145(&uLocal_883, 7f, 1);
					func_144();
					func_143();
					if (((!bLocal_213 || iLocal_904 >= 15) || uLocal_776) || bLocal_771)
					{
						if (func_55())
						{
							func_49();
						}
					}
					if (iLocal_904 == 9)
					{
						if (iLocal_168 == 1 || iLocal_168 == 3)
						{
							func_13(Local_394, &Local_822, &iLocal_898);
						}
					}
					break;
			}
			if (func_1(ScriptParam_927))
			{
				func_268();
			}
		}
	}
}

int func_1(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (bLocal_802)
	{
		iLocal_873 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_873 = 11;
		return 1;
	}
	if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/].f_6))
	{
		if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
		{
			if (unk_0xA24B9FF9863A909D(Local_822[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_873 = 15;
				return 1;
			}
		}
	}
	if (bLocal_213)
	{
		if ((unk_0x1DD05E817C89C737() - iLocal_852) > 50000)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_898) && !unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_898, 1) };
			}
			if (system::vdist2(Var0, Var1) > 625f)
			{
				iLocal_873 = 0;
				return 1;
			}
		}
	}
	if (bLocal_774)
	{
		iLocal_873 = 22;
		return 1;
	}
	if (bLocal_775)
	{
		iLocal_873 = 23;
		return 1;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_898))
	{
		if (!unk_0xD9F5E1FEFD1329E4(iLocal_898, 0))
		{
			iLocal_873 = 2;
			return 1;
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_898))
	{
		if (unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
		{
			iLocal_873 = 2;
			return 1;
		}
	}
	switch (Param0.f_2)
	{
		case 1:
			if (iLocal_904 > 4 && iLocal_904 < 17)
			{
				if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/].f_6))
				{
					if (unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
					{
						iLocal_873 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_168)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_188)
					{
						if (!bLocal_796)
						{
							if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/]))
							{
								if (unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
								{
									iLocal_873 = 8;
									return 1;
								}
							}
						}
						if (bLocal_797)
						{
							if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/].f_1))
							{
								if (unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_1, 0))
								{
									iLocal_873 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
	{
		iLocal_873 = 3;
		return 1;
	}
	if (!unk_0x67AC1AE8A2697D67(iLocal_898))
	{
		unk_0x306C263AAEC4A988(iLocal_898);
	}
	else if (unk_0x413E19AD37DE3A4C(iLocal_898))
	{
		iLocal_873 = 4;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (!iLocal_783)
	{
		if (func_3(&uLocal_889, 180f))
		{
			iLocal_783 = 1;
			func_172(&Local_394, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&uLocal_889, 300f))
	{
		if (iLocal_168 != 2)
		{
			iLocal_873 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_7(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
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
		fVar0 = system::to_float(unk_0x1DD05E817C89C737());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar2 = unk_0x7E3F74F641EE6B27();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x1DD05E817C89C737()) / 1000f);
}

bool func_6(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_8()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_168 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_904 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(Local_466[0 /*3*/]))
	{
		if (!iLocal_784)
		{
			if (func_9(Local_466[0 /*3*/], 0) > (fLocal_178 + 400f))
			{
				func_172(&Local_394, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_784 = 1;
			}
		}
		if (func_9(Local_466[0 /*3*/], 0) > (fLocal_178 + 450f))
		{
			iLocal_873 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(struct<3> Param0, int iParam1)
{
	return func_10(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), Param0, iParam1);
}

float func_10(int iParam0, struct<3> Param1, int iParam2)
{
	if (unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		return -1f;
	}
	return unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), Param1, iParam2);
}

int func_11(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_101585.f_393 > 0;
}

void func_13(struct<165> Param0, int iParam1, int iParam2)
{
	if (!iLocal_209)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (iLocal_449 > 1)
			{
				if (func_48(iParam1, iParam2))
				{
					if (func_47())
					{
						Local_223 = { func_46() };
						func_44();
						iLocal_209 = 1;
						iLocal_449 = 3;
					}
					else
					{
						iLocal_209 = 1;
						iLocal_449 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_449)
	{
		case 0:
			if (!func_47())
			{
				system::settimera(0);
				iLocal_449 = 1;
			}
			break;
		
		case 1:
			if ((system::timera() > 3000 && iLocal_214) && !func_43("TOWT_OBJ_04", 0, 0))
			{
				if (!func_47())
				{
					func_258(&Param0, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					if (unk_0x486FF5D06E9659F1(joaat("tonya3")) == 1 || unk_0x486FF5D06E9659F1(joaat("tonya4")) == 1)
					{
						if (iLocal_168 == 1)
						{
							func_172(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_224 = "TOW_TRN_C1";
						}
						else if (iLocal_168 == 3)
						{
							func_172(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_224 = "TOW_BRK_C";
						}
						bLocal_210 = true;
					}
					else if (iLocal_168 == 1)
					{
						if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
						{
							func_258(&Param0, 5, (*iParam1)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_172(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_224 = "TOW_MECH";
						}
						else if (Global_113969.f_19976.f_5 == 2)
						{
							func_258(&Param0, 6, (*iParam1)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_172(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_224 = "TOW_MECH2";
						}
						else
						{
							func_42(Param0, iParam1);
						}
						bLocal_210 = true;
					}
					else if (iLocal_168 == 3)
					{
						if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
						{
							func_258(&Param0, 5, (*iParam1)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_172(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_224 = "TOW_BRK_CONV";
						}
						else if (Global_113969.f_19976.f_7 == 2)
						{
							func_258(&Param0, 6, (*iParam1)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_172(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_224 = "TOW_BRK_CON2";
						}
						else
						{
							func_41(Param0, iParam1);
						}
						bLocal_210 = true;
					}
				}
				else if (func_39(sLocal_224))
				{
					iLocal_449 = 2;
				}
			}
			break;
		
		case 3:
			func_38(Param0, iParam1);
			if (iLocal_211)
			{
				iLocal_449 = 2;
			}
			break;
		
		case 2:
			if (func_37(iParam2))
			{
				if (bLocal_210)
				{
					if (iLocal_209)
					{
						if (!func_47())
						{
							if (func_14(&Local_394, "TOWAUD", sLocal_224, &Local_223, 8, 0, 0))
							{
								iLocal_209 = 0;
								iLocal_449 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_37(iParam2);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 1;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_35();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_33();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			unk_0x8744D2E3FC95740E(&Global_8800, 20);
			unk_0x8744D2E3FC95740E(&Global_8801, 17);
			unk_0x8744D2E3FC95740E(&Global_8802, false);
			if (bParam2)
			{
				func_25();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79389)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_23())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_22();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_21();
		func_16();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_35();
	}
	return 0;
}

void func_16()
{
	if (!func_17())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_17()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_20())
	{
		return 0;
	}
	if (func_18(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)
{
	return func_19(iParam0, 20);
}

var func_19(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_20()
{
	return -1;
}

void func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_22286 = 1;
}

void func_22()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	unk_0x8744D2E3FC95740E(&Global_8801, 16);
}

int func_23()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_25()
{
	if (func_32(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_26();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

int func_26()
{
	func_27();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_27()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_30(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_29(unk_0x4A8C381C258A124D());
			if (func_28(iVar0) && (!func_32(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_28(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_32(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_35()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

void func_36(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_37(var uParam0)
{
	switch (iLocal_450)
	{
		case 1:
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0 && !unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				iLocal_211 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(*uParam0, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
				{
					iLocal_211 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (iLocal_450)
	{
		case 1:
			if (unk_0x486FF5D06E9659F1(joaat("towing")) == 0)
			{
				if (iLocal_168 == 1)
				{
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							unk_0xD6AD454C9B73DD75(unk_0x259BE71D8A81D4FA());
							iLocal_211 = 1;
						}
					}
				}
				else if (iLocal_168 == 3)
				{
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							unk_0xD6AD454C9B73DD75(unk_0x259BE71D8A81D4FA());
							iLocal_211 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 1)
			{
				if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_5 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 3)
			{
				if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_7 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x486FF5D06E9659F1(joaat("towing")) == 0)
			{
				if (iLocal_168 == 1)
				{
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (iLocal_168 == 3)
				{
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 1)
			{
				if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_5 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 3)
			{
				if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_7 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x486FF5D06E9659F1(joaat("towing")) == 0)
			{
				if (iLocal_168 == 1)
				{
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (iLocal_168 == 3)
				{
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 1)
			{
				if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_5 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 3)
			{
				if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_7 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x486FF5D06E9659F1(joaat("towing")) == 0)
			{
				if (iLocal_168 == 1)
				{
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (iLocal_168 == 3)
				{
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 1)
			{
				if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_5 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 3)
			{
				if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_7 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_211)
					{
						if (func_172(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_211 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_39(char* sParam0)
{
	var uVar0;
	
	if (func_47())
	{
		MemCopy(&uVar0, {func_40()}, 4);
		if (unk_0x1B79E937E91F40C3(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_40()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;
	
	iVar0 = (unk_0xC5935DFB3F39785A(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_224 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_224 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_224 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_224 = "TOW_GEN_MCH4";
	}
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	func_258(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_172(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_224 = "TOW_GEN_MCH2";
}

bool func_43(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

void func_44()
{
	Global_21152 = 0;
	func_45();
}

void func_45()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

struct<6> func_46()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		iVar1 = unk_0xE7365CC791D1E4EB();
		iVar1 = (iVar1 + Global_23296);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0x6BA487C862DB8DDF(&(Global_21154[iVar2 /*6*/])))
			{
				return Global_21154[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0x6BA487C862DB8DDF(&(Global_21154[iVar3 /*6*/])))
					{
						return Global_21154[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_21154[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_47()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, var uParam1)
{
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xEFC75C3D53F60CB1(unk_0x259BE71D8A81D4FA()))
		{
			unk_0xD6AD454C9B73DD75(unk_0x259BE71D8A81D4FA());
		}
		iLocal_450 = 1;
		return 1;
	}
	if ((unk_0xFC8BFE4B41177C22((uParam0[0 /*20*/])->f_6) && !unk_0x1C2F771CDC87A3A5((uParam0[0 /*20*/])->f_6, 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (!bLocal_175)
		{
			if ((unk_0x9B3D4335E0EDB0BE((uParam0[0 /*20*/])->f_6, unk_0x4A8C381C258A124D(), 1) || unk_0x6E470765558FCD9E((uParam0[0 /*20*/])->f_6)) || unk_0xF76AF9D45D6BDA45((uParam0[0 /*20*/])->f_6))
			{
				iLocal_450 = 2;
				return 1;
			}
		}
	}
	if ((unk_0xFC8BFE4B41177C22((*uParam0)[0 /*20*/]) && !unk_0x1C2F771CDC87A3A5((*uParam0)[0 /*20*/], 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x9B3D4335E0EDB0BE(unk_0x4A8C381C258A124D(), (*uParam0)[0 /*20*/], 1))
		{
			iLocal_450 = 4;
			return 1;
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(*uParam1, 0))
	{
		if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam1, 0))
		{
			iLocal_450 = 6;
			return 1;
		}
	}
	return 0;
}

void func_49()
{
	func_53(&Global_112617, 3);
	func_301(&(Global_113969.f_19976.f_1), 8192);
	func_50();
	func_194();
}

void func_50()
{
	func_51();
}

int func_51()
{
	if (func_52(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_52(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_53(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_55()
{
	var uVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	switch (iLocal_904)
	{
		case 1:
			func_140(14);
			if (iLocal_168 == 3)
			{
				if (func_138(&Local_861, &fLocal_862, &uLocal_854, &uLocal_857))
				{
					iLocal_904 = 2;
				}
			}
			else
			{
				iLocal_904 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xFBA523E6F8ACE541())
			{
				switch (iLocal_168)
				{
					case 3:
						func_258(&Local_394, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_172(&Local_394, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_904 = 4;
						}
						break;
					
					case 2:
						func_258(&Local_394, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_172(&Local_394, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_904 = 4;
						}
						break;
					
					case 0:
						func_258(&Local_394, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_797)
						{
							if (func_172(&Local_394, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_904 = 4;
							}
						}
						else if (func_172(&Local_394, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_904 = 4;
						}
						break;
					
					case 1:
						func_258(&Local_394, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_172(&Local_394, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_904 = 4;
						}
						break;
					
					case 4:
						func_258(&Local_394, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_172(&Local_394, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_904 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_168)
			{
				case 3:
					if (func_131("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
						{
							unk_0x0B74F181ADFC39BF(Local_822[0 /*20*/].f_6, 10);
						}
						func_129();
						func_264(&uLocal_889);
						iLocal_904 = 6;
					}
					break;
				
				case 2:
					if (func_131("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_468 = { (Local_466[0 /*3*/] + 15f), (Local_466[0 /*3*/].f_1 + 15f), (Local_466[0 /*3*/].f_2 + 15f) };
						Local_469 = { (Local_466[0 /*3*/] - 15f), (Local_466[0 /*3*/].f_1 - 15f), (Local_466[0 /*3*/].f_2 - 15f) };
						unk_0xA63572E348CC4CFB(Local_468, Local_469, 0, 1);
						iLocal_795 = 1;
						unk_0xBE144113897EE678(Local_822[0 /*20*/].f_6, 1);
						func_264(&uLocal_889);
						iLocal_904 = 6;
					}
					break;
				
				case 0:
					if (func_131("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_264(&uLocal_889);
						iLocal_904 = 6;
					}
					break;
				
				case 1:
					if (func_131("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						unk_0xBE144113897EE678(Local_822[0 /*20*/].f_6, 1);
						func_129();
						unk_0xAE03F542B985A69E(0);
						func_128(0, 0);
						func_128(1, 0);
						func_128(2, 0);
						func_128(3, 0);
						func_128(4, 0);
						func_128(5, 0);
						func_128(6, 0);
						func_128(7, 0);
						func_128(8, 0);
						func_128(9, 0);
						func_128(10, 0);
						func_128(11, 0);
						iLocal_792 = 1;
						func_264(&uLocal_889);
						iLocal_904 = 6;
					}
					break;
				
				case 4:
					if (func_131("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						unk_0xBE144113897EE678(Local_822[0 /*20*/].f_6, 1);
						func_129();
						func_264(&uLocal_889);
						iLocal_904 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!unk_0xC450B06E5AAA0985(Local_822[0 /*20*/].f_8))
			{
				if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/].f_6))
				{
					Local_822[0 /*20*/].f_8 = unk_0x18E23E031A9B798F(Local_822[0 /*20*/].f_6);
					unk_0x61183D6239A9D7B8(Local_822[0 /*20*/].f_8, 3);
					unk_0xBC64B805EE071A37(Local_822[0 /*20*/].f_8, 1);
				}
			}
			break;
		
		case 5:
			func_123();
			if (func_115(&iLocal_906, 0, "TOW_BREAK1"))
			{
				iLocal_904 = 7;
			}
			break;
		
		case 6:
			if (!func_47())
			{
				func_114(sLocal_903, 7500, 1);
				StringCopy(&cLocal_864, sLocal_903, 64);
				if (iLocal_168 == 3)
				{
					iLocal_904 = 5;
				}
				else
				{
					iLocal_904 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_168)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(Local_467))
					{
						Local_467 = { Local_44[0 /*3*/] };
					}
					func_113(8, &Local_823);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_168 == 1 && !unk_0xCECDBB848D53DEB2(Local_822[0 /*20*/], iLocal_898, 0))
			{
				bLocal_789 = true;
			}
			func_112();
			if (func_105(sVar2, Local_467))
			{
				if (iLocal_168 == 1 && !unk_0xCECDBB848D53DEB2(Local_822[0 /*20*/], iLocal_898, 0))
				{
					bLocal_789 = false;
					iLocal_785 = 1;
					if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/]))
					{
						Local_822[0 /*20*/].f_9 = unk_0x18E23E031A9B798F(Local_822[0 /*20*/]);
						unk_0x61183D6239A9D7B8(Local_822[0 /*20*/].f_9, 3);
						unk_0x5D3946F818C6B331(Local_822[0 /*20*/].f_9, 0,7f);
					}
					iLocal_904 = 5;
				}
				else
				{
					iLocal_904 = 9;
				}
			}
			if (func_103(&uVar3, &uVar4, &uVar5))
			{
				bLocal_767 = true;
				iLocal_904 = 9;
			}
			break;
		
		case 9:
			if (iLocal_168 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_102(sVar2))
			{
				func_147(&uLocal_147, 0, 0);
				unk_0xDD38B2935A3EAC56(Local_822[0 /*20*/].f_6, 0, 0);
				if (iLocal_838 == 0)
				{
					iLocal_773 = 0;
					iLocal_904 = 15;
				}
				else
				{
					func_114("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_864, "TOWT_OBJ_05", 64);
					iLocal_904 = 7;
				}
			}
			break;
		
		case 15:
			func_101();
			if (bLocal_771)
			{
				if (unk_0xC450B06E5AAA0985(uLocal_815))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_815);
				}
			}
			unk_0x428C32CC68809A35(1);
			fLocal_177 = (fLocal_177 + 500f);
			if (iLocal_216 != 0 && !bLocal_767)
			{
				if (bLocal_777)
				{
					if ((unk_0x1DD05E817C89C737() - iLocal_216) < 12000)
					{
						fLocal_177 = (fLocal_177 + 50f);
					}
				}
			}
			if (!bLocal_777)
			{
				fLocal_177 = 0f;
			}
			fLocal_863 = func_4(&uLocal_880);
			fLocal_863 = (fLocal_863 * 1000f);
			iVar1 = system::round(fLocal_863);
			unk_0x60642EDE690B1018(iVar1, 14, 0);
			if (iLocal_168 != 2)
			{
			}
			if (bLocal_777)
			{
				fLocal_177 = (fLocal_177 - fLocal_176);
			}
			iLocal_218 = system::round(fLocal_177);
			func_100(&uLocal_452, "TOW_UI07", 500, system::round(fLocal_176), system::round(fLocal_177), "TOW_UI08", 4000, 1);
			if (iLocal_218 > 0)
			{
				func_62(0, iLocal_218);
			}
			func_61(1);
			iLocal_904 = 16;
			break;
		
		case 16:
			if (unk_0x3273F980CC5E02CD())
			{
				unk_0x428C32CC68809A35(1);
			}
			if (!func_56(&uLocal_452, 0))
			{
				unk_0x4E8E15513E171E54("TOW_TUT_04A");
				unk_0x4E8E15513E171E54("TOWT_OBJ_03Ga");
				iLocal_904 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	Local_44[0 /*3*/] = { Local_44[0 /*3*/] };
	return 0;
}

int func_56(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_59(&(uParam0->f_2));
	}
	unk_0x4EB223432F8FA0A0(14);
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x875A214D5EBCA509(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_59(&(uParam0->f_5));
				func_58(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_4(&(uParam0->f_5)) > 0,33f)
			{
				func_57(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_4(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_59(&(uParam0->f_5));
			func_58(uParam0, 1051260355);
		}
		else if (func_4(&(uParam0->f_5)) > 0,33f)
		{
			func_57(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(*uParam0, "SHARD_ANIM_OUT");
	unk_0x330108B080A2132F(uParam0->f_9);
	unk_0x74BF156C860580D4(iParam1);
	unk_0xE6B753D52F4CA222();
}

void func_59(var uParam0)
{
	func_60(uParam0, 0f);
}

void func_60(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, true);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_61(bool bParam0)
{
	char* sVar0;
	
	unk_0x8E1F26D6742EC167(0);
	switch (func_26())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
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
	unk_0xFAE22BD3C12AEFB4(sVar0);
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	func_64(Global_113969.f_24907[iParam0 /*4*/], func_99(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_113969.f_24907.f_69 = (Global_113969.f_24907.f_69 + iParam1);
			break;
		
		case 2:
			Global_113969.f_24907.f_70 = (Global_113969.f_24907.f_70 + iParam1);
			break;
		
		case 0:
			Global_113969.f_24907.f_71 = (Global_113969.f_24907.f_71 + iParam1);
			break;
	}
	unk_0xDF7F16323520B858(func_63(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(func_63(iParam0, 1), iVar0, 1);
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_98(iParam0) == 3)
	{
		return;
	}
	if (func_98(iParam0) == 4)
	{
		return;
	}
	func_65(func_98(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
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
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xDF7F16323520B858(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x1164A75E490C27B6(iVar1, iVar0, 1);
	}
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_96(99, 1);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_80(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_77(5))
					{
						fVar0 = 0,9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_77(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x931D15B1D60C81B0())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_77(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_76(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(bVar1);
	}
	iVar5 = (Global_61340[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61340[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61340[iVar2] = 2147483647;
				}
				else
				{
					Global_61340[iVar2] = (Global_61340[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61340[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61340[iVar2];
			Global_61340[iVar2] = (Global_61340[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[iVar2 /*69*/]++;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_67(iParam0);
	if (Global_44042 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x1164A75E490C27B6(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x1164A75E490C27B6(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x1164A75E490C27B6(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_68(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_75(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_75(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_75(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_75(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_71(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_71(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_71(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_71(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_71(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_71(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_113969.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_70() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_70() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_69(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_72(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_72(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_73(uParam1));
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_74();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_74()
{
	return Global_1574926;
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_74();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_76(int iParam0)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

int func_77(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_79(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_79(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_79(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_79(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_78(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_78(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_78(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_78(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_78(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_78(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return BitTest(Global_113969.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_70() /*5570*/].f_681.f_10, iParam0);
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_72(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_79(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_80(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x37088D2C63AC4C01(27))
	{
		return 0;
	}
	if (unk_0xDF7F16323520B858(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDF7F16323520B858(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x1164A75E490C27B6(joaat("num_cash_spent"), iVar1, 1);
		func_94(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_81(27, 1);
	return 1;
}

int func_81(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_82(iParam0, iParam1);
}

int func_82(int iParam0, int iParam1)
{
	if (func_32(14) && !func_93(iParam0))
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_92(&Global_4543384))
	{
		if (func_90(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_83(&Global_4543384, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
		{
			return 0;
		}
		if (unk_0x37088D2C63AC4C01(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_83(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_93(iParam1))
	{
		return 0;
	}
	if (func_90(uParam0, iParam1))
	{
		return 0;
	}
	if (func_89(uParam0) < 0f)
	{
		func_88(uParam0, 0);
	}
	func_86(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_84(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_93(iParam1))
	{
		return 0;
	}
	if (func_90(uParam0, iParam1))
	{
		return 0;
	}
	if (func_89(uParam0) < 0f)
	{
		func_88(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_85(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_85(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_86(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_87(uParam0, iVar0);
		iVar0++;
	}
	func_88(uParam0, (Global_4543383 - 0,5f));
}

void func_87(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_88(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_89(var uParam0)
{
	return uParam0->f_80;
}

bool func_90(var uParam0, int iParam1)
{
	return func_91(uParam0, iParam1) != -1;
}

int func_91(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_92(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB3E8CE9ABB5AD331(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);
	}
	return 0;
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x1164A75E490C27B6(Global_59908[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_97()
{
	int iVar0;
	
	if (unk_0x5F9F81C08516558E())
	{
		unk_0xDF7F16323520B858(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_61340[0] == iVar0)
		{
			Global_61340[0] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_61340[1] == iVar0)
		{
			Global_61340[1] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_61340[2] == iVar0)
		{
			Global_61340[2] = iVar0;
		}
	}
}

int func_98(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_17;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_100(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0x88F483FBD433696A(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x4E5A3D96808F7F84(iParam7);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xCFAD3D478C87321A();
	unk_0x882AEFD55B8D51FB(sParam5);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x511D14ED2DA887E1(iParam4);
	unk_0xCFAD3D478C87321A();
	unk_0xE6B753D52F4CA222();
	func_59(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

void func_101()
{
	Global_113969.f_19976.f_3++;
	Global_113969.f_19976.f_2 = iLocal_168;
	switch (iLocal_168)
	{
		case 2:
			Global_113969.f_19976.f_4++;
			break;
		
		case 3:
			Global_113969.f_19976.f_7++;
			break;
		
		case 0:
			Global_113969.f_19976.f_6++;
			break;
		
		case 1:
			Global_113969.f_19976.f_5++;
			break;
		
		case 4:
			Global_113969.f_19976.f_8++;
			break;
	}
}

int func_102(char* sParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (iLocal_837 == -1)
	{
	}
	if (Local_822[iLocal_837 /*20*/].f_15)
	{
		if ((func_4(&(Local_822[iLocal_837 /*20*/].f_11)) - Local_822[iLocal_837 /*20*/].f_14) > 120f)
		{
			unk_0xAE89444B15234CCE(Local_822[iLocal_837 /*20*/].f_6, 1, 0);
		}
	}
	if (func_103(&uVar0, &uVar1, &uVar2))
	{
		if (!unk_0x1C2F771CDC87A3A5(Local_822[iLocal_837 /*20*/], 0) && unk_0xCECDBB848D53DEB2(Local_822[iLocal_837 /*20*/], iLocal_898, 0))
		{
			unk_0xE5EE5C9DDF05D925(iLocal_898, 6f, 2, 0);
			iLocal_212 = 1;
			if (unk_0xFC8BFE4B41177C22(Local_822[iLocal_837 /*20*/]) && !unk_0x1C2F771CDC87A3A5(Local_822[iLocal_837 /*20*/], 0))
			{
				unk_0xB5396F1FB088FE38(&uLocal_169);
				unk_0x84B06A81C98DA4B8(0);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0xF3812FC874B9C273(0, Local_822[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar3 = (unk_0xC5935DFB3F39785A(0, 65535) % 3);
				if (iVar3 == 0)
				{
					unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar3 == 1)
				{
					unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar3 == 2)
				{
					unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				unk_0x93C0674FC00824D0(uLocal_169);
				unk_0x4BD42B0527065BB6(Local_822[iLocal_837 /*20*/], uLocal_169);
				unk_0xD0557B139A542F12(&uLocal_169);
				unk_0x44FB298D6382876D(Local_822[iLocal_837 /*20*/], 1);
			}
			if ((Global_113969.f_19976.f_3 == 0 || Global_113969.f_19976.f_3 == 1) || Global_113969.f_19976.f_3 == 4)
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_814) && !unk_0x1C2F771CDC87A3A5(iLocal_814, 0))
				{
					unk_0xB5396F1FB088FE38(&uLocal_169);
					unk_0x092B9247AF00F5CF(0, 0, 0);
					unk_0x761F56E633460973(0, 227,082f, 0);
					unk_0x93C0674FC00824D0(uLocal_169);
					if (!unk_0x1C2F771CDC87A3A5(iLocal_814, 0))
					{
						unk_0x4BD42B0527065BB6(iLocal_814, uLocal_169);
						unk_0x44FB298D6382876D(iLocal_814, 1);
					}
					unk_0xD0557B139A542F12(&uLocal_169);
				}
			}
			if (func_47())
			{
				func_173();
			}
			if ((Global_113969.f_19976.f_3 == 0 || Global_113969.f_19976.f_3 == 1) || Global_113969.f_19976.f_3 == 4)
			{
				if (Global_113969.f_19976.f_3 == 0)
				{
					func_172(&Local_394, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_113969.f_19976.f_3 == 1)
				{
					func_172(&Local_394, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_113969.f_19976.f_3 == 4)
				{
					func_172(&Local_394, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_168 == 3)
			{
				if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
				{
					func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWBREAKM", 0, 1);
					func_172(&Local_394, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_113969.f_19976.f_7 == 2)
				{
					func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_172(&Local_394, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_168 == 1)
			{
				if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
				{
					func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWTRAINF", 0, 1);
					func_172(&Local_394, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_113969.f_19976.f_5 == 2)
				{
					func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_172(&Local_394, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_791)
		{
		}
		iLocal_214 = 0;
		unk_0xFE54B8568B2ABD12(&(Local_822[iLocal_837 /*20*/].f_8));
		func_59(&uLocal_877);
		iLocal_838 = (iLocal_838 - 1);
		return 1;
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[iLocal_837 /*20*/].f_6, 0))
	{
		if (!unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[iLocal_837 /*20*/].f_6))
		{
			iLocal_214 = 0;
			func_147(&uLocal_147, 0, 0);
			unk_0xBC64B805EE071A37(Local_822[iLocal_837 /*20*/].f_8, 0);
			unk_0xFE54B8568B2ABD12(&(Local_822[iLocal_837 /*20*/].f_8));
			if (unk_0xFC8BFE4B41177C22(Local_822[iLocal_837 /*20*/].f_6) && !unk_0x1C2F771CDC87A3A5(Local_822[iLocal_837 /*20*/].f_6, 0))
			{
				if (!unk_0xC450B06E5AAA0985(Local_822[iLocal_837 /*20*/].f_8))
				{
					Local_822[iLocal_837 /*20*/].f_8 = unk_0x18E23E031A9B798F(Local_822[iLocal_837 /*20*/].f_6);
					unk_0x61183D6239A9D7B8(Local_822[iLocal_837 /*20*/].f_8, 3);
				}
			}
			if (iLocal_168 == 1)
			{
				if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_810)
					{
						if (func_172(&Local_394, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_810 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_5 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_810)
					{
						if (func_172(&Local_394, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_810 = 1;
						}
					}
				}
			}
			else if (iLocal_168 == 3)
			{
				if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_810)
					{
						if (func_172(&Local_394, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_810 = 1;
						}
					}
				}
				else if (Global_113969.f_19976.f_7 == 2)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_810)
					{
						if (func_172(&Local_394, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_810 = 1;
						}
					}
				}
			}
			func_59(&uLocal_877);
			if (!bLocal_789)
			{
				if (func_47())
				{
					unk_0x0F15249D24BC5ADA(1);
					unk_0x406CBCEA35499884();
					func_114(sParam0, 7500, 1);
				}
				if (!func_47())
				{
					if (iLocal_763)
					{
						unk_0x406CBCEA35499884();
						func_114(sParam0, 7500, 1);
						iLocal_763 = 0;
					}
					else
					{
						unk_0x406CBCEA35499884();
						func_114(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_864, sParam0, 64);
				}
			}
			iLocal_904 = 7;
		}
	}
	return 0;
}

int func_103(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_837 != -1)
	{
		if (!func_11(Local_823.f_14))
		{
			Local_467 = { Local_823.f_14 };
			*uParam0 = { Local_823.f_7 };
			*uParam1 = { Local_823.f_10 };
			*uParam2 = Local_823.f_13;
		}
		else
		{
			*uParam0 = { Local_823 };
			*uParam1 = { Local_823.f_3 };
			*uParam2 = Local_823.f_6;
		}
		if (!bLocal_791)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_467, 30f, 30f, 2f, 1, 1, 0))
				{
					if (iLocal_168 == 0 || iLocal_168 == 4)
					{
						if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
						{
							unk_0x0B74F181ADFC39BF(Local_822[0 /*20*/].f_6, 1);
							bLocal_771 = true;
						}
					}
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(Local_822[iLocal_837 /*20*/].f_6))
		{
			if (unk_0x5105BE70DEF1F5FB(Local_822[iLocal_837 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, 0, 0))
			{
				if (iLocal_773)
				{
					func_104("TOWT_HELP_UH", -1);
				}
				if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[iLocal_837 /*20*/].f_6, 0))
				{
					if (!unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[iLocal_837 /*20*/].f_6) || (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_822[iLocal_837 /*20*/].f_6, 0) && !unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[iLocal_837 /*20*/].f_6)))
					{
						if (func_47())
						{
							func_173();
						}
						func_147(&uLocal_147, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_104(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_105(char* sParam0, struct<3> Param1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (!bLocal_777 && !bLocal_788)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_898) && !unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
		{
			iVar2 = unk_0x314C37CF34534BCB(iLocal_898);
			if (unk_0xFC8BFE4B41177C22(iVar2) && !unk_0x1C2F771CDC87A3A5(iVar2, 0))
			{
				if (unk_0x55B80B6E7AB61270(iVar2))
				{
					if (unk_0xE93EDE86BBB66532(iVar2) != Local_822[0 /*20*/].f_6)
					{
						if (!iLocal_804)
						{
							func_258(&uLocal_225, 3, iLocal_814, "TONYA", 0, 1);
							if (func_172(&uLocal_225, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_804 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_804 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (unk_0xFC8BFE4B41177C22(Local_822[iVar1 /*20*/].f_6))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[iVar1 /*20*/].f_6, 0))
			{
				if (unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[iVar1 /*20*/].f_6) && func_111())
				{
					unk_0x4539850624F18A9E(iLocal_898, 1);
					func_108();
					func_147(&uLocal_147, 0, 0);
					iLocal_214 = 1;
					if (iLocal_793 && !unk_0xCECDBB848D53DEB2(Local_822[iVar1 /*20*/], iLocal_898, 0))
					{
						bVar0 = false;
						if (iLocal_909 < 4)
						{
							system::settimerb(0);
							iLocal_909 = 5;
						}
					}
					if (bVar0)
					{
						func_107(&uLocal_883);
						unk_0xBC64B805EE071A37(Local_822[iVar1 /*20*/].f_8, 0);
						iLocal_799 = 0;
						func_106(Local_822[iVar1 /*20*/].f_8);
						Local_822[iVar1 /*20*/].f_14 = func_4(&(Local_822[iVar1 /*20*/].f_11));
						if (iLocal_819 == 0)
						{
							Local_822[iVar1 /*20*/].f_8 = unk_0x34864AB7DA700AA6(Param1);
							fLocal_178 = func_9(Param1, 0);
							Local_466[0 /*3*/] = { Param1 };
						}
						if (iLocal_168 == 4)
						{
							unk_0x6515021478088FBC(Local_822[0 /*20*/].f_6, 0, 0);
						}
						func_59(&uLocal_889);
						unk_0x61183D6239A9D7B8(Local_822[iVar1 /*20*/].f_8, 5);
						unk_0xBC64B805EE071A37(Local_822[iVar1 /*20*/].f_8, 1);
						if (iLocal_168 == 0 && bLocal_797)
						{
						}
						else if (iLocal_764)
						{
							func_114(sParam0, 7500, 1);
							iLocal_764 = 0;
						}
						StringCopy(&cLocal_864, sParam0, 64);
						unk_0x60040CDD28AA1BC3(Local_466[0 /*3*/], 6f, 0, 0, 0, 0, 0, 0, 0);
						iLocal_837 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_106(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		unk_0xFE54B8568B2ABD12(&uParam0);
	}
}

void func_107(var uParam0)
{
	func_57(uParam0);
	StringCopy(&cLocal_68, "", 32);
}

void func_108()
{
	func_109("TOW_TUT_03");
	func_109("TOW_TUT_02");
	func_109("TOW_TUT_01");
	unk_0x4E8E15513E171E54("TOWT_OBJ_03");
	unk_0x4E8E15513E171E54("TOWT_OBJ_03a");
	unk_0x4E8E15513E171E54("TOWT_OBJ_03G");
	unk_0x4E8E15513E171E54("TOWT_OBJ_03Ga");
	unk_0x4E8E15513E171E54("TOWT_OBJS_03");
}

void func_109(char* sParam0)
{
	if (func_110(sParam0))
	{
		unk_0x428C32CC68809A35(1);
	}
}

bool func_110(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_111()
{
	if (bLocal_791)
	{
		if (bLocal_446 && !func_47())
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_112()
{
	int iVar0;
	
	if (((!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0)) && unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6)) || (Global_113969.f_19976.f_3 == 0 || Global_113969.f_19976.f_3 > 2))
	{
		return;
	}
	switch (iLocal_850)
	{
		case 0:
			if (!func_7(&uLocal_895))
			{
				func_264(&uLocal_895);
				iLocal_850 = 1;
			}
			break;
		
		case 1:
			if (func_7(&uLocal_895))
			{
				if (func_4(&uLocal_895) > 10f)
				{
					if (!unk_0x3273F980CC5E02CD() && !func_47())
					{
						iVar0 = (unk_0xC5935DFB3F39785A(0, 65535) % 2);
						if (iVar0 == 0)
						{
							func_104("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_104("TOW_TUT_02", -1);
						}
						else
						{
							func_104("TOW_TUT_04C", -1);
						}
						func_59(&uLocal_895);
						iLocal_850 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_895))
			{
				if (func_4(&uLocal_895) > 15f)
				{
					if (!unk_0x3273F980CC5E02CD() && !func_47())
					{
						func_104("TOW_TUT_03", -1);
						func_59(&uLocal_895);
						iLocal_850 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&uLocal_895))
			{
				if (func_4(&uLocal_895) > 15f)
				{
					if (!unk_0x3273F980CC5E02CD() && !func_47())
					{
						func_104("TOW_TUT_01", -1);
						iLocal_850 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_113(int iParam0, var uParam1)
{
	if (func_11(Local_43[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230,8514f, -1181,072f, 21,06031f };
			uParam1->f_3 = { -230,4658f, -1163,16f, 28,99641f };
			uParam1->f_6 = 22,25f;
			uParam1->f_17 = { Local_43[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204,0603f, -1390,024f, 30,25342f };
			uParam1->f_3 = { -207,5665f, -1382,582f, 33,46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_43[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204,0603f, -1390,024f, 30,25342f };
			uParam1->f_3 = { -207,5665f, -1382,582f, 33,46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_43[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538,747f, -177,535f, 74,484f };
			uParam1->f_3 = { 528,747f, -177,535f, 34,484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_43[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158,944f, -776,686f, 77,608f };
			uParam1->f_3 = { 1118,944f, -776,686f, 37,608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_43[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798,455f, -821,201f, 46,186f };
			uParam1->f_3 = { 813,455f, -821,201f, 6,186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_43[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504,934f, 4085,125f, 58,636f };
			uParam1->f_3 = { 2500,285f, 4075,156f, 18,636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_43[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256,5623f, 2600,458f, 43,3306f };
			uParam1->f_3 = { 268,6701f, 2602,716f, 46,74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_43[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398,7471f, -1650,806f, 27,29324f };
			uParam1->f_3 = { 434,1311f, -1610,011f, 33,34294f };
			uParam1->f_6 = 40,5f;
			uParam1->f_14 = { 400,2854f, -1632,597f, 28,29278f };
			uParam1->f_17 = { Local_44[0 /*3*/] };
			uParam1->f_7 = { 396,8347f, -1639,045f, 27,29278f };
			uParam1->f_10 = { 408,0073f, -1625,608f, 33,29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_114(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

int func_115(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_790)
			{
				if ((func_122(Local_822[iParam1 /*20*/].f_6, iLocal_898, &iLocal_447, 10, 150f, 4f, 1) || iLocal_785) || iLocal_214)
				{
					if (!bLocal_768)
					{
						iLocal_447 = 0;
						func_121(&iLocal_442);
						if (unk_0x9B5C1660CCDF7189(Local_822[iParam1 /*20*/], joaat("script_task_turn_ped_to_face_entity")) != 1)
						{
							unk_0x0E95B96CFEFE7B61(Local_822[iParam1 /*20*/], unk_0x4A8C381C258A124D(), -1);
						}
						bLocal_768 = true;
					}
					if (bLocal_768)
					{
						if (unk_0x65FFA94B82A71741(iLocal_898, unk_0xD1A6A821F5AC81DB(Local_822[iParam1 /*20*/], 1), 25f, 25f, 25f, 0, 1, 0))
						{
							if (unk_0x13CCB1AD131C1082(Local_822[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								unk_0x08D8528BA8E43641(Local_822[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_120())
							{
								if (iLocal_168 == 1)
								{
									if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
									{
										func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
										func_258(&Local_394, 5, Local_822[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_172(&Local_394, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_113969.f_19976.f_5 == 2)
									{
										func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
										func_258(&Local_394, 6, Local_822[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_172(&Local_394, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									unk_0xEBA229B2E0BB05E0(Local_822[iParam1 /*20*/], iLocal_898, 20000, 0, 2f, 1048577, 0, 0);
								}
								else if (iLocal_168 == 3)
								{
									if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
									{
										func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
										func_258(&Local_394, 5, Local_822[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_172(&Local_394, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_113969.f_19976.f_7 == 2)
									{
										func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
										func_258(&Local_394, 6, Local_822[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_172(&Local_394, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									unk_0xEBA229B2E0BB05E0(Local_822[iParam1 /*20*/], iLocal_898, 20000, 0, 2f, 1048577, 0, 0);
								}
								if (iLocal_785)
								{
									unk_0xFE54B8568B2ABD12(&(Local_822[iParam1 /*20*/].f_8));
									if (unk_0xFC8BFE4B41177C22(Local_822[iParam1 /*20*/]))
									{
										Local_822[iParam1 /*20*/].f_8 = unk_0x18E23E031A9B798F(Local_822[iParam1 /*20*/]);
										unk_0x61183D6239A9D7B8(Local_822[iParam1 /*20*/].f_8, 3);
										unk_0x5D3946F818C6B331(Local_822[iParam1 /*20*/].f_8, 0,7f);
									}
								}
								system::settimera(0);
								*iParam0 = 1;
							}
						}
						else if (unk_0x65FFA94B82A71741(iLocal_898, unk_0xD1A6A821F5AC81DB(Local_822[iParam1 /*20*/], 1), 50f, 50f, 50f, 0, 1, 0))
						{
							if (!iLocal_809)
							{
								if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
								{
									func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
									func_258(&Local_394, 5, Local_822[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_172(&Local_394, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_809 = 1;
									}
								}
								else if (Global_113969.f_19976.f_7 == 2)
								{
									func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
									func_258(&Local_394, 6, Local_822[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_172(&Local_394, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_809 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_772 = true;
			func_59(&uLocal_889);
			func_59(&uLocal_874);
			func_106(Local_822[iParam1 /*20*/].f_8);
			if (!unk_0xC450B06E5AAA0985(Local_822[0 /*20*/].f_9))
			{
				if (unk_0xFC8BFE4B41177C22(Local_822[iParam1 /*20*/]))
				{
					Local_822[0 /*20*/].f_9 = unk_0x18E23E031A9B798F(Local_822[iParam1 /*20*/]);
					unk_0x61183D6239A9D7B8(Local_822[0 /*20*/].f_9, 3);
					unk_0x5D3946F818C6B331(Local_822[0 /*20*/].f_9, 0,7f);
				}
			}
			func_114("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			unk_0x06CD913C241C765E("TOWBUDDIES", &uLocal_821);
			unk_0xD414C47AFF81382A(1, uLocal_821, joaat("player"));
			unk_0x3CEA1FD137ACE2D9(Local_822[iParam1 /*20*/], uLocal_821);
			func_119(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!unk_0xCECDBB848D53DEB2(Local_822[iParam1 /*20*/], iLocal_898, 0))
			{
				if (func_116(&uLocal_913, Local_822[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_873 = 11;
					func_268();
				}
			}
			if (unk_0xCECDBB848D53DEB2(Local_822[iParam1 /*20*/], iLocal_898, 0))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
				{
					unk_0x0B74F181ADFC39BF(iLocal_898, 9);
					func_106(Local_822[0 /*20*/].f_9);
				}
			}
			if (unk_0xCECDBB848D53DEB2(Local_822[iParam1 /*20*/], iLocal_898, 0) && !unk_0x1F9EB85925C3ECD7())
			{
				if (iLocal_168 == 1)
				{
					if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
					{
						if (iLocal_785)
						{
							func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWTRAINF", 0, 1);
							func_172(&Local_394, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWTRAINF", 0, 1);
							func_172(&Local_394, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_113969.f_19976.f_5 == 2)
					{
						if (iLocal_785)
						{
							func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_172(&Local_394, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_172(&Local_394, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_168 == 3)
				{
					if (Global_113969.f_19976.f_7 == 0 || Global_113969.f_19976.f_7 == 1)
					{
						if (iLocal_785)
						{
							func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWBREAKM", 0, 1);
							func_172(&Local_394, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWBREAKM", 0, 1);
							func_172(&Local_394, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_113969.f_19976.f_7 == 2)
					{
						if (iLocal_785)
						{
							func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_172(&Local_394, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_172(&Local_394, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0xCECDBB848D53DEB2(Local_822[iParam1 /*20*/], iLocal_898, 0))
			{
				func_119(iParam1);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
				{
					if (iLocal_785 && unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!unk_0xC450B06E5AAA0985(Local_822[0 /*20*/].f_8))
				{
					if (unk_0xFC8BFE4B41177C22(Local_822[iParam1 /*20*/].f_6) && !unk_0x1C2F771CDC87A3A5(Local_822[iParam1 /*20*/].f_6, 0))
					{
						Local_822[0 /*20*/].f_8 = unk_0x18E23E031A9B798F(Local_822[iParam1 /*20*/].f_6);
						unk_0x61183D6239A9D7B8(Local_822[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
				{
					if (!unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6))
					{
						func_114("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_864, "TOWT_OBJ_03", 64);
					}
				}
				func_59(&uLocal_874);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_116(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = unk_0x1DD05E817C89C737();
			uParam0->f_2 = func_117(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
			}
			if (system::vdist2(Var0, Var1) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_117(int iParam0, int iParam1)
{
	return func_118(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), iParam0, iParam1);
}

float func_118(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

void func_119(int iParam0)
{
	int iVar0;
	
	bLocal_790 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xC450B06E5AAA0985(Local_822[iVar0 /*20*/].f_8))
			{
				unk_0xFE54B8568B2ABD12(&(Local_822[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_120()
{
	float fVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
	{
		if (unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6))
		{
			fVar0 = unk_0xDF93B3CFAC96698F(iLocal_898);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x8E4825CCACA34B58(*iParam0);
		unk_0x394AFAC073E1F277(*iParam0);
		*iParam0 = -1;
	}
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x0101C509A6E67F99(iParam0))
		{
			uVar0 = unk_0xBD545F8729E9F413(iParam0);
		}
	}
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uVar0, 0) && unk_0x4FAFF4BCB7633475(iVar0))
		{
			return 0;
		}
	}
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (bParam6)
			{
			}
			if (!unk_0xF6C26AE940C14749(iParam0) && func_117(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_117(iParam0, 1) < 8f) && unk_0xDF93B3CFAC96698F(iParam1) < fParam5) && !unk_0xF6C26AE940C14749(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_123()
{
	int iVar0;
	
	if (!bLocal_772)
	{
		iVar0 = system::round(((300f - func_127(&uLocal_889)) * 1000f));
		if (iLocal_168 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_124(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_124(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_124(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_126(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_125(7, bVar0);
		Global_1670224.f_4714[bVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[bVar0] = iParam2;
		Global_1670224.f_4714.f_216[bVar0] = iParam3;
		Global_1670224.f_4714.f_183[bVar0] = iParam4;
		Global_1670224.f_4714.f_194[bVar0] = iParam5;
		Global_1670224.f_4714.f_249[bVar0] = iParam6;
		Global_1670224.f_4714.f_260[bVar0] = iParam7;
		Global_1670224.f_4714.f_205[bVar0] = iParam8;
		Global_1670224.f_4714.f_314[bVar0] = iParam9;
		Global_1670224.f_4714.f_325[bVar0] = iParam10;
		Global_1670224.f_4714.f_357[bVar0] = iParam11;
		Global_1670224.f_4714.f_238[bVar0] = iParam12;
		Global_1670224.f_4714.f_271[bVar0] = iParam13;
		Global_1670224.f_4714.f_368[bVar0] = iParam14;
		Global_1670224.f_4714.f_379[bVar0] = iParam15;
		Global_1670224.f_4714.f_390[bVar0] = iParam16;
		Global_1670224.f_4714.f_227[bVar0] = iParam17;
	}
}

void func_125(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), bParam1);
}

int func_126(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

float func_127(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_128(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_112604, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_112604, bParam0);
	}
	Global_112603 = 1;
}

void func_129()
{
	int iVar0;
	
	iVar0 = func_130(&Local_43, Local_466[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_467 = { Local_43[iVar0 /*3*/] };
		func_113(iVar0, &Local_823);
	}
	else
	{
		Local_467 = { Local_43[0 /*3*/] };
	}
}

int func_130(var uParam0, struct<3> Param1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = system::vdist2(*(uParam0[iVar0 /*3*/]), Param1);
			if (fVar3 < fVar2 && fVar3 > fParam2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_131(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	fLocal_178 = func_9(Local_861, 0);
	Local_466[0 /*3*/] = { Local_861 };
	sLocal_903 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_137(Local_861, fLocal_862, uParam2, 0))
		{
			func_136(Local_822[0 /*20*/].f_6, &uLocal_842, &uLocal_844);
			unk_0x2814BEDF5E0AF4C0(Local_822[0 /*20*/].f_6, 1);
			unk_0x439C904840715871(Local_822[0 /*20*/].f_6, 0);
			unk_0x788F35D395511DFE(Local_822[0 /*20*/].f_6, 1, 1);
			unk_0x5FE0938FDE9B0958(Local_822[0 /*20*/].f_6, 1);
			return 1;
		}
	}
	else if (func_132(bParam4, 0))
	{
		func_136(Local_822[0 /*20*/].f_6, &uLocal_842, &uLocal_844);
		unk_0x2814BEDF5E0AF4C0(Local_822[0 /*20*/].f_6, 1);
		unk_0x439C904840715871(Local_822[0 /*20*/].f_6, 0);
		unk_0x788F35D395511DFE(Local_822[0 /*20*/].f_6, 1, 1);
		unk_0x5FE0938FDE9B0958(Local_822[0 /*20*/].f_6, 1);
		return 1;
	}
	return 0;
}

int func_132(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_134(Local_391[iLocal_448 /*23*/].f_1, Local_391[iLocal_448 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_178 = func_9(Local_391[iLocal_448 /*23*/].f_1, 0);
	Local_466[0 /*3*/] = { Local_391[iLocal_448 /*23*/].f_1 };
	if (Local_391[iLocal_448 /*23*/] == 2)
	{
		unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, 0f, 1,2f, 0f, 1600f, 1600f, 1);
		unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, 0f, 0,75f, 0,05f, 1600f, 1600f, 1);
		unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, -0,7f, 0f, 0f, 1600f, 1600f, 1);
		unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, 0,7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_391[iLocal_448 /*23*/] == 4)
	{
		fLocal_862 = -1f;
		iLocal_782 = 1;
		iLocal_899 = unk_0x5779387E956077A6(joaat("ambulance"), Local_392[func_257() /*28*/].f_23, Local_392[func_257() /*28*/].f_26, 1, 1, 0);
		if (!unk_0x1C2F771CDC87A3A5(iLocal_899, 0))
		{
			unk_0x4539850624F18A9E(iLocal_899, 1);
			unk_0xC229299217554C78(iLocal_899, 1, 1, 0);
			iLocal_900 = unk_0x8728A378EF2B46B2(iLocal_899, 4, joaat("s_m_m_paramedic_01"), -1, 1, 1);
		}
		if (!func_11(Local_392[func_257() /*28*/].f_17))
		{
			uLocal_393 = func_133(Local_392[func_257() /*28*/].f_17, Local_392[func_257() /*28*/].f_20);
		}
		switch (Local_391[iLocal_448 /*23*/].f_21)
		{
			case 1:
				unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, -0,5223f, 2,455f, 0,0784f, 200f, 250f, 1);
				unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, -1f, 1,5f, -0,5f, 200f, 250f, 1);
				break;
			
			case 0:
				unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, 0,6012f, 2,4222f, 0,0245f, 200f, 250f, 1);
				unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, 1f, 1,5f, -0,5f, 200f, 250f, 1);
				break;
			
			case 2:
				unk_0x2BDD547718FF1F1A(Local_822[0 /*20*/].f_6, 0,1414f, 1,8401f, 0,0342f, 200f, 350f, 1);
				break;
		}
		unk_0xBFE60A5CC0C835D8(Local_822[0 /*20*/].f_6, 0, 0, 0);
	}
	if (bParam0)
	{
		bLocal_188 = true;
		if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
		{
			Local_822[0 /*20*/] = unk_0x8728A378EF2B46B2(Local_822[0 /*20*/].f_6, 26, joaat("a_f_m_bevhills_01"), -1, 1, 1);
		}
		else if (Global_113969.f_19976.f_5 == 2)
		{
			Local_822[0 /*20*/] = unk_0x8728A378EF2B46B2(Local_822[0 /*20*/].f_6, 26, joaat("a_m_y_genstreet_02"), -1, 1, 1);
		}
		else
		{
			Local_822[0 /*20*/] = unk_0x8728A378EF2B46B2(Local_822[0 /*20*/].f_6, 26, uLocal_818[0], -1, 1, 1);
		}
	}
	return 1;
}

var func_133(struct<3> Param0, struct<3> Param1)
{
	unk_0x89C4F1335B4A6633(Param0, Param1);
	unk_0xA8C09F16998DFD28(Param0, Param1, 1);
	return unk_0xA7B0B03284E7503C(Param0, Param1, 0, 1, 1, 1, 1);
}

int func_134(struct<3> Param0, var uParam1, int iParam2, bool bParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam2 = func_135(&Local_822);
	if (*iParam2 == -1)
	{
		return 0;
	}
	if (iLocal_839 >= 2)
	{
		iLocal_839 = 0;
	}
	Local_822[*iParam2 /*20*/].f_6 = unk_0x5779387E956077A6(iLocal_817[iLocal_839], Param0, uParam1, 1, 1, 0);
	unk_0x788F35D395511DFE(Local_822[*iParam2 /*20*/].f_6, 1, 1);
	iLocal_839++;
	fLocal_178 = func_9(Param0, 0);
	if (iLocal_168 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_391[iLocal_448 /*23*/].f_10))
	{
		Local_822[*iParam2 /*20*/].f_17 = unk_0x44589DAC2564FF02(Local_391[iLocal_448 /*23*/].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_822[*iParam2 /*20*/].f_17 = unk_0x44589DAC2564FF02(Param0, fVar0, 0f, 0);
	}
	Local_822[*iParam2 /*20*/].f_18 = unk_0x44589DAC2564FF02(Param0, fVar1, 2,5f, 0);
	Local_822[*iParam2 /*20*/].f_19 = unk_0x44589DAC2564FF02(Param0, fVar2, 4f, 0);
	if (bParam3)
	{
		if (Local_822[*iParam2 /*20*/].f_15)
		{
			unk_0xA6175150F92EE83B(Local_822[*iParam2 /*20*/].f_6, 1);
			unk_0x2AEBE39F6BF7D6BC(Local_822[*iParam2 /*20*/].f_6, 1f);
			unk_0x64134834C866AE60(Local_822[*iParam2 /*20*/].f_6, 1);
		}
		else
		{
			unk_0xA6175150F92EE83B(Local_822[*iParam2 /*20*/].f_6, 1);
			unk_0x2AEBE39F6BF7D6BC(Local_822[*iParam2 /*20*/].f_6, 1f);
			unk_0x64134834C866AE60(Local_822[*iParam2 /*20*/].f_6, 1);
		}
	}
	if (!bLocal_790 && uParam4)
	{
		if (unk_0xFC8BFE4B41177C22(Local_822[*iParam2 /*20*/].f_6))
		{
			Local_822[*iParam2 /*20*/].f_8 = unk_0x18E23E031A9B798F(Local_822[*iParam2 /*20*/].f_6);
			unk_0x61183D6239A9D7B8(Local_822[*iParam2 /*20*/].f_8, 3);
		}
	}
	iLocal_838++;
	func_264(&(Local_822[*iParam2 /*20*/].f_11));
	return 1;
}

int func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((uParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(int iParam0, var uParam1, var uParam2)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		*uParam1 = unk_0x8D91ADE44AC79BC9(iParam0);
		*uParam2 = *uParam1;
	}
}

int func_137(struct<3> Param0, float fParam1, var uParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	
	if (!func_134(Param0, fParam1, uParam2, 1, iParam3))
	{
		return 0;
	}
	if (*uParam2 == -1)
	{
	}
	unk_0xBFE60A5CC0C835D8(Local_822[*uParam2 /*20*/].f_6, 4, 0, 0);
	unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(Local_822[*uParam2 /*20*/].f_6), &Var1, &Var2);
	Var3 = { Var2 - Var1 };
	Var3 = { Var3 / Vector(2f, 2f, 2f) };
	iLocal_782 = 1;
	Var0 = { unk_0x0D1381B6E0F3987D(Local_822[*uParam2 /*20*/].f_6, 1,5f, 0f, 0f) };
	Var4 = { unk_0xD1A6A821F5AC81DB(Local_822[*uParam2 /*20*/].f_6, 1) };
	uVar5 = unk_0xCFC0C995455A6204(Local_822[*uParam2 /*20*/].f_6);
	uLocal_848 = unk_0x44589DAC2564FF02(unk_0xF10F2A2453AF1DFB(Var4, uVar5, -1,5f, -30f, 0f), 10f, 0f, 0);
	uLocal_849 = unk_0x44589DAC2564FF02(unk_0xF10F2A2453AF1DFB(Var4, uVar5, -1,5f, 30f, 0f), 10f, 0f, 0);
	unk_0x60040CDD28AA1BC3(Var0, 30f, 0, 0, 0, 0, 0, 0, 0);
	Local_392[func_257() /*28*/][0 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 1f) };
	return 1;
}

int func_138(var uParam0, float fParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	fVar4 = 0f;
	fVar5 = 0f;
	iVar6 = (unk_0xC5935DFB3F39785A(0, 3999) / 1000);
	if (iVar6 == 0)
	{
		fVar4 = -unk_0xD2AA6F822D3A55D2(450f, 700f);
		fVar5 = unk_0xD2AA6F822D3A55D2(-100f, 100f);
	}
	else if (iVar6 == 1)
	{
		fVar4 = unk_0xD2AA6F822D3A55D2(450f, 700f);
		fVar5 = unk_0xD2AA6F822D3A55D2(100f, 100f);
	}
	else if (iVar6 == 2)
	{
		fVar5 = unk_0xD2AA6F822D3A55D2(450f, 700f);
		fVar4 = unk_0xD2AA6F822D3A55D2(-100f, 100f);
	}
	else
	{
		fVar5 = -unk_0xD2AA6F822D3A55D2(450f, 700f);
		fVar4 = unk_0xD2AA6F822D3A55D2(-100f, 100f);
	}
	Var0 = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), fVar4, fVar5, 0f) };
	if (!unk_0x0771D4899F0EDF3E(Var0, 10f, 1, 1, 1, &Var3, &uVar2))
	{
		return 0;
	}
	unk_0x6009FBA2EAAA60BE(Var3, 2, uParam2, fParam1, &uVar1, 1, 1077936128, 0);
	*uParam0 = { Var3 };
	if (unk_0x486FF5D06E9659F1(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476,1537f, 132,6556f, 62,9586f };
		*fParam1 = 87,951f;
	}
	if (func_139(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_139(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_140(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1226C55CA7D2269A() || func_142())
	{
		uVar0 = iParam0;
		unk_0x012C74D626CB4559(8, &uVar0, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_141())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5F974E79EAE32BE7(8, &cVar1);
	}
}

var func_141()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_142()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_143()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xC450B06E5AAA0985(Local_67[iVar0 /*3*/].f_1))
		{
			if (unk_0x1C2F771CDC87A3A5(Local_67[iVar0 /*3*/], 0))
			{
				unk_0xFE54B8568B2ABD12(&(Local_67[iVar0 /*3*/].f_1));
			}
			else if (Local_67[iVar0 /*3*/].f_2 && func_117(Local_67[iVar0 /*3*/], 1) > 200f)
			{
				unk_0xFE54B8568B2ABD12(&(Local_67[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_144()
{
	if (!unk_0x1B79E937E91F40C3(&cLocal_61, ""))
	{
		if (!func_47())
		{
			func_172(&Local_49, &cLocal_61, &cLocal_64, 9, 0, 0, 0);
			StringCopy(&cLocal_61, "", 16);
		}
	}
}

void func_145(var uParam0, float fParam1, bool bParam2)
{
	if (func_146(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_104(&cLocal_68, -1);
		}
		else
		{
			func_114(&cLocal_68, 7500, 1);
		}
	}
}

int func_146(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_57(uParam0);
		return 1;
	}
	return 0;
}

void func_147(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_2738934.f_4712, 26))
		{
			return;
		}
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xFF692AB7350A74D7(sVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
	{
		if (func_110(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_110(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_148(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
	if (unk_0xFF692AB7350A74D7(iVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_110(iVar0))
	{
		func_170();
	}
	if (!unk_0xE37AC296E66C33AF())
	{
		if (func_165(uParam0, bParam4, bParam6, 0))
		{
			func_164(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_153(iVar0))
			{
				if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if ((unk_0x7B780C491DEC834E(Param1, 1f) && !unk_0x4C705AAF75363287()) && iParam5)
					{
						if (!func_110(iVar0))
						{
							func_104(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_152(1);
							}
						}
					}
				}
			}
		}
		else if (func_153(iVar0))
		{
			if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
			{
				if ((unk_0x7B780C491DEC834E(Param1, 1f) && !unk_0x4C705AAF75363287()) && iParam5)
				{
					if (!func_110(iVar0))
					{
						func_104(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
						{
							func_152(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xFF692AB7350A74D7(iVar0))
		{
			if (func_110(iVar0) && unk_0x4C705AAF75363287())
			{
				unk_0x428C32CC68809A35(1);
			}
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					func_147(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				func_147(uParam0, iVar0, 1);
			}
		}
		if (!func_165(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_151(uParam0))
			{
				func_149(uParam0);
			}
		}
	}
}

void func_149(var uParam0)
{
	if (func_150(unk_0x4A8C381C258A124D()))
	{
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(1);
		unk_0x3C44EF9027A21847(0);
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		unk_0x21172E4DF035B893("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_150(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x55B80B6E7AB61270(iParam0))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x0101C509A6E67F99(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	return 0;
}

int func_152(bool bParam0)
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113969.f_10052.f_100++;
			}
			return Global_113969.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113969.f_10052.f_101++;
			}
			return Global_113969.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113969.f_10052.f_102++;
			}
			return Global_113969.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_153(char* sParam0)
{
	if (!func_154(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_110(sParam0)) || func_110("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_152(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_152(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_152(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_154(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x3555462DB47B7AB1())
	{
		return 0;
	}
	if (func_163(0))
	{
		return 0;
	}
	if (func_162())
	{
		return 0;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61347)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				return 0;
			}
			if (unk_0xDD851254D8C7D338())
			{
				return 0;
			}
		}
	}
	if ((func_161() || func_160(Global_4718592.f_185586)) || func_159())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_158(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_157(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_155(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_155(int iParam0)
{
	if (iParam0 != func_20())
	{
		if (func_156(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_156(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_156(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x5B59C12A02157D00(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				iVar1 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xC39AE5D390581AD5(iVar0, iVar3, 0))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, iVar3, 0) == iParam0)
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

var func_159()
{
	return Global_2684504.f_19;
}

bool func_160(int iParam0)
{
	return iParam0 == 51;
}

var func_161()
{
	return Global_2684504.f_18;
}

bool func_162()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_163(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_164(var uParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0A0A06C514052E80(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x861EAB644E1BBA7A(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xE237FA90A8AFEE59(unk_0x4A8C381C258A124D(), Param1, -1, iVar2, iVar3);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_165(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_151(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_169(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (!func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_168(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (func_167(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_151(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_154(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_170();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_154(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_154(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_154(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_154(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_170()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

int func_171(bool bParam0)
{
	if (bLocal_213 || iLocal_212)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_214)
		{
			return 0;
		}
	}
	return 1;
}

bool func_172(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_15(sParam2, iParam3, 0);
}

void func_173()
{
	Global_21152 = 0;
	func_35();
}

int func_174()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_814) && !unk_0x1C2F771CDC87A3A5(iLocal_814, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_814, 1) };
	}
	if (system::vdist2(Var0, Var1) > 2500f)
	{
		if (!bLocal_800)
		{
			func_175("TOW_TUT_RETONYA", 7500, 1);
			bLocal_800 = true;
			if (!unk_0xC450B06E5AAA0985(uLocal_173))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_814, 0))
				{
					uLocal_173 = unk_0x18E23E031A9B798F(iLocal_814);
					unk_0x61183D6239A9D7B8(uLocal_173, 3);
					unk_0x5D3946F818C6B331(uLocal_173, 0,5f);
				}
			}
			if (unk_0xC450B06E5AAA0985(Local_822[0 /*20*/].f_8))
			{
				unk_0xFE54B8568B2ABD12(&(Local_822[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_800)
	{
		bLocal_800 = false;
		if (unk_0xC450B06E5AAA0985(uLocal_173))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_173);
		}
		if (!unk_0xC450B06E5AAA0985(Local_822[0 /*20*/].f_8))
		{
			Local_822[0 /*20*/].f_8 = unk_0x34864AB7DA700AA6(Local_466[0 /*3*/]);
			if (iLocal_214)
			{
				unk_0x61183D6239A9D7B8(Local_822[0 /*20*/].f_8, 5);
				unk_0xBC64B805EE071A37(Local_822[0 /*20*/].f_8, 1);
				unk_0x032F99DF3B301AFA(Local_822[0 /*20*/].f_8, 5);
			}
			else
			{
				unk_0x61183D6239A9D7B8(Local_822[0 /*20*/].f_8, 3);
				unk_0xBC64B805EE071A37(Local_822[0 /*20*/].f_8, 1);
				unk_0x032F99DF3B301AFA(Local_822[0 /*20*/].f_8, 3);
			}
		}
	}
	if (system::vdist2(Var0, Var1) > 22500f)
	{
		if (bLocal_800)
		{
			return 1;
		}
	}
	return 0;
}

void func_175(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 0);
}

int func_176(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (!func_183(*uParam2, 1))
		{
			if (func_182(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_183(*uParam2, 2))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_183(*uParam2, 4))
		{
			if (func_180(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_183(*uParam2, 8))
		{
			if (func_179(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_183(*uParam2, 128);
		if (bParam4)
		{
			if (func_177(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_183(*uParam2, 16))
		{
			if (func_177(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (iParam7 && unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_143)
		{
			iLocal_144 = unk_0x8D91ADE44AC79BC9(iParam0);
			bLocal_143 = true;
		}
		iLocal_145 = unk_0x8D91ADE44AC79BC9(iParam0);
		iLocal_146 = (iLocal_144 - iLocal_145);
		iVar0 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_146) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_143)
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
			{
				if (IntToFloat(iLocal_146) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(iVar1, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (unk_0xA6534E6C7AE314D6(iParam0))
			{
				if (unk_0xC1089D3918F03D33(iParam0) == unk_0x4A8C381C258A124D())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x65FFA94B82A71741(iParam0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x729CB628AF931FC1(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x5BDFCAB88CC62A9B(iParam0))
		{
			return 1;
		}
	}
	if (func_178(unk_0x4A8C381C258A124D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8BF5256C439DF778(iParam0) && func_117(iParam0, 1) < 1,5f)
		{
			return 1;
		}
		else if (unk_0x7F420695E3F776FB(iParam0, 0))
		{
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), unk_0x6EF03BE64E058E2F(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iParam0))
		{
			return 1;
		}
		if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x23B29877D0BE9547(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x65F146FF416F109F(iParam0))
		{
			if (system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(iParam1, 1)) < 2,5f)
			{
				if (unk_0x3644984C9D7B57EF(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_179(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x11552FA9DCB8E126(iParam0, 4))
	{
		if (unk_0x65F146FF416F109F(iParam0) && !unk_0x3C2402675D8FFADA(iParam0))
		{
			if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_180(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	if (unk_0x398315D0C90DE6F6(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xA646A9FF47E2E515(Var0, system::to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x11552FA9DCB8E126(iParam0, 2))
	{
		if (unk_0x65F146FF416F109F(iParam0))
		{
			if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x3644984C9D7B57EF(unk_0xBD545F8729E9F413(iParam1), iParam0, 120f) && unk_0xAD915B5E38F323E5(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x7F420695E3F776FB(unk_0xBD545F8729E9F413(iParam1), 0))
			{
				iVar1 = unk_0x6EF03BE64E058E2F(unk_0xBD545F8729E9F413(iParam1), 0);
			}
			if (unk_0x74CD4FE549433E92(iParam0) || func_181(iVar1))
			{
				if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x3644984C9D7B57EF(unk_0xBD545F8729E9F413(iParam1), iParam0, 120f) && unk_0xAD915B5E38F323E5(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xE94C7FA27FEB00DD((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0) != 0)
			{
				if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_118(unk_0x4A8C381C258A124D(), iParam0, 1) < 40f)
						{
							if (unk_0x66EE98F15844BE4D(unk_0x259BE71D8A81D4FA(), &iVar1))
							{
								if ((unk_0x55B80B6E7AB61270(iVar1) && unk_0xE93EDE86BBB66532(iVar1) == iParam0) || (unk_0x0101C509A6E67F99(iVar1) && unk_0xBD545F8729E9F413(iVar1) == unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0)))
								{
									if ((unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()) && unk_0x6D05C5731A838CB3(0, 24)) || (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0x6D05C5731A838CB3(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_182(int iParam0, var uParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 90f))
				{
					if (func_117(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1DD05E817C89C737();
						}
						else if ((unk_0x1DD05E817C89C737() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_184(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)
{
	int iVar0;
	
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (unk_0xFC8BFE4B41177C22((*uParam4)[iVar0]))
		{
			if (!unk_0x1C2F771CDC87A3A5((*uParam4)[iVar0], 0) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (func_176((*uParam4)[iVar0], 0, &uLocal_160, &iLocal_167, 0, 1, 0, 1, 1))
				{
					unk_0xD844F5E50DAB6FF7((*uParam4)[iVar0], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_122(iParam1, iParam3, &iLocal_447, 20, 70f, 65f, 0))
			{
				iLocal_447 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (unk_0xFC8BFE4B41177C22(iParam2))
			{
				if (!unk_0x1C2F771CDC87A3A5(iParam1, 0) && !unk_0x1C2F771CDC87A3A5(iParam2, 0))
				{
					unk_0x7C8E9DE09D4AD3FF(iParam2, iParam1, 50f, 786469);
					unk_0x44FB298D6382876D(iParam2, 1);
					unk_0xF09E30AF1B8FB379(&iParam2);
					unk_0x68298CA6191CDFDB(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_214)
			{
				func_59(&uLocal_395);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (unk_0xFC8BFE4B41177C22((*uParam4)[iVar0]))
				{
					if (!unk_0x1C2F771CDC87A3A5((*uParam4)[iVar0], 0))
					{
						if (func_117((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_217 = iVar0;
							iLocal_217 = iLocal_217;
							func_59(&uLocal_395);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_392[func_257() /*28*/].f_17))
			{
				func_185(uLocal_393, Local_392[func_257() /*28*/].f_17, Local_392[func_257() /*28*/].f_20);
			}
			if (unk_0x486FF5D06E9659F1(joaat("tonya5")) == 1)
			{
				if (!iLocal_203)
				{
					func_258(&uLocal_225, 3, *uParam8, "TONYA", 0, 1);
					if (func_172(&uLocal_225, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_203 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!unk_0x1C2F771CDC87A3A5((*uParam4)[iVar0], 0))
				{
					unk_0xB5396F1FB088FE38(&uLocal_169);
					unk_0x10425721983AE158(0, sParam6, (*sParam7)[iVar0], 4f, -4f, unk_0xC5935DFB3F39785A(10000, 20000), 0, 0, 0, 0, 0);
					unk_0x761F56E633460973(0, 1193033728, 0);
					unk_0x93C0674FC00824D0(uLocal_169);
					unk_0x4BD42B0527065BB6((*uParam4)[iVar0], uLocal_169);
					unk_0xD0557B139A542F12(&uLocal_169);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (unk_0x486FF5D06E9659F1(joaat("tonya5")) == 1)
			{
				if (!iLocal_203)
				{
					func_258(&uLocal_225, 3, *uParam8, "TONYA", 0, 1);
					if (func_172(&uLocal_225, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_203 = 1;
					}
				}
				if (!iLocal_215)
				{
					if (!unk_0x1C2F771CDC87A3A5(iParam3, 0) && !unk_0x1C2F771CDC87A3A5(*uParam10, 0))
					{
						if (!unk_0x4A64AADF9B40D2AF(iParam3, *uParam10))
						{
							if (!func_7(&uLocal_410))
							{
								func_264(&uLocal_410);
							}
							else if (func_4(&uLocal_410) > 20f)
							{
								if (func_172(&uLocal_225, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_215 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_185(var uParam0, struct<3> Param1, struct<3> Param2)
{
	unk_0xD7B6A43ACC36D868(uParam0, 0);
	unk_0x93586F94C370857F();
	unk_0xA8C09F16998DFD28(Param1, Param2, 0);
}

int func_186(var uParam0, var uParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, float fParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (unk_0xB1EAADCB692D69CE(Var3, &uVar0, 0, 0) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_188(uParam1);
		unk_0x55F7AC4B2B875901(Param2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam9)
		{
			if (fParam6 == -1f)
			{
				fParam6 = func_187(*(uParam0[iVar2 /*3*/]), Param2);
			}
			else
			{
				fParam6 = (fParam6 + 180f);
			}
			if (unk_0x486FF5D06E9659F1(joaat("tonya4")) == 1)
			{
				iVar1 = unk_0xB1DBFEB95C0EFB88(4, joaat("a_m_m_tourist_01"), *(uParam0[iVar2 /*3*/]), fParam6, 1, 1);
				unk_0xD1C578C204015E1F(iVar1, 0, 0, 1, 0);
				unk_0xD1C578C204015E1F(iVar1, 2, 0, 0, 0);
				unk_0xD1C578C204015E1F(iVar1, 3, 0, 2, 0);
				unk_0xD1C578C204015E1F(iVar1, 4, 1, 2, 0);
				unk_0xD1C578C204015E1F(iVar1, 8, 0, 0, 0);
				unk_0xD1C578C204015E1F(iVar1, 10, 1, 1, 0);
				unk_0x55098D9E9AD58806(joaat("a_m_m_tourist_01"));
			}
			else if (unk_0x486FF5D06E9659F1(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = unk_0xB1DBFEB95C0EFB88(4, joaat("a_m_y_genstreet_02"), *(uParam0[iVar2 /*3*/]), fParam6, 1, 1);
					unk_0x55098D9E9AD58806(joaat("a_m_y_genstreet_02"));
				}
				else
				{
					iVar1 = unk_0xB1DBFEB95C0EFB88(4, joaat("a_m_m_bevhills_02"), *(uParam0[iVar2 /*3*/]), fParam6, 1, 1);
					unk_0x55098D9E9AD58806(joaat("a_m_m_bevhills_02"));
				}
			}
			else
			{
				iVar1 = unk_0xB1DBFEB95C0EFB88(4, (*uParam5)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam6, 1, 1);
			}
			unk_0x788F35D395511DFE(iVar1, 1, 1);
			fParam6 = -1f;
			if (iParam9 > 1)
			{
				(*uParam4)[iVar2] = iVar1;
			}
			else
			{
				*uParam3 = iVar1;
			}
			cParam7 = cParam7;
			(*sParam8)[iVar2] = (*sParam8)[iVar2];
			unk_0xAAA71DD7E9059338(iVar1, 1);
			unk_0x0428AFDCAA63B06E(iVar1, 42, 1);
			unk_0x4669032A1DFBB449(iVar1, "move_m@JOG@", 1048576000);
			unk_0x0FB8E752BCC547A9(iVar1, 109, 1);
			if (iLocal_168 == 3)
			{
				unk_0xD0557B139A542F12(&uVar4);
				unk_0xB5396F1FB088FE38(&uVar4);
				unk_0x10425721983AE158(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0, 0, 0, 0);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
				unk_0x93C0674FC00824D0(uVar4);
				if (!unk_0x1C2F771CDC87A3A5(iVar1, 0))
				{
					unk_0x4BD42B0527065BB6(iVar1, uVar4);
				}
				unk_0xD0557B139A542F12(&uVar4);
			}
			iVar2++;
		}
		bLocal_188 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_187(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_188(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_436[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_436[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_436[iVar0 /*18*/].f_8 = { func_189(unk_0xD2AA6F822D3A55D2(0f, 1f), unk_0xD2AA6F822D3A55D2(0f, 1f), 0f) };
		}
		else
		{
			Local_436[iVar0 /*18*/].f_8 = { func_189(0,5f, 1f, 0f) };
		}
		Local_436[iVar0 /*18*/].f_11 = 2f;
		Local_436[iVar0 /*18*/].f_12 = 1f;
		Local_436[iVar0 /*18*/].f_13 = 1f;
		Local_436[iVar0 /*18*/].f_14 = -1f;
		Local_436[iVar0 /*18*/].f_15 = 0,1f;
		Local_436[iVar0 /*18*/].f_17 = 0;
		Local_436[iVar0 /*18*/].f_1 = 1110;
		Local_436[iVar0 /*18*/] = unk_0x0153AEF89004E87C(Local_436[iVar0 /*18*/].f_1, Local_436[iVar0 /*18*/].f_2, Local_436[iVar0 /*18*/].f_5, Local_436[iVar0 /*18*/].f_8, Local_436[iVar0 /*18*/].f_11, Local_436[iVar0 /*18*/].f_12, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

Vector3 func_189(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_190()
{
	func_193();
	switch (iLocal_909)
	{
		case 0:
			func_258(&Local_394, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
			func_258(&Local_394, 3, Local_822[0 /*20*/], sLocal_465, 0, 1);
			unk_0xAAA71DD7E9059338(Local_822[0 /*20*/], 1);
			iLocal_841 = unk_0xC5935DFB3F39785A(35, 80);
			iLocal_909 = 1;
			break;
		
		case 1:
			unk_0xB5396F1FB088FE38(&uLocal_169);
			unk_0x10425721983AE158(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_169);
			unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
			unk_0xD0557B139A542F12(&uLocal_169);
			if (func_9(Local_391[iLocal_448 /*23*/].f_1, 1) < 40f || Local_820.f_1 > 0)
			{
				if (iLocal_168 == 1)
				{
					if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
					{
						func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWTRAINF", 0, 1);
						func_172(&Local_394, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_909 = 2;
					}
					else if (Global_113969.f_19976.f_5 == 2)
					{
						func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_172(&Local_394, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_909 = 2;
					}
				}
			}
			else if (func_10(Local_822[0 /*20*/].f_7, Local_391[iLocal_448 /*23*/].f_1, 1) < IntToFloat(iLocal_841 + 10))
			{
				unk_0x10425721983AE158(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_909 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_391[iLocal_448 /*23*/].f_13))
			{
				Local_391[iLocal_448 /*23*/].f_13.f_2 = 45f;
				Local_391[iLocal_448 /*23*/].f_16.f_2 = -45f;
				if (!unk_0x5105BE70DEF1F5FB(Local_822[0 /*20*/].f_6, Local_391[iLocal_448 /*23*/].f_13, Local_391[iLocal_448 /*23*/].f_16, Local_391[iLocal_448 /*23*/].f_19, 0, 1, 0))
				{
					func_121(&iLocal_442);
					iLocal_779 = 1;
					iLocal_786 = 1;
					bLocal_175 = true;
					if (unk_0x7F420695E3F776FB(Local_822[0 /*20*/], 0))
					{
						unk_0xB5396F1FB088FE38(&uLocal_169);
						unk_0x092B9247AF00F5CF(0, 0, 0);
						unk_0x10425721983AE158(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_169);
						unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
						unk_0xD0557B139A542F12(&uLocal_169);
						iLocal_909 = 4;
					}
				}
			}
			if (func_10(Local_822[0 /*20*/].f_7, Local_391[iLocal_448 /*23*/].f_1, 1) < IntToFloat(iLocal_841 + 15))
			{
				if (Global_113969.f_19976.f_5 == 0 || Global_113969.f_19976.f_5 == 1)
				{
					func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWTRAINF", 0, 1);
					func_172(&Local_394, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_113969.f_19976.f_5 == 2)
				{
					func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_172(&Local_394, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_121(&iLocal_442);
				unk_0xE67051907958B5EB(Local_822[0 /*20*/], Local_822[0 /*20*/].f_7, -1, 2, 2);
				system::settimerb(0);
				iLocal_909 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_822[0 /*20*/].f_7, Local_391[iLocal_448 /*23*/].f_1, 1) < IntToFloat(iLocal_841))
			{
				if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
				{
					if (iLocal_840 == 1)
					{
						func_192(&Local_820);
					}
					iLocal_779 = 1;
					if (unk_0x7F420695E3F776FB(Local_822[0 /*20*/], 0))
					{
						unk_0xB5396F1FB088FE38(&uLocal_169);
						unk_0x092B9247AF00F5CF(0, 0, 0);
						unk_0x30FAA55EAF29F9BE(0, unk_0xF10F2A2453AF1DFB(Local_391[iLocal_448 /*23*/].f_1, Local_391[iLocal_448 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
						unk_0x93C0674FC00824D0(uLocal_169);
						unk_0x1CA08719184AFC6F(Local_822[0 /*20*/], 64, 0);
						unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
						unk_0xD0557B139A542F12(&uLocal_169);
						iLocal_909 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_908 == 8 && iLocal_214) || func_191())
			{
				system::settimerb(3000);
				iLocal_909 = 5;
			}
			break;
		
		case 5:
			iLocal_785 = 1;
			if (system::timerb() > 3000)
			{
				if (func_115(&iLocal_906, 0, "TOW_TRAIN1"))
				{
					iLocal_909 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_191()
{
	if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
	{
		if (bLocal_175)
		{
			switch (iLocal_853)
			{
				case 0:
					if (unk_0x89EC60A4485FD199(Local_822[0 /*20*/]) == 1)
					{
						iLocal_853 = 1;
					}
					break;
				
				case 1:
					if (!unk_0x13CCB1AD131C1082(Local_822[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_853 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_192(var uParam0)
{
	uParam0->f_1 = 0;
	unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
	unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
}

void func_193()
{
	float fVar0;
	
	if (iLocal_779 || ((!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0)) && !unk_0xCECDBB848D53DEB2(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 0)))
	{
		if (iLocal_442 != -1)
		{
			unk_0x8E4825CCACA34B58(iLocal_442);
			unk_0x394AFAC073E1F277(iLocal_442);
			iLocal_442 = -1;
			return;
		}
	}
	if (!iLocal_770)
	{
		iLocal_442 = unk_0xCA369FBC0DE29517();
		iLocal_770 = 1;
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
	{
		if (unk_0x13CCB1AD131C1082(Local_822[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = unk_0x82E64DE58A6B84A8(Local_822[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0,19f && fVar0 <= 0,262f) || (fVar0 >= 0,4f && fVar0 <= 0,6f)) || (fVar0 >= 0,9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0,19f && fVar0 <= 0,262f)
				{
				}
				if (fVar0 >= 0,4f && fVar0 <= 0,6f)
				{
				}
				if (fVar0 >= 0,9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_769)
				{
					unk_0xBD618A73193F9982(iLocal_442, "TOWING_ENGINE_TURNING_MASTER", Local_822[0 /*20*/].f_6, 0, 0, 0);
					iLocal_769 = 1;
				}
			}
			else
			{
				unk_0x8E4825CCACA34B58(iLocal_442);
				iLocal_769 = 0;
			}
		}
	}
}

void func_194()
{
	int iVar0;
	
	func_196();
	unk_0x428C32CC68809A35(1);
	unk_0xA790E8E6FD7393AC(2, 1);
	if (unk_0xA0C7B98BCF1EEF9E(uLocal_452))
	{
		unk_0xD314260005F064BF(&uLocal_452);
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
	{
		unk_0x0B74F181ADFC39BF(iLocal_898, 1);
		unk_0x4539850624F18A9E(iLocal_898, 0);
	}
	unk_0x1B3217FCFCCC3FCF(uLocal_848);
	unk_0x1B3217FCFCCC3FCF(uLocal_849);
	unk_0xD7B6A43ACC36D868(uLocal_901, 0);
	unk_0xD7B6A43ACC36D868(uLocal_902, 0);
	unk_0xA63572E348CC4CFB(Local_860 - Vector(15f, 15f, 15f), Local_860 + Vector(15f, 15f, 15f), 1, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		unk_0x1B3217FCFCCC3FCF(Local_822[iVar0 /*20*/].f_17);
		unk_0x1B3217FCFCCC3FCF(Local_822[iVar0 /*20*/].f_18);
		unk_0x1B3217FCFCCC3FCF(Local_822[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_392[func_257() /*28*/].f_17))
	{
		func_185(uLocal_393, Local_392[func_257() /*28*/].f_17, Local_392[func_257() /*28*/].f_20);
	}
	unk_0x68298CA6191CDFDB(&(Local_822[0 /*20*/].f_6));
	if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
	{
		unk_0xF09E30AF1B8FB379(&(Local_822[0 /*20*/]));
		if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/]))
		{
			if (unk_0x133460AD0F183CC9(Local_822[0 /*20*/]))
			{
				unk_0x5C4B3034CCDA5270(Local_822[0 /*20*/]);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_813))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_813, 0))
		{
			unk_0xF09E30AF1B8FB379(&iLocal_813);
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
	{
		unk_0xEE0BCDB1B5E36BCB(iLocal_898, 1, 1);
		unk_0x68298CA6191CDFDB(&iLocal_898);
	}
	if (iLocal_795)
	{
		unk_0xA63572E348CC4CFB(Local_468, Local_469, 1, 1);
	}
	if (iLocal_792 && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_7, 0))
	{
		unk_0x336AED9579B3D098(Local_822[0 /*20*/].f_7, 1);
		unk_0xC4929897EF5CADC2(&(Local_822[0 /*20*/].f_7), 0);
		unk_0xAE03F542B985A69E(1);
		func_128(0, 1);
		func_128(1, 0);
		func_128(2, 0);
		func_128(3, 1);
		func_128(4, 0);
		func_128(5, 0);
		func_128(6, 0);
		func_128(7, 0);
		func_128(8, 0);
		func_128(9, 0);
		func_128(10, 0);
		func_128(11, 0);
	}
	func_121(&iLocal_440);
	func_121(&iLocal_441);
	func_195(&uLocal_916);
	func_121(&iLocal_442);
	func_147(&uLocal_147, 0, 0);
	if (unk_0x78411E34CF90EA8C(Local_820.f_0))
	{
		func_192(&Local_820);
	}
	unk_0x425BBE19F25A57AB(1f);
	unk_0xCCA6D8A84EE8C88A(joaat("towtruck"), 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_195(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x182120534CCF9023((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_196()
{
	char cVar0[24];
	
	if (unk_0x1226C55CA7D2269A() || func_142())
	{
		unk_0x012C74D626CB4559(StackVal, 0, 0, 0);
	}
	else if (unk_0x0BA1A956D36B210F() || func_141())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x5F974E79EAE32BE7(0, &cVar0);
	}
}

int func_197()
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0) && !unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
	{
		if (unk_0xCECDBB848D53DEB2(Local_822[0 /*20*/], iLocal_898, 0))
		{
			if (unk_0xC450B06E5AAA0985(Local_822[0 /*20*/].f_10))
			{
				unk_0xFE54B8568B2ABD12(&(Local_822[0 /*20*/].f_10));
				func_121(&iLocal_442);
			}
		}
		else if (!unk_0xCECDBB848D53DEB2(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 0))
		{
			func_121(&iLocal_442);
		}
	}
	switch (iLocal_908)
	{
		case 0:
			if (func_9(Local_391[iLocal_448 /*23*/].f_1, 1) < 100f)
			{
				Local_822[0 /*20*/].f_7 = unk_0x767956351E028F74(6, Local_391[iLocal_448 /*23*/].f_6, Local_391[iLocal_448 /*23*/].f_5, 0, 0);
				if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/].f_7))
				{
					Local_822[0 /*20*/].f_10 = unk_0x18E23E031A9B798F(Local_822[0 /*20*/].f_7);
				}
				iLocal_813 = unk_0x8728A378EF2B46B2(Local_822[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
				unk_0xAAA71DD7E9059338(iLocal_813, 1);
				if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_7, 0))
				{
					unk_0xCD56231706809D19(Local_822[0 /*20*/].f_7, 0f);
				}
				func_114("TOW_OBJ_05", 7500, 1);
				system::settimera(0);
				func_200("CROSSING_BELL", &iLocal_443, 1, 0, 226,8878f, -2538,421f, 4,8665f, "TONYA_03_SOUNDSET");
				iLocal_908 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_391[iLocal_448 /*23*/].f_1, 1) < 80f || system::timera() > 10000)
			{
				if (!unk_0xBC2EE32DE886BD08("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0xCAC4020CCF361AC8("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_908 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_7, 0))
			{
				unk_0xCD56231706809D19(Local_822[0 /*20*/].f_7, 26f);
				unk_0x492EE2B9C9BD33C6(Local_822[0 /*20*/].f_7, 22f);
			}
			iLocal_908 = 3;
			break;
		
		case 3:
			if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_7, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
			{
				if (func_10(Local_822[0 /*20*/].f_7, Local_391[iLocal_448 /*23*/].f_1, 1) < 175f)
				{
					func_199(Local_822[0 /*20*/].f_7);
					func_200("TOWING_TRAIN_BRAKES_MASTER", &iLocal_441, 1, Local_822[0 /*20*/].f_7, 0, 0, 0, 0);
					func_198(&uLocal_916, Local_822[0 /*20*/].f_7);
					func_200("TOWING_TRAIN_HORN_MASTER", &iLocal_440, 1, Local_822[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_908 = 4;
				}
			}
			else
			{
				iLocal_908 = 8;
			}
			break;
		
		case 4:
			if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_7, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
			{
				func_199(Local_822[0 /*20*/].f_7);
				if (!unk_0x5105BE70DEF1F5FB(Local_822[0 /*20*/].f_6, Local_391[iLocal_448 /*23*/].f_13, Local_391[iLocal_448 /*23*/].f_16, Local_391[iLocal_448 /*23*/].f_19, 0, 1, 0))
				{
					func_195(&uLocal_916);
				}
				Var0 = { unk_0xD1A6A821F5AC81DB(Local_822[0 /*20*/].f_7, 1) };
				if (func_10(Local_822[0 /*20*/].f_7, Local_391[iLocal_448 /*23*/].f_1, 1) < 3f)
				{
					iLocal_766 = 1;
				}
				if (unk_0x685171EED42BC4DF(Local_822[0 /*20*/].f_7, Local_822[0 /*20*/].f_6))
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
					{
						if (unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6))
						{
							unk_0xD4BC322888F79B7E(iLocal_898, Local_822[0 /*20*/].f_6);
						}
					}
					unk_0xAE89444B15234CCE(Local_822[0 /*20*/].f_6, 1, 0);
					iLocal_908 = 6;
				}
				else if (func_10(Local_822[0 /*20*/].f_6, Var0, 1) < 10f && unk_0x5105BE70DEF1F5FB(Local_822[0 /*20*/].f_6, Local_391[iLocal_448 /*23*/].f_13, Local_391[iLocal_448 /*23*/].f_16, Local_391[iLocal_448 /*23*/].f_19, 0, 1, 0))
				{
					iLocal_766 = 1;
					if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
					{
						if (unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6))
						{
							unk_0xD4BC322888F79B7E(iLocal_898, Local_822[0 /*20*/].f_6);
						}
					}
					unk_0xAE89444B15234CCE(Local_822[0 /*20*/].f_6, 1, 0);
				}
				if (iLocal_766 && func_10(Local_822[0 /*20*/].f_7, Local_391[iLocal_448 /*23*/].f_1, 1) > 4f)
				{
					iLocal_908 = 6;
				}
			}
			else
			{
				iLocal_908 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_214)
			{
				func_114("TOWT_OBJ_03G", 7500, 1);
				if (unk_0xC450B06E5AAA0985(Local_822[0 /*20*/].f_10))
				{
					unk_0xFE54B8568B2ABD12(&(Local_822[0 /*20*/].f_10));
				}
			}
			unk_0xFE54B8568B2ABD12(&(Local_822[0 /*20*/].f_10));
			func_121(&iLocal_440);
			func_121(&iLocal_441);
			func_195(&uLocal_916);
			func_121(&iLocal_442);
			func_121(&iLocal_443);
			iLocal_908 = 7;
			break;
		
		case 7:
			if (!func_47())
			{
				if (!iLocal_214)
				{
					func_114("TOWT_OBJ_03G", 7500, 1);
				}
				if (unk_0xBC2EE32DE886BD08("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0xB43467C43086A6A1("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_908 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_198(var uParam0, var uParam1)
{
	(*uParam0)[0] = unk_0x62750FD2BDD8BD49("scr_ojtt_train_sparks", uParam1, -0,771f, 6,515f, -1,507f, 0f, 0f, -20f, 1,15f, 1, 0, 0);
	(*uParam0)[1] = unk_0x62750FD2BDD8BD49("scr_ojtt_train_sparks", uParam1, 0,771f, 6,515f, -1,507f, 0f, 0f, 20f, 1,15f, 0, 0, 0);
	(*uParam0)[2] = unk_0x62750FD2BDD8BD49("scr_ojtt_train_sparks", uParam1, -0,771f, 3,781f, -1,507f, 0f, 0f, -20f, 1,15f, 1, 0, 0);
	(*uParam0)[3] = unk_0x62750FD2BDD8BD49("scr_ojtt_train_sparks", uParam1, 0,771f, 3,781f, -1,507f, 0f, 0f, 20f, 1,15f, 0, 0, 0);
	(*uParam0)[4] = unk_0x62750FD2BDD8BD49("scr_ojtt_train_sparks", uParam1, -0,771f, -3,743f, -1,507f, 0f, 0f, -20f, 1,15f, 1, 0, 0);
	(*uParam0)[5] = unk_0x62750FD2BDD8BD49("scr_ojtt_train_sparks", uParam1, 0,7711f, -3,743f, -1,507f, 0f, 0f, 20f, 1,15f, 0, 0, 0);
	(*uParam0)[6] = unk_0x62750FD2BDD8BD49("scr_ojtt_train_sparks", uParam1, -0,771f, -6,537f, -1,507f, 0f, 0f, -20f, 1,15f, 1, 0, 0);
	(*uParam0)[7] = unk_0x62750FD2BDD8BD49("scr_ojtt_train_sparks", uParam1, 0,771f, -6,537f, -1,507f, 0f, 0f, 20f, 1,15f, 0, 0, 0);
}

int func_199(int iParam0)
{
	float fVar0;
	
	if (!func_7(&uLocal_437))
	{
		func_264(&uLocal_437);
	}
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&uLocal_437, 0,15f))
	{
		fLocal_444 = (fVar0 - 0,35f);
		if (fLocal_444 < 8f)
		{
			fLocal_444 = 8f;
		}
		func_59(&uLocal_437);
		unk_0xCD56231706809D19(iParam0, fLocal_444);
		unk_0x492EE2B9C9BD33C6(iParam0, fLocal_444);
	}
	return 1;
}

void func_200(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)
{
	func_121(iParam1);
	if (bParam2)
	{
		*iParam1 = unk_0xCA369FBC0DE29517();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		unk_0xBD618A73193F9982(*iParam1, sParam0, iParam3, sParam7, 0, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		unk_0xF37CDE164C892195(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, 0, 0, 0);
	}
	else
	{
		unk_0xBF3D28CA44F3BE2D(*iParam1, sParam0, sParam7, 1);
	}
}

int func_201()
{
	var uVar0;
	struct<3> Var1;
	
	func_211();
	switch (iLocal_907)
	{
		case 0:
			if (bLocal_797)
			{
				if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
				{
					Local_822[0 /*20*/] = unk_0x8728A378EF2B46B2(Local_822[0 /*20*/].f_6, 26, uLocal_818[0], 1, 1, 1);
					unk_0xAAA71DD7E9059338(Local_822[0 /*20*/], 1);
					func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_822[0 /*20*/].f_1 = unk_0x8728A378EF2B46B2(Local_822[0 /*20*/].f_6, 26, iLocal_45, 2, 1, 1);
					unk_0xAAA71DD7E9059338(Local_822[0 /*20*/].f_1, 1);
					unk_0x0428AFDCAA63B06E(Local_822[0 /*20*/].f_1, 42, 1);
					func_258(&Local_394, 6, Local_822[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					unk_0x10425721983AE158(Local_822[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x10425721983AE158(Local_822[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
					{
						unk_0x0B74F181ADFC39BF(Local_822[0 /*20*/].f_6, 10);
					}
					bLocal_188 = true;
					func_258(&Local_394, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_798)
			{
				if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
				{
					Local_822[0 /*20*/] = unk_0x8728A378EF2B46B2(Local_822[0 /*20*/].f_6, 26, uLocal_818[0], 0, 1, 1);
					unk_0xAAA71DD7E9059338(Local_822[0 /*20*/], 1);
					unk_0x0428AFDCAA63B06E(Local_822[0 /*20*/], 42, 1);
					func_258(&Local_394, 2, Local_822[0 /*20*/], sLocal_465, 0, 1);
					unk_0x10425721983AE158(Local_822[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_188 = true;
				}
			}
			else if (func_210())
			{
				bLocal_796 = true;
			}
			else
			{
				bLocal_796 = false;
			}
			iLocal_907 = 1;
			break;
		
		case 1:
			if (bLocal_797)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
				{
					if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(Local_822[0 /*20*/].f_6, 1), 15f, 15f, 15f, 0, 1, 0))
					{
						if (!iLocal_925)
						{
							if (func_172(&Local_394, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_925 = 1;
							}
						}
					}
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
			{
				if (unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6) || func_209(iLocal_898, Local_822[0 /*20*/].f_6, !(bLocal_797 || bLocal_798)))
				{
					if (func_209(iLocal_898, Local_822[0 /*20*/].f_6, !(bLocal_797 || bLocal_798)))
					{
						bLocal_811 = true;
					}
					if (!bLocal_798)
					{
						func_208(&uLocal_892, 1f);
					}
					else
					{
						func_264(&uLocal_892);
					}
				}
			}
			if (func_7(&uLocal_892) && func_4(&uLocal_892) > 1f)
			{
				if (bLocal_797 && func_7(&uLocal_892))
				{
					if (func_47())
					{
						func_173();
					}
					iLocal_808 = 0;
					if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
					{
						unk_0xB5396F1FB088FE38(&uLocal_169);
						unk_0x092B9247AF00F5CF(0, 750, 0);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
						unk_0x10425721983AE158(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0,25f, -1, 1, 0, 0, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_169);
						unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
						unk_0xD0557B139A542F12(&uLocal_169);
						unk_0xB5396F1FB088FE38(&uLocal_169);
						unk_0x092B9247AF00F5CF(0, 0, 0);
						unk_0x0E95B96CFEFE7B61(0, Local_822[0 /*20*/], 0);
						unk_0x10425721983AE158(0, "oddjobs@towingpleadingidle_a", "idle_c", 0,25f, 0,25f, 30000, 1, 0, 0, 0, 0);
						unk_0xD844F5E50DAB6FF7(0, Local_822[0 /*20*/], 1000f, -1, 0, 0);
						unk_0x761F56E633460973(0, 1193033728, 0);
						unk_0x93C0674FC00824D0(uLocal_169);
						if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_1, 0))
						{
							unk_0x4BD42B0527065BB6(Local_822[0 /*20*/].f_1, uLocal_169);
						}
						unk_0xD0557B139A542F12(&uLocal_169);
					}
					iLocal_907 = 2;
				}
				else if (bLocal_798)
				{
					if ((Global_113969.f_19976.f_4 % 2) == 0)
					{
						if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
						{
							unk_0xB5396F1FB088FE38(&uLocal_169);
							unk_0x092B9247AF00F5CF(0, 0, 0);
							unk_0xAB3658A740EED98E(0, iLocal_898, 20000, 9f, 1f, 1073741824, 0);
							unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
							unk_0x10425721983AE158(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0,25f, 7000, 0, 0, 0, 0, 0);
							unk_0x761F56E633460973(0, 1193033728, 0);
							unk_0x93C0674FC00824D0(uLocal_169);
							unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
							unk_0xD0557B139A542F12(&uLocal_169);
						}
						func_258(&Local_394, 2, Local_822[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_172(&Local_394, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
						{
							func_207(Local_822[0 /*20*/]);
							unk_0xBE8796DB2B90A437(Local_822[0 /*20*/], 0, 0);
							unk_0xBE8796DB2B90A437(Local_822[0 /*20*/], 1, 0);
							unk_0xB5396F1FB088FE38(&uLocal_169);
							unk_0x092B9247AF00F5CF(0, 0, 0);
							unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_169);
							unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
							unk_0xD0557B139A542F12(&uLocal_169);
							if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/]))
							{
								uLocal_816 = unk_0x18E23E031A9B798F(Local_822[0 /*20*/]);
								unk_0x61183D6239A9D7B8(uLocal_816, 1);
								unk_0x5D3946F818C6B331(uLocal_816, 0,7f);
								func_206(Local_822[0 /*20*/], uLocal_816, 1);
							}
							bLocal_796 = true;
						}
						func_172(&Local_394, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_907 = 2;
				}
				else if (bLocal_796)
				{
					Local_822[0 /*20*/] = unk_0xB1DBFEB95C0EFB88(4, uLocal_818[0], Local_391[iLocal_448 /*23*/].f_6, Local_391[iLocal_448 /*23*/].f_9, 1, 1);
					unk_0xAAA71DD7E9059338(Local_822[0 /*20*/], 1);
					unk_0x0428AFDCAA63B06E(Local_822[0 /*20*/], 42, 1);
					bLocal_188 = true;
					sLocal_462 = "TOW_PED_ANGR";
					bLocal_188 = false;
					if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
					{
						unk_0xB5396F1FB088FE38(&uLocal_169);
						unk_0xAB3658A740EED98E(0, iLocal_898, 20000, 15f, 3f, 1073741824, 0);
						unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
						unk_0x93C0674FC00824D0(uLocal_169);
						unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
						unk_0xD0557B139A542F12(&uLocal_169);
					}
					iLocal_907 = 3;
				}
				else
				{
					Local_822[0 /*20*/] = unk_0xB1DBFEB95C0EFB88(4, uLocal_818[0], Local_391[iLocal_448 /*23*/].f_6, Local_391[iLocal_448 /*23*/].f_9, 1, 1);
					unk_0xAAA71DD7E9059338(Local_822[0 /*20*/], 1);
					unk_0x0428AFDCAA63B06E(Local_822[0 /*20*/], 42, 1);
					unk_0x788F35D395511DFE(Local_822[0 /*20*/], 1, 1);
					bLocal_188 = true;
					sLocal_462 = "TOW_ILLEG1";
					if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
					{
						unk_0xB5396F1FB088FE38(&uLocal_169);
						unk_0xF3812FC874B9C273(0, unk_0x4A8C381C258A124D(), 20000, 12f, 0f, 3f, 0);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
						unk_0x93C0674FC00824D0(uLocal_169);
						unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
						unk_0xD0557B139A542F12(&uLocal_169);
					}
					iLocal_907 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_797)
			{
				if (!bLocal_805)
				{
					if (unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6) || bLocal_811)
					{
						if (!unk_0xFBA523E6F8ACE541())
						{
							if (!func_47())
							{
								if (func_172(&Local_394, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_805 = true;
								}
							}
						}
					}
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
			{
				if (!unk_0x7F420695E3F776FB(Local_822[0 /*20*/], 0))
				{
					if (bLocal_798)
					{
						if (!func_47())
						{
							if (unk_0x9B5C1660CCDF7189(Local_822[0 /*20*/], joaat("script_task_perform_sequence")) == 1)
							{
								if (unk_0x89EC60A4485FD199(Local_822[0 /*20*/]) == 2)
								{
									if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
									{
										Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
									}
									if (system::vdist2(Var1, unk_0xD1A6A821F5AC81DB(Local_822[0 /*20*/], 1)) < 400f)
									{
										if ((Global_113969.f_19976.f_4 % 2) == 0)
										{
											func_172(&Local_394, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_172(&Local_394, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_907 = 8;
								}
							}
						}
					}
					else if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
					{
						if (func_205() || (!unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6) && !bLocal_811))
						{
							func_173();
							iLocal_907 = 5;
						}
						else if (!unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6) && bLocal_811)
						{
							if (bLocal_805)
							{
								if (!func_47())
								{
									iLocal_907 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
			{
				if (func_118(Local_822[0 /*20*/], unk_0x4A8C381C258A124D(), 1) < 12f)
				{
					unk_0x974022927CB47E68(Local_822[0 /*20*/]);
					if (bLocal_796)
					{
						unk_0x62A5310368A20EFA(Local_822[0 /*20*/], unk_0x4A8C381C258A124D(), 0, 16);
					}
					else if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
					{
						unk_0xB5396F1FB088FE38(&uLocal_169);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
						unk_0x10425721983AE158(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0,25f, 5000, 0, 0, 0, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_169);
						unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uLocal_169);
						unk_0xD0557B139A542F12(&uLocal_169);
					}
					iLocal_781 = 1;
					if (bLocal_797)
					{
						iLocal_907 = 5;
					}
					else
					{
						iLocal_907 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/]))
			{
				Local_822[0 /*20*/].f_9 = unk_0x18E23E031A9B798F(Local_822[0 /*20*/]);
				if (bLocal_796)
				{
					unk_0x61183D6239A9D7B8(Local_822[0 /*20*/].f_9, 1);
					unk_0x5D3946F818C6B331(Local_822[0 /*20*/].f_9, 0,7f);
				}
				else
				{
					unk_0x61183D6239A9D7B8(Local_822[0 /*20*/].f_9, 3);
					unk_0x5D3946F818C6B331(Local_822[0 /*20*/].f_9, 0,7f);
				}
			}
			if (bLocal_796)
			{
				if (iLocal_168 == 0)
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_204(Local_394, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_258(&Local_394, 2, Local_822[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_204(Local_394, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
				func_258(&Local_394, 3, Local_822[0 /*20*/], sLocal_465, 0, 1);
				func_204(Local_394, "TOWAUD", sLocal_462, 0);
			}
			bLocal_789 = true;
			system::settimera(0);
			if (bLocal_796)
			{
				func_59(&uLocal_886);
				iLocal_907 = 6;
			}
			else
			{
				iLocal_907 = 5;
			}
			break;
		
		case 5:
			if (!func_47())
			{
				if (bLocal_797)
				{
					system::settimerb(0);
				}
				func_59(&uLocal_886);
				if ((!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
				{
					if (unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6))
					{
						unk_0x329B82704ED2A3E3(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
					}
					else
					{
						if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
						{
							unk_0x0B74F181ADFC39BF(Local_822[0 /*20*/].f_6, 1);
						}
						unk_0xD0557B139A542F12(&uVar0);
						unk_0xB5396F1FB088FE38(&uVar0);
						unk_0xEBA229B2E0BB05E0(0, Local_822[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0, 0);
						unk_0x7C8E9DE09D4AD3FF(0, Local_822[0 /*20*/].f_6, 5f, 786597);
						unk_0x93C0674FC00824D0(uVar0);
						if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
						{
							unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uVar0);
						}
						unk_0xD0557B139A542F12(&uVar0);
						bLocal_926 = true;
					}
				}
				iLocal_907 = 6;
			}
			break;
		
		case 6:
			func_202(0);
			if (!bLocal_803)
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
				{
					if (!unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6))
					{
						if (bLocal_797)
						{
							if (system::timerb() > 8000)
							{
								func_59(&uLocal_886);
								if (!bLocal_926)
								{
									unk_0x0B74F181ADFC39BF(Local_822[0 /*20*/].f_6, 1);
									unk_0xEBA229B2E0BB05E0(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0, 0);
								}
								iLocal_907 = 7;
							}
						}
						else
						{
							func_59(&uLocal_886);
							unk_0x0B74F181ADFC39BF(Local_822[0 /*20*/].f_6, 1);
							unk_0xEBA229B2E0BB05E0(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 20000, -1, 1073741824, 1, 0, 0);
							iLocal_907 = 7;
						}
					}
					else if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
					{
						if (system::timerb() > 7000)
						{
							if (!bLocal_796)
							{
								if (unk_0xCECDBB848D53DEB2(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 0))
								{
									if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
									{
										if (unk_0xDF93B3CFAC96698F(iLocal_898) < 2f)
										{
											if (unk_0x9B5C1660CCDF7189(Local_822[0 /*20*/], joaat("script_task_vehicle_drive_wander")) != 1)
											{
												unk_0x7C8E9DE09D4AD3FF(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											unk_0xD0557B139A542F12(&uVar0);
											unk_0xB5396F1FB088FE38(&uVar0);
											unk_0x092B9247AF00F5CF(0, 5000, 4096);
											unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
											unk_0x93C0674FC00824D0(uVar0);
											if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
											{
												unk_0x4BD42B0527065BB6(Local_822[0 /*20*/], uVar0);
											}
											unk_0xD0557B139A542F12(&uVar0);
											iLocal_907 = 7;
										}
									}
								}
								else if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0))
								{
									if (unk_0xDF93B3CFAC96698F(iLocal_898) < 5f)
									{
										if (unk_0x9B5C1660CCDF7189(Local_822[0 /*20*/], joaat("script_task_enter_vehicle")) != 1)
										{
											if (unk_0xC39AE5D390581AD5(Local_822[0 /*20*/].f_6, -1, 0))
											{
												unk_0xEBA229B2E0BB05E0(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, -1, -1, 1073741824, 1, 0, 0);
											}
										}
									}
									else if (unk_0x9B5C1660CCDF7189(Local_822[0 /*20*/], joaat("script_task_follow_to_offset_of_entity")) != 1)
									{
										unk_0x329B82704ED2A3E3(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_202(1);
			if (unk_0x7F420695E3F776FB(Local_822[0 /*20*/], 0) && !unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6))
			{
				if (bLocal_796)
				{
					sLocal_462 = "TOW_PED_ANTH";
				}
				else if (bLocal_797)
				{
					sLocal_462 = "TOW_ILLEG_SE";
				}
				bLocal_802 = true;
				func_172(&Local_394, "TOWAUD", sLocal_462, 9, 0, 0, 0);
				bLocal_789 = false;
				unk_0x7C8E9DE09D4AD3FF(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 5f, 786597);
				iLocal_907 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_781 = 0;
			bLocal_789 = false;
			if (unk_0xC450B06E5AAA0985(Local_822[0 /*20*/].f_9))
			{
				unk_0xFE54B8568B2ABD12(&(Local_822[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_202(bool bParam0)
{
	int iVar0;
	float fVar1;
	char* sVar2;
	
	iVar0 = 0;
	fVar1 = func_118(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_898, 0) && !unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
		{
			if (unk_0x4A64AADF9B40D2AF(iLocal_898, Local_822[0 /*20*/].f_6) && !unk_0xCECDBB848D53DEB2(Local_822[0 /*20*/], Local_822[0 /*20*/].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
	{
		if (unk_0x9B3D4335E0EDB0BE(Local_822[0 /*20*/], unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(unk_0x4A8C381C258A124D(), Local_822[0 /*20*/], 1))
		{
			func_59(&uLocal_886);
			unk_0xE4DC7B3DD712372B(Local_822[0 /*20*/]);
			unk_0xE4DC7B3DD712372B(unk_0x4A8C381C258A124D());
		}
	}
	if (unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
	{
		iLocal_907 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&uLocal_886) > 30f && fVar1 > 5f)) || iVar0) || (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)))
	{
		if (bLocal_796)
		{
			func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_797)
		{
			func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_258(&Local_394, 6, Local_822[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_812[0] = Local_822[0 /*20*/];
		uLocal_812[1] = Local_822[0 /*20*/].f_1;
		bLocal_803 = true;
		func_203(Local_394, "TOWAUD", sVar2, &uLocal_812, 0);
		unk_0xFE54B8568B2ABD12(&(Local_822[0 /*20*/].f_9));
		if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/], 0))
		{
			unk_0x974022927CB47E68(Local_822[0 /*20*/]);
			unk_0xD844F5E50DAB6FF7(Local_822[0 /*20*/], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
		}
		iLocal_907 = 8;
	}
}

int func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_117((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_172(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_204(struct<165> Param0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	StringCopy(&cLocal_61, sParam1, 16);
	StringCopy(&cLocal_64, sParam2, 16);
	Local_49 = { Param0 };
}

int func_205()
{
	switch (iLocal_910)
	{
		case 0:
			if (unk_0x89EC60A4485FD199(Local_822[0 /*20*/]) >= 1 && !unk_0xFBA523E6F8ACE541())
			{
				iLocal_910 = 1;
			}
			break;
		
		case 1:
			if (bLocal_805 && !iLocal_806)
			{
				if (!func_47())
				{
					if (!iLocal_807)
					{
						if (!bLocal_811)
						{
							func_114("TOWT_OBJ_06", 7500, 1);
							iLocal_807 = 1;
						}
					}
					if (iLocal_807 && !unk_0xFBA523E6F8ACE541())
					{
						if (unk_0x9B5C1660CCDF7189(Local_822[0 /*20*/], joaat("script_task_turn_ped_to_face_entity")) != 1)
						{
							unk_0x0E95B96CFEFE7B61(Local_822[0 /*20*/], Local_822[0 /*20*/].f_1, 0);
						}
						iLocal_806 = 1;
						iLocal_910 = 2;
					}
				}
			}
			if (func_117(Local_822[0 /*20*/], 1) > 20f)
			{
				unk_0x0F15249D24BC5ADA(1);
				return 1;
			}
			break;
		
		case 2:
			if (func_117(Local_822[0 /*20*/], 1) > 20f)
			{
				unk_0x0F15249D24BC5ADA(1);
				return 1;
			}
			if (!func_47())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_206(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_67[iVar0 /*3*/] == iParam0 && !unk_0xC450B06E5AAA0985(Local_67[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!unk_0xC450B06E5AAA0985(Local_67[iVar0 /*3*/].f_1))
		{
			Local_67[iVar0 /*3*/] = iParam0;
			Local_67[iVar0 /*3*/].f_1 = uParam1;
			Local_67[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_207(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			unk_0x139711196A42A037(iParam0, 1);
			unk_0x1090EAA386FB31A8(iParam0, 1);
			unk_0xBE8796DB2B90A437(iParam0, 23, 0);
			unk_0xD0764B65C2DFEDCA(iParam0, 2);
			unk_0xB41DEC3AAC1AA107(iParam0, joaat("weapon_microsmg"), 1000, 1, 1);
			unk_0x39256A89E9D7464A(iParam0, 500);
		}
	}
}

void func_208(var uParam0, float fParam1)
{
	if (!func_7(uParam0))
	{
		func_60(uParam0, fParam1);
	}
}

int func_209(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (unk_0x692665178199313C(unk_0xB6B621402486C3E4()) && func_117(uParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (unk_0x685171EED42BC4DF(iParam0, uParam1))
	{
		iVar0 = 1;
	}
	if (unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
	{
		iVar0 = 1;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_210()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_211()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!iLocal_778)
	{
		if (unk_0xFC8BFE4B41177C22(Local_822[0 /*20*/].f_6))
		{
			if (!unk_0x1C2F771CDC87A3A5(Local_822[0 /*20*/].f_6, 0))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(Local_822[0 /*20*/].f_6, 1) };
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		}
		if (bLocal_797)
		{
			if (system::vdist2(Var0, Var1) < 25f)
			{
				unk_0x0F15249D24BC5ADA(1);
				if (!func_47())
				{
					unk_0xE67051907958B5EB(Local_822[0 /*20*/], unk_0x4A8C381C258A124D(), 5000, 0, 2);
					func_258(&Local_394, 5, Local_822[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_172(&Local_394, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_778 = 1;
					}
				}
			}
		}
	}
}

int func_212(var uParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(uParam1))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (!unk_0x7F420695E3F776FB(iParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&uLocal_182))
	{
		func_59(&uLocal_182);
	}
	if (func_117(uParam0, 0) < 15f)
	{
		fLocal_179 = 0,3f;
		fLocal_180 = 0,5f;
		fLocal_181 = 0,1f;
	}
	else if (func_117(uParam0, 0) < 40f)
	{
		fLocal_179 = 0,6f;
		fLocal_180 = 1f;
		fLocal_181 = 0,2f;
	}
	if (func_3(&uLocal_182, unk_0xD2AA6F822D3A55D2(fLocal_179, fLocal_180)))
	{
		func_59(&uLocal_182);
		unk_0xE592D924D5438108(uParam0, 1, 0f, 0f, fLocal_181, -0,0067f, -0,8283f, -0,2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_213()
{
	unk_0xC0964AABD3C0CC7E();
	func_214();
}

void func_214()
{
	Global_23692.f_134 = 1;
}

int func_215(int iParam0, int iParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, char* sParam18, var uParam19, bool bParam20, var uParam21)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	
	if (iLocal_445 != 12)
	{
		func_219(Param2, uParam0, uParam1);
	}
	if (!bLocal_213)
	{
		if (iLocal_445 >= 6 && iLocal_445 <= 11)
		{
			if (bParam20)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 400,2854f, -1632,597f, 28,29278f, 5f, 5f, 2f, 1, 1, 0))
					{
					}
				}
			}
		}
		switch (iLocal_445)
		{
			case 0:
				if (func_122(uParam1, uParam0, &iLocal_447, 10, 90f, 100f, 0))
				{
					unk_0x439C904840715871(uParam1, 0);
					func_258(&Local_394, 3, *uParam21, "TONYA", 0, 1);
					func_258(&Local_394, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
					func_172(&Local_394, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_445 = 1;
				}
				break;
			
			case 1:
				if (!func_47())
				{
					func_104("TOW_TUT_03", -1);
					system::settimera(0);
					iLocal_445 = 2;
				}
				break;
			
			case 2:
				if (iLocal_214)
				{
					unk_0x428C32CC68809A35(1);
					iLocal_445 = 4;
				}
				if (system::timera() > 5000)
				{
					if (((system::timera() > 12000 || func_118(uParam0, uParam1, 1) < 15f) && func_118(uParam0, uParam1, 1) < 30f) && !func_47())
					{
						func_172(&Local_394, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_445 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_214)
				{
					if (!func_47() && !func_110("TOW_TUT_03"))
					{
						func_218("TOW_TUT_02");
						iLocal_445 = 4;
					}
				}
				else
				{
					iLocal_445 = 4;
				}
				break;
			
			case 4:
				if (system::timera() > 5000 || iLocal_214)
				{
					if ((system::timera() > 12000 || func_118(uParam0, uParam1, 1) < 7,5f) || (iLocal_214 && func_118(uParam0, uParam1, 1) < 30f))
					{
						iLocal_189 = 1;
						iLocal_189 = iLocal_189;
						func_218("TOW_TUT_01");
						iLocal_445 = 5;
					}
				}
				break;
			
			case 5:
				if (system::timera() > 8000)
				{
					iLocal_445 = 6;
				}
				break;
			
			case 6:
				if ((!func_47() && !unk_0xFBA523E6F8ACE541()) && system::timera() > 12000)
				{
					if (!iLocal_206)
					{
						func_104("TOWT_HELP_CR", -1);
						iLocal_206 = 1;
					}
				}
				if (unk_0x5105BE70DEF1F5FB(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0))
				{
					func_172(&Local_394, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (unk_0xC450B06E5AAA0985(*uParam16))
					{
						unk_0xBC64B805EE071A37(*uParam16, 0);
						unk_0xFE54B8568B2ABD12(uParam16);
					}
					StringCopy(sParam18, "TOW_TUT_04A", 64);
					*(uParam17[0 /*3*/]) = { Param2.f_14 };
					fLocal_178 = func_9(Param2.f_14, 0);
					*uParam16 = unk_0x34864AB7DA700AA6(Param2.f_14);
					system::settimerb(0);
					iLocal_445 = 7;
				}
				break;
			
			case 7:
				if (!func_47())
				{
					if (system::timerb() > 6000)
					{
						system::settimera(0);
						func_114("TOW_TUT_04A", 7500, 1);
						iLocal_445 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_445 = 10;
				}
				if (!func_47())
				{
					if (unk_0x5105BE70DEF1F5FB(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0))
					{
						iLocal_216 = unk_0x1DD05E817C89C737();
						if (bLocal_190)
						{
							unk_0xBC64B805EE071A37(*uParam16, 0);
							unk_0xFE54B8568B2ABD12(uParam16);
							*(uParam17[0 /*3*/]) = { Param2.f_14 };
							fLocal_178 = func_9(Param2.f_14, 0);
							*uParam16 = unk_0x34864AB7DA700AA6(Param2.f_14);
						}
						if (unk_0xC450B06E5AAA0985(*uParam16))
						{
							unk_0x61183D6239A9D7B8(*uParam16, 5);
						}
						iLocal_445 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var1 = { Param2.f_10 };
					uVar2 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var1 = { Param2.f_3 };
					uVar2 = Param2.f_6;
				}
				if (unk_0x5105BE70DEF1F5FB(uParam1, Var0, Var1, uVar2, 0, 1, 0))
				{
					func_104("TOWT_HELP_UH", -1);
					func_217();
					if (!unk_0x1C2F771CDC87A3A5(uParam0, 0) && !unk_0x1C2F771CDC87A3A5(uParam1, 0))
					{
						if (unk_0x4A64AADF9B40D2AF(iParam0, iParam1))
						{
							iLocal_445 = 11;
						}
					}
				}
				else
				{
					func_216();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var1 = { Param2.f_10 };
					uVar2 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var1 = { Param2.f_3 };
					uVar2 = Param2.f_6;
				}
				if (unk_0x5105BE70DEF1F5FB(iParam1, Var0, Var1, uVar2, 0, 1, 0))
				{
					func_104("TOWT_HELP_UH", -1);
					func_217();
				}
				if (((unk_0xFC8BFE4B41177C22(iParam0) && unk_0xFC8BFE4B41177C22(iParam1)) && !unk_0x1C2F771CDC87A3A5(iParam0, 0)) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
				{
					if (!unk_0x4A64AADF9B40D2AF(iParam0, iParam1))
					{
						unk_0x428C32CC68809A35(1);
						unk_0x406CBCEA35499884();
						func_147(&uLocal_147, 0, 0);
						iLocal_445 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam20)
		{
			if (((unk_0xFC8BFE4B41177C22(iParam0) && unk_0xFC8BFE4B41177C22(iParam1)) && !unk_0x1C2F771CDC87A3A5(iParam0, 0)) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
			{
				if (unk_0x4A64AADF9B40D2AF(iParam0, iParam1) && !bLocal_446)
				{
					if (func_47())
					{
						if (unk_0x4C705AAF75363287())
						{
							unk_0x428C32CC68809A35(1);
						}
						func_173();
						iLocal_445 = 6;
					}
					else
					{
						func_106(*uParam16);
						system::settimera(0);
						iLocal_445 = 6;
						func_172(&Local_394, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_446 = true;
					}
				}
			}
			if (!iLocal_208)
			{
				if (bLocal_446)
				{
					if (!func_47())
					{
						unk_0x428C32CC68809A35(1);
						func_114("TOWT_OBJ_06", 7500, 1);
						iLocal_208 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_216()
{
	switch (iLocal_222)
	{
		case 0:
			if (!func_7(&uLocal_407))
			{
				func_264(&uLocal_407);
			}
			else if (func_4(&uLocal_407) > 10f)
			{
				if (func_172(&uLocal_225, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_222 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_47())
			{
				if (func_172(&uLocal_225, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_59(&uLocal_407);
					iLocal_222 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_407))
			{
				if (func_4(&uLocal_407) > 15f)
				{
					if (!func_47())
					{
						if (func_172(&uLocal_225, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_222 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_217()
{
	if (!iLocal_205)
	{
		if (!unk_0xFBA523E6F8ACE541())
		{
			if (!func_47())
			{
				if (func_172(&uLocal_225, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_205 = 1;
				}
			}
		}
	}
}

void func_218(char* sParam0)
{
	system::settimera(0);
	func_104(sParam0, -1);
}

void func_219(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	
	if (!unk_0xFC8BFE4B41177C22(uParam14) || !unk_0xFC8BFE4B41177C22(uParam15))
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam14, 0) || unk_0x1C2F771CDC87A3A5(iParam15, 0))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var1 = { Param0.f_10 };
		uVar2 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var1 = { Param0.f_3 };
		uVar2 = Param0.f_6;
	}
	if (!iLocal_191)
	{
		if (unk_0x5105BE70DEF1F5FB(iParam15, Var0, Var1, uVar2, 0, 1, 0))
		{
			if (!unk_0x1C2F771CDC87A3A5(iParam14, 0) && !unk_0x1C2F771CDC87A3A5(iParam15, 0))
			{
				if (!unk_0x4A64AADF9B40D2AF(iParam14, iParam15))
				{
					unk_0x428C32CC68809A35(1);
					unk_0x406CBCEA35499884();
					iLocal_445 = 12;
					iLocal_191 = 1;
				}
			}
		}
	}
}

int func_220(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(uParam1))
	{
		iVar0 = (*uParam2 - unk_0x8D91ADE44AC79BC9(iParam1));
	}
	if (fLocal_176 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
			{
				if ((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam1, 0)) || unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (unk_0xFC8BFE4B41177C22(iParam1))
				{
					*uParam2 = unk_0x8D91ADE44AC79BC9(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_172(&Local_394, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_172(&Local_394, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_176 = (fLocal_176 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_172(&Local_394, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_172(&Local_394, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_176 = (fLocal_176 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_172(&Local_394, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_172(&Local_394, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_176 = (fLocal_176 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		*uParam2 = unk_0x8D91ADE44AC79BC9(iParam1);
	}
	return 0;
}

int func_221(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(uParam1))
	{
		iVar0 = (*uParam3 - unk_0x8D91ADE44AC79BC9(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (unk_0xFC8BFE4B41177C22(iParam1) && unk_0xFC8BFE4B41177C22(uParam2))
			{
				if (!unk_0x1C2F771CDC87A3A5(iParam1, 0) && !unk_0x1C2F771CDC87A3A5(iParam2, 0))
				{
					if ((unk_0x685171EED42BC4DF(iParam1, iParam2) || unk_0x4A64AADF9B40D2AF(iParam2, iParam1)) || unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (unk_0xFC8BFE4B41177C22(iParam1))
					{
						*uParam3 = unk_0x8D91ADE44AC79BC9(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_223("TOW_DMG_01", 25, -1);
					func_222(func_26(), 1, 25);
					fLocal_176 = (fLocal_176 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_223("TOW_DMG_01", 75, -1);
					func_222(func_26(), 1, 75);
					fLocal_176 = (fLocal_176 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_104("TOW_DMG_03", -1);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		*uParam3 = unk_0x8D91ADE44AC79BC9(iParam1);
	}
	return 1;
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	if (func_98(iParam0) == 3)
	{
		return 0;
	}
	if (func_98(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_98(iParam0), 0, iParam1, iParam2, 0);
}

void func_223(char* sParam0, int iParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam2);
}

void func_224(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (unk_0xC450B06E5AAA0985(*uParam1))
		{
			unk_0xFE54B8568B2ABD12(uParam1);
		}
		*uParam5 = unk_0x1DD05E817C89C737();
		bLocal_213 = !func_225(uParam0);
		return;
	}
	else if (!unk_0xC450B06E5AAA0985(*uParam1) && bLocal_213)
	{
		*uParam1 = unk_0x18E23E031A9B798F(*uParam0);
		unk_0x61183D6239A9D7B8(*uParam1, 3);
		unk_0xBC64B805EE071A37(*uParam1, 1);
	}
	if (!bParam9)
	{
		if (!bLocal_213)
		{
			if (!func_225(uParam0))
			{
				unk_0xFFD79EDD25B8EC72();
				*uParam5 = unk_0x1DD05E817C89C737();
				if (bParam13)
				{
					if (iLocal_186)
					{
						func_114("DTRSHRD_03", 7500, 1);
						iLocal_186 = 0;
					}
					if (!unk_0xC450B06E5AAA0985(*uParam1))
					{
						*uParam1 = unk_0x18E23E031A9B798F(*uParam0);
						unk_0x61183D6239A9D7B8(*uParam1, 3);
						unk_0xBC64B805EE071A37(*uParam1, 1);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (unk_0xC450B06E5AAA0985((uParam2[iVar0 /*20*/])->f_8))
					{
						unk_0xBC64B805EE071A37((uParam2[iVar0 /*20*/])->f_8, 0);
						unk_0xFE54B8568B2ABD12(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (unk_0xC450B06E5AAA0985((uParam2[0 /*20*/])->f_9))
				{
					unk_0xFE54B8568B2ABD12(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_213 = true;
			}
		}
		else if (func_225(uParam0))
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				unk_0xFE54B8568B2ABD12(uParam1);
			}
			if (!unk_0x4FAFF4BCB7633475((*uParam2)[0 /*20*/]))
			{
				if (!unk_0xCECDBB848D53DEB2((*uParam2)[0 /*20*/], *uParam0, 0) && !unk_0xCECDBB848D53DEB2((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0xC450B06E5AAA0985((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = unk_0x18E23E031A9B798F((*uParam2)[iVar0 /*20*/]);
						unk_0x61183D6239A9D7B8((uParam2[0 /*20*/])->f_9, 3);
						unk_0x5D3946F818C6B331((uParam2[0 /*20*/])->f_9, 0,7f);
					}
				}
			}
			if (iLocal_187)
			{
				func_114(sParam4, 7500, 1);
				iLocal_187 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!unk_0xC450B06E5AAA0985((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = unk_0x34864AB7DA700AA6(*(uParam3[0 /*3*/]));
					unk_0xBC64B805EE071A37((uParam2[0 /*20*/])->f_8, 1);
				}
			}
			else if (bParam7)
			{
				if (!unk_0x1C2F771CDC87A3A5((uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0xC450B06E5AAA0985((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = unk_0x18E23E031A9B798F((uParam2[iParam6 /*20*/])->f_6);
						unk_0x61183D6239A9D7B8((uParam2[iParam6 /*20*/])->f_8, 3);
						unk_0xBC64B805EE071A37((uParam2[0 /*20*/])->f_8, 1);
					}
				}
				else
				{
					if (iLocal_168 == 3)
					{
						Local_391[iLocal_448 /*23*/].f_1 = { -476,1537f, 132,6556f, 62,9586f };
					}
					if (!unk_0xC450B06E5AAA0985((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = unk_0x34864AB7DA700AA6(Local_391[iLocal_448 /*23*/].f_1);
						unk_0x61183D6239A9D7B8((uParam2[0 /*20*/])->f_8, 3);
						unk_0xBC64B805EE071A37((uParam2[0 /*20*/])->f_8, 1);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!unk_0x1C2F771CDC87A3A5((uParam2[iVar0 /*20*/])->f_6, 0))
					{
						if (!unk_0xC450B06E5AAA0985((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = unk_0x18E23E031A9B798F((uParam2[iVar0 /*20*/])->f_6);
							unk_0x61183D6239A9D7B8((uParam2[iVar0 /*20*/])->f_8, 3);
							unk_0xBC64B805EE071A37((uParam2[iVar0 /*20*/])->f_8, 1);
						}
					}
					else
					{
						if (iLocal_168 == 3)
						{
							Local_391[iLocal_448 /*23*/].f_1 = { -476,1537f, 132,6556f, 62,9586f };
						}
						if (!unk_0xC450B06E5AAA0985((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = unk_0x34864AB7DA700AA6(Local_391[iLocal_448 /*23*/].f_1);
							unk_0x61183D6239A9D7B8((uParam2[0 /*20*/])->f_8, 3);
							unk_0xBC64B805EE071A37((uParam2[0 /*20*/])->f_8, 1);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_213 = false;
		}
	}
}

int func_225(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0) != *uParam0)
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_226()
{
	int iVar0;
	
	iVar0 = func_26();
	if (iVar0 != 1)
	{
		func_194();
	}
}

void func_227(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0x8034325BF6D6E41F() >= (uParam0->f_272 + uParam0->f_273) || BitTest(Global_101533.f_20, 2)) || BitTest(Global_101533.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_228(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0x8034325BF6D6E41F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_228(var uParam0)
{
	func_229(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_229(var uParam0, char* sParam1, var uParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_230(*uParam0))
		{
			case 0:
				unk_0xEC9DAA34BBB4658C(uParam2);
				break;
			
			case 1:
				unk_0x80813AC549A1E8AE(uParam1);
				break;
			
			case 2:
				unk_0x73DEEAB0747FB17C(uParam1);
				break;
			
			case 3:
				unk_0xD0D00ED689D6CA81(uParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xD772E6694B8472A6(uParam2, uParam1);
				break;
			
			case 5:
				unk_0xD04A772C411165F2(uParam1);
				break;
			
			case 6:
				unk_0xD7E1DF759CD0FFF2(uParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x625263BFD08AE230(uParam2);
				break;
			
			case 8:
				unk_0xF2CB0224D3BE0B42(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x8003D3C0115A1035();
				break;
			
			default:
				break;
		}
		unk_0x0B0C9A0F9AAEB7F0(uParam0, 29);
	}
}

int func_230(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_231()
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 25);
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 11);
}

void func_232(var uParam0)
{
	int iVar0;
	int iVar1;
	
	func_255();
	uLocal_452 = func_254();
	if (uParam0->f_3 == 3)
	{
		sLocal_464[0] = "base";
		func_252(&uLocal_480, "amb@world_human_smoking@male@male_a@base");
		func_252(&uLocal_480, "oddjobs@towingcome_here");
		func_252(&uLocal_480, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_791)
	{
		func_252(&uLocal_480, "Ped");
		func_252(&uLocal_480, "oddjobs@towing");
		func_252(&uLocal_480, "oddjobs@towingangryidle_a");
		func_252(&uLocal_480, "oddjobs@towingpleadingidle_b");
		func_252(&uLocal_480, "oddjobs@towingpleadingidle_a");
		func_252(&uLocal_480, "move_m@JOG@");
	}
	else if (bLocal_791)
	{
		func_252(&uLocal_480, "amb@world_human_smoking@male@male_a@base");
		func_252(&uLocal_480, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_252(&uLocal_480, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_463 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_252(&uLocal_480, sLocal_463);
		func_250(&uLocal_470, joaat("ambulance"));
		func_250(&uLocal_470, joaat("s_m_m_paramedic_01"));
		sLocal_464[0] = "react_big_variations_a";
		sLocal_464[1] = "react_big_variations_b";
		sLocal_464[2] = "react_big_variations_c";
		func_252(&uLocal_480, "move_m@JOG@");
	}
	unk_0xCCA6D8A84EE8C88A(joaat("towtruck"), 1);
	if (uParam0->f_3 == 1)
	{
		unk_0x8003D3C0115A1035();
		func_252(&uLocal_480, "oddjobs@towing");
		func_252(&uLocal_480, "amb@world_human_smoking@male@male_a@base");
		func_252(&uLocal_480, "oddjobs@towingpleadingidle_b");
		func_250(&uLocal_470, joaat("freightcont1"));
		func_250(&uLocal_470, joaat("tankercar"));
		func_250(&uLocal_470, joaat("freight"));
		func_250(&uLocal_470, joaat("freightcar"));
		func_250(&uLocal_470, joaat("s_m_m_lsmetro_01"));
		func_250(&uLocal_470, joaat("a_f_m_bevhills_01"));
		func_250(&uLocal_470, joaat("a_m_y_genstreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_249();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_817[iVar0] = Local_391[iLocal_448 /*23*/].f_20;
	}
	else
	{
		func_248();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_817[iVar0] == 0)
		{
			iLocal_817[iVar0] = func_246(&iLocal_817, &iLocal_47, 10);
			unk_0x7991957B46F22F47(iLocal_817[iVar0], 3);
		}
		if (bLocal_797)
		{
			iLocal_817[iVar0] = joaat("landstalker");
			func_250(&uLocal_470, iLocal_817[iVar0]);
			unk_0x7991957B46F22F47(iLocal_817[iVar0], 3);
		}
		else if (iLocal_817[iVar0] != 0)
		{
			func_250(&uLocal_470, iLocal_817[iVar0]);
			unk_0x7991957B46F22F47(iLocal_817[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_791 && iLocal_794)
	{
		if (bLocal_797)
		{
			func_245(&iVar1);
			iLocal_45 = joaat("a_m_m_tranvest_01");
			func_250(&uLocal_470, iLocal_45);
		}
		else if (bLocal_798)
		{
			func_244(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_243(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_797)
		{
			func_243(&iVar1, 1);
		}
		else
		{
			func_243(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_818[iVar0] = func_246(&uLocal_818, &iLocal_46, iVar1);
			if (uLocal_818[iVar0] != 0)
			{
				func_250(&uLocal_470, uLocal_818[iVar0]);
			}
			iVar0++;
		}
	}
	func_250(&uLocal_470, iLocal_390);
	func_242(&uLocal_488, "TOW", 2, 0);
	func_242(&uLocal_488, "DTRSHRD", 3, 0);
	func_241(&uLocal_470);
	func_238(&uLocal_480, &uLocal_488);
	while (!unk_0xA0C7B98BCF1EEF9E(uLocal_452))
	{
		func_227(&uLocal_488);
		system::wait(0);
	}
	while (!func_237(&uLocal_470) || !unk_0x16CFE70936BA84C7(iLocal_817[0]))
	{
		func_227(&uLocal_488);
		system::wait(0);
	}
	while (!func_233(&uLocal_488))
	{
		func_227(&uLocal_488);
		system::wait(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!unk_0xD7E1DF759CD0FFF2("SCRIPT\TOWING_TRAIN", 0, -1) || !unk_0x6F13318788EDDAD8())
		{
			func_227(&uLocal_488);
			system::wait(0);
		}
	}
	while (!unk_0xDCB78A15E5F495DC(2) || !unk_0xDCB78A15E5F495DC(3))
	{
		func_227(&uLocal_488);
		system::wait(0);
	}
}

bool func_233(var uParam0)
{
	return func_234(uParam0);
}

int func_234(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_235(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_235(var uParam0)
{
	return func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_236(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_230(uParam0))
			{
				case 0:
					return unk_0x6252BC0DD8A320DB(uParam2);
					break;
				
				case 1:
					return unk_0xE100DD4F82A51BDE(uParam1);
					break;
				
				case 2:
					return unk_0x8175BC6D49412468(uParam1);
					break;
				
				case 3:
					return unk_0x38D063D8CF6D1967(uParam1);
					break;
				
				case 4:
					return unk_0x266D9DB5FCE4003B(uParam2, uParam1);
					break;
				
				case 5:
					return unk_0xA08EEC7306CF6198(uParam1);
					break;
				
				case 6:
					return unk_0xD7E1DF759CD0FFF2(uParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x65F606616F48186B(uParam2);
					break;
				
				case 8:
					return unk_0xDCB78A15E5F495DC(uParam2);
					break;
				
				case 9:
					return unk_0x6F13318788EDDAD8();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x6252BC0DD8A320DB((*uParam0)[iVar0]))
			{
				if (!unk_0x6252BC0DD8A320DB((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_238(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xFF692AB7350A74D7((*uParam0)[iVar0]))
		{
			func_239(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_239(var uParam0, char* sParam1)
{
	func_240(uParam0, 1, -1, sParam1, 0);
}

void func_240(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!unk_0x1B79E937E91F40C3(sParam3, "NULL"))
					{
						if (unk_0x1B79E937E91F40C3(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*18*/], bParam1);
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_241(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xEC9DAA34BBB4658C((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_242(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	if (bParam3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, 26);
	}
	func_240(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_243(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_46[0] = joaat("a_m_y_genstreet_02");
		iLocal_46[1] = joaat("a_m_y_beach_03");
		iLocal_46[2] = joaat("g_m_y_salvagoon_01");
		iLocal_46[3] = joaat("a_m_m_bevhills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_46[0] = joaat("a_f_m_bevhills_01");
		iLocal_46[1] = joaat("a_m_y_genstreet_02");
		iLocal_46[2] = joaat("a_f_y_hipster_02");
		iLocal_46[3] = joaat("a_m_y_beach_03");
		iLocal_46[4] = joaat("s_f_y_sweatshop_01");
		iLocal_46[5] = joaat("g_m_y_salvagoon_01");
		*uParam0 = 6;
	}
}

void func_244(var uParam0)
{
	iLocal_46[0] = joaat("a_m_m_tramp_01");
	iLocal_46[1] = joaat("a_m_y_methhead_01");
	iLocal_46[2] = joaat("a_m_m_tramp_01");
	iLocal_46[3] = joaat("a_m_y_methhead_01");
	*uParam0 = 4;
}

void func_245(var uParam0)
{
	iLocal_46[0] = joaat("a_m_y_yoga_01");
	iLocal_46[1] = joaat("a_m_y_beach_03");
	iLocal_46[2] = joaat("a_m_y_musclbeac_01");
	*uParam0 = 3;
}

var func_246(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0xC5935DFB3F39785A(0, (iParam2 - 1));
	while (func_247((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = unk_0xC5935DFB3F39785A(0, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

int func_247(int iParam0, var uParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_248()
{
	iLocal_47[0] = joaat("tailgater");
	iLocal_47[1] = joaat("asterope");
	iLocal_47[2] = joaat("primo");
	iLocal_47[3] = joaat("primo");
	iLocal_47[4] = joaat("schwarzer");
	iLocal_47[5] = joaat("emperor");
	iLocal_47[6] = joaat("premier");
	iLocal_47[7] = joaat("buffalo");
	iLocal_47[8] = joaat("intruder");
	iLocal_47[9] = joaat("intruder");
}

void func_249()
{
	iLocal_47[0] = joaat("buccaneer");
	iLocal_47[1] = joaat("voodoo2");
	iLocal_47[2] = joaat("manana");
	iLocal_47[3] = joaat("ruiner");
	iLocal_47[4] = joaat("ruiner");
	iLocal_47[5] = joaat("voodoo2");
	iLocal_47[6] = joaat("surfer2");
	iLocal_47[7] = joaat("emperor2");
	iLocal_47[8] = joaat("stanier");
	iLocal_47[9] = joaat("tailgater");
}

int func_250(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_251(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_252(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xFF692AB7350A74D7((*uParam0)[iVar0]))
		{
			if (unk_0x1B79E937E91F40C3((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_253(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_253(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0xFF692AB7350A74D7((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_254()
{
	return unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
}

void func_255()
{
	func_301(&uLocal_160, 1);
}

void func_256()
{
	switch (iLocal_168)
	{
		case 2:
			if ((Global_113969.f_19976.f_4 % 2) == 0)
			{
				sLocal_465 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_465 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_465 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_797)
			{
			}
			else
			{
				sLocal_465 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_465 = "TOWTRAINM";
			break;
	}
}

int func_257()
{
	return Local_391[iLocal_448 /*23*/].f_22;
}

void func_258(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

void func_259()
{
	iLocal_168 = func_261(Global_113969.f_19976.f_2);
	if (!func_260(iLocal_168))
	{
		iLocal_168 = 3;
	}
	if (iLocal_168 == 3)
	{
	}
	else
	{
		iLocal_448 = func_263(1300f, iLocal_168, Global_113969.f_19976.f_9);
		Global_113969.f_19976.f_9 = iLocal_448;
	}
	if (iLocal_448 == 0)
	{
		iLocal_168 = 3;
	}
	Global_113969.f_19976.f_2 = iLocal_168;
}

int func_260(int iParam0)
{
	iLocal_448 = func_263(1300f, iParam0, Global_113969.f_19976.f_9);
	if (iLocal_448 == -1)
	{
		return 0;
	}
	return 1;
}

int func_261(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_113969.f_19976.f_4 < iVar0)
		{
			iVar0 = Global_113969.f_19976.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_113969.f_19976.f_6 < iVar0)
		{
			iVar0 = Global_113969.f_19976.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_113969.f_19976.f_5 < iVar0)
		{
			iVar0 = Global_113969.f_19976.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_113969.f_19976.f_7 < iVar0)
		{
			iVar0 = Global_113969.f_19976.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_113969.f_19976.f_8 < iVar0)
		{
			iVar0 = Global_113969.f_19976.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_262()
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

int func_263(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar4;
	int iVar5;
	
	fVar0 = 500f;
	iVar1 = -1;
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 53)
	{
		fVar2 = func_9(Local_391[iVar5 /*23*/].f_1, 1);
		if (!func_11(Local_391[iVar5 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar5 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
				else if (Local_391[iVar5 /*23*/] == iParam1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 1)
	{
		iVar1 = iVar3[unk_0xC5935DFB3F39785A(0, (iVar4 - 1))];
	}
	else if (iVar4 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_264(var uParam0)
{
	if (!func_7(uParam0))
	{
		func_59(uParam0);
	}
}

void func_265()
{
	Local_43[0 /*3*/] = { -227,6f, -1172,1f, 21,8963f };
	Local_43[1 /*3*/] = { -205,6866f, -1384,333f, 30,2585f };
	Local_43[2 /*3*/] = { -205,6866f, -1384,333f, 30,2585f };
	Local_43[3 /*3*/] = { 532,4957f, -172,2088f, 53,6835f };
	Local_43[4 /*3*/] = { 1151,507f, -773,4066f, 56,61f };
	Local_43[5 /*3*/] = { 808,4329f, -822,9456f, 25,1821f };
	Local_43[6 /*3*/] = { 2502,613f, 4080,141f, 37,6307f };
	Local_43[7 /*3*/] = { 263,4725f, 2601,842f, 43,8197f };
	Local_44[0 /*3*/] = { 401,6046f, -1632,781f, 28,2928f };
}

void func_266(var uParam0)
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568,8983f, -1698,723f, 28,2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575,1474f, -1697,549f, 28,2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584,8786f, -1703,875f, 28,2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565,9069f, -1702,813f, 28,2227f };
	(uParam0[0 /*28*/])->f_26 = 58,4094f;
	(uParam0[0 /*28*/])->f_17 = { 564,5385f, -1689,707f, 38,2854f };
	(uParam0[0 /*28*/])->f_20 = { 605,4141f, -1715,221f, 18,0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240,0033f, -1141,433f, 28,3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240,5303f, -1137,75f, 28,3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229,8743f, -1145,763f, 28,3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239,0778f, -1134,141f, 28,2367f };
	(uParam0[1 /*28*/])->f_26 = 266,7983f;
	(uParam0[1 /*28*/])->f_17 = { 242,7403f, -1124,753f, 38,3223f };
	(uParam0[1 /*28*/])->f_20 = { 225,7671f, -1152,415f, 18,2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232,3824f, -1137,855f, 28,1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230,8579f, -1136,252f, 28,0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95,1473f, -1716,656f, 28,4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93,1677f, -1717,84f, 28,4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102,9092f, -1729,668f, 28,7511f };
	(uParam0[2 /*28*/])->f_26 = 105,1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99,8953f, -1726,702f, 28,4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101,1025f, -1728,689f, 28,6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117,7085f, -1321,069f, 28,2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116,6308f, -1325,362f, 28,3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112,3024f, -1329,219f, 28,2685f };
	(uParam0[3 /*28*/])->f_26 = 179,9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113,1683f, -1319,459f, 28,2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112,2886f, -1322,422f, 28,2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308,2367f, -1706,026f, 28,3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298,1392f, -1700,768f, 28,3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314,1078f, -1704,305f, 28,3111f };
	(uParam0[4 /*28*/])->f_26 = 227,316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304,5671f, -1697,522f, 28,2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308,3995f, -1699,695f, 28,3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776,3322f, -2046,078f, 28,2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776,0253f, -2048,392f, 28,2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787,8897f, -2034,542f, 28,2393f };
	(uParam0[5 /*28*/])->f_26 = 348,1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782,5989f, -2047,48f, 28,159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783,3265f, -2051,183f, 28,1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28,2787f, -986,7457f, 28,5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35,6153f, -988,3468f, 28,4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38,553f, -985,1667f, 28,5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43,6799f, -982,0863f, 28,4103f };
	(uParam0[6 /*28*/])->f_26 = 251,1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30,5244f, -980,0237f, 28,4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34,0509f, -979,3044f, 28,4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99,1579f, -1521,963f, 28,3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105,699f, -1527,331f, 28,3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95,4077f, -1529,473f, 28,3325f };
	(uParam0[7 /*28*/])->f_26 = 51,3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100,3829f, -1529,783f, 28,2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97,5322f, -1531,58f, 28,3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370,2508f, -871,9623f, 28,2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364,377f, -872,4929f, 28,2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370,0709f, -865,2366f, 28,2507f };
	(uParam0[8 /*28*/])->f_26 = 271,3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363,9474f, -865,3307f, 28,2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361,2415f, -866,9158f, 28,1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258,1324f, -2035,098f, 17,2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263,1343f, -2026,365f, 17,7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260,0068f, -2041,806f, 16,9454f };
	(uParam0[9 /*28*/])->f_26 = 140,9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264,5263f, -2036,198f, 17,2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264,3815f, -2032,379f, 17,329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411,4076f, -1869,433f, 25,5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416,1884f, -1862,589f, 26,0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412,9648f, -1876,901f, 25,3104f };
	(uParam0[10 /*28*/])->f_26 = 135,5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418,299f, -1872,54f, 25,6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419,0923f, -1869,039f, 25,6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500,9577f, -1664,881f, 28,7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501,1261f, -1668,809f, 28,7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503,8388f, -1661,237f, 28,4841f };
	(uParam0[11 /*28*/])->f_26 = 50,8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507,0525f, -1670,254f, 28,7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507,7841f, -1665,116f, 28,4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208,9247f, -660,1125f, 32,629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204,0615f, -660,8978f, 32,7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198,1905f, -664,2867f, 32,8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213,0429f, -666,7334f, 32,6039f };
	(uParam0[12 /*28*/])->f_26 = 70,1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210,6179f, -667,8796f, 32,6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204,9018f, -667,8836f, 32,6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310,1606f, -869,7873f, 30,6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315,0338f, -869,8134f, 30,6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319,5981f, -868,6276f, 30,6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309,987f, -864,1183f, 30,6228f };
	(uParam0[13 /*28*/])->f_26 = 261,3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316,0121f, -862,7733f, 30,6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317,526f, -863,8655f, 30,5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407,2907f, -1479,637f, 28,2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404,6483f, -1483,57f, 28,2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403,5326f, -1475,197f, 28,2951f };
	(uParam0[14 /*28*/])->f_26 = 301,9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399,232f, -1477,783f, 28,2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401,2551f, -1479,737f, 28,1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686,6597f, -851,2509f, 22,9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696,9954f, -852,1266f, 22,6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674,3848f, -844,9825f, 23,1517f };
	(uParam0[15 /*28*/])->f_26 = 269,1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692,3451f, -845,8392f, 22,7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692,3451f, -845,8392f, 22,7217f };
}

void func_267(var uParam0)
{
	(uParam0[0 /*23*/])->f_1 = { 123,999f, -1081,618f, 28,1919f };
	(uParam0[0 /*23*/])->f_4 = 180,477f;
	(uParam0[0 /*23*/])->f_6 = { 97,7377f, -1072,493f, 28,2717f };
	(uParam0[0 /*23*/])->f_9 = 253,9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123,999f, -1081,618f, 28,1919f };
	(uParam0[1 /*23*/])->f_4 = 180,477f;
	(uParam0[1 /*23*/])->f_6 = { 97,7377f, -1072,493f, 28,2717f };
	(uParam0[1 /*23*/])->f_9 = 253,9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301,9741f, -898,8075f, 30,0813f };
	(uParam0[2 /*23*/])->f_4 = 168,6079f;
	(uParam0[2 /*23*/])->f_6 = { -301,0894f, -934,515f, 30,0813f };
	(uParam0[2 /*23*/])->f_9 = 66,2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359,0859f, -965,5469f, 30,0701f };
	(uParam0[3 /*23*/])->f_4 = 145,3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4,5819f, -1762,495f, 28,2918f };
	(uParam0[4 /*23*/])->f_4 = 51,8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260,5293f, -1872,327f, 25,8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209,1288f, -2149,055f, 13,3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331,456f, -1789,7f, 26,817f };
	(uParam0[5 /*23*/])->f_16 = { 190,235f, -1957,1f, 26,816f };
	(uParam0[5 /*23*/])->f_19 = 7,2f;
	(uParam0[6 /*23*/])->f_1 = { 967,3045f, -1873,789f, 30,1425f };
	(uParam0[6 /*23*/])->f_4 = 41,1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607,5065f, -1216,34f, 13,4082f };
	(uParam0[7 /*23*/])->f_4 = 131,5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432,3639f, -619,0512f, 27,5112f };
	(uParam0[8 /*23*/])->f_4 = 263,5155f;
	(uParam0[8 /*23*/])->f_6 = { 435,9689f, -662,4229f, 27,8383f };
	(uParam0[8 /*23*/])->f_9 = 62,5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136,0945f, -785,4554f, 31,4112f };
	(uParam0[9 /*23*/])->f_4 = 276,5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32,488f, -1354,867f, 28,1676f };
	(uParam0[10 /*23*/])->f_4 = 90,8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33,8858f, -1602,918f, 28,2902f };
	(uParam0[11 /*23*/])->f_4 = 142,2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216,8692f, -1814,255f, 24,6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111,725f, -1538,781f, -29,292f };
	(uParam0[11 /*23*/])->f_16 = { 41,484f, -1667,339f, 29,292f };
	(uParam0[11 /*23*/])->f_19 = 7,8f;
	(uParam0[12 /*23*/])->f_1 = { 220,6214f, -852,1f, 29,1084f };
	(uParam0[12 /*23*/])->f_4 = 249,5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337,0184f, -1156,93f, 28,2919f };
	(uParam0[13 /*23*/])->f_4 = 270,3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953,1846f, -2113,256f, 29,5516f };
	(uParam0[14 /*23*/])->f_4 = 265,591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88,9769f, -2003,448f, 17,0168f };
	(uParam0[15 /*23*/])->f_4 = 352,601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211,0682f, -791,7485f, 29,9f };
	(uParam0[16 /*23*/])->f_4 = 68,5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327,4179f, -1529,127f, 26,5696f };
	(uParam0[17 /*23*/])->f_4 = 179,9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596,5739f, -889,578f, 24,4759f };
	(uParam0[18 /*23*/])->f_4 = 269,5022f;
	(uParam0[18 /*23*/])->f_6 = { -584,4996f, -872,2784f, 24,8909f };
	(uParam0[18 /*23*/])->f_9 = 83,1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408,6235f, -989,5519f, 28,2665f };
	(uParam0[19 /*23*/])->f_4 = 233,0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33,8858f, -1602,918f, 28,2902f };
	(uParam0[20 /*23*/])->f_4 = 142,2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216,8692f, -1814,255f, 24,6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111,725f, -1538,781f, -29,292f };
	(uParam0[20 /*23*/])->f_16 = { 41,484f, -1667,339f, 29,292f };
	(uParam0[20 /*23*/])->f_19 = 7,8f;
	(uParam0[21 /*23*/])->f_1 = { 432,3639f, -619,0512f, 27,5112f };
	(uParam0[21 /*23*/])->f_4 = 263,5155f;
	(uParam0[21 /*23*/])->f_6 = { 435,9689f, -662,4229f, 27,8383f };
	(uParam0[21 /*23*/])->f_9 = 62,5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310,2984f, -686,4995f, 32,1219f };
	(uParam0[22 /*23*/])->f_4 = 269,6159f;
	(uParam0[22 /*23*/])->f_6 = { -373,468f, -672,849f, 30,4925f };
	(uParam0[22 /*23*/])->f_9 = 274,2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316,4254f, -895,1236f, 30,0701f };
	(uParam0[23 /*23*/])->f_4 = 347,1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53,578f, -1417,226f, 28,3517f };
	(uParam0[24 /*23*/])->f_4 = 224,8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401,6395f, -2054,658f, 20,575f };
	(uParam0[25 /*23*/])->f_4 = 168,9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146,2919f, -2051,071f, 17,3217f };
	(uParam0[26 /*23*/])->f_4 = 265,1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339,577f, -1779,002f, 28,1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149,063f, -2005,992f, -18,327f };
	(uParam0[26 /*23*/])->f_16 = { 144,98f, -2095,9f, 18,327f };
	(uParam0[26 /*23*/])->f_19 = 8,5f;
	(uParam0[27 /*23*/])->f_1 = { 363,1678f, -1749,957f, 28,2073f };
	(uParam0[27 /*23*/])->f_4 = 229,6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150,5184f, -2010,497f, 17,7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428,271f, -1674,163f, -29,211f };
	(uParam0[27 /*23*/])->f_16 = { 299,18f, -1826,923f, 29,211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171,3444f, -1776,831f, 28,0622f };
	(uParam0[28 /*23*/])->f_4 = 321,1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92,782f, -1554,607f, 32,2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94,446f, -1712,766f, -29,071f };
	(uParam0[28 /*23*/])->f_16 = { 248,549f, -1840,251f, 29,211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421,2757f, -1277,618f, 29,2671f };
	(uParam0[29 /*23*/])->f_4 = 359,101f;
	(uParam0[29 /*23*/])->f_6 = { 455,9831f, -1267,655f, 29,0609f };
	(uParam0[29 /*23*/])->f_9 = 97,7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211,0559f, -1371,688f, 29,5776f };
	(uParam0[30 /*23*/])->f_4 = 52,932f;
	(uParam0[30 /*23*/])->f_6 = { 209,6618f, -1406,521f, 28,2921f };
	(uParam0[30 /*23*/])->f_9 = 263,4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219,3074f, -1491,846f, 30,2593f };
	(uParam0[31 /*23*/])->f_4 = 322,6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177,2324f, -1506,01f, 31,6696f };
	(uParam0[32 /*23*/])->f_1 = { 538,7713f, -1524,826f, 28,168f };
	(uParam0[32 /*23*/])->f_4 = 50,4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535,2374f, -1093,33f, 27,4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557,229f, -1501,367f, -29,273f };
	(uParam0[32 /*23*/])->f_16 = { 518,983f, -1547,597f, 29,273f };
	(uParam0[32 /*23*/])->f_19 = 8,2f;
	(uParam0[33 /*23*/])->f_1 = { 497,2474f, -1199,327f, 28,3046f };
	(uParam0[33 /*23*/])->f_4 = 212,2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516,6573f, -926,7039f, 14,6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512,849f, -1198,747f, -29,311f };
	(uParam0[33 /*23*/])->f_16 = { 483,086f, -1202,507f, 29,311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576,4442f, -1705,259f, 28,0895f };
	(uParam0[34 /*23*/])->f_4 = 43,2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585,9758f, -1707,779f, 28,2677f };
	(uParam0[35 /*23*/])->f_1 = { 233,0704f, -1138,882f, 28,2302f };
	(uParam0[35 /*23*/])->f_4 = 311,5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100,5493f, -1724,973f, 28,3857f };
	(uParam0[36 /*23*/])->f_4 = 81,5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92,7179f, -1721,093f, 28,3288f };
	(uParam0[37 /*23*/])->f_1 = { -114,5507f, -1318,912f, 28,1481f };
	(uParam0[37 /*23*/])->f_4 = 157,6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111,4177f, -1293,568f, 28,2889f };
	(uParam0[38 /*23*/])->f_1 = { 303,2563f, -1699,098f, 28,1861f };
	(uParam0[38 /*23*/])->f_4 = 213,8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284,1822f, -1679,657f, 28,3083f };
	(uParam0[39 /*23*/])->f_1 = { 784,1456f, -2046,703f, 28,1368f };
	(uParam0[39 /*23*/])->f_4 = 12,6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784,365f, -2070,999f, 28,3414f };
	(uParam0[40 /*23*/])->f_1 = { 29,4785f, -980,7521f, 28,4051f };
	(uParam0[40 /*23*/])->f_4 = 221,9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10,3525f, -970,0844f, 28,4022f };
	(uParam0[41 /*23*/])->f_1 = { 101,5021f, -1529,546f, 28,2147f };
	(uParam0[41 /*23*/])->f_4 = 31,1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117,6439f, -1547,885f, 28,2914f };
	(uParam0[42 /*23*/])->f_1 = { 360,6348f, -867,98f, 28,1345f };
	(uParam0[42 /*23*/])->f_4 = 249,799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324,7404f, -864,9786f, 28,2923f };
	(uParam0[43 /*23*/])->f_1 = { 261,1898f, -2035,051f, 17,2895f };
	(uParam0[43 /*23*/])->f_4 = 339,6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279,2888f, -2017,846f, 18,4895f };
	(uParam0[44 /*23*/])->f_1 = { 418,623f, -1867,903f, 25,6724f };
	(uParam0[44 /*23*/])->f_4 = 103,9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443,8106f, -1847,293f, 26,8106f };
	(uParam0[45 /*23*/])->f_1 = { 507,4709f, -1668,593f, 28,6539f };
	(uParam0[45 /*23*/])->f_4 = 78,9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525,0562f, -1678,781f, 28,4452f };
	(uParam0[46 /*23*/])->f_1 = { -203,7249f, -667,237f, 32,6054f };
	(uParam0[46 /*23*/])->f_4 = 34,4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179,7505f, -678,1224f, 33,1625f };
	(uParam0[47 /*23*/])->f_1 = { -318,031f, -865,0022f, 30,482f };
	(uParam0[47 /*23*/])->f_4 = 238,9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338,2523f, -859,7131f, 30,5587f };
	(uParam0[48 /*23*/])->f_1 = { 401,2838f, -1480,87f, 28,3058f };
	(uParam0[48 /*23*/])->f_4 = 281,6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369,6188f, -1495,73f, 28,2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912,906f, 4410,625f, 47,9319f };
	(uParam0[49 /*23*/])->f_4 = 51,9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929,237f, 4389,601f, 49,1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684,671f, 4789,85f, 40,9384f };
	(uParam0[50 /*23*/])->f_4 = 337,6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677,444f, 4772,696f, 40,9936f };
	(uParam0[51 /*23*/])->f_1 = { 217,386f, -2545,061f, 5,1932f };
	(uParam0[51 /*23*/])->f_4 = 95,5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150,731f, -2066,663f, 17,2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217,8829f, -2593,548f, 4,174078f };
	(uParam0[51 /*23*/])->f_16 = { 217,1816f, -2499,779f, 12,43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692,027f, -847,6826f, 22,6477f };
	(uParam0[52 /*23*/])->f_4 = 245,055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723,7541f, -844,7679f, 21,9551f };
}

void func_268()
{
	char* sVar0;
	
	if (iLocal_904 < 16)
	{
		unk_0x406CBCEA35499884();
		unk_0x0F15249D24BC5ADA(1);
		func_301(&Global_112617, 3);
		switch (iLocal_873)
		{
			case 2:
				sVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				sVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				sVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				sVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				sVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				sVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				sVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				sVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				sVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				sVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				sVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				sVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				sVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				sVar0 = "TOW_FAIL_14";
				break;
		}
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!unk_0xD6F9DEE4765092A9(sVar0))
		{
			func_271(sVar0);
		}
		func_270();
		func_272(unk_0x1AF90EB93E0012D6());
		while (!func_269())
		{
			system::wait(0);
		}
		func_194();
	}
}

int func_269()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101533 == 7 || Global_101533 == 8)
	{
		return 1;
	}
	return 0;
}

void func_270()
{
	Global_101568 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
	}
	else if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 25);
	}
}

void func_271(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		if (unk_0x09112CCF7824FE38(sParam0) <= 16)
		{
			StringCopy(&Global_79622, sParam0, 16);
			StringCopy(&Global_79626, "", 16);
			if (unk_0xE7585CE3CDD6F47E())
			{
				unk_0x98188EDB7446A033();
			}
		}
	}
}

void func_272(char* sParam0)
{
	if (Global_101533 != 12)
	{
		func_273(sParam0, 5, -1);
	}
}

int func_273(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar2;
	
	func_298();
	func_297();
	Global_101533 = 0;
	StringCopy(&(Global_101533.f_3), sParam0, 32);
	Global_101533.f_11 = iParam1;
	unk_0xD43B9D1692F5C06E(1);
	unk_0x332262819D51DF61(0);
	unk_0x31E8D1058586E006(0);
	func_293(1);
	func_291(1);
	func_288(0);
	func_287(1);
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 9);
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 6);
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 20);
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 21);
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 5);
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (unk_0xD1F1A906BA9226BE(uVar0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 5);
				}
			}
		}
	}
	unk_0x428C32CC68809A35(1);
	unk_0x406CBCEA35499884();
	func_286(0);
	func_285(1);
	Global_101533.f_2 = Global_101570;
	if (func_284())
	{
		if (func_283())
		{
			if (Global_101570 >= func_280())
			{
				if (!BitTest(Global_92301[iParam2 /*34*/].f_15, 16))
				{
					if (Global_113969.f_9088.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_95689 = 1;
					}
				}
			}
		}
		else if (Global_101533.f_11 == 6)
		{
			func_275(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_113969.f_18577[iParam2 /*6*/].f_4 >= 2)
				{
					Global_95689 = 1;
				}
			}
		}
		else
		{
			iVar2 = func_274(unk_0x1AF90EB93E0012D6());
			if (iVar2 > -1)
			{
				if (Global_113969.f_24989.f_4[iVar2] >= 2)
				{
					Global_95689 = 1;
				}
			}
		}
	}
	return 1;
}

int func_274(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_275(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_276(uParam1, "Abigail1", func_278(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 1:
			func_276(uParam1, "Abigail2", func_278(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 2:
			func_276(uParam1, "Barry1", func_278(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 3:
			func_276(uParam1, "Barry2", func_278(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 4:
			func_276(uParam1, "Barry3", func_278(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 5:
			func_276(uParam1, "Barry3A", func_278(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 6:
			func_276(uParam1, "Barry3C", func_278(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 7:
			func_276(uParam1, "Barry4", func_278(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_277(iParam0), 0, 0);
			break;
		
		case 8:
			func_276(uParam1, "Dreyfuss1", func_278(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 9:
			func_276(uParam1, "Epsilon1", func_278(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 10:
			func_276(uParam1, "Epsilon2", func_278(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 11:
			func_276(uParam1, "Epsilon3", func_278(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 12:
			func_276(uParam1, "Epsilon4", func_278(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 13:
			func_276(uParam1, "Epsilon5", func_278(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 14:
			func_276(uParam1, "Epsilon6", func_278(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 15:
			func_276(uParam1, "Epsilon7", func_278(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 16:
			func_276(uParam1, "Epsilon8", func_278(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 17:
			func_276(uParam1, "Extreme1", func_278(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 18:
			func_276(uParam1, "Extreme2", func_278(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 19:
			func_276(uParam1, "Extreme3", func_278(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 20:
			func_276(uParam1, "Extreme4", func_278(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 21:
			func_276(uParam1, "Fanatic1", func_278(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_277(iParam0), 1, 0);
			break;
		
		case 22:
			func_276(uParam1, "Fanatic2", func_278(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_277(iParam0), 1, 0);
			break;
		
		case 23:
			func_276(uParam1, "Fanatic3", func_278(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_277(iParam0), 0, 1);
			break;
		
		case 24:
			func_276(uParam1, "Hao1", func_278(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_277(iParam0), 0, 1);
			break;
		
		case 25:
			func_276(uParam1, "Hunting1", func_278(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 26:
			func_276(uParam1, "Hunting2", func_278(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 27:
			func_276(uParam1, "Josh1", func_278(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 28:
			func_276(uParam1, "Josh2", func_278(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 29:
			func_276(uParam1, "Josh3", func_278(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 30:
			func_276(uParam1, "Josh4", func_278(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 31:
			func_276(uParam1, "Maude1", func_278(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 32:
			func_276(uParam1, "Minute1", func_278(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 33:
			func_276(uParam1, "Minute2", func_278(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 34:
			func_276(uParam1, "Minute3", func_278(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 35:
			func_276(uParam1, "MrsPhilips1", func_278(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 36:
			func_276(uParam1, "MrsPhilips2", func_278(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 37:
			func_276(uParam1, "Nigel1", func_278(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 38:
			func_276(uParam1, "Nigel1A", func_278(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 39:
			func_276(uParam1, "Nigel1B", func_278(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_277(iParam0), 1, 1);
			break;
		
		case 40:
			func_276(uParam1, "Nigel1C", func_278(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_277(iParam0), 1, 1);
			break;
		
		case 41:
			func_276(uParam1, "Nigel1D", func_278(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_277(iParam0), 1, 1);
			break;
		
		case 42:
			func_276(uParam1, "Nigel2", func_278(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 43:
			func_276(uParam1, "Nigel3", func_278(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 1, 1);
			break;
		
		case 44:
			func_276(uParam1, "Omega1", func_278(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 45:
			func_276(uParam1, "Omega2", func_278(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 46:
			func_276(uParam1, "Paparazzo1", func_278(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 47:
			func_276(uParam1, "Paparazzo2", func_278(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 48:
			func_276(uParam1, "Paparazzo3", func_278(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 49:
			func_276(uParam1, "Paparazzo3A", func_278(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 50:
			func_276(uParam1, "Paparazzo3B", func_278(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 51:
			func_276(uParam1, "Paparazzo4", func_278(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 52:
			func_276(uParam1, "Rampage1", func_278(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 54:
			func_276(uParam1, "Rampage3", func_278(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 55:
			func_276(uParam1, "Rampage4", func_278(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 56:
			func_276(uParam1, "Rampage5", func_278(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_277(iParam0), 0, 0);
			break;
		
		case 53:
			func_276(uParam1, "Rampage2", func_278(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_277(iParam0), 1, 0);
			break;
		
		case 57:
			func_276(uParam1, "TheLastOne", func_278(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 58:
			func_276(uParam1, "Tonya1", func_278(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 59:
			func_276(uParam1, "Tonya2", func_278(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 60:
			func_276(uParam1, "Tonya3", func_278(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 61:
			func_276(uParam1, "Tonya4", func_278(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		case 62:
			func_276(uParam1, "Tonya5", func_278(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_277(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_276(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_278(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_279(iParam0) };
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_279(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_280()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_281(&(Global_101533.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_281(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x70E57E9927B6BA58(uParam0);
	iVar1 = func_282(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_282(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_92301[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_283()
{
	if ((((Global_101533.f_11 == 0 || Global_101533.f_11 == 1) || Global_101533.f_11 == 2) || Global_101533.f_11 == 3) || Global_101533.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_284()
{
	if ((((Global_101533.f_11 == 0 || Global_101533.f_11 == 1) || Global_101533.f_11 == 2) || Global_101533.f_11 == 6) || Global_101533.f_11 == 3)
	{
		return 1;
	}
	if (Global_101533.f_11 == 5)
	{
		if (func_274(&(Global_101533.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_285(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_44591 = 1;
	}
	else
	{
		Global_44591 = 0;
	}
}

void func_286(int iParam0)
{
	unk_0x747786364137DC63(iParam0);
	unk_0x37B894853929BF1A(iParam0);
}

void func_287(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5C6622EF2CEA902F();
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 3);
	}
	else if (BitTest(Global_101533.f_20, 3))
	{
		unk_0xCCC82B30A1C53626();
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 3);
	}
}

void func_288(int iParam0)
{
	if (iParam0 == 1)
	{
		if (BitTest(Global_101533.f_20, 4))
		{
			func_290();
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 4);
		}
	}
	else
	{
		func_289();
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 4);
	}
}

void func_289()
{
	Global_23692.f_5 = 1;
}

void func_290()
{
	Global_23692.f_5 = 0;
}

void func_291(bool bParam0)
{
	if (bParam0)
	{
		func_292();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_163(0))
		{
			func_293(0);
		}
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!Global_20930.f_1 == 0)
		{
			Global_20930.f_1 = 3;
		}
	}
}

void func_292()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_293(int iParam0)
{
	if (func_296())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_295())
		{
			func_294(1, 1);
		}
		else
		{
			func_294(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 30);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 30);
	}
	if (!func_23())
	{
		Global_20930.f_1 = 3;
	}
}

void func_294(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_163(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				unk_0x78C4EBB0251847E2(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			unk_0x6B7EA0158D00C600(Global_20867);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
}

bool func_295()
{
	return BitTest(Global_1956920, 5);
}

bool func_296()
{
	return BitTest(Global_1956920, 19);
}

void func_297()
{
	Global_95689 = 0;
	Global_95690 = 0;
}

void func_298()
{
	Global_101533 = 13;
	Global_101533.f_1 = -1;
	Global_101533.f_2 = 0;
	Global_101533.f_30 = 0f;
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 25);
	Global_101567 = 0;
	func_285(0);
	func_300();
	func_299();
	Global_101533.f_18 = -1;
	Global_101533.f_19 = -1;
}

void func_299()
{
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 22);
	unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 8);
}

void func_300()
{
	if (Global_101533.f_16 != 0)
	{
		unk_0xD314260005F064BF(&(Global_101533.f_16));
		Global_101533.f_16 = 0;
	}
	if (Global_101533.f_17 != 0)
	{
		unk_0xD314260005F064BF(&(Global_101533.f_17));
		Global_101533.f_17 = 0;
	}
}

void func_301(var uParam0, int iParam1)
{
	func_302(uParam0, iParam1);
}

void func_302(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_303()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

