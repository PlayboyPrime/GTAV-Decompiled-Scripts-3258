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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 1000;
	var uLocal_53 = 1000;
	var uLocal_54 = 0;
	int iLocal_55[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
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
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<3> Local_75 = { 0, 0, 0 } ;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 1132396544;
	var uLocal_91 = 1132396544;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 0;
	var uLocal_94 = -1082130432;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 8;
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
	var uLocal_154 = -1;
	var uLocal_155 = 1092616192;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 5;
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
	struct<10> Local_180[15];
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	struct<2> Local_183 = { 0, 16 } ;
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
	struct<3> Local_248[8];
	struct<3> Local_249[12];
	struct<3> Local_250[6];
	struct<3> Local_251[5];
	struct<3> Local_252[20];
	struct<3> Local_253[11];
	struct<3> Local_254[3];
	struct<3> Local_255[3];
	struct<3> Local_256[4];
	struct<3> Local_257[7];
	struct<3> Local_258[3];
	struct<3> Local_259[4];
	struct<3> Local_260[2];
	struct<3> Local_261[4];
	struct<3> Local_262[7];
	struct<3> Local_263[7];
	struct<3> Local_264[8];
	struct<3> Local_265[5];
	struct<3> Local_266[5];
	struct<3> Local_267[6];
	struct<3> Local_268[6];
	struct<3> Local_269[6];
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	struct<429> Local_272 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	struct<13> Local_282 = { 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_283 = 23;
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
	int iLocal_537 = 0;
	bool bLocal_538 = 0;
	struct<28> Local_539 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 5;
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
	var uLocal_585 = 1097859072;
	var uLocal_586 = 1500;
	var uLocal_587 = 45;
	var uLocal_588 = 1103626240;
	var uLocal_589 = 5;
	var uLocal_590 = 0;
	float fLocal_591 = 0f;
	bool bLocal_592 = 0;
	var uLocal_593 = 0;
	struct<2> Local_594 = { 0, 0 } ;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
#endregion

void __EntryFunction__()
{
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
	uLocal_69 = unk_0x8CC13B3BF7A9890A();
	uLocal_70 = unk_0x2A3612A4B836469E();
	Local_75 = { 500f, 500f, 500f };
	bLocal_592 = true;
	if (unk_0x96CFB880BAC634CE(67))
	{
		func_438();
	}
	unk_0x925970A93719CADE(1);
	func_422();
	func_420(&uLocal_283);
	func_419();
	func_400();
	Local_272.f_14 = { 4186,797f, -3657,349f, -0,5762f };
	while (true)
	{
		func_1();
		system::wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (func_399(&Local_272))
	{
		func_398(&Local_272);
		if (Local_272.f_410 > 0)
		{
			switch (iLocal_271)
			{
				case 0:
					if (func_397(&Local_272, 0))
					{
						iLocal_271 = 1;
					}
					break;
				
				case 1:
					func_395();
					break;
			}
		}
		else if (func_394(&Local_272, 31) > 5f)
		{
			func_438();
		}
	}
	else
	{
		if (Local_272.f_410 <= 9)
		{
			func_359(&Local_272, &uLocal_583);
			func_358(&Local_272);
		}
		func_357(&Local_272);
		func_356(&Local_272, &uLocal_590, 0);
		if (Local_272.f_410 > 2)
		{
			if (!func_355(&Local_272))
			{
				func_320();
			}
			else
			{
				func_301(&Local_272, "Taxi Not Driveable", func_319(&Local_272));
			}
		}
		if (Local_272.f_410 == 9)
		{
			func_277(&Local_272, 0, 1);
		}
		if (func_276("TC_HOWTOSTART"))
		{
			unk_0x428C32CC68809A35(1);
		}
		switch (Local_272.f_410)
		{
			case 2:
				if (func_270(&uLocal_283, &(Local_272.f_14), 1))
				{
					func_269(&Local_272, 0);
				}
				break;
			
			case 0:
				if (func_264(&Local_272))
				{
					func_261();
					func_269(&Local_272, 1);
				}
				break;
			
			case 1:
				if (func_259())
				{
					func_258(&Local_272);
					func_269(&Local_272, 3);
				}
				break;
			
			case 3:
				if (!unk_0xFC8BFE4B41177C22(Local_272.f_3))
				{
					func_257(&Local_272, Local_272.f_14);
					Local_272.f_11 = { Local_272.f_14 };
					func_256(Local_272.f_14, 0);
					unk_0x55F7AC4B2B875901(Local_272.f_14, 2f, 0);
					Local_272.f_3 = unk_0xB1DBFEB95C0EFB88(26, iLocal_537, Local_272.f_11, 0, 1, 1);
					unk_0x397CF4F4C8B17365(Local_272.f_3, Local_272.f_145);
					func_255(&(Local_272.f_244), 3, Local_272.f_3, "TaxiGeneric", 0, 1);
					unk_0x0FB8E752BCC547A9(Local_272.f_3, 112, 1);
					if (!unk_0x4FAFF4BCB7633475(Local_272.f_3))
					{
						unk_0x0428AFDCAA63B06E(Local_272.f_3, 32, 0);
						unk_0x0428AFDCAA63B06E(Local_272.f_3, 177, 1);
						unk_0x0428AFDCAA63B06E(Local_272.f_3, 317, 1);
						Local_272.f_8 = func_254(Local_272.f_3, 0, 0);
						unk_0x594D5D0D7071B0DE(Local_272.f_8, "TAXI_BLIP_PASS");
						unk_0xF3603E8FF037B294(1, 0);
						unk_0xBC64B805EE071A37(Local_272.f_8, 1);
						unk_0x06CD913C241C765E("TAXI_Passenger", &(Local_272.f_413));
						unk_0xD414C47AFF81382A(1, Local_272.f_413, joaat("player"));
						unk_0xD414C47AFF81382A(2, Local_272.f_413, joaat("COP"));
						unk_0x3CEA1FD137ACE2D9(Local_272.f_3, Local_272.f_413);
						unk_0xE67051907958B5EB(Local_272.f_3, Local_272.f_4, -1, 2048, 4);
					}
					func_253(&Local_272, 1, 0);
					func_269(&Local_272, 5);
				}
				break;
			
			case 5:
				if (!func_252(Global_113969.f_19100, 2))
				{
					if (func_251(9) >= 2)
					{
						func_250("TAXI_2CANCEL", -1);
						func_248(&(Global_113969.f_19100), 2);
					}
				}
				if (unk_0x6D05C5731A838CB3(0, 86) && !Local_272.f_48 > 0)
				{
					func_301(&Local_272, "Player cancelled on dispatch", 19);
				}
				if (func_222(&Local_272, 0, 1109393408))
				{
					func_269(&Local_272, 15);
				}
				break;
			
			case 15:
				if (func_221(&Local_272))
				{
					func_216(&Local_282);
					Local_272.f_17 = { func_215(Local_282.f_1) };
					Local_272.f_29 = { func_214(Local_282.f_1) };
					func_210(&Local_272, 9, 1, 0, 0);
					if (!unk_0xC450B06E5AAA0985(Local_272.f_9))
					{
						Local_272.f_9 = func_209(Local_272.f_17, 1);
					}
					func_208(&Local_272);
					func_207();
					func_269(&Local_272, 9);
				}
				if (unk_0xD9F5E1FEFD1329E4(Local_272.f_4, 0))
				{
					if (!unk_0xCECDBB848D53DEB2(Local_272.f_2, Local_272.f_4, 0))
					{
						func_203(&Local_272);
						func_269(&Local_272, 5);
					}
				}
				break;
			
			case 9:
				if (func_187(&Local_272))
				{
					func_186(&Local_272, &(Local_272.f_43));
					func_181();
					func_178(&Local_272);
					func_172(&Local_272, 1097859072, 1117782016);
					if (func_168(&Local_272, func_171()))
					{
						fLocal_591 = ((Local_282.f_12 / func_394(&Local_272, 7)) * 3600f);
						if (fLocal_591 > 40f)
						{
							Local_272.f_56 = Local_272.f_59;
						}
						else if (fLocal_591 > 30f)
						{
							Local_272.f_56 = Local_272.f_58;
						}
						else
						{
							Local_272.f_56 = 0;
						}
						unk_0xFE54B8568B2ABD12(&(Local_272.f_9));
						iVar0 = unk_0xC5935DFB3F39785A(0, 100);
						if (iVar0 < 10)
						{
							bLocal_592 = true;
						}
						else
						{
							bLocal_592 = false;
						}
						func_166(&Local_272);
						func_161(bLocal_592);
						func_160(&Local_272);
						if (bLocal_592)
						{
							func_269(&Local_272, 28);
						}
						else
						{
							func_269(&Local_272, 27);
						}
					}
				}
				break;
			
			case 27:
				if (func_149(&Local_272, 1))
				{
					if (!unk_0x1C2F771CDC87A3A5(Local_272.f_3, 0))
					{
						unk_0xD0557B139A542F12(&uLocal_593);
						unk_0xB5396F1FB088FE38(&uLocal_593);
						unk_0x84B06A81C98DA4B8(0);
						unk_0x96F4A599D1C6F95A(0, 0);
						if (unk_0x81E5E9AE1379B068(func_214(Local_282.f_1), 5f, 1))
						{
							unk_0xFC8E18D52935E5EB(0, func_214(Local_282.f_1), 5f, 0);
						}
						else
						{
							unk_0xA966E518B752B92A(0, func_214(Local_282.f_1), 1f, -1, 1048576000, 0, 1193033728);
							unk_0x0FD8B5F4BB15CD71(0, 500);
							unk_0x21B9EFA4B4AA3A5B(0, func_147(func_148(), "WORLD_HUMAN_STAND_MOBILE", "WORLD_HUMAN_AA_SMOKE"), 5000, 1);
							unk_0x761F56E633460973(0, 1193033728, 0);
						}
						unk_0x93C0674FC00824D0(uLocal_593);
						unk_0x4BD42B0527065BB6(Local_272.f_3, uLocal_593);
						unk_0x44FB298D6382876D(Local_272.f_3, 1);
					}
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
					func_269(&Local_272, 29);
				}
				break;
			
			case 28:
				if (func_105(&uLocal_274, &Local_272, &(Local_272.f_3), &uLocal_275, 1))
				{
					func_269(&Local_272, 29);
				}
				break;
			
			case 29:
				switch (iLocal_158)
				{
					case 0:
						unk_0xBF3D28CA44F3BE2D(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
						func_103(&Local_594, "TAXI_FARE_FIN", Local_272.f_50, Local_272.f_56, (Local_272.f_50 + Local_272.f_56), "TAXI_FARE_DET", 4000, 1);
						Local_594.f_1 = 4000;
						func_102(1);
						iLocal_158 = 6;
						break;
					
					case 6:
						if (!func_98(&Local_594, 1))
						{
							func_72(&Local_272);
							func_69(&Local_272, 0, 0, 0);
							func_102(0);
							iLocal_158 = 7;
						}
						break;
					
					case 7:
						func_2(1, &Local_272, 1);
						func_269(&Local_272, 30);
						break;
				}
				break;
			
			case 30:
				func_438();
				break;
			}
	}
}

void func_2(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_44(uParam1);
		if (!unk_0x4FAFF4BCB7633475(uParam1->f_3))
		{
			unk_0x0428AFDCAA63B06E(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_42(1, 0);
	}
	func_3(uParam1, bParam2);
}

void func_3(var uParam0, bool bParam1)
{
	func_398(uParam0);
	if (func_41())
	{
		func_39();
	}
	func_37();
	unk_0x406CBCEA35499884();
	unk_0x428C32CC68809A35(1);
	func_32(0);
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		unk_0x5FE0938FDE9B0958(uParam0->f_4, 0);
		unk_0xB7BDF91BE073DCFB(uParam0->f_4);
		unk_0xD27458C016741B0C(uParam0->f_4);
	}
	func_256(uParam0->f_14, 1);
	func_30(uParam0->f_14, 1, 1114636288);
	func_29(&(uParam0->f_244), 3);
	unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);
	if (func_26())
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	}
	unk_0x9C22AADBAF330B36(1);
	func_15(0, 1, 1, 0, 0, 0, 0);
	unk_0x37B894853929BF1A(1);
	unk_0x747786364137DC63(1);
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x0A0A06C514052E80(1);
	}
	if (func_252(Global_113969.f_19100, 4))
	{
		func_13(&(Global_113969.f_19100), 4);
		unk_0xCCA6D8A84EE8C88A(func_12(), 0);
	}
	if (bParam1)
	{
		func_11(uParam0);
	}
	func_10(uParam0);
	unk_0x268BE77F77533D03("gestures@m@standing@casual");
	unk_0x268BE77F77533D03("oddjobs@taxi@");
	unk_0x268BE77F77533D03("oddjobs@towingcome_here");
	if (unk_0x261E3728EE56B3AC())
	{
		func_8(uParam0->f_411);
	}
	if (!unk_0xE916D57851F785AB(unk_0xB6B621402486C3E4()))
	{
		unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	}
	unk_0x60642EDE690B1018(system::round((func_4(&uLocal_80) * 1000f)), 12, 0);
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
	return 0f;
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

void func_8(int iParam0)
{
	var uVar0;
	
	if (iLocal_55[0] != 0)
	{
		MemCopy(&uVar0, {func_9(iParam0)}, 6);
		if (!unk_0xFF692AB7350A74D7(&uVar0))
		{
		}
	}
}

struct<8> func_9(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_10(var uParam0)
{
	unk_0x1B3217FCFCCC3FCF(uParam0->f_51[0]);
}

void func_11(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_3))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			if (!unk_0x7F420695E3F776FB(uParam0->f_3, 0))
			{
				unk_0x61BB4B7411E1DF82(uParam0->f_3);
			}
			unk_0xAAA71DD7E9059338(uParam0->f_3, 0);
			unk_0xD414C47AFF81382A(255, uParam0->f_413, joaat("player"));
			if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x08D8528BA8E43641(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x08D8528BA8E43641(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x13CCB1AD131C1082(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x08D8528BA8E43641(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x13CCB1AD131C1082(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x08D8528BA8E43641(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0xF09E30AF1B8FB379(&(uParam0->f_3));
		}
	}
}

int func_12()
{
	return joaat("taxi");
}

void func_13(var uParam0, int iParam1)
{
	func_14(uParam0, iParam1);
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_25(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_24())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_23(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_25(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_23(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_21(unk_0x259BE71D8A81D4FA())) && !func_17(unk_0x259BE71D8A81D4FA(), 0)) && !func_16()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_21(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_16()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1574926;
}

int func_20(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_21(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_22())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	return BitTest(Global_2621446, 3);
}

int func_23(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_24()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 13);
	}
}

int func_26()
{
	if (!func_28() && !func_27())
	{
		if (!unk_0x206A708429803A39(unk_0xB6B621402486C3E4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_27()
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_29(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_30(struct<3> Param0, bool bParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_31(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { func_31(Param0, 1f, fParam2, fParam2, fParam2) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam1)
	{
		unk_0xD1B0AF388B711EBC(Var0, Var1, 0, 1);
	}
	else
	{
		unk_0x33B6B083EA6305A5(Var0, Var1, 1);
		unk_0x93586F94C370857F();
	}
}

Vector3 func_31(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = system::cos(fVar1);
	fVar3 = system::sin(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

void func_32(int iParam0)
{
	if (func_36())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_35())
		{
			func_33(1, 1);
		}
		else
		{
			func_33(0, 0);
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
	if (!func_24())
	{
		Global_20930.f_1 = 3;
	}
}

void func_33(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_34(0))
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

int func_34(int iParam0)
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

bool func_35()
{
	return BitTest(Global_1956920, 5);
}

bool func_36()
{
	return BitTest(Global_1956920, 19);
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_98446[iVar0 /*17*/] && !Global_98446[iVar0 /*17*/].f_1)
		{
			if (Global_98446[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_98446[iVar0 /*17*/].f_5 != 88 && Global_98446[iVar0 /*17*/].f_5 != 89) && Global_98446[iVar0 /*17*/].f_5 != 92)
				{
					func_38(Global_98446[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95498[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95498[iParam0 /*2*/] = 0;
	}
}

void func_39()
{
	Global_21152 = 0;
	func_40();
}

void func_40()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

int func_41()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_113969.f_19100.f_22[0]++;
			func_43("Fares Completed ++ = ", Global_113969.f_19100.f_22[0]);
			break;
		
		case 1:
			Global_113969.f_19100.f_22[1]++;
			func_43("Fares Failed ++ = ", Global_113969.f_19100.f_22[1]);
			break;
		
		case 2:
			Global_113969.f_19100.f_22[2]++;
			func_43("Fares Accepted ++ ", Global_113969.f_19100.f_22[2]);
			break;
		
		case 3:
			Global_113969.f_19100.f_22[3]++;
			func_43("Fares Expired ++ ", Global_113969.f_19100.f_22[3]);
			break;
		
		case 13:
			Global_113969.f_19100.f_22[13]++;
			func_43("Passengers run ++ = ", Global_113969.f_19100.f_22[13]);
			break;
		
		case 14:
			Global_113969.f_19100.f_22[14]++;
			func_43("Passenger Forced to Pay ++ = ", Global_113969.f_19100.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113969.f_19100.f_22[4])
				{
					Global_113969.f_19100.f_22[4] = iParam1;
					func_43("This distance ", iParam1);
					func_43(" is longer than current best", Global_113969.f_19100.f_22[4]);
				}
				else
				{
					func_43("Longest Distance Not Beat ", Global_113969.f_19100.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113969.f_19100.f_22[5] = (Global_113969.f_19100.f_22[5] + iParam1);
			func_43("Total Distance w/ Passenger = ", Global_113969.f_19100.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_113969.f_19100.f_22[6]++;
			}
			else
			{
				Global_113969.f_19100.f_22[6] = (Global_113969.f_19100.f_22[6] + iParam1);
			}
			func_43("Wanted Levels ++ = ", Global_113969.f_19100.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_113969.f_19100.f_22[7] = (Global_113969.f_19100.f_22[7] + iParam1);
			}
			else
			{
				Global_113969.f_19100.f_22[7]++;
			}
			func_43("Wanted Levels Lost = ", Global_113969.f_19100.f_22[7]);
			break;
		
		case 8:
			Global_113969.f_19100.f_22[8]++;
			func_43("Taxis wrecked ++ = ", Global_113969.f_19100.f_22[8]);
			break;
		
		case 9:
			Global_113969.f_19100.f_22[9]++;
			func_43("Horn Honked ++ = ", Global_113969.f_19100.f_22[9]);
			break;
		
		case 10:
			Global_113969.f_19100.f_22[10] = (Global_113969.f_19100.f_22[10] + iParam1);
			func_43("Total Money Earned = ", Global_113969.f_19100.f_22[10]);
			break;
		
		case 11:
			Global_113969.f_19100.f_22[11] = (Global_113969.f_19100.f_22[11] + iParam1);
			func_43("Total Tips Earned = ", Global_113969.f_19100.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113969.f_19100.f_22[12])
			{
				Global_113969.f_19100.f_22[12] = iParam1;
				func_43("New Highest Tip = ", Global_113969.f_19100.f_22[12]);
			}
			else
			{
				func_43("Highest Tip Not Reached = ", Global_113969.f_19100.f_22[12]);
			}
			break;
	}
}

void func_43(char* sParam0, int iParam1)
{
}

void func_44(var uParam0)
{
	func_42(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_68(1);
		func_54(15, 1);
	}
	func_248(&(Global_113969.f_19100), 1024);
	if (!func_252(Global_113969.f_19100, 64))
	{
		func_45(func_52(func_53(uParam0)), 0, 0);
	}
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_51((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_46();
	}
}

void func_46()
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
	
	iVar0 = 0;
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					unk_0x8DD7F37773EBD5B9(joaat("num_rndevents_completed"), Global_113692, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	unk_0x1164A75E490C27B6(joaat("num_missions_completed"), Global_113705, 1);
	unk_0x1164A75E490C27B6(joaat("num_missions_available"), Global_113688, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_completed"), Global_113706, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_available"), Global_113689, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_completed"), Global_113707, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_available"), Global_113690, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_completed"), Global_113708, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_available"), Global_113691, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_available"), Global_113695, 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_completed"), (Global_113711 + Global_113710), 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_available"), (Global_113694 + Global_113693), 1);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	unk_0x4F8678C02360C3D2(joaat("total_progress_made"), Global_113969.f_10197.f_3853, 1);
	unk_0x1164A75E490C27B6(joaat("percent_story_missions"), Global_113712, 1);
	unk_0x1164A75E490C27B6(joaat("percent_ambient_missions"), Global_113713, 1);
	unk_0x1164A75E490C27B6(joaat("percent_oddjobs"), Global_113714, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_113969.f_10197.f_3853))
	{
		func_50(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_49() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
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

int func_48(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_49()
{
	return Global_32948;
}

int func_50(int iParam0, int iParam1)
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

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_52(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_53(var uParam0)
{
	return uParam0->f_411;
}

int func_54(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)
{
	if (func_67(14) && !func_66(iParam0))
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
	if (func_65(&Global_4543384))
	{
		if (func_63(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_56(&Global_4543384, iParam0))
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

int func_56(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_67(14) && !func_66(iParam1))
	{
		return 0;
	}
	if (func_63(uParam0, iParam1))
	{
		return 0;
	}
	if (func_62(uParam0) < 0f)
	{
		func_61(uParam0, 0);
	}
	func_59(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_57(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_57(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_67(14) && !func_66(iParam1))
	{
		return 0;
	}
	if (func_63(uParam0, iParam1))
	{
		return 0;
	}
	if (func_62(uParam0) < 0f)
	{
		func_61(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_58(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_58(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_59(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_60(uParam0, iVar0);
		iVar0++;
	}
	func_61(uParam0, (Global_4543383 - 0,5f));
}

void func_60(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_61(var uParam0, float fParam1)
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

float func_62(var uParam0)
{
	return uParam0->f_80;
}

bool func_63(var uParam0, int iParam1)
{
	return func_64(uParam0, iParam1) != -1;
}

int func_64(var uParam0, int iParam1)
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

bool func_65(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_66(int iParam0)
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

bool func_67(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_68(int iParam0)
{
	Global_112676.f_22 = iParam0;
}

void func_69(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_71(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_70(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_71(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_70(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_70(var uParam0)
{
	func_71(uParam0, 0f);
}

void func_71(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_73(func_92(), 21, iVar0, 0, 0);
		func_42(10, iVar0);
		iLocal_55[0] = iVar0;
	}
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_91(iParam0) == 3)
	{
		return;
	}
	if (func_91(iParam0) == 4)
	{
		return;
	}
	func_74(func_91(iParam0), 1, iParam1, iParam2, 0);
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

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_90();
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
					func_89(99, 1);
					func_88(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_87(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_84(5))
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
							func_88(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_84(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_88(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_property"), iParam3);
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
									func_88(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_84(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_83(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
				
				case 1:
					func_89(97, iParam3);
					break;
				
				case 2:
					func_89(96, iParam3);
					break;
			}
			func_89(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_77(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_77(bVar1);
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
					func_88(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_total_cash_earned"), iParam3);
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
	func_76(iParam0);
	if (Global_44042 == 15)
	{
		func_75(0);
	}
	return 1;
}

void func_75(bool bParam0)
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

void func_76(int iParam0)
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

void func_77(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_51(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_51(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_51(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_51(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_80(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_80(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_80(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_80(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_80(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_80(8277, 0, -1, 1);
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
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_79() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_79() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_78(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_78(bool bParam0)
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

int func_79()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_81(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_81(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_82(uParam1));
}

int func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

void func_83(int iParam0)
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
}

int func_84(int iParam0)
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
		return func_86(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_86(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_86(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_86(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_85(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_85(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_85(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_85(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_85(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_85(8277, -1);
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
	return BitTest(Global_2359296[func_79() /*5570*/].f_681.f_10, iParam0);
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_81(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_86(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_87(bool bParam0)
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
		func_50(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_54(27, 1);
	return 1;
}

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_89(int iParam0, int iParam1)
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

void func_90()
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

int func_91(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_17;
}

int func_92()
{
	func_93();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_93()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_96(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_95(unk_0x4A8C381C258A124D());
			if (func_94(iVar0) && (!func_67(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_94(Global_113969.f_2366.f_539.f_4321))
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

bool func_94(int iParam0)
{
	return iParam0 < 3;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)
{
	if (func_94(iParam0))
	{
		return func_97(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_97(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_98(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_70(&(uParam0->f_2));
	}
	unk_0x4EB223432F8FA0A0(14);
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x875A214D5EBCA509(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_70(&(uParam0->f_5));
				func_101(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_100(&(uParam0->f_5)) > 0,33f)
			{
				func_99(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_100(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_70(&(uParam0->f_5));
			func_101(uParam0, 1051260355);
		}
		else if (func_100(&(uParam0->f_5)) > 0,33f)
		{
			func_99(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_99(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_100(var uParam0)
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

void func_101(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(*uParam0, "SHARD_ANIM_OUT");
	unk_0x330108B080A2132F(uParam0->f_9);
	unk_0x74BF156C860580D4(iParam1);
	unk_0xE6B753D52F4CA222();
}

void func_102(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

void func_103(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0x88F483FBD433696A(*uParam0, func_104());
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x4E5A3D96808F7F84(iParam7);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xCFAD3D478C87321A();
	unk_0x882AEFD55B8D51FB(sParam5);
	unk_0x511D14ED2DA887E1(uParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	unk_0x511D14ED2DA887E1(iParam4);
	unk_0xCFAD3D478C87321A();
	unk_0xE6B753D52F4CA222();
	func_70(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

char* func_104()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

int func_105(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x1C2F771CDC87A3A5(*uParam2, 0))
			{
				func_142(uParam1, 320, bParam4);
				unk_0x886FA295C1257AAA(*uParam2, unk_0xC5935DFB3F39785A(100, 300));
				func_140(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_42(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x1C2F771CDC87A3A5(*uParam2, 0))
			{
				if (!unk_0x7F420695E3F776FB(*uParam2, 0))
				{
					unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x1C2F771CDC87A3A5(*uParam2, 0))
			{
				func_111(&uLocal_43, *uParam2, 0, 0, 1, 1, 1);
				if (!func_110(uParam1->f_2, *uParam2))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam1->f_4, 0))
					{
						if (unk_0x9B3D4335E0EDB0BE(*uParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (unk_0x9B3D4335E0EDB0BE(*uParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!unk_0x7F420695E3F776FB(uParam1->f_2, 0))
						{
							if (unk_0xFAA48325A90263BE(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x65F146FF416F109F(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (unk_0xFAA48325A90263BE(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (unk_0x11552FA9DCB8E126(uParam1->f_2, 6))
									{
										if (unk_0x196704C916969409())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (unk_0xFAA48325A90263BE(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x65F146FF416F109F(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (unk_0xFAA48325A90263BE(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x65F146FF416F109F(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_109(&uLocal_43, 0, 0);
					uParam1->f_109 = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_109(&uLocal_43, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_109(&uLocal_43, 0, 0);
			if (!unk_0x1C2F771CDC87A3A5(*uParam2, 0))
			{
				if (unk_0xC450B06E5AAA0985(uParam1->f_8))
				{
					unk_0xFE54B8568B2ABD12(&(uParam1->f_8));
				}
				unk_0xAAA71DD7E9059338(*uParam2, 1);
				unk_0xB5396F1FB088FE38(&uVar0);
				unk_0xAFC7A89C990C4339(0, 5000);
				unk_0xD844F5E50DAB6FF7(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0x96F4A599D1C6F95A(0, 0);
				unk_0x93C0674FC00824D0(uVar0);
				unk_0x4BD42B0527065BB6(*uParam2, uVar0);
				unk_0xD0557B139A542F12(&uVar0);
				unk_0x44FB298D6382876D(*uParam2, 1);
				func_210(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				unk_0x406CBCEA35499884();
			}
			else
			{
				*uParam0 = 4;
				unk_0x406CBCEA35499884();
			}
			if (unk_0xC450B06E5AAA0985(uParam1->f_8))
			{
				unk_0xFE54B8568B2ABD12(&(uParam1->f_8));
			}
			func_106(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0x1D56B24774D5E23C(uParam3->f_6))
			{
				if (unk_0xC450B06E5AAA0985(uParam3->f_5))
				{
					unk_0xFE54B8568B2ABD12(&(uParam3->f_5));
				}
				func_166(uParam1);
				func_42(14, 0);
				uParam1->f_56 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x1C2F771CDC87A3A5(*uParam2, 0))
			{
				unk_0xF09E30AF1B8FB379(uParam2);
				if (unk_0xC450B06E5AAA0985(uParam1->f_8))
				{
					unk_0xFE54B8568B2ABD12(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0xF165EAD0AA08F3B6(unk_0xB6B621402486C3E4(), 2, 0);
				unk_0x42C9A22D6724F283(unk_0xB6B621402486C3E4(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_106(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		uParam1->f_2 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
		unk_0x886FA295C1257AAA(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0xC5935DFB3F39785A(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x240E88FB0B8CC932(iParam0, 1067030938, 1069547520) };
	}
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_1), 3);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_1), 4);
	Var0 = { unk_0x165E2DDD2BD0F07D(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x8D4CAF9A056EA9E4(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0xC450B06E5AAA0985(uParam1->f_5))
		{
			uParam1->f_5 = func_107(uParam1->f_6);
			unk_0x594D5D0D7071B0DE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x594D5D0D7071B0DE(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_107(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB0E14182FAD64944(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA1521B7DF72BC9C8(uParam0);
	unk_0x5D3946F818C6B331(uVar0, func_108(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	return uVar0;
}

float func_108(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_109(var uParam0, int iParam1, int iParam2)
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
		if (func_276(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_276(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

int func_110(var uParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam1))
	{
		if (!unk_0xFAA48325A90263BE(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x7B780C491DEC834E(unk_0xD1A6A821F5AC81DB(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_112(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_112(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_113(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_113(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_109(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_114(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_114(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
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
	if (func_276(iVar0))
	{
		func_139();
	}
	if (func_138(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
	{
		iVar1 = 0;
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk_0x7A8C6BB4DA2434F1(unk_0xBD545F8729E9F413(iParam1));
			unk_0x7AA365BA6A18440B(unk_0xBD545F8729E9F413(iParam1), 1);
			if (unk_0x731EE2A006FD5120(unk_0xBD545F8729E9F413(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x55B80B6E7AB61270(iParam1))
		{
			unk_0x8FBF79AC214E3747(unk_0xE93EDE86BBB66532(iParam1));
			if (unk_0x4F7C7E268667C7B3(unk_0xE93EDE86BBB66532(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam1))
		{
			unk_0x33D763C13554690A(unk_0x0646D07BB2D516CD(iParam1));
			if (unk_0xF31BAE02C52ADEFD(unk_0x0646D07BB2D516CD(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE37AC296E66C33AF())
		{
			if (func_133(uParam0, bParam5, bParam7, 0))
			{
				func_129(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_118(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam6)
						{
							if (!func_276(iVar0))
							{
								func_250(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_117(1);
								}
							}
						}
					}
				}
			}
			else if (func_118(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam6)
					{
						if (!func_276(iVar0))
						{
							func_250(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_117(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xFF692AB7350A74D7(sParam3))
			{
				if (func_276(sParam3))
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
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_109(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_109(uParam0, iVar0, 1);
				}
			}
			if (!func_133(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_116(uParam0))
				{
					func_115(uParam0);
				}
			}
		}
	}
	else
	{
		func_109(uParam0, iVar0, 0);
	}
}

void func_115(var uParam0)
{
	if (func_138(unk_0x4A8C381C258A124D()))
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

int func_116(var uParam0)
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

int func_117(bool bParam0)
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

int func_118(char* sParam0)
{
	if (!func_119(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_276(sParam0)) || func_276("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_117(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_117(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_117(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_34(0))
	{
		return 0;
	}
	if (func_128())
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
	if ((func_127() || func_126(Global_4718592.f_185586)) || func_125())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_124(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_123(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_120(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0)
{
	if (iParam0 != func_122())
	{
		if (func_121(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_121(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_121(int iParam0, bool bParam1, bool bParam2)
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

int func_122()
{
	return -1;
}

int func_123(int iParam0, int iParam1)
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

int func_124(int iParam0, int iParam1)
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

var func_125()
{
	return Global_2684504.f_19;
}

bool func_126(int iParam0)
{
	return iParam0 == 51;
}

var func_127()
{
	return Global_2684504.f_18;
}

bool func_128()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

void func_129(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1582021 == 1)
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		func_109(uParam0, 0, 0);
	}
	if (func_132(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_130())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB98B1A5B59BC5065(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0A0A06C514052E80(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x190BA0A3BB48F7FD(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iParam1, -1, iVar3, iVar4);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_130()
{
	return func_131(unk_0x259BE71D8A81D4FA());
}

int func_131(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_132(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_133(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_137(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_136(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_136(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_137(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_116(uParam0))
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
						if (!func_137(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_136(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_136(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_137(bParam1, bParam2, bParam3))
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
					if (!func_137(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_136(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_136(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
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
				else if (!func_137(bParam1, bParam2, bParam3))
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
						if (func_135(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_134(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_134(bParam1, bParam2, bParam3))
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
					else if (func_135(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_116(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_119(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_139();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_134(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_119(bParam0, bParam1, bParam2))
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

int func_135(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_119(bParam0, bParam1, bParam2))
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

int func_136(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_119(bParam0, bParam1, bParam2))
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

int func_137(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_119(bParam0, bParam1, bParam2))
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

int func_138(int iParam0)
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

void func_139()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

void func_140(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_398(uParam0);
	}
	if (!unk_0xC450B06E5AAA0985(uParam0->f_8))
	{
		uParam0->f_8 = func_141(*uParam1, 0, 0);
	}
	if (!unk_0xFF692AB7350A74D7(sParam2))
	{
		unk_0x594D5D0D7071B0DE(uParam0->f_8, sParam2);
	}
}

int func_141(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_108(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_108(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_108(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

void func_142(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		unk_0xAAA71DD7E9059338(uParam0->f_3, 0);
		unk_0xE4DC7B3DD712372B(uParam0->f_3);
		unk_0x1CA08719184AFC6F(uParam0->f_3, 3, 0);
		unk_0xBE8796DB2B90A437(uParam0->f_3, 17, 1);
		unk_0x974022927CB47E68(uParam0->f_3);
		if ((func_146(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_145(uParam0->f_29)) && !bParam2)
		{
			func_143(uParam0);
		}
		else
		{
			unk_0x1CA08719184AFC6F(uParam0->f_3, 1024, 1);
			unk_0x1CA08719184AFC6F(uParam0->f_3, 131072, 1);
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x092B9247AF00F5CF(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x761F56E633460973(0, 1193033728, 0);
			}
			else
			{
				unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
			}
			unk_0x96F4A599D1C6F95A(0, 0);
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(uParam0->f_3, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
		unk_0x44FB298D6382876D(uParam0->f_3, 1);
	}
}

void func_143(var uParam0)
{
	var uVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (func_132(func_144(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x5C96CEA06531AB03(uParam0->f_3, 84,9058f);
				unk_0x44FB298D6382876D(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x5C96CEA06531AB03(uParam0->f_3, 68,3138f);
				unk_0x44FB298D6382876D(uParam0->f_3, 1);
			}
			else
			{
				unk_0x761F56E633460973(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x974022927CB47E68(uParam0->f_3);
			unk_0xD0557B139A542F12(&uVar0);
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x092B9247AF00F5CF(0, 0, 0);
			unk_0x96F4A599D1C6F95A(0, 0);
			unk_0xA966E518B752B92A(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x52210330D36ACD48(0, 1);
				unk_0xA966E518B752B92A(0, 813,9421f, 1172,681f, 329,7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x2280392018BC0DD3(0, 151,7794f, 0);
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xFC8E18D52935E5EB(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xFC8E18D52935E5EB(0, uParam0->f_29, 15f, 20000);
				unk_0x761F56E633460973(0, 1193033728, 0);
			}
			else
			{
				unk_0x10425721983AE158(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x81E5E9AE1379B068(uParam0->f_29, 15f, 1))
			{
				unk_0xFC8E18D52935E5EB(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x761F56E633460973(0, 1193033728, 0);
			}
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(uParam0->f_3, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
		unk_0x44FB298D6382876D(uParam0->f_3, 1);
	}
}

Vector3 func_144()
{
	struct<3> Var0;
	
	return Var0;
}

int func_145(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_146(int iParam0, struct<3> Param1, int iParam2)
{
	if (unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		return -1f;
	}
	return unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), Param1, iParam2);
}

char* func_147(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_148()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_149(var uParam0, bool bParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (func_159(uParam0) && func_154(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_153(uParam0, 2097152))
				{
					func_150(uParam0);
				}
			}
			else
			{
				func_150(uParam0);
			}
		}
		else if (!func_159(uParam0))
		{
			if (bParam1)
			{
				if (func_153(uParam0, 2097152))
				{
					if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_leave_vehicle")) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_leave_vehicle")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_150(var uParam0)
{
	struct<3> Var0;
	
	if (func_145(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_151(uParam0, Var0);
}

void func_151(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && unk_0xF4244288C3EF3306(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, -1,78774f, -1,62399f, -0,6206f) };
			Var1 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, 1,78498f, -1,24105f, -0,6422f) };
			if (func_152(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x23EB5FC236231892(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0xED977E2AE2CB16EE(Var0, Param1, 0) < unk_0xED977E2AE2CB16EE(Var1, Param1, 0) && unk_0x848DE0A81098ECCB(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x23EB5FC236231892(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0xED977E2AE2CB16EE(Var0, Param1, 0) >= unk_0xED977E2AE2CB16EE(Var1, Param1, 0) && unk_0x848DE0A81098ECCB(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x23EB5FC236231892(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x23EB5FC236231892(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_152(int iParam0, int iParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (unk_0xF4244288C3EF3306(iParam0, iParam1))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_153(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_252(uParam0->f_81, iParam1) && !func_41());
	}
	return func_41();
}

int func_154(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_34(1))
			{
				func_32(0);
			}
			if (func_26())
			{
				func_158();
				return 1;
			}
			else if (func_155(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, 256);
				}
				else
				{
					unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, 0);
				}
			}
			unk_0xE456FB21FF21AE99(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_155(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_157(bParam5, bParam6);
	func_156(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, uParam1, iParam2, iParam4);
	}
	Global_30 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_156(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_157(bool bParam0, bool bParam1)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
}

void func_158()
{
	if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
	{
		unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	}
}

int func_159(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if (unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_160(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = system::ceil((IntToFloat(uParam0->f_50) * 0,4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = system::ceil((IntToFloat(uParam0->f_50) * 0,15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_252(uParam0->f_55, 1))
	{
		func_248(&(uParam0->f_55), 1);
	}
}

void func_161(bool bParam0)
{
	func_164();
	unk_0x406CBCEA35499884();
	if (bParam0)
	{
		func_210(&Local_272, 105, 1, 0, 0);
	}
	else if (Local_272.f_56 < Local_272.f_58)
	{
		if (!unk_0x4FAFF4BCB7633475(Local_272.f_3))
		{
			func_162(Local_272.f_3, "GENERIC_INSULT_MED", Local_272.f_145, 4, 0);
		}
	}
	else if (Local_272.f_56 >= Local_272.f_59)
	{
		if (!unk_0x4FAFF4BCB7633475(Local_272.f_3))
		{
			func_162(Local_272.f_3, "TAXI_GOOD", Local_272.f_145, 4, 0);
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(Local_272.f_3))
	{
		func_162(Local_272.f_3, "GENERIC_THANKS", Local_272.f_145, 4, 0);
	}
	func_248(&(Local_272.f_81), 2097152);
	func_69(&Local_272, 16, 4f, 0);
}

void func_162(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, uParam2, func_163(iParam3), iParam4);
}

int func_163(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_164()
{
	Global_21152 = 0;
	func_165();
}

void func_165()
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

void func_166(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_167(fVar0);
	iLocal_55[4] = system::ceil(fVar0);
	iLocal_55[5] = system::ceil(fVar0);
	func_42(4, system::ceil(fVar0));
	func_42(5, system::ceil(fVar0));
	uParam0->f_50 = system::ceil((fVar0 * 100f));
}

float func_167(float fParam0)
{
	return (fParam0 * 0,0006213712f);
}

int func_168(var uParam0, int iParam1)
{
	if (func_53(uParam0) == 2)
	{
		if (unk_0x65FFA94B82A71741(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_170(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1) && func_169(1, 1, 1)) && unk_0xD2A0543EC400E1A5(uParam0->f_4))
		{
			return func_154(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x65FFA94B82A71741(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1) && func_169(1, 1, 1)) && unk_0xD2A0543EC400E1A5(uParam0->f_4))
	{
		return func_154(uParam0, 1, iParam1);
	}
	return 0;
}

int func_169(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94A7730DEC6E86C8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (bParam0)
		{
			if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x032CEF99C0D59B73(iVar0) < 0,95f || unk_0x032CEF99C0D59B73(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

float func_170(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

float func_171()
{
	float fVar0;
	
	fVar0 = unk_0xDF93B3CFAC96698F(Local_272.f_4);
	if (fVar0 >= 5f)
	{
		return (fVar0 * 0,5f);
	}
	return 6f;
}

void func_172(var uParam0, float fParam1, float fParam2)
{
	if (func_159(uParam0) && func_252(uParam0->f_44, 4))
	{
		if ((unk_0x1CE980E99A2A6FB6(uParam0->f_4) || unk_0xDF93B3CFAC96698F(uParam0->f_4) < 3f) && func_177(uParam0))
		{
			if (!func_176(uParam0, 2))
			{
				func_174(uParam0, 2);
			}
			else if (func_159(uParam0))
			{
				if (func_394(uParam0, 2) > fParam1 && !func_176(uParam0, 14))
				{
					if (func_28())
					{
						func_210(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_210(uParam0, 48, 1, 0, 0);
					}
					func_69(uParam0, 2, 0, 0);
					if (func_176(uParam0, 10))
					{
						func_69(uParam0, 10, 0, 0);
					}
				}
				if (!func_176(uParam0, 3))
				{
					func_69(uParam0, 3, 0, 0);
				}
				else if (func_394(uParam0, 3) >= fParam2)
				{
					func_173(uParam0, 3, 0);
					func_301(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_176(uParam0, 2))
			{
				func_173(uParam0, 2, 0);
			}
			if (func_176(uParam0, 3))
			{
				func_173(uParam0, 3, 0);
			}
		}
	}
}

void func_173(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_99(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_99(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_174(var uParam0, int iParam1)
{
	func_175(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_175(var uParam0)
{
	if (!func_7(uParam0))
	{
		func_70(uParam0);
	}
}

bool func_176(var uParam0, int iParam1)
{
	return func_7(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_177(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == unk_0x4A8C381C258A124D())
		{
			return 1;
		}
	}
	return 0;
}

void func_178(var uParam0)
{
	if (func_180(uParam0))
	{
		func_179(uParam0);
	}
}

void func_179(var uParam0)
{
	if (unk_0xC47E3FF56898A28B() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xE1799BB6E4C1CDFB();
			func_173(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_394(uParam0, 20) > 3f)
				{
					func_210(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_252(uParam0->f_81, 262144) || !func_252(uParam0->f_81, 1048576))
				{
					if (func_394(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_210(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_252(uParam0->f_82, 67108864))
				{
					if (func_394(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_210(uParam0, 85, 1, 0, 0);
						func_173(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_394(uParam0, 20) > 8f)
				{
					func_210(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_252(uParam0->f_81, 262144) || func_252(uParam0->f_82, 67108864))
			{
				if (!func_176(uParam0, 22))
				{
					func_174(uParam0, 22);
				}
			}
			if (func_176(uParam0, 22) && func_394(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_252(uParam0->f_81, 1048576))
					{
						func_210(uParam0, 84, 1, 0, 0);
						func_173(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_252(uParam0->f_82, 134217728))
					{
						func_210(uParam0, 85, 1, 0, 0);
						func_173(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_180(var uParam0)
{
	return uParam0->f_120;
}

void func_181()
{
	if (!func_252(Local_272.f_44, 1))
	{
		switch (Local_272.f_412)
		{
			case 0:
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) >= 1)
				{
					if (func_394(&Local_272, 9) > 1f)
					{
						func_185(&Local_272, unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()));
						func_69(&Local_272, 9, 0, 0);
						if (unk_0xC450B06E5AAA0985(Local_272.f_9))
						{
							unk_0xF42EBD7CD0682A8B(Local_272.f_9, 0);
							unk_0xBC64B805EE071A37(Local_272.f_9, 0);
						}
						Local_272.f_140 = 1;
						Local_272.f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_41() && func_394(&Local_272, 9) > 4f)
				{
					func_210(&Local_272, 52, 1, 0, 0);
					Local_272.f_412 = 2;
				}
				break;
			
			case 2:
				if (func_184("TAXI_OBJ_POL", 0, 0))
				{
					Local_272.f_412 = 3;
				}
				else if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
				{
					Local_272.f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x3EE1A6D743332852(unk_0xB6B621402486C3E4(), func_183(&Local_272)))
				{
					func_185(&Local_272, unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()));
					func_42(6, 0);
				}
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) < 1)
				{
					if (func_184("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x406CBCEA35499884();
					}
					if (unk_0xC450B06E5AAA0985(Local_272.f_9))
					{
						unk_0xF42EBD7CD0682A8B(Local_272.f_9, 255);
						unk_0xBC64B805EE071A37(Local_272.f_9, 1);
					}
					Local_272.f_140 = 0;
					Local_272.f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_41())
				{
					func_42(7, func_183(&Local_272));
					func_185(&Local_272, 0);
					Local_272.f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_41())
				{
					func_182(&Local_539, -1, 4);
					Local_272.f_412 = 0;
				}
				break;
			}
	}
}

void func_182(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_183(var uParam0)
{
	return uParam0->f_106;
}

bool func_184(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

void func_185(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_186(var uParam0, var uParam1)
{
	unk_0x2F0966A034F5ADC6(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_187(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if (!unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 1) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_3))
			{
				func_301(uParam0, "Passenger left car.", 9);
			}
			else if (func_199(uParam0))
			{
				if (func_184("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x4E8E15513E171E54("TAXI_OBJ_PICKUP");
				}
				if (unk_0x9390801B06EE998F())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x1DD05E817C89C737() % 1000) < 50)
				{
				}
				func_188(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_188(var uParam0, bool bParam1)
{
	func_198(uParam0, uParam0->f_3);
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_176(uParam0, 14))
			{
				if (func_41())
				{
					func_197(1);
				}
				func_196(uParam0, 11, 1);
				func_191(uParam0, 1);
				func_69(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_159(uParam0))
				{
					if ((unk_0x1DD05E817C89C737() % 1000) < 50)
					{
					}
					if (unk_0x7F420695E3F776FB(uParam0->f_2, 0))
					{
						if (func_394(uParam0, 15) > 5f)
						{
							func_69(uParam0, 15, 0f, 1);
						}
					}
					if (func_394(uParam0, 14) > 20f)
					{
						func_301(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_394(uParam0, 14) > 20f)
				{
					if (func_189(uParam0->f_4, 1) > 40f)
					{
						func_301(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_301(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_189(int iParam0, int iParam1)
{
	return func_190(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), iParam0, iParam1);
}

float func_190(int iParam0, int iParam1, int iParam2)
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

void func_191(var uParam0, bool bParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_8))
			{
				unk_0xF42EBD7CD0682A8B(uParam0->f_8, 0);
				unk_0xBC64B805EE071A37(uParam0->f_8, 0);
				func_195(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xC450B06E5AAA0985(uParam0->f_9))
			{
				unk_0xF42EBD7CD0682A8B(uParam0->f_9, 0);
				unk_0xBC64B805EE071A37(uParam0->f_9, 0);
				unk_0x406CBCEA35499884();
				if (func_159(uParam0))
				{
					func_210(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_195(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_192(uParam0, 0, 0);
		}
		else if (unk_0xC450B06E5AAA0985(uParam0->f_10))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_10));
			if (unk_0xC450B06E5AAA0985(uParam0->f_8))
			{
				unk_0xF42EBD7CD0682A8B(uParam0->f_8, 255);
				unk_0xBC64B805EE071A37(uParam0->f_8, 1);
			}
			else if (unk_0xC450B06E5AAA0985(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xF42EBD7CD0682A8B(uParam0->f_9, 0);
					unk_0xBC64B805EE071A37(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
					unk_0xBC64B805EE071A37(uParam0->f_9, 1);
				}
			}
			unk_0x406CBCEA35499884();
		}
	}
}

void func_192(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_398(uParam0);
	}
	if (!unk_0xC450B06E5AAA0985(uParam0->f_10))
	{
		uParam0->f_10 = func_141(uParam0->f_4, 1, 0);
		unk_0x594D5D0D7071B0DE(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xBC64B805EE071A37(uParam0->f_10, 1);
		func_193(uParam0);
		if (bParam2)
		{
			unk_0x406CBCEA35499884();
			func_210(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_193(var uParam0)
{
	func_69(uParam0, 14, 0, 0);
	func_194();
}

void func_194()
{
	int iVar0;
	
	iVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		unk_0xBD618A73193F9982(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_195(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_252(*uParam1, iParam2))
	{
		unk_0x406CBCEA35499884();
		func_210(uParam0, iParam3, 1, 0, 0);
		func_248(uParam1, iParam2);
	}
}

void func_196(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_197(int iParam0)
{
	Global_23297 = iParam0;
}

void func_198(var uParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam1))
		{
			if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
			{
				if ((unk_0x690AB6F5DB2A3A54(iParam1, joaat("weapon_stungun"), 0) || unk_0x690AB6F5DB2A3A54(iParam1, 0, 2)) || unk_0x690AB6F5DB2A3A54(iParam1, 0, 1))
				{
					func_301(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
			}
		}
	}
}

int func_199(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_176(uParam0, 14))
			{
				func_200(uParam0);
			}
			func_191(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_200(var uParam0)
{
	func_173(uParam0, 14, 0);
	func_173(uParam0, 15, 0);
	func_202();
	if (func_201())
	{
		func_197(0);
	}
}

int func_201()
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

void func_202()
{
	var uVar0;
	
	uVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
	{
		unk_0xBD618A73193F9982(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_203(var uParam0)
{
	func_206(uParam0, 1000);
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x19626F992DC71FB9(uParam0->f_3);
		unk_0x0E95B96CFEFE7B61(uParam0->f_3, unk_0x4A8C381C258A124D(), 0);
	}
	func_204();
	func_200(uParam0);
}

void func_204()
{
	Global_21152 = 0;
	func_205();
}

void func_205()
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

void func_206(var uParam0, int iParam1)
{
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xE37AF9002E782BA0(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
	}
}

void func_207()
{
	func_248(&(Local_272.f_55), 2);
	func_248(&(Local_272.f_55), 4);
	func_248(&(Local_272.f_55), 16);
	func_248(&(Local_272.f_55), 64);
	func_248(&(Local_272.f_55), 256);
	func_248(&(Local_272.f_55), 512);
	func_248(&(Local_272.f_55), 1024);
	func_248(&(Local_272.f_55), 2048);
	func_248(&(Local_272.f_55), 4096);
	func_248(&(Local_272.f_55), 1073741824);
	func_248(&(Local_272.f_100), 8);
	func_248(&(Local_272.f_100), 2048);
	func_248(&(Local_272.f_100), 256);
	func_248(&uLocal_583, 2);
	func_174(&Local_272, 7);
}

void func_208(var uParam0)
{
	unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	func_206(uParam0, 1000);
}

var func_209(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_108(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

void func_210(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_69(uParam0, 16, 4f, 0);
		if (func_211(uParam0))
		{
			func_39();
		}
	}
	func_253(uParam0, iParam2, bParam3);
}

int func_211(var uParam0)
{
	struct<3> Var0;
	struct<6> Var1;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_41())
	{
		Var1 = { func_213() };
		if (!unk_0xD6F9DEE4765092A9(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x1B79E937E91F40C3(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_212(&Var0);
			if (unk_0x1B79E937E91F40C3(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_212(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_213()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

Vector3 func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -59,3352f, 6524,735f, 30,4908f;
		
		case 1:
			return -132,9203f, 6376,91f, 31,18f;
		
		case 2:
			return -300,9561f, 6256,123f, 30,4934f;
		
		case 3:
			return -697,4664f, 5802,419f, 16,3311f;
		
		case 4:
			return -570,0295f, 5333,112f, 69,2148f;
		
		case 5:
			return -1578,767f, 5195,218f, 2,98937f;
		
		case 6:
			return -2192,899f, 4293,567f, 48,177f;
		
		case 7:
			return -1308,83f, 2507,66f, 20,92f;
		
		case 8:
			return -2558,793f, 2317,307f, 32,2157f;
		
		case 9:
			return -2241,69f, 385,825f, 173,6019f;
		
		case 10:
			return -3047,286f, 615,7632f, 6,3175f;
		
		case 11:
			return -3427,014f, 967,4479f, 7,315f;
		
		case 12:
			return -1123,343f, 2682,373f, 17,7356f;
		
		case 13:
			return -121,4933f, 1895,286f, 196,3327f;
		
		case 14:
			return 593,7659f, 2744,095f, 41,0225f;
		
		case 15:
			return 1219,92f, 2726,274f, 37,0041f;
		
		case 16:
			return -201,7949f, 3934,594f, 33,56364f;
		
		case 17:
			return 1584,545f, 6451,589f, 24,319f;
		
		case 18:
			return 1737,225f, 6415,12f, 34,0373f;
		
		case 19:
			return 1653,487f, 4850,271f, 41,0103f;
		
		case 20:
			return 2166,326f, 4670,86f, 32,24834f;
		
		case 21:
			return 2304,707f, 5761,063f, 142,263f;
		
		case 22:
			return 2242,456f, 5153,376f, 56,3431f;
		
		case 23:
			return 3351,297f, 5153,125f, 18,9279f;
		
		case 24:
			return 3855,812f, 4463,865f, 1,7019f;
		
		case 25:
			return 2392,035f, 4296,561f, 33,8303f;
		
		case 26:
			return -167,1902f, -342,5854f, 33,6663f;
		
		case 27:
			return -1870,639f, -339,964f, 56,0797f;
		
		case 28:
			return -1656,636f, -1038,197f, 12,1523f;
		
		case 29:
			return -1157,252f, -1424,156f, 3,7189f;
		
		case 30:
			return -280,5858f, -1915,339f, 28,9458f;
		
		case 31:
			return 354,0562f, -2120,609f, 14,8566f;
		
		case 32:
			return 954,7517f, -2010,277f, 29,2413f;
		
		case 33:
			return 2578,211f, -291,1939f, 92,0786f;
		
		case 34:
			return 1118,531f, -630,3503f, 55,7513f;
		
		case 35:
			return -99,4315f, 359,0916f, 111,8854f;
		
		case 36:
			return 178,1905f, 702,915f, 206,0482f;
		
		case 37:
			return -664,351f, 311,5536f, 82,0848f;
		
		case 38:
			return -331,9954f, 1389,257f, 339,8977f;
		
		case 39:
			return 1042,35f, 700,06f, 157,83f;
		
		case 40:
			return 2328,336f, 2542,247f, 45,5186f;
		
		case 41:
			return 727,8768f, 4188,966f, 39,70889f;
		
		case 42:
			return 1501,727f, 3775,82f, 32,5121f;
		
		case 43:
			return 1894,976f, 3712,496f, 31,7588f;
		
		case 44:
			return 1769,103f, 3339,951f, 40,2607f;
		
		case 45:
			return 437,4482f, 3560,369f, 32,2387f;
		
		case 46:
			return -503,3234f, 30,6442f, 43,7251f;
		
		case 47:
			return 164,496f, -975,3979f, 29,0917f;
		
		case 48:
			return -1721,108f, -214,6897f, 56,5442f;
		
		case 49:
			return -11,903f, -152,7058f, 55,619f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -36,6529f, 6521,831f, 30,4908f;
		
		case 1:
			return -120,6537f, 6398,326f, 30,4626f;
		
		case 2:
			return -284,8858f, 6258,993f, 30,297f;
		
		case 3:
			return -712,0081f, 5781,85f, 16,448f;
		
		case 4:
			return -551,7639f, 5404,583f, 64,5437f;
		
		case 5:
			return -1573,932f, 5149,518f, 19,02919f;
		
		case 6:
			return -2212,51f, 4275,911f, 46,7804f;
		
		case 7:
			return -1301,802f, 2507,944f, 20,4695f;
		
		case 8:
			return -2537,341f, 2321,831f, 32,0604f;
		
		case 9:
			return -2281,83f, 403,6109f, 173,4669f;
		
		case 10:
			return -3041,436f, 607,0844f, 6,4887f;
		
		case 11:
			return -3233,872f, 967,8956f, 12,0138f;
		
		case 12:
			return -1122,203f, 2673,213f, 17,1472f;
		
		case 13:
			return -128,3674f, 1931,456f, 195,5282f;
		
		case 14:
			return 592,2542f, 2737,414f, 41,0505f;
		
		case 15:
			return 1210,234f, 2699,729f, 37,0059f;
		
		case 16:
			return -224,543f, 3898,723f, 36,39012f;
		
		case 17:
			return 1581,557f, 6439,348f, 23,8881f;
		
		case 18:
			return 1727,557f, 6396,93f, 33,575f;
		
		case 19:
			return 1661,567f, 4851,506f, 40,8905f;
		
		case 20:
			return 2105,951f, 4716,417f, 40,04f;
		
		case 21:
			return 2247,163f, 5567,262f, 51,5209f;
		
		case 22:
			return 2241,322f, 5180,994f, 59,2585f;
		
		case 23:
			return 3260,339f, 5145,26f, 18,5874f;
		
		case 24:
			return 3774,741f, 4463,857f, 5,4614f;
		
		case 25:
			return 2441,507f, 4297,548f, 35,64625f;
		
		case 26:
			return -163,6905f, -349,8653f, 32,9431f;
		
		case 27:
			return -1854,983f, -360,2094f, 48,2535f;
		
		case 28:
			return -1601,634f, -945,3931f, 12,1875f;
		
		case 29:
			return -1162,085f, -1414,057f, 3,8002f;
		
		case 30:
			return -240,4874f, -1859,449f, 27,7915f;
		
		case 31:
			return 386,7202f, -2148,965f, 15,2725f;
		
		case 32:
			return 942,1559f, -2055,073f, 29,1246f;
		
		case 33:
			return 2596,906f, -296,528f, 91,8872f;
		
		case 34:
			return 1172,45f, -641,2902f, 61,4465f;
		
		case 35:
			return -129,4093f, 379,0035f, 111,7795f;
		
		case 36:
			return 117,2106f, 719,4644f, 208,1559f;
		
		case 37:
			return -638,5713f, 280,6203f, 80,2992f;
		
		case 38:
			return -388,1616f, 1226,36f, 324,6421f;
		
		case 39:
			return 1038,21f, 700,512f, 157,9407f;
		
		case 40:
			return 2388,166f, 2529,152f, 45,6804f;
		
		case 41:
			return 815,8218f, 4235,264f, 51,85716f;
		
		case 42:
			return 1538,15f, 3771,104f, 33,0502f;
		
		case 43:
			return 1892,2f, 3704,36f, 31,8767f;
		
		case 44:
			return 1780,28f, 3336,798f, 40,0848f;
		
		case 45:
			return 466,1649f, 3576,027f, 32,2322f;
		
		case 46:
			return -489,8451f, 21,3197f, 43,9248f;
		
		case 47:
			return 167,8984f, -1012,48f, 28,375f;
		
		case 48:
			return -1662,528f, -226,7487f, 53,9386f;
		
		case 49:
			return -11,2343f, -140,1264f, 55,7106f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_216(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	func_220(uParam0);
	switch (uParam0->f_10)
	{
		case 0:
			fVar3 = 1f;
			break;
		
		case 1:
			fVar3 = 1,5f;
			break;
		
		case 2:
			fVar3 = 2,25f;
			break;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		if (iVar2 < 6)
		{
			Var0 = { func_215(iVar1) };
			fVar4 = func_218(Var0, 1);
			if (((((fVar4 < fVar3 && fVar4 >= func_217(uParam0->f_10)) && iVar1 != Global_113048[0]) && iVar1 != Global_113048[1]) && iVar1 != Global_113048[2]) && iVar1 != Global_113048[3])
			{
				uParam0->f_2[iVar2] = iVar1;
				iVar2++;
			}
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
		iVar1 = (unk_0xC5935DFB3F39785A(0, 65535) % iVar2);
		uParam0->f_1 = uParam0->f_2[iVar1];
		uParam0->f_12 = func_218(func_215(uParam0->f_1), 1);
	}
	else
	{
		uParam0->f_1 = unk_0xC5935DFB3F39785A(0, 50);
		uParam0->f_12 = func_218(func_215(uParam0->f_1), 1);
	}
	Global_113048[3] = Global_113048[2];
	Global_113048[2] = Global_113048[1];
	Global_113048[1] = Global_113048[0];
	Global_113048[0] = uParam0->f_1;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0,25f;
		
		case 1:
			return 1f;
		
		case 2:
			return 1,5f;
		
		default:
	}
	return 1000f;
}

float func_218(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x1A9014F37459E83F())
		{
			iVar0 = unk_0x0715F5EED76FCDE9();
		}
		else
		{
			iVar0 = system::floor(system::vdist(func_219(unk_0x259BE71D8A81D4FA()), Param0));
		}
	}
	else
	{
		iVar0 = system::floor(system::vdist(func_219(unk_0x259BE71D8A81D4FA()), Param0));
	}
	return func_167(system::to_float(iVar0));
}

Vector3 func_219(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

void func_220(var uParam0)
{
	int iVar0;
	
	iVar0 = Global_113053 + 1;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	uParam0->f_10 = iVar0;
	Global_113053 = iVar0;
}

int func_221(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if ((unk_0x9D6DF8F3584AAC2B(uParam0->f_3) && (unk_0x1DD05E817C89C737() - iLocal_79) > 500) || unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_222(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x1DD05E817C89C737() % 1000) < 50)
			{
			}
			func_188(uParam0, 1);
			if (func_26())
			{
				unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
			}
			if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_go_straight_to_coord")) == 1 || unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_go_straight_to_coord")) == 0)
			{
				unk_0x19626F992DC71FB9(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_77 = 0;
				unk_0x0E95B96CFEFE7B61(uParam0->f_3, unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (unk_0x3EE1A6D743332852(unk_0xB6B621402486C3E4(), 0))
		{
			func_246(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xD0557B139A542F12(&uVar3);
				unk_0xB5396F1FB088FE38(&uVar3);
				unk_0xA966E518B752B92A(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x0E95B96CFEFE7B61(0, uParam0->f_4, 0);
				unk_0x93C0674FC00824D0(uVar3);
				unk_0x4BD42B0527065BB6(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_176(uParam0, 14))
			{
				func_200(uParam0);
				func_191(uParam0, 0);
			}
			if (func_176(uParam0, 9))
			{
				func_173(uParam0, 9, 0);
				unk_0x406CBCEA35499884();
				if (unk_0xC450B06E5AAA0985(uParam0->f_8))
				{
					unk_0xF42EBD7CD0682A8B(uParam0->f_8, 255);
					unk_0xBC64B805EE071A37(uParam0->f_8, 1);
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0xDF93B3CFAC96698F(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_245(uParam0, uParam0->f_3) > 300f)
				{
					func_301(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 || ((func_190(unk_0x4A8C381C258A124D(), uParam0->f_3, 1) < 20f && func_170(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_170(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_244(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_243(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_84)
							{
								uParam0->f_7 = func_242(uParam0->f_4, uParam0->f_3);
								iVar0 = func_241(uParam0, &iVar1);
								if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0x092B9247AF00F5CF(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x092B9247AF00F5CF(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x848DE0A81098ECCB(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
											{
												unk_0x092B9247AF00F5CF(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x974022927CB47E68(uParam0->f_3);
							unk_0xEBA229B2E0BB05E0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x94DBB0363601E643(unk_0xD1A6A821F5AC81DB(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_177(uParam0))
							{
								unk_0x974022927CB47E68(uParam0->f_3);
							}
							else if (((unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 0) && unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 7) && func_245(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xD0557B139A542F12(&(uParam0->f_243));
								unk_0xB5396F1FB088FE38(&(uParam0->f_243));
								unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x10425721983AE158(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x10425721983AE158(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x93C0674FC00824D0(uParam0->f_243);
								unk_0x4BD42B0527065BB6(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x458AA1A01F53901E(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1,75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_84)
						{
							if (func_190(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_240(uParam0, 1))
								{
									unk_0x19626F992DC71FB9(uParam0->f_3);
									func_301(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_239(uParam0->f_4))
								{
									unk_0x19626F992DC71FB9(uParam0->f_3);
									func_301(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_237(uParam0);
						if (func_245(uParam0, uParam0->f_3) < fVar4 || func_26())
						{
							if (unk_0xCECDBB848D53DEB2(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_224(uParam0))
								{
									func_223(uParam0);
									iLocal_79 = unk_0x1DD05E817C89C737();
									unk_0x0428AFDCAA63B06E(uParam0->f_3, 26, 1);
									func_173(uParam0, 5, 0);
									unk_0xB8A4D35AE2F0B024();
									unk_0x2F0966A034F5ADC6(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xD9757FAB956617BA(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x94DBB0363601E643(unk_0xD1A6A821F5AC81DB(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_223(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_8))
	{
		unk_0xBC64B805EE071A37(uParam0->f_8, 0);
		unk_0xFE54B8568B2ABD12(&(uParam0->f_8));
	}
}

int func_224(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_236("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		func_235();
	}
	if (bLocal_84)
	{
		iLocal_76 = 10;
	}
	if ((iLocal_76 < 7 && iLocal_76 > 0) && !bLocal_84)
	{
		if (func_233(iLocal_78))
		{
			iLocal_76 = 7;
		}
	}
	switch (iLocal_76)
	{
		case 0:
			if (func_154(uParam0, 0, 1084227584) && func_169(1, 1, 1))
			{
				if (func_240(uParam0, 1))
				{
					iLocal_78 = unk_0x1DD05E817C89C737();
					system::settimera(0);
					iLocal_76 = 1;
				}
				else
				{
					func_301(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (system::timera() > 500)
			{
				uParam0->f_7 = func_242(uParam0->f_4, uParam0->f_3);
				iVar3 = func_241(uParam0, &iVar4);
				if (!unk_0x1C2F771CDC87A3A5(iVar3, 0))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						unk_0x092B9247AF00F5CF(iVar3, 0, iVar5);
					}
					else
					{
						unk_0x092B9247AF00F5CF(iVar3, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x848DE0A81098ECCB(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x1C2F771CDC87A3A5(iVar3, 0))
						{
							unk_0x092B9247AF00F5CF(iVar3, 0, 4096);
						}
					}
				}
				iLocal_76 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var2 = { 1,5f, 0f, -0,6422f };
				Var0 = { -1,4309f, 3,958f, 3,5037f };
				Var1 = { 0,1017f, 1,3354f, -0,0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var2 = { 1,5f, -1f, -0,6422f };
				Var0 = { 1,4309f, 3,958f, 0,5037f };
				Var1 = { 0,1017f, 1,3354f, -0,0925f };
			}
			else
			{
				Var2 = { -1,5f, -1f, -0,6422f };
				Var0 = { -1,4823f, 4,2333f, 0,5939f };
				Var1 = { -0,4718f, 1,4282f, 0,3619f };
			}
			iVar6 = func_232(&(uParam0->f_409), unk_0x0D1381B6E0F3987D(uParam0->f_4, 0f, 2,2f, 0,275f), unk_0x0D1381B6E0F3987D(uParam0->f_4, Var0), 1);
			if (iVar6 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1,5f);
				if (uParam0->f_7 == 2)
				{
					Var1 = { 0,7632f, 1,4884f, 0,4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_231(0, 0, 1);
				unk_0x55F7AC4B2B875901(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 3f, 0);
				unk_0xBAAB54D57B40765E(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 25f, 0);
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				func_164();
				func_253(uParam0, 0, 0);
				Var7 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, Var2) };
				unk_0xB2BD5837A8D3CEDA(uParam0->f_3, Var7, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uParam0->f_3, func_229(uParam0));
				func_228(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x1761457F86AD0EE2(*uParam0, unk_0x0D1381B6E0F3987D(uParam0->f_4, Var0));
				unk_0xD6B4D02A102485DC(*uParam0, uParam0->f_4, Var1, 1);
				unk_0x4CBC5D1BC117616B(*uParam0, 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				unk_0xD8ED11B32DF72E0B(uParam0->f_3, 0, 0);
				unk_0xEBA229B2E0BB05E0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0, 0);
				iLocal_76 = 5;
			}
			break;
		
		case 5:
			func_236("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (system::timera() > 3500)
			{
				iLocal_76 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
			{
				if (!unk_0x7F420695E3F776FB(uParam0->f_3, 0))
				{
					unk_0x73CAFD2038E812B3(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x6515021478088FBC(uParam0->f_4, func_227(uParam0->f_7), 1);
				}
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
				unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);
				unk_0x64BB72494B9DF6DC(0);
				unk_0xD815D4BD1AE9E85A(0, 1065353216);
				unk_0x10B228D2FDB7AF16(800);
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				func_164();
				func_253(uParam0, 0, 0);
				iLocal_76 = 8;
			}
			break;
		
		case 8:
			if (unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
			{
				func_225(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
			unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);
			unk_0x64BB72494B9DF6DC(0);
			unk_0xD815D4BD1AE9E85A(0, 1065353216);
			func_225(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
			{
				if (unk_0x9D6DF8F3584AAC2B(uParam0->f_3) || unk_0x7F420695E3F776FB(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_enter_vehicle")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_enter_vehicle")) != 0)
				{
					unk_0xEBA229B2E0BB05E0(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0, 0);
				}
			}
			break;
	}
	return 0;
}

void func_225(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	}
	unk_0x9C22AADBAF330B36(1);
	func_15(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x37B894853929BF1A(1);
		unk_0x747786364137DC63(1);
	}
	func_226(23, 0);
}

void func_226(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33197, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_33197, iParam0);
	}
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_228(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3)
{
	if (!unk_0x78411E34CF90EA8C(*uParam0))
	{
		*uParam0 = unk_0x96A32328480B485C(26379945, Param1, Param2, iParam3, 0, 2);
	}
}

float func_229(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_144() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, 0,773f, -0,646f, -0,6422f) };
	}
	else
	{
		Var1 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, -0,773f, -0,646f, -0,6422f) };
	}
	fVar0 = func_230(unk_0xD1A6A821F5AC81DB(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_230(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, iParam0);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xD7ABE01242C5B8E3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 15f);
	}
	unk_0x9C22AADBAF330B36(iParam1);
	func_32(0);
	func_15(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_226(23, 1);
}

int func_232(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x120E577522852984(Param1, Param2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = unk_0x0E7DD1EBCA8D2DE3(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_233(int iParam0)
{
	if (func_234() && unk_0x1DD05E817C89C737() >= iParam0 + 1000)
	{
		unk_0x8F72AF14CE5AACE4(500);
		while (!unk_0x15CCE8886267624F())
		{
			system::wait(0);
		}
		func_32(0);
		func_204();
		return 1;
	}
	return 0;
}

int func_234()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x875A214D5EBCA509(0, 18) || unk_0x875A214D5EBCA509(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_235()
{
	if (func_28())
	{
		unk_0xD13237BC328B938E("appInternet");
	}
	if (func_27())
	{
		unk_0xD13237BC328B938E("appCamera");
	}
	if (func_34(1))
	{
		func_32(0);
	}
}

void func_236(char* sParam0, var uParam1, int iParam2)
{
	if (unk_0x1DD05E817C89C737() < (*uParam1 + iParam2))
	{
		return;
	}
	*uParam1 = unk_0x1DD05E817C89C737();
}

void func_237(var uParam0)
{
	var uVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
		{
			if (func_189(uParam0->f_3, 1) > 30f || func_238(uParam0))
			{
				if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_enter_vehicle")) == 1 || unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) == 1)
				{
					unk_0xD0557B139A542F12(&uVar0);
					unk_0xB5396F1FB088FE38(&uVar0);
					unk_0x0E95B96CFEFE7B61(0, uParam0->f_4, 0);
					unk_0x10425721983AE158(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0xA966E518B752B92A(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x93C0674FC00824D0(uVar0);
					unk_0x4BD42B0527065BB6(uParam0->f_3, uVar0);
					func_301(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_238(var uParam0)
{
	if ((unk_0xDF93B3CFAC96698F(uParam0->f_4) > 3f && func_394(uParam0, 5) > 15f) || unk_0xD1F1A906BA9226BE(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x548F6F43A7CB6F45(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x548F6F43A7CB6F45(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x548F6F43A7CB6F45(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x548F6F43A7CB6F45(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xAD830DCD82C63F31(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xAD830DCD82C63F31(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xAD830DCD82C63F31(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xAD830DCD82C63F31(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_240(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar1;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 0, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(iVar0[iVar1]))
			{
				if (unk_0x1C2F771CDC87A3A5(iVar0[iVar1], 0))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((unk_0x1DD05E817C89C737() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_241(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 1, 0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 2, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, 0, 0);
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_242(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x2EEC0612337D20CE(iParam0);
	Var0 = { unk_0xAD8278DAEC2CC059(iParam0, unk_0xD1A6A821F5AC81DB(iParam1, 1)) };
	if (unk_0x4B423FAA24E8ABF0(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x848DE0A81098ECCB(iParam1, iParam0, 2, 0, 0))
		{
			iVar1 = 2;
		}
		else if (unk_0x848DE0A81098ECCB(iParam1, iParam0, 1, 0, 0))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (unk_0x848DE0A81098ECCB(iParam1, iParam0, 1, 0, 0))
	{
		iVar1 = 1;
	}
	else if (unk_0x848DE0A81098ECCB(iParam1, iParam0, 2, 0, 0))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

int func_243(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (!unk_0xF6C26AE940C14749(uParam0->f_3) && func_189(uParam0->f_3, 1) < fParam2)
		{
			if (!func_176(uParam0, 5))
			{
				func_69(uParam0, 5, 0, 0);
			}
		}
		else if (func_176(uParam0, 5))
		{
			func_173(uParam0, 5, 0);
		}
		if (((func_394(uParam0, 5) > IntToFloat(iParam1) && unk_0xDF93B3CFAC96698F(uParam0->f_4) < fParam4) && !unk_0xF6C26AE940C14749(uParam0->f_3)) || func_189(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_244(var uParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = unk_0x365DC1E8054AF31A(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = unk_0x365DC1E8054AF31A(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		Var2 = { unk_0x75DF72FC74EED046(uParam0->f_4, iVar8) };
		Var2 = { unk_0xAD8278DAEC2CC059(uParam0->f_4, Var2) };
		Var2.f_1 = (Var2.f_1 + 1f);
	}
	else
	{
		Var2 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x0D1381B6E0F3987D(uParam0->f_4, Var2) };
	Var1 = { unk_0x0D1381B6E0F3987D(uParam0->f_3, 0f, 0,25f, 0,9f) };
	unk_0x9E36887F0AA9DF6D(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_77)
	{
		case 0:
			unk_0xAAA71DD7E9059338(uParam0->f_3, 1);
			iLocal_77 = 1;
			break;
		
		case 1:
			if ((func_190(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x1D5CD3EAAA7422B0((Var0.f_2 - Var1.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x120E577522852984(Var0, Var1, 511, 0, 7);
				}
				else
				{
					iVar7 = unk_0x0E7DD1EBCA8D2DE3(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_77 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(uParam0->f_3, joaat("script_task_perform_sequence")) != 0)
			{
				unk_0xD0557B139A542F12(&(uParam0->f_243));
				unk_0xB5396F1FB088FE38(&(uParam0->f_243));
				unk_0x10425721983AE158(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
				unk_0xC58DD79B4CA8487F(uParam0->f_243, 1);
				unk_0x93C0674FC00824D0(uParam0->f_243);
				unk_0x4BD42B0527065BB6(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x406CBCEA35499884();
			if (uParam0->f_411 != 9)
			{
				if (!func_252(uParam0->f_44, 128))
				{
					func_210(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_162(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4, 0);
			}
			unk_0x974022927CB47E68(uParam0->f_3);
			unk_0xE67051907958B5EB(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xD0557B139A542F12(&(uParam0->f_243));
			unk_0xB5396F1FB088FE38(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x10425721983AE158(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x10425721983AE158(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1,5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
			unk_0x93C0674FC00824D0(uParam0->f_243);
			unk_0x4BD42B0527065BB6(uParam0->f_3, uParam0->f_243);
			unk_0xD0557B139A542F12(&(uParam0->f_243));
			iLocal_77 = 3;
			break;
		
		case 3:
			iLocal_77 = 0;
			if (unk_0x13CCB1AD131C1082(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x458AA1A01F53901E(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0,8f);
			}
			return 1;
			break;
	}
	return 0;
}

float func_245(var uParam0, int iParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (func_177(uParam0))
		{
			return func_190(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_246(var uParam0)
{
	func_198(uParam0, uParam0->f_3);
	if (func_177(uParam0))
	{
		if (func_176(uParam0, 14))
		{
			func_200(uParam0);
			if (unk_0xC450B06E5AAA0985(uParam0->f_10))
			{
				unk_0xFE54B8568B2ABD12(&(uParam0->f_10));
			}
		}
	}
	if (!func_176(uParam0, 9))
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_8))
		{
			unk_0xF42EBD7CD0682A8B(uParam0->f_8, 0);
			unk_0xBC64B805EE071A37(uParam0->f_8, 0);
		}
		func_69(uParam0, 9, 0, 0);
		func_247("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_247(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_248(var uParam0, int iParam1)
{
	func_249(uParam0, iParam1);
}

void func_249(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_250(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_251(int iParam0)
{
	return Global_113969.f_19100.f_39[iParam0];
}

bool func_252(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_253(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_39();
		func_69(uParam0, 16, 4f, 0);
		unk_0x406CBCEA35499884();
	}
}

int func_254(int iParam0, bool bParam1, bool bParam2)
{
	return func_141(iParam0, !bParam1, bParam2);
}

void func_255(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_256(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_132(Param0, func_144(), 0))
	{
		Var0 = { func_31(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { func_31(Param0, 1f, 30f, 30f, 10f) };
		unk_0xA63572E348CC4CFB(Var0, Var1, iParam1, 1);
	}
}

void func_257(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x44589DAC2564FF02(Param1, 20f, 5f, 0);
}

void func_258(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_14(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

int func_259()
{
	if (func_199(&Local_272))
	{
		if (!unk_0x6252BC0DD8A320DB(iLocal_537))
		{
			return 0;
		}
		if (!unk_0xA0C7B98BCF1EEF9E(Local_594.f_0))
		{
			return 0;
		}
		if (!func_260(&uLocal_270, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_260(var uParam0, bool bParam1)
{
	if (!unk_0x6252BC0DD8A320DB(func_12()))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", uParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xE100DD4F82A51BDE("gestures@m@standing@casual"))
		{
			func_236("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", uParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xE100DD4F82A51BDE("oddjobs@taxi@"))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("oddjobs@towingcome_here"))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0xE100DD4F82A51BDE("misscommon@response"))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", uParam0, 1000);
		return 0;
	}
	if (!unk_0xDCB78A15E5F495DC(2))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", uParam0, 1000);
		return 0;
	}
	return 1;
}

void func_261()
{
	unk_0xEC9DAA34BBB4658C(iLocal_537);
	Local_594.f_0 = func_263();
	func_262(1);
}

void func_262(bool bParam0)
{
	unk_0xEC9DAA34BBB4658C(func_12());
	if (bParam0)
	{
		unk_0x80813AC549A1E8AE("gestures@m@standing@casual");
	}
	unk_0x80813AC549A1E8AE("oddjobs@taxi@");
	unk_0x80813AC549A1E8AE("oddjobs@towingcome_here");
	unk_0x80813AC549A1E8AE("misscommon@response");
	unk_0xF2CB0224D3BE0B42("TAXI", 2);
	if (!func_252(Global_113969.f_19100, 128))
	{
		func_248(&(Global_113969.f_19100), 128);
	}
}

var func_263()
{
	return unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
}

int func_264(var uParam0)
{
	if (unk_0x7F420695E3F776FB(uParam0->f_2, 0))
	{
		uParam0->f_4 = unk_0x6EF03BE64E058E2F(uParam0->f_2, 0);
		if (unk_0x0F00017BC718D851(uParam0->f_2) || unk_0x4B423FAA24E8ABF0(uParam0->f_4) == func_12())
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == uParam0->f_2)
				{
					unk_0x306C263AAEC4A988(uParam0->f_4);
					func_268(uParam0);
					func_42(2, 0);
					bLocal_84 = true;
					func_265(12);
					func_175(&uLocal_80);
					return 1;
				}
				else
				{
					func_301(uParam0, "No Taxi", 21);
					func_250("TAXI_DBG_NTAXI", -1);
				}
			}
			else
			{
				func_301(uParam0, "Taxi is not drivable", 0);
				func_250("TAXI_DBG_NTAXI", -1);
			}
		}
		else if (func_394(uParam0, 3) > 2f)
		{
			func_301(uParam0, "No Taxi", 21);
			func_250("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_265(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x1226C55CA7D2269A() || func_267())
	{
		uVar0 = iParam0;
		unk_0x012C74D626CB4559(8, &uVar0, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_266())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5F974E79EAE32BE7(8, &cVar1);
	}
}

var func_266()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_267()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_268(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		if (func_148())
		{
		}
	}
}

void func_269(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_270(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	
	iVar1 = func_274(uParam0, iParam2);
	iVar0 = iVar1;
	func_271(uParam0, iVar0, uParam1, &bVar2, &uVar7);
	if (!bVar2)
	{
		if ((((iVar1 != 0 && iVar1 != 3) && iVar1 != 8) && iVar1 != 13) && iVar1 != 18)
		{
			iVar0 = (iVar1 - 1);
			bVar3 = true;
		}
		if (bVar3)
		{
			func_271(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 2 && iVar1 != 7) && iVar1 != 12) && iVar1 != 17) && iVar1 != 21)
		{
			iVar0 = iVar1 + 1;
			bVar4 = true;
		}
		if (bVar4)
		{
			func_271(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 18 && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 13)
		{
			if ((iVar1 >= 14 && iVar1 <= 16) || (iVar1 >= 0 && iVar1 <= 2))
			{
				iVar0 = iVar1 + 4;
			}
			else
			{
				iVar0 = iVar1 + 5;
			}
			bVar5 = true;
		}
		if (bVar5)
		{
			func_271(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (!bVar2)
	{
		if ((((iVar1 != 3 && iVar1 != 0) && iVar1 != 1) && iVar1 != 2) && iVar1 != 7)
		{
			if ((iVar1 >= 18 && iVar1 <= 21) || (iVar1 >= 4 && iVar1 <= 6))
			{
				iVar0 = (iVar1 - 4);
			}
			else
			{
				iVar0 = (iVar1 - 5);
			}
			bVar6 = true;
		}
		if (bVar6)
		{
			func_271(uParam0, iVar0, uParam1, &bVar2, &uVar7);
		}
	}
	if (bVar2)
	{
	}
	Global_113043[3] = Global_113043[2];
	Global_113043[2] = Global_113043[1];
	Global_113043[1] = Global_113043[0];
	Global_113043[0] = iVar0;
	Global_113038[3] = Global_113038[2];
	Global_113038[2] = Global_113038[1];
	Global_113038[1] = Global_113038[0];
	Global_113038[0] = uVar7;
	if (!Global_113023)
	{
		Global_113023 = 1;
	}
	return 1;
}

void func_271(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < (uParam0[iParam1 /*11*/])->f_1)
	{
		Var1 = { func_273(uParam0, iParam1, iVar0) };
		if (func_218(Var1, 1) < func_218(*uParam2, 1))
		{
			if (Global_113023 && ((((iParam1 == Global_113043[0] && iVar0 == Global_113038[0]) || (iParam1 == Global_113043[1] && iVar0 == Global_113038[1])) || (iParam1 == Global_113043[2] && iVar0 == Global_113038[2])) || (iParam1 == Global_113043[3] && iVar0 == Global_113038[3])))
			{
			}
			else if (func_272(Var1, 1) > 40f)
			{
				*uParam2 = { Var1 };
				*uParam4 = iVar0;
				if (func_218(*uParam2, 1) <= 0,6f)
				{
					*uParam4 = iVar0;
					*bParam3 = 1;
				}
			}
		}
		iVar0++;
	}
}

float func_272(struct<3> Param0, int iParam1)
{
	return func_146(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), Param0, iParam1);
}

Vector3 func_273(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = { func_144() };
	if (iParam2 == -1)
	{
		iParam2 = (unk_0xC5935DFB3F39785A(0, 65535) % (uParam0[iParam1 /*11*/])->f_1);
	}
	switch (iParam1)
	{
		case 0:
			Var0 = { Local_248[iParam2 /*3*/] };
			break;
		
		case 1:
			Var0 = { Local_249[iParam2 /*3*/] };
			break;
		
		case 2:
			Var0 = { Local_250[iParam2 /*3*/] };
			break;
		
		case 3:
			Var0 = { Local_251[iParam2 /*3*/] };
			break;
		
		case 4:
			Var0 = { Local_252[iParam2 /*3*/] };
			break;
		
		case 5:
			Var0 = { Local_253[iParam2 /*3*/] };
			break;
		
		case 6:
			Var0 = { Local_254[iParam2 /*3*/] };
			break;
		
		case 7:
			Var0 = { Local_255[iParam2 /*3*/] };
			break;
		
		case 8:
			Var0 = { Local_256[iParam2 /*3*/] };
			break;
		
		case 9:
			Var0 = { Local_257[iParam2 /*3*/] };
			break;
		
		case 10:
			Var0 = { Local_258[iParam2 /*3*/] };
			break;
		
		case 11:
			Var0 = { Local_259[iParam2 /*3*/] };
			break;
		
		case 12:
			Var0 = { Local_260[iParam2 /*3*/] };
			break;
		
		case 13:
			Var0 = { Local_261[iParam2 /*3*/] };
			break;
		
		case 14:
			Var0 = { Local_262[iParam2 /*3*/] };
			break;
		
		case 15:
			Var0 = { Local_263[iParam2 /*3*/] };
			break;
		
		case 16:
			Var0 = { Local_264[iParam2 /*3*/] };
			break;
		
		case 17:
			Var0 = { Local_265[iParam2 /*3*/] };
			break;
		
		case 18:
			Var0 = { Local_266[iParam2 /*3*/] };
			break;
		
		case 19:
			Var0 = { Local_267[iParam2 /*3*/] };
			break;
		
		case 20:
			Var0 = { Local_268[iParam2 /*3*/] };
			break;
		
		case 21:
			Var0 = { Local_269[iParam2 /*3*/] };
			break;
	}
	return Var0;
}

int func_274(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_275(uParam0);
	if (iParam1 > 1)
	{
		iVar1 = (unk_0xC5935DFB3F39785A(0, 65535) % 3);
		if (iVar1 == 0)
		{
			iVar2 = system::floor((uParam0[iVar0 /*11*/])->f_8);
		}
		else if (iVar1 == 1)
		{
			iVar2 = system::floor((uParam0[iVar0 /*11*/])->f_8.f_1);
		}
		else
		{
			iVar2 = system::floor((uParam0[iVar0 /*11*/])->f_8.f_2);
		}
		return iVar2;
	}
	return iVar0;
}

int func_275(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (unk_0xFCEB38AB3EDCF9BE(unk_0x4A8C381C258A124D(), (uParam0[iVar0 /*11*/])->f_2, (uParam0[iVar0 /*11*/])->f_5, 0, 0, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 22;
}

bool func_276(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_277(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
		{
			if (bParam2)
			{
				if (func_394(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_210(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_210(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_69(uParam0, 10, 0f, 1);
				}
			}
			else if (func_394(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_210(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_210(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_69(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_394(uParam0, 10) > 30f)
		{
			if (!func_41())
			{
				if (uParam0->f_112)
				{
					func_210(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_210(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_69(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_252(uParam0->f_100, 64))
	{
		if (!func_7(&(Local_180[5 /*10*/].f_6)))
		{
			func_175(&(Local_180[5 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[5 /*10*/].f_6)) > 6f)
		{
			if (func_300(uParam0))
			{
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[5 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0, 1);
				func_297(5, uParam0);
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 1))
	{
		if (!func_7(&(Local_180[0 /*10*/].f_6)))
		{
			func_175(&(Local_180[0 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[0 /*10*/].f_6)) > 5f)
		{
			if (func_295(uParam0))
			{
				func_299(uParam0, 1);
				func_297(0, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[0 /*10*/].f_9, 1, 0, 0);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 2))
	{
		if (!func_7(&(Local_180[1 /*10*/].f_6)))
		{
			func_175(&(Local_180[1 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[1 /*10*/].f_6)) > 5f)
		{
			if (func_294(uParam0))
			{
				func_299(uParam0, 1);
				func_297(1, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[1 /*10*/].f_9, 1, 0, 0);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 2048))
	{
		if (!func_7(&(Local_180[8 /*10*/].f_6)))
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x8D91ADE44AC79BC9(uParam0->f_4);
				func_175(&(Local_180[8 /*10*/].f_6));
			}
		}
		else if (func_100(&(Local_180[8 /*10*/].f_6)) > 7f || Local_180[8 /*10*/].f_1 == 0)
		{
			if (func_293(uParam0))
			{
				func_299(uParam0, 1);
				func_297(8, uParam0);
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 128))
	{
		if (!func_7(&(Local_180[6 /*10*/].f_6)))
		{
			func_175(&(Local_180[6 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[6 /*10*/].f_6)) > 5f)
		{
			if (func_292(uParam0))
			{
				func_299(uParam0, 1);
				func_297(6, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[6 /*10*/].f_9, 1, 0, 0);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 32))
	{
		if (!func_7(&(Local_180[4 /*10*/].f_6)))
		{
			func_175(&(Local_180[4 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[4 /*10*/].f_6)) > 4f)
		{
			if (func_291(uParam0))
			{
				func_299(uParam0, 1);
				func_297(4, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[4 /*10*/].f_9, 1, 0, 0);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 256))
	{
		if (!func_7(&(Local_180[7 /*10*/].f_6)))
		{
			func_175(&(Local_180[7 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[7 /*10*/].f_6)) > 5f || Local_180[7 /*10*/].f_1 == 0)
		{
			if (func_290(uParam0))
			{
				func_297(7, uParam0);
				func_299(uParam0, 1);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[7 /*10*/].f_9, 1, 0, 1);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 8))
	{
		if (!func_7(&(Local_180[9 /*10*/].f_6)))
		{
			func_175(&(Local_180[9 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
		}
		else if (func_100(&(Local_180[9 /*10*/].f_6)) > 7f || Local_180[9 /*10*/].f_1 == 0)
		{
			if (func_289(uParam0))
			{
				func_299(uParam0, 1);
				func_297(9, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[9 /*10*/].f_9, 1, 0, 1);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 16384))
	{
		if (!func_7(&(Local_180[13 /*10*/].f_6)))
		{
			func_175(&(Local_180[13 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[13 /*10*/].f_6)) > 10f)
		{
			if (func_283(uParam0))
			{
				func_299(uParam0, 1);
				func_297(13, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[13 /*10*/].f_9, 1, 0, 0);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 32768))
	{
		if (!func_7(&(Local_180[14 /*10*/].f_6)))
		{
			func_175(&(Local_180[14 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[14 /*10*/].f_6)) > 7f)
		{
			if (func_282(uParam0))
			{
				func_299(uParam0, 1);
				func_297(14, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[14 /*10*/].f_9, 1, 0, 0);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 4096))
	{
		if (!func_7(&(Local_180[11 /*10*/].f_6)))
		{
			func_175(&(Local_180[11 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[11 /*10*/].f_6)) > 8f)
		{
			if (func_281(uParam0))
			{
				func_299(uParam0, 1);
				func_297(11, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[11 /*10*/].f_9, 1, 0, 0);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 8192))
	{
		if (!func_7(&(Local_180[12 /*10*/].f_6)))
		{
			func_175(&(Local_180[12 /*10*/].f_6));
		}
		else if (func_100(&(Local_180[12 /*10*/].f_6)) > 5f)
		{
			if (func_280(uParam0))
			{
				func_299(uParam0, 1);
				func_297(12, uParam0);
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[12 /*10*/].f_9, 1, 0, 0);
				}
				func_296(uParam0);
			}
		}
	}
	if (func_252(uParam0->f_100, 4))
	{
		if (!func_7(&(Local_180[2 /*10*/].f_6)))
		{
			func_279(&(Local_180[2 /*10*/].f_6), 0f);
		}
		else if (func_100(&(Local_180[2 /*10*/].f_6)) > 5f)
		{
			if (func_278(uParam0))
			{
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, Local_180[2 /*10*/].f_9, 1, 0, 0);
				}
				func_299(uParam0, 1);
				func_297(2, uParam0);
				func_296(uParam0);
			}
		}
	}
}

int func_278(var uParam0)
{
	float fVar0;
	
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_2))
	{
		if ((!unk_0xD9CCFCDF70474932(uParam0->f_2) && !func_7(&(Local_180[0 /*10*/].f_3))) && !func_7(&(Local_180[1 /*10*/].f_3)))
		{
			if (!func_7(&(Local_180[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xDF93B3CFAC96698F(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_175(&(Local_180[2 /*10*/].f_3));
				}
			}
			else if (func_100(&(Local_180[2 /*10*/].f_3)) > 0,9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xDF93B3CFAC96698F(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_99(&(Local_180[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_99(&(Local_180[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_279(var uParam0, float fParam1)
{
	if (!func_7(uParam0))
	{
		func_71(uParam0, fParam1);
	}
}

int func_280(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_7(&(Local_180[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_180[12 /*10*/].f_3)))
			{
				func_175(&(Local_180[12 /*10*/].f_3));
			}
			else if (func_100(&(Local_180[12 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_180[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_180[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_281(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_7(&(Local_180[0 /*10*/].f_3))) && !func_7(&(Local_180[1 /*10*/].f_3))) && !func_7(&(Local_180[5 /*10*/].f_3))) && !func_7(&(Local_180[9 /*10*/].f_3))) && !func_7(&(Local_180[7 /*10*/].f_3))) && !func_7(&(Local_180[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (unk_0x1D5CD3EAAA7422B0(Var0.f_0) > 2,5f && !func_7(&(Local_180[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_180[11 /*10*/].f_3)))
			{
				func_175(&(Local_180[11 /*10*/].f_3));
				uLocal_182 = Var0.f_0;
			}
			else if (func_100(&(Local_180[11 /*10*/].f_3)) < 1,5f && (unk_0x1D5CD3EAAA7422B0(uLocal_182) - unk_0x1D5CD3EAAA7422B0(Var0.f_0)) < 0f)
			{
				func_99(&(Local_180[11 /*10*/].f_3));
				return 1;
			}
			else if (func_100(&(Local_180[11 /*10*/].f_3)) >= 1,5f)
			{
				func_99(&(Local_180[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_282(var uParam0)
{
	if (((((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_7(&(Local_180[0 /*10*/].f_3))) && !func_7(&(Local_180[8 /*10*/].f_3))) && !func_7(&(Local_180[5 /*10*/].f_3))) && !func_7(&(Local_180[9 /*10*/].f_3))) && !func_7(&(Local_180[7 /*10*/].f_3)))
	{
		if (!func_7(&(Local_180[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xFC8BFE4B41177C22(uParam0->f_5))
			{
				if ((unk_0xDF93B3CFAC96698F(uParam0->f_4) > 15f && func_190(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x1C2F771CDC87A3A5(uParam0->f_5, 0) && !unk_0xC39AE5D390581AD5(uParam0->f_5, -1, 0)))
				{
					func_175(&(Local_180[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_100(&(Local_180[14 /*10*/].f_3)) < 1,5f && func_190(uParam0->f_5, uParam0->f_4, 1) > 4,5f) && !unk_0xFFF4FB66DA549D0F(uParam0->f_5))
		{
			func_99(&(Local_180[14 /*10*/].f_3));
			return 1;
		}
		else if (func_100(&(Local_180[14 /*10*/].f_3)) >= 1,5f)
		{
			func_99(&(Local_180[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xFFF4FB66DA549D0F(uParam0->f_5))
		{
			func_99(&(Local_180[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_283(var uParam0)
{
	if (((unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0) && !func_7(&(Local_180[9 /*10*/].f_3))) && !func_7(&(Local_180[7 /*10*/].f_3))) && !func_7(&(Local_180[4 /*10*/].f_3)))
	{
		if (!func_284(uParam0->f_4) && unk_0xDF93B3CFAC96698F(uParam0->f_4) > 15f)
		{
			if (!func_7(&(Local_180[13 /*10*/].f_3)))
			{
				func_175(&(Local_180[13 /*10*/].f_3));
			}
			else if (func_100(&(Local_180[13 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_180[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_180[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_284(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	unk_0x8B777C12D64DF209(unk_0xD1A6A821F5AC81DB(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x8B777C12D64DF209(unk_0xD1A6A821F5AC81DB(iParam0, 1), 2, &Var1, 1, 1077936128, 0);
	unk_0x2DFF53C2897C7990(Var0, -1, &Var2);
	fVar9 = system::vmag(Var2 - Var0);
	Var3 = { func_288((Var1.f_0 - Var0.f_0), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { func_287(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return func_285(unk_0xD1A6A821F5AC81DB(iParam0, 1), Var5, Var6, Var7);
}

int func_285(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Param2.f_2 = 0f;
	Param3.f_2 = 0f;
	Var0 = { func_288(Param2 - Param1) };
	Var1 = { func_288(Param3 - Param1) };
	fVar2 = func_286(Param0, Var0);
	fVar3 = func_286(Param1, Var0);
	fVar4 = func_286(Param2, Var0);
	fVar5 = func_286(Param0, Var1);
	fVar6 = func_286(Param1, Var1);
	fVar7 = func_286(Param3, Var1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_286(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_287(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_288(struct<3> Param0)
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

int func_289(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == unk_0x4A8C381C258A124D())
		{
			if (unk_0x1F8DDF94E5D56F59(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_290(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(uParam0->f_4, -1, 0) == unk_0x4A8C381C258A124D())
		{
			if (unk_0xD1F1A906BA9226BE(uParam0->f_4))
			{
				if (!iLocal_181)
				{
					if (unk_0x5E674CD80769B53A(uParam0->f_4) <= -145f || unk_0x5E674CD80769B53A(uParam0->f_4) >= 145f)
					{
						iLocal_181 = 1;
					}
				}
			}
			else if (iLocal_181)
			{
				if (unk_0x5E674CD80769B53A(uParam0->f_4) <= 35f && unk_0x5E674CD80769B53A(uParam0->f_4) >= -35f)
				{
					iLocal_181 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_291(var uParam0)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0 = unk_0xAEAB3904F55BB907(unk_0x259BE71D8A81D4FA());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_180[4 /*10*/].f_3)))
			{
				func_175(&(Local_180[4 /*10*/].f_3));
			}
			else if (func_100(&(Local_180[4 /*10*/].f_3)) > 2f)
			{
				func_99(&(Local_180[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_180[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_292(var uParam0)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		iVar0 = unk_0x0A2AACDCE82B8394(unk_0x259BE71D8A81D4FA());
		if (iVar0 == 0)
		{
			if (!func_7(&(Local_180[6 /*10*/].f_3)))
			{
				func_175(&(Local_180[6 /*10*/].f_3));
			}
			else if (func_100(&(Local_180[6 /*10*/].f_3)) > 3,5f)
			{
				func_99(&(Local_180[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_180[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_293(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0x14E25ED5E75102C8(uParam0->f_4))
		{
			iVar0 = unk_0x8D91ADE44AC79BC9(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xE4DC7B3DD712372B(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_210(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_210(uParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_180[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_294(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(uParam0->f_4, 1) };
		if (unk_0x1D5CD3EAAA7422B0(Var0.f_0) > 3f && !func_7(&(Local_180[0 /*10*/].f_3)))
		{
			if (!func_7(&(Local_180[1 /*10*/].f_3)))
			{
				func_175(&(Local_180[1 /*10*/].f_3));
			}
			else if (func_100(&(Local_180[1 /*10*/].f_3)) > 1,2f)
			{
				func_99(&(Local_180[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_180[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_295(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (!unk_0xD2A0543EC400E1A5(uParam0->f_4) && unk_0x3F18810075C77D41(uParam0->f_4))
		{
			if (!func_7(&(Local_180[0 /*10*/].f_3)))
			{
				func_175(&(Local_180[0 /*10*/].f_3));
			}
			else if (func_100(&(Local_180[0 /*10*/].f_3)) > 0,7f)
			{
				func_99(&(Local_180[0 /*10*/].f_3));
				func_70(&(Local_180[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_180[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_296(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_7(&(Local_180[iVar0 /*10*/].f_6)))
		{
			func_70(&(Local_180[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_69(uParam0, 10, 0f, 1);
	unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
}

void func_297(int iParam0, var uParam1)
{
	Local_180[iParam0 /*10*/].f_1++;
	func_298(uParam1, iParam0);
	func_99(&(Local_180[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_298(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_180[iParam1 /*10*/]);
}

void func_299(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_300(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
	{
		if (unk_0xDF93B3CFAC96698F(uParam0->f_4) > 25f)
		{
			if (!func_7(&(Local_180[5 /*10*/].f_3)))
			{
				func_175(&(Local_180[5 /*10*/].f_3));
			}
			else if (func_100(&(Local_180[5 /*10*/].f_3)) > 3,5f)
			{
				func_99(&(Local_180[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_180[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_301(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_204();
	func_68(2);
	Var0 = { func_318() };
	if ((!unk_0xD6F9DEE4765092A9(&Var0) && func_41()) && !unk_0x1B79E937E91F40C3(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x406CBCEA35499884();
		unk_0x428C32CC68809A35(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			if (!func_159(uParam0))
			{
				if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x08D8528BA8E43641(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x13CCB1AD131C1082(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x08D8528BA8E43641(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x13CCB1AD131C1082(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x08D8528BA8E43641(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_69(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_316(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_162(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4, 0);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_159(uParam0))
			{
				if (unk_0x1CE980E99A2A6FB6(uParam0->f_4))
				{
					func_142(uParam0, 4096, 0);
				}
				else
				{
					func_142(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_316(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_162(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4, 0);
			}
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_316(uParam0, &Var0);
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_316(uParam0, &Var0);
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_42(8, 0);
			iLocal_55[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_316(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_162(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4, 0);
			}
			func_142(uParam0, 0, 0);
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_42(8, 0);
			iLocal_55[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_316(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_162(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4, 0);
			}
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_42(8, 0);
			iLocal_55[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_316(uParam0, &Var0);
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_162(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4, 0);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_315(&Var0);
			func_302(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_316(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_316(uParam0, &Var0);
				}
			}
			else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
			{
				func_162(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4, 0);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_42(3, 0);
		}
		func_69(uParam0, 3, 0f, 1);
	}
}

int func_302(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_303(sParam2, iParam3, 0);
}

int func_303(char* sParam0, int iParam1, bool bParam2)
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
					func_205();
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
		if (func_313(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_312();
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
				func_311();
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
				if (func_310())
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
			if (func_24())
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
			func_309();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_308();
		func_304();
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
		func_205();
	}
	return 0;
}

void func_304()
{
	if (!func_305())
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

int func_305()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_122())
	{
		return 0;
	}
	if (func_306(unk_0x259BE71D8A81D4FA()))
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

bool func_306(int iParam0)
{
	return func_307(iParam0, 20);
}

var func_307(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

void func_308()
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

void func_309()
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

int func_310()
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

void func_311()
{
	if (func_67(14))
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
		Global_20930 = func_92();
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

void func_312()
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

bool func_313(int iParam0, int iParam1)
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

void func_314(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_315(char* sParam0)
{
	switch (func_95(unk_0x4A8C381C258A124D()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_316(var uParam0, char* sParam1)
{
	if (func_317(uParam0))
	{
		func_302(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_317(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (func_190(unk_0x4A8C381C258A124D(), uParam0->f_3, 1) < 40f && !unk_0xF6C26AE940C14749(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_318()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		iVar1 = unk_0xE7365CC791D1E4EB();
		iVar1 = (iVar1 + Global_23296);
		if (iVar1 > -1)
		{
			return Global_21154[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_319(var uParam0)
{
	return uParam0->f_118;
}

void func_320()
{
	func_354(&Local_272);
	if (func_353(&Local_272, &Local_539))
	{
		switch (Local_539.f_27)
		{
			case 0:
				if (Local_272.f_410 == 9)
				{
					if (!func_352(&Local_272))
					{
						if (func_351("TX_OBJ_PRO_DO") || unk_0xC450B06E5AAA0985(Local_272.f_9))
						{
							Local_539.f_27++;
						}
						else if (func_350(&Local_272) != 10)
						{
							func_210(&Local_272, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_350(&Local_272) > 10 && func_350(&Local_272) != 15) && !func_352(&Local_272))
				{
					if (!unk_0x4FAFF4BCB7633475(Local_272.f_3))
					{
						func_162(Local_272.f_3, "PED_RANT", Local_272.f_145, 4, 0);
					}
					Local_539.f_27++;
					if (bLocal_538)
					{
					}
				}
				break;
			}
	}
	func_321(&Local_272, &uLocal_542, &Local_539, bLocal_538);
}

int func_321(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_331(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_176(uParam0, 2))
	{
		if (func_330(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x1DD05E817C89C737() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_329(uParam0))
				{
					uParam2->f_7 = { func_328(uParam1) };
					func_302(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_41())
				{
					uParam2->f_13 = { func_213() };
					if (unk_0x1B79E937E91F40C3(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_249(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_325(uParam1);
					func_69(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_324(uParam0))
				{
					if (func_41())
					{
						func_69(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_323() };
						if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_41())
				{
					uParam2->f_19 = { func_318() };
				}
				else
				{
					func_249(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_325(uParam1);
					func_69(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_176(uParam0, 14) && !func_41()) && !func_324(uParam0)) && func_394(uParam0, 18) > 1f)
				{
					func_69(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_41())
				{
					if (func_394(uParam0, 18) > 1f)
					{
						if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1)))
						{
							func_322(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_41())
				{
					func_249(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_325(uParam1);
					func_69(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_322(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_303(sParam2, iParam4, 0);
}

struct<6> func_323()
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

bool func_324(var uParam0)
{
	return uParam0->f_110;
}

void func_325(var uParam0)
{
	int iVar0;
	
	iVar0 = func_327(uParam0);
	if (iVar0 > -1)
	{
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_13(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_248(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_326(), 24);
	}
}

var func_326()
{
	var uVar0;
	
	return uVar0;
}

int func_327(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_252((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_328(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_252((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_248(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_329(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_184("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_184("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_184("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_184("TX_OBJ_GYB_DO", 0, 0) || func_184("TAXI_OBJ_GYB", 0, 0)) || func_184("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_184("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_184("TX_OBJ_CYI_DO", 0, 0) || func_184("TAXI_OBJ_CYI_01", 0, 0)) || func_184("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_184("TX_OBJ_GYN_DO", 0, 0) || func_184("TAXI_OBJ_GYN", 0, 0)) || func_184("TAXI_OBJ_GYN_TG", 0, 0)) || func_184("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_184("TAXI_OBJ_CC1", 0, 0) || func_184("TAXI_OBJ_CC2", 0, 0)) || func_184("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_184("TAXI_OBJ_FTC1", 0, 0) || func_184("TAXI_OBJ_FTC2", 0, 0)) || func_184("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_184("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_184("TAXI_OBJ_GETRUN", 0, 0) || func_184("TAXI_OBJ_DRIVE", 0, 0)) || func_184("TAXI_OBJ_RETURN", 0, 0)) || func_184("TAXI_OBJ_POL", 0, 0)) || func_184("TAXI_OBJ_RUNOUT", 0, 0)) || func_184("TAXI_OBJ_POL", 0, 0));
}

int func_330(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_252((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_331(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_329(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_176(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_350(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				func_349(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_347(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_41())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_346(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_343(uParam0, Var0, func_345(uParam0, 2));
				}
				if (func_252(uParam0->f_98, 4))
				{
					func_69(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				func_195(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_394(uParam0, 16) > 1f)
				{
					func_197(1);
					if (uParam0->f_411 == 9)
					{
						func_247("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_247("TAXI_VIP_RETURN", 7500, 1);
					}
					func_69(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_346(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_162(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4, 0);
				}
				break;
		}
	}
	else if ((func_394(uParam0, 16) > func_108(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_41()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_350(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_346(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				func_349(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_347(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_302(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_210(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_69(uParam0, 16, 0, 0);
				func_210(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!func_252(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_349(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_346(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_69(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_247("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_247("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC450B06E5AAA0985(uParam0->f_9))
					{
						uParam0->f_9 = func_209(uParam0->f_17, 1);
					}
					else if (unk_0xF03FBAFA0284124E(uParam0->f_9) == 0)
					{
						unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
						unk_0xDABC73EF230B6665(uParam0->f_9, uParam0->f_17);
						unk_0xBC64B805EE071A37(uParam0->f_9, 1);
					}
				}
				func_210(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_212(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_346(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_162(uParam0->f_3, "TAXI_START", uParam0->f_145, 4, 0);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xC450B06E5AAA0985(uParam0->f_9))
					{
						uParam0->f_9 = func_209(uParam0->f_17, 1);
					}
					else if (unk_0xF03FBAFA0284124E(uParam0->f_9) == 0)
					{
						unk_0xF42EBD7CD0682A8B(uParam0->f_9, 255);
						unk_0xDABC73EF230B6665(uParam0->f_9, uParam0->f_17);
						unk_0xBC64B805EE071A37(uParam0->f_9, 1);
					}
				}
				func_210(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_342(uParam0, 33554432, Var0, "", 1, 8);
				func_69(uParam0, 16, 0, 0);
				func_210(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_41())
				{
					func_341(uParam0, 0);
					func_248(&(uParam0->f_44), 4);
					func_69(uParam0, 16, 0, 0);
					func_210(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_212(&Var0);
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_394(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_212(&Var0);
					}
					func_339(Var0, uParam1);
					func_248(&(uParam0->f_81), 67108864);
					func_69(uParam0, 16, 0, 0);
					func_69(uParam0, 11, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_394(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_212(&Var0);
						}
					}
					func_339(Var0, uParam1);
					func_69(uParam0, 11, 0, 0);
					func_69(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_212(&Var0);
				}
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_212(&Var0);
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_212(&Var0);
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_212(&Var0);
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				func_248(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_212(&Var0);
				func_346(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_337(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_337(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				func_339(Var0, uParam1);
				func_347(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 6, 0f, 1);
				func_253(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_337(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_337(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				func_339(Var0, uParam1);
				func_347(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 6, 0f, 1);
				func_253(uParam0, 0, 0);
				break;
			
			case 12:
				func_247("TAXI_OBJ_GYB", 3500, 1);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_247("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_247("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_247("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_346(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_252(uParam0->f_98, 268435456))
				{
					func_247("TAXI_OBJ_CYI_01", 7500, 1);
					func_248(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_212(&Var0);
				func_339(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_212(&Var0);
				func_339(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_212(&Var0);
				func_339(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 33:
				func_247("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_252(uParam0->f_82, 8192))
				{
					if (func_394(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_212(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_339(Var0, uParam1);
						}
						else
						{
							func_346(uParam0, &Var0, 0, 0, 8);
						}
						func_248(&(uParam0->f_82), 8192);
						func_69(uParam0, 16, 0, 0);
						func_69(uParam0, 11, 0, 0);
						func_253(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_252(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_212(&Var0);
					func_346(uParam0, &Var0, 0, 0, 8);
					func_248(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_252(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_212(&Var0);
					func_346(uParam0, &Var0, 0, 0, 8);
					func_248(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_212(&Var0);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_253(uParam0, 0, 0);
				break;
			
			case 139:
				func_247("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_210(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = unk_0xC5935DFB3F39785A(0, 120);
				if (!func_252(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_248(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = unk_0xC5935DFB3F39785A(0, 100);
				if (!func_252(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_248(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_247("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_253(uParam0, 0, 0);
				func_210(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_41())
				{
					func_247("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_253(uParam0, 0, 0);
					func_210(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_247("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_253(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_252(uParam0->f_81, 1))
				{
					func_336(uParam0, 1, Var0, "_sick1", 8);
					func_13(&(uParam0->f_81), 2);
				}
				else if (!func_252(uParam0->f_81, 2))
				{
					func_336(uParam0, 2, Var0, "_sick2", 8);
					func_13(&(uParam0->f_81), 1);
				}
				func_347(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_252(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_252(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_248(&(uParam0->f_81), 2097152);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_69(uParam0, 16, 0, 0);
				func_347(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_253(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_347(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_347(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_347(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_212(&Var0);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_252(uParam0->f_81, 4))
				{
					func_336(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_252(uParam0->f_81, 8))
				{
					func_336(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_336(uParam0, 8, Var0, "_turns3", 8);
					func_13(&(uParam0->f_81), 4);
					func_13(&(uParam0->f_81), 8);
				}
				func_347(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_335(uParam0))
				{
					func_343(uParam0, Var0, func_345(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_162(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4, 0);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					func_349(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_302(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_349(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_349(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				func_347(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_252(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 128);
					func_13(&(uParam0->f_83), 256);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 256);
					func_13(&(uParam0->f_83), 512);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 512);
					func_13(&(uParam0->f_83), 128);
					func_69(uParam0, 16, 0, 0);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_252(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						func_212(&Var0);
					}
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 1);
					func_13(&(uParam0->f_83), 2);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						func_212(&Var0);
					}
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_13(&(uParam0->f_83), 4);
					}
					else
					{
						func_13(&(uParam0->f_83), 1);
					}
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						func_212(&Var0);
					}
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 4);
					func_13(&(uParam0->f_83), 1);
					func_69(uParam0, 16, 0, 0);
				}
				func_347(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_252(uParam0->f_81, 4096))
				{
					func_342(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!func_252(uParam0->f_81, 8192))
				{
					func_342(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				func_347(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_252(uParam0->f_81, 16384))
				{
					func_342(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!func_252(uParam0->f_81, 32768))
				{
					func_342(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				func_347(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_252(uParam0->f_82, 8))
					{
						func_334(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_252(uParam0->f_82, 16))
					{
						func_334(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_252(uParam0->f_82, 32))
					{
						func_334(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_347(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_253(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					func_349(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_347(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_69(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				func_349(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_347(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				func_349(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_347(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_252(uParam0->f_81, 65536))
				{
					func_342(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_252(uParam0->f_81, 131072))
				{
					func_342(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_335(uParam0))
				{
					func_343(uParam0, Var0, func_345(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_162(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4, 0);
					}
				}
				else if (!func_252(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_212(&Var0);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 8);
					func_13(&(uParam0->f_83), 16);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_212(&Var0);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 16);
					func_13(&(uParam0->f_83), 32);
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_212(&Var0);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_13(&(uParam0->f_83), 64);
					}
					else
					{
						func_13(&(uParam0->f_83), 8);
					}
					func_69(uParam0, 16, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_212(&Var0);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_248(&(uParam0->f_83), 64);
					func_13(&(uParam0->f_83), 8);
					func_69(uParam0, 16, 0, 0);
				}
				func_347(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_41())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_346(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_343(uParam0, Var0, func_345(uParam0, 65));
					func_253(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_41())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_346(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_343(uParam0, Var0, func_345(uParam0, 66));
					func_253(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_41())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_346(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_346(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_346(uParam0, &Var0, 0, 0, 8);
								func_347(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_346(uParam0, &Var0, 0, 0, 8);
								func_347(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_346(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								func_349(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								func_347(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_69(uParam0, 16, 0, 0);
								func_253(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_56)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									func_346(uParam0, &Var0, 0, 0, 8);
									func_69(uParam0, 16, 0, 0);
									func_69(uParam0, 11, 0, 0);
									func_253(uParam0, 0, 0);
									if (!iLocal_58)
									{
										iLocal_56 = 1;
									}
								}
								else
								{
									if (!iLocal_57)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_57 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_58 = 1;
									}
									func_212(&Var0);
									func_346(uParam0, &Var0, 0, 0, 8);
									func_69(uParam0, 16, 0, 0);
									func_69(uParam0, 11, 0, 0);
									func_253(uParam0, 0, 0);
									iLocal_56 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_346(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_210(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				func_349(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_347(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_252(uParam0->f_82, 1))
				{
					func_334(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_252(uParam0->f_82, 2))
				{
					func_334(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_252(uParam0->f_82, 4))
				{
					func_334(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar1 = { Var0 };
				func_349(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_162(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4, 0);
				}
				func_69(uParam0, 16, 0, 0);
				func_347(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_335(uParam0))
				{
					func_343(uParam0, Var0, func_345(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_162(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_333(uParam0, Var0, 8);
				}
				func_347(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_252(uParam0->f_83, 1024))
				{
					func_248(&(uParam0->f_83), 1024);
					func_69(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_212(&Var0);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 2048))
				{
					func_248(&(uParam0->f_83), 2048);
					func_69(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_212(&Var0);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_252(uParam0->f_83, 4096))
				{
					func_248(&(uParam0->f_83), 4096);
					func_69(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_212(&Var0);
					func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_252(uParam0->f_82, 1024))
				{
					func_334(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_13(&(uParam0->f_82), 2048);
				}
				else if (!func_252(uParam0->f_82, 2048))
				{
					func_334(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				func_349(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_347(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_346(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
				{
					func_162(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4, 0);
				}
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_335(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						func_346(uParam0, &Var0, 0, 0, 8);
						func_210(uParam0, 52, 1, 0, 0);
						func_69(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar1 = { Var0 };
						func_346(uParam0, &Var0, 0, 0, 8);
						func_69(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					func_349(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_69(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_347(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_69(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) >= 1)
				{
					func_247("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_212(&Var0);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_252(uParam0->f_81, 262144))
				{
					func_342(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_252(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_342(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_342(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_347(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_252(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_332(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_252(uParam0->f_82, 134217728))
				{
					func_332(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_347(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 100:
				func_247("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_253(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_346(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_212(&Var0);
				}
				func_248(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_346(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_212(&Var0);
				}
				func_248(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_346(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_212(&Var0);
				}
				func_248(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_346(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_252(uParam0->f_82, 65536))
				{
					if (func_394(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_212(&Var0);
						func_339(Var0, uParam1);
						func_248(&(uParam0->f_82), 65536);
						func_69(uParam0, 16, 0, 0);
						func_69(uParam0, 11, 0, 0);
						func_253(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_252(uParam0->f_82, 131072))
				{
					if (func_394(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_212(&Var0);
						func_339(Var0, uParam1);
						func_248(&(uParam0->f_82), 131072);
						func_69(uParam0, 16, 0, 0);
						func_69(uParam0, 11, 0, 0);
						func_253(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_252(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_248(&(uParam0->f_82), 8388608);
				}
				else if (!func_252(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_248(&(uParam0->f_82), 16777216);
				}
				else if (!func_252(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_248(&(uParam0->f_82), 33554432);
				}
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					func_349(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_212(&Var0);
					func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_346(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_346(uParam0, &Var0, 0, 0, 8);
				}
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_339(Var0, uParam1);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_212(&Var0);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_212(&Var0);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				func_349(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				func_349(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_348(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_212(&Var0);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_212(&Var0);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_210(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_248(&(uParam0->f_81), 2097152);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_212(&Var0);
				func_339(Var0, uParam1);
				func_248(&(uParam0->f_81), 67108864);
				func_69(uParam0, 16, 0, 0);
				func_69(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_252(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_342(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
					{
						func_162(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4, 0);
					}
				}
				func_210(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_252(uParam0->f_81, 268435456))
				{
					func_342(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_210(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_247("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_253(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_252(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_342(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
						{
							func_162(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4, 0);
						}
					}
					else
					{
						func_342(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_210(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_247("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_253(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_302(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_69(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_252(uParam0->f_81, 16777216))
				{
					func_342(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 88:
				func_247("TAXI_TIEFLEE", 7500, 1);
				func_253(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_252(uParam0->f_98, 536870912))
				{
					func_247("TAXI_OBJ_CYI_1B", 7500, 1);
					func_248(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_253(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_212(&Var0);
				func_346(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_346(uParam0, &Var0, 0, 0, 8);
				func_253(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_346(uParam0, &Var0, 0, 0, 8);
				func_253(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_346(uParam0, &Var0, 0, 0, 8);
				func_253(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_346(uParam0, &Var0, 1, 0, 8);
				func_210(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_247("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_210(uParam0, 0, 0, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			}
	}
}

void func_332(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_248(&(uParam0->f_82), iParam1);
	func_69(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_212(&Param2);
	}
	func_302(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_333(var uParam0, struct<6> Param1, int iParam2)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_252(uParam0->f_82, 64))
	{
		func_248(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_252(uParam0->f_82, 128))
	{
		func_248(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0xC5935DFB3F39785A(1, 3), 24);
	}
	func_348(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_69(uParam0, 16, 0, 0);
}

void func_334(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_248(&(uParam0->f_82), iParam1);
	func_69(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_212(&Param2);
		}
	}
	func_302(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

int func_335(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_336(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_248(&(uParam0->f_81), iParam1);
	func_69(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	func_302(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_337(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = system::to_float(iVar2);
		iVar1 = system::round(system::pow(2f, fVar0));
		if (!func_338(*uParam0, iVar1))
		{
			func_249(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_212(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

bool func_338(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_339(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_340(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_248(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_340(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xD6F9DEE4765092A9(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_341(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_247("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_247("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_247("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_247("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_247("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_247("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_247("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_247("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_247("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_247("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_247("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_247("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_247("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_342(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_248(&(uParam0->f_81), iParam1);
	func_69(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_212(&Param2);
	}
	func_302(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_343(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_69(uParam0, 16, 0, 0);
	func_69(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_3))
	{
		unk_0x695EDD4AD352F831(uParam0->f_3, &cParam1, func_344(uParam0));
	}
}

char* func_344(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_345(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_346(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_69(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_69(uParam0, 17, 0f, 1);
	}
	func_253(uParam0, iParam2, 0);
	return func_302(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_347(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0)
	{
		if (func_252(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_252(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_252(*uParam2, 4))
		{
			if (!func_252(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_252(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_252(*uParam2, 512))
		{
			if (!func_252(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_252(*uParam2, 16))
		{
			if (!func_252(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_252(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_252(*uParam2, 64))
		{
			if (!func_252(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_13(uParam2, 4096);
			}
		}
		else if (func_252(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_252(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_252(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_252(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_252(*uParam2, 8192))
		{
			if (func_252(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_252(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_252(*uParam2, 16384))
		{
			if (func_252(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_252(*uParam2, 32768))
		{
			if (func_252(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_252(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_252(*uParam2, 65536))
		{
			if (func_252(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_252(*uParam2, 131072))
		{
			if (func_252(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_252(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_252(*uParam2, 262144))
		{
			if (func_252(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_252(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_252(*uParam2, 524288))
		{
			if (func_252(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_252(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_252(*uParam2, 1048576))
		{
			if (func_252(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_252(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_252(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_252(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_252(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_252(*uParam2, 67108864))
		{
			if (func_252(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_252(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_252(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_252(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_252(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_348(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_23277 = 1;
	Global_23279 = 0;
	Global_23283 = 0;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_303(sParam2, iParam4, 0);
}

void func_349(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = system::to_float(iVar2);
		iVar1 = system::round(system::pow(2f, fVar0));
		if (!func_338(*uParam0, iVar1))
		{
			func_249(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_212(sParam2);
				}
				else
				{
					func_212(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_350(var uParam0)
{
	return uParam0->f_416;
}

int func_351(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (func_184(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_352(var uParam0)
{
	if (func_41())
	{
		return 1;
	}
	if (func_176(uParam0, 17))
	{
		return 1;
	}
	if (func_176(uParam0, 14))
	{
		return 1;
	}
	if (func_324(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_353(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_176(uParam0, 9));
}

void func_354(var uParam0)
{
	if (func_176(uParam0, 17))
	{
		if (!func_176(uParam0, 14))
		{
			if (!func_324(uParam0))
			{
				if (!func_41())
				{
					func_173(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_355(var uParam0)
{
	return uParam0->f_117;
}

void func_356(var uParam0, var uParam1, bool bParam2)
{
	if (!func_252(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xD6F9DEE4765092A9(&(uParam0->f_124)) && func_41())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_41())
				{
					StringCopy(&(uParam0->f_124), func_326(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_357(var uParam0)
{
	if (!func_252(uParam0->f_98, 2))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
		{
			if (func_146(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x60040CDD28AA1BC3(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0, 0);
				func_248(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_358(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
		{
			if (Local_183.f_0 > 0 && !func_338(Local_183.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_183.f_0 - 1))
				{
					if (func_338(Local_183.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_183.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_338(Local_183.f_1[iVar0 /*4*/], 4))
							{
								func_249(&(Local_183.f_1[iVar0 /*4*/]), 4);
								Local_183.f_1[iVar0 /*4*/].f_1 = unk_0x1DD05E817C89C737();
							}
						}
						else
						{
							func_14(&(Local_183.f_1[iVar0 /*4*/]), 12);
						}
						if (func_338(Local_183.f_1[iVar0 /*4*/], 4) && !func_338(Local_183.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_183.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_183.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_249(&(Local_183.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_301(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_359(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_176(uParam0, 27))
	{
		func_174(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_394(uParam0, 27) > 5f)
	{
		if (func_387(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_69(uParam0, 27, 0, 0);
			func_69(uParam0, 10, 0, 0);
			func_385(uParam0, &uVar0, uParam1);
		}
		func_381(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_360(uParam0);
	}
	if ((((!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) && (unk_0x78411E34CF90EA8C(*uParam0) && !unk_0xBC886554B5888A64(*uParam0))) && (unk_0x78411E34CF90EA8C(uParam0->f_1) && !unk_0xBC886554B5888A64(uParam0->f_1))) && !unk_0xFBA523E6F8ACE541()) && !func_41())
	{
		if (func_394(uParam0, 26) > 10f)
		{
			func_173(uParam0, 26, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		}
	}
	else if (func_176(uParam0, 26))
	{
		func_173(uParam0, 26, 0);
	}
	return 0;
}

void func_360(var uParam0)
{
	if (!func_380(uParam0->f_429))
	{
		uParam0->f_429 = func_379();
		func_370(&(uParam0->f_429), 0, 0, unk_0xC5935DFB3F39785A(4, 7), 0, 0, 0);
	}
	else if (func_361(uParam0->f_429))
	{
		func_301(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_361(int iParam0)
{
	return func_362(func_379(), iParam0);
}

int func_362(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_380(iParam1) || !func_380(iParam0))
	{
		return 1;
	}
	iVar0 = func_368(iParam0);
	iVar1 = func_368(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_367(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_366(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	iVar1 = func_365(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_364(iParam0);
	iVar1 = func_364(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	iVar1 = func_363(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_364(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_365(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_366(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_367(int iParam0)
{
	return iParam0 & 15;
}

var func_368(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_369(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_369(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_370(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_368(*uParam0);
	iVar1 = func_367(*uParam0);
	iVar2 = func_366(*uParam0);
	iVar3 = func_365(*uParam0);
	iVar4 = func_364(*uParam0);
	iVar5 = func_363(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_378(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_378(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_371(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_371(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_377(uParam0, iParam1);
	func_376(uParam0, iParam2);
	func_375(uParam0, iParam3);
	func_374(uParam0, iParam5);
	func_373(uParam0, iParam4);
	func_372(uParam0, iParam6);
}

void func_372(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_373(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_367(*uParam0);
	iVar1 = func_368(*uParam0);
	if (iParam1 < 1 || iParam1 > func_378(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_374(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_375(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_376(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_377(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_378(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_379()
{
	var uVar0;
	
	func_377(&uVar0, unk_0x4BA5A16068183C5E());
	func_376(&uVar0, unk_0x18E502A71E28968C());
	func_375(&uVar0, unk_0x5295501D0862870D());
	func_373(&uVar0, unk_0xB12880C92EA6EE15());
	func_374(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_372(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

int func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_364(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_365(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_368(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_367(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_366(iParam0);
	if (iVar5 < 1 || iVar5 > func_378(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_381(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_384()) && !func_177(uParam0)) || ((uParam0->f_411 != 9 && func_383(uParam0, 1)) && !func_177(uParam0)))
		{
			uVar0 = func_382(uParam0->f_4);
			unk_0x76AD45C3946F87DD(&uVar0);
			uParam0->f_4 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			unk_0xEE0BCDB1B5E36BCB(uParam0->f_4, 1, 0);
			func_200(uParam0);
			func_191(uParam0, 0);
		}
	}
}

var func_382(var uParam0)
{
	return uParam0;
}

int func_383(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
				bVar2 = func_239(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0xD3CE8D1E6564B011(iVar1))
				{
					if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x2EEC0612337D20CE(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_252(uParam0->f_44, 64))
					{
						if (unk_0xDCB78A15E5F495DC(2))
						{
							func_250("TX_VIP_DMGD", -1);
							if (func_276("TX_VIP_DMGD"))
							{
								func_248(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_252(uParam0->f_44, 32))
					{
						if (unk_0xDCB78A15E5F495DC(2))
						{
							func_250("TX_VIP_CAR", -1);
							if (func_276("TX_VIP_CAR"))
							{
								func_248(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_252(uParam0->f_44, 16))
					{
						if (unk_0xDCB78A15E5F495DC(2))
						{
							func_250("TX_VIP_SMALL", -1);
							if (func_276("TX_VIP_SMALL"))
							{
								func_248(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_13(&(uParam0->f_44), 16);
			func_13(&(uParam0->f_44), 64);
			func_13(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

int func_384()
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
				{
					if (unk_0x2E6A27037F1DC473(iVar0, func_12()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_385(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_386(uParam0, 0, 1))
			{
				func_301(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_386(uParam0, 0, 4))
			{
				func_301(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_386(uParam0, 0, 8))
			{
				func_301(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_386(uParam0, 1, 1))
			{
				func_301(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_386(uParam0, 0, 1))
			{
				func_301(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_252(*uParam2, 2) && func_159(uParam0))
			{
				func_301(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_386(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
	{
		if (!unk_0xF6C26AE940C14749(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_210(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_210(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_387(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (!func_252(*uParam2, 1))
		{
			if (func_393(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_252(*uParam2, 2))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_252(*uParam2, 4))
		{
			if (func_391(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_252(*uParam2, 8))
		{
			if (func_390(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_252(*uParam2, 128);
		if (bParam4)
		{
			if (func_388(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_252(*uParam2, 16))
		{
			if (func_388(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (iParam7 && unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_71)
		{
			iLocal_72 = unk_0x8D91ADE44AC79BC9(iParam0);
			bLocal_71 = true;
		}
		iLocal_73 = unk_0x8D91ADE44AC79BC9(iParam0);
		iLocal_74 = (iLocal_72 - iLocal_73);
		uVar0 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(uVar0, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_74) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_71)
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
			{
				if (IntToFloat(iLocal_74) > 100f)
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
		uVar1 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(uVar1, 0))
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
			if (unk_0x65FFA94B82A71741(iParam0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 10f, 10f, 10f, false, 1, 0))
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
	if (func_389(unk_0x4A8C381C258A124D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8BF5256C439DF778(iParam0) && func_189(iParam0, 1) < 1,5f)
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
		if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam1, unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_389(int iParam0, int iParam1)
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

int func_390(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x11552FA9DCB8E126(uParam0, 4))
	{
		if (unk_0x65F146FF416F109F(uParam0) && !unk_0x3C2402675D8FFADA(iParam0))
		{
			if (unk_0x65FFA94B82A71741(uParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
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
	if (unk_0x11552FA9DCB8E126(uParam0, 2))
	{
		if (unk_0x65F146FF416F109F(uParam0))
		{
			if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
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
			if (unk_0x74CD4FE549433E92(iParam0) || func_392(iVar1))
			{
				if (unk_0x65FFA94B82A71741(iParam1, unk_0xD1A6A821F5AC81DB(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
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

int func_392(int iParam0)
{
	int iVar0;
	var uVar1;
	
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
						if (func_190(unk_0x4A8C381C258A124D(), iParam0, 1) < 40f)
						{
							if (unk_0x66EE98F15844BE4D(unk_0x259BE71D8A81D4FA(), &uVar1))
							{
								if ((unk_0x55B80B6E7AB61270(uVar1) && unk_0xE93EDE86BBB66532(iVar1) == iParam0) || (unk_0x0101C509A6E67F99(iVar1) && unk_0xBD545F8729E9F413(iVar1) == unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0)))
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

int func_393(int iParam0, var uParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 90f))
				{
					if (func_189(iParam0, 1) < uParam1->f_2)
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

float func_394(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_175(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_100(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_395()
{
	func_396(&Local_272);
	func_438();
}

void func_396(var uParam0)
{
	func_2(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_68(2);
	}
}

int func_397(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_41() && func_394(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
			{
				if (unk_0xCECDBB848D53DEB2(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_53(uParam0) == 0 || func_338(uParam0->f_85, 32))
					{
						if (!unk_0x1CE980E99A2A6FB6(uParam0->f_4))
						{
							func_142(uParam0, 4160, 0);
						}
						else
						{
							func_142(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_142(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_142(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_142(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x1DD05E817C89C737() % 1000) < 50)
	{
	}
	return 0;
}

void func_398(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_8))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_8));
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_9))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_9));
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_10))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_10));
	}
}

int func_399(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_400()
{
	Local_183.f_0 = 0;
	func_416(74824, 74799, 1);
	func_416(74560, 74538, 1);
	func_416(74476, 74451, 1);
	func_416(74379, 74355, 1);
	func_416(74245, 74224, 1);
	func_416(74186, 74161, 1);
	func_416(74019, 73997, 1);
}

int func_401(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_301(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_402(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (func_404(uParam0->f_4))
		{
			func_403(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_403(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_404(int iParam0)
{
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x4C7724D572378B05(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xA24B9FF9863A909D(iParam0, 0, 40000) || unk_0xA24B9FF9863A909D(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_405(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_301(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_406(var uParam0)
{
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
	{
		if (func_338(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_407(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_403(uParam0, 11);
	return 1;
}

int func_408(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (unk_0x69799E0840A34AFB(uParam0->f_4) && !unk_0xD2A0543EC400E1A5(uParam0->f_4))
		{
			if (!func_176(uParam0, 25))
			{
				func_69(uParam0, 25, 0, 0);
			}
			else if (func_394(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_176(uParam0, 25))
		{
			func_173(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_409(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_301(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_410(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		if (unk_0x67AC1AE8A2697D67(uParam0->f_4))
		{
			if (unk_0xA24B9FF9863A909D(uParam0->f_4, 0, 40000) || unk_0xA24B9FF9863A909D(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_411(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_301(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_412(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_4, 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_4, 0))
		{
			if (unk_0x1CE980E99A2A6FB6(uParam0->f_4))
			{
				if (func_338(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_413(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_301(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_414(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_4))
	{
		if (func_415(uParam0->f_4))
		{
			func_403(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_415(int iParam0)
{
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x4C7724D572378B05(iParam0) == 0f)
	{
		if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xA24B9FF9863A909D(iParam0, 0, 40000) || unk_0xA24B9FF9863A909D(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_416(int iParam0, int iParam1, bool bParam2)
{
	if (Local_183.f_0 >= 16)
	{
		Local_183.f_0 = 16;
		return;
	}
	Local_183.f_1[Local_183.f_0 /*4*/] = 0;
	func_249(&(Local_183.f_1[Local_183.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_249(&(Local_183.f_1[Local_183.f_0 /*4*/]), 2);
	}
	Local_183.f_1[Local_183.f_0 /*4*/].f_2 = iParam0;
	Local_183.f_1[Local_183.f_0 /*4*/].f_3 = iParam1;
	Local_183.f_0++;
}

int func_417(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_301(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_418(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_3))
	{
		if ((unk_0x4FAFF4BCB7633475(uParam0->f_3) || unk_0x1C2F771CDC87A3A5(uParam0->f_3, 0)) || unk_0x5B702A5D1F2635BE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_419()
{
	Local_180[5 /*10*/] = 5;
	Local_180[5 /*10*/].f_1 = 0;
	Local_180[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_180[5 /*10*/].f_9 = 78;
	Local_180[0 /*10*/] = 5;
	Local_180[0 /*10*/].f_1 = 0;
	Local_180[0 /*10*/].f_2 = "TX_AIR_N";
	Local_180[0 /*10*/].f_9 = 76;
	Local_180[2 /*10*/] = 5;
	Local_180[2 /*10*/].f_1 = 0;
	Local_180[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_180[2 /*10*/].f_9 = 21;
	Local_180[1 /*10*/] = 10;
	Local_180[1 /*10*/].f_1 = 0;
	Local_180[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_180[1 /*10*/].f_9 = 71;
	Local_180[4 /*10*/] = 10;
	Local_180[4 /*10*/].f_1 = 0;
	Local_180[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_180[4 /*10*/].f_9 = 79;
	Local_180[6 /*10*/] = 10;
	Local_180[6 /*10*/].f_1 = 0;
	Local_180[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_180[6 /*10*/].f_9 = 80;
	Local_180[9 /*10*/] = 15;
	Local_180[9 /*10*/].f_1 = 0;
	Local_180[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_180[9 /*10*/].f_9 = 82;
	Local_180[8 /*10*/] = 15;
	Local_180[8 /*10*/].f_1 = 0;
	Local_180[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_180[8 /*10*/].f_9 = 72;
	Local_180[7 /*10*/] = 15;
	Local_180[7 /*10*/].f_1 = 0;
	Local_180[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_180[7 /*10*/].f_9 = 74;
	Local_180[11 /*10*/] = 5;
	Local_180[11 /*10*/].f_1 = 0;
	Local_180[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_180[11 /*10*/].f_9 = 70;
	Local_180[12 /*10*/] = 5;
	Local_180[12 /*10*/].f_1 = 0;
	Local_180[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_180[12 /*10*/].f_9 = 69;
	Local_180[13 /*10*/] = 10;
	Local_180[13 /*10*/].f_1 = 0;
	Local_180[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_180[13 /*10*/].f_9 = 67;
	Local_180[14 /*10*/] = 10;
	Local_180[14 /*10*/].f_1 = 0;
	Local_180[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_180[14 /*10*/].f_9 = 75;
}

void func_420(var uParam0)
{
	func_421();
	(*uParam0)[0 /*11*/] = "Region 0 - Los Puerta";
	(uParam0[0 /*11*/])->f_2 = { -1902f, -1280f, 20f };
	(uParam0[0 /*11*/])->f_5 = { -373f, -3533f, -20f };
	(uParam0[0 /*11*/])->f_1 = 8;
	(uParam0[0 /*11*/])->f_8 = { IntToFloat(1), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[1 /*11*/] = "Region 1 - South Los Santos";
	(uParam0[1 /*11*/])->f_2 = { -373f, -1280f, 20f };
	(uParam0[1 /*11*/])->f_5 = { 708f, -3533f, -20f };
	(uParam0[1 /*11*/])->f_1 = 12;
	(uParam0[1 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(1), IntToFloat(5) };
	(*uParam0)[2 /*11*/] = "Region 2 - Vinewood Hills";
	(uParam0[2 /*11*/])->f_2 = { 708f, -1280f, 20f };
	(uParam0[2 /*11*/])->f_5 = { 1952f, -3533f, -20f };
	(uParam0[2 /*11*/])->f_1 = 6;
	(uParam0[2 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[3 /*11*/] = "Region 3 - Del Perro";
	(uParam0[3 /*11*/])->f_2 = { -4613f, 315f, 20f };
	(uParam0[3 /*11*/])->f_5 = { -1902f, -1280f, -20f };
	(uParam0[3 /*11*/])->f_1 = 5;
	(uParam0[3 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(5) };
	(*uParam0)[4 /*11*/] = "Region 4 - Little Seoul";
	(uParam0[4 /*11*/])->f_2 = { -1902f, 315f, 20f };
	(uParam0[4 /*11*/])->f_5 = { -373f, -1280f, 33f };
	(uParam0[4 /*11*/])->f_1 = 20;
	(uParam0[4 /*11*/])->f_8 = { IntToFloat(5), IntToFloat(0), IntToFloat(1) };
	(*uParam0)[5 /*11*/] = "Region 5 -  Downtown";
	(uParam0[5 /*11*/])->f_2 = { -373f, 315f, 20f };
	(uParam0[5 /*11*/])->f_5 = { 708f, -1280f, -17f };
	(uParam0[5 /*11*/])->f_1 = 11;
	(uParam0[5 /*11*/])->f_8 = { IntToFloat(0), IntToFloat(4), IntToFloat(2) };
	(*uParam0)[6 /*11*/] = "Region 6 - SouthGate";
	(uParam0[6 /*11*/])->f_2 = { 708f, 315f, 20f };
	(uParam0[6 /*11*/])->f_5 = { 1952f, -1280f, -20f };
	(uParam0[6 /*11*/])->f_1 = 3;
	(uParam0[6 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(2) };
	(*uParam0)[7 /*11*/] = "Region 7 - City Hills";
	(uParam0[7 /*11*/])->f_2 = { 1952f, 315f, 35f };
	(uParam0[7 /*11*/])->f_5 = { 4603f, -1280f, -20f };
	(uParam0[7 /*11*/])->f_1 = 3;
	(uParam0[7 /*11*/])->f_8 = { IntToFloat(5), IntToFloat(2), IntToFloat(6) };
	(*uParam0)[8 /*11*/] = "Region 8 - Country Hills";
	(uParam0[8 /*11*/])->f_2 = { -4613f, 2550f, 35f };
	(uParam0[8 /*11*/])->f_5 = { -1902f, 315f, -20f };
	(uParam0[8 /*11*/])->f_1 = 4;
	(uParam0[8 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(4), IntToFloat(0) };
	(*uParam0)[9 /*11*/] = "Region 9 - Bel Air";
	(uParam0[9 /*11*/])->f_2 = { -1902f, 2550f, 35f };
	(uParam0[9 /*11*/])->f_5 = { -373f, 315f, -20f };
	(uParam0[9 /*11*/])->f_1 = 7;
	(uParam0[9 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(10) };
	(*uParam0)[10 /*11*/] = "Region 10 - West Hollywood";
	(uParam0[10 /*11*/])->f_2 = { -373f, 2550f, 35f };
	(uParam0[10 /*11*/])->f_5 = { 708f, 315f, -20f };
	(uParam0[10 /*11*/])->f_1 = 3;
	(uParam0[10 /*11*/])->f_8 = { IntToFloat(4), IntToFloat(5), IntToFloat(6) };
	(*uParam0)[11 /*11*/] = "Region 11 - Echo Park";
	(uParam0[11 /*11*/])->f_2 = { 708f, 2550f, 35f };
	(uParam0[11 /*11*/])->f_5 = { 1952f, 315f, -20f };
	(uParam0[11 /*11*/])->f_1 = 4;
	(uParam0[11 /*11*/])->f_8 = { IntToFloat(10), IntToFloat(5), IntToFloat(6) };
	(*uParam0)[12 /*11*/] = "Region 12 - North City Hills";
	(uParam0[12 /*11*/])->f_2 = { 1952f, 2550f, 35f };
	(uParam0[12 /*11*/])->f_5 = { 4603f, 315f, -20f };
	(uParam0[12 /*11*/])->f_1 = 2;
	(uParam0[12 /*11*/])->f_8 = { IntToFloat(11), IntToFloat(6), IntToFloat(6) };
	(*uParam0)[13 /*11*/] = "Region 13 - Vinewood";
	(uParam0[13 /*11*/])->f_2 = { -4613f, 4435f, 35f };
	(uParam0[13 /*11*/])->f_5 = { -1902f, 2550f, -20f };
	(uParam0[13 /*11*/])->f_1 = 4;
	(uParam0[13 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(8), IntToFloat(9) };
	(*uParam0)[14 /*11*/] = "Region 14 - Mountains";
	(uParam0[14 /*11*/])->f_2 = { -1902f, 4435f, 35f };
	(uParam0[14 /*11*/])->f_5 = { -373f, 2550f, -20f };
	(uParam0[14 /*11*/])->f_1 = 7;
	(uParam0[14 /*11*/])->f_8 = { IntToFloat(8), IntToFloat(9), IntToFloat(10) };
	(*uParam0)[15 /*11*/] = "Region 15 - Lakes";
	(uParam0[15 /*11*/])->f_2 = { -373f, 4435f, 35f };
	(uParam0[15 /*11*/])->f_5 = { 708f, 2550f, 1f };
	(uParam0[15 /*11*/])->f_1 = 7;
	(uParam0[15 /*11*/])->f_8 = { IntToFloat(9), IntToFloat(10), IntToFloat(11) };
	(*uParam0)[16 /*11*/] = "Region 16 - Sandy Shores";
	(uParam0[16 /*11*/])->f_2 = { 708f, 4435f, 35f };
	(uParam0[16 /*11*/])->f_5 = { 1952f, 2550f, -20f };
	(uParam0[16 /*11*/])->f_1 = 8;
	(uParam0[16 /*11*/])->f_8 = { IntToFloat(10), IntToFloat(11), IntToFloat(15) };
	(*uParam0)[17 /*11*/] = "Region 17 - SS Hills";
	(uParam0[17 /*11*/])->f_2 = { 1952f, 4435f, 35f };
	(uParam0[17 /*11*/])->f_5 = { 4603f, 2550f, -20f };
	(uParam0[17 /*11*/])->f_1 = 5;
	(uParam0[17 /*11*/])->f_8 = { IntToFloat(11), IntToFloat(15), IntToFloat(12) };
	(*uParam0)[18 /*11*/] = "Region 18 - NW Country";
	(uParam0[18 /*11*/])->f_2 = { -1902f, 7693f, 35f };
	(uParam0[18 /*11*/])->f_5 = { -373f, 4435f, -20f };
	(uParam0[18 /*11*/])->f_1 = 5;
	(uParam0[18 /*11*/])->f_8 = { IntToFloat(13), IntToFloat(14), IntToFloat(15) };
	(*uParam0)[19 /*11*/] = "Region 19 - N Country";
	(uParam0[19 /*11*/])->f_2 = { -373f, 7693f, 35f };
	(uParam0[19 /*11*/])->f_5 = { 708f, 4435f, -20f };
	(uParam0[19 /*11*/])->f_1 = 6;
	(uParam0[19 /*11*/])->f_8 = { IntToFloat(18), IntToFloat(20), IntToFloat(15) };
	(*uParam0)[20 /*11*/] = "Region 20 - E Country";
	(uParam0[20 /*11*/])->f_2 = { 708f, 7693f, 35f };
	(uParam0[20 /*11*/])->f_5 = { 1952f, 4435f, -20f };
	(uParam0[20 /*11*/])->f_1 = 6;
	(uParam0[20 /*11*/])->f_8 = { IntToFloat(19), IntToFloat(21), IntToFloat(16) };
	(*uParam0)[21 /*11*/] = "Region 21 - CountrySide";
	(uParam0[21 /*11*/])->f_2 = { 1952f, 7693f, 35f };
	(uParam0[21 /*11*/])->f_5 = { 4603f, 4435f, 1f };
	(uParam0[21 /*11*/])->f_1 = 6;
	(uParam0[21 /*11*/])->f_8 = { IntToFloat(17), IntToFloat(20), IntToFloat(16) };
	(*uParam0)[22 /*11*/] = "Region 8 - Special POIs";
	(uParam0[22 /*11*/])->f_2 = { -4613f, 7693f, 20f };
	(uParam0[22 /*11*/])->f_5 = { 4603f, -3533f, -20f };
	(uParam0[22 /*11*/])->f_1 = 10;
	(uParam0[22 /*11*/])->f_8 = { IntToFloat(1), IntToFloat(2), IntToFloat(3) };
}

void func_421()
{
	Local_248[0 /*3*/] = { -939,6133f, -1523,37f, 4,1764f };
	Local_248[1 /*3*/] = { -1161,53f, -1492,471f, 3,3139f };
	Local_248[2 /*3*/] = { -1037,172f, -2730,923f, 19,1697f };
	Local_248[3 /*3*/] = { -1204,591f, -1377,74f, 3,1844f };
	Local_248[4 /*3*/] = { -939,6133f, -1523,37f, 4,1764f };
	Local_248[5 /*3*/] = { -91,6341f, -1328,155f, 28,3373f };
	Local_248[6 /*3*/] = { -900,3735f, -2690,014f, 12,9447f };
	Local_248[7 /*3*/] = { -1012,786f, -2468,602f, 12,8384f };
	Local_249[0 /*3*/] = { 87,0014f, -1402,448f, 28,2549f };
	Local_249[1 /*3*/] = { 146,5773f, -1426,882f, 28,2915f };
	Local_249[2 /*3*/] = { 435,1445f, -1462,779f, 28,2915f };
	Local_249[3 /*3*/] = { 135,1209f, -1302,604f, 28,1936f };
	Local_249[4 /*3*/] = { 112,2743f, -1947,214f, 19,6826f };
	Local_249[5 /*3*/] = { 65,3804f, -1568,944f, 28,6028f };
	Local_249[6 /*3*/] = { 137,8282f, -1724,227f, 28,2079f };
	Local_249[7 /*3*/] = { 132,9427f, -2009,911f, 17,2055f };
	Local_249[8 /*3*/] = { -184,5559f, -1438,031f, 30,3049f };
	Local_249[9 /*3*/] = { 153,5036f, -1451,892f, 28,1418f };
	Local_249[10 /*3*/] = { 50,2007f, -1379,729f, 32f };
	Local_249[11 /*3*/] = { -297,4216f, -1848,188f, 24,7217f };
	Local_250[0 /*3*/] = { 768,2622f, -2371,747f, 21,6783f };
	Local_250[1 /*3*/] = { 1188,841f, -3249,505f, 5,0276f };
	Local_250[2 /*3*/] = { 770,0794f, -2991,976f, 5,0203f };
	Local_250[3 /*3*/] = { 946,5765f, -2453,436f, 27,5512f };
	Local_250[4 /*3*/] = { 957,6567f, -2097,351f, 29,6646f };
	Local_250[5 /*3*/] = { 926,1091f, -1749,836f, 29,9898f };
	Local_251[0 /*3*/] = { -2075,602f, -330,3965f, 12,3162f };
	Local_251[1 /*3*/] = { -1994,446f, -545,3368f, 10,7213f };
	Local_251[2 /*3*/] = { -3171,321f, 918,0819f, 13,4239f };
	Local_251[3 /*3*/] = { -1918,183f, -370,5667f, 48,1919f };
	Local_251[4 /*3*/] = { -1938,766f, -441,2331f, 18,7351f };
	Local_252[0 /*3*/] = { -1392,673f, -179,0173f, 46,3472f };
	Local_252[1 /*3*/] = { -1428,562f, -195,809f, 46,4109f };
	Local_252[2 /*3*/] = { -385,7066f, -403,3985f, 30,5014f };
	Local_252[3 /*3*/] = { -486,7284f, -389,6814f, 33,2888f };
	Local_252[4 /*3*/] = { -583,0761f, -446,2154f, 33,299f };
	Local_252[5 /*3*/] = { -496,0706f, 236,211f, 82,0245f };
	Local_252[6 /*3*/] = { -536,2413f, -679,3174f, 32,2419f };
	Local_252[7 /*3*/] = { -1156,046f, -1418,88f, 3,7969f };
	Local_252[8 /*3*/] = { -856,6715f, -1148,855f, 5,2178f };
	Local_252[9 /*3*/] = { -696,4865f, -823,45f, 22,8254f };
	Local_252[10 /*3*/] = { -1142,855f, -933,465f, 1,6658f };
	Local_252[11 /*3*/] = { -1281,353f, -882,9135f, 10,3152f };
	Local_252[12 /*3*/] = { -1099,791f, -1702,432f, 3,37f };
	Local_252[13 /*3*/] = { -1270,749f, -1159,347f, 5,2547f };
	Local_252[14 /*3*/] = { -1130,542f, -1195,19f, 1,2757f };
	Local_252[15 /*3*/] = { -1076,003f, -1011,876f, 1,1503f };
	Local_252[16 /*3*/] = { -1035,184f, -1252,296f, 5,197f };
	Local_252[17 /*3*/] = { -1006,773f, -1106,055f, 1,1484f };
	Local_252[18 /*3*/] = { -1847,2f, -602,4301f, 10,4091f };
	Local_252[19 /*3*/] = { -597,1105f, -304,0766f, 33,9632f };
	Local_253[0 /*3*/] = { -272,7684f, 248,4368f, 89,1359f };
	Local_253[1 /*3*/] = { 56,3248f, 288,189f, 109,281f };
	Local_253[2 /*3*/] = { 415,2359f, 103,9472f, 99,8247f };
	Local_253[3 /*3*/] = { 394,9993f, -200,0683f, 58,3083f };
	Local_253[4 /*3*/] = { 253,857f, -378,6688f, 43,6252f };
	Local_253[5 /*3*/] = { 223,6173f, -50,8911f, 68,2267f };
	Local_253[6 /*3*/] = { 544,0235f, 202,5245f, 100,61f };
	Local_253[7 /*3*/] = { -264,7876f, -1062,839f, 24,8463f };
	Local_253[8 /*3*/] = { -234,3063f, -732,1405f, 32,5016f };
	Local_253[9 /*3*/] = { -84,3683f, 241,2898f, 99,4509f };
	Local_253[10 /*3*/] = { 346,413f, -960,6713f, 28,4297f };
	Local_254[0 /*3*/] = { 898,7972f, 56,0888f, 78,0298f };
	Local_254[1 /*3*/] = { 832,3909f, -191,5166f, 71,6695f };
	Local_254[2 /*3*/] = { 790,4477f, -734,7306f, 26,5794f };
	Local_255[0 /*3*/] = { 2590,337f, -293,4442f, 92,0786f };
	Local_255[1 /*3*/] = { 2531,404f, -600,4139f, 63,2007f };
	Local_255[2 /*3*/] = { 2604,217f, 375,1005f, 107,472f };
	Local_256[0 /*3*/] = { -3233,263f, 953,5733f, 12,2187f };
	Local_256[1 /*3*/] = { -3078,346f, 675,666f, 12,9159f };
	Local_256[2 /*3*/] = { -2647,83f, 1504,821f, 117,968f };
	Local_256[3 /*3*/] = { -2564,214f, 2318,03f, 32,2153f };
	Local_257[0 /*3*/] = { -1314,019f, 2483,44f, 22,774f };
	Local_257[1 /*3*/] = { -409,0888f, 1172,897f, 324,6412f };
	Local_257[2 /*3*/] = { -1506,186f, 1473,57f, 116,8286f };
	Local_257[3 /*3*/] = { -518,6162f, 1995,393f, 205,0397f };
	Local_257[4 /*3*/] = { -742,0004f, 2320,376f, 70,661f };
	Local_257[5 /*3*/] = { -1851,372f, -602,5151f, 10,4741f };
	Local_257[6 /*3*/] = { -1666,413f, -538,9609f, 34,2561f };
	Local_258[0 /*3*/] = { -139,8096f, 1872,378f, 197,166f };
	Local_258[1 /*3*/] = { 695,1385f, 2297,118f, 49,9406f };
	Local_258[2 /*3*/] = { 167,7863f, 782,6042f, 208,0805f };
	Local_259[0 /*3*/] = { 1498,546f, 774,8596f, 76,4493f };
	Local_259[1 /*3*/] = { 1309,908f, 1090,133f, 104,561f };
	Local_259[2 /*3*/] = { 1510,705f, 1712,529f, 109,2625f };
	Local_259[3 /*3*/] = { 1070,393f, 2038,015f, 52,5529f };
	Local_260[0 /*3*/] = { 2509,309f, 1601,622f, 30,0754f };
	Local_260[1 /*3*/] = { 2546,551f, 1971,305f, 19,0362f };
	Local_261[0 /*3*/] = { -2339,021f, 3424,616f, 28,7394f };
	Local_261[1 /*3*/] = { -2494,466f, 3644,748f, 12,9216f };
	Local_261[2 /*3*/] = { -2223,443f, 4335,251f, 48,4857f };
	Local_261[3 /*3*/] = { -2369,652f, 4033,362f, 27,9193f };
	Local_262[0 /*3*/] = { -1578,525f, 3005,025f, 32,3629f };
	Local_262[1 /*3*/] = { -1441,716f, 4224,607f, 49,0816f };
	Local_262[2 /*3*/] = { -637,3727f, 4014,45f, 124,2407f };
	Local_262[3 /*3*/] = { -1092,599f, 2696,029f, 18,9957f };
	Local_262[4 /*3*/] = { -482,845f, 2853,052f, 32,7909f };
	Local_262[5 /*3*/] = { -1280,543f, 2543,44f, 17,3096f };
	Local_262[6 /*3*/] = { -435,9443f, 3039,766f, 27,85744f };
	Local_263[0 /*3*/] = { 322,4791f, 2624,685f, 43,4903f };
	Local_263[1 /*3*/] = { -118,0555f, 2831,105f, 49,9236f };
	Local_263[2 /*3*/] = { 8,32642f, 3036,625f, 39,93201f };
	Local_263[3 /*3*/] = { 486,82f, 3094,723f, 39,68279f };
	Local_263[4 /*3*/] = { 355,6632f, 3465,564f, 34,46225f };
	Local_263[5 /*3*/] = { 73,93981f, 3597,899f, 38,72102f };
	Local_263[6 /*3*/] = { -223,5336f, 3914,409f, 36,4796f };
	Local_264[0 /*3*/] = { 914,0446f, 3641,2f, 31,4356f };
	Local_264[1 /*3*/] = { 1713,807f, 3786,299f, 33,6656f };
	Local_264[2 /*3*/] = { 1798,266f, 3773,496f, 32,6142f };
	Local_264[3 /*3*/] = { 2008,204f, 3771,954f, 31,1457f };
	Local_264[4 /*3*/] = { 1860,152f, 3675,656f, 32,669f };
	Local_264[5 /*3*/] = { 1974,862f, 3855,369f, 31,162f };
	Local_264[6 /*3*/] = { 1841,707f, 3799,654f, 32,219f };
	Local_264[7 /*3*/] = { 1775,659f, 3335,493f, 40,2247f };
	Local_265[0 /*3*/] = { 2506,683f, 4104,038f, 37,3903f };
	Local_265[1 /*3*/] = { 2902,443f, 4428,438f, 47,2892f };
	Local_265[2 /*3*/] = { 2338,391f, 3146,762f, 47,1288f };
	Local_265[3 /*3*/] = { 2756,396f, 3396,395f, 55,5796f };
	Local_265[4 /*3*/] = { 2560,313f, 2619,59f, 36,7532f };
	Local_266[0 /*3*/] = { -1499,354f, 4980,817f, 61,8513f };
	Local_266[1 /*3*/] = { -686,7758f, 5841,241f, 15,7987f };
	Local_266[2 /*3*/] = { -547,5048f, 5405,471f, 64,2441f };
	Local_266[3 /*3*/] = { -411,6347f, 6050,651f, 30,4916f };
	Local_266[4 /*3*/] = { -860,8704f, 5421,505f, 33,9464f };
	Local_267[0 /*3*/] = { 331,2503f, 6586,893f, 27,8962f };
	Local_267[1 /*3*/] = { -37,7542f, 6319,74f, 30,3761f };
	Local_267[2 /*3*/] = { -115,5213f, 6456,377f, 30,4546f };
	Local_267[3 /*3*/] = { -145,1629f, 6442,393f, 30,4404f };
	Local_267[4 /*3*/] = { -46,1561f, 6475,15f, 30,4923f };
	Local_267[5 /*3*/] = { 533,2067f, 6537,78f, 26,6048f };
	Local_268[0 /*3*/] = { 1592,815f, 6427,924f, 24,2329f };
	Local_268[1 /*3*/] = { 1664,341f, 4845,467f, 41,0121f };
	Local_268[2 /*3*/] = { 1705,225f, 4713,161f, 41,4366f };
	Local_268[3 /*3*/] = { 1731,809f, 6387,005f, 33,5953f };
	Local_268[4 /*3*/] = { 1082,483f, 6503,538f, 20,0265f };
	Local_268[5 /*3*/] = { 1996,321f, 5148,716f, 44,2356f };
	Local_269[0 /*3*/] = { 2172,52f, 4759,795f, 40,0044f };
	Local_269[1 /*3*/] = { 2451,021f, 4953,289f, 43,9633f };
	Local_269[2 /*3*/] = { 2245,155f, 5562,862f, 51,4367f };
	Local_269[3 /*3*/] = { 2456,187f, 4596,741f, 35,8278f };
	Local_269[4 /*3*/] = { 3336,815f, 5464,448f, 18,5259f };
	Local_269[5 /*3*/] = { 3491,209f, 4707,075f, 50,1144f };
}

void func_422()
{
	iLocal_537 = func_437();
	Local_272.f_145 = func_436(iLocal_537);
	func_435(1);
	func_202();
	func_434(&(Local_272.f_244));
	func_433(&Local_272);
	Local_272.f_411 = 9;
	if (!func_252(Global_113969.f_19100, 4))
	{
		func_248(&(Global_113969.f_19100), 4);
		unk_0xCCA6D8A84EE8C88A(func_12(), 1);
	}
	func_428(&Local_272);
	func_427(9);
	func_425(&Local_272);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	}
	Local_272.f_428 = func_424();
	func_423(&Local_272, 3, 6);
	Local_272.f_6 = 1,45f;
}

void func_423(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

int func_424()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_95(unk_0x4A8C381C258A124D());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

void func_425(var uParam0)
{
	switch (func_53(uParam0))
	{
		case 0:
			func_426(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_426(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_426(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_426(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_426(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_426(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_426(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_426(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_426(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_426(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_426(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_427(int iParam0)
{
	Global_113969.f_19100.f_39[iParam0]++;
}

void func_428(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_432(uParam0, 3);
			func_431(uParam0, 14);
			break;
		
		case 1:
			func_432(uParam0, 14);
			func_431(uParam0, 8);
			break;
		
		case 2:
			func_432(uParam0, 8);
			func_431(uParam0, 7);
			break;
		
		case 3:
			func_432(uParam0, 15);
			func_431(uParam0, 6);
			break;
		
		case 4:
			func_432(uParam0, 0);
			func_431(uParam0, 3);
			break;
		
		case 5:
			func_432(uParam0, 6);
			func_431(uParam0, 7);
			break;
		
		case 6:
			func_432(uParam0, 8);
			func_431(uParam0, 15);
			break;
		
		case 7:
			func_432(uParam0, 8);
			func_431(uParam0, 14);
			break;
		
		case 8:
			func_432(uParam0, 7);
			func_431(uParam0, 15);
			break;
		
		case 9:
			func_432(uParam0, unk_0xC5935DFB3F39785A(0, 17));
			iVar0 = func_430((uParam0->f_418.f_2 + unk_0xC5935DFB3F39785A(1, 17)), 0, 16);
			func_431(uParam0, iVar0);
			func_429(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_429(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_430(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_431(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_432(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_433(var uParam0)
{
	uParam0->f_2 = unk_0x4A8C381C258A124D();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_144() };
	uParam0->f_17 = { func_144() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_173(uParam0, 32, 0);
}

void func_434(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_95(unk_0x4A8C381C258A124D());
	if (iVar0 == 0)
	{
		func_255(uParam0, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_255(uParam0, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_255(uParam0, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_255(uParam0, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_255(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_435(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_113025, unk_0x1AF90EB93E0012D6(), 24);
		Global_113019 = 1;
	}
	else
	{
		StringCopy(&Global_113025, "NULL", 24);
		Global_113019 = 0;
	}
}

char* func_436(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_f_y_vinewood_04"):
			return "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
		
		case joaat("a_m_m_soucent_04"):
			return "A_M_M_SOUCENT_04_BLACK_MINI_01";
		
		case joaat("a_m_y_salton_01"):
			return "A_M_Y_SALTON_01_WHITE_MINI_02";
		
		case joaat("a_m_y_soucent_04"):
			return "A_M_Y_SOUCENT_04_BLACK_MINI_01";
		
		case joaat("a_m_y_vinewood_01"):
			return "A_M_Y_VINEWOOD_01_BLACK_MINI_01";
		
		default:
	}
	return "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
}

int func_437()
{
	switch (unk_0xC5935DFB3F39785A(0, 5))
	{
		case 0:
			return joaat("a_f_y_vinewood_04");
		
		case 1:
			return joaat("a_m_m_soucent_04");
		
		case 2:
			return joaat("a_m_y_salton_01");
		
		case 3:
			return joaat("a_m_y_soucent_04");
		
		case 4:
			return joaat("a_m_y_vinewood_01");
		
		default:
	}
	return joaat("a_f_y_vinewood_04");
}

void func_438()
{
	if (unk_0x261E3728EE56B3AC())
	{
		func_8(9);
	}
	unk_0xBBC29EBE6E1A48FA();
}

