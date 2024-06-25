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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	struct<3> Local_28 = { 0, 0, 0 } ;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<328> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 4;
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
	var uLocal_74 = 4;
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
	var uLocal_89 = 4;
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
	var uLocal_104 = 4;
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
	var uLocal_119 = 4;
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
	var uLocal_134 = 4;
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
	var uLocal_149 = 4;
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
	var uLocal_164 = 4;
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
	struct<3> Local_182 = { 0, 0, 0 } ;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	bool bLocal_188 = 0;
	bool bLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194[5] = { 0, 0, 0, 0, 0 };
	float fLocal_195 = 0f;
	float fLocal_196 = 0f;
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
	float fLocal_217 = 0f;
	var uLocal_218 = 0;
	float fLocal_219 = 0f;
	var uLocal_220 = 0;
	bool bLocal_221 = 0;
	var uLocal_222 = 35;
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
	var uLocal_538 = 50;
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
	var uLocal_642 = 40;
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
	var uLocal_1198 = 1;
	var uLocal_1199 = 0;
	var uLocal_1200 = 1;
	var uLocal_1201 = 1;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 1;
	var uLocal_1206 = 1;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 3;
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
	var uLocal_1257 = 4;
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
	var uLocal_1322 = 2;
	var uLocal_1323 = 0;
	var uLocal_1324 = 4;
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
	var uLocal_1390 = 4;
	var uLocal_1391 = 0;
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
	var uLocal_1461 = 12;
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
	var uLocal_1642 = 3;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	int iLocal_1646 = 0;
	var uLocal_1647 = 0;
	int iLocal_1648 = 0;
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
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	int iLocal_1712[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1713[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1714[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	int iLocal_1717 = 0;
	float fLocal_1718 = 0f;
	int iLocal_1719 = 0;
	int iLocal_1720 = 0;
	int iLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 16;
	var uLocal_1727 = 0;
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
	char* sLocal_1891 = NULL;
	float fLocal_1892 = 0f;
	float fLocal_1893 = 0f;
	bool bLocal_1894 = 0;
	bool bLocal_1895 = 0;
	struct<3> Local_1896 = { 0, 0, 0 } ;
	struct<3> Local_1897 = { 0, 0, 0 } ;
	struct<3> Local_1898 = { 0, 0, 0 } ;
	float fLocal_1899 = 0f;
	float fLocal_1900 = 0f;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = -1;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 1000;
	var uLocal_1911 = 1000;
	var uLocal_1912 = 0;
	char[] cLocal_1913[8] = 0;
	char* sLocal_1914 = NULL;
	bool bLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	bool bLocal_1925 = 0;
	int iLocal_1926 = 0;
	int iLocal_1927 = 0;
	struct<7> Local_1928 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	int iLocal_1934 = 0;
	var uLocal_1935 = 0;
	char* sLocal_1936 = NULL;
	char* sLocal_1937 = NULL;
	char* sLocal_1938 = NULL;
	struct<3> Local_1939 = { 0, 0, 0 } ;
	struct<3> Local_1940 = { 0, 0, 0 } ;
	int iLocal_1941 = 0;
	int iLocal_1942 = 0;
	int iLocal_1943 = 0;
	int iLocal_1944 = 0;
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	struct<7> Local_1949 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 1132396544;
	var uLocal_1954 = 1132396544;
	var uLocal_1955 = 1132396544;
	var uLocal_1956 = 0;
	var uLocal_1957 = -1082130432;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 8;
	var uLocal_1961 = 0;
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
	var uLocal_2017 = -1;
	var uLocal_2018 = 1092616192;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	int iLocal_2027 = 0;
	int iLocal_2028 = 0;
	bool bLocal_2029 = 0;
	bool bLocal_2030 = 0;
	var uLocal_2031 = 0;
	bool bLocal_2032 = 0;
	int iLocal_2033 = 0;
	struct<2863> Local_2034 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2035 = 1;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	struct<3> Local_2040 = { 0, 0, 0 } ;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_29 = -0,0375f;
	fLocal_30 = 0,17f;
	iLocal_35 = 1;
	iLocal_36 = 65;
	iLocal_37 = 49;
	iLocal_38 = 64;
	Local_41 = { 1691,228f, 3251,785f, 44,2574f };
	Local_42 = { 2,5652f, 0f, -4,1481f };
	Local_182 = { 500f, 500f, 500f };
	iLocal_183 = -1;
	iLocal_192 = 1;
	fLocal_195 = 0,008f;
	fLocal_196 = 0,013f;
	fLocal_217 = ((0,05f + 0,275f) - 0,01f);
	fLocal_219 = 0f;
	fLocal_1718 = -1f;
	iLocal_1719 = 1;
	fLocal_1892 = 0,2f;
	fLocal_1893 = 0,2f;
	fLocal_1900 = 0f;
	cLocal_1913 = "SPR_UI_FAILD";
	sLocal_1914 = "SPR_UI_FRETRY";
	sLocal_1936 = "CHECKPOINT_NORMAL";
	sLocal_1937 = "CHECKPOINT_MISSED";
	sLocal_1938 = "CHECKPOINT_PERFECT";
	Local_1939 = { 1694,74f, 3276,502f, 41,2796f };
	Local_1940 = { 8,79494f, 0,59893f, 154,8464f };
	bLocal_2029 = true;
	bLocal_2030 = true;
	bLocal_2032 = true;
	Local_2040 = { -1497,708f, -3449,576f, 7,3477f };
	if (unk_0x96CFB880BAC634CE(114))
	{
		func_618();
	}
	unk_0x925970A93719CADE(1);
	Local_1949.f_1 = 0;
	Local_1949.f_5 = 0;
	Local_1949.f_6 = 0;
	while (true)
	{
		func_617();
		switch (Local_1949.f_1)
		{
			case 0:
				if (!func_606())
				{
					Local_1949.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_1949.f_1 = 2;
				}
				break;
			
			case 2:
				func_618();
				break;
		}
		system::wait(0);
	}
}

int func_1()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
	}
	if (unk_0xFC8BFE4B41177C22(Local_43.f_1))
	{
		if (!unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
		{
			if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_43.f_1, 0))
			{
				if (unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
				{
					Local_43.f_1 = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
				}
			}
		}
	}
	else if (unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
	{
		Local_43.f_1 = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
	}
	else
	{
		Local_43.f_1 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2034.f_2861 != 0)
	{
		Local_2034.f_2862 = (Local_2034.f_2862 - 25);
		if (Local_2034.f_2862 <= 0)
		{
			unk_0xC2A5E7DCD1900AA1(Local_2034.f_2861);
			Local_2034.f_2861 = 0;
			bLocal_1915 = false;
		}
		else
		{
			if (bLocal_1915)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_603(func_604(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0xEDC9B904B870CE80(Local_2034.f_2861, uVar0, uVar1, uVar2, func_602(system::ceil((1,5f * IntToFloat(Local_2034.f_2862))), 255));
			unk_0xF7408C8F340BA88B(Local_2034.f_2861, uVar0, uVar1, uVar2, Local_2034.f_2862);
		}
	}
	func_601();
	unk_0xDD0315A8F8B31039("AMMUNATION");
	unk_0x66EFB3D6110055C4(0, 99, 1);
	unk_0x66EFB3D6110055C4(0, 100, 1);
	if (Local_1949.f_6 == 4)
	{
		unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
		unk_0xD7ABE01242C5B8E3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 10f);
		if (unk_0xD9F5E1FEFD1329E4(Local_43.f_1, 0))
		{
			if (unk_0x5B702A5D1F2635BE(Local_43.f_1))
			{
				unk_0xC9B695B7C0126DCC(Local_43.f_1);
			}
		}
	}
	switch (Local_1949.f_6)
	{
		case 0:
			unk_0x0F15249D24BC5ADA(0);
			Local_1949.f_0 = -1;
			Local_43.f_10 = 0;
			unk_0xA63572E348CC4CFB(1734,802f, 3224,105f, 41,3709f, 1762,067f, 3258,69f, 40,5188f, 0, 1);
			if (unk_0xFC8BFE4B41177C22(Local_43.f_1))
			{
				unk_0x0B74F181ADFC39BF(Local_43.f_1, 1);
				Local_2034.f_2859 = 0;
				Local_1949.f_6 = 3;
			}
			else
			{
				Local_1949.f_6 = 1;
			}
			break;
		
		case 1:
			Local_1949.f_6 = 18;
			break;
		
		case 2:
			if (unk_0xFC8BFE4B41177C22(Local_43.f_1))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 512);
				unk_0x0B74F181ADFC39BF(Local_43.f_1, 1);
				Local_2034.f_2859 = 0;
				Local_1949.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2034.f_0)
			{
			}
			else if ((unk_0x78411E34CF90EA8C(uLocal_1705) && unk_0xBC886554B5888A64(uLocal_1705)) && unk_0x9390801B06EE998F())
			{
				if (unk_0x78411E34CF90EA8C(Local_2034.f_2858))
				{
					unk_0x85E6A1E36B5E2E4D(Local_2034.f_2858, 0);
				}
				unk_0x21172E4DF035B893("MinigameTransitionOut");
				unk_0xDCAFFD08A08087EB("MinigameTransitionIn", 0, 1);
				Local_2034.f_2858 = unk_0x96A32328480B485C(26379945, Local_41, Local_42, 34,9705f, 1, 2);
				unk_0xEC81A0FB4911A2C2(0);
				unk_0x0A0A06C514052E80(false);
				unk_0xDCAFFD08A08087EB("MinigameTransitionOut", 0, 0);
				unk_0x1761457F86AD0EE2(uLocal_1705, Local_41.f_0, Local_41.f_1, (Local_41.f_2 + 1000f));
				unk_0x5E5CEC33463AD803(uLocal_1705, 90f, Local_42.f_1, Local_42.f_2, 2);
				unk_0xB56F35D8A770F80F(Local_2034.f_2858, uLocal_1705, 500, 1, 1);
				unk_0xBF3D28CA44F3BE2D(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				func_600(500);
				if (unk_0x78411E34CF90EA8C(Local_2034.f_2858))
				{
					unk_0x85E6A1E36B5E2E4D(Local_2034.f_2858, 0);
				}
				Local_2034.f_2858 = unk_0x96A32328480B485C(26379945, Local_41, Local_42, 34,9705f, 1, 2);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			}
			func_599(&uLocal_1929);
			func_598(1);
			unk_0xE3F88173F42C071B();
			Local_1949.f_6 = 4;
			break;
		
		case 4:
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
			{
				unk_0xC229299217554C78(Local_43.f_1, 1, 0, 0);
			}
			if (unk_0x761778199FE1211C())
			{
				unk_0x66EFB3D6110055C4(2, 199, 1);
			}
			unk_0x66EFB3D6110055C4(2, 200, 1);
			unk_0x37B894853929BF1A(0);
			Local_2034.f_2 = Local_2034.f_0;
			if (Local_2034.f_0)
			{
				if (unk_0xFC8BFE4B41177C22(Local_2034.f_358[0 /*189*/].f_9))
				{
					unk_0x0B74F181ADFC39BF(Local_2034.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_1649 = 0;
				Local_2034.f_0 = 0;
				func_567();
				Local_1949.f_6 = 8;
			}
			else if (Local_2034.f_2859)
			{
				if (unk_0x99DFE4CAC19D527F())
				{
					if ((Local_2034.f_2859 && unk_0x2645430E708CBFAC(2, 202)) && system::timera() > 500)
					{
						unk_0x85E83A170EF61477(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2034.f_2859 = 0;
						Local_2034.f_2860 = 1;
						func_566(&(Local_43.f_119));
						system::settimera(0);
					}
					if (!Local_2034.f_2860 && func_565(&uLocal_1209))
					{
						Local_2034.f_2860 = 1;
						func_563(Local_2034.f_2860);
					}
					func_496(&(Local_43.f_118), Global_112999, &(Local_43.f_24[Global_112999 /*8*/]));
				}
				else if (func_485(&iLocal_1646, 0))
				{
					Local_2034.f_2859 = 0;
					iLocal_1646 = 0;
					func_566(&(Local_43.f_119));
					system::settimera(0);
				}
			}
			else
			{
				if ((func_446(&Local_2034, 0) && !iLocal_190) && !bLocal_189)
				{
					func_566(&(Local_43.f_119));
				}
				if (iLocal_193 && unk_0x99DFE4CAC19D527F())
				{
					func_566(&(Local_43.f_119));
					iLocal_193 = 0;
				}
				if ((((!Local_2034.f_2859 && !iLocal_190) && !bLocal_189) && (iLocal_192 || !unk_0x99DFE4CAC19D527F())) && (unk_0x2645430E708CBFAC(2, 211) || unk_0x61C3701AD6D746B2(2, 211)))
				{
					Local_2034.f_2859 = 1;
					unk_0x85E83A170EF61477(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_445(&uLocal_1209);
					Local_2034.f_2860 = func_565(&uLocal_1209);
					func_563(Local_2034.f_2860);
					system::settimera(0);
				}
				if (func_386(&uLocal_2035, &(Local_2034.f_1)))
				{
					iLocal_1649 = 0;
					if (Local_43.f_10 != -1)
					{
						func_378();
						func_567();
						if (unk_0x65FFA94B82A71741(Local_43.f_1, Local_1939, 5f, 5f, 5f, 0, 1, 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
							{
								func_377(&uLocal_2037);
								Local_1949.f_6 = 8;
							}
						}
						else if (!unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
						{
							Local_1949.f_6 = 8;
						}
					}
					else
					{
						Local_1949.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			unk_0x43AE50D2A33F6E2A();
			if (unk_0xD9F5E1FEFD1329E4(Local_43.f_1, 0))
			{
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				Local_1949.f_6 = 18;
			}
			else
			{
				if (unk_0xFC8BFE4B41177C22(Local_2034.f_358[0 /*189*/].f_9))
				{
					unk_0x5D7CD709B34C90F0(Local_2034.f_358[0 /*189*/].f_9, 0);
				}
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_1939, 1, 0, 0, 1);
				unk_0xCF39804E8C88080E(unk_0x4A8C381C258A124D(), Local_1940, 2, 1);
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x1DE99C193C7EC64B(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1084227584);
				}
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				if (unk_0xFC8BFE4B41177C22(Local_2034.f_358[0 /*189*/].f_9))
				{
					if (!unk_0x787F8EE1F6FBDC6D())
					{
						unk_0xAC48F8E2BF2BEBF7(Local_1939, unk_0x90D0E0397D3F7690(unk_0x4A8C381C258A124D()), 500f, 0);
					}
					if (unk_0x9E2D35FA908F57B4())
					{
						unk_0x6981C3213B841071();
						Local_1949.f_6 = 18;
					}
				}
				else
				{
					Local_1949.f_6 = 18;
				}
			}
			break;
		
		case 8:
			unk_0x9D0B099EEAD74270();
			if (Local_43.f_10 == 0)
			{
				unk_0x1D2DAF2A41FFC4A0(Local_43.f_1);
				if (func_376(iLocal_1926, 16))
				{
					func_374(&iLocal_1926, 16);
				}
				unk_0xC229299217554C78(Local_43.f_1, 1, 1, 0);
				unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_43.f_1, -1);
				unk_0xF698038C13845696(Local_43.f_1);
				func_373();
				uLocal_1705 = unk_0x96A32328480B485C(26379945, 1702,487f, 3279,545f, 41,9968f, -2,9399f, 0f, 110,4428f, 45,0218f, 1, 2);
				unk_0x4CBC5D1BC117616B(Local_2034.f_2858, 0);
				Local_1949.f_6 = 9;
			}
			else if (func_372(1000))
			{
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xF698038C13845696(Local_43.f_1);
				unk_0x1D2DAF2A41FFC4A0(Local_43.f_1);
				if (unk_0x15CCE8886267624F())
				{
					func_373();
					Local_1949.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((unk_0xBC886554B5888A64(uLocal_1705) && unk_0x323C4A67159DAD02(uLocal_1705)) || (unk_0xBC886554B5888A64(Local_2034.f_2858) && unk_0x323C4A67159DAD02(Local_2034.f_2858))))
			{
				unk_0xC289B882CEF4CAC9(1, 0, 3, 0);
				func_373();
				Local_1949.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2034.f_25 = 0;
			Local_1949.f_6 = 11;
			break;
		
		case 11:
			if (!func_358(&Local_2034))
			{
				func_598(1);
				if (Local_2034.f_2)
				{
					unk_0xAC48F8E2BF2BEBF7(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0x90D0E0397D3F7690(unk_0x4A8C381C258A124D()), 500f, 0);
				}
				if (Local_43.f_10 == 0)
				{
					func_357("SPR_TAXI_GATE", 10000, 1);
					if (!func_376(iLocal_1926, 16))
					{
						func_349(&Local_2034, 0, 1);
						func_348(&iLocal_1926, 16);
					}
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						unk_0x5D7CD709B34C90F0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0);
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
					}
					unk_0x747786364137DC63(1);
					unk_0x37B894853929BF1A(1);
					Local_1949.f_6 = 13;
				}
				else
				{
					Local_1949.f_6 = 13;
				}
				Local_2034.f_2 = 0;
			}
			break;
		
		case 13:
			if (!unk_0x787F8EE1F6FBDC6D() || unk_0x9E2D35FA908F57B4())
			{
				if (unk_0x787F8EE1F6FBDC6D())
				{
					unk_0x6981C3213B841071();
				}
				unk_0xEC81A0FB4911A2C2(0);
				unk_0x0A0A06C514052E80(true);
				unk_0x5D7CD709B34C90F0(Local_2034.f_358[0 /*189*/].f_9, 0);
				func_373();
				if (func_376(iLocal_1926, 16))
				{
					func_374(&iLocal_1926, 16);
				}
				if (Local_43.f_10 == 0)
				{
					if (func_600(500))
					{
						Local_2034.f_26 = 0;
						Local_1949.f_6 = 14;
					}
				}
				else
				{
					func_347(&Local_2034);
					unk_0x64BB72494B9DF6DC(0f);
					unk_0xD815D4BD1AE9E85A(0f, 1065353216);
					if (func_600(500))
					{
						Local_2034.f_26 = 0;
						Local_1949.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_1949.f_0 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2034))
			{
				return 1;
			}
			iLocal_1649 = 3;
			func_23();
			func_13();
			if (!Local_2034.f_0)
			{
				func_10(&(Local_2034.f_6));
				func_9(&(Local_2034.f_358[0 /*189*/]), Local_43.f_3, Local_43.f_6, 0f);
				if (unk_0xFC8BFE4B41177C22(Local_2034.f_358[0 /*189*/].f_9))
				{
					unk_0x1DE99C193C7EC64B(Local_2034.f_358[0 /*189*/].f_9, 1084227584);
				}
				if (unk_0xAC48F8E2BF2BEBF7(Local_41, func_8(Local_42), 4500f, 0))
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
					while (!unk_0x9E2D35FA908F57B4() && func_5(&(Local_2034.f_6)) < 20f)
					{
						system::wait(0);
					}
					unk_0x6981C3213B841071();
					unk_0x2D8D239B3F1D13F9(Local_41, func_8(Local_42));
					func_4(&(Local_2034.f_6));
					Local_1949.f_6 = 15;
				}
				else if (func_2(&(Local_2034.f_6), 20f))
				{
					func_4(&(Local_2034.f_6));
					Local_1949.f_6 = 15;
				}
			}
			else
			{
				Local_1949.f_6 = 3;
			}
			break;
		
		case 15:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x0B74F181ADFC39BF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1);
			}
			Local_2034.f_2859 = 0;
			Local_1949.f_6 = 3;
			break;
		
		case 18:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x0B74F181ADFC39BF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1);
			}
			func_446(&Local_2034, 1);
			if (unk_0x15CCE8886267624F())
			{
				func_600(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2(var uParam0, float fParam1)
{
	if (func_3(uParam0))
	{
		if (func_5(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_5(var uParam0)
{
	if (func_3(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
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

bool func_7(var uParam0)
{
	return BitTest(*uParam0, 2);
}

Vector3 func_8(struct<3> Param0)
{
	return (-system::sin(Param0.f_2) * system::cos(Param0.f_0)), (system::cos(Param0.f_2) * system::cos(Param0.f_0)), system::sin(Param0.f_0);
}

void func_9(var uParam0, struct<3> Param1, var uParam2, float fParam3)
{
	unk_0xB2BD5837A8D3CEDA(uParam0->f_9, Param1, 1, 0, 0, 1);
	unk_0x5C96CEA06531AB03(uParam0->f_9, uParam2);
	unk_0x93C337B66C95C99B(uParam0->f_9, fParam3);
}

void func_10(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_377(uParam0);
	}
	else
	{
		func_11(uParam0);
	}
}

void func_11(var uParam0)
{
	func_12(uParam0, 0f);
}

void func_12(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_6(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, true);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_113969.f_19046.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_113969.f_19046.f_6[4] > 0f)
		{
			if (Global_113969.f_19046.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)
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
		func_20((891 + iParam0), 1, -1);
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
		func_19(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_18() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()
{
	if (func_17(0))
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

int func_17(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_18()
{
	return Global_32948;
}

int func_19(int iParam0, int iParam1)
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

void func_20(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_21()
{
	return Global_1574926;
}

float func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()
{
	iLocal_1941 = 0;
	iLocal_1942 = 0;
	iLocal_1943 = 0;
	iLocal_1944 = 0;
	iLocal_1945 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
}

int func_24(var uParam0)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_374(&iLocal_1926, 4);
			unk_0x4EB223432F8FA0A0(2);
			func_346(uParam0);
			uParam0->f_17 = func_345();
			if (Local_43.f_10 == 0)
			{
				if (!func_376(iLocal_1926, 16))
				{
					func_349(uParam0, 0, 1);
					func_349(uParam0, 1, 0);
					func_348(&iLocal_1926, 16);
				}
			}
			else
			{
				func_347(uParam0);
				if (!func_376(iLocal_1926, 16))
				{
					func_349(uParam0, 0, 1);
					func_349(uParam0, 1, 0);
					func_348(&iLocal_1926, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_1934 = 0;
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			unk_0x4EB223432F8FA0A0(2);
			if (Local_43.f_10 == 0)
			{
				if (func_376(iLocal_1926, 16))
				{
					func_374(&iLocal_1926, 16);
				}
				func_343(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_347(uParam0);
				if (!func_318(&(uParam0->f_14)))
				{
					if (!unk_0xE976C85F4B1CF1A2())
					{
						unk_0xE37AF9002E782BA0(0, 1, 3000, 1, 0, 0);
					}
					if (func_376(iLocal_1926, 16))
					{
						func_374(&iLocal_1926, 16);
					}
					unk_0x747786364137DC63(1);
					func_343(uParam0);
					if (Local_43.f_10 == 0 && (Global_113969.f_19046.f_6[0] > Local_43.f_112[0] || Global_113969.f_19046.f_6[0] == 0f))
					{
						func_317("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_376(iLocal_1926, 1))
			{
				system::settimera(0);
				func_278(uParam0);
				func_277(&(Local_43.f_119), 0, 0, 1, 1);
				func_276(&(Local_43.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_275(&(Local_43.f_119), 1);
				func_348(&iLocal_1926, 1);
			}
			if (unk_0x4C705AAF75363287())
			{
				unk_0x428C32CC68809A35(1);
			}
			if (func_274("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x406CBCEA35499884();
			}
			if (unk_0x4C705AAF75363287())
			{
				unk_0x428C32CC68809A35(1);
			}
			if (func_274("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x406CBCEA35499884();
			}
			system::settimera(0);
			func_272();
			func_271(0);
			unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x66EFB3D6110055C4(0, 75, 1);
			func_270(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			unk_0x66EFB3D6110055C4(0, 75, 1);
			func_268();
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				if (!unk_0xCB5CAFF0A4A8B74B(uParam0->f_358[0 /*189*/].f_9) && unk_0x78411E34CF90EA8C(uLocal_1706))
				{
					unk_0x9DDBEF363FADFA4C(uLocal_1706, 2);
					unk_0x4285E11B28063EE0(uParam0->f_358[0 /*189*/].f_9, 0, 0);
					unk_0x5D7CD709B34C90F0(uParam0->f_358[0 /*189*/].f_9, 1);
					func_267();
				}
			}
			if (!func_253(uParam0, bLocal_2029, bLocal_2030))
			{
				func_267();
				func_252(0);
				unk_0x428C32CC68809A35(1);
				if (func_376(iLocal_1926, 1))
				{
					func_374(&iLocal_1926, 1);
				}
				func_251(0, 0);
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				}
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0x0F15249D24BC5ADA(0);
				iLocal_2033 = unk_0xCA369FBC0DE29517();
				unk_0xBF3D28CA44F3BE2D(iLocal_2033, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&uLocal_1916);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				unk_0xB2BD5837A8D3CEDA(uParam0->f_358[0 /*189*/].f_9, Local_1939, 1, 0, 0, 1);
				unk_0xCF39804E8C88080E(uParam0->f_358[0 /*189*/].f_9, Local_1940, 2, 1);
				unk_0x4285E11B28063EE0(uParam0->f_358[0 /*189*/].f_9, 1, 0);
				unk_0x66EFB3D6110055C4(0, 75, 1);
				unk_0x1DE99C193C7EC64B(uParam0->f_358[0 /*189*/].f_9, 1084227584);
				unk_0x935364B4448CD584(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2028 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			unk_0x6D16B99FEB0AFFF1(uLocal_1929, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_376(iLocal_1926, 16))
			{
				func_349(uParam0, 0, 1);
				func_349(uParam0, 1, 0);
				func_348(&iLocal_1926, 16);
				func_271(1);
				func_250(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_216(uParam0);
				func_214(uParam0);
			}
			else
			{
				func_211(&uLocal_1901, 0);
				func_267();
				unk_0x0A0A06C514052E80(false);
			}
			if (!func_41(uParam0, Local_43.f_0))
			{
				unk_0x86A2BC11844DEEB3("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			unk_0x66EFB3D6110055C4(0, 75, 1);
			func_27(&(uParam0->f_17));
			func_267();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_376(uLocal_1715, iVar0))
		{
			func_374(&uLocal_1715, iVar0);
		}
		if (func_376(uLocal_1716, iVar0))
		{
			func_374(&uLocal_1716, iVar0);
		}
		if (unk_0xFC8BFE4B41177C22(uLocal_1713[iVar0]))
		{
			unk_0x8C1F7D7A31B2A38E(&(uLocal_1713[iVar0]));
		}
		if (unk_0xFC8BFE4B41177C22(uLocal_1714[iVar0]))
		{
			unk_0x734A9F4537A31459(&(uLocal_1714[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_1712);
	iVar0 = 0;
	while (iVar0 < iLocal_1712)
	{
		iLocal_1712[iVar0] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x55098D9E9AD58806((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0xD314260005F064BF(uParam0);
		*uParam0 = 0;
	}
}

void func_28(var uParam0)
{
	int iVar0;
	
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	unk_0x935364B4448CD584(uParam0->f_358[0 /*189*/].f_9, 1);
	unk_0x66EFB3D6110055C4(0, 75, 1);
	func_39(uParam0);
	if (Local_43.f_0 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_30(&(uParam0->f_358[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			func_29(&(uParam0->f_358[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0))
	{
		if (Local_43.f_0 != 0)
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
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[iVar0 /*189*/].f_8, 0))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == unk_0x4A8C381C258A124D())
			{
				iVar1 = func_37(Local_43.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0 /*189*/].f_12)
				{
					func_36(Local_43.f_10, uParam0->f_358[iVar0 /*189*/].f_12);
				}
				fVar2 = func_35(Local_43.f_10);
				func_34(Local_43.f_10, system::to_float(system::ceil(uParam0->f_358[0 /*189*/].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0 /*189*/].f_13)
				{
					func_33(Local_43.f_10, system::to_float(system::ceil(uParam0->f_358[0 /*189*/].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)
{
	Global_113969.f_19046.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_43.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_113969.f_19046.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_113969.f_19046[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_113969.f_19046[iParam0];
	return iVar0;
}

void func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_13 > uParam0->f_358[iVar1 /*189*/].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_358[iVar0 /*189*/].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar0 /*189*/].f_11 != uParam0->f_12)
		{
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * unk_0xD2AA6F822D3A55D2(0,5f, 2,5f)));
		}
		iVar0++;
	}
}

void func_40(var uParam0)
{
	if (func_3(uParam0))
	{
		if (!func_7(uParam0))
		{
			uParam0->f_2 = (func_6(BitTest(*uParam0, 4)) - uParam0->f_1);
			unk_0x0B0C9A0F9AAEB7F0(uParam0, 2);
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
	
	if (Local_43.f_10 == 0)
	{
		if (uParam0->f_358[0 /*189*/].f_11 == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_376(iLocal_1927, 131072))
			{
				unk_0x3CA4868519920C8D(uParam0->f_358[0 /*189*/].f_9, 4);
				func_374(&iLocal_1927, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !func_376(iLocal_1927, 131072))
		{
			func_317("SPR_INFO_BON", 10000);
			func_348(&iLocal_1927, 131072);
			if (func_376(iLocal_1927, 262144))
			{
				func_374(&iLocal_1927, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !func_376(iLocal_1927, 262144))
		{
			func_317("SPR_INFO_RESET", 10000);
			func_348(&iLocal_1927, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_193(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	unk_0x66EFB3D6110055C4(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar5 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == unk_0x4A8C381C258A124D())
			{
				bVar5 = true;
			}
			iVar4 = uParam0->f_358[iVar1 /*189*/].f_11;
			if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
			{
				Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_27[iVar4 /*10*/] };
			}
			if (iVar4 < (uParam0->f_12 - 1))
			{
				Var3 = { uParam0->f_27[iVar4 + 1 /*10*/] };
			}
			else
			{
				Var3 = { Var2 };
			}
			if (iVar4 != uParam0->f_12)
			{
				uParam0->f_358[iVar1 /*189*/].f_13 = (fVar0 - uParam0->f_358[iVar1 /*189*/].f_15);
				if (uParam0->f_358[iVar1 /*189*/].f_13 < 0f)
				{
					uParam0->f_358[iVar1 /*189*/].f_13 = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_358[iVar1 /*189*/]), bVar5))
			{
				if ((bVar5 && uParam0->f_1) && (Local_43.f_10 != 0 || uParam0->f_358[0 /*189*/].f_11 > 0))
				{
					if (!func_3(&uLocal_2021))
					{
						func_377(&uLocal_2021);
					}
					if (func_5(&uLocal_2024) >= 6,5f)
					{
						if (!unk_0x6D05C5731A838CB3(2, 222))
						{
							func_11(&uLocal_2021);
						}
						else if (func_5(&uLocal_2021) >= 1,5f)
						{
							uParam0->f_1 = 0;
							func_374(&iLocal_1927, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (unk_0x6D05C5731A838CB3(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6,5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_1927, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_1927, 32768, 0);
						}
					}
				}
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_43.f_0 == 0 && func_3(&uLocal_1922))
					{
						return 1;
					}
					if (bVar5)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							func_377(&(uParam0->f_14));
						}
						if (func_376(iLocal_1926, 8))
						{
							func_349(uParam0, iVar4, 1);
							if (iVar4 < (uParam0->f_12 - 1))
							{
								func_349(uParam0, iVar4 + 1, 0);
							}
							func_374(&iLocal_1926, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_11 = func_93(uParam0, &Var2, &Var3, uParam0->f_358[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var3);
					}
					if (uParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_358[iVar1 /*189*/]), bVar5, uParam0->f_11);
						}
						bLocal_1915 = func_84(uParam0->f_11);
						uParam0->f_358[iVar1 /*189*/].f_11++;
						iVar4 = uParam0->f_358[iVar1 /*189*/].f_11;
						if (iVar4 >= (uParam0->f_12 - 1))
						{
							Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_27[iVar4 /*10*/] };
						}
						if (bVar5)
						{
							func_78(uParam0, (iVar4 - 1));
							if (iVar4 == uParam0->f_12)
							{
								iVar6 = 0;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_358[0 /*189*/].f_13 > 0f)
									{
										if (uParam0->f_358[0 /*189*/].f_13 <= Local_43.f_106[Local_43.f_10])
										{
											iVar6 = 1;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_43.f_112[Local_43.f_10] - Local_43.f_106[Local_43.f_10]) / 2f) + Local_43.f_106[Local_43.f_10]))
										{
											iVar6 = 2;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= Local_43.f_112[Local_43.f_10])
										{
											iVar6 = 3;
										}
									}
								}
								if (iVar6 == 0)
								{
								}
								if (iVar6 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_358[iVar1 /*189*/].f_11 = (uParam0->f_358[iVar1 /*189*/].f_11 - 1);
									unk_0x406CBCEA35499884();
									sLocal_1914 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_349(uParam0, iVar4, 1);
								if (iVar4 < (uParam0->f_12 - 1))
								{
									func_349(uParam0, iVar4 + 1, 0);
								}
							}
							if (uParam0->f_358[iVar1 /*189*/].f_14 == 0f)
							{
								if (func_3(&(uParam0->f_14)))
								{
									func_4(&(uParam0->f_14));
								}
							}
							if (uParam0->f_12 > 0)
							{
								if (uParam0->f_10 > 0f)
								{
									if (iVar4 == system::round((IntToFloat(uParam0->f_12) / 2f)))
									{
										uParam0->f_358[iVar1 /*189*/].f_14 = 0f;
										func_11(&(uParam0->f_14));
									}
								}
							}
						}
						else if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
						{
							if (Local_43.f_0 != 2)
							{
								if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[iVar1 /*189*/].f_8, 0))
								{
									func_29(&(uParam0->f_358[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_43.f_0 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar7, "Offroad_", 16);
								StringIntConCat(&cVar7, Local_43.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar7, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2032)
									{
										if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_358[iVar1 /*189*/].f_9, 0))
										{
											if (unk_0x9B5C1660CCDF7189(uParam0->f_358[iVar1 /*189*/].f_8, joaat("script_task_vehicle_follow_waypoint_recording")) == 1)
											{
											}
											else
											{
												unk_0x43E9B2BD3668B432(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar7, 262144, 0, 8, -1, unk_0x66C1D6E6DBF7AC9B(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_43.f_0 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
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
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &uLocal_2031);
		func_64(uParam0, &uLocal_2031);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0 /*189*/].f_23 != 0)
		{
			if (Local_43.f_10 == 0)
			{
				if (uParam0->f_358[0 /*189*/].f_11 > 0)
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
	return 1;
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
	
	if (unk_0xBE259DBA45F2996E())
	{
		unk_0x37B894853929BF1A(1);
	}
	if (!func_3(&uLocal_1722))
	{
		iLocal_1720 = 0;
		iLocal_1721 = 0;
		func_377(&uLocal_1722);
	}
	if (system::ceil((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_1721)
	{
		iLocal_1720 = (system::ceil((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_1721);
		iLocal_1721 = system::ceil((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		func_11(&uLocal_1722);
	}
	iVar0 = (system::floor((func_5(&(uParam0->f_3)) * 100f)) * 10 - system::ceil((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&uLocal_1722) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_1720;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = system::floor((Global_113969.f_19046.f_6[Local_43.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_43.f_106[Local_43.f_10] * 1000f))
	{
		iVar3 = system::floor((Local_43.f_106[Local_43.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_43.f_112[Local_43.f_10] - Local_43.f_106[Local_43.f_10]) / 2f) + Local_43.f_106[Local_43.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = system::floor(((((Local_43.f_112[Local_43.f_10] - Local_43.f_106[Local_43.f_10]) / 2f) + Local_43.f_106[Local_43.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_43.f_112[Local_43.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = system::floor((Local_43.f_112[Local_43.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
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
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar7 = 4;
	func_44(iParam0, &Var6, iParam8, iVar7, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_45(7, bVar0);
		Global_1670224.f_4714[bVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[bVar0] = iParam2;
		Global_1670224.f_4714.f_216[bVar0] = iParam3;
		Global_1670224.f_4714.f_183[bVar0] = uParam4;
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

void func_45(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), bParam1);
}

int func_46(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_45(5, bVar0);
		Global_1670224.f_3749[bVar0] = iParam0;
		Global_1670224.f_3749.f_172[bVar0] = uParam1;
		StringCopy(&(Global_1670224.f_3749.f_11[bVar0 /*16*/]), sParam2, 64);
		Global_1670224.f_3749.f_194[bVar0] = uParam3;
		Global_1670224.f_3749.f_183[bVar0] = uParam4;
		Global_1670224.f_3749.f_216[bVar0] = iParam5;
		Global_1670224.f_3749.f_227[bVar0] = iParam6;
		Global_1670224.f_3749.f_270[bVar0] = iParam7;
		Global_1670224.f_3749.f_281[bVar0] = iParam8;
		Global_1670224.f_3749.f_292[bVar0] = iParam9;
		Global_1670224.f_3749.f_303[bVar0] = iParam10;
		Global_1670224.f_3749.f_314[bVar0] = iParam11;
		Global_1670224.f_3749.f_325[bVar0] = iParam12;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	bool bVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_45(3, bVar0);
		Global_1670224.f_2872[bVar0] = iParam0;
		StringCopy(&(Global_1670224.f_2872.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_2872.f_183[bVar0] = uParam3;
		Global_1670224.f_2872.f_172[bVar0] = uParam2;
		Global_1670224.f_2872.f_205[bVar0] = iParam4;
		Global_1670224.f_2872.f_216[bVar0] = iParam5;
		StringCopy(&(Global_1670224.f_2872.f_259[bVar0 /*16*/]), sParam6, 64);
		Global_1670224.f_2872.f_420[bVar0] = iParam7;
		Global_1670224.f_2872.f_453[bVar0] = iParam8;
		Global_1670224.f_2872.f_431[bVar0] = iParam9;
		Global_1670224.f_2872.f_442[bVar0] = iParam10;
		Global_1670224.f_2872.f_464[bVar0] = iParam11;
		Global_1670224.f_2872.f_475[bVar0] = iParam12;
		Global_1670224.f_2872.f_486[bVar0] = iParam13;
		Global_1670224.f_2872.f_497[bVar0] = iParam14;
		Global_1670224.f_2872.f_508[bVar0] = iParam15;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_45(0, bVar0);
		Global_1670224.f_1177[bVar0] = iParam0;
		Global_1670224.f_1177.f_11[bVar0] = uParam1;
		StringCopy(&(Global_1670224.f_1177.f_22[bVar0 /*16*/]), sParam2, 64);
		Global_1670224.f_1177.f_194[bVar0] = uParam3;
		Global_1670224.f_1177.f_183[bVar0] = uParam4;
		Global_1670224.f_1177.f_227[bVar0] = iParam5;
		Global_1670224.f_1177.f_238[bVar0 /*3*/] = fParam6;
		Global_1670224.f_1177.f_238[bVar0 /*3*/].f_1 = fParam7;
		Global_1670224.f_1177.f_269[bVar0] = iParam8;
		Global_1670224.f_1177.f_280[bVar0] = iParam9;
		Global_1670224.f_1177.f_323[bVar0] = iParam10;
		Global_1670224.f_1177.f_334[bVar0] = iParam11;
		Global_1670224.f_1177.f_345[bVar0] = iParam12;
		Global_1670224.f_1177.f_356[bVar0] = iParam13;
		Global_1670224.f_1172 = 1;
		Global_1670224.f_1177.f_367[bVar0] = iParam14;
		Global_1670224.f_1177.f_378[bVar0] = iParam15;
		Global_1670224.f_1177.f_389[bVar0] = iParam16;
		Global_1670224.f_1177.f_400[bVar0] = iParam17;
		Global_1670224.f_1177.f_411[bVar0] = iParam18;
		Global_1670224.f_1177.f_422[bVar0] = iParam19;
		Global_1670224.f_1177.f_433[bVar0] = iParam20;
		Global_1670224.f_1177.f_444[bVar0] = iParam21;
		Global_1670224.f_1177.f_455[bVar0] = iParam22;
		Global_1670224.f_1177.f_466[bVar0] = iParam23;
		Global_1670224.f_1177.f_477[bVar0] = iParam24;
		Global_1670224.f_1177.f_205[bVar0] = iParam25;
		Global_1670224.f_1177.f_216[bVar0] = iParam39;
		Global_1670224.f_1177.f_488[bVar0] = iParam26;
		Global_1670224.f_1177.f_499[bVar0] = iParam27;
		Global_1670224.f_1177.f_510[bVar0] = iParam28;
		Global_1670224.f_1177.f_521[bVar0] = iParam29;
		Global_1670224.f_1177.f_532[bVar0] = iParam30;
		Global_1670224.f_1177.f_543[bVar0] = iParam31;
		Global_1670224.f_1177.f_554[bVar0] = iParam32;
		Global_1670224.f_1177.f_565[bVar0] = iParam33;
		Global_1670224.f_1177.f_576[bVar0] = iParam34;
		Global_1670224.f_1177.f_587[bVar0] = iParam35;
		Global_1670224.f_1177.f_598[bVar0] = iParam36;
		Global_1670224.f_1177.f_609[bVar0] = iParam37;
		Global_1670224.f_1177.f_620[bVar0] = iParam38;
	}
}

int func_50(char[4] cParam0)
{
	if (unk_0xFF692AB7350A74D7(cParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(cParam0, "") || unk_0x1B79E937E91F40C3(cParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(6, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_45(6, bVar0);
		Global_1670224.f_4085[bVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4085.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4085.f_183[bVar0] = uParam3;
		Global_1670224.f_4085.f_172[bVar0] = uParam2;
		Global_1670224.f_4085.f_260[bVar0] = iParam4;
		Global_1670224.f_4085.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1670224.f_4085.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1670224.f_4085.f_443[bVar0] = iParam7;
		Global_1670224.f_4085.f_454[bVar0] = fParam8;
		Global_1670224.f_4085.f_497[bVar0] = iParam9;
		Global_1670224.f_4085.f_508[bVar0] = iParam10;
		Global_1670224.f_4085.f_205[bVar0] = iParam11;
		Global_1670224.f_4085.f_216[bVar0] = iParam12;
		Global_1670224.f_4085.f_227[bVar0] = iParam13;
		Global_1670224.f_4085.f_238[bVar0] = iParam14;
		Global_1670224.f_4085.f_249[bVar0] = iParam15;
		Global_1670224.f_4085.f_519[bVar0] = iParam16;
		Global_1670224.f_4085.f_530[bVar0] = iParam17;
		Global_1670224.f_4085.f_541[bVar0] = iParam18;
		Global_1670224.f_4085.f_552[bVar0] = iParam19;
		Global_1670224.f_4085.f_563[bVar0] = iParam20;
		Global_1670224.f_4085.f_574[bVar0] = iParam21;
		Global_1670224.f_4085.f_585[bVar0] = iParam22;
		Global_1670224.f_4085.f_596[bVar0] = iParam23;
		Global_1670224.f_4085.f_607[bVar0] = iParam24;
		Global_1670224.f_4085.f_194[bVar0] = iParam25;
		Global_1670224.f_4085.f_618[bVar0] = iParam26;
		if (iParam15 == 5 && func_53())
		{
			Global_1670224.f_1172 = 1;
		}
		if (unk_0x761778199FE1211C())
		{
			iVar2 = 0;
			unk_0x21564F65F997D833(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1670224.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1670224.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1670224.f_1172 = 1;
			}
			if (func_52())
			{
				Global_1670224.f_1176 = 1;
			}
		}
	}
}

int func_52()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x761778199FE1211C())
	{
		unk_0x21564F65F997D833(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	if (((unk_0x8608526719A575EE() == 8 || unk_0x8608526719A575EE() == 9) || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 12)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return iLocal_1719;
}

void func_55()
{
	Global_1670224.f_1172 = 1;
}

void func_56(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()
{
	if (Local_43.f_0 == 0)
	{
		unk_0xA3EA82ACD0C97C3F(0, 0, -1);
		unk_0xA3EA82ACD0C97C3F(1, 0, -1);
		unk_0xA3EA82ACD0C97C3F(2, 0, -1);
		unk_0xA3EA82ACD0C97C3F(3, 0, -1);
	}
}

void func_58(var uParam0)
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0xDF93B3CFAC96698F(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&uLocal_1919))
			{
				func_10(&uLocal_1919);
			}
			else if (func_5(&uLocal_1919) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_1927, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (unk_0xC450B06E5AAA0985(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						unk_0xF55F62DA99DB0C2F(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (unk_0xC450B06E5AAA0985(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						unk_0xF55F62DA99DB0C2F(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&uLocal_1919);
				func_11(&uLocal_1916);
				uParam0->f_1 = 0;
				unk_0x406CBCEA35499884();
				sLocal_1914 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (func_5(&uLocal_1919) > 30f)
			{
				if (!func_376(iLocal_1926, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_1926, 32, 0);
				}
			}
		}
		else if (func_3(&uLocal_1919))
		{
			func_374(&iLocal_1926, 32);
			func_11(&uLocal_1919);
		}
	}
	else if (func_3(&uLocal_1919))
	{
		func_374(&iLocal_1926, 32);
		func_11(&uLocal_1919);
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
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_63()
{
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
	}
}

void func_64(var uParam0, var uParam1)
{
	if (uParam0->f_1)
	{
		if ((!unk_0xD9F5E1FEFD1329E4(uParam0->f_358[0 /*189*/].f_9, 0) || unk_0x8D91ADE44AC79BC9(uParam0->f_358[0 /*189*/].f_9) < 5) || unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			func_11(&uLocal_1916);
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				unk_0xFE54B8568B2ABD12(uParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					unk_0xF55F62DA99DB0C2F(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					unk_0xF55F62DA99DB0C2F(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			unk_0x406CBCEA35499884();
			sLocal_1914 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, var uParam1)
{
	if (Local_43.f_0 == 0)
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0))
		{
			if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				unk_0x406CBCEA35499884();
				unk_0x0F15249D24BC5ADA(0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				if (unk_0xC450B06E5AAA0985(*uParam1))
				{
					unk_0xFE54B8568B2ABD12(uParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (unk_0xC450B06E5AAA0985(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							unk_0xF55F62DA99DB0C2F(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (unk_0xC450B06E5AAA0985(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							unk_0xF55F62DA99DB0C2F(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				unk_0x406CBCEA35499884();
				sLocal_1914 = "SPR_RETR_DES";
				func_66(&(Local_43.f_321), 1);
				uParam0->f_358[0 /*189*/].f_23 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0xD7E1DF759CD0FFF2("OFFMISSION_WASTED", 0, -1);
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
	
	iVar0 = unk_0x8D91ADE44AC79BC9(uParam0->f_358[0 /*189*/].f_9);
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		iVar1 = system::round(unk_0x4C7724D572378B05(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_43.f_0 == 2)
		{
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), uParam0->f_358[0 /*189*/].f_9, 0))
				{
					bLocal_1925 = true;
				}
			}
			if (bLocal_1925)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!unk_0xFBA523E6F8ACE541())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1927, 2);
					}
				}
			}
		}
		else
		{
			if (unk_0xFBA523E6F8ACE541())
			{
				unk_0x406CBCEA35499884();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1927, 2);
		}
	}
	if (Local_43.f_0 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0xFBA523E6F8ACE541())
			{
				unk_0x406CBCEA35499884();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1927, 2);
		}
	}
}

void func_69()
{
	Global_21152 = 0;
	func_70();
}

void func_70()
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

int func_71()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	
	Var0 = { uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/] };
	if (uParam0->f_358[0 /*189*/].f_11 > 0)
	{
		Var1 = { uParam0->f_27[(uParam0->f_358[0 /*189*/].f_11 - 1) /*10*/] };
	}
	else
	{
		Var1 = { 0f, 0f, 0f };
	}
	fVar2 = unk_0xED977E2AE2CB16EE(Var0, Var1, 1);
	fVar3 = fVar2;
	if (uParam0->f_358[0 /*189*/].f_11 == 0)
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	else
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	Var4 = { unk_0xD1A6A821F5AC81DB(uParam0->f_358[0 /*189*/].f_8, 1) };
	if (func_73(Var1, 0f, 0f, 0f, 1056964608, 0))
	{
		Var5 = { Var0 };
	}
	else
	{
		Var5 = { unk_0xC14F2F615169363F(Var4, Var1, Var0, 1) };
	}
	fVar6 = unk_0xED977E2AE2CB16EE(Var5, Var4, 1);
	bVar7 = fVar6 >= fVar2;
	bVar8 = fVar6 >= fVar3;
	if (Local_43.f_0 == 1)
	{
		if (unk_0x1D5CD3EAAA7422B0((Var5.f_2 - Var4.f_2)) > 15f)
		{
			bVar7 = true;
		}
	}
	if (bVar8)
	{
		func_11(&uLocal_1916);
		uParam0->f_1 = 0;
		unk_0x406CBCEA35499884();
		func_270(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		func_277(&(Local_43.f_119), 0, 0, 1, 1);
		func_276(&(Local_43.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_276(&(Local_43.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		unk_0x86A2BC11844DEEB3("MGSP_FAIL");
		sLocal_1914 = "SPR_HELP_FAIL";
	}
	else if (bVar7)
	{
		if (fVar6 <= (fVar3 - 15f))
		{
			func_317("SPR_HELP_RESET", -1);
		}
		if (fVar6 <= (fVar3 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_1927, 4);
		}
	}
	else
	{
		unk_0x4E8E15513E171E54("SPR_HELP_WARN");
		if (func_376(iLocal_1927, 4))
		{
			func_374(&iLocal_1927, 4);
		}
	}
}

int func_73(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_74()
{
	if (iLocal_1651 == 1)
	{
		if (func_3(&uLocal_1681))
		{
			if (func_5(&uLocal_1681) <= 2,5f)
			{
				iLocal_1717 = "GATEMISS";
				fLocal_1718 = 5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1651 = 0;
			}
		}
	}
	if (iLocal_1652 == 1)
	{
		if (func_3(&uLocal_1687))
		{
			if (func_5(&uLocal_1687) <= 2,5f)
			{
				iLocal_1717 = "GATEINNER";
				fLocal_1718 = 1f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1652 = 0;
			}
		}
	}
	if (iLocal_1653 == 1)
	{
		if (func_3(&uLocal_1684))
		{
			if (func_5(&uLocal_1684) <= 2,5f)
			{
				iLocal_1717 = "GATEOUTTER";
				fLocal_1718 = 0f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1653 = 0;
			}
		}
	}
	if (iLocal_1654 == 1)
	{
		if (func_3(&uLocal_1696))
		{
			if (func_5(&uLocal_1696) <= 2,5f)
			{
				iLocal_1717 = "GATEKNIFEINNER";
				fLocal_1718 = 2,5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1654 = 0;
			}
		}
	}
	if (iLocal_1655 == 1)
	{
		if (func_3(&uLocal_1699))
		{
			if (func_5(&uLocal_1699) <= 2,5f)
			{
				iLocal_1717 = "GATEINVERTEDIN";
				fLocal_1718 = 3f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1655 = 0;
			}
		}
	}
	if (iLocal_1656 == 1)
	{
		if (func_3(&uLocal_1690))
		{
			if (func_5(&uLocal_1690) <= 2,5f)
			{
				iLocal_1717 = "GATEKNIFEOUTTER";
				fLocal_1718 = 1,5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1656 = 0;
			}
		}
	}
	if (iLocal_1657 == 1)
	{
		if (func_3(&uLocal_1693))
		{
			if (func_5(&uLocal_1693) <= 2,5f)
			{
				iLocal_1717 = "GATEINVERTEDOUT";
				fLocal_1718 = 2f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1657 = 0;
			}
		}
	}
	if (iLocal_1658 == 1)
	{
		if (func_3(&uLocal_1669))
		{
			if (func_5(&uLocal_1669) <= 2,5f)
			{
				iLocal_1717 = "STUNTKNIFELEFT";
				fLocal_1718 = 4f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1658 = 0;
			}
		}
	}
	if (iLocal_1659 == 1)
	{
		if (func_3(&uLocal_1669))
		{
			if (func_5(&uLocal_1669) <= 2,5f)
			{
				iLocal_1717 = "STUNTKNIFELEFTHIT";
				fLocal_1718 = 1,5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1659 = 0;
			}
		}
	}
	if (iLocal_1660 == 1)
	{
		if (func_3(&uLocal_1669))
		{
			if (func_5(&uLocal_1669) <= 2,5f)
			{
				iLocal_1717 = "STUNTKNIFELEFTMISS";
				fLocal_1718 = 5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1660 = 0;
			}
		}
	}
	if (iLocal_1661 == 1)
	{
		if (func_3(&uLocal_1669))
		{
			if (func_5(&uLocal_1669) <= 2,5f)
			{
				iLocal_1717 = "STUNTKNIFERIGHT";
				fLocal_1718 = 4f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1661 = 0;
			}
		}
	}
	if (iLocal_1662 == 1)
	{
		if (func_3(&uLocal_1669))
		{
			if (func_5(&uLocal_1669) <= 2,5f)
			{
				iLocal_1717 = "STUNTKNIFERIGHTHIT";
				fLocal_1718 = 1,5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1662 = 0;
			}
		}
	}
	if (iLocal_1663 == 1)
	{
		if (func_3(&uLocal_1669))
		{
			if (func_5(&uLocal_1669) <= 2,5f)
			{
				iLocal_1717 = "STUNTKNIFERIGHTMISS";
				fLocal_1718 = 5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1663 = 0;
			}
		}
	}
	if (iLocal_1664 == 1)
	{
		if (func_3(&uLocal_1672))
		{
			if (func_5(&uLocal_1672) <= 2,5f)
			{
				iLocal_1717 = "STUNTINVERTED";
				fLocal_1718 = 4f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1664 = 0;
			}
		}
	}
	if (iLocal_1665 == 1)
	{
		if (func_3(&uLocal_1672))
		{
			if (func_5(&uLocal_1672) <= 2,5f)
			{
				iLocal_1717 = "STUNTINVERTEDHIT";
				fLocal_1718 = 1,5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1665 = 0;
			}
		}
	}
	if (iLocal_1666 == 1)
	{
		if (func_3(&uLocal_1672))
		{
			if (func_5(&uLocal_1672) <= 2,5f)
			{
				iLocal_1717 = "STUNTINVERTEDMISS";
				fLocal_1718 = 5f;
				iLocal_1719 = 1;
			}
			else
			{
				iLocal_1717 = 0;
				fLocal_1718 = -1f;
				iLocal_1719 = 1;
				iLocal_1666 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > uParam0->f_358)
	{
		return;
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			if (unk_0xCECDBB848D53DEB2(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = unk_0x66C1D6E6DBF7AC9B(uParam0->f_358[iParam1 /*189*/].f_9);
				if (uParam0->f_358[0 /*189*/].f_11 == uParam0->f_358[iParam1 /*189*/].f_11)
				{
				}
				else if (uParam0->f_358[iParam1 /*189*/].f_11 > uParam0->f_358[0 /*189*/].f_11)
				{
					fVar0 = (fVar0 * 0,69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (unk_0xF4244288C3EF3306(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (unk_0xC39AE5D390581AD5(uParam0->f_358[iParam1 /*189*/].f_9, -1, 0))
					{
						unk_0x73CAFD2038E812B3(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						unk_0x553B31859911EC59(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, int iParam5)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (Local_43.f_0 == 1)
		{
			if (!unk_0x1C2F771CDC87A3A5(iParam2, 0))
			{
				unk_0xCF6CC9EA0D2EFE23(iParam1, iParam2, Param3, unk_0x66C1D6E6DBF7AC9B(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_43.f_0 == 2)
		{
			uParam4 = uParam4;
			func_77(uParam0, Param3, iParam5);
		}
	}
}

void func_77(var uParam0, struct<3> Param1, var uParam2)
{
	uParam0->f_12 = uParam0->f_12;
	Param1 = { Param1 };
	uParam2 = uParam2;
}

void func_78(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_81(&(uParam0->f_27[iParam1 /*10*/].f_6), &(uParam0->f_2861), &(uParam0->f_2862), uParam0->f_27[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_12)
	{
		func_82(&(uParam0->f_27[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_27[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xC2A5E7DCD1900AA1(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_1915)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_603(func_604(iVar3), &uVar0, &uVar1, &uVar2, uParam2);
		unk_0xEDC9B904B870CE80(*uParam1, uVar0, uVar1, uVar2, *uParam2);
		unk_0xF7408C8F340BA88B(*uParam1, uVar0, uVar1, uVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
	}
}

int func_84(int iParam0)
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (Local_43.f_0 == 0)
		{
			if (func_3(&uLocal_1681))
			{
				func_89(&uLocal_1681, 3f);
			}
			if (func_3(&uLocal_1675))
			{
				func_89(&uLocal_1675, 3f);
			}
			if (func_3(&uLocal_1669))
			{
				func_89(&uLocal_1669, 3f);
			}
			if (func_3(&uLocal_1678))
			{
				func_89(&uLocal_1678, 3f);
			}
			if (func_3(&uLocal_1672))
			{
				func_89(&uLocal_1672, 3f);
			}
			if (func_3(&uLocal_1684))
			{
				func_89(&uLocal_1684, 3f);
			}
			if (func_3(&uLocal_1687))
			{
				func_89(&uLocal_1687, 3f);
			}
			if (func_3(&uLocal_1690))
			{
				func_89(&uLocal_1690, 3f);
			}
			if (func_3(&uLocal_1693))
			{
				func_89(&uLocal_1693, 3f);
			}
			if (func_3(&uLocal_1696))
			{
				func_89(&uLocal_1696, 3f);
			}
			if (func_3(&uLocal_1699))
			{
				func_89(&uLocal_1699, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1651 = 1;
					func_11(&uLocal_1681);
					break;
				
				case 1:
					iLocal_1652 = 1;
					func_11(&uLocal_1687);
					break;
				
				case 2:
					iLocal_1653 = 1;
					func_11(&uLocal_1684);
					break;
				
				case 3:
					iLocal_1654 = 1;
					func_11(&uLocal_1696);
					break;
				
				case 4:
					iLocal_1655 = 1;
					func_11(&uLocal_1699);
					break;
				
				case 5:
					iLocal_1656 = 1;
					func_11(&uLocal_1690);
					break;
				
				case 6:
					iLocal_1657 = 1;
					func_11(&uLocal_1693);
					break;
				
				case 8:
					iLocal_1658 = 1;
					func_11(&uLocal_1669);
					break;
				
				case 9:
					iLocal_1659 = 1;
					func_11(&uLocal_1678);
					break;
				
				case 10:
					iLocal_1660 = 1;
					func_11(&uLocal_1681);
					break;
				
				case 11:
					iLocal_1661 = 1;
					func_11(&uLocal_1669);
					break;
				
				case 12:
					iLocal_1662 = 1;
					func_11(&uLocal_1678);
					break;
				
				case 13:
					iLocal_1663 = 1;
					func_11(&uLocal_1681);
					break;
				
				case 14:
					iLocal_1664 = 1;
					func_11(&uLocal_1672);
					break;
				
				case 15:
					iLocal_1665 = 1;
					func_11(&uLocal_1678);
					break;
				
				case 16:
					iLocal_1666 = 1;
					func_11(&uLocal_1681);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1,5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2,5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1,5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1,5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1,5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_89(var uParam0, float fParam1)
{
	if (func_3(uParam0))
	{
		func_12(uParam0, (func_5(uParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_6 != 0)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		func_603(func_604(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0xEDC9B904B870CE80(uParam0->f_6, uVar0, uVar1, uVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		func_603(func_604(iVar5), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0xEDC9B904B870CE80(uParam1->f_6, uVar0, uVar1, uVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(struct<3> Param0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		fVar2 = unk_0xED977E2AE2CB16EE(Param0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - system::ceil((IntToFloat((iParam2 - iParam1)) * fVar3)));
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
	return 12;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	
	if (unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		return -1;
	}
	iVar4 = func_100(uParam1, iParam3);
	if (Local_43.f_0 == 0)
	{
		if (iVar4 != 17)
		{
			if (iVar4 == 1)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_376(iLocal_1948, 262144))
						{
							func_98("Gate_PK", &iLocal_1947);
							iLocal_1948 = 0;
							func_348(&iLocal_1948, 262144);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 524288))
						{
							func_98("Con_PK", &iLocal_1947);
							func_348(&iLocal_1948, 524288);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 1048576))
						{
							func_98("Con_PK", &iLocal_1947);
							func_348(&iLocal_1948, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1947);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_376(iLocal_1948, 262144))
						{
							func_98("Gate_PK", &iLocal_1947);
							iLocal_1948 = 0;
							func_348(&iLocal_1948, 262144);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 524288))
						{
							func_98("Con_PK", &iLocal_1947);
							func_348(&iLocal_1948, 524288);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 1048576))
						{
							func_98("Con_PK", &iLocal_1947);
							func_348(&iLocal_1948, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1947);
							return iVar4;
						}
					}
				}
				else
				{
					unk_0xAAB58D9C726404C0(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar1, &Var2, &uVar3);
					if (Var2.f_2 <= -0,866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 9;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 4;
							if (!func_376(iLocal_1948, 32768))
							{
								func_98("Gate_PI", &iLocal_1946);
								iLocal_1948 = 0;
								func_348(&iLocal_1948, 32768);
								return iVar4;
							}
							else if (!func_376(iLocal_1948, 65536))
							{
								func_98("Con_PI", &iLocal_1946);
								func_348(&iLocal_1948, 65536);
								return iVar4;
							}
							else if (!func_376(iLocal_1948, 131072))
							{
								func_98("Con_PI", &iLocal_1946);
								func_348(&iLocal_1948, 131072);
								return iVar4;
							}
							else
							{
								func_98("Con_PI", &iLocal_1946);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 1;
						if (!func_376(iLocal_1948, 4096))
						{
							func_98("Get_Perf", &iLocal_1943);
							iLocal_1948 = 0;
							func_348(&iLocal_1948, 4096);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 8192))
						{
							func_98("Con_Perf", &iLocal_1943);
							func_348(&iLocal_1948, 8192);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 16384))
						{
							func_98("Con_Perf", &iLocal_1943);
							func_348(&iLocal_1948, 16384);
							return iVar4;
						}
						else
						{
							func_98("Con_Perf", &iLocal_1943);
							return iVar4;
						}
					}
				}
			}
			if (iVar4 == 2)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_376(iLocal_1948, 64))
						{
							func_98("Gate_Kni", &iLocal_1945);
							iLocal_1948 = 0;
							func_348(&iLocal_1948, 64);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 128))
						{
							func_98("Con_Kni", &iLocal_1945);
							func_348(&iLocal_1948, 128);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 256))
						{
							func_98("Con_Kni", &iLocal_1945);
							func_348(&iLocal_1948, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1945);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_376(iLocal_1948, 64))
						{
							func_98("Gate_Kni", &iLocal_1945);
							iLocal_1948 = 0;
							func_348(&iLocal_1948, 64);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 128))
						{
							func_98("Con_Kni", &iLocal_1945);
							func_348(&iLocal_1948, 128);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 256))
						{
							func_98("Con_Kni", &iLocal_1945);
							func_348(&iLocal_1948, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1945);
							return iVar4;
						}
					}
				}
				else
				{
					unk_0xAAB58D9C726404C0(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar1, &Var2, &uVar3);
					if (Var2.f_2 <= -0,866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 8;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 6;
							if (!func_376(iLocal_1948, 512))
							{
								func_98("Gate_Inv", &iLocal_1944);
								iLocal_1948 = 0;
								func_348(&iLocal_1948, 512);
								return iVar4;
							}
							else if (!func_376(iLocal_1948, 1024))
							{
								func_98("Con_Inv", &iLocal_1944);
								func_348(&iLocal_1948, 1024);
								return iVar4;
							}
							else if (!func_376(iLocal_1948, 2048))
							{
								func_98("Con_Inv", &iLocal_1944);
								func_348(&iLocal_1948, 2048);
								return iVar4;
							}
							else
							{
								func_98("Con_Inv", &iLocal_1944);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 2;
						if (!func_376(iLocal_1948, 8))
						{
							func_98("Gate_Hit", &iLocal_1942);
							iLocal_1948 = 0;
							func_348(&iLocal_1948, 8);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 16))
						{
							func_98("Con_Hit", &iLocal_1942);
							func_348(&iLocal_1948, 16);
							return iVar4;
						}
						else if (!func_376(iLocal_1948, 32))
						{
							func_98("Con_Hit", &iLocal_1942);
							func_348(&iLocal_1948, 32);
							return iVar4;
						}
						else
						{
							func_98("Con_Hit", &iLocal_1942);
							return iVar4;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar4 = 10;
						return iVar4;
					}
					if (uParam1->f_8 == 3)
					{
						iVar4 = 13;
						return iVar4;
					}
					if (uParam1->f_8 == 1)
					{
						iVar4 = 16;
						return iVar4;
					}
				}
				else
				{
					iVar4 = 7;
					if (!func_376(iLocal_1948, 1))
					{
						func_98("Gate_Miss", &iLocal_1941);
						iLocal_1948 = 0;
						func_348(&iLocal_1948, 1);
						return iVar4;
					}
					else if (!func_376(iLocal_1948, 2))
					{
						func_98("Con_Miss", &iLocal_1941);
						func_348(&iLocal_1948, 2);
						return iVar4;
					}
					else if (!func_376(iLocal_1948, 4))
					{
						func_98("Con_Miss", &iLocal_1941);
						func_348(&iLocal_1948, 4);
						return iVar4;
					}
					else
					{
						func_98("Con_Miss", &iLocal_1941);
						return iVar4;
					}
				}
			}
			return iVar4;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar4 = 10;
					return iVar4;
				}
				if (uParam1->f_8 == 3)
				{
					iVar4 = 13;
					return iVar4;
				}
				if (uParam1->f_8 == 1)
				{
					iVar4 = 16;
					return iVar4;
				}
			}
			else
			{
				iVar4 = 7;
				if (!func_376(iLocal_1948, 1))
				{
					func_98("Gate_Miss", &iLocal_1941);
					iLocal_1948 = 0;
					func_348(&iLocal_1948, 1);
					return iVar4;
				}
				else if (!func_376(iLocal_1948, 2))
				{
					func_98("Con_Miss", &iLocal_1941);
					func_348(&iLocal_1948, 2);
					return iVar4;
				}
				else if (!func_376(iLocal_1948, 4))
				{
					func_98("Con_Miss", &iLocal_1941);
					func_348(&iLocal_1948, 4);
					return iVar4;
				}
				else
				{
					func_98("Con_Miss", &iLocal_1941);
					return iVar4;
				}
			}
			return iVar4;
		}
	}
	else if (iVar4 != 17)
	{
		return iVar4;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	struct<3> Var1;
	
	if (!func_73(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (unk_0x65FFA94B82A71741(iParam2, *uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			Var1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0xD1A6A821F5AC81DB(iParam2, 1), Var1) - func_95(*uParam0, Var1)) > 15f)
			{
				unk_0xBF3D28CA44F3BE2D(-1, sLocal_1937, "HUD_MINI_GAME_SOUNDSET", 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_95(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_96(struct<3> Param0)
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

bool func_97(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return 0;
	}
	unk_0xAAB58D9C726404C0(iParam0, &uVar0, &Var1, &Var2, &uVar3);
	if (unk_0x1D5CD3EAAA7422B0(Var2.f_2) > 0,342f)
	{
		return 0;
	}
	return Var1.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_376(*uParam1, 1))
	{
		if (!iLocal_1650)
		{
			iLocal_1650 = 1;
			func_348(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1650 = 0;
			if (unk_0x1B79E937E91F40C3(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_376(*uParam1, 1))
	{
		if (!func_376(*uParam1, 2))
		{
			if (!iLocal_1650)
			{
				iLocal_1650 = 1;
				func_348(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1650 = 0;
				if (unk_0x1B79E937E91F40C3(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_376(*uParam1, 2))
	{
		if (!func_376(*uParam1, 4))
		{
			if (!iLocal_1650)
			{
				iLocal_1650 = 1;
				func_348(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1650 = 0;
				if (unk_0x1B79E937E91F40C3(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_376(*uParam1, 4))
	{
		if (!func_376(*uParam1, 8))
		{
			if (!iLocal_1650)
			{
				iLocal_1650 = 1;
				func_348(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1650 = 0;
				if (unk_0x1B79E937E91F40C3(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_376(*uParam1, 8))
	{
		if (!func_376(*uParam1, 16))
		{
			if (!iLocal_1650)
			{
				iLocal_1650 = 1;
				func_348(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1650 = 0;
				if (unk_0x1B79E937E91F40C3(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return 0;
	}
	unk_0xAAB58D9C726404C0(iParam0, &uVar0, &Var1, &Var2, &uVar3);
	if (unk_0x1D5CD3EAAA7422B0(Var2.f_2) > 0,342f)
	{
		return 0;
	}
	return Var1.f_2 > 0f;
}

int func_100(var uParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Var0 = { *uParam0 };
	unk_0xAAB58D9C726404C0(iParam1, &Var4, &Var2, &Var3, &Var1);
	Var5 = { Var0 - Var1 };
	fVar6 = unk_0x1D5CD3EAAA7422B0(func_95(Var5, Var4));
	fVar7 = unk_0x1D5CD3EAAA7422B0(func_95(Var5, Var3));
	fVar8 = unk_0x1D5CD3EAAA7422B0(func_95(Var5, Var2));
	fVar9 = ((fVar7 * fVar7) + (fVar8 * fVar8));
	if (fVar6 > 6,5f)
	{
		return 17;
	}
	else
	{
		if (fVar9 > 900f)
		{
			if (iParam1 == unk_0x4A8C381C258A124D())
			{
				func_211(&uLocal_1901, 0);
			}
			return 17;
		}
		if (fVar9 > 110f)
		{
			if (iParam1 == unk_0x4A8C381C258A124D())
			{
				func_211(&uLocal_1901, 0);
			}
			unk_0xBF3D28CA44F3BE2D(-1, sLocal_1936, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == unk_0x4A8C381C258A124D())
			{
				func_211(&uLocal_1901, 0);
			}
			unk_0xBF3D28CA44F3BE2D(-1, sLocal_1936, "HUD_MINI_GAME_SOUNDSET", 1);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar3;
	float fVar4;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_13;
	Var2 = { uParam0->f_358[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (Var2.f_8 != uParam0->f_358[iVar1 /*189*/].f_8)
		{
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x1C2F771CDC87A3A5(Var2.f_8, 0))
			{
				if (Var2.f_11 > uParam0->f_358[iVar1 /*189*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_358[iVar1 /*189*/].f_11)
				{
					fVar3 = func_102(Var2.f_8, uParam0->f_27[Var2.f_11 /*10*/], 1);
					fVar4 = func_102(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], 1);
					if (fVar3 < fVar4)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_358[iParam1 /*189*/].f_12 = iVar0;
}

float func_102(int iParam0, struct<3> Param1, int iParam2)
{
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), Param1, iParam2);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_317(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	switch (uParam1->f_23)
	{
		case 0:
			func_192(uParam0);
			func_267();
			func_277(&(Local_43.f_119), 0, 0, 1, 1);
			func_276(&(Local_43.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_276(&(Local_43.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_270(1);
			unk_0x86A2BC11844DEEB3("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_186(&(Local_43.f_321), &(Local_43.f_327), &(uParam0->f_17), cLocal_1913, sLocal_1914, uParam0, 78))
			{
				iLocal_2028 = 0;
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0x0B74F181ADFC39BF(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (func_274("SPR_HELP_DAMG", 0, 0))
				{
					unk_0x4E8E15513E171E54("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_43.f_321), 1);
				if (*uParam0)
				{
					func_178(0, 0);
					func_177(0, 0);
					func_176();
					if (func_274("SPR_RETR_DES", 0, 0))
					{
						unk_0x4E8E15513E171E54("SPR_RETR_DES");
					}
					func_270(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_178(0, 0);
					func_177(0, 0);
					func_176();
					func_89(&uLocal_1916, 10f);
					func_270(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_168(&(Local_43.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (unk_0x875A214D5EBCA509(2, 201))
			{
				func_178(0, 0);
				func_177(0, 0);
				func_176();
				iLocal_2033 = unk_0xCA369FBC0DE29517();
				unk_0xBF3D28CA44F3BE2D(iLocal_2033, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_274("SPR_RETR_DES", 0, 0))
				{
					unk_0x4E8E15513E171E54("SPR_RETR_DES");
				}
				func_270(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (unk_0x875A214D5EBCA509(2, 202))
			{
				func_178(0, 0);
				func_177(0, 0);
				func_176();
				iLocal_2033 = unk_0xCA369FBC0DE29517();
				unk_0xBF3D28CA44F3BE2D(iLocal_2033, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&uLocal_1916, 10f);
				func_270(0);
				*uParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_27[uParam1->f_11 /*10*/] };
			}
			if (bParam2)
			{
				if (unk_0xD9F5E1FEFD1329E4(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
					func_277(&(Local_43.f_119), 0, 0, 1, 1);
					func_276(&(Local_43.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_276(&(Local_43.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (unk_0xD9F5E1FEFD1329E4(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		
		case 5:
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				unk_0x0B74F181ADFC39BF(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&uLocal_1916) <= 10f)
			{
				if (bParam2)
				{
					unk_0x4EB223432F8FA0A0(9);
					unk_0x4EB223432F8FA0A0(7);
					unk_0x66EFB3D6110055C4(0, 99, 1);
					unk_0x66EFB3D6110055C4(0, 100, 1);
					func_168(&(Local_43.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (unk_0x875A214D5EBCA509(2, 201))
					{
						*uParam0 = 1;
						iLocal_2033 = unk_0xCA369FBC0DE29517();
						unk_0xBF3D28CA44F3BE2D(iLocal_2033, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
					else if (unk_0x875A214D5EBCA509(2, 202))
					{
						*uParam0 = 0;
						func_89(&uLocal_1916, 10f);
						iLocal_2033 = unk_0xCA369FBC0DE29517();
						unk_0xBF3D28CA44F3BE2D(iLocal_2033, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				unk_0x406CBCEA35499884();
				sLocal_1914 = "SPR_RETR_DES";
				func_66(&(Local_43.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_372(500))
			{
				unk_0x406CBCEA35499884();
				unk_0x428C32CC68809A35(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_149())
			{
				if (unk_0x15CCE8886267624F())
				{
					func_192(uParam0);
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
					if (unk_0xFC8BFE4B41177C22(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x1AB7223AC0702871(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						unk_0xD25E9BDC14A0B649(uParam0->f_358[0 /*189*/].f_9, unk_0xF8A78594664D23A6(uParam0->f_358[0 /*189*/].f_9), 0, 0);
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_147(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
						if (Local_43.f_0 == 0)
						{
							unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_13)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_145(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_144(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				unk_0x64BB72494B9DF6DC(0f);
				func_11(&uLocal_2024);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_178(0, 0);
			func_177(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_43.f_3, Local_43.f_6, 0f);
			system::settimera(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!unk_0x787F8EE1F6FBDC6D() || unk_0x9E2D35FA908F57B4())
			{
				uParam0->f_1 = 1;
				func_11(&uLocal_2024);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (func_600(500))
				{
					unk_0x6981C3213B841071();
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[0 /*189*/].f_9, 0))
					{
						unk_0x73CAFD2038E812B3(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_43.f_0 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (unk_0x787F8EE1F6FBDC6D())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (func_3(&uLocal_2024))
					{
						if (func_107(&uLocal_2024) >= 3f)
						{
							unk_0x6981C3213B841071();
						}
					}
					else
					{
						func_10(&uLocal_2024);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_26 = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!unk_0x1C2F771CDC87A3A5(uParam1->f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&uLocal_1916);
						sLocal_1914 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_192(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_26 = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)
{
	if (uParam0->f_22 != 0)
	{
		if (!unk_0xD5FF242D0AFC5855(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), uParam0->f_9, 0))
			{
				if (unk_0xDF93B3CFAC96698F(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (unk_0x2399A6E4929050EE(uParam0->f_9) < 3f || unk_0x14E25ED5E75102C8(uParam0->f_9))
						{
							if (unk_0xD1F1A906BA9226BE(uParam0->f_9) && unk_0x2399A6E4929050EE(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (unk_0xA24B9FF9863A909D(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (unk_0xA24B9FF9863A909D(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (unk_0xA24B9FF9863A909D(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (unk_0xA24B9FF9863A909D(uParam0->f_9, 3, 10000))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_107(var uParam0)
{
	if (func_3(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0))
	{
		if (unk_0x00C6FDED3EB75117(uParam0->f_22))
		{
			Var0 = { unk_0x88124E0D60FB8D11(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, Var0.f_0, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	struct<3> Var0;
	bool bVar1;
	float fVar2;
	
	unk_0x66EFB3D6110055C4(0, 75, 1);
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return;
	}
	if (unk_0xDF93B3CFAC96698F(iParam0) < fParam1)
	{
		unk_0x93C337B66C95C99B(iParam0, fParam1);
	}
	Var0 = { unk_0x88124E0D60FB8D11(iParam0, 2) };
	bVar1 = false;
	if (bParam2)
	{
		fVar2 = (unk_0x0B852B0BF94A8DC1() * 45f);
		if (Var0.f_0 < -fVar2)
		{
			bVar1 = true;
			Var0.f_0 = (Var0.f_0 + fVar2);
		}
		else if (Var0.f_0 < fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		else if (Var0.f_0 > fVar2)
		{
			bVar1 = true;
			Var0.f_0 = (Var0.f_0 - fVar2);
		}
		else if (Var0.f_0 > fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		if (Var0.f_1 < -fVar2)
		{
			bVar1 = true;
			Var0.f_1 = (Var0.f_1 + fVar2);
		}
		else if (Var0.f_1 < fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
		else if (Var0.f_1 > fVar2)
		{
			bVar1 = true;
			Var0.f_1 = (Var0.f_1 - fVar2);
		}
		else if (Var0.f_1 > fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
	}
	else
	{
		if (Var0.f_0 != fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		if (Var0.f_1 != fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
	}
	if (bVar1)
	{
		unk_0xCF39804E8C88080E(iParam0, Var0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_9))
		{
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0) || !unk_0xD9F5E1FEFD1329E4(uParam0->f_9, 0))
			{
				if (unk_0xCECDBB848D53DEB2(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x19626F992DC71FB9(uParam0->f_8);
					unk_0xEE0BCDB1B5E36BCB(uParam0->f_9, 1, 1);
					unk_0x8C1F7D7A31B2A38E(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0xCECDBB848D53DEB2(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xB2BD5837A8D3CEDA(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
				}
				if (unk_0xCECDBB848D53DEB2(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					unk_0xEE0BCDB1B5E36BCB(uParam0->f_9, 1, 1);
					unk_0x8C1F7D7A31B2A38E(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0))
	{
		unk_0xD25E9BDC14A0B649(uParam0->f_9, 1000, 0, 0);
		unk_0xF698038C13845696(uParam0->f_9);
		unk_0x2AEBE39F6BF7D6BC(uParam0->f_9, 1000f);
		unk_0xB2BD5837A8D3CEDA(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uParam0->f_9, uParam0->f_19);
		unk_0x1DE99C193C7EC64B(uParam0->f_9, 1084227584);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = unk_0x5779387E956077A6(joaat("stunt"), uParam0->f_16, uParam0->f_19, 1, 1, 0);
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0))
		{
			return 0;
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0x0B74F181ADFC39BF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 4);
		}
		unk_0x5FE0938FDE9B0958(uParam0->f_9, 1);
		func_111(uParam0->f_9, &(Local_43.f_243), 0, 1);
	}
	unk_0xEC62EF361B6CB976(uParam0->f_9, 0);
	unk_0xC229299217554C78(uParam0->f_9, 1, 1, 0);
	unk_0xA9F7300B498DDED7(uParam0->f_9);
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_8, 0))
	{
		if (!unk_0xF4244288C3EF3306(uParam0->f_8, uParam0->f_9))
		{
			unk_0x73CAFD2038E812B3(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!unk_0x110821AE6C63DD4F(uParam0->f_9))
	{
		unk_0xEE0BCDB1B5E36BCB(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0xD1ED03B26BD64F6C(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		unk_0x3F413690B5A371F4(uParam0->f_9, 0);
		Local_43.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_135(iParam0))
		{
			if (unk_0x70E57E9927B6BA58(&(uParam1->f_1)) != 0)
			{
				unk_0x3FEAE59CDE6D3946(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x20DE4C1439E0FC92())
			{
				unk_0x05D3F682DDA06C20(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_134(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_134(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_134(iVar2)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_134(iVar3)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_134(iVar4)))
					{
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_134(iVar5)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_134(4)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 10) != 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_134(iVar6)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE0ACB5BC9D603F02(iParam0, 0);
			if (unk_0x94C9CD3D66808551(iParam0, 5) != -1)
			{
				unk_0xE0ACB5BC9D603F02(iParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x84F5FD9CD27457EE(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x963D9A7202C06F65(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x593A3115B8AE759B(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x588D8FDC61F7CFAD(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_132(uParam1->f_5) || func_132(uParam1->f_6))
			{
			}
			else
			{
				unk_0xD133EF7430EDCD09(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xBB361D7264AC4FD8(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_131(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_130())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x5DA0536AEAD1FF31(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_129(uParam1->f_66))
		{
			unk_0xFE620ED8E0A3C209(iParam0, 0);
		}
		else
		{
			unk_0xFE620ED8E0A3C209(iParam0, 0);
			unk_0xFE620ED8E0A3C209(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0x439C904840715871(iParam0, 0);
			unk_0x519F76A38952BBD0(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x0B74F181ADFC39BF(iParam0, uParam1->f_70);
		}
		unk_0xEAB8A43F6621850F(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xE62930EC6FAABCA5(iParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0xE62930EC6FAABCA5(iParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0xE62930EC6FAABCA5(iParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0xE62930EC6FAABCA5(iParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0xD37CA6D6F8993BB9(iParam0, BitTest(uParam1->f_77, 10));
		if (unk_0xBA3ECE95D3094B0F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA1C03303EC67320B(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_128(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_128(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD6B15DF382A594C7(iParam0, 1);
			}
			else
			{
				unk_0x232B023FE4D977E2(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_120(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xBA16CD57E37AC32A(uParam1->f_66) && !unk_0xEA4F815FDC353FEF(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_134(iVar7 + 1)))
				{
					if (!unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
					{
						unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, 0);
					}
				}
				else if (unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
				{
					unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, 1);
				}
				iVar7++;
			}
		}
		if ((unk_0x4B423FAA24E8ABF0(iParam0) == joaat("sheava") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("omnis")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("le7b"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 0) == -1)
			{
				unk_0xD772F6AA66750D2B(iParam0, 1, 0);
			}
		}
		if ((((func_114() && unk_0x00C6FDED3EB75117(uParam1->f_66)) && unk_0x8EC15ED9ECD1E9D0(iParam0)) && !unk_0x2E6A27037F1DC473(iParam0, joaat("avenger"))) && !unk_0x2E6A27037F1DC473(iParam0, func_113(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_112(iParam0, 5f))
				{
					unk_0xC2A036647DD761E4(iParam0, 3);
				}
				else
				{
					unk_0xC2A036647DD761E4(iParam0, 2);
				}
			}
			else
			{
				unk_0xC2A036647DD761E4(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_112(int iParam0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
		if (unk_0xB1EAADCB692D69CE(Var0, &fVar1, 0, 0))
		{
			if (unk_0x1D5CD3EAAA7422B0((Var0.f_2 - fVar1)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (unk_0xFAF53F2F65D5EE26(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_114()
{
	if ((((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 18) || Global_4718592.f_117195 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_118(7))
	{
		if (func_116(Global_2672855.f_4.f_16) || func_115(Global_2672855.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_115(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_117(iParam0, 9);
	}
	return 0;
}

var func_117(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

bool func_118(int iParam0)
{
	return func_119(&(Global_2672855.f_194), iParam0);
}

var func_119(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_120(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xB5AD06DDA85E2E8F(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xF5501FF9869DAC7C(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xF5501FF9869DAC7C(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x89D1FDCA3735A1E0(*iParam0, 255);
				}
				else
				{
					unk_0x89D1FDCA3735A1E0(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xF5501FF9869DAC7C(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x94C9CD3D66808551(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xC87E4FAD00AEDD4B(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_126(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_125(unk_0x4B423FAA24E8ABF0(*iParam0), 1) && unk_0x94C9CD3D66808551(*iParam0, 24) != func_123(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*iParam0, 24, func_123(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_122(iParam0);
	if (func_121(*iParam0))
	{
		unk_0xD05AF216D970F274(*iParam0, 1);
		unk_0x5FE0938FDE9B0958(*iParam0, 1);
	}
	return 1;
}

int func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x94C9CD3D66808551(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x1340575A0EEE0622(iParam0, iVar1, unk_0x94C9CD3D66808551(iParam0, iVar1)), 32);
				iVar2 = unk_0x70E57E9927B6BA58(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x70E57E9927B6BA58("MNU_CAGE") || iVar2 == unk_0x70E57E9927B6BA58("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_122(var uParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x94C9CD3D66808551(*uParam0, 4) == 0)
			{
				unk_0x8450270DC5896D39(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xC87E4FAD00AEDD4B(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x8450270DC5896D39(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		switch (unk_0x4B423FAA24E8ABF0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_124(iParam0, 38) + 1;
		iVar1 = func_124(iParam0, 24) + 1;
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152860) && unk_0x2E6A27037F1DC473(iParam0, Global_152860)) && Global_152861 == iParam1)
	{
		return Global_152862;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_126(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_125(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_126(var uParam0, int iParam1, int iParam2)
{
	if (!func_127() && unk_0xAF82FE1B3E949337(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	return 0;
}

void func_128(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = unk_0x94C9CD3D66808551(iParam0, 24);
		iVar1 = unk_0xEFDD8C5443F6C9E4(iParam0, 24);
		unk_0xE33678A9AE50A01B(iParam0, uParam1);
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tornado6") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xC87E4FAD00AEDD4B(iParam0, 24);
		}
		else
		{
			unk_0x8450270DC5896D39(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

var func_130()
{
	return unk_0x087611B922B50F13(joaat("mpindependence"));
}

int func_131(int iParam0)
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
			{
				if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	if (!func_127() && func_133(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_142(unk_0x259BE71D8A81D4FA(), -1))
		{
			iParam0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	if (func_137(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_136(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	if (unk_0x77B62CAA5DF0922A("FMDeliverableID", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "FMDeliverableID"))
		{
			return unk_0xE2F6FE9B61232165(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_137(int iParam0)
{
	if (func_141(iParam0) == 233)
	{
		return func_138(iParam0);
	}
	return -1;
}

int func_138(int iParam0)
{
	if (func_139(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_139(int iParam0, int iParam1)
{
	if (func_140(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_140(var uParam0)
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

int func_141(int iParam0)
{
	if (func_140(iParam0))
	{
		if (func_139(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_142(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_143(iParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iParam0), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iParam0), 0);
			if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
			{
				if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_143(int iParam0, bool bParam1, bool bParam2)
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

void func_144(struct<3> Param0, int iParam1, struct<3> Param2, bool bParam3)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (bParam3 && Local_43.f_10 == 0)
		{
			unk_0xB2BD5837A8D3CEDA(iParam1, 1705,039f, 3251,13f, 40,0016f, 1, 0, 0, 1);
		}
		Var6 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		unk_0xEA2D52183C7EA9CF(Var6);
		unk_0xB1EAADCB692D69CE(Var6, &fVar5, 0, 0);
		Var3 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		if (bParam3)
		{
			Var4 = { Param0 - Param2 };
		}
		else
		{
			Var4 = { Param2 - Var3 };
		}
		uVar0 = unk_0x97BC40FFA2FFCCD2(Var4.f_0, Var4.f_1);
		fVar1 = (unk_0x97BC40FFA2FFCCD2(Var4.f_0, Var4.f_2) - 270f);
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
			fVar1 = -(180f - unk_0x1D5CD3EAAA7422B0(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0x1D5CD3EAAA7422B0(fVar1));
		}
		if (unk_0x1D5CD3EAAA7422B0((Var6.f_2 - fVar5)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var6.f_2 = (fVar5 + 25f);
			unk_0xB2BD5837A8D3CEDA(iParam1, Var6, 1, 0, 0, 1);
		}
		unk_0x5D7CD709B34C90F0(iParam1, 1);
		Var2 = { unk_0x88124E0D60FB8D11(iParam1, 2) };
		Var2.f_0 = fVar1;
		Var2.f_2 = uVar0;
		unk_0xCF39804E8C88080E(iParam1, Var2, 2, 1);
		unk_0x5D7CD709B34C90F0(iParam1, 0);
		unk_0xAC48F8E2BF2BEBF7(Var6, unk_0x90D0E0397D3F7690(iParam1), 500f, 0);
	}
}

void func_145(var uParam0, int iParam1, bool bParam2)
{
	func_146(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_146(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	var uVar1;
	float fVar2;
	
	if (iParam2 < 0 || iParam2 > (uParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(uParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	uVar1 = unk_0x97BC40FFA2FFCCD2(Var0.f_0, Var0.f_1);
	fVar2 = 0f;
	if (unk_0x78B050AFBA6D1517(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 0f;
	}
	else if (unk_0xD3CE8D1E6564B011(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 25f;
	}
	else if (unk_0x00C6FDED3EB75117(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], uVar1, fVar2);
}

int func_147(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_148(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_148(var uParam0)
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_8, 0))
	{
		unk_0xD25E9BDC14A0B649(uParam0->f_8, 1000, 0, 0);
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0))
		{
			if (!unk_0xF4244288C3EF3306(uParam0->f_8, uParam0->f_9))
			{
				unk_0x73CAFD2038E812B3(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			unk_0xB2BD5837A8D3CEDA(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0))
	{
		uParam0->f_8 = unk_0x8728A378EF2B46B2(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, 1);
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = unk_0xB1DBFEB95C0EFB88(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, 1);
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!unk_0x110821AE6C63DD4F(uParam0->f_8))
		{
			unk_0xEE0BCDB1B5E36BCB(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0xEB418CA245FFE897(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_149()
{
	if (!BitTest(iLocal_39, 0) && !BitTest(iLocal_39, 1))
	{
		system::settimera(0);
		func_178(1, 0);
	}
	if (!unk_0xFD216000DC314A92())
	{
		unk_0x406CBCEA35499884();
	}
	unk_0x66EFB3D6110055C4(2, 199, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
	unk_0x66EFB3D6110055C4(0, 25, 1);
	unk_0x94D0F337C46797FB();
	if (IntToFloat(system::timera()) > (1500f * 0,2f))
	{
		if (!BitTest(iLocal_39, 1))
		{
			func_177(1, 0);
			system::settimerb(0);
		}
		else if (IntToFloat(system::timerb()) > (1500f * 0,075f) || unk_0x15CCE8886267624F())
		{
			if (!unk_0x15CCE8886267624F())
			{
				if (!unk_0x78ABC1D11B34F324())
				{
					unk_0x8F72AF14CE5AACE4(1500);
				}
			}
			else if (iLocal_40 == 0)
			{
				iLocal_40 = unk_0x1DD05E817C89C737() + 1000;
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				}
				func_167(0, 2, 1);
				func_159(1, 1, 1, 0, 0, 0, 0);
				func_151(1);
				unk_0x7946F7681E9E1D79(0);
				unk_0x915FA95E87D33FF5(0);
				unk_0x428C32CC68809A35(1);
				unk_0x406CBCEA35499884();
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
				}
				func_178(0, 0);
				func_150(0);
			}
			else if (unk_0x1DD05E817C89C737() < iLocal_40)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_150(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(iLocal_39, 3))
			{
				unk_0x98E393364463951A(1);
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_39, 3);
			}
		}
		else if (BitTest(iLocal_39, 3))
		{
			unk_0x98E393364463951A(0);
			unk_0x8744D2E3FC95740E(&iLocal_39, 3);
		}
	}
}

void func_151(bool bParam0)
{
	if (bParam0)
	{
		func_158();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_157(0))
		{
			func_152(0);
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

void func_152(int iParam0)
{
	if (func_156())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_155())
		{
			func_154(1, 1);
		}
		else
		{
			func_154(0, 0);
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
	if (!func_153())
	{
		Global_20930.f_1 = 3;
	}
}

int func_153()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_154(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_157(0))
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

bool func_155()
{
	return BitTest(Global_1956920, 5);
}

bool func_156()
{
	return BitTest(Global_1956920, 19);
}

int func_157(int iParam0)
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

void func_158()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_159(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_166(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_153())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_165(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_166(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_165(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_163(unk_0x259BE71D8A81D4FA())) && !func_161(unk_0x259BE71D8A81D4FA(), 0)) && !func_160()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_163(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_160()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_161(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_140(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_162(-1, 0) == 8;
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

int func_162(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_163(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return 1;
	}
	if (func_164())
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

bool func_164()
{
	return BitTest(Global_2621446, 3);
}

int func_165(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_166(int iParam0)
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

void func_167(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_39, 2);
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (iParam1 == 1)
			{
				unk_0xE6AC149D1121535D(0,2f);
			}
			else
			{
				unk_0xE6AC149D1121535D(0,075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_39, 2) || iParam2)
		{
			if (!unk_0x76CD105BCAC6EB9F())
			{
				unk_0xE6AC149D1121535D(1f);
			}
		}
		unk_0x8744D2E3FC95740E(&iLocal_39, 2);
	}
}

void func_168(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((unk_0x78ABC1D11B34F324() || unk_0xDDED2C93E8FD5B69()) || unk_0x15CCE8886267624F()) || unk_0x114ABA9988FF784B())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_175(uParam0))
	{
		return;
	}
	unk_0x6B91FA4E397DAB8D();
	unk_0xA4F67CEB594AE064(iParam2);
	if (!func_174(uParam0->f_1, 256) || (func_174(uParam0->f_1, 8192) && unk_0x7811C74D5B749F76(2)))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_CLEAR_SPACE");
		unk_0x74BF156C860580D4(iParam1);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
		unk_0x74BF156C860580D4(iParam5);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE6B753D52F4CA222();
		if (unk_0x761778199FE1211C())
		{
			unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(func_174(uParam0->f_1, 4096));
			unk_0xE6B753D52F4CA222();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xAE231F549813BBDF(2);
					break;
				
				case 2:
					bVar4 = !unk_0xAE231F549813BBDF(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x330108B080A2132F(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						iVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							uVar3 = unk_0xE934399D6F2C3AC5(uVar0, uVar1, iVar2);
						}
						else
						{
							uVar3 = unk_0xF761D79754BC3043(uVar0, uVar1, iVar2);
						}
						if (!unk_0xD6F9DEE4765092A9(uVar3))
						{
							func_173(sVar3);
						}
						bVar7++;
					}
					if (!unk_0xD6F9DEE4765092A9(uParam0->f_2[iVar6 /*15*/]))
					{
						func_172(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x761778199FE1211C())
					{
						if (func_174(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x557F1E2300EF1A3E(true);
								unk_0x330108B080A2132F(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x557F1E2300EF1A3E(false);
								unk_0x330108B080A2132F(-1);
							}
						}
					}
					unk_0xE6B753D52F4CA222();
				}
			}
			iVar6++;
		}
		fVar8 = func_171(bParam4, func_171(func_174(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x74BF156C860580D4(fVar8);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(80f);
		unk_0xE6B753D52F4CA222();
		func_170(&(uParam0->f_1), 256);
		func_169(&(uParam0->f_1), 128);
	}
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 0, 0);
}

void func_169(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_170(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_171(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_172(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_173(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

bool func_174(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_175(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			func_170(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_176()
{
	iLocal_39 = 0;
	iLocal_40 = 0;
	func_159(0, 1, 1, 0, 0, 0, 0);
	func_151(1);
}

void func_177(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_178(0, 0);
		unk_0xDCAFFD08A08087EB("DeathFailOut", 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_39, true);
		func_167(1, 2, 0);
		unk_0x735D248F6CA672AE(2);
	}
	else
	{
		if (BitTest(iLocal_39, 1) || iParam1)
		{
			unk_0x21172E4DF035B893("DeathFailOut");
			func_167(0, 2, 1);
			unk_0x735D248F6CA672AE(0);
		}
		unk_0x8744D2E3FC95740E(&iLocal_39, true);
	}
}

void func_178(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_179())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(iLocal_39, 0) || iParam1)
		{
			unk_0xDCAFFD08A08087EB(sVar0, 0, 0);
			unk_0x0B0C9A0F9AAEB7F0(&iLocal_39, false);
			func_167(1, 1, 0);
			unk_0x735D248F6CA672AE(1);
		}
	}
	else
	{
		if (BitTest(iLocal_39, 0) || iParam1)
		{
			unk_0x21172E4DF035B893(sVar0);
			func_167(0, 1, 1);
			unk_0x735D248F6CA672AE(0);
		}
		unk_0x8744D2E3FC95740E(&iLocal_39, false);
	}
}

int func_179()
{
	func_180();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_180()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_184(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_183(unk_0x4A8C381C258A124D());
			if (func_182(iVar0) && (!func_181(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_182(Global_113969.f_2366.f_539.f_4321))
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

bool func_181(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_182(int iParam0)
{
	return iParam0 < 3;
}

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_184(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_184(int iParam0)
{
	if (func_182(iParam0))
	{
		return func_185(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_185(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_186(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xCAC4020CCF361AC8("DEATH_SCENE");
			unk_0xBF3D28CA44F3BE2D(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(&(uParam0->f_1));
			func_176();
			func_191(uParam1, (0,15f * 0,075f), 0,5f);
			unk_0x6FF322107B12B749(1);
			break;
		
		case 1:
			if (func_149() || unk_0x15CCE8886267624F())
			{
				*uParam0 = 2;
			}
			if (!func_376(uParam0->f_4, 4))
			{
				if (unk_0xD7E1DF759CD0FFF2("OFFMISSION_WASTED", 0, -1))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "Bed", "WastedSounds", 1);
					func_348(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(system::timera()) > (1500f * 0,2f))
			{
				if (!func_376(uParam0->f_4, 2))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "TextHit", "WastedSounds", 1);
					func_348(&(uParam0->f_4), 2);
				}
				func_188(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_188(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_178(0, 1);
				func_177(0, 1);
				func_176();
				if (*uParam5)
				{
					unk_0x72B1E2693AC30407(1);
				}
				else if (!uParam0->f_5)
				{
					func_187(0);
				}
				unk_0x6FF322107B12B749(0);
				unk_0xD43B9D1692F5C06E(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x40AC02FA167D4D0A(1);
				func_178(0, 1);
				func_177(0, 1);
				unk_0xB43467C43086A6A1("DEATH_SCENE");
				unk_0x6FF322107B12B749(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x6FF322107B12B749(0);
			return 1;
			break;
	}
	return 0;
}

void func_187(bool bParam0)
{
	if ((Global_44042 == 9 || Global_44042 == 10) || Global_44042 == 5)
	{
		Global_112615 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_112615 = 0;
	}
}

int func_188(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
			{
				unk_0x8F72AF14CE5AACE4(2500);
				unk_0xC0964AABD3C0CC7E();
			}
			if (bParam9)
			{
				unk_0x6FF322107B12B749(1);
			}
			unk_0xE6AC149D1121535D(0,2f);
			if (func_174(iParam5, 4))
			{
				if (unk_0xD7E1DF759CD0FFF2("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x88F483FBD433696A(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x882AEFD55B8D51FB("STRING");
			unk_0x4E5A3D96808F7F84(6);
			unk_0xACF853FB3F6EA7D4(sParam2);
			unk_0xCFAD3D478C87321A();
			func_172(sParam3);
			unk_0x330108B080A2132F(100);
			unk_0x557F1E2300EF1A3E(true);
			unk_0x6CA3F2B87712B6A4();
			if (func_174(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x88F483FBD433696A(*uParam0, "TRANSITION_UP");
					unk_0x74BF156C860580D4(uParam1->f_134);
					unk_0xE6B753D52F4CA222();
					uParam1->f_136 = 1;
				}
			}
			if (!func_174(iParam5, 1))
			{
				unk_0xD4510218399ED105(0);
			}
			func_277(&(uParam1->f_10), 0, 1, 1, 1);
			func_276(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_276(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_174(iParam5, 4))
			{
				unk_0xBF3D28CA44F3BE2D(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_174(iParam5, 8))
			{
				switch (func_179())
				{
					case 0:
						unk_0xDCAFFD08A08087EB("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0xDCAFFD08A08087EB("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0xDCAFFD08A08087EB("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_377(&(uParam1->f_1));
			}
			if (func_174(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_377(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x6B91FA4E397DAB8D();
			if (func_174(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x88F483FBD433696A(*uParam0, "TRANSITION_UP");
					unk_0x74BF156C860580D4(uParam1->f_134);
					unk_0xE6B753D52F4CA222();
					uParam1->f_136 = 1;
				}
			}
			unk_0xA4F67CEB594AE064(iParam6);
			func_190(uParam0, 0, 0);
			if (!func_174(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x15CCE8886267624F()))
			{
				func_168(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xA6DB7FC56DBDFB82();
				if (unk_0x2645430E708CBFAC(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xBF3D28CA44F3BE2D(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_174(iParam5, 1))
					{
						unk_0xD6D50527C75F8C6C(0);
					}
					func_189(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x2645430E708CBFAC(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_174(iParam5, 1))
					{
						unk_0xD6D50527C75F8C6C(0);
					}
					func_189(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_174(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_174(iParam5, 1))
					{
						unk_0xD6D50527C75F8C6C(0);
					}
					func_189(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_190(uParam0, 0, 0);
			unk_0xE6AC149D1121535D(1f);
			if (uParam1->f_138 || !((unk_0x1B79E937E91F40C3("stunt_plane_races", unk_0x1AF90EB93E0012D6()) || unk_0x1B79E937E91F40C3("pilot_school", unk_0x1AF90EB93E0012D6())) || (unk_0x1B79E937E91F40C3("bj", unk_0x1AF90EB93E0012D6()) && unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))))
			{
				unk_0x10B228D2FDB7AF16(2500);
			}
			if (func_174(iParam5, 64) && uParam1->f_138)
			{
				unk_0x8F72AF14CE5AACE4(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x6FF322107B12B749(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0,1f)
			{
				func_190(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_189(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xD314260005F064BF(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

int func_190(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0x4EB223432F8FA0A0(14);
	if (!bParam2)
	{
		unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x6D05C5731A838CB3(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_5(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_191(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_189(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_192(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_193(int iParam0, bool bParam1)
{
	switch (iLocal_1649)
	{
		case 0:
			func_25();
			func_210();
			func_206();
			iLocal_1649 = 1;
			break;
		
		case 1:
			if (func_205())
			{
				iLocal_1649 = 2;
			}
			break;
		
		case 2:
			func_194(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1649 = 0;
			}
			break;
	}
}

void func_194(int iParam0)
{
	switch (Local_43.f_10)
	{
		case 3:
			func_204(iParam0);
			func_203(iParam0);
			break;
		
		case 0:
			func_202(iParam0);
			func_201(iParam0);
			break;
		
		case 1:
			func_200(iParam0);
			func_198(iParam0);
			break;
		
		case 2:
			func_197(iParam0);
			func_196(iParam0);
			break;
		
		case 4:
			func_195(iParam0);
			break;
	}
}

void func_195(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_376(uLocal_1725, 1))
		{
			func_348(&uLocal_1725, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_376(uLocal_1725, 2))
		{
			func_348(&uLocal_1725, 2);
		}
	}
}

void func_196(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_1713[0]) && !func_376(uLocal_1715, 1))
		{
			uLocal_1713[0] = unk_0x5779387E956077A6(joaat("hauler"), -449,6041f, -2271,693f, 6,6086f, 267,5199f, 1, 1, 0);
			uLocal_1713[1] = unk_0x5779387E956077A6(joaat("tanker"), -449,6041f, -2271,693f, 6,6086f, 267,5199f, 1, 1, 0);
			unk_0xF89624E52FCBE454(uLocal_1713[0], uLocal_1713[1], 1065353216);
			uLocal_1714[0] = unk_0x8728A378EF2B46B2(uLocal_1713[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			func_348(&uLocal_1715, 1);
		}
		if (unk_0xA08EEC7306CF6198("SPR_Fluff_01"))
		{
			if (!unk_0x1C2F771CDC87A3A5(uLocal_1713[0], 0) && !unk_0x1C2F771CDC87A3A5(uLocal_1714[0], 0))
			{
				if (unk_0x9B5C1660CCDF7189(uLocal_1714[0], joaat("script_task_vehicle_follow_waypoint_recording")) == 1)
				{
				}
				else
				{
					unk_0x43E9B2BD3668B432(uLocal_1714[0], uLocal_1713[0], "SPR_Fluff_01", 786469, 0, 8, -1, unk_0x66C1D6E6DBF7AC9B(uLocal_1713[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_197(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_376(uLocal_1725, 1))
		{
			func_348(&uLocal_1725, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_376(uLocal_1725, 2))
		{
			func_348(&uLocal_1725, 2);
		}
	}
}

void func_198(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_1713[0]))
		{
			if (!func_376(uLocal_1715, 1))
			{
				if (func_199(&iLocal_1712))
				{
					uLocal_1713[0] = unk_0x5779387E956077A6(joaat("sanchez"), -2586,901f, 386,4225f, 208,0505f, 349,0836f, 1, 1, 0);
					func_348(&uLocal_1715, 1);
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(uLocal_1713[0]))
		{
			if (!unk_0xFC8BFE4B41177C22(uLocal_1714[0]))
			{
				if (!func_376(uLocal_1715, 2))
				{
					uLocal_1714[0] = unk_0x8728A378EF2B46B2(uLocal_1713[0], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_348(&uLocal_1715, 2);
				}
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uLocal_1713[0]) && !unk_0xFC8BFE4B41177C22(uLocal_1714[0]))
		{
			if (!unk_0x1C2F771CDC87A3A5(uLocal_1713[0], 0) && !unk_0x1C2F771CDC87A3A5(uLocal_1714[0], 0))
			{
				if (!unk_0x65FFA94B82A71741(uLocal_1713[0], -2530,873f, 608,701f, 238,9111f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x9B5C1660CCDF7189(uLocal_1714[0], joaat("script_task_vehicle_drive_to_coord")) == 1)
					{
					}
					else
					{
						unk_0xCF6CC9EA0D2EFE23(uLocal_1714[0], uLocal_1713[0], -2530,873f, 608,701f, 238,9111f, unk_0x66C1D6E6DBF7AC9B(uLocal_1713[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_1713[1]))
		{
			if (!func_376(uLocal_1716, 1))
			{
				if (func_199(&iLocal_1712))
				{
					uLocal_1713[1] = unk_0x5779387E956077A6(joaat("sanchez"), -2582,93f, 384,918f, 208,5764f, 336,8248f, 1, 1, 0);
					func_348(&uLocal_1716, 1);
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(uLocal_1713[1]))
		{
			if (!unk_0xFC8BFE4B41177C22(uLocal_1714[1]))
			{
				if (!func_376(uLocal_1716, 2))
				{
					uLocal_1714[1] = unk_0x8728A378EF2B46B2(uLocal_1713[1], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_348(&uLocal_1716, 2);
				}
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uLocal_1713[1]) && !unk_0xFC8BFE4B41177C22(uLocal_1714[1]))
		{
			if (!unk_0x1C2F771CDC87A3A5(uLocal_1713[1], 0) && !unk_0x1C2F771CDC87A3A5(uLocal_1714[1], 0))
			{
				if (!unk_0x65FFA94B82A71741(uLocal_1713[1], -2527,712f, 609,6833f, 239,2568f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x9B5C1660CCDF7189(uLocal_1714[1], joaat("script_task_vehicle_drive_to_coord")) == 1)
					{
					}
					else
					{
						unk_0xCF6CC9EA0D2EFE23(uLocal_1714[1], uLocal_1713[1], -2527,712f, 609,6833f, 239,2568f, unk_0x66C1D6E6DBF7AC9B(uLocal_1713[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!unk_0x6252BC0DD8A320DB((*iParam0)[iVar0]))
			{
				if (!unk_0x6252BC0DD8A320DB((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_200(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_376(uLocal_1725, 1))
		{
			func_348(&uLocal_1725, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_376(uLocal_1725, 2))
		{
			func_348(&uLocal_1725, 2);
		}
	}
}

void func_201(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_1713[0]) && !func_376(uLocal_1715, 1))
		{
			uLocal_1713[0] = unk_0x5779387E956077A6(joaat("jetmax"), -1429,102f, 2602,645f, -1,0709f, 85,2614f, 1, 1, 0);
			uLocal_1714[0] = unk_0x8728A378EF2B46B2(uLocal_1713[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			if (!unk_0x1C2F771CDC87A3A5(uLocal_1713[0], 0) && !unk_0x1C2F771CDC87A3A5(uLocal_1714[0], 0))
			{
				if (!unk_0x65FFA94B82A71741(uLocal_1713[0], -1552,281f, 2641,609f, -0,8283f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x9B5C1660CCDF7189(uLocal_1714[0], joaat("script_task_vehicle_mission")) == 1)
					{
					}
					else
					{
						unk_0x30CCF17FEE4BDA53(uLocal_1714[0], uLocal_1713[0], -1552,281f, 2641,609f, -0,8283f, 4, unk_0x66C1D6E6DBF7AC9B(uLocal_1713[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_348(&uLocal_1715, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_376(uLocal_1715, 1))
		{
			if (!unk_0x1C2F771CDC87A3A5(uLocal_1714[0], 0))
			{
				unk_0x734A9F4537A31459(&(uLocal_1714[0]));
			}
			if (!unk_0x1C2F771CDC87A3A5(uLocal_1713[0], 0))
			{
				unk_0x8C1F7D7A31B2A38E(&(uLocal_1713[0]));
			}
		}
	}
}

void func_202(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_376(uLocal_1725, 1))
		{
			func_348(&uLocal_1725, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_376(uLocal_1725, 2))
		{
			func_348(&uLocal_1725, 2);
		}
	}
}

void func_203(int iParam0)
{
	if (!func_376(uLocal_1715, 1))
	{
		if (iParam0 < 3)
		{
			if (unk_0x266D9DB5FCE4003B(101, "SPRStuntAF"))
			{
				unk_0xEA2D52183C7EA9CF(-943,8105f, -3173,692f, 12,9445f);
				if (!unk_0xFC8BFE4B41177C22(uLocal_1713[0]))
				{
					uLocal_1713[0] = unk_0x5779387E956077A6(joaat("jet"), -943,8105f, -3173,692f, 12,9445f, 60,537f, 1, 1, 0);
					unk_0x1DE99C193C7EC64B(uLocal_1713[0], 1084227584);
					unk_0xC229299217554C78(uLocal_1713[0], 1, 1, 0);
					if (Local_43.f_0 == 0)
					{
						unk_0xA9F7300B498DDED7(uLocal_1713[0]);
					}
					uLocal_1714[0] = unk_0x8728A378EF2B46B2(uLocal_1713[0], 4, joaat("s_m_m_highsec_01"), -1, 1, 1);
				}
				if (!unk_0x1C2F771CDC87A3A5(uLocal_1713[0], 0))
				{
					if (unk_0x65FFA94B82A71741(uLocal_1713[0], -943,8105f, -3173,692f, 12,9445f, 20f, 20f, 20f, 0, 1, 0))
					{
						if (!unk_0x050D073F91C5243C(uLocal_1713[0]))
						{
							unk_0x88556DA0593A0748(uLocal_1713[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!unk_0x050D073F91C5243C(uLocal_1713[0]))
					{
						if (!unk_0x1C2F771CDC87A3A5(uLocal_1714[0], 0))
						{
							if (!unk_0x9B5C1660CCDF7189(uLocal_1714[0], joaat("script_task_vehicle_drive_to_coord")) == 1)
							{
								unk_0xCF6CC9EA0D2EFE23(uLocal_1714[0], uLocal_1713[0], -6793,876f, -557,0385f, 781,0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(uLocal_1713[0], 0))
		{
			if (unk_0x050D073F91C5243C(uLocal_1713[0]))
			{
				unk_0x1D2DAF2A41FFC4A0(uLocal_1713[0]);
			}
			else
			{
				unk_0x8C1F7D7A31B2A38E(&(uLocal_1713[0]));
				func_348(&uLocal_1715, 1);
			}
		}
	}
	else if (!unk_0x1C2F771CDC87A3A5(uLocal_1713[0], 0))
	{
		unk_0xEA2D52183C7EA9CF(unk_0xD1A6A821F5AC81DB(uLocal_1713[0], 1));
	}
}

void func_204(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_376(uLocal_1725, 1))
		{
			func_348(&uLocal_1725, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_376(uLocal_1725, 2))
		{
			func_348(&uLocal_1725, 2);
		}
	}
}

int func_205()
{
	switch (Local_43.f_10)
	{
		case 3:
			if (func_199(&iLocal_1712) && unk_0x266D9DB5FCE4003B(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_199(&iLocal_1712))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_199(&iLocal_1712))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_199(&iLocal_1712) && unk_0xA08EEC7306CF6198("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_206()
{
	switch (Local_43.f_10)
	{
		case 3:
			func_208(&iLocal_1712, joaat("jet"));
			func_208(&iLocal_1712, joaat("s_m_m_highsec_01"));
			unk_0xD772E6694B8472A6(101, "SPRStuntAF");
			break;
		
		case 0:
			func_208(&iLocal_1712, joaat("jetmax"));
			func_208(&iLocal_1712, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_208(&iLocal_1712, joaat("sanchez"));
			func_208(&iLocal_1712, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_208(&iLocal_1712, joaat("hauler"));
			func_208(&iLocal_1712, joaat("tanker"));
			func_208(&iLocal_1712, joaat("s_m_m_dockwork_01"));
			unk_0xD04A772C411165F2("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_207(&iLocal_1712);
}

void func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			unk_0xEC9DAA34BBB4658C((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_208(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_209(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_209(var uParam0)
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

void func_210()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_376(uLocal_1725, iVar0))
		{
			func_374(&uLocal_1725, iVar0);
		}
		iVar0++;
	}
}

void func_211(var uParam0, int iParam1)
{
	func_212(uParam0, iParam1, 0);
}

void func_212(var uParam0, int iParam1, int iParam2)
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
	unk_0x0A0A06C514052E80(true);
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
		if (func_213(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_213(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

bool func_213(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_214(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = system::vdist(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_215());
		if (!unk_0x5561E31B168FA823(uLocal_1935))
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), func_215()) <= ((fVar0 * 1,5f) * (fVar0 * 1,5f)))
			{
				uLocal_1935 = unk_0x4F6F8824BE43F1F7(func_215(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_215(), 2000f, 12, 127);
			}
		}
		else if (!system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), func_215()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_267();
		}
	}
}

Vector3 func_215()
{
	switch (Local_43.f_10)
	{
		case 0:
			return -2591,965f, 2483,167f, 60,8904f;
			break;
		
		case 1:
			return 1827,956f, 585,8948f, 287,6289f;
			break;
		
		case 2:
			return 991,1072f, -2389,983f, 83,3701f;
			break;
		
		case 3:
			return -1721,049f, -2792,948f, 75,4149f;
			break;
		
		case 4:
			return -578,6125f, 5436,721f, 150,1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_216(var uParam0)
{
	if (func_249())
	{
		if (!Local_1928.f_0)
		{
			Local_1928.f_0 = 1;
			Local_1928.f_1 = 1;
		}
		else
		{
			Local_1928.f_1 = 0;
		}
	}
	else if (func_248())
	{
		if (!Local_1928.f_1 || func_247() >= 1f)
		{
			if (Local_1928.f_0)
			{
				Local_1928.f_0 = 0;
			}
		}
	}
	if (func_248())
	{
		func_246();
	}
	else
	{
		func_245();
	}
	if (Local_1928.f_0)
	{
		if (!func_244(Local_1928.f_2) && !func_242(Local_1928.f_2))
		{
			func_218(&uLocal_1901, Local_1928.f_2);
		}
		else
		{
			if (unk_0x78411E34CF90EA8C(Local_1928.f_6))
			{
				unk_0x85E6A1E36B5E2E4D(Local_1928.f_6, 0);
			}
			if (func_242(Local_1928.f_2))
			{
				Local_1928.f_2 = { func_217(uParam0) };
			}
			func_211(&uLocal_1901, 0);
			Local_1928.f_0 = 0;
		}
	}
	else if (unk_0x78411E34CF90EA8C(Local_1928.f_6))
	{
		unk_0x85E6A1E36B5E2E4D(Local_1928.f_6, 0);
	}
	else
	{
		if (func_242(Local_1928.f_2))
		{
			Local_1928.f_2 = { func_217(uParam0) };
		}
		func_211(&uLocal_1901, 0);
		Local_1928.f_0 = 0;
	}
}

Vector3 func_217(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_43.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_218(var uParam0, struct<3> Param1)
{
	func_219(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_219(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_212(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_220(uParam0, Param1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_220(var uParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
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
	if (func_213(iVar0))
	{
		func_241();
	}
	if (!unk_0xE37AC296E66C33AF())
	{
		if (func_236(uParam0, bParam4, bParam6, 0))
		{
			func_235(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_225(iVar0))
			{
				if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if ((unk_0x7B780C491DEC834E(Param1, 1f) && !unk_0x4C705AAF75363287()) && uParam5)
					{
						if (!func_213(iVar0))
						{
							func_317(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_224(1);
							}
						}
					}
				}
			}
		}
		else if (func_225(iVar0))
		{
			if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
			{
				if ((unk_0x7B780C491DEC834E(Param1, 1f) && !unk_0x4C705AAF75363287()) && uParam5)
				{
					if (!func_213(iVar0))
					{
						func_317(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
						{
							func_224(1);
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
			if (func_213(iVar0) && unk_0x4C705AAF75363287())
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
					func_212(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					func_212(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					func_212(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					func_212(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					func_212(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				func_212(uParam0, iVar0, 1);
			}
		}
		if (!func_236(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_223(uParam0))
			{
				func_221(uParam0);
			}
		}
	}
}

void func_221(var uParam0)
{
	if (func_222(unk_0x4A8C381C258A124D()))
	{
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(true);
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

int func_222(int iParam0)
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

int func_223(var uParam0)
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

int func_224(bool bParam0)
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

int func_225(char* sParam0)
{
	if (!func_226(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_213(sParam0)) || func_213("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_224(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_224(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_224(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_226(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_157(0))
	{
		return 0;
	}
	if (func_234())
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
	if ((func_233() || func_232(Global_4718592.f_185586)) || func_231())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_230(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_229(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_227(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0)
{
	if (iParam0 != func_228())
	{
		if (func_143(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_143(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_228()
{
	return -1;
}

int func_229(int iParam0, int iParam1)
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

int func_230(int iParam0, int iParam1)
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

var func_231()
{
	return Global_2684504.f_19;
}

bool func_232(int iParam0)
{
	return iParam0 == 51;
}

var func_233()
{
	return Global_2684504.f_18;
}

bool func_234()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

void func_235(var uParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0A0A06C514052E80(false);
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

int func_236(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_240(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_239(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_239(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_240(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_223(uParam0))
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
						if (!func_240(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_239(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_239(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_240(bParam1, bParam2, bParam3))
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
					if (!func_240(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_239(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_239(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
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
				else if (!func_240(bParam1, bParam2, bParam3))
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
						if (func_238(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_237(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_237(bParam1, bParam2, bParam3))
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
					else if (func_238(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_223(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_226(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_241();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_237(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_226(bParam0, bParam1, bParam2))
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

int func_238(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_226(bParam0, bParam1, bParam2))
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
				unk_0x0A0A06C514052E80(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_239(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_226(bParam0, bParam1, bParam2))
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

int func_240(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_226(bParam0, bParam1, bParam2))
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
				unk_0x0A0A06C514052E80(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_241()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

int func_242(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D());
	if (system::vdist2(Param0, func_243(unk_0x259BE71D8A81D4FA())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_243(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_244(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_245()
{
	Local_1928.f_5 = 0f;
}

void func_246()
{
	Local_1928.f_5 = (Local_1928.f_5 + unk_0x0B852B0BF94A8DC1());
}

float func_247()
{
	return Local_1928.f_5;
}

bool func_248()
{
	return unk_0x2645430E708CBFAC(0, 80);
}

bool func_249()
{
	return unk_0x6D05C5731A838CB3(0, 80);
}

void func_250(struct<3> Param0)
{
	func_211(&uLocal_1901, 0);
	Local_1928.f_2 = { Param0 };
}

void func_251(int iParam0, int iParam1)
{
	Global_101572.f_7 = iParam0;
	Global_101572.f_8 = iParam1;
}

void func_252(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

int func_253(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x9683D8208E71E46D(0);
	switch (iLocal_1648)
	{
		case 0:
			iLocal_192 = 0;
			Local_1897 = { func_215() };
			Local_1898 = { func_266() };
			fLocal_1899 = func_265();
			unk_0x37B894853929BF1A(0);
			unk_0x428C32CC68809A35(1);
			unk_0x406CBCEA35499884();
			iLocal_1648 = 1;
			break;
		
		case 1:
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (func_179() == 0)
				{
					unk_0xDCAFFD08A08087EB("MinigameEndMichael", 0, 0);
				}
				else if (func_179() == 1)
				{
					unk_0xDCAFFD08A08087EB("MinigameEndFranklin", 0, 0);
				}
				else if (func_179() == 2)
				{
					unk_0xDCAFFD08A08087EB("MinigameEndTrevor", 0, 0);
				}
				uLocal_1706 = unk_0x96A32328480B485C(26379945, Local_1897, Local_1898, fLocal_1899, 1, 2);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				if (bParam2)
				{
					unk_0x2A09425009DAD0F5(uLocal_1706, "HAND_SHAKE", 0,07f);
				}
				if (unk_0xD9F5E1FEFD1329E4(uParam0->f_358[0 /*189*/].f_9, 0) && unk_0x3F18810075C77D41(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x30CCF17FEE4BDA53(unk_0x4A8C381C258A124D(), uParam0->f_358[0 /*189*/].f_9, Local_1897.f_0, Local_1897.f_1, (Local_1897.f_2 + 15f), 4, unk_0xDF93B3CFAC96698F(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				unk_0x2ABEBC4952CA3C7F(uLocal_1706, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
				iLocal_1648 = 2;
			}
			break;
		
		case 2:
			unk_0xFC8624DF7EBA74FB(uLocal_1706);
			func_264(uLocal_1706);
			func_10(&uLocal_1702);
			iLocal_1648 = 3;
			break;
		
		case 3:
			if (func_263(&uLocal_1702, fLocal_1900))
			{
				func_10(&uLocal_1702);
				func_264(uLocal_1706);
				iLocal_1648 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (unk_0xCB5CAFF0A4A8B74B(uParam0->f_358[0 /*189*/].f_9) && unk_0x3F18810075C77D41(uParam0->f_358[0 /*189*/].f_9))
				{
					Local_1896 = { unk_0xD1A6A821F5AC81DB(uParam0->f_358[0 /*189*/].f_9, 1) };
					func_10(&uLocal_1702);
				}
				func_260(uLocal_1706, Local_1896);
			}
			if (func_107(&uLocal_1702) >= 1f)
			{
				iLocal_1648 = 5;
			}
			break;
		
		case 5:
			func_11(&uLocal_1702);
			if (unk_0x78411E34CF90EA8C(uLocal_1705))
			{
				unk_0x85E6A1E36B5E2E4D(uLocal_1705, 0);
			}
			unk_0xDCAFFD08A08087EB("MinigameTransitionIn", 0, 1);
			unk_0x584EE85BE0BFA70E(uLocal_1706, 0);
			Local_1897 = { unk_0xA452B06E281A9014(uLocal_1706) };
			Local_1898 = { unk_0x9DDBEF363FADFA4C(uLocal_1706, 2) };
			uLocal_1705 = unk_0x96A32328480B485C(26379945, Local_1897.f_0, Local_1897.f_1, (Local_1897.f_2 + 1000f), 90f, Local_1898.f_1, Local_1898.f_2, fLocal_1899, 0, 2);
			unk_0xB56F35D8A770F80F(uLocal_1705, uLocal_1706, 500, 1, 1);
			unk_0xBF3D28CA44F3BE2D(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1648 = 6;
			break;
		
		case 6:
			if (!unk_0x323C4A67159DAD02(uLocal_1705) && !unk_0x323C4A67159DAD02(uLocal_1706))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_43.f_106[Local_43.f_10])
				{
					unk_0xBF3D28CA44F3BE2D(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_43.f_106[Local_43.f_10] - Local_43.f_112[Local_43.f_10]) / 2f) + Local_43.f_112[Local_43.f_10]))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_43.f_112[Local_43.f_10])
				{
					unk_0xBF3D28CA44F3BE2D(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_259(1);
				}
				iLocal_1648 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
			}
			func_257(uParam0);
			func_66(&(Local_43.f_321), 1);
			func_11(&uLocal_1702);
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				sLocal_1891 = unk_0xA9CB3A11303C5801();
				unk_0x4DC72C4B884A6C59(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_1648 = 8;
			break;
		
		case 8:
			if (func_256(uParam0))
			{
				iLocal_1648 = 9;
			}
			break;
		
		case 9:
			unk_0xDCAFFD08A08087EB("MinigameTransitionOut", 0, 0);
			func_255(&uLocal_1707);
			func_251(1, 0);
			func_254(uParam0);
			func_16();
			func_251(0, 0);
			iLocal_1648 = 0;
			return 0;
			break;
	}
	func_446(uParam0, 0);
	return 1;
}

int func_254(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_43.f_106[Local_43.f_10])
	{
		unk_0xCCDB0041859B85A6(&(Local_43.f_24[Local_43.f_10 /*8*/]));
		return unk_0xD52B1CDE8B03CE86("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_43.f_106[Local_43.f_10] - Local_43.f_112[Local_43.f_10]) / 2f) + Local_43.f_112[Local_43.f_10]))
	{
		unk_0xCCDB0041859B85A6(&(Local_43.f_24[Local_43.f_10 /*8*/]));
		return unk_0xD52B1CDE8B03CE86("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_43.f_112[Local_43.f_10])
	{
		unk_0xCCDB0041859B85A6(&(Local_43.f_24[Local_43.f_10 /*8*/]));
		return unk_0xD52B1CDE8B03CE86("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_255(var uParam0)
{
	unk_0xD314260005F064BF(uParam0);
	*uParam0 = 0;
}

int func_256(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_17.f_2)))
	{
		func_11(&(uParam0->f_17.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_17.f_2));
	}
	if (!iLocal_1667)
	{
		if (fVar0 > 1f)
		{
			iLocal_1667 = 1;
		}
	}
	if (!iLocal_1668)
	{
		if (fVar0 > 4,25f)
		{
			unk_0x88F483FBD433696A(uParam0->f_17, "TRANSITION_OUT");
			unk_0x74BF156C860580D4(0,5f);
			unk_0xE6B753D52F4CA222();
			iLocal_1668 = 1;
		}
	}
	unk_0xA91A4C18A2DB01BD(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_1667 = 0;
		iLocal_1668 = 0;
		return 1;
	}
	return 0;
}

void func_257(var uParam0)
{
	char* sVar0;
	
	sVar0 = func_258(2);
	unk_0x88F483FBD433696A(uParam0->f_17, "RESET_MOVIE");
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_17, sVar0);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0xACF853FB3F6EA7D4("SPR_UI_PASS");
	unk_0xCFAD3D478C87321A();
	unk_0x882AEFD55B8D51FB(&(Local_43.f_24[Local_43.f_10 /*8*/]));
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(100f);
	unk_0x557F1E2300EF1A3E(true);
	unk_0xE6B753D52F4CA222();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_1667 = 0;
	iLocal_1668 = 0;
}

char* func_258(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_259(bool bParam0)
{
	char* sVar0;
	
	unk_0x8E1F26D6742EC167(0);
	switch (func_179())
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

void func_260(var uParam0, struct<3> Param1)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (!unk_0x78411E34CF90EA8C(uParam0))
	{
		return;
	}
	if (!unk_0xBC886554B5888A64(uParam0))
	{
		return;
	}
	Var1 = { unk_0x9DDBEF363FADFA4C(uParam0, 2) };
	Var2 = { unk_0xA452B06E281A9014(uParam0) };
	Var3 = { func_8(Var1.f_0, Var1.f_1, (Var1.f_2 + 90f)) };
	Var4 = { Param1 - Var2 };
	Var4 = { func_96(Var4) };
	fVar5 = unk_0x4964D7A2BFD2F9A3((Param1.f_2 - Var2.f_2), unk_0xED977E2AE2CB16EE(Param1, Var2, 0));
	fVar6 = unk_0x97BC40FFA2FFCCD2((Param1.f_0 - Var2.f_0), (Param1.f_1 - Var2.f_1));
	fVar6 = func_262(fVar6, -180f, 180f);
	fVar0 = func_95(func_8(fVar5, Var1.f_1, Var1.f_2), Var3);
	fVar7 = (fVar5 - Var1.f_0);
	if (fVar7 > 270f)
	{
		fVar7 = (fVar7 - 360f);
	}
	else if (fVar7 < -270f)
	{
		fVar7 = (fVar7 + 360f);
	}
	fVar5 = (Var1.f_0 + fVar7);
	if ((bLocal_1895 && fVar5 > Var1.f_0) || (!bLocal_1895 && fVar5 < Var1.f_0))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_1892 = (fLocal_1892 * 0,9f);
		Var1.f_0 = func_261(Var1.f_0, fVar5, fLocal_1892);
	}
	fVar8 = (fVar6 - Var1.f_2);
	if (fVar8 > 270f)
	{
		fVar8 = (fVar8 - 360f);
	}
	else if (fVar8 < -270f)
	{
		fVar8 = (fVar8 + 360f);
	}
	fVar6 = (Var1.f_2 + fVar8);
	if ((bLocal_1894 && (Var1.f_2 - fVar6) < 0f) || (!bLocal_1894 && (Var1.f_2 - fVar6) > 0f))
	{
		if (!bLocal_1894 && (Var1.f_2 - fVar6) > 0f)
		{
		}
		else if (bLocal_1894 && (Var1.f_2 - fVar6) < 0f)
		{
		}
		fLocal_1893 = (fLocal_1893 * 0,9f);
		Var1.f_2 = func_261(Var1.f_2, fVar6, fLocal_1893);
	}
	unk_0x5E5CEC33463AD803(uParam0, Var1, 2);
}

float func_261(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_262(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(system::round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_263(var uParam0, float fParam1)
{
	if (func_2(uParam0, fParam1))
	{
		func_4(uParam0);
		return 1;
	}
	return 0;
}

void func_264(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	
	unk_0xAAB58D9C726404C0(unk_0x4A8C381C258A124D(), &Var0, &uVar6, &uVar6, &Var1);
	Var5 = { unk_0x9DDBEF363FADFA4C(uParam0, 2) };
	Var4 = { unk_0xA452B06E281A9014(uParam0) };
	Var2 = { func_8((Var5.f_0 + 90f), Var5.f_1, Var5.f_2) };
	Var3 = { func_8(Var5.f_0, Var5.f_1, (Var5.f_2 + 90f)) };
	fLocal_1892 = 0,2f;
	fLocal_1893 = 0,5f;
	Var7 = { unk_0xA452B06E281A9014(uParam0) - Var1 };
	Var8 = { Var1 + FtoV(func_95(Var7, Var0)) * Var0 };
	if (Var8.f_2 > Var4.f_2)
	{
		bLocal_1895 = true;
	}
	else
	{
		bLocal_1895 = false;
	}
	fVar9 = func_95(Var8, Var2);
	fVar10 = func_95(Var8, Var3);
	if (fVar9 < 0f)
	{
		bLocal_1894 = true;
	}
	else
	{
		bLocal_1894 = false;
	}
}

float func_265()
{
	switch (Local_43.f_10)
	{
		case 0:
			return 46,9415f;
			break;
		
		case 1:
			return 37,9558f;
			break;
		
		case 2:
			return 48,4122f;
			break;
		
		case 3:
			return 35,2464f;
			break;
		
		case 4:
			return 42,5338f;
			break;
	}
	return 0f;
}

Vector3 func_266()
{
	switch (Local_43.f_10)
	{
		case 0:
			return -7,5758f, 0f, 148,5448f;
			break;
		
		case 1:
			return -1,0194f, 0,7478f, 23,0628f;
			break;
		
		case 2:
			return -5,3368f, 0,0006f, 158,257f;
			break;
		
		case 3:
			return -1,3523f, 0f, 0,0891f;
			break;
		
		case 4:
			return 18,1009f, -0,5992f, -103,0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_267()
{
	unk_0x6981C3213B841071();
	if (unk_0x5561E31B168FA823(uLocal_1935))
	{
		unk_0x6C730FCE8A68AF6F(uLocal_1935);
	}
}

void func_268()
{
	unk_0xC0964AABD3C0CC7E();
	func_269();
}

void func_269()
{
	Global_23692.f_134 = 1;
}

void func_270(int iParam0)
{
	if (Global_44042 == 9 || Global_44042 == 10)
	{
		Global_112616 = iParam0;
	}
	else
	{
		Global_112616 = 0;
	}
}

void func_271(bool bParam0)
{
	unk_0x0A0A06C514052E80(!bParam0);
}

void func_272()
{
	func_273();
	unk_0x0A0A06C514052E80(true);
}

void func_273()
{
	Local_1928.f_0 = 0;
	Local_1928.f_1 = 0;
	Local_1928.f_2 = { 0f, 0f, 0f };
	Local_1928.f_6 = 0;
	Local_1928.f_5 = 0f;
}

bool func_274(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(sParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

void func_275(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_170(&(uParam0->f_1), 16);
	}
	else
	{
		func_169(&(uParam0->f_1), 16);
	}
}

int func_276(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2[iVar1 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_277(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5AF05959A6F22BB4("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_170(&(uParam0->f_1), 32);
	}
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_170(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x2EE4366DBD59BB7A(*uParam0, 1);
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (bParam3)
		{
			func_170(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_170(&(uParam0->f_1), 8192);
	}
}

void func_278(var uParam0)
{
	func_279(uParam0);
	system::settimera(0);
	func_251(1, 0);
	func_16();
}

void func_279(var uParam0)
{
	func_316(&(uParam0->f_1871));
	func_294(&(uParam0->f_1871.f_741));
	func_280(&(uParam0->f_1871));
}

void func_280(var uParam0)
{
	func_293(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	func_293(&(uParam0->f_316[1 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 127f, 1);
	func_293(&(uParam0->f_316[2 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 297f, 1);
	func_293(&(uParam0->f_316[3 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 324f, 1);
	func_293(&(uParam0->f_316[4 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 351f, 1);
	func_293(&(uParam0->f_316[5 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 378f, 1);
	func_293(&(uParam0->f_316[6 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 405f, 1);
	func_293(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	func_293(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	func_293(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	func_293(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	func_293(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	func_293(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	func_293(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	func_293(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_289(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_288(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_289(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_288(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_288(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[6 /*9*/], 258,5f, 482,5f, 80f, 80f, 1);
	func_288(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[5 /*9*/], 344f, 482,5f, 80f, 80f, 1);
	func_288(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[4 /*9*/], 429,5f, 482,5f, 80f, 80f, 1);
	func_288(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_283(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_282(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	func_283(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_282(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	func_283(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_281(&(uParam0->f_420[2 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[3 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[4 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[5 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[6 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_281(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_281(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_281(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_281(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_281(&(uParam0->f_420[14 /*8*/]), 107, 1);
	func_283(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_281(&(uParam0->f_420[15 /*8*/]), 108, 1);
	func_283(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_281(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_281(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA306E6FD2A6558E6(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_283(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_287(uParam0, fParam3, fParam4);
	func_284(uParam0, fParam1, fParam2, bParam5);
}

void func_284(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_286(fParam1, 1280);
	uParam0->f_1 = func_285(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_285(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x5949C3C031610A30(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_286(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x5949C3C031610A30(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_287(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_286(fParam1, 1280);
	uParam0->f_3 = func_285(fParam2, 720);
}

void func_288(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_289(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_291(fParam0, fParam3, fParam4);
	func_290(fParam0, fParam1, fParam2, bParam5);
}

void func_290(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_286(fParam1, 1280);
	uParam0->f_1 = func_285(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_291(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_286(fParam1, 1280);
	uParam0->f_3 = func_285(fParam2, 720);
}

float func_292(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x5949C3C031610A30(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return system::to_float(system::round(fVar1));
	}
	return fVar1;
}

void func_293(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_286(fParam1, 1280);
	uParam0->f_1 = func_285(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_294(var uParam0)
{
	func_315(uParam0, 0);
	func_314(&(uParam0->f_11), 0);
	func_313(&(uParam0->f_66), 0);
	func_312(&(uParam0->f_77), 0);
	func_311(&(uParam0->f_33), 0);
	func_310(&(uParam0->f_44), 0);
	func_309(&(uParam0->f_55), 0);
	func_308(&(uParam0->f_143), 0);
	func_307(&(uParam0->f_22), 0);
	func_306(&(uParam0->f_154), 0);
	func_305(&(uParam0->f_88), 0, 0);
	func_304(&(uParam0->f_99), 0, 5);
	func_303(&(uParam0->f_110), 0);
	func_302(&(uParam0->f_121), 0);
	func_301(&(uParam0->f_132), 0);
	func_300(&(uParam0->f_165), 0);
	func_299(&(uParam0->f_176), 0);
	func_298(&(uParam0->f_187), 0);
	func_297(&(uParam0->f_198), 0);
	func_296(&(uParam0->f_209), 0);
	func_295(&(uParam0->f_220), 0);
}

void func_295(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0,45f;
	uParam0->f_2 = 0,45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 29;
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,275f;
	uParam0->f_2 = 0,275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 28;
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,3375f;
	uParam0->f_2 = 0,3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 27;
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,35f;
	uParam0->f_2 = 0,35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 26;
}

void func_299(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,325f;
	uParam0->f_2 = 0,325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 25;
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,6f;
	uParam0->f_2 = 0,6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 24;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,315f + 0,183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,5f + 0,004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 13;
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = 5;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = ((0,628f - 0,18f) - 0,058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 12;
}

void func_304(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,889f - 0,01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10;
}

void func_305(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = ((((((0,469f + 0,096f) - 0,017f) + 0,022f) - 0,062f) - 0,001f) - 0,013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_306(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_307(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 2;
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 22;
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 5;
}

void func_310(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 4;
}

void func_311(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 3;
}

void func_312(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = 0,655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 8;
}

void func_313(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = 0,628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

void func_314(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 1;
}

void func_315(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
}

void func_316(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0;
		(uParam0[iVar0 /*9*/])->f_5 = 0;
		(uParam0[iVar0 /*9*/])->f_6 = 0;
		(uParam0[iVar0 /*9*/])->f_7 = 0;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_317(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_318(var uParam0)
{
	func_323();
	switch (iLocal_1934)
	{
		case 0:
			func_10(uParam0);
			func_322(&uLocal_1929, 3);
			iLocal_1934 = 1;
			break;
		
		case 1:
			if (func_2(uParam0, 1f))
			{
				func_319(&uLocal_1929, 1, 0, 1, 3, 1, 0, 0);
				iLocal_1934 = 2;
			}
			break;
		
		case 2:
			if (func_319(&uLocal_1929, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_319(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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
		func_321(&(uParam0->f_2), 1);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0xA4F67CEB594AE064(1);
	unk_0x6D16B99FEB0AFFF1(*uParam0, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
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
				fVar3 = (func_6(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(uParam0->f_2));
					if (func_376(uParam0->f_1, 1))
					{
						func_348(&(uParam0->f_1), 8);
						unk_0xA306E6FD2A6558E6(18, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0x88F483FBD433696A(*uParam0, "SET_MESSAGE");
						func_172("CNTDWN_GO");
						unk_0x330108B080A2132F(iVar5);
						unk_0x330108B080A2132F(iVar6);
						unk_0x330108B080A2132F(iVar7);
						unk_0x557F1E2300EF1A3E(true);
						unk_0xE6B753D52F4CA222();
						return 1;
					}
					func_11(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = system::floor(fVar3);
	}
	else
	{
		iVar4 = system::floor(func_5(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_376(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_376(uParam0->f_1, 1))
		{
			func_348(&(uParam0->f_1), 1);
			unk_0xBF3D28CA44F3BE2D(-1, sVar0, sVar2, 1);
			func_322(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_376(uParam0->f_1, 2))
		{
			func_348(&(uParam0->f_1), 2);
			unk_0xBF3D28CA44F3BE2D(-1, sVar0, sVar2, 1);
			func_322(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_376(uParam0->f_1, 4))
		{
			func_348(&(uParam0->f_1), 4);
			unk_0xBF3D28CA44F3BE2D(-1, sVar0, sVar2, 1);
			func_322(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_376(uParam0->f_1, 16))
		{
			if (unk_0x1D5CD3EAAA7422B0((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0,65f)
			{
				if (bParam5 || bParam6)
				{
					func_348(&(uParam0->f_1), 16);
					unk_0xBF3D28CA44F3BE2D(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar9 >= 0 && !func_376(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0xBF3D28CA44F3BE2D(-1, sVar1, sVar2, 1);
			}
			func_348(&(uParam0->f_1), 8);
			unk_0xA306E6FD2A6558E6(18, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0x88F483FBD433696A(*uParam0, "SET_MESSAGE");
			func_172("CNTDWN_GO");
			unk_0x330108B080A2132F(iVar11);
			unk_0x330108B080A2132F(iVar12);
			unk_0x330108B080A2132F(iVar13);
			unk_0x557F1E2300EF1A3E(true);
			unk_0xE6B753D52F4CA222();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_320()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_4(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_320()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x6D05C5731A838CB3(0, 18) || unk_0x6D05C5731A838CB3(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_321(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0, 4);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0, 4);
	}
	if (BitTest(*uParam0, 4))
	{
	}
}

void func_322(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0xA306E6FD2A6558E6(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x88F483FBD433696A(*uParam0, "SET_MESSAGE");
	unk_0x4E5A3D96808F7F84(-1);
	unk_0x882AEFD55B8D51FB("NUMBER");
	unk_0x511D14ED2DA887E1(unk_0x510D0699BE9C6D06(iParam1));
	unk_0xCFAD3D478C87321A();
	unk_0x330108B080A2132F(iVar0);
	unk_0x330108B080A2132F(iVar1);
	unk_0x330108B080A2132F(iVar2);
	unk_0x557F1E2300EF1A3E(true);
	unk_0xE6B753D52F4CA222();
}

void func_323()
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_112999;
	func_324(Var0, 0, 0, 0, 0, iVar1);
}

void func_324(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	if (Global_79644 != 6)
	{
		if (Global_79646 == -1)
		{
			if (func_338(1, Param0))
			{
				if (Global_79647 == 3)
				{
					fVar0 = 1,5f;
				}
				else
				{
					fVar0 = 2,5f;
				}
				if (fLocal_27 > fVar0)
				{
					Global_79646 = unk_0x1DD05E817C89C737();
					Local_28 = { unk_0x93FAFC10F21C7ACA(15) };
					fLocal_27 = 0f;
				}
				else
				{
					fLocal_27 = (fLocal_27 + unk_0x0B852B0BF94A8DC1());
				}
			}
			else
			{
				fLocal_27 = 0f;
			}
		}
		else
		{
			if (!func_338(0, Param0))
			{
				Global_79646 = (unk_0x1DD05E817C89C737() - 9000);
			}
			unk_0x4EB223432F8FA0A0(7);
			unk_0x4EB223432F8FA0A0(6);
			unk_0x4EB223432F8FA0A0(8);
			unk_0x4EB223432F8FA0A0(9);
			iVar1 = (unk_0x1DD05E817C89C737() - Global_79646);
			if (iVar1 < 9000 && !unk_0x15CCE8886267624F())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = system::ceil(((system::to_float(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = system::ceil(((system::to_float(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_79644)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0,07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0,077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0,05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0,035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0,014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0,014f;
						break;
				}
				unk_0x9A122D542F2BB60E(82, 66);
				unk_0x8413CD3BCEEAD8DC(1);
				unk_0x2873B596E322DCDA(2);
				iVar11 = func_179();
				if (Global_79647 == 1 && Global_79645 == 62)
				{
					iVar11 = Global_113969.f_2366.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						unk_0xA306E6FD2A6558E6(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						unk_0xA306E6FD2A6558E6(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						unk_0xA306E6FD2A6558E6(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				unk_0x5A18938160AE52D0(iVar7, iVar8, iVar9, iVar2);
				unk_0x2B50C29142312934();
				Var4 = { func_327(Global_79645, Global_79647, iParam5) };
				if (fVar6 == -0,014f)
				{
				}
				unk_0x9C066F8D86A1A438(fVar5, fVar6, 0f, 0,01f);
				unk_0xBFE94E91C83D8794(0,67f, 0,67f);
				if (!unk_0x485ADB2D2728D748() && !unk_0xC003EE4BA64FE66C())
				{
					fLocal_30 = 0,14f;
				}
				else
				{
					fLocal_30 = 0,17f;
				}
				if (fVar6 == -0,014f)
				{
					if (func_326(&Var4) > fLocal_30)
					{
						if (unk_0x7B035E8A1D320F1B(15))
						{
							unk_0x36A472841BBC9D4A(15, Local_28.f_0, (Local_28.f_1 + fLocal_29));
							Global_79649 = 1;
						}
					}
				}
				unk_0xEAEB6E7D3FAEBD5B(&Var4);
				unk_0x25DD447A6EB3A86F(fVar5, fVar6, 0);
				unk_0x90B531766063C5CD();
				if (Global_79648 == 1)
				{
					func_325();
					fLocal_27 = 0f;
				}
			}
			else
			{
				func_325();
				fLocal_27 = 0f;
			}
		}
	}
}

void func_325()
{
	if (Global_79644 != 6)
	{
	}
	if (Global_79649)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_79649 = 0;
		Global_23831.f_9116 = 0;
	}
	Global_79644 = 6;
	Global_79646 = -1;
	Global_79645 = -1;
}

float func_326(var uParam0)
{
	unk_0x282D5DA1EE14950F(uParam0);
	return unk_0x43026780D77E3DC0(1);
}

struct<2> func_327(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_337(iParam0) };
			break;
		
		case 7:
			Var0 = { func_335(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_334(iParam2) };
					break;
				
				case 8:
					Var0 = { func_333(iParam2) };
					break;
				
				case 7:
					Var0 = { func_332(iParam2) };
					break;
				
				case 10:
					Var0 = { func_331(iParam2) };
					break;
				
				case 5:
					Var0 = { func_330(iParam2) };
					break;
				
				case 4:
					Var0 = { func_329(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_328(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_329(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_330(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_331(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_332(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_333(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xD6F9DEE4765092A9(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_334(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_335(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_336(iParam0) };
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

struct<2> func_336(int iParam0)
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

struct<2> func_337(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_92301[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_113969.f_9088.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_338(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_340(0) || Global_79660) || Global_79648 == 1) || !unk_0x9390801B06EE998F())
	{
		return 0;
	}
	switch (Global_79644)
	{
		case 0:
			if (unk_0x1B79E937E91F40C3(&uParam1, "NONE") || unk_0xD6F9DEE4765092A9(&uParam1))
			{
				Global_79644 = 3;
			}
			else
			{
				Global_79644 = 1;
			}
			break;
		
		case 1:
			if (unk_0x0DDDD9D153BCF51F())
			{
				Global_79644 = 2;
			}
			break;
		
		case 2:
			if (unk_0xFD216000DC314A92())
			{
				Global_79644 = 4;
				return 1;
			}
			else if (!unk_0x0CB7695268A7F50F())
			{
				Global_79644 = 3;
			}
			break;
		
		case 3:
			if (unk_0xFD216000DC314A92())
			{
			}
			else
			{
				Global_79644 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0xFD216000DC314A92())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_79644 = 5;
			}
			break;
		
		case 5:
			if ((unk_0xFD216000DC314A92() || func_157(0)) || func_339(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_339(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

int func_340(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_341(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_341(int iParam0)
{
	return func_342(iParam0, Global_44042);
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_343(var uParam0)
{
	char cVar0[16];
	int iVar1;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_43.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_1721 = 0;
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	if (Local_43.f_0 == 0)
	{
		unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&uLocal_2024);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		func_344(&(uParam0->f_358[iVar1 /*189*/]));
		if (Local_43.f_0 != 1)
		{
			if (iVar1 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
			}
		}
		else if (bLocal_2032)
		{
			if (iVar1 > 0)
			{
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_358[iVar1 /*189*/].f_9, 0))
				{
					if (iVar1 == 1 && Local_43.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0x43E9B2BD3668B432(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, unk_0x66C1D6E6DBF7AC9B(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar1 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
		}
		iVar1++;
	}
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		unk_0x4DC72C4B884A6C59(uParam0->f_358[0 /*189*/].f_9, 1);
		if (!unk_0xD6F9DEE4765092A9(sLocal_1891))
		{
			unk_0x166878629B365828(sLocal_1891);
			unk_0x38911F7BA2D48F10(uParam0->f_358[0 /*189*/].f_9, sLocal_1891);
		}
	}
}

void func_344(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_8, 0))
		{
			if (unk_0x050D073F91C5243C(uParam0->f_9))
			{
				unk_0x1D2DAF2A41FFC4A0(uParam0->f_9);
			}
			unk_0xAAA71DD7E9059338(uParam0->f_8, 1);
		}
	}
	uParam0->f_11 = 0;
	if (!unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0))
	{
		if (!unk_0x78B050AFBA6D1517(uParam0->f_22))
		{
			unk_0xC229299217554C78(uParam0->f_9, 1, 1, 0);
		}
	}
}

var func_345()
{
	return unk_0x8DE4F68A9728925E("MP_BIG_MESSAGE_FREEMODE");
}

void func_346(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
}

void func_347(var uParam0)
{
	int iVar0;
	
	if (unk_0xE916D57851F785AB(unk_0xB6B621402486C3E4()))
	{
		unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_348(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_349(var uParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar1 = -1;
	if (iParam1 == (uParam0->f_12 - 1))
	{
		iVar1 = 38;
	}
	fVar2 = 1,2f;
	if (!bParam2)
	{
		fVar2 = 0,7f;
	}
	if (!func_355(&(uParam0->f_27[iParam1 /*10*/]), iVar1, fVar2, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		Var3 = { uParam0->f_27[iParam1 /*10*/] };
		Var4 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!func_73(uParam0->f_27[iParam1 /*10*/], uParam0->f_27[iParam1 + 1 /*10*/], 1056964608, 0))
			{
				Var3 = { uParam0->f_27[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_43.f_0 == 1)
		{
			if (Local_43.f_10 == 1)
			{
				if (func_376(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					func_374(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var4 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_350(Var4, &(uParam0->f_27[iParam1 /*10*/]), Var3, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { uParam0->f_27[0 /*10*/] };
			}
			else
			{
				Var0 = { uParam0->f_27[iParam1 + 2 /*10*/] };
			}
			if (!func_350(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_350(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)
{
	if (!func_351(Param0, uParam1, Param2, fParam3))
	{
		return 0;
	}
	return 1;
}

int func_351(struct<3> Param0, var uParam1, struct<3> Param2, var uParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	Param0 = { Param0 };
	func_80(&(uParam1->f_6));
	if (uParam1->f_7 == 2)
	{
		uVar0 = func_353(uParam1->f_7, Param0, *uParam1, Param2);
		func_603(func_604(func_92()), &uVar1, &uVar2, &uVar3, &uVar4);
		uParam1->f_6 = unk_0xDCC9FF4954D6DCB1(uVar0, *uParam1, Param2, uParam3, uVar1, uVar2, uVar3, func_91(*uParam1, 25, 200), 0);
	}
	else if (uParam1->f_7 == 3)
	{
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			func_603(func_604(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = unk_0xDCC9FF4954D6DCB1(func_352(uParam1->f_7, uParam1->f_8), *uParam1, Param2, uParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
		else if (uParam1->f_8 == 1)
		{
			func_603(func_604(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = unk_0xDCC9FF4954D6DCB1(func_352(uParam1->f_7, uParam1->f_8), *uParam1, Param2, uParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
	}
	else
	{
		uParam1->f_6 = unk_0xDCC9FF4954D6DCB1(func_352(uParam1->f_7, uParam1->f_8), *uParam1, Param2, uParam3, 254, 207, 12, func_91(*uParam1, 25, 200), 0);
	}
	if (uParam1->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_352(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 37;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 38;
			}
			else if (iParam1 == 3)
			{
				return 39;
			}
			else if (iParam1 == 1)
			{
				return 40;
			}
			break;
		
		case 4:
			return 16;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 32;
			break;
		
		case 7:
			return 22;
			break;
		
		case 8:
			return 26;
			break;
		
		case 9:
			return 31;
			break;
		
		case 10:
			return 36;
			break;
	}
	return 6;
}

int func_353(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	struct<3> Var0;
	struct<3> Var1;
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
	if (iParam0 == 0)
	{
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 8;
	}
	else if (iParam0 == 2)
	{
		iVar6 = 12;
		iVar7 = 13;
		iVar8 = 14;
	}
	else if (iParam0 == 5)
	{
		iVar6 = 27;
		iVar7 = 28;
		iVar8 = 29;
	}
	else if (iParam0 == 6)
	{
		iVar6 = 32;
		iVar7 = 33;
		iVar8 = 34;
	}
	else if (iParam0 == 7)
	{
		iVar6 = 22;
		iVar7 = 23;
		iVar8 = 24;
	}
	if (!func_354(Param1, 0f, 0f, 0f, 0))
	{
		Var0 = { Param1 - Param2 };
		Var1 = { Param3 - Param2 };
		fVar2 = unk_0x20A3B1C2EC4167BB(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
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

bool func_354(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_355(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_356(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_356(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0);
	*uParam0 = unk_0x34864AB7DA700AA6(Param1);
	if (!unk_0xC450B06E5AAA0985(*uParam0))
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		unk_0x4C905FB262965D5D(*uParam0, iParam2);
	}
	unk_0x5D3946F818C6B331(*uParam0, uParam3);
	unk_0xF55F62DA99DB0C2F(*uParam0, 4);
	if (iParam6 == 2 || iParam6 == 3)
	{
		unk_0x61183D6239A9D7B8(*uParam0, 2);
	}
	if (iParam6 == 1)
	{
		unk_0x61183D6239A9D7B8(*uParam0, 3);
	}
	if (iParam4 == (iParam5 - 1))
	{
		unk_0xF3D182B81172EAB6("GATEBLIPFIN");
		unk_0xFB605529038475D2(*uParam0);
	}
	else
	{
		if (iParam6 == 1)
		{
			unk_0xF3D182B81172EAB6("GATEBLIPINV");
		}
		else if (iParam6 == 2 || iParam6 == 3)
		{
			unk_0xF3D182B81172EAB6("GATEBLIPKNF");
		}
		else
		{
			unk_0xF3D182B81172EAB6("GATEBLIPDEF");
		}
		unk_0xFB605529038475D2(*uParam0);
	}
	return 1;
}

void func_357(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 0);
}

int func_358(var uParam0)
{
	switch (uParam0->f_25)
	{
		case 0:
			func_151(1);
			unk_0xD0D00ED689D6CA81("MPHUD", 0);
			Local_43.f_118 = func_371();
			switch (Local_43.f_0)
			{
				case 0:
					unk_0xD0D00ED689D6CA81("SPRRaces", 0);
					unk_0xD0D00ED689D6CA81("MPMedals_FEED", 0);
					break;
				
				case 1:
					unk_0xD0D00ED689D6CA81("SPROffroad", 0);
					break;
				
				case 2:
					unk_0xD0D00ED689D6CA81("Triathlon", 0);
					unk_0xD0D00ED689D6CA81("MPMedals_FEED", 0);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_366(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_361(uParam0))
			{
				if (unk_0x38D063D8CF6D1967("MPHUD"))
				{
					if (unk_0xA0C7B98BCF1EEF9E(Local_43.f_118))
					{
						switch (Local_43.f_0)
						{
							case 0:
								if (unk_0x38D063D8CF6D1967("SPRRaces") && unk_0x38D063D8CF6D1967("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (unk_0x38D063D8CF6D1967("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (unk_0x38D063D8CF6D1967("Triathlon") && unk_0x38D063D8CF6D1967("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			unk_0xAC7090FFDF63A3A0(unk_0x259BE71D8A81D4FA());
			if (Local_43.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_359(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		
		case 4:
			if (Local_43.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (unk_0xFC8BFE4B41177C22(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x5D7CD709B34C90F0(uParam0->f_358[0 /*189*/].f_9, 1);
				}
				if (!unk_0x787F8EE1F6FBDC6D())
				{
					unk_0xEA2D52183C7EA9CF(uParam0->f_358[0 /*189*/].f_16);
					unk_0xAC48F8E2BF2BEBF7(uParam0->f_358[0 /*189*/].f_16, unk_0x90D0E0397D3F7690(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (unk_0x9E2D35FA908F57B4())
				{
					unk_0x6981C3213B841071();
					if (unk_0xFC8BFE4B41177C22(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x5D7CD709B34C90F0(uParam0->f_358[0 /*189*/].f_9, 0);
					}
					func_347(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_359(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_360(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_360(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_147(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_147(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_361(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_362(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_362(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_363(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_363(var uParam0)
{
	if (!func_365(uParam0) || !func_364(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_364(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return unk_0x6252BC0DD8A320DB(uParam0->f_22);
}

bool func_365(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return unk_0x6252BC0DD8A320DB(uParam0->f_21);
}

void func_366(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_367(uParam0, iVar0);
		iVar0++;
	}
}

void func_367(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_368(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_368(var uParam0)
{
	func_370(uParam0);
	func_369(uParam0);
}

void func_369(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	unk_0xEC9DAA34BBB4658C(uParam0->f_22);
}

void func_370(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	unk_0xEC9DAA34BBB4658C(uParam0->f_21);
}

var func_371()
{
	return unk_0x8DE4F68A9728925E("SC_LEADERBOARD");
}

int func_372(int iParam0)
{
	if (unk_0x9390801B06EE998F())
	{
		unk_0x8F72AF14CE5AACE4(iParam0);
	}
	else if (unk_0x15CCE8886267624F())
	{
		return 1;
	}
	return 0;
}

void func_373()
{
	if (unk_0x78411E34CF90EA8C(uLocal_1705))
	{
		if (unk_0xBC886554B5888A64(uLocal_1705))
		{
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x4CBC5D1BC117616B(uLocal_1705, 0);
		}
		unk_0x85E6A1E36B5E2E4D(uLocal_1705, 0);
	}
}

void func_374(int iParam0, int iParam1)
{
	func_375(iParam0, iParam1);
}

void func_375(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_376(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_377(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_11(uParam0);
	}
}

void func_378()
{
	func_379(&uLocal_1209, 0);
}

void func_379(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_445(uParam0);
		func_384(uParam0);
		func_383(&Global_2101867);
	}
	if (Global_2097536.f_2708 != 0 || Global_2097536.f_3184)
	{
		func_381();
	}
	if (unk_0xBC2EE32DE886BD08("LEADERBOARD_SCENE"))
	{
		unk_0xB43467C43086A6A1("LEADERBOARD_SCENE");
	}
	if (unk_0x261E3728EE56B3AC())
	{
		func_380(&(Global_2103068.f_49));
	}
	Global_2738934.f_4084 = 0;
}

void func_380(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_381()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_2097536[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_2097536.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2708 = 0;
	Global_2097536.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_2097536.f_2710[iVar0] = 0;
		StringCopy(&(Global_2097536.f_2717[iVar0 /*6*/]), "", 24);
		Global_2097536.f_2754[iVar0] = 0;
		Global_2097536.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2768 = 0;
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2771[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2779 = 0;
	func_382(&(Global_2097536.f_2780));
	func_380(&(Global_2097536.f_2823));
	Global_2097536.f_2825 = -1;
	Global_2097536.f_2826 = 0;
	func_380(&(Global_2097536.f_2827));
	Global_2097536.f_2829 = 0;
	func_380(&(Global_2097536.f_2830));
	Global_2097536.f_2832 = 0;
	Global_2097536.f_2780.f_28 = 0;
	Global_2097536.f_2780.f_27 = 0;
	Global_2097536.f_3184 = 0;
}

void func_382(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_383(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_380(&(Global_2097536.f_2830));
}

void func_384(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_380(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_385(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = 0;
	func_380(&(Global_2097152.f_1));
	unk_0x92E48B0F5D4E76F2(*uParam2, uParam2->f_1, -1);
}

int func_386(var uParam0, var uParam1)
{
	if (!func_437())
	{
		return 0;
	}
	if (func_431(&bLocal_188, uParam0))
	{
		if (iLocal_190 || bLocal_189)
		{
			hud::set_warning_message_with_header("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, false, -1, 0, 0, true, 0);
			if (!*uParam1)
			{
				if (iLocal_190)
				{
					if (func_3(&uLocal_185))
					{
						if (func_263(&uLocal_185, system::to_float(0)))
						{
							iLocal_190 = 0;
							bLocal_189 = !bLocal_189;
						}
					}
					else
					{
						func_11(&uLocal_185);
					}
				}
				else
				{
					unk_0x4EB223432F8FA0A0(9);
					unk_0x4EB223432F8FA0A0(7);
					func_168(&(Local_43.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_391();
		}
		return 0;
	}
	if (bLocal_188)
	{
		func_390();
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0x999C62072AF920FD(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1);
		}
	}
	else
	{
		Local_43.f_10 = -1;
	}
	func_387();
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x999C62072AF920FD(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1);
	}
	return 1;
}

void func_387()
{
	unk_0x428C32CC68809A35(1);
	unk_0xA790E8E6FD7393AC(3, 1);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	}
	if (unk_0x47CB3D397940E783("MinigameTransitionIn"))
	{
		unk_0x21172E4DF035B893("MinigameTransitionIn");
	}
	unk_0xDCAFFD08A08087EB("MinigameTransitionOut", 0, 0);
	iLocal_184 = 0;
	unk_0x98E393364463951A(0);
	func_151(0);
	func_388();
}

void func_388()
{
	Global_21152 = 0;
	func_389();
}

void func_389()
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

void func_390()
{
	switch (Global_112999)
	{
		case 0:
			Local_43.f_10 = 0;
			break;
		
		case 1:
			Local_43.f_10 = 1;
			break;
		
		case 2:
			Local_43.f_10 = 2;
			break;
		
		case 3:
			Local_43.f_10 = 3;
			break;
		
		case 4:
			Local_43.f_10 = 4;
			break;
	}
}

void func_391()
{
	unk_0x43AE50D2A33F6E2A();
	func_392(&uLocal_222);
}

void func_392(var uParam0)
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
	
	if (!bLocal_221)
	{
		if (!unk_0x761778199FE1211C())
		{
			unk_0xD46356460DA60CB1(1);
		}
	}
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(7);
	func_168(&(Local_43.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_423("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_418(uParam0->f_420[0 /*8*/], 0, 0);
	func_418(uParam0->f_420[1 /*8*/], 0, 0);
	func_418(uParam0->f_420[2 /*8*/], 0, 0);
	func_418(uParam0->f_420[3 /*8*/], 0, 0);
	func_418(uParam0->f_420[4 /*8*/], 0, 0);
	func_418(uParam0->f_420[5 /*8*/], 0, 0);
	func_418(uParam0->f_420[6 /*8*/], 0, 0);
	func_418(uParam0->f_420[7 /*8*/], 0, 0);
	func_418(uParam0->f_420[8 /*8*/], 0, 0);
	func_418(uParam0->f_420[6 /*8*/], 0, 0);
	unk_0xA4F67CEB594AE064(1);
	func_417(&(uParam0->f_741.f_165));
	func_416(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	unk_0xA4F67CEB594AE064(4);
	func_414(&(uParam0->f_741.f_176));
	func_413(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_411(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_410(&(uParam0->f_741.f_176));
	func_413(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_411(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_410(&(uParam0->f_741.f_176));
	func_413(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_411(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_410(&(uParam0->f_741.f_176));
	func_417(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_418(uParam0->f_420[16 /*8*/], 0, 0);
	func_418(uParam0->f_420[17 /*8*/], 0, 0);
	func_418(uParam0->f_420[18 /*8*/], 0, 0);
	func_418(uParam0->f_420[19 /*8*/], 0, 0);
	func_418(uParam0->f_420[20 /*8*/], 0, 0);
	func_418(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var6 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_113969.f_19046.f_6[iVar0] > 0f)
			{
				iLocal_194[iVar0] = system::ceil(Global_113969.f_19046.f_6[iVar0]);
			}
			else
			{
				iLocal_194[iVar0] = -1;
			}
			if (iVar0 == Global_112999)
			{
				func_281(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_418(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_414(&(uParam0->f_741.f_198));
				switch (Global_113969.f_19046.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_113969.f_19046.f_6[iVar0] <= 0f)
							{
								func_289(&Var5, 269f, 0f, 32f, 32f, 0);
								func_288(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_196);
								Var6.f_0 = (Var5.f_0 + fLocal_195);
								if (!bLocal_221)
								{
									func_409(&Var5, 0);
								}
								func_408(&Var5, 1);
								func_423("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_221)
								{
									func_407(&Var6, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_112999)
				{
					func_414(&(uParam0->f_741.f_198));
				}
				func_410(&(uParam0->f_741.f_198));
				func_416(&Var6, &(uParam0->f_741.f_198), &(Local_43.f_24[iVar0 /*8*/]), 0);
				func_417(&(uParam0->f_741.f_198));
				func_408(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_417(&(uParam0->f_741.f_198));
				}
				else
				{
					func_417(&(uParam0->f_741.f_198));
				}
				func_417(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_194[iVar0]) <= Local_43.f_106[iVar0] && iLocal_194[iVar0] > 1)
				{
					func_408(uParam0[iVar3 /*9*/], 1);
					func_408(uParam0[9 /*9*/], 1);
					func_423("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0,0047f, 0,0055f);
					unk_0x16EC7160BEBE7A6F(1);
					func_416(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					unk_0x16EC7160BEBE7A6F(0);
					func_410(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_194[iVar0]) <= (((Local_43.f_112[iVar0] - Local_43.f_106[iVar0]) / 2f) + Local_43.f_106[iVar0]) && IntToFloat(iLocal_194[iVar0]) > Local_43.f_106[iVar0])
				{
					func_408(uParam0[iVar3 /*9*/], 1);
					func_408(uParam0[9 /*9*/], 1);
					func_423("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0,0047f, 0,0055f);
					unk_0x16EC7160BEBE7A6F(1);
					func_416(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					unk_0x16EC7160BEBE7A6F(0);
					func_410(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_194[iVar0]) <= Local_43.f_112[iVar0] && IntToFloat(iLocal_194[iVar0]) > (((Local_43.f_112[iVar0] - Local_43.f_106[iVar0]) / 2f) + Local_43.f_106[iVar0]))
				{
					func_408(uParam0[iVar3 /*9*/], 1);
					func_408(uParam0[9 /*9*/], 1);
					func_423("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0,0047f, 0,0055f);
					unk_0x16EC7160BEBE7A6F(1);
					func_416(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					unk_0x16EC7160BEBE7A6F(0);
					func_410(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_194[iVar0]) > Local_43.f_112[iVar0] || iLocal_194[iVar0] == -1)
				{
					func_408(uParam0[iVar3 /*9*/], 1);
					func_408(uParam0[9 /*9*/], 1);
					func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0,0047f, 0,0055f);
					unk_0x16EC7160BEBE7A6F(1);
					func_416(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x16EC7160BEBE7A6F(0);
					func_423("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_406(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_194[iVar0]) <= Local_43.f_106[iVar0] && !iLocal_194[iVar0] == -1)
				{
					func_408(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = system::round((255f * 0,3f));
				}
				if (IntToFloat(iLocal_194[iVar0]) <= (((Local_43.f_112[iVar0] - Local_43.f_106[iVar0]) / 2f) + Local_43.f_106[iVar0]) && !iLocal_194[iVar0] == -1)
				{
					func_408(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = system::round((255f * 0,3f));
				}
				if (IntToFloat(iLocal_194[iVar0]) <= Local_43.f_112[iVar0] && !iLocal_194[iVar0] == -1)
				{
					func_408(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = system::round((255f * 0,3f));
				}
				func_423("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_423("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_423("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_417(&(uParam0->f_741.f_198));
				if (Global_113969.f_19046.f_6[Global_112999] > 0f)
				{
					func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0,0047f, 0,0055f);
					unk_0x16EC7160BEBE7A6F(1);
					func_401(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), system::floor((Global_113969.f_19046.f_6[Global_112999] * 1000f)), 6, "", 0, 1);
					unk_0x16EC7160BEBE7A6F(0);
					func_410(&(uParam0->f_741.f_198));
				}
				else
				{
					func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0,0047f, 0,0055f);
					unk_0x16EC7160BEBE7A6F(1);
					func_416(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x16EC7160BEBE7A6F(0);
					func_410(&(uParam0->f_741.f_198));
				}
				func_416(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_43.f_18[Global_112999] > 0f)
				{
					func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0,0047f, 0,0055f);
					unk_0x16EC7160BEBE7A6F(1);
					func_401(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), system::floor((Local_43.f_18[Global_112999] * 1000f)), 6, "", 0, 1);
					unk_0x16EC7160BEBE7A6F(0);
					func_410(&(uParam0->f_741.f_198));
					func_417(&(uParam0->f_741.f_198));
				}
				else
				{
					func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0,0047f, 0,0055f);
					unk_0x16EC7160BEBE7A6F(1);
					func_411(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					unk_0x16EC7160BEBE7A6F(0);
					func_410(&(uParam0->f_741.f_198));
					func_417(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_400(&(uParam0->f_420[iVar1 /*8*/]));
				func_281(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_418(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_408(uParam0[iVar3 /*9*/], 1);
				switch (Global_113969.f_19046.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_408(uParam0[iVar3 /*9*/], 1);
						func_417(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_417(&(uParam0->f_741.f_198));
							if (Global_113969.f_19046.f_6[iVar0] <= 0f)
							{
								func_289(&Var5, 269f, 0f, 32f, 32f, 0);
								func_288(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_196);
								Var6.f_0 = (Var5.f_0 + fLocal_195);
								if (!bLocal_221)
								{
									func_409(&Var5, 0);
								}
								func_408(&Var5, 1);
								func_423("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_221)
								{
									func_407(&Var6, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_112999)
				{
					func_414(&(uParam0->f_741.f_198));
				}
				func_410(&(uParam0->f_741.f_198));
				func_416(&Var6, &(uParam0->f_741.f_198), &(Local_43.f_24[iVar0 /*8*/]), 0);
				func_417(&(uParam0->f_741.f_198));
				func_408(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_113969.f_19046.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_423("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_194[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_194[iVar0]) <= Local_43.f_106[iVar0] && IntToFloat(iLocal_194[iVar0]) <= Local_43.f_112[iVar0])
				{
					func_399(uParam0[iVar3 /*9*/]);
					func_423("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_194[iVar0]) <= (((Local_43.f_112[iVar0] - Local_43.f_106[iVar0]) / 2f) + Local_43.f_106[iVar0]))
				{
					func_398(uParam0[iVar3 /*9*/]);
					func_423("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_194[iVar0]) <= Local_43.f_112[iVar0])
				{
					func_396(uParam0[iVar3 /*9*/]);
					func_423("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar7 = 0;
	if (func_395(0))
	{
		unk_0xDF7F16323520B858(joaat("sp0_flying_ability"), &iVar7, -1);
	}
	else if (func_395(1))
	{
		unk_0xDF7F16323520B858(joaat("sp1_flying_ability"), &iVar7, -1);
	}
	else if (func_395(2))
	{
		unk_0xDF7F16323520B858(joaat("sp2_flying_ability"), &iVar7, -1);
	}
	if (iVar7 < 40)
	{
		func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0,0047f, 0,0055f);
		unk_0xFB193A91887FFAB1(1);
		Var8 = { uParam0->f_316[22 /*2*/] };
		Var9 = { uParam0->f_741.f_198 };
		if (!bLocal_221)
		{
			Var9.f_9 = (Var9.f_9 - 0,08f);
			func_407(&Var8, &Var9);
		}
		if (bLocal_221)
		{
			func_393(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 27f, 2f, 5, 159f);
		}
		else
		{
			func_393(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 18f, 1,55f, 5, 106f);
		}
		func_418(uParam0->f_420[14 /*8*/], 0, 0);
		func_423("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_416(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_410(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var10, "SPR_DESC_", 16);
	StringIntConCat(&Var10, Global_112999 + 1, 16);
	func_408(uParam0[7 /*9*/], 1);
	func_423("SPRRaces", &Var10, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0,0047f, 0,0055f);
	unk_0xFB193A91887FFAB1(1);
	StringCopy(&cVar11, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar11, Global_112999 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar11, 0, 16);
	}
	Var12 = { uParam0->f_316[16 /*2*/] };
	Var13 = { uParam0->f_741.f_198 };
	if (!bLocal_221)
	{
		Var13.f_9 = (Var13.f_9 - 0,108f);
		func_407(&Var12, &Var13);
	}
	if (bLocal_221)
	{
		func_393(&(uParam0->f_420[25 /*8*/]), &cVar11, &Var12, &Var13, 27f, 2f, 5, 159f);
	}
	else
	{
		func_393(&(uParam0->f_420[25 /*8*/]), &cVar11, &Var12, &Var13, 18f, 1,55f, 5, 106f);
	}
	func_418(uParam0->f_420[25 /*8*/], 0, 0);
	func_416(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar11, 0);
	func_410(&(uParam0->f_741.f_198));
	func_417(&(uParam0->f_741.f_198));
	func_416(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_416(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_414(&(uParam0->f_741.f_198));
	func_418(uParam0->f_420[22 /*8*/], 0, 0);
	func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_401(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), system::floor(Local_43.f_112[Global_112999]) * 1000, 6, "", 1, 0);
	func_410(&(uParam0->f_741.f_198));
	func_418(uParam0->f_420[23 /*8*/], 0, 0);
	func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_401(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), system::floor((((Local_43.f_112[Global_112999] - Local_43.f_106[Global_112999]) / 2f) + Local_43.f_106[Global_112999])) * 1000, 6, "", 1, 0);
	func_410(&(uParam0->f_741.f_198));
	func_418(uParam0->f_420[24 /*8*/], 0, 0);
	func_413(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_401(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), system::floor(Local_43.f_106[Global_112999]) * 1000, 6, "", 1, 0);
	func_410(&(uParam0->f_741.f_198));
	func_417(&(uParam0->f_741.f_198));
}

float func_393(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;
	
	func_394(uParam3, 0);
	unk_0x012F78DEB1F1AF9C(sParam1);
	iVar0 = unk_0x83FBFC2ED3CA1611(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!unk_0x485ADB2D2728D748())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_285(((system::to_float(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_285(((fParam7 + ((system::to_float(iParam6) + (system::to_float(iVar0) * 0,5f)) * fParam4)) - (fParam5 * 0,5f)), iVar1);
	return 0f;
}

void func_394(var uParam0, bool bParam1)
{
	unk_0x8413CD3BCEEAD8DC(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0xE05EB1EAE7CCDC59(uParam0->f_8, uParam0->f_9);
	}
	unk_0xBFE94E91C83D8794(uParam0->f_1, uParam0->f_2);
	unk_0x5A18938160AE52D0(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0xF18BC069A9C882EC();
			unk_0x2B50C29142312934();
			break;
		
		case 3:
			unk_0x2B50C29142312934();
			break;
		
		case 2:
			unk_0xF18BC069A9C882EC();
			break;
	}
	if (bParam1)
	{
		unk_0xA4F67CEB594AE064(4);
	}
}

bool func_395(int iParam0)
{
	func_180();
	return iParam0 == Global_113969.f_2366.f_539.f_4321;
}

void func_396(var uParam0)
{
	func_397(uParam0, 107);
}

void func_397(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA306E6FD2A6558E6(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_398(var uParam0)
{
	func_397(uParam0, 108);
}

void func_399(var uParam0)
{
	func_397(uParam0, 109);
}

void func_400(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_401(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_404())
	{
		func_394(uParam1, 0);
		unk_0x16EC7160BEBE7A6F(iParam6);
		unk_0xEAF65721ACB2FDFB(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0xEAEB6E7D3FAEBD5B(sVar0);
		unk_0xBD34A69071611974(iParam2, iParam3);
		unk_0x25DD447A6EB3A86F(func_403(*uParam0), func_402(uParam0->f_1), 0);
	}
}

var func_402(var uParam0)
{
	return uParam0;
}

var func_403(var uParam0)
{
	return uParam0;
}

int func_404()
{
	if (func_405())
	{
		return 1;
	}
	if (unk_0x15CCE8886267624F())
	{
		return 0;
	}
	if (unk_0x78ABC1D11B34F324() || unk_0xDDED2C93E8FD5B69())
	{
		return 0;
	}
	if (unk_0x114ABA9988FF784B())
	{
		return 0;
	}
	return 1;
}

bool func_405()
{
	return Global_1574604;
}

void func_406(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_407(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0,5f) * 1,33f) + 0,5f);
	uParam1->f_8 = (((uParam1->f_8 - 0,5f) * 1,33f) + 0,5f);
	uParam1->f_9 = (((uParam1->f_9 - 0,5f) * 1,33f) + 0,5f);
}

void func_408(float fParam0, int iParam1)
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_409(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0,5f) * 1,33f) + 0,5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1,33f);
}

void func_410(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_411(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	uVar0 = sParam2;
	if (!func_50(uVar0))
	{
		if (func_404())
		{
			func_394(uParam1, 0);
			unk_0x16EC7160BEBE7A6F(iParam4);
			unk_0xEAF65721ACB2FDFB(iParam3);
			func_412(func_403(*uParam0), func_402(uParam0->f_1), uVar0, 0);
		}
	}
}

void func_412(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xEAEB6E7D3FAEBD5B(uParam2);
	unk_0x25DD447A6EB3A86F(uParam0, uParam1, iParam3);
}

void func_413(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_414(var uParam0)
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_415(uParam0, 2);
}

void func_415(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA306E6FD2A6558E6(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_416(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0xA4F67CEB594AE064(1);
	}
	func_411(fParam0, uParam1, sParam2, 0, 0);
}

void func_417(var uParam0)
{
	func_415(uParam0, 1);
}

void func_418(struct<8> Param0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam1)
	{
		case 2:
			func_422(&Var0);
			break;
		
		case 1:
			func_421(&Var0);
			break;
		
		case 3:
			func_420(&Var0);
			break;
		
		case 4:
			func_419(&Var0);
			break;
	}
	if (func_404())
	{
		if (iParam2 == 1)
		{
			unk_0x81645EE95A114FAE(func_403(Var0.f_0), func_402(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0x81645EE95A114FAE(func_403(Var0.f_0), func_402(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_419(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_420(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_421(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_422(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_423(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_430(&Var0);
			break;
		
		case 1:
			func_429(&Var0);
			break;
		
		case 5:
			func_428(&Var0);
			break;
		
		case 6:
			func_427(&Var0);
			break;
		
		case 7:
			func_426(&Var0);
			break;
		
		case 8:
			func_425(&Var0);
			break;
		
		case 9:
			func_424(&Var0);
			break;
	}
	if (func_404())
	{
		unk_0xA4F67CEB594AE064(iParam5);
		if (iParam3 == 1)
		{
			unk_0xFFA2B456A81EA1EB(sParam0, sParam1, func_403(Var0.f_0), func_402(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
		}
		else
		{
			unk_0xFFA2B456A81EA1EB(sParam0, sParam1, func_403(Var0.f_0), func_402(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
		}
		unk_0xA4F67CEB594AE064(4);
	}
}

void func_424(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_425(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_426(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_427(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_428(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_429(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_430(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_431(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_190 == 1)
	{
		return 1;
	}
	if (iLocal_191)
	{
		return 0;
	}
	if (system::timera() < 500)
	{
		return 1;
	}
	if (bLocal_189)
	{
		if (unk_0x2645430E708CBFAC(2, 201))
		{
			iLocal_183 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(iLocal_183, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_190 = 1;
			iLocal_191 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (unk_0x2645430E708CBFAC(2, 202))
		{
			iLocal_183 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(iLocal_183, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0x428C32CC68809A35(1);
			func_566(&(Local_43.f_119));
			iLocal_190 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0x2645430E708CBFAC(2, 202) || unk_0x2645430E708CBFAC(2, 238))
	{
		iLocal_183 = unk_0xCA369FBC0DE29517();
		unk_0xBF3D28CA44F3BE2D(iLocal_183, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_277(&(Local_43.f_119), 0, 0, 1, 1);
		func_276(&(Local_43.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_276(&(Local_43.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&uLocal_185);
		iLocal_190 = 1;
		unk_0x428C32CC68809A35(1);
		return 1;
	}
	iVar0 = 0;
	if (unk_0x761778199FE1211C() && bLocal_189 == 0)
	{
		if (unk_0xD67885288D4A40CB(2))
		{
			Global_4541816 = func_435(0,201f, 0,222f, 0,198f, 0,0375f, 0,034f, 5, 255, 0, 1);
			func_434(0, Global_112999, 1);
			if (func_433())
			{
				if (Global_4541816 == Global_112999)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_183 = unk_0xCA369FBC0DE29517();
					unk_0x85E83A170EF61477(iLocal_183, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_112999 = Global_4541816;
					func_566(&(Local_43.f_119));
				}
			}
		}
	}
	if (unk_0x2645430E708CBFAC(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_113969.f_19046.f_12[Global_112999 /*8*/].f_4 == 0)
		{
			iLocal_183 = unk_0xCA369FBC0DE29517();
			unk_0x85E83A170EF61477(iLocal_183, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_183 = unk_0xCA369FBC0DE29517();
			unk_0x85E83A170EF61477(iLocal_183, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((unk_0x2645430E708CBFAC(2, 188) || func_432(0, uParam1)) || unk_0x875A214D5EBCA509(2, 241))
	{
		iVar1 = (Global_112999 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_183 = unk_0xCA369FBC0DE29517();
		unk_0x85E83A170EF61477(iLocal_183, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_112999 = iVar1;
		func_566(&(Local_43.f_119));
	}
	if ((unk_0x2645430E708CBFAC(2, 187) || func_432(1, uParam1)) || unk_0x875A214D5EBCA509(2, 242))
	{
		iVar2 = Global_112999 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_183 = unk_0xCA369FBC0DE29517();
		unk_0x85E83A170EF61477(iLocal_183, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_112999 = iVar2;
		func_566(&(Local_43.f_119));
	}
	return 1;
}

bool func_432(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x6C29A57AC29D7033(2, 195);
	iVar2 = unk_0x6C29A57AC29D7033(2, 196);
	if (unk_0x510D0699BE9C6D06(iVar1) < 28 && unk_0x510D0699BE9C6D06(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (unk_0x1DD05E817C89C737() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		
		case 1:
			bVar0 = iVar2 > 156;
			break;
		
		case 2:
			bVar0 = iVar1 < 100;
			break;
		
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = unk_0x1DD05E817C89C737();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_433()
{
	if (unk_0xAE231F549813BBDF(2))
	{
		if (Global_4541816 > -1)
		{
			if (unk_0x875A214D5EBCA509(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_434(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0xAE231F549813BBDF(2))
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xA6DB7FC56DBDFB82();
	}
	if (Global_4541816 == -6)
	{
		unk_0x30EBBB1D4EDC8FE4(4);
		if (iParam0 && unk_0x6D05C5731A838CB3(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4541816 = -1;
			return 0;
		}
	}
	if (((Global_4541816 > -1 || Global_4541816 == -3) || Global_4541816 == -2) || unk_0x2135EF5011FECD68())
	{
		unk_0x30EBBB1D4EDC8FE4(1);
		return 0;
	}
	if (Global_4541816 == -1 && iParam0)
	{
		if (unk_0x6D05C5731A838CB3(2, 237))
		{
			unk_0x30EBBB1D4EDC8FE4(4);
			Global_4541816 = -6;
			return 1;
		}
		else
		{
			unk_0x30EBBB1D4EDC8FE4(3);
			return 0;
		}
	}
	unk_0x30EBBB1D4EDC8FE4(1);
	return 0;
}

int func_435(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar7 = -1;
	if (!unk_0xAE231F549813BBDF(2))
	{
		return -1;
	}
	unk_0x66EFB3D6110055C4(2, 200, 1);
	unk_0xA6DB7FC56DBDFB82();
	if (bParam8)
	{
		if (!unk_0x485ADB2D2728D748())
		{
			fParam0 = (((fParam0 - 0,5f) * 1,33f) + 0,5f);
			fParam2 = (fParam2 * 1,33f);
		}
	}
	if (bParam7)
	{
		unk_0x9A122D542F2BB60E(76, 84);
		unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0x2BF75F235283775A(fParam0, fParam1, &fParam0, &fParam1);
		unk_0x90B531766063C5CD();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0xB504E1B50AA21FC5(2, 239);
	fVar3 = unk_0xB504E1B50AA21FC5(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = system::floor((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0x9A122D542F2BB60E(76, 84);
			unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
			func_436(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			unk_0x90B531766063C5CD();
		}
		else
		{
			func_436(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_436(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	unk_0x81645EE95A114FAE((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, uParam7, 0);
}

int func_437()
{
	int iVar0;
	
	switch (iLocal_184)
	{
		case 0:
			unk_0x428C32CC68809A35(1);
			unk_0xF2CB0224D3BE0B42("SP_SPR", 3);
			unk_0xD0D00ED689D6CA81("SPRRaces", 0);
			unk_0xD0D00ED689D6CA81("MPHUD", 0);
			iLocal_184 = 1;
			break;
		
		case 1:
			if (unk_0xCC2EFE4B1D0EE422("SP_SPR", 3))
			{
				if (unk_0x38D063D8CF6D1967("SPRRaces"))
				{
					if (unk_0x38D063D8CF6D1967("MPHUD"))
					{
						iLocal_184 = 2;
					}
				}
			}
			break;
		
		case 2:
			unk_0xD314260005F064BF(&(Local_43.f_119));
			Local_43.f_119 = 0;
			func_566(&(Local_43.f_119));
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 512);
			}
			func_151(1);
			unk_0x9C091F2E9354854A(1);
			unk_0x0B74F181ADFC39BF(Local_43.f_1, 4);
			func_388();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_43.f_11)
			{
				iLocal_194[iVar0] = -1;
				iVar0++;
			}
			func_441(&uLocal_222);
			func_438();
			unk_0xDCAFFD08A08087EB("MinigameTransitionIn", 0, 1);
			iLocal_184 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_438()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_113969.f_19046.f_12[iVar0 /*8*/] = { func_440(iVar0) };
		MemCopy(&(Local_43.f_24[iVar0 /*8*/]), {Global_113969.f_19046.f_12[iVar0 /*8*/]}, 8);
		Local_43.f_106[iVar0] = func_439(iVar0);
		Local_43.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_113969.f_19046.f_6[iVar0] > Local_43.f_112[iVar0] || Global_113969.f_19046.f_6[iVar0] <= 0f)
			{
				Global_113969.f_19046.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_113969.f_19046.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_113969.f_19046.f_12[0 /*8*/].f_4 = 1;
}

float func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_440(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_441(var uParam0)
{
	func_444();
	bLocal_221 = unk_0x485ADB2D2728D748();
	func_316(uParam0);
	func_294(&(uParam0->f_741));
	func_442(uParam0);
}

void func_442(var uParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0x485ADB2D2728D748();
	func_293(&(uParam0->f_316[0 /*2*/]), 262f, (71f - func_443(0,00278f, 720, 1)), 1);
	func_293(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - func_443(0,00417f, 720, 1)), 1);
	func_293(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - func_443(0,00417f, 720, 1)), 1);
	func_293(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - func_443(0,00417f, 720, 1)), 1);
	func_293(&(uParam0->f_316[17 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 162f, 1);
	func_293(&(uParam0->f_316[18 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 189f, 1);
	func_293(&(uParam0->f_316[19 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 216f, 1);
	func_293(&(uParam0->f_316[20 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 243f, 1);
	func_293(&(uParam0->f_316[21 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 270f, 1);
	func_293(&(uParam0->f_316[22 /*2*/]), (257f + func_292(0,0047f, 1280, 1)), 297f, 1);
	func_293(&(uParam0->f_316[16 /*2*/]), (513f + func_292(0,0047f, 1280, 1)), (299f - func_443(0,00278f, 720, 1)), 1);
	func_293(&(uParam0->f_316[4 /*2*/]), (769f + func_292(0,0047f, 1280, 1)), 297f, 1);
	func_293(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	func_293(&(uParam0->f_316[8 /*2*/]), (769f + func_292(0,0047f, 1280, 1)), 351f, 1);
	func_293(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	func_293(&(uParam0->f_316[6 /*2*/]), (769f + func_292(0,0047f, 1280, 1)), (324f - func_443(0,00278f, 720, 1)), 1);
	func_293(&(uParam0->f_316[7 /*2*/]), 324f, (324f - func_443(0,00278f, 720, 1)), 1);
	func_293(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	func_293(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	func_293(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_289(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	unk_0xA306E6FD2A6558E6(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_288(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_289(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_288(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_288(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_288(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_288(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_288(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[6 /*9*/], (486f + func_292(0,0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_288(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_288(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_288(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[13 /*9*/], 770,5f, 374,5f, 80f, 80f, 1);
	func_288(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[12 /*9*/], 856f, 374,5f, 80f, 80f, 1);
	func_288(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_289(uParam0[11 /*9*/], 941,5f, 374,5f, 80f, 80f, 1);
	func_288(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_283(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_282(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	func_283(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_282(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	func_283(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_282(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	func_283(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_281(&(uParam0->f_420[0 /*8*/]), 1, 1);
	func_283(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_281(&(uParam0->f_420[1 /*8*/]), 1, 1);
	func_283(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_281(&(uParam0->f_420[2 /*8*/]), 1, 1);
	func_283(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_281(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_281(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[9 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[10 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_281(&(uParam0->f_420[26 /*8*/]), 1, 1);
	func_283(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_281(&(uParam0->f_420[14 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_281(&(uParam0->f_420[15 /*8*/]), 1, 1);
	func_283(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_281(&(uParam0->f_420[25 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[16 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[17 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_281(&(uParam0->f_420[18 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_281(&(uParam0->f_420[21 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_281(&(uParam0->f_420[20 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_281(&(uParam0->f_420[19 /*8*/]), 117, 1);
	func_283(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_281(&(uParam0->f_420[22 /*8*/]), 109, 1);
	func_283(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_281(&(uParam0->f_420[23 /*8*/]), 108, 1);
	func_283(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_281(&(uParam0->f_420[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0,5f) * 1,33f) + 0,5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1,33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5 /*2*/] = (((uParam0->f_316[iVar5 /*2*/] - 0,5f) * 1,33f) + 0,5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5 /*8*/] = (((uParam0->f_420[iVar5 /*8*/] - 0,5f) * 1,33f) + 0,5f);
			uParam0->f_420[iVar5 /*8*/].f_2 = (uParam0->f_420[iVar5 /*8*/].f_2 * 1,33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}

float func_443(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x5949C3C031610A30(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return system::to_float(system::round(fVar1));
	}
	return fVar1;
}

void func_444()
{
	int iVar0;
	
	unk_0xB83DA0A55841C11A();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_2100721.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_445(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

int func_446(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x99DFE4CAC19D527F())
	{
		if (!iLocal_192)
		{
			iVar0 = 0;
			if (uParam0->f_358[0 /*189*/].f_13 > 0f)
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_43.f_106[Local_43.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_43.f_112[Local_43.f_10] - Local_43.f_106[Local_43.f_10]) / 2f) + Local_43.f_106[Local_43.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_43.f_112[Local_43.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_474(Local_43.f_10, &(Local_43.f_65[Local_43.f_10 /*8*/]));
			if (bParam1)
			{
				func_471(Local_43.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_192 = 1;
				return 1;
			}
			else if (func_447(Local_43.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				iLocal_192 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_192 = 1;
	}
	return 0;
}

int func_447(int iParam0, float fParam1, int iParam2)
{
	if (Global_2097157.f_1 && !Global_2097157.f_2)
	{
		func_471(iParam0, fParam1, iParam2);
		Global_2097157.f_2 = 1;
	}
	if (func_448(&uLocal_1209))
	{
		Global_2097532 = 1;
		return 1;
	}
	return 0;
}

int func_448(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	bool bVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_470(uParam0->f_44))
	{
		Var3 = { Global_2097157.f_361 };
	}
	else
	{
		Var3 = { func_469(unk_0x259BE71D8A81D4FA()) };
	}
	switch (Global_2097157)
	{
		case 0:
			if (func_468(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_467(&Var1, &(uParam0->f_44));
				Global_2097157.f_142 = uParam0->f_44;
				Global_2097157.f_142.f_1 = unk_0x6D2024112D9A9660(uParam0->f_44, 0);
				bVar4 = false;
				while (bVar4 < Global_2097157.f_142.f_1)
				{
					if (!func_466(uParam0->f_44, bVar4))
					{
						if (func_465(uParam0->f_44, 4, bVar4))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Global_2097157.f_142.f_2), bVar4);
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Global_2097157.f_142.f_2), bVar4);
						}
					}
					bVar4++;
				}
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xA8236CAFF38CEF7C(0, &Var0);
						if (Var0.f_97 != Global_2097157.f_142.f_1)
						{
						}
						if (!func_464(Var0))
						{
							Global_2097157.f_4 = 1;
						}
						else
						{
							bVar4 = false;
							while (bVar4 < Global_2097157.f_142.f_1)
							{
								if (!func_466(uParam0->f_44, bVar4))
								{
									if (func_465(uParam0->f_44, 4, bVar4))
									{
										Global_2097157.f_73.f_36[bVar4] = unk_0x575A7688415EEE2A(0, bVar4);
										if (Global_2097157.f_73.f_36[bVar4] == -1)
										{
											if (bVar4 > Var0.f_97)
											{
												Global_2097157.f_73.f_36[bVar4] = 0;
											}
										}
									}
									else
									{
										Global_2097157.f_73.f_3[bVar4] = unk_0xFF7C26AC7D71757C(0, bVar4);
										if (Global_2097157.f_73.f_3[bVar4] == -1f)
										{
											if (bVar4 > Var0.f_97)
											{
												Global_2097157.f_73.f_3[bVar4] = 0f;
											}
										}
									}
								}
								bVar4++;
							}
						}
					}
					else
					{
						Global_2097157.f_4 = 1;
					}
					unk_0x612EE6D9325A3B16();
				}
				else
				{
					Global_2097157.f_4 = 1;
				}
				Global_2097157 = 1;
				func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_2097157.f_1 = 1;
			if (Global_2097157.f_2)
			{
				func_463();
				if (Global_2097157.f_4)
				{
					if (func_462(uParam0->f_44))
					{
						Global_2097157 = 3;
					}
					else
					{
						Global_2097157 = 2;
					}
				}
				else
				{
					Global_2097157 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xAB3A622E50A5CCE2(&(Global_2097157.f_73), &(Global_2097157.f_142), &(Global_2097157.f_211));
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_2097157.f_211 = { Global_2097157.f_142 };
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x76CD105BCAC6EB9F() && func_461())
			{
				if (func_460())
				{
					Global_2097157 = 99;
				}
				else
				{
					Global_2097157 = 999;
					return 1;
				}
			}
			else
			{
				Global_2097157 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_462(uParam0->f_44))
			{
				Global_2097157.f_280 = { Global_2097157.f_142 };
			}
			else
			{
				Var2.f_0 = Global_2097157.f_142;
				Var2.f_1 = Global_2097157.f_142.f_1;
				Var2.f_2 = Global_2097157.f_142.f_2;
				unk_0xAB3A622E50A5CCE2(&Var2, &(Global_2097157.f_142), &(Global_2097157.f_280));
			}
			Global_2097157 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_449(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0]))
			{
				func_467(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xA8236CAFF38CEF7C(0, &Var0);
						if (unk_0x1B79E937E91F40C3(&(Var0.f_13), ""))
						{
							Global_1057195.f_1 = -1;
						}
						else
						{
							Global_1057195.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_1057195.f_1 = -1;
					}
					unk_0x612EE6D9325A3B16();
				}
				else
				{
					Global_1057195.f_1 = -1;
				}
				Global_2097157 = 999;
				func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_449(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2097157.f_211.f_36[0];
	uVar1 = Global_2097157.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_456() && !func_452())
			{
				func_450(*uParam2);
				if (bParam5)
				{
					if (BitTest(Global_2097157.f_142.f_2, 0))
					{
						if (unk_0x9A9BC0C3D955A625(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x40ED52FB5B42D9FB(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x15A7798AEEFAC562(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2F700943A3341959(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x7BBF11C251338D41(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_450(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_2097152 = 1;
	func_451(&(Global_2097152.f_1), 1, 0);
	Global_2097152.f_3 = Param0.f_0;
	Global_2097152.f_4 = Param0.f_1;
}

void func_451(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			*uParam0 = unk_0x0728E77B2BF91D54();
		}
	}
	else
	{
		*uParam0 = unk_0x1DD05E817C89C737();
	}
	uParam0->f_1 = 1;
}

int func_452()
{
	if (unk_0x4D9174D8796EA622() && !func_453())
	{
		return 1;
	}
	return 0;
}

bool func_453()
{
	return func_454(unk_0x259BE71D8A81D4FA());
}

int func_454(int iParam0)
{
	switch (func_455(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_455(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_193;
}

int func_456()
{
	if (unk_0x5824DB463E853B3E() || Global_2097152)
	{
		func_457();
		return 1;
	}
	return 0;
}

void func_457()
{
	if (func_458(&(Global_2097152.f_1), 120000, 1))
	{
		unk_0x92E48B0F5D4E76F2(Global_2097152.f_3, Global_2097152.f_4, -1);
		Global_2097152 = 0;
		func_380(&(Global_2097152.f_1));
	}
}

int func_458(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_459(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_459(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

bool func_460()
{
	return BitTest(Global_1048576.f_10, 1);
}

var func_461()
{
	return Global_2693440.f_3;
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_463()
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
}

bool func_464(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

int func_465(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (bParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (bParam2 == 3 || bParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (bParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (bParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (bParam2 == 3 || bParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (bParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0x3C041FAC0ACE6A45(iParam0, iParam1, bParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_466(int iParam0, bool bParam1)
{
	if (unk_0x54F72D02D777FBCB(iParam0, 4, bParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (bParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (bParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (bParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_467(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_468(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_456() && !func_452())
			{
				func_450(*uParam2);
				if (unk_0xFAFBA6521BA828B9(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2F700943A3341959(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x7BBF11C251338D41(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_469(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

int func_470(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_471(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var4[3];
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var4[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var4[1 /*8*/]), "Location", 32);
	StringCopy(&(Var4[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (func_473(817, &Var3, &Var4, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_472(817, 131, -system::ceil((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_472(817, 131, 0, 0f, 0);
		}
		func_472(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_472(817, 2, system::ceil((fParam1 * 100f)) * 10, 0f, 0);
		func_472(817, 147, system::ceil((fParam1 * 100f)) * 10, 0f, 0);
		func_472(817, 149, 0, 0f, 0);
		func_472(817, 148, 0, 0f, 0);
		func_472(817, 109, 1, 0f, 0);
		func_472(817, 157, iVar0, 0f, 0);
		func_472(817, 158, iVar1, 0f, 0);
		func_472(817, 86, iVar2, 0f, 0);
	}
}

void func_472(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	
	if (!bParam4)
	{
		unk_0x3573EC2255786C32(iParam1, iParam2, fParam3);
	}
	if (!Global_2097157.f_3)
	{
		Global_2097157.f_142 = iParam0;
		Global_2097157.f_142.f_1 = unk_0x6D2024112D9A9660(Global_2097157.f_142, 0);
		bVar1 = false;
		while (bVar1 < 32)
		{
			if (bVar1 < Global_2097157.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_465(iParam0, 4, bVar1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097157.f_142.f_2), bVar1);
				}
				else
				{
					unk_0x8744D2E3FC95740E(&(Global_2097157.f_142.f_2), bVar1);
				}
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_2097157.f_142.f_2), bVar1);
			}
			bVar1++;
		}
		Global_2097157.f_3 = 1;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (iParam1 == unk_0x54F72D02D777FBCB(iParam0, 4, bVar1))
		{
			bVar0 = bVar1;
			bVar1 = 32;
		}
		bVar1++;
	}
	Global_2097157.f_142.f_36[bVar0] = iParam2;
	Global_2097157.f_142.f_3[bVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2097157.f_142.f_2), bVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x8744D2E3FC95740E(&(Global_2097157.f_142.f_2), bVar0);
	}
}

int func_473(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x261E3728EE56B3AC())
	{
	}
	if ((!unk_0xB10D024D4A098884() && (unk_0xD25970CBEE074E07() || !unk_0xB0DF27929B02C57E())) && unk_0xAE6B753124318E29())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x7260716F2E4D7661())
			{
				Var2 = { func_469(unk_0x259BE71D8A81D4FA()) };
				if (unk_0xE582BF3EDDBB1A68(&Var2))
				{
					if (unk_0xC07B1AA6155EC337(&uVar3, 35, &Var2))
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
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x76CD105BCAC6EB9F() && Global_2693440.f_3)
			{
				unk_0xFFC169CFE58B4AE2(&Var0, &(Global_1928632.f_10));
			}
			else
			{
				unk_0x41B592D7008A639E(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xB10D024D4A098884())
	{
	}
	if (!unk_0xD25970CBEE074E07())
	{
	}
	if (unk_0xB0DF27929B02C57E())
	{
	}
	if (!unk_0xAE6B753124318E29())
	{
	}
	return 0;
}

void func_474(int iParam0, char[4] cParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&Var0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&Var0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&Var0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&Var0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_475(&uLocal_1209, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_475(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xD6F9DEE4765092A9(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	Global_2097536.f_2768 = 0;
	if ((iParam1 == 2 && iParam4 == 30) || iParam1 == 335)
	{
		if (iParam5 > 0 && !func_484())
		{
			uParam0->f_44 = 826;
		}
		else
		{
			uParam0->f_44 = 815;
		}
		uParam0->f_44.f_1 = 5;
		uParam0->f_44.f_3 = 1;
		StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
		uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
		if (iParam5 > 0 && !func_484())
		{
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
			StringCopy(&Var1, "", 32);
			StringIntConCat(&Var1, iParam5, 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
			Global_2097536.f_2780.f_26 = iParam5;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				if (iParam5 == 1)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
			}
			else if (iParam5 == 1)
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
			}
		}
		else
		{
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
			}
			Global_2097536.f_2780.f_26 = -1;
		}
		Global_2097536.f_2780 = 1;
		StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
		StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_DRIFT", 24);
		StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
		StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
		Global_2097536.f_2710[0] = 0;
		Global_2097536.f_2710[1] = 1;
		Global_2097536.f_2710[2] = 3;
		Global_2097536.f_2710[3] = 0;
		Global_2097536.f_2709 = 4;
		Global_2097536.f_2708 = 3;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
		Global_2097536.f_2780.f_28 = 5;
		Global_2097536.f_2780.f_29[0] = 5;
		Global_2097536.f_2780.f_29[1] = 5;
		Global_2097536.f_2780.f_29[2] = 3;
		Global_2097536.f_2780.f_29[3] = 5;
		Global_2097536.f_2779 = 0;
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < Global_2097536.f_2708)
		{
			if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2770), iVar2);
			}
			bVar2++;
		}
		Global_2097536.f_2826 = func_483(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
		return;
	}
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_484())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_484())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 5;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 6;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 5;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 6;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x4DE98A9A01197527(unk_0x259BE71D8A81D4FA(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_2097536.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_484())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 4;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_484())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 0;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 0;
					Global_2097536.f_2708 = 1;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_484())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_484())
				{
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_484())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), "CMSW", 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2710[4] = 6;
			Global_2097536.f_2708 = 5;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 6;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 6;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2710[2] = 5;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			if (unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 1;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_2097536.f_2780.f_9), {func_482(iParam1)}, 16);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2708 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 0;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 0;
			Global_2097536.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 3;
			Global_2097536.f_2708 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 5;
				Global_2097536.f_2710[4] = 6;
				Global_2097536.f_2708 = 3;
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				Global_2097536.f_2780.f_28 = 6;
				Global_2097536.f_2780.f_29[0] = 5;
				Global_2097536.f_2780.f_29[1] = 11;
				Global_2097536.f_2780.f_29[2] = 4;
				Global_2097536.f_2780.f_29[3] = 5;
				Global_2097536.f_2780.f_29[4] = 5;
			}
			else if (Global_4718592.f_3548 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 2;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2708 = 3;
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 2;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xD6F9DEE4765092A9(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_481(Global_4718592.f_185586) || func_478(Global_4718592.f_185586))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else if (func_477(Global_4718592.f_185586))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2768), true);
			Global_2097536.f_2754[1] = -1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 11;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 3;
			Global_2097536.f_2708 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xD6F9DEE4765092A9(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 1;
					Global_2097536.f_2708 = 4;
					unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 12;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 4;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 17;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 2;
			Global_2097536.f_2708 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 10;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 4;
			Global_2097536.f_2710[5] = 3;
			Global_2097536.f_2708 = 6;
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 9;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			Global_2097536.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2708 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 1;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2709 = 6;
				Global_2097536.f_2708 = 2;
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				Global_2097536.f_2780.f_28 = 4;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 2;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 1;
				Global_2097536.f_2709 = 4;
				Global_2097536.f_2708 = 3;
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 1;
				Global_2097536.f_2780.f_29[2] = 3;
			}
			Global_2097536.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_476(iParam4)}, 8);
			Global_2097536.f_2708 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			Global_2097536.f_2780.f_28 = 5;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 21;
			break;
		
		case 890:
			uParam0->f_44 = 1203;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CCMLVL", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RACES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x8744D2E3FC95740E(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 22;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			break;
		
		case 276:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
			if (iParam4 == 2 || iParam4 == 3)
			{
				StringIntConCat(&Var0, 2, 32);
			}
			else
			{
				StringIntConCat(&Var0, iParam4, 32);
			}
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_TT", 32);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
					Global_2097536.f_2708 = 2;
					Global_2097536.f_2780.f_28 = 3;
					Global_2097536.f_2780.f_29[0] = 2;
					Global_2097536.f_2780.f_29[1] = 3;
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_CD", 32);
					break;
				
				case 2:
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1", 32);
					break;
			}
			break;
		
		case 278:
		case 279:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			if (iParam1 == 278)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			}
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 3;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			Global_2097536.f_2780 = 1;
			break;
	}
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[bVar2]))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2770), bVar2);
		}
		bVar2++;
	}
	Global_2097536.f_2826 = func_483(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

struct<6> func_476(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_477(int iParam0)
{
	return iParam0 == 74;
}

var func_478(int iParam0)
{
	return (func_480(iParam0) || func_479(iParam0));
}

bool func_479(int iParam0)
{
	return iParam0 == 44;
}

bool func_480(int iParam0)
{
	return iParam0 == 45;
}

bool func_481(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_482(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_483(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_470(iParam1))
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
	return unk_0x70E57E9927B6BA58(&cVar0);
}

int func_484()
{
	if ((((((((((((((Global_4718592.f_117195 == 1 || Global_4718592.f_117195 == 3) || Global_4718592.f_117195 == 5) || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 19) || Global_4718592.f_117195 == 8) || Global_4718592.f_117195 == 9) || Global_4718592.f_117195 == 11) || Global_4718592.f_117195 == 13) || Global_4718592.f_117195 == 21) || Global_4718592.f_117195 == 23) || Global_4718592.f_117195 == 25) || Global_4718592.f_117195 == 26) || Global_4718592.f_117195 == 31) || Global_4718592.f_117195 == 32)
	{
		return 1;
	}
	return 0;
}

int func_485(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_2103068.f_2 + 5 < unk_0x8034325BF6D6E41F() && Global_2103068.f_2 > 0)
	{
		func_380(&Global_2103068);
		func_380(&(Global_2103068.f_49));
		*uParam0 = 0;
		Global_2103068.f_2 = 0;
		func_495(0);
	}
	Global_2103068.f_2 = unk_0x8034325BF6D6E41F();
	iVar1 = -1;
	if (func_494())
	{
		if (unk_0xECBFC40AE72FA489() == 0)
		{
			iVar1 = unk_0x444B1E9E9A9D726B();
		}
	}
	if ((func_494() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_492() && unk_0x261E3728EE56B3AC()))
	{
		if (unk_0x9A98CA859043585F())
		{
			func_489(&(Global_2103068.f_3), func_491(&(Global_2103068.f_3)));
			if (!BitTest(*uParam0, 4))
			{
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 4);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_487(&(Global_2103068.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_492())
			{
				hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!BitTest(*uParam0, 0))
			{
				if (!unk_0x6D05C5731A838CB3(2, 201))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, false);
				}
			}
			else if (unk_0x2645430E708CBFAC(2, 201))
			{
				func_380(&(Global_2103068.f_49));
				func_380(&Global_2103068);
				*uParam0 = 0;
				Global_2103068.f_2 = 0;
				func_495(0);
				return 1;
			}
		}
	}
	else
	{
		func_489(&(Global_2103068.f_3), func_491(&(Global_2103068.f_3)));
		if ((func_486(&(Global_2103068.f_49)) && !func_458(&(Global_2103068.f_49), 2000, 1)) && !unk_0x261E3728EE56B3AC())
		{
			unk_0x0B0C9A0F9AAEB7F0(uParam0, 3);
			StringCopy(&(Global_2103068.f_3.f_1), "", 64);
			func_487(&(Global_2103068.f_3), 0);
		}
		else if (!BitTest(*uParam0, 3))
		{
			if (!BitTest(*uParam0, 1))
			{
				unk_0xC296E8407A7E3E69(0);
				unk_0x0B0C9A0F9AAEB7F0(uParam0, true);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_487(&(Global_2103068.f_3), 0);
			}
		}
		if (func_486(&Global_2103068))
		{
			if (!func_458(&Global_2103068, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x261E3728EE56B3AC())
				{
					if (unk_0x6B47B305B6557EF9())
					{
						hud::set_warning_message_with_header("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!unk_0xEF37E704F02B50F3())
					{
						if (!BitTest(*uParam0, 0))
						{
							if (!unk_0x6D05C5731A838CB3(2, 201))
							{
								unk_0x0B0C9A0F9AAEB7F0(uParam0, false);
							}
						}
						else if (unk_0x2645430E708CBFAC(2, 201))
						{
							func_380(&Global_2103068);
							*uParam0 = 0;
							Global_2103068.f_2 = 0;
							func_495(0);
							return 1;
						}
					}
				}
				else
				{
					func_380(&Global_2103068);
					*uParam0 = 0;
					Global_2103068.f_2 = 0;
					func_495(0);
					return 1;
				}
			}
			else if (BitTest(*uParam0, 3))
			{
				if (unk_0x6B47B305B6557EF9())
				{
					hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!BitTest(*uParam0, 0))
				{
					if (!unk_0x6D05C5731A838CB3(2, 201))
					{
						unk_0x0B0C9A0F9AAEB7F0(uParam0, false);
					}
				}
				else if (unk_0x2645430E708CBFAC(2, 201))
				{
					func_380(&(Global_2103068.f_49));
					func_380(&Global_2103068);
					*uParam0 = 0;
					Global_2103068.f_2 = 0;
					func_495(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x6B47B305B6557EF9())
				{
					hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					hud::set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xEF37E704F02B50F3())
				{
					if (!BitTest(*uParam0, 0))
					{
						if (!unk_0x6D05C5731A838CB3(2, 201))
						{
							unk_0x0B0C9A0F9AAEB7F0(uParam0, false);
						}
					}
					else if (unk_0x2645430E708CBFAC(2, 201))
					{
						func_380(&(Global_2103068.f_49));
						func_380(&Global_2103068);
						*uParam0 = 0;
						Global_2103068.f_2 = 0;
						func_495(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_486(var uParam0)
{
	return uParam0->f_1;
}

void func_487(var uParam0, bool bParam1)
{
	func_488(uParam0);
	if (bParam1)
	{
		func_495(0);
	}
	uParam0->f_35 = 1;
}

void func_488(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_489(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_490(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x511D14ED2DA887E1(uParam0->f_34);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x60D332F23943B34F(&(uParam0->f_17));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x511D14ED2DA887E1(uParam0->f_34);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x60D332F23943B34F(&(uParam0->f_17));
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0xBD34A69071611974(uParam0->f_33, 70);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_490(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_491(var uParam0)
{
	return uParam0->f_35;
}

int func_492()
{
	if (func_493())
	{
		return 0;
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_493()
{
	return Global_2696683;
}

bool func_494()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_495(bool bParam0)
{
	unk_0x65662724C6BC4810();
	if (bParam0)
	{
		unk_0x8CBD7E751A3A6A85();
	}
}

void func_496(var uParam0, int iParam1, char[4] cParam2)
{
	func_168(&(Local_43.f_119), 1128792064, 1, 0, 1, 1065353216);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(7);
	func_474(iParam1, cParam2);
	func_497(uParam0, &uLocal_1209);
}

void func_497(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	char cVar6[64];
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	
	func_451(&(Global_2103068.f_49), 1, 0);
	unk_0x7009D885379C8CDF();
	func_562();
	func_561(0);
	unk_0x43AE50D2A33F6E2A();
	func_559(1);
	unk_0x4EB223432F8FA0A0(10);
	func_558(1);
	func_557(1);
	if (!func_453())
	{
		if (!unk_0xBC2EE32DE886BD08("LEADERBOARD_SCENE"))
		{
			unk_0xCAC4020CCF361AC8("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = func_371();
		unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_42), 3);
	}
	Var10 = { func_469(unk_0x259BE71D8A81D4FA()) };
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		if (((!unk_0x1595D1B690089487() || !unk_0x99DFE4CAC19D527F()) || (!unk_0xD25970CBEE074E07() && unk_0xB0DF27929B02C57E())) || Global_2097536.f_2832 != 0)
		{
			if (!unk_0x99DFE4CAC19D527F())
			{
				if (Global_2097536.f_2829 != 2)
				{
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!unk_0xD25970CBEE074E07() && unk_0xB0DF27929B02C57E())
			{
				if (Global_2097536.f_2829 != 3)
				{
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!unk_0x1595D1B690089487())
			{
				if (Global_2097536.f_2829 != 4)
				{
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xE6B753D52F4CA222();
				func_556(*uParam0, Global_2097536.f_2780);
				if (unk_0x6BA487C862DB8DDF(&(Global_2097536.f_2780.f_1)))
				{
					if (!func_470(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							cVar6 = { Global_2097536.f_2780.f_9 };
							func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					func_554(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				iVar9 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
				func_553(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
				func_553(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
				func_553(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_42), true);
				func_552(*uParam0);
				unk_0x8744D2E3FC95740E(&(uParam1->f_42), 2);
				unk_0x428C32CC68809A35(1);
			}
			else
			{
				func_552(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
				Global_2097536.f_2829 = 1;
			}
			if (!func_523(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x8744D2E3FC95740E(&(uParam1->f_42), true);
				if (!BitTest(uParam1->f_42, 0))
				{
					unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE6B753D52F4CA222();
					func_556(*uParam0, Global_2097536.f_2780);
					if (unk_0x6BA487C862DB8DDF(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_470(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								cVar6 = { Global_2097536.f_2780.f_9 };
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_554(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_42), false);
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
							func_553(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
							func_553(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
							func_553(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 7);
						func_522(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					func_380(&(Global_2097536.f_2823));
				}
				else if (func_458(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
							func_553(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
							func_553(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
							func_553(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 7);
						func_522(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					func_380(&(Global_2097536.f_2823));
				}
				func_552(*uParam0);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(uParam1->f_42), false);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE6B753D52F4CA222();
					func_556(*uParam0, Global_2097536.f_2780);
					if (unk_0x6BA487C862DB8DDF(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_470(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								cVar6 = { Global_2097536.f_2780.f_9 };
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &cVar6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_555(*uParam0, &(Global_2097536.f_2780.f_1), &cVar6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_554(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						func_383(&Global_2101867);
						func_518(uParam1, &Global_2101867);
						func_517(uParam1, &Global_2101867);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && func_470(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
									func_553(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && func_470(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_553(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_553(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
									if (!unk_0xFE087BC8EB584AA2())
									{
										bVar14 = true;
									}
									else if (!unk_0xEBF44C5F6EF789C0())
									{
										bVar14 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && func_470(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_553(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_553(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_464(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (func_470(uParam1->f_44))
								{
									unk_0x4DE98A9A01197527(unk_0x259BE71D8A81D4FA(), &uVar11);
									if (!Global_2101867[iVar0 /*100*/].f_74 && unk_0x1B79E937E91F40C3(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_2097536.f_2780.f_27)
									{
										if (func_516(&(Global_2101867[iVar0 /*100*/].f_32), &Var10))
										{
											unk_0x0B0C9A0F9AAEB7F0(&iVar9, true);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x0B0C9A0F9AAEB7F0(&iVar9, 3);
											}
										}
									}
									if (func_470(uParam1->f_44))
									{
										cVar6 = { Global_2101867[iVar0 /*100*/] };
										if (!unk_0xD6F9DEE4765092A9(&(Global_2101867[iVar0 /*100*/].f_84)) && !unk_0x1B79E937E91F40C3(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar6, "/", 64);
											StringConCat(&cVar6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										func_515(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &cVar6, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_515(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar5 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_506(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												func_506(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_503(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_503(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_502();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x0B0C9A0F9AAEB7F0(&iVar9, 2);
											unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_501(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 4);
						func_553(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 5);
						func_553(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x0B0C9A0F9AAEB7F0(&iVar9, 6);
						func_553(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_42), true);
					unk_0x8744D2E3FC95740E(&(uParam1->f_42), 2);
					func_552(*uParam0);
					unk_0x428C32CC68809A35(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_501(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_552(*uParam0);
					func_498(uParam0, uParam1);
				}
			}
		}
	}
}

void func_498(var uParam0, var uParam1)
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
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0xAE231F549813BBDF(2))
	{
		unk_0xA6DB7FC56DBDFB82();
		unk_0x4CC1CF98851922CE(2, 239);
		unk_0x4CC1CF98851922CE(2, 240);
		unk_0x4CC1CF98851922CE(2, 237);
		unk_0x4CC1CF98851922CE(2, 238);
		unk_0x66EFB3D6110055C4(2, 200, 1);
		if (unk_0x4465D55576678706(2, 241))
		{
			unk_0x11E5CA6A9B6D7D2A(2, 188, 1f);
		}
		if (unk_0x4465D55576678706(2, 242))
		{
			unk_0x11E5CA6A9B6D7D2A(2, 187, 1f);
		}
		if (unk_0xEE00DCC111704F16(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x11E5CA6A9B6D7D2A(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xAE231F549813BBDF(2))
	{
		func_500(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!BitTest(uParam1->f_246, 0))
		{
			if ((unk_0x6D05C5731A838CB3(2, 188) || unk_0x4465D55576678706(2, 188)) || iVar6 < -100)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246), false);
				func_380(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_499(uParam1, 188))
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_246), false);
		}
		if (!BitTest(uParam1->f_246, 1))
		{
			if ((unk_0x6D05C5731A838CB3(2, 187) || unk_0x4465D55576678706(2, 187)) || iVar6 > 100)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246), true);
				func_380(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_499(uParam1, 187))
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_246), true);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!BitTest(uParam1->f_246, 3))
	{
		if ((unk_0x6D05C5731A838CB3(2, 204) || unk_0xDEE3EFEA31A1F555(2, 204)) || unk_0x875A214D5EBCA509(2, 237))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246), 3);
			func_380(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_499(uParam1, 204))
	{
		unk_0x8744D2E3FC95740E(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x8744D2E3FC95740E(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_501(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_501(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x8744D2E3FC95740E(&(uParam1->f_42), 2);
		}
		if (func_464(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!BitTest(uParam1->f_246, 2))
			{
				if (unk_0x6D05C5731A838CB3(2, 217) || unk_0xDEE3EFEA31A1F555(2, 217))
				{
					if (!unk_0xEF37E704F02B50F3())
					{
						unk_0xBF3D28CA44F3BE2D(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_246), 2);
						unk_0xAD9DEC6201018EA3(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x6D05C5731A838CB3(2, 217))
			{
				unk_0x8744D2E3FC95740E(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_499(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_500(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x6D05C5731A838CB3(2, iParam1) && !unk_0x4465D55576678706(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_458(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x6D05C5731A838CB3(2, iParam1) && !unk_0x4465D55576678706(2, iParam1)) || func_458(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_500(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = system::floor((unk_0xB504E1B50AA21FC5(2, 218) * 127f));
	*uParam1 = system::floor((unk_0xB504E1B50AA21FC5(2, 219) * 127f));
	*uParam2 = system::floor((unk_0xB504E1B50AA21FC5(2, 220) * 127f));
	*uParam3 = system::floor((unk_0xB504E1B50AA21FC5(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = system::floor((unk_0xF069618D9974EB9D(2, 218) * 127f));
			*uParam1 = system::floor((unk_0xF069618D9974EB9D(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = system::floor((unk_0xF069618D9974EB9D(2, 220) * 127f));
			*uParam3 = system::floor((unk_0xF069618D9974EB9D(2, 221) * 127f));
		}
	}
}

void func_501(var uParam0, int iParam1, int iParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_SLOT_STATE");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0xE6B753D52F4CA222();
}

void func_502()
{
	unk_0xE6B753D52F4CA222();
}

void func_503(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_29[bParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x7DCF91CE9137DE0E(fParam15, 2);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(system::floor(fParam15));
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 18 || Param0.f_29[bParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x4721B5E26C8861C8())
				{
					if (Param0.f_29[bParam14] == 19 || Param0.f_29[bParam14] == 20)
					{
						fParam15 = func_505(fParam15);
					}
					else
					{
						fParam15 = func_504(fParam15);
					}
				}
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x7DCF91CE9137DE0E(fParam15, 2);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 0:
			break;
	}
}

float func_504(float fParam0)
{
	return (fParam0 / 0,3048f);
}

float func_505(float fParam0)
{
	return (fParam0 / 1609,344f);
}

void func_506(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17)
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(iParam15);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(-iParam15);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 14);
					unk_0xCFAD3D478C87321A();
				}
				else if (Param0.f_29[bParam14] == 9)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 6);
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 2055);
					unk_0xCFAD3D478C87321A();
				}
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
					unk_0xCFAD3D478C87321A();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 14);
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 2055);
					unk_0xCFAD3D478C87321A();
				}
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 14);
					unk_0xCFAD3D478C87321A();
				}
				else if (Param0.f_29[bParam14] == 10)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 6);
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam15, 2055);
					unk_0xCFAD3D478C87321A();
				}
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0xE7D342E0F16AAA8F(iParam15))
				{
					unk_0x882AEFD55B8D51FB("SCLB_VEH_CUST");
					unk_0xACF853FB3F6EA7D4(unk_0x93E7527CFECC7CD8(iParam15));
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
					unk_0xCFAD3D478C87321A();
				}
			}
			else if (unk_0xE7D342E0F16AAA8F(iParam15))
			{
				unk_0x882AEFD55B8D51FB(unk_0x93E7527CFECC7CD8(iParam15));
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 8:
			if (func_514(iParam15) != 0)
			{
				unk_0x882AEFD55B8D51FB(func_511(func_514(iParam15), 0));
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[bParam14] == 14 || Param0.f_29[bParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0x4721B5E26C8861C8())
				{
					if (Param0.f_29[bParam14] == 15 || Param0.f_29[bParam14] == 16)
					{
						iParam15 = system::floor(func_505(system::to_float(iParam15)));
					}
					else
					{
						iParam15 = system::floor(func_504(system::to_float(iParam15)));
					}
				}
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(iParam15);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				Var0 = { func_510(iParam15) };
				unk_0x882AEFD55B8D51FB(&Var0);
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 22:
			if (bParam16)
			{
				unk_0x882AEFD55B8D51FB("NUMBER");
				unk_0x511D14ED2DA887E1(func_507(iParam15));
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
				unk_0xCFAD3D478C87321A();
			}
			break;
		
		case 0:
			break;
	}
}

int func_507(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_509(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (system::to_float(iParam0) - system::to_float(iVar0));
		iVar2 = system::floor((fVar1 / system::to_float(Global_262145.f_30385)));
		return (199 + iVar2);
	}
	fVar3 = (system::to_float(Global_262145.f_30384) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return system::floor(func_508(-fVar5, -fVar6, fVar7, 1));
}

float func_508(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		return ((-fParam1 - system::sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + system::sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_509(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = (system::to_float(Global_262145.f_30384) / 2f);
	return system::round((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

struct<4> func_510(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_511(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
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
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
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
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
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
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("weapon_navyrevolver"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		case joaat("vehicle_weapon_turret_dinghy5_50cal"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("weapon_fertilizercan"):
			if (bParam1)
			{
				return "WTU_FERTCAN";
			}
			else
			{
				return "WT_FERTCAN";
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE";
			}
			else
			{
				return "WT_HEAVYRIFLE";
			}
			break;
		
		case joaat("weapon_emplauncher"):
			if (bParam1)
			{
				return "WTU_EMPL";
			}
			else
			{
				return "WT_EMPL";
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			if (bParam1)
			{
				return "WTU_STNGUNMP";
			}
			else
			{
				return "WT_STNGUNMP";
			}
			break;
		
		case joaat("weapon_tacticalrifle"):
			if (bParam1)
			{
				return "WTU_TACRIFLE";
			}
			else
			{
				return "WT_TACRIFLE";
			}
			break;
		
		case joaat("weapon_precisionrifle"):
			if (bParam1)
			{
				return "WTU_PRCSRIFLE";
			}
			else
			{
				return "WT_PRCSRIFLE";
			}
			break;
		
		case joaat("weapon_bzgas"):
			if (bParam1)
			{
				return "WTU_BZGAS";
			}
			else
			{
				return "WTU_BZGAS";
			}
			break;
		
		case joaat("weapon_stinger"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		case joaat("weapon_pistolxm3"):
			if (bParam1)
			{
				return "WTU_PISTOLXM3";
			}
			else
			{
				return "WT_PISTOLXM3";
			}
			break;
		
		case joaat("weapon_candycane"):
			if (bParam1)
			{
				return "WTU_CANDYCANE";
			}
			else
			{
				return "WT_CANDYCANE";
			}
			break;
		
		case joaat("weapon_railgunxm3"):
			if (bParam1)
			{
				return "WTU_RAILGUNXM3";
			}
			else
			{
				return "WT_RAILGUNXM3";
			}
			break;
		
		case 350597077:
			if (bParam1)
			{
				return "WTU_TECPISTOL";
			}
			else
			{
				return "WT_TECPISTOL";
			}
			break;
		
		case joaat("vehicle_weapon_trailer_dualaa"):
			if (bParam1)
			{
				return "WT_UV_DUALAA";
			}
			else
			{
				return "WT_V_DUALAA";
			}
			break;
		
		case joaat("weapon_snowball"):
			if (bParam1)
			{
				return "FMMC_U_SNOWBALL";
			}
			else
			{
				return "FMMC_SNOWBALL";
			}
			break;
		
		case joaat("weapon_battlerifle"):
			if (bParam1)
			{
				return "WTU_BATTLERIFLE";
			}
			else
			{
				return "WT_BATTLERIFLE";
			}
			break;
		
		case joaat("weapon_snowlauncher"):
			if (bParam1)
			{
				return "WTU_SNOWLNCHR";
			}
			else
			{
				return "WT_SNOWLNCHR";
			}
			break;
		
		case -624951259:
			if (bParam1)
			{
				return "WTU_STUNROD";
			}
			else
			{
				return "WT_STUNROD";
			}
			break;
		
		default:
			if (func_513(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_512(&(Var0.f_31));
				}
				else
				{
					return func_512(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_512(var uParam0)
{
	return uParam0;
}

int func_513(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9A7818E159C72516();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDF94727C5BBB298F(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_514(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return joaat("weapon_heavyrifle");
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_515(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char[4] cParam5)
{
	unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	if (iParam3 > 0)
	{
		unk_0x882AEFD55B8D51FB("NUMBER");
		unk_0x511D14ED2DA887E1(iParam3);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		unk_0x882AEFD55B8D51FB("SC_LB_EMPTY");
		unk_0xCFAD3D478C87321A();
	}
	unk_0xCE3E870AC37B4253(cParam4);
	unk_0xCE3E870AC37B4253(uParam5);
}

int func_516(var uParam0, var uParam1)
{
	if (!func_464(*uParam0))
	{
		return 0;
	}
	if (!func_464(*uParam1))
	{
		return 0;
	}
	if (unk_0xD43ED7463CB7671C(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_517(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
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

void func_518(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_521(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_521(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_521(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_519(uParam1);
	}
}

void func_519(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2704[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_469(unk_0x259BE71D8A81D4FA()) };
	if (unk_0xC0967BD19C389A28(Global_2097536.f_2826))
	{
		iVar4 = unk_0xEDF2663D6A2097BD(Global_2097536.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_520(&Global_2101737);
				iVar2 = 0;
				unk_0x4B9EEFBC1906C36A(Global_2097536.f_2826, iVar0, &Global_2101737);
				*(uParam0[iVar0 /*100*/]) = { Global_2101737.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_2101737.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_2101737.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_2101737.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_2101737.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_2101737.f_60;
				Global_2097536.f_2708 = Global_2101737.f_62;
				Global_2097536.f_2769 = Global_2101737.f_63;
				iVar2 = 0;
				if (BitTest(Global_2101737.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (BitTest(Global_2101737.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (BitTest(Global_2101737.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_2097536.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (BitTest(Global_2101737.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_516(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_2097536.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_2101737.f_62)
				{
					if (BitTest(Global_2101737.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_2101737.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_2101737.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_520(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_521(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680[iParam3 /*16*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680.f_49[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
			Global_2101680.f_53[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_2097536.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_2097536.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_469(unk_0x259BE71D8A81D4FA()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_2097536.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = system::floor(system::to_float((*uParam2 / 2)));
		if ((Global_2097536.f_2775[iParam3] + iVar0) < 12 && (Global_2097536.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_522(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x0B0C9A0F9AAEB7F0(&iParam2, 7);
	unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0x882AEFD55B8D51FB(sParam3);
	unk_0xF84BAB6A609E97D4();
	unk_0xE6B753D52F4CA222();
}

int func_523(var uParam0)
{
	if (!Global_2097532)
	{
		if (!func_486(&(Global_2097536.f_2827)))
		{
			func_459(&(Global_2097536.f_2827), 1, 0);
			return 0;
		}
		else if (!func_458(&(Global_2097536.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x1595D1B690089487() || !unk_0x99DFE4CAC19D527F()) || (!unk_0xD25970CBEE074E07() && unk_0xB0DF27929B02C57E())) || Global_2097536.f_2832 != 0)
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_42), 4);
		return 1;
	}
	if (!BitTest(uParam0->f_42, 4))
	{
		func_551(uParam0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 4);
		return 0;
	}
	else if (BitTest(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_549(uParam0))
	{
		return 0;
	}
	if (!func_547(uParam0))
	{
		return 0;
	}
	if (!func_540(uParam0))
	{
		return 0;
	}
	if (!BitTest(uParam0->f_42, 6))
	{
		func_383(&Global_2101867);
		func_518(uParam0, &Global_2101867);
		func_517(uParam0, &Global_2101867);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 6);
	}
	if (!BitTest(uParam0->f_42, 7))
	{
		if (!func_486(&(Global_2097536.f_2830)))
		{
			func_459(&(Global_2097536.f_2830), 1, 0);
		}
		else if (func_458(&(Global_2097536.f_2830), 30000, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 7);
		}
		if (func_537(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_534(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_527(&Global_2101867))
		{
			func_524(&Global_2101867);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 7);
			func_524(&Global_2101867);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_524(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = func_526(Global_2097536.f_2826);
	if (Global_2100721.f_81[iVar2] != 0)
	{
		func_525(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_520(&Global_2101737);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_2101737 = Global_2097536.f_2826;
			Global_2101737.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x1B79E937E91F40C3(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_2101737.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_2101737.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_2101737.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_464((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_2101737.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_2101737.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_2101737.f_62 = Global_2097536.f_2708;
			Global_2101737.f_63 = Global_2097536.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2101737.f_61), false);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_2101737.f_61), false);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2101737.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_2101737.f_62)
			{
				if (BitTest(Global_2101737.f_63, bVar1))
				{
					Global_2101737.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_2101737.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_2100721.f_81[iVar2] = Global_2097536.f_2826;
			unk_0x6353C1BD2A5E7EA9(&Global_2101737);
		}
		iVar0++;
	}
	Global_2100721.f_87[iVar2 /*3*/] = { func_243(unk_0x259BE71D8A81D4FA()) };
}

void func_525(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0xC0967BD19C389A28(Global_2100721.f_81[iParam1]))
		{
			unk_0xEB551BF55D9D9721(Global_2100721.f_81[iParam1]);
		}
		Global_2100721.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xC0967BD19C389A28(iParam0))
		{
			unk_0xEB551BF55D9D9721(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_2100721.f_81[iVar0] == iParam0)
			{
				Global_2100721.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_526(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xC0967BD19C389A28(Global_2100721.f_81[iVar0]))
		{
			iVar3 = unk_0x992FDA8495111E7E(Global_2100721.f_81[iVar0]);
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

int func_527(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_532(uParam0);
			if ((func_494() || func_531()) && !unk_0x97DD063A9C6137F8(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_464((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_530(&((uParam0[iVar0 /*100*/])->f_32), &Global_2103169))
					{
						Global_2103169[Global_2103169.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_2103169.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_2103169.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_528(&((uParam0[1 /*100*/])->f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_2103169.f_206 > 12)
			{
				Global_2103169.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_2103169.f_206)
				{
					if (func_464((uParam0[iVar0 /*100*/])->f_32) && func_464(Global_2103169[iVar1 /*13*/]))
					{
						if (unk_0xD43ED7463CB7671C(&((uParam0[iVar0 /*100*/])->f_32), &(Global_2103169[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_2103169.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_528(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x51BEADCE3428DB6F())
			{
			}
			else
			{
				unk_0x96B33F4FC167DB47();
				unk_0xAC93CF5F25CF17A8(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x51BEADCE3428DB6F())
			{
				if (unk_0xCE1D2FC338EEA6AA())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x2C34F64CC58753D7(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_529(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x51BEADCE3428DB6F())
			{
				unk_0xFAE42E9AE7B80A4C();
			}
			else
			{
				unk_0x96B33F4FC167DB47();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_529(var uParam0, var uParam1)
{
	unk_0x29B9959EF2236634(uParam0, 35, uParam1);
}

int func_530(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_464(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xD43ED7463CB7671C(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_531()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_532(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_533(&(Global_2103169[iVar0 /*13*/]));
		StringCopy(&(Global_2103169.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x51BEADCE3428DB6F())
		{
			unk_0x96B33F4FC167DB47();
		}
	}
	if (unk_0x51BEADCE3428DB6F())
	{
		unk_0xFAE42E9AE7B80A4C();
	}
	Global_2103169.f_206 = 0;
}

void func_533(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_534(var uParam0)
{
	int iVar0;
	
	if (unk_0x761778199FE1211C())
	{
		return 1;
	}
	else if (func_531() || func_494())
	{
		if (!func_536(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_535(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_535(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_464(*uParam1))
			{
				if (!unk_0xBE0146369C46314B(uParam1))
				{
					if (func_531() || func_494())
					{
						if (unk_0x8F46B8E54248FD48(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x1226C55CA7D2269A())
					{
						if (unk_0x8F46B8E54248FD48(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x6E4BB594E2A075CC(uParam1), 64);
						if (unk_0x0BA1A956D36B210F())
						{
						}
						else if (func_494())
						{
						}
						else if (unk_0x761778199FE1211C())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xBE0146369C46314B(uParam1))
			{
				if (!unk_0x6B6DB41744C41D5E())
				{
					if (unk_0xA44A2B8A83947D02())
					{
						StringCopy(sParam2, unk_0x6E4BB594E2A075CC(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_536(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_531() && !func_494())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_2097536.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_2097536.f_2833[iVar1 /*16*/]), "", 64);
				func_533(&(Global_2097536.f_3026[iVar1 /*13*/]));
				if (func_464((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_2097536.f_3026[Global_2097536.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_2097536.f_3183++;
				}
				iVar1++;
			}
			if (Global_2097536.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x310461CE0659232F(&(Global_2097536.f_3026), Global_2097536.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xD61DBE5217500D72((uParam0[0 /*100*/])->f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_464((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_2097536.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_537(var uParam0)
{
	int iVar0;
	
	if (func_531() || func_494())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_539(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_2097536.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_538(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_538(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xD6F9DEE4765092A9(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xF1DAEAF3D760B0ED(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_464(Var0))
			{
				if (!unk_0xBE0146369C46314B(&Var0))
				{
					if ((unk_0x1226C55CA7D2269A() || func_531()) || func_494())
					{
						if (unk_0x8F46B8E54248FD48(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x6E4BB594E2A075CC(&Var0), 64);
						if (unk_0x0BA1A956D36B210F())
						{
						}
						else if (func_494())
						{
						}
						else if (unk_0x761778199FE1211C())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xBE0146369C46314B(&Var0))
			{
				if (!unk_0x6B6DB41744C41D5E())
				{
					if (unk_0xA44A2B8A83947D02())
					{
						StringCopy(sParam17, unk_0x6E4BB594E2A075CC(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_539(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!func_531() && !func_494())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xF1DAEAF3D760B0ED(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_464(Var1[0 /*13*/]))
			{
				if (!unk_0xBE0146369C46314B(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x310461CE0659232F(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xBD6CA019F46AB947(unk_0xA34132DD5D4FE383(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xD61DBE5217500D72(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_540(var uParam0)
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
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_469(unk_0x259BE71D8A81D4FA()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_2097536.f_2775[iVar9] = -1;
			Global_2097536.f_2704[iVar9] = 0;
			Global_2097157.f_374 = -1;
			if (unk_0x7260716F2E4D7661())
			{
				if (unk_0xE582BF3EDDBB1A68(&Var12))
				{
					if (unk_0xC07B1AA6155EC337(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1.f_0 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_449(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_546(), 0, 0, 0))
			{
				func_467(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_546())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0xA8236CAFF38CEF7C(iVar7, &Var0);
								if (Global_2097157.f_374 < 0)
								{
									if (func_516(&Var0, &Var12) || func_516(&Var0, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x575A7688415EEE2A(iVar7, false))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0xFF7C26AC7D71757C(iVar7, false))
									{
										iVar5 = iVar7;
									}
								}
								func_545(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0xA8236CAFF38CEF7C(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar9] < 11)
							{
								if (func_546() && iVar5 == 0)
								{
									func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_2097536.f_2775[iVar9] = 0;
									Global_2097536.f_2704[iVar9]++;
								}
								if (func_546() && (func_516(&Var0, &Var12) || func_516(&Var0, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_516(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_2097536.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_543(uParam0->f_44))
									{
										iVar4 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_470(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_2097536.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_2097536.f_2704[iVar9]++;
						}
						if (!func_546())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_545(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0xA8236CAFF38CEF7C(iVar7, &Var0);
							if (Global_2097536.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_546() && iVar5 == iVar7)
								{
									if (!func_516(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
										Global_2097536.f_2704[iVar9]++;
									}
								}
								if (func_546() && (func_516(&Var0, &Var12) || func_516(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar9] < 11)
								{
									if (func_464(Var0) && !func_516(&Var0, &(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_516(&Var0, &Var12))
										{
											if (Global_2097536.f_2775[iVar9] < 0)
											{
												Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_543(uParam0->f_44))
										{
											iVar4 = unk_0x575A7688415EEE2A(iVar7, Global_2097536.f_2709);
											if (iVar4 == 1)
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_470(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0x575A7688415EEE2A(iVar7, Global_2097536.f_2710[iVar2]);
											}
											else
											{
												Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xFF7C26AC7D71757C(iVar7, Global_2097536.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_2097536.f_2704[iVar9]++;
									}
								}
							}
							func_545(&Var0);
							iVar7++;
						}
						unk_0x612EE6D9325A3B16();
						func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_2097536.f_2775[iVar9] == -1 && func_546())
							{
								if (Global_2097536.f_2704[iVar9] >= 1)
								{
									func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
								Global_2097536.f_2704[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_2097536.f_2704[iVar9]++;
						}
						unk_0x612EE6D9325A3B16();
						func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_2097536.f_2775[bVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1.f_0 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_542(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_467(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0xA8236CAFF38CEF7C(iVar2, &Var0);
							bVar10 = false;
							if (Global_2097536[bVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[bVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_2097536.f_2704[bVar9] < 11 || bVar10)
							{
								if (func_546() && (func_516(&Var0, &Var12) || func_516(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_2097536[bVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_2097536[bVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_2097536[bVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_543(uParam0->f_44))
									{
										iVar4 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[bVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[bVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_470(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[bVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[bVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[bVar9 /*901*/][0 /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[bVar9 /*901*/][0 /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_2097536.f_2704[bVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_2097536.f_2704[bVar9]++;
										}
									}
								}
								else if (Global_2097536.f_2704[bVar9] < 11)
								{
									MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32 = { Var0 };
									if (func_543(uParam0->f_44))
									{
										iVar4 = unk_0x575A7688415EEE2A(iVar2, Global_2097536.f_2709);
										if (iVar4 == 1)
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_470(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59 = Var0.f_96;
									Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(iVar2, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(iVar2, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_2097536.f_2704[bVar9]++;
									}
								}
							}
							func_545(&Var0);
							iVar2++;
						}
					}
					unk_0x612EE6D9325A3B16();
					func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar9] = 3;
				}
				else
				{
					unk_0x612EE6D9325A3B16();
					func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), bVar9);
					Global_2097536.f_2704[bVar9] = 0;
					(*uParam0)[bVar9] = 3;
				}
				if (Global_2097536.f_2775[bVar9] == -1 && func_546())
				{
					if (Global_2097536.f_2704[bVar9] >= 1)
					{
						func_544(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_544(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
					}
					Global_2097536.f_2775[bVar9] = Global_2097536.f_2704[bVar9];
					Global_2097536.f_2704[bVar9]++;
				}
			}
			break;
		
		case 3:
			func_541(bVar9, Global_2097157.f_374);
			(*uParam0)[bVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_541(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_546() && Global_2097536.f_2704[iParam0] > Global_2097536.f_2775[iParam0]) && Global_2097536.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_2097536.f_2704[iParam0])
			{
				if (iVar0 != Global_2097536.f_2775[iParam0])
				{
					if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_546())
		{
		}
		if (Global_2097536.f_2704[iParam0] <= Global_2097536.f_2775[iParam0])
		{
		}
		if (Global_2097536.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_542(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_456() && !func_452())
			{
				func_450(*uParam2);
				if (unk_0xCB7FE0F272C209AB(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2F700943A3341959(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x7BBF11C251338D41(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_543(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_544(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_470(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_2097157.f_355}, 16);
		sParam1->f_32 = { Global_2097157.f_361 };
		MemCopy(&(sParam1->f_16), {Global_2097157.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()), 64);
		sParam1->f_32 = { func_469(unk_0x259BE71D8A81D4FA()) };
	}
	sParam1->f_59 = iParam2;
	if (func_543(uParam0->f_44))
	{
		iVar0 = Global_2097157.f_211.f_36[Global_2097536.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_545(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

int func_546()
{
	if (Global_2097532 && Global_2097533)
	{
		return 1;
	}
	return 0;
}

int func_547(var uParam0)
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_469(unk_0x259BE71D8A81D4FA()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0xFD8C855412F74D0F();
			Global_2097536.f_2775[1] = -1;
			Global_2097157.f_374 = -1;
			Global_2097536.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_546())
				{
					bVar8 = false;
				}
				else
				{
					bVar8 = true;
				}
				if (func_548(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar8, 0, 100))
				{
					func_467(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var1))
					{
						if (func_546())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0xA8236CAFF38CEF7C(iVar6, &Var0);
									if (func_470(uParam0->f_44))
									{
										if (Global_2097157.f_374 < 0)
										{
											if (func_516(&Var0, &(Global_2097157.f_361)))
											{
												Global_2097157.f_374 = Var0.f_96;
											}
										}
									}
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x575A7688415EEE2A(iVar6, false))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0xFF7C26AC7D71757C(iVar6, false))
									{
										iVar4 = iVar6;
									}
									func_545(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_546() && iVar4 == 0)
						{
							if (Global_2097536.f_2704[iVar9] < 11)
							{
								func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								Global_2097536.f_2775[iVar9] = 0;
								Global_2097536.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0xA8236CAFF38CEF7C(0, &Var0);
							if (func_546() && (func_516(&Var0, &Var10) || func_516(&Var0, &(Global_2097157.f_361))))
							{
							}
							else if (func_464(Var0) && Global_2097536.f_2704[iVar9] < 11)
							{
								if (func_516(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_2097536.f_2775[1] = 0;
								}
								MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_543(uParam0->f_44))
								{
									iVar7 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
									if (iVar7 == 1)
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_470(uParam0->f_44))
								{
									MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_2097536.f_2708)
								{
									if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0x575A7688415EEE2A(0, Global_2097536.f_2710[iVar2]);
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xFF7C26AC7D71757C(0, Global_2097536.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_2097536.f_2704[1]++;
							}
							else
							{
								func_545(&Var0);
								unk_0x612EE6D9325A3B16();
								func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_2097536.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_2097536.f_2775[iVar9] == -1 && func_546())
								{
									if (Global_2097536.f_2704[iVar9] >= 1)
									{
										func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
									}
									Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
									Global_2097536.f_2704[iVar9]++;
								}
								return 0;
							}
							func_545(&Var0);
						}
						else
						{
							Global_2097536.f_2704[1] = 0;
							func_545(&Var0);
							unk_0x612EE6D9325A3B16();
							func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_2097536.f_2775[iVar9] == -1 && func_546())
							{
								if (Global_2097536.f_2704[iVar9] >= 1)
								{
									func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
								Global_2097536.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_546())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0xA8236CAFF38CEF7C(iVar6, &Var0);
							if (Global_2097536.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_546() && iVar4 == iVar6)
								{
									if (!func_516(&(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
										Global_2097536.f_2704[iVar9]++;
									}
								}
								if (func_546() && (func_516(&Var0, &Var10) || func_516(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[1] < 12)
								{
									if (func_464(Var0) && !func_516(&Var0, &(Global_2097536[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_516(&Var0, &Var10))
										{
											if (Global_2097536.f_2775[1] < 0)
											{
												Global_2097536.f_2775[1] = Global_2097536.f_2704[1];
											}
										}
										MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74 = 1;
										if (func_543(uParam0->f_44))
										{
											iVar7 = unk_0x575A7688415EEE2A(iVar6, Global_2097536.f_2709);
											if (iVar7 == 1)
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_470(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar2]))
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[iVar2] = unk_0x575A7688415EEE2A(iVar6, Global_2097536.f_2710[iVar2]);
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[iVar2] = unk_0xFF7C26AC7D71757C(iVar6, Global_2097536.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_2097536.f_2704[1]++;
									}
								}
							}
							func_545(&Var0);
							iVar6++;
						}
						unk_0x612EE6D9325A3B16();
						func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_2097536.f_2775[iVar9] == -1 && func_546())
						{
							if (Global_2097536.f_2704[iVar9] >= 1)
							{
								func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), Global_2097536[iVar9 /*901*/][(Global_2097536.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_544(uParam0, &(Global_2097536[iVar9 /*901*/][Global_2097536.f_2704[iVar9] /*75*/]), 1);
							}
							Global_2097536.f_2775[iVar9] = Global_2097536.f_2704[iVar9];
							Global_2097536.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), true);
						return 0;
					}
				}
			}
			else
			{
				func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_2097536.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_541(iVar9, Global_2097157.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_548(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_456() && !func_452())
			{
				func_450(*uParam2);
				if (stats::leaderboards2_read_friends_by_row(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x2F700943A3341959(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x7BBF11C251338D41(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_549(var uParam0)
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
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_469(unk_0x259BE71D8A81D4FA()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_2097536.f_2775[iVar10] = -1;
			Global_2097536.f_2704[iVar10] = 0;
			Global_2097157.f_374 = -1;
			Global_2097533 = 0;
			if (func_550(uParam0->f_44))
			{
				if (!Global_2097533)
				{
					Global_2097533 = 1;
				}
			}
			else if (Global_2097533)
			{
				Global_2097533 = 0;
			}
			if (!Global_2097533)
			{
			}
			if (func_449(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_546(), 0, 0, 0))
			{
				func_467(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_546())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0xA8236CAFF38CEF7C(iVar8, &Var1);
								if (Global_2097157.f_374 < 0)
								{
									if (func_516(&Var1, &Var0) || func_516(&Var1, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x575A7688415EEE2A(iVar8, false))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0xFF7C26AC7D71757C(iVar8, false))
									{
										iVar6 = iVar8;
									}
								}
								func_545(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0xA8236CAFF38CEF7C(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar10] < 11)
							{
								if (func_546() && iVar6 == 0)
								{
									func_544(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_2097536.f_2775[iVar10] = 0;
									Global_2097536.f_2704[iVar10]++;
								}
								if (func_546() && (func_516(&Var1, &Var0) || func_516(&Var1, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_516(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_2097536.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_543(uParam0->f_44))
									{
										iVar5 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
										if (iVar5 == 1)
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_470(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(0, Global_2097536.f_2710[iVar3]);
										}
										else
										{
											Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(0, Global_2097536.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_2097536.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_2097536.f_2704[iVar10]++;
						}
						if (!func_546())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_545(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0xA8236CAFF38CEF7C(iVar8, &Var1);
							if (Global_2097536.f_2704[iVar10] < 11 && Var1.f_96 > 1)
							{
								if (func_546() && iVar6 == iVar8)
								{
									if (!func_516(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_544(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
										Global_2097536.f_2704[iVar10]++;
									}
								}
								if (func_546() && (func_516(&Var1, &Var0) || func_516(&Var1, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar10] < 11)
								{
									if (func_464(Var1) && !func_516(&(Global_2097536[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_516(&Var1, &Var0))
										{
											if (Global_2097536.f_2775[iVar10] < 0)
											{
												Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_543(uParam0->f_44))
										{
											iVar5 = unk_0x575A7688415EEE2A(iVar8, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_470(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar3]))
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0x575A7688415EEE2A(iVar8, Global_2097536.f_2710[iVar3]);
											}
											else
											{
												Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xFF7C26AC7D71757C(iVar8, Global_2097536.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_2097536.f_2704[iVar10]++;
									}
								}
							}
							func_545(&Var1);
							iVar8++;
						}
						unk_0x612EE6D9325A3B16();
						func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_2097536.f_2775[iVar10] == -1 && func_546())
							{
								if (Global_2097536.f_2704[iVar10] >= 1)
								{
									func_544(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), Global_2097536[iVar10 /*901*/][(Global_2097536.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_544(uParam0, &(Global_2097536[iVar10 /*901*/][Global_2097536.f_2704[iVar10] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar10] = Global_2097536.f_2704[iVar10];
								Global_2097536.f_2704[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_2097536.f_2704[iVar10]++;
						}
						unk_0x612EE6D9325A3B16();
						func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_2097536.f_2775[bVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_542(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_467(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF685596DB2F81084(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0xA8236CAFF38CEF7C(iVar3, &Var1);
							if (func_546() && (func_516(&Var1, &Var0) || func_516(&Var1, &(Global_2097157.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_2097536[bVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[bVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_2097536.f_2704[bVar10] < 11 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_2097536[bVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_2097536[bVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_2097536[bVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_543(uParam0->f_44))
										{
											iVar5 = unk_0x575A7688415EEE2A(0, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[bVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[bVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_470(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[bVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[bVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar4]))
											{
												Global_2097536[bVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = unk_0x575A7688415EEE2A(iVar3, Global_2097536.f_2710[iVar4]);
											}
											else
											{
												Global_2097536[bVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = unk_0xFF7C26AC7D71757C(iVar3, Global_2097536.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_2097536.f_2704[bVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_2097536.f_2704[bVar10]++;
											}
										}
										else if (Global_2097536.f_2704[bVar10] == 1 && Global_2097536.f_2775[bVar10] == -1)
										{
											Global_2097536.f_2704[bVar10]++;
										}
									}
									else if (Global_2097536.f_2704[bVar10] < 11)
									{
										MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), {Var1.f_13}, 16);
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_32 = { Var1 };
										if (func_543(uParam0->f_44))
										{
											iVar5 = unk_0x575A7688415EEE2A(iVar3, Global_2097536.f_2709);
											if (iVar5 == 1)
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_470(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_59 = Var1.f_96;
										Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar4]))
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_67[iVar4] = unk_0x575A7688415EEE2A(iVar3, Global_2097536.f_2710[iVar4]);
											}
											else
											{
												Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_60[iVar4] = unk_0xFF7C26AC7D71757C(iVar3, Global_2097536.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_2097536.f_2704[bVar10]++;
										}
									}
								}
							}
							func_545(&Var1);
							iVar3++;
						}
					}
					unk_0x612EE6D9325A3B16();
					func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar10] = 2;
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2097536.f_2832), bVar10);
					func_385(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2704[bVar10] = 0;
					(*uParam0)[bVar10] = 2;
					Global_2097536.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_2097536.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_2097536.f_2775[bVar10] == -1 && func_546())
			{
				if (Global_2097536.f_2704[bVar10] >= 1)
				{
					func_544(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Global_2097536[bVar10 /*901*/][(Global_2097536.f_2704[bVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_544(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), 1);
				}
				Global_2097536.f_2775[bVar10] = Global_2097536.f_2704[bVar10];
				Global_2097536.f_2704[bVar10]++;
			}
			break;
		
		case 2:
			func_541(bVar10, Global_2097157.f_374);
			(*uParam0)[bVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_550(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_2097532)
	{
		if (Global_2097157.f_5 != 0)
		{
			if (Global_2097157.f_5 == Param0.f_0)
			{
				if (Global_2097157.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x1B79E937E91F40C3(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x1B79E937E91F40C3(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_551(var uParam0)
{
	int iVar0;
	
	if (unk_0xC0967BD19C389A28(Global_2097536.f_2826))
	{
		iVar0 = unk_0x992FDA8495111E7E(Global_2097536.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_42), 5);
			func_525(Global_2097536.f_2826, -1);
		}
	}
}

void func_552(var uParam0)
{
	if (unk_0xA0C7B98BCF1EEF9E(uParam0))
	{
		unk_0xA91A4C18A2DB01BD(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_553(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (BitTest(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (BitTest(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (BitTest(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x261E3728EE56B3AC() && unk_0x7260716F2E4D7661())
		{
			if ((func_494() || func_531()) && !unk_0x97DD063A9C6137F8(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_469(unk_0x259BE71D8A81D4FA()) };
				if (unk_0xE582BF3EDDBB1A68(&Var4))
				{
					unk_0xC07B1AA6155EC337(&Var1, 35, &Var4);
					if (!unk_0xD6F9DEE4765092A9(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
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
	unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
	unk_0x330108B080A2132F(*iParam1);
	unk_0x330108B080A2132F(iParam2);
	if (bVar3)
	{
		unk_0x882AEFD55B8D51FB(sVar0);
		unk_0xB993F5B7A74B2A85(&Var2);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		unk_0x882AEFD55B8D51FB(sVar0);
		unk_0xCFAD3D478C87321A();
	}
	unk_0xE6B753D52F4CA222();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&iVar5, 7);
		unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
		unk_0x330108B080A2132F(*iParam1);
		unk_0x330108B080A2132F(iVar5);
		if (!unk_0x261E3728EE56B3AC())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x1595D1B690089487())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x882AEFD55B8D51FB(sVar0);
		unk_0xF84BAB6A609E97D4();
		unk_0xE6B753D52F4CA222();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (BitTest(iParam2, 5))
		{
			if (unk_0xFD8C855412F74D0F() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (BitTest(iParam2, 6))
		{
			if (unk_0xFE087BC8EB584AA2())
			{
				if (unk_0xEBF44C5F6EF789C0())
				{
					if (unk_0x261E3728EE56B3AC() && unk_0x7260716F2E4D7661())
					{
						if ((func_494() || func_531()) && !unk_0x97DD063A9C6137F8(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_469(unk_0x259BE71D8A81D4FA()) };
							if (unk_0xE582BF3EDDBB1A68(&Var6))
							{
								unk_0xC07B1AA6155EC337(&Var1, 35, &Var6);
								if (!unk_0xD6F9DEE4765092A9(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
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
		iVar7 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&iVar7, 7);
		unk_0x88F483FBD433696A(uParam0, "SET_SLOT");
		unk_0x330108B080A2132F(*iParam1);
		unk_0x330108B080A2132F(iVar7);
		if (bVar3)
		{
			unk_0x882AEFD55B8D51FB(sVar0);
			unk_0xB993F5B7A74B2A85(&Var2);
			unk_0xF84BAB6A609E97D4();
		}
		else
		{
			unk_0x882AEFD55B8D51FB(sVar0);
			unk_0xF84BAB6A609E97D4();
		}
		unk_0xE6B753D52F4CA222();
		*iParam1++;
	}
}

void func_554(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x88F483FBD433696A(uParam0, "SET_TITLE");
	unk_0x882AEFD55B8D51FB(sParam1);
	unk_0xCFAD3D478C87321A();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x882AEFD55B8D51FB(uParam2[iVar0 /*6*/]);
		unk_0xCFAD3D478C87321A();
		iVar0++;
	}
	unk_0xE6B753D52F4CA222();
}

void func_555(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x88F483FBD433696A(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x882AEFD55B8D51FB(uParam1);
	if (!unk_0xD6F9DEE4765092A9(sParam2))
	{
		unk_0xACF853FB3F6EA7D4(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				unk_0xB993F5B7A74B2A85(sParam3);
			}
		}
		else if (!unk_0xD6F9DEE4765092A9(sParam3))
		{
			unk_0xACF853FB3F6EA7D4(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xD6F9DEE4765092A9(sParam3))
			{
				unk_0xB993F5B7A74B2A85(sParam3);
			}
		}
		else if (!unk_0xD6F9DEE4765092A9(sParam3))
		{
			unk_0xACF853FB3F6EA7D4(sParam3);
		}
		unk_0x511D14ED2DA887E1(iParam5);
	}
	unk_0xCFAD3D478C87321A();
	unk_0xE6B753D52F4CA222();
}

void func_556(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_DISPLAY_TYPE");
	unk_0x330108B080A2132F(iParam1);
	unk_0xE6B753D52F4CA222();
}

void func_557(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_558(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_559(bool bParam0)
{
	if (bParam0)
	{
		func_562();
	}
	func_560(4, -1);
	func_560(6, -1);
	func_560(7, -1);
	func_560(3, -1);
	func_560(1, -1);
	func_560(2, -1);
	func_560(11, -1);
	func_560(13, -1);
	func_560(14, -1);
	func_560(16, -1);
}

void func_560(bool bParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1047), iParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1668667.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_561(int iParam0)
{
	if (func_156())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_157(0))
		{
			func_152(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_562()
{
	Global_2738934.f_4651 = 0;
}

void func_563(bool bParam0)
{
	if (bParam0)
	{
		func_277(&(Local_43.f_119), 0, 0, 1, 1);
		func_276(&(Local_43.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_276(&(Local_43.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_564(&(Local_43.f_119), 1);
	}
	else
	{
		func_277(&(Local_43.f_119), 0, 0, 1, 1);
		func_276(&(Local_43.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_564(&(Local_43.f_119), 1);
	}
}

void func_564(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_170(&(uParam0->f_1), 1024);
	}
	else
	{
		func_169(&(uParam0->f_1), 1024);
	}
}

int func_565(var uParam0)
{
	if ((BitTest(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_566(var uParam0)
{
	if (Global_112999 != 0 && Global_113969.f_19046.f_12[Global_112999 /*8*/].f_4 == 0)
	{
		func_277(uParam0, 0, 0, 1, 1);
		func_276(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x99DFE4CAC19D527F())
		{
			func_276(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_193 = 1;
		}
		else if (unk_0x99DFE4CAC19D527F() && iLocal_192)
		{
			func_276(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_193 = 0;
		}
		else
		{
			iLocal_193 = 0;
		}
	}
	else
	{
		func_277(uParam0, 0, 0, 1, 1);
		func_276(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_276(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x99DFE4CAC19D527F())
		{
			func_276(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_193 = 1;
		}
		else if (unk_0x99DFE4CAC19D527F() && iLocal_192)
		{
			func_276(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_193 = 0;
		}
		else
		{
			iLocal_193 = 0;
		}
	}
	func_564(&(Local_43.f_119), 1);
}

void func_567()
{
	func_596();
	func_444();
	func_595(&(Local_2034.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_595(&uLocal_1726, 0, 0, "PilotDispatch", 0, 1);
	func_584(&Local_2034);
	func_568(&Local_2034, Local_43.f_10);
	if (unk_0xFC8BFE4B41177C22(Local_2034.f_358[0 /*189*/].f_9))
	{
		unk_0x0B74F181ADFC39BF(Local_2034.f_358[0 /*189*/].f_9, 4);
	}
}

void func_568(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_583(&Local_2034);
			break;
		
		case 1:
			func_582(&Local_2034);
			break;
		
		case 2:
			func_581(&Local_2034);
			func_580(&(Local_2034.f_27[2 /*10*/]), 1);
			func_580(&(Local_2034.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_579(&Local_2034);
			break;
		
		case 4:
			func_569(&Local_2034);
			break;
	}
}

void func_569(var uParam0)
{
	func_584(uParam0);
	uParam0->f_12 = 32;
	func_578(&(uParam0->f_27[0 /*10*/]), 947,1314f, 4146,46f, 80,494f, 30f, 2, 0);
	func_578(&(uParam0->f_27[1 /*10*/]), 762,498f, 4589,213f, 105,5935f, 30f, 2, 0);
	func_578(&(uParam0->f_27[2 /*10*/]), 659,2919f, 4806,028f, 175,759f, 30f, 2, 0);
	func_578(&(uParam0->f_27[3 /*10*/]), 621,3849f, 5032,051f, 343,6387f, 30f, 2, 0);
	func_578(&(uParam0->f_27[4 /*10*/]), 503,8404f, 5297,335f, 508,6478f, 30f, 2, 0);
	func_578(&(uParam0->f_27[5 /*10*/]), 555,4404f, 5426,935f, 708,948f, 30f, 2, 0);
	func_578(&(uParam0->f_27[6 /*10*/]), 637,6946f, 5491,08f, 717,522f, 30f, 2, 0);
	func_578(&(uParam0->f_27[7 /*10*/]), 790,3913f, 5491,866f, 566,103f, 30f, 2, 0);
	func_578(&(uParam0->f_27[8 /*10*/]), 910,6804f, 5313,552f, 388,8567f, 30f, 2, 0);
	func_578(&(uParam0->f_27[9 /*10*/]), 1159,749f, 5183,155f, 253,1068f, 30f, 2, 0);
	func_578(&(uParam0->f_27[10 /*10*/]), 1354,13f, 4998,078f, 141,6288f, 30f, 2, 0);
	func_578(&(uParam0->f_27[11 /*10*/]), 1612,532f, 4941,23f, 61,8549f, 30f, 2, 0);
	func_578(&(uParam0->f_27[12 /*10*/]), 2200,396f, 4800,332f, 69,9321f, 30f, 3, 2);
	func_578(&(uParam0->f_27[13 /*10*/]), 2527,632f, 5144,98f, 66,763f, 30f, 3, 2);
	func_578(&(uParam0->f_27[14 /*10*/]), 2527,131f, 5275,334f, 62,3622f, 30f, 2, 0);
	func_578(&(uParam0->f_27[15 /*10*/]), 2413,345f, 5443,203f, 99,4297f, 30f, 2, 0);
	func_578(&(uParam0->f_27[16 /*10*/]), 2236,067f, 5524,246f, 108,3291f, 30f, 2, 0);
	func_578(&(uParam0->f_27[17 /*10*/]), 1944,463f, 5520,007f, 177,2808f, 30f, 2, 0);
	func_578(&(uParam0->f_27[18 /*10*/]), 1712,477f, 5624,937f, 324,9427f, 30f, 2, 0);
	func_578(&(uParam0->f_27[19 /*10*/]), 1601,158f, 5663,75f, 335,8832f, 30f, 2, 0);
	func_578(&(uParam0->f_27[20 /*10*/]), 1410,764f, 5675,836f, 425,9678f, 30f, 2, 0);
	func_578(&(uParam0->f_27[21 /*10*/]), 1225,682f, 5678,654f, 497,3169f, 30f, 2, 0);
	func_578(&(uParam0->f_27[22 /*10*/]), 1094,47f, 5664,07f, 563,0829f, 30f, 2, 0);
	func_578(&(uParam0->f_27[23 /*10*/]), 1001,427f, 5633,827f, 633,2537f, 30f, 2, 0);
	func_578(&(uParam0->f_27[24 /*10*/]), 875,5358f, 5642,667f, 682,5352f, 30f, 2, 0);
	func_578(&(uParam0->f_27[25 /*10*/]), 741,3275f, 5688,046f, 709,5683f, 30f, 2, 0);
	func_578(&(uParam0->f_27[26 /*10*/]), 487,2532f, 5654,821f, 802,0096f, 30f, 3, 1);
	func_578(&(uParam0->f_27[27 /*10*/]), 362,6602f, 5620,538f, 723,2353f, 30f, 2, 0);
	func_578(&(uParam0->f_27[28 /*10*/]), 134,4865f, 5555,637f, 520,3109f, 30f, 2, 0);
	func_578(&(uParam0->f_27[29 /*10*/]), -128,2242f, 5510,46f, 307,4505f, 30f, 2, 0);
	func_578(&(uParam0->f_27[30 /*10*/]), -397,7556f, 5438,69f, 175,4529f, 30f, 2, 0);
	func_578(&(uParam0->f_27[31 /*10*/]), -520,8975f, 5424,283f, 165,285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_577(&(uParam0->f_358[0 /*189*/]));
	func_576(&(uParam0->f_358[0 /*189*/]), "Player");
	func_572(&(uParam0->f_358[0 /*189*/]), unk_0x4A8C381C258A124D(), Local_43.f_1);
	func_571(&(uParam0->f_358[0 /*189*/]), 1135,682f, 3700,644f, 80,494f, 22,3451f);
	func_570(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_570(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_571(var uParam0, struct<3> Param1, float fParam2)
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam2;
}

void func_572(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = uParam2;
	func_573(uParam2, &(Local_43.f_243));
}

void func_573(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		func_575(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xF1B79038130E3C08(iParam0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_129(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
		}
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
		}
		if (unk_0xFDA2576D37032738(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
		}
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
		}
		func_574(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_134(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
		}
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
		}
	}
}

int func_574(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*uParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*uParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*uParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_575(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_576(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_577(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_578(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam2;
	uParam0->f_7 = iParam3;
	uParam0->f_8 = iParam4;
}

void func_579(var uParam0)
{
	func_584(uParam0);
	uParam0->f_12 = 28;
	func_578(&(uParam0->f_27[0 /*10*/]), -1737,725f, -2720,967f, 38f, 30f, 2, 0);
	func_578(&(uParam0->f_27[1 /*10*/]), -1384,515f, -2880,773f, 38f, 30f, 2, 0);
	func_578(&(uParam0->f_27[2 /*10*/]), -1156,435f, -2957,284f, 40f, 30f, 2, 0);
	func_578(&(uParam0->f_27[3 /*10*/]), -795,3043f, -2987,754f, 60f, 30f, 2, 0);
	func_578(&(uParam0->f_27[4 /*10*/]), -429,0231f, -2969,528f, 30f, 30f, 3, 1);
	func_578(&(uParam0->f_27[5 /*10*/]), -15,5168f, -2912,484f, 60f, 30f, 2, 0);
	func_578(&(uParam0->f_27[6 /*10*/]), 656,9059f, -2798,444f, 80f, 30f, 3, 2);
	func_578(&(uParam0->f_27[7 /*10*/]), 990,7529f, -2452,092f, 70f, 30f, 2, 0);
	func_578(&(uParam0->f_27[8 /*10*/]), 1019,531f, -2182,119f, 60f, 30f, 2, 0);
	func_578(&(uParam0->f_27[9 /*10*/]), 1019,899f, -1886,15f, 60f, 30f, 2, 0);
	func_578(&(uParam0->f_27[10 /*10*/]), 944,9045f, -1488,589f, 107,7f, 30f, 2, 0);
	func_578(&(uParam0->f_27[11 /*10*/]), 698,908f, -1013,024f, 100,5f, 30f, 3, 2);
	func_578(&(uParam0->f_27[12 /*10*/]), 388,7276f, -822,8241f, 90f, 30f, 2, 0);
	func_578(&(uParam0->f_27[13 /*10*/]), 20,7016f, -653,9637f, 101,8f, 30f, 3, 2);
	func_578(&(uParam0->f_27[14 /*10*/]), -135,3874f, -670,6069f, 112f, 30f, 3, 3);
	func_578(&(uParam0->f_27[15 /*10*/]), -360,3365f, -655,137f, 90f, 30f, 2, 0);
	func_578(&(uParam0->f_27[16 /*10*/]), -700,3533f, -657,1476f, 70f, 30f, 2, 0);
	func_578(&(uParam0->f_27[17 /*10*/]), -951,5859f, -654,0262f, 68f, 30f, 3, 2);
	func_578(&(uParam0->f_27[18 /*10*/]), -1125,587f, -769,7247f, 67f, 30f, 2, 0);
	func_578(&(uParam0->f_27[19 /*10*/]), -1281,291f, -851,0229f, 82f, 30f, 3, 1);
	func_578(&(uParam0->f_27[20 /*10*/]), -1580,865f, -1009,944f, 40f, 30f, 2, 0);
	func_578(&(uParam0->f_27[21 /*10*/]), -1877,52f, -1152,927f, 30f, 30f, 2, 0);
	func_578(&(uParam0->f_27[22 /*10*/]), -2101,111f, -1330,267f, 20f, 30f, 2, 0);
	func_578(&(uParam0->f_27[23 /*10*/]), -2230,15f, -1555,89f, 10f, 30f, 3, 2);
	func_578(&(uParam0->f_27[24 /*10*/]), -2214,946f, -1978,262f, 10f, 30f, 2, 0);
	func_578(&(uParam0->f_27[25 /*10*/]), -2055,091f, -2359,626f, 20f, 30f, 2, 0);
	func_578(&(uParam0->f_27[26 /*10*/]), -1893,392f, -2559,46f, 22f, 30f, 2, 0);
	func_578(&(uParam0->f_27[27 /*10*/]), -1737,725f, -2720,967f, 83,7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_577(&(uParam0->f_358[0 /*189*/]));
	func_576(&(uParam0->f_358[0 /*189*/]), "Player");
	func_572(&(uParam0->f_358[0 /*189*/]), unk_0x4A8C381C258A124D(), Local_43.f_1);
	func_571(&(uParam0->f_358[0 /*189*/]), -2102,16f, -2556,082f, 38f, 245,6561f);
	func_570(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_580(var uParam0, int iParam1)
{
	func_348(&(uParam0->f_9), iParam1);
}

void func_581(var uParam0)
{
	func_584(uParam0);
	uParam0->f_12 = 21;
	func_578(&(uParam0->f_27[0 /*10*/]), 1167,2f, -2557,195f, 90f, 30f, 2, 0);
	func_578(&(uParam0->f_27[1 /*10*/]), 869,9235f, -2613,705f, 57,8325f, 30f, 2, 0);
	func_578(&(uParam0->f_27[2 /*10*/]), 652,3818f, -2651,991f, 54,935f, 30f, 2, 0);
	func_578(&(uParam0->f_27[3 /*10*/]), 249,3849f, -2579,821f, 60,1264f, 30f, 3, 2);
	func_578(&(uParam0->f_27[4 /*10*/]), -31,7179f, -2590,793f, 19,9452f, 30f, 2, 0);
	func_578(&(uParam0->f_27[5 /*10*/]), -317,409f, -2582,66f, 48,7654f, 30f, 3, 3);
	func_578(&(uParam0->f_27[6 /*10*/]), -395,6915f, -2334,057f, 39,3612f, 30f, 2, 0);
	func_578(&(uParam0->f_27[7 /*10*/]), -300,2367f, -2118,431f, 53,3728f, 30f, 2, 0);
	func_578(&(uParam0->f_27[8 /*10*/]), -157,1812f, -1967,885f, 56,4093f, 30f, 3, 2);
	func_578(&(uParam0->f_27[9 /*10*/]), -199,4688f, -1803,328f, 13,6363f, 30f, 2, 0);
	func_578(&(uParam0->f_27[10 /*10*/]), -383,5264f, -1738,067f, 60,8194f, 30f, 2, 0);
	func_578(&(uParam0->f_27[11 /*10*/]), -649,8698f, -1710,374f, 61,3036f, 30f, 2, 0);
	func_578(&(uParam0->f_27[12 /*10*/]), -861,6902f, -1857,194f, 77,0621f, 30f, 3, 2);
	func_578(&(uParam0->f_27[13 /*10*/]), -716,8034f, -2111,744f, 65,9868f, 30f, 2, 0);
	func_578(&(uParam0->f_27[14 /*10*/]), -548,7557f, -2230,616f, 97,2887f, 30f, 2, 0);
	func_578(&(uParam0->f_27[15 /*10*/]), -270,7834f, -2425,144f, 96,7744f, 30f, 3, 1);
	func_578(&(uParam0->f_27[16 /*10*/]), 5,435f, -2665,31f, 46,2903f, 30f, 2, 0);
	func_578(&(uParam0->f_27[17 /*10*/]), 299,0821f, -2834,288f, 27,0191f, 30f, 2, 0);
	func_578(&(uParam0->f_27[18 /*10*/]), 514,295f, -2880,863f, 42,0956f, 30f, 3, 2);
	func_578(&(uParam0->f_27[19 /*10*/]), 842,6024f, -2599,042f, 25,978f, 30f, 2, 0);
	func_578(&(uParam0->f_27[20 /*10*/]), 991,974f, -2468,436f, 87,493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_577(&(uParam0->f_358[0 /*189*/]));
	func_576(&(uParam0->f_358[0 /*189*/]), "Player");
	func_572(&(uParam0->f_358[0 /*189*/]), unk_0x4A8C381C258A124D(), Local_43.f_1);
	func_571(&(uParam0->f_358[0 /*189*/]), 1788,044f, -2438,835f, 130,9346f, 100,0275f);
	func_570(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_582(var uParam0)
{
	func_584(uParam0);
	uParam0->f_12 = 19;
	func_578(&(uParam0->f_27[0 /*10*/]), -2819,07f, -81,2779f, 76,1411f, 30f, 2, 0);
	func_578(&(uParam0->f_27[1 /*10*/]), -2737,77f, 342,665f, 175,645f, 30f, 2, 0);
	func_578(&(uParam0->f_27[2 /*10*/]), -2631,929f, 499,7495f, 210,0935f, 30f, 2, 0);
	func_578(&(uParam0->f_27[3 /*10*/]), -2438,01f, 692,3843f, 285,745f, 30f, 3, 3);
	func_578(&(uParam0->f_27[4 /*10*/]), -2039,406f, 708,7898f, 170,6556f, 30f, 2, 0);
	func_578(&(uParam0->f_27[5 /*10*/]), -1633,076f, 751,8171f, 220,188f, 30f, 2, 0);
	func_578(&(uParam0->f_27[6 /*10*/]), -1187,955f, 874,4288f, 246,4972f, 30f, 3, 1);
	func_578(&(uParam0->f_27[7 /*10*/]), -893,826f, 994,239f, 239,512f, 30f, 2, 0);
	func_578(&(uParam0->f_27[8 /*10*/]), -565,788f, 1098,308f, 349,0507f, 30f, 2, 0);
	func_578(&(uParam0->f_27[9 /*10*/]), -326,8564f, 1129,9f, 336,1296f, 30f, 2, 0);
	func_578(&(uParam0->f_27[10 /*10*/]), -155,9212f, 1149,858f, 312,2522f, 30f, 2, 0);
	func_578(&(uParam0->f_27[11 /*10*/]), 145,603f, 1162,599f, 277,7465f, 30f, 3, 1);
	func_578(&(uParam0->f_27[12 /*10*/]), 355,6647f, 1234,464f, 287,6501f, 30f, 2, 0);
	func_578(&(uParam0->f_27[13 /*10*/]), 640,85f, 1191,643f, 329,783f, 30f, 2, 0);
	func_578(&(uParam0->f_27[14 /*10*/]), 783,3697f, 1157,395f, 329,0691f, 30f, 3, 3);
	func_578(&(uParam0->f_27[15 /*10*/]), 1016,378f, 1000,386f, 252,4894f, 30f, 2, 0);
	func_578(&(uParam0->f_27[16 /*10*/]), 1243,37f, 945,084f, 150,5214f, 30f, 2, 0);
	func_578(&(uParam0->f_27[17 /*10*/]), 1494,048f, 863,8886f, 110,4097f, 30f, 2, 0);
	func_578(&(uParam0->f_27[18 /*10*/]), 1751,842f, 687,7875f, 296,787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_577(&(uParam0->f_358[0 /*189*/]));
	func_576(&(uParam0->f_358[0 /*189*/]), "Player");
	func_572(&(uParam0->f_358[0 /*189*/]), unk_0x4A8C381C258A124D(), Local_43.f_1);
	func_571(&(uParam0->f_358[0 /*189*/]), -2818,17f, -500,178f, 76,1411f, 0f);
	func_570(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_583(var uParam0)
{
	func_584(uParam0);
	uParam0->f_12 = 18;
	func_578(&(uParam0->f_27[0 /*10*/]), 1025,724f, 3073,133f, 70f, 30f, 2, 0);
	func_578(&(uParam0->f_27[1 /*10*/]), 847,4132f, 3025,239f, 80f, 30f, 2, 0);
	func_578(&(uParam0->f_27[2 /*10*/]), 624,897f, 2968,416f, 80f, 30f, 3, 1);
	func_578(&(uParam0->f_27[3 /*10*/]), 398,5529f, 2921,654f, 75f, 30f, 2, 0);
	func_578(&(uParam0->f_27[4 /*10*/]), 68,1f, 2896,4f, 80f, 30f, 2, 0);
	func_578(&(uParam0->f_27[5 /*10*/]), -290,7f, 2895,4f, 80f, 30f, 2, 0);
	func_578(&(uParam0->f_27[6 /*10*/]), -1033,31f, 2832,959f, 37,5f, 30f, 3, 2);
	func_578(&(uParam0->f_27[7 /*10*/]), -1195,153f, 2729,109f, 18f, 30f, 2, 0);
	func_578(&(uParam0->f_27[8 /*10*/]), -1414,6f, 2636,365f, 8,25f, 30f, 2, 0);
	func_578(&(uParam0->f_27[9 /*10*/]), -1684,856f, 2630,035f, 10f, 30f, 2, 0);
	func_578(&(uParam0->f_27[10 /*10*/]), -2024,536f, 2677,336f, 30f, 30f, 3, 1);
	func_578(&(uParam0->f_27[11 /*10*/]), -2659,106f, 2670,574f, 5,4745f, 30f, 2, 0);
	func_578(&(uParam0->f_27[12 /*10*/]), -2880,136f, 2732,084f, 21,0365f, 30f, 2, 0);
	func_578(&(uParam0->f_27[13 /*10*/]), -3200,826f, 2826,548f, 40f, 30f, 3, 2);
	func_578(&(uParam0->f_27[14 /*10*/]), -3363,374f, 2580,812f, 50f, 30f, 2, 0);
	func_578(&(uParam0->f_27[15 /*10*/]), -3242,432f, 2370,19f, 40f, 30f, 2, 0);
	func_578(&(uParam0->f_27[16 /*10*/]), -2879,09f, 2382,111f, 20f, 30f, 2, 0);
	func_578(&(uParam0->f_27[17 /*10*/]), -2650,532f, 2450,207f, 66,6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_577(&(uParam0->f_358[0 /*189*/]));
	func_576(&(uParam0->f_358[0 /*189*/]), "Player");
	func_572(&(uParam0->f_358[0 /*189*/]), unk_0x4A8C381C258A124D(), Local_43.f_1);
	func_571(&(uParam0->f_358[0 /*189*/]), Local_1939, 154,8464f);
	func_570(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_584(var uParam0)
{
	float fVar0;
	
	func_4(&(uParam0->f_3));
	if (Local_43.f_10 != -1)
	{
		fVar0 = func_35(Local_43.f_10);
		if (fVar0 <= 0f || fVar0 > Local_43.f_12[Local_43.f_10])
		{
			fVar0 = Local_43.f_12[Local_43.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_592(uParam0);
	uParam0->f_12 = 0;
	func_585(uParam0);
	uParam0->f_13 = 0;
}

void func_585(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_586(uParam0, iVar0);
		iVar0++;
	}
}

void func_586(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_588(&(uParam0->f_358[iParam1 /*189*/]));
	func_587(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_587(char* sParam0)
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_43.f_3 };
	sParam0->f_19 = Local_43.f_6;
	sParam0->f_20 = Local_43.f_7;
	sParam0->f_21 = Local_43.f_8;
	sParam0->f_22 = Local_43.f_9;
}

void func_588(var uParam0)
{
	func_591(uParam0);
	func_590(uParam0);
	func_589(uParam0);
}

void func_589(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_43.f_1)
		{
			if (!(unk_0x1C2F771CDC87A3A5(uParam0->f_8, 0) || unk_0x1C2F771CDC87A3A5(uParam0->f_9, 0)))
			{
				if (unk_0xCECDBB848D53DEB2(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x19626F992DC71FB9(uParam0->f_8);
				}
			}
			unk_0x8C1F7D7A31B2A38E(&(uParam0->f_9));
		}
	}
}

void func_590(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0x4A8C381C258A124D())
		{
			unk_0x734A9F4537A31459(&(uParam0->f_8));
		}
	}
}

void func_591(var uParam0)
{
	func_83(&(uParam0->f_10));
}

void func_592(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_593(uParam0, iVar0);
		iVar0++;
	}
}

void func_593(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_594(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_594(var uParam0)
{
	*uParam0 = { Local_43.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_595(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_596()
{
	struct<68> Var0;
	
	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	func_597(&(Global_2097157.f_73));
	func_597(&(Global_2097157.f_142));
	func_597(&(Global_2097157.f_211));
	func_597(&(Global_2097157.f_280));
	StringCopy(&(Global_2097157.f_349), "", 24);
	StringCopy(&(Global_2097157.f_355), "", 24);
	func_533(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = 0;
	Global_2097533 = 0;
	Var0.f_2.f_1 = 4;
	Global_2097157.f_5 = { Var0 };
}

void func_597(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_598(bool bParam0)
{
	if (bParam0)
	{
		unk_0x40AC02FA167D4D0A(0);
		unk_0xD43B9D1692F5C06E(1);
		unk_0x31E8D1058586E006(0);
		func_187(1);
		Global_96771 = 1;
	}
	else
	{
		unk_0x40AC02FA167D4D0A(1);
		unk_0xD43B9D1692F5C06E(0);
		unk_0x31E8D1058586E006(1);
		func_187(0);
		Global_96771 = 0;
	}
}

void func_599(var uParam0)
{
	*uParam0 = unk_0x8DE4F68A9728925E("COUNTDOWN");
	unk_0xD7E1DF759CD0FFF2("HUD_321_GO", 0, -1);
}

int func_600(int iParam0)
{
	if (unk_0x15CCE8886267624F())
	{
		unk_0x10B228D2FDB7AF16(iParam0);
	}
	else if (unk_0x9390801B06EE998F())
	{
		return 1;
	}
	return 0;
}

void func_601()
{
	int iVar0;
	
	if (!iLocal_2028)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x1C2F771CDC87A3A5(iVar0, 0))
				{
					if (unk_0x3F18810075C77D41(iVar0))
					{
						if (!unk_0x15CCE8886267624F())
						{
							unk_0x86A2BC11844DEEB3("MGSP_START");
							iLocal_2028 = 1;
						}
					}
				}
			}
		}
	}
}

int func_602(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_603(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0x8B5B2BE72A7C0CF6(uParam0, 24, 31);
	*uParam2 = unk_0x8B5B2BE72A7C0CF6(uParam0, 16, 23);
	*uParam3 = unk_0x8B5B2BE72A7C0CF6(uParam0, 8, 15);
	*uParam4 = unk_0x8B5B2BE72A7C0CF6(uParam0, 0, 7);
}

var func_604(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA306E6FD2A6558E6(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_605(uVar0, uVar1, uVar2, uVar3);
}

var func_605(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	unk_0xA11116C8E2E46ED4(&uVar0, 24, 31, uParam0);
	unk_0xA11116C8E2E46ED4(&uVar0, 16, 23, uParam1);
	unk_0xA11116C8E2E46ED4(&uVar0, 8, 15, uParam2);
	unk_0xA11116C8E2E46ED4(&uVar0, 0, 7, uParam3);
	return uVar0;
}

int func_606()
{
	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	func_616(23, 1);
	func_615(10);
	switch (Local_1949.f_5)
	{
		case 0:
			unk_0xDAE61414743C8D1D(0);
			unk_0xE0F4EA3A654155A3("EXTRASUNNY", 10f);
			func_614();
			func_613(2, 0);
			func_613(1, 0);
			func_613(3, 0);
			func_613(4, 0);
			func_613(5, 0);
			func_613(6, 0);
			func_613(7, 0);
			unk_0xEC73DFE5CE55E19C(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 10f, 0);
			unk_0x60040CDD28AA1BC3(Local_2040, 600f, 0, 0, 0, 0, 0, 0, 0);
			func_607(&Local_2034, Local_43.f_10);
			unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 512);
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
			{
				Local_1949.f_5 = 2;
			}
			else
			{
				Local_1949.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_372(1000))
			{
				Local_1949.f_5 = 2;
			}
			break;
		
		case 2:
			unk_0xF2CB0224D3BE0B42("SP_SPR", 3);
			unk_0xD0D00ED689D6CA81("Shared", 0);
			while (!unk_0x38D063D8CF6D1967("Shared"))
			{
				system::wait(0);
			}
			unk_0xD7E1DF759CD0FFF2("HUD_AWARDS", 0, -1);
			Local_1949.f_5 = 3;
			break;
		
		case 3:
			if (unk_0xDCB78A15E5F495DC(3))
			{
				Local_1949.f_5 = 4;
			}
			break;
		
		case 4:
			Local_1949.f_5 = 5;
			func_11(&(Local_1949.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_1949.f_2), 0,5f))
			{
				Local_1949.f_5 = 6;
			}
			break;
		
		case 6:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				Local_1949.f_5 = 9;
			}
			else
			{
				Local_1949.f_5 = 7;
				func_11(&(Local_1949.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_1949.f_2), 0,5f))
			{
				Local_1949.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_600(5000))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				Local_1949.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_1949.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_607(var uParam0, int iParam1)
{
	Local_43.f_0 = 0;
	Local_43.f_1 = 0;
	Local_43.f_2 = 2;
	Local_43.f_3 = { Local_1939 };
	Local_43.f_6 = 154,8464f;
	Local_43.f_7 = 4;
	Local_43.f_8 = joaat("a_m_y_genstreet_01");
	Local_43.f_9 = joaat("stunt");
	StringCopy(&(Local_43.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_43.f_12[0] = 165f;
	StringCopy(&(Local_43.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_43.f_12[1] = 80f;
	StringCopy(&(Local_43.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_43.f_12[2] = 165f;
	StringCopy(&(Local_43.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_43.f_12[3] = 165f;
	StringCopy(&(Local_43.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_43.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_612(&Local_2034);
			break;
		
		case 1:
			func_611(&Local_2034);
			break;
		
		case 2:
			func_610(&Local_2034);
			break;
		
		case 3:
			func_609(&Local_2034);
			break;
		
		case 4:
			func_608(&Local_2034);
			break;
	}
}

void func_608(var uParam0)
{
}

void func_609(var uParam0)
{
}

void func_610(var uParam0)
{
}

void func_611(var uParam0)
{
}

void func_612(var uParam0)
{
}

void func_613(bool bParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_33108, iParam0);
	StringCopy(&(Global_33109[bParam0 /*6*/]), unk_0x1AF90EB93E0012D6(), 24);
	Global_33164[bParam0] = iParam1;
}

void func_614()
{
	Global_23692.f_5 = 1;
}

void func_615(int iParam0)
{
	func_325();
	Global_79645 = iParam0;
	Global_79644 = 0;
	Global_79647 = 3;
}

void func_616(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33197, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_33197, bParam0);
	}
}

void func_617()
{
}

void func_618()
{
	unk_0x43AE50D2A33F6E2A();
	func_378();
	func_444();
	func_596();
	func_616(23, 0);
	func_598(0);
	unk_0xDAE61414743C8D1D(5);
	unk_0xE3F88173F42C071B();
	func_325();
	func_252(0);
	func_270(0);
	unk_0xA21EFB60FCA3D0F6();
	unk_0x2C7FEB8222C29D99("MGSP_START");
	unk_0x2C7FEB8222C29D99("MGSP_FAIL");
	unk_0x2C7FEB8222C29D99("MGTR_COMPLETE");
	unk_0x86A2BC11844DEEB3("MGSP_END");
	unk_0x59E2E0637E7776F3();
	func_626(2, 0);
	func_626(1, 0);
	func_626(3, 0);
	func_626(4, 0);
	func_626(5, 0);
	func_626(6, 0);
	func_626(7, 0);
	unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0x5A65DF56B098A5F1();
	func_624(&(Local_43.f_118));
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xA790E8E6FD7393AC(3, 1);
	unk_0x633E3833FB96BCCB("PilotSchool");
	func_622(&Local_2034, 1);
	unk_0x7821F942CAEEBEE1(103, "SPRTaxi");
	unk_0x7821F942CAEEBEE1(104, "SPRTaxi");
	unk_0x428C32CC68809A35(1);
	unk_0x406CBCEA35499884();
	func_621();
	unk_0x747786364137DC63(1);
	unk_0x37B894853929BF1A(1);
	func_267();
	unk_0x0A0A06C514052E80(true);
	func_619();
	unk_0xBBC29EBE6E1A48FA();
}

void func_619()
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
					func_620(Global_98446[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_620(int iParam0, bool bParam1)
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

void func_621()
{
	Global_23692.f_5 = 0;
}

void func_622(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_584(uParam0);
	}
	else
	{
		func_623(uParam0);
	}
	func_151(0);
	func_27(&(uParam0->f_17));
	unk_0x428C32CC68809A35(1);
	unk_0x406CBCEA35499884();
	if (iLocal_2027)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2027 = 0;
	}
}

void func_623(var uParam0)
{
}

void func_624(var uParam0)
{
	func_625(*uParam0);
}

void func_625(var uParam0)
{
	unk_0xD314260005F064BF(&uParam0);
}

void func_626(bool bParam0, bool bParam1)
{
	if (BitTest(Global_33108, bParam0))
	{
		if (!bParam1)
		{
			unk_0x8744D2E3FC95740E(&Global_33108, bParam0);
			StringCopy(&(Global_33109[bParam0 /*6*/]), "NULL", 24);
			Global_33164[bParam0] = bParam1;
		}
	}
}

