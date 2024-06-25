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
	struct<110> Local_26[4];
	struct<94> Local_27 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = -1;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = -1;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<8> Local_44[5];
	int iLocal_45[1] = { 0 };
	struct<4> Local_46 = { 0, 0, 0, 0 } ;
	char cLocal_47[64] = "";
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	char cLocal_57[24] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 30;
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
	var uLocal_219 = 10;
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
	var uLocal_270 = 10;
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
	var uLocal_341 = 20;
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
	var uLocal_442 = 20;
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
	var uLocal_543 = 30;
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
	var uLocal_724 = 5;
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
	var uLocal_755 = 7;
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
	var uLocal_805 = 5;
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
	var uLocal_831 = 3;
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
	var uLocal_847 = 22;
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
	var uLocal_977 = 10;
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
	var uLocal_1028 = 5;
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
	var uLocal_1054 = 5;
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
	var uLocal_1084 = 3;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 1092616192;
	var uLocal_1091 = 1101004800;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 3;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	struct<8> Local_1108[5];
	struct<32> Local_1109[20];
	char cLocal_1110[32] = "";
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 16;
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
	bool bLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	var uLocal_1283 = 0;
	int iLocal_1284 = 0;
	int iLocal_1285 = 0;
	int iLocal_1286 = 0;
	struct<2> Local_1287 = { 0, 0 } ;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	char cLocal_1290[16] = "";
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	int iLocal_1293 = 0;
	float fLocal_1294 = 0f;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	int iLocal_1298 = 0;
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	char cLocal_1301[16] = "";
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	bool bLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	int iLocal_1309 = 0;
	int iLocal_1310 = 0;
	struct<2> Local_1311 = { 0, 0 } ;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	struct<2> Local_1314 = { 0, 0 } ;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	int iLocal_1317 = 0;
	bool bLocal_1318 = 0;
	int iLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	bool bLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
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
	StringCopy(&Local_46, "JHP1ADS", 16);
	StringCopy(&cLocal_47, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_56 = { 154,9478f, -3092,523f, 4,911984f };
	StringCopy(&cLocal_57, "jhp1a_sec_arrive", 24);
	iLocal_61 = 0;
	iLocal_67 = 6;
	iLocal_1281 = -1;
	iLocal_1285 = -1;
	iLocal_1286 = -1;
	StringCopy(&Local_1287, "", 16);
	StringCopy(&cLocal_1290, "", 16);
	fLocal_1294 = 1E+08f;
	iLocal_1297 = 1;
	iLocal_1300 = -1;
	StringCopy(&cLocal_1301, "", 16);
	iLocal_1304 = -1;
	iLocal_1305 = 1;
	iLocal_1309 = -1;
	iLocal_1310 = -1;
	StringCopy(&Local_1311, "", 16);
	StringCopy(&Local_1314, "", 16);
	iLocal_1317 = 1;
	iLocal_1319 = 1;
	iLocal_1323 = -1;
	iLocal_1325 = -1;
	iLocal_1326 = -1;
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_305(6);
	}
	unk_0x925970A93719CADE(1);
	func_298();
	func_257();
	while (true)
	{
		unk_0xECF30459397D5190("M_JewelStoreJobPrep1A", 0);
		if (bLocal_66)
		{
			func_255();
		}
		func_252(&uLocal_68);
		func_190();
		if (!bLocal_64)
		{
			func_188();
			func_177();
			func_176(&Local_1108);
		}
		func_1();
		system::wait(0);
	}
}

void func_1()
{
	switch (iLocal_61)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	int iVar0;
	
	if ((iLocal_1326 != -1 && unk_0xFC8BFE4B41177C22(Local_44[iLocal_1326 /*8*/])) && unk_0xD9F5E1FEFD1329E4(Local_44[iLocal_1326 /*8*/], 0))
	{
		iVar0 = unk_0x8D91ADE44AC79BC9(Local_44[iLocal_1326 /*8*/]);
		func_23(Local_44[iLocal_1326 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_97938 = 1000;
	}
	else
	{
		Global_97938 = iVar0;
	}
	if (!func_22(&(Local_1108[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64168)
	{
		Global_64168 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_79636.f_1 == 1) && func_5(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}
	if (Global_113969.f_9088 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_92265[iVar0 /*5*/];
		uVar2 = Global_79660.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113969.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 4);
		unk_0x0B0C9A0F9AAEB7F0(&Global_79638, true);
		Global_79654 = uVar2;
		Global_79655 = unk_0x1DD05E817C89C737();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_6(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x406CBCEA35499884();
	unk_0x428C32CC68809A35(1);
	if (bParam0)
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
		unk_0x86A2BC11844DEEB3("JHP1A_FAIL");
	}
	else
	{
		unk_0x425BBE19F25A57AB(1f);
		unk_0xF75E68D9DCB8C80B(unk_0x259BE71D8A81D4FA(), 1f);
	}
	unk_0xDAE61414743C8D1D(5);
	unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 1);
	unk_0xD682DD0578BF5392(1);
	func_18(&Local_1108);
	func_13(&uLocal_1083, 1, 0);
	bLocal_1280 = false;
	iLocal_1281 = -1;
	iLocal_1320 = 0;
	iLocal_1321 = 0;
	bLocal_1322 = false;
	iLocal_1323 = -1;
	iLocal_1325 = -1;
	iLocal_1326 = -1;
	iLocal_1327 = 0;
	iLocal_1328 = 0;
	iLocal_1324 = 0;
	if (bParam0)
	{
		func_11();
		unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
		unk_0x55F7AC4B2B875901(158,78f, -3100,44f, 6,0019f, 100f, 0);
		unk_0x8B0110C1F1D9D177(158,78f, -3100,44f, 6,0019f, 100f, 0);
		unk_0xBAAB54D57B40765E(158,78f, -3100,44f, 6,0019f, 100f, 0);
		unk_0x60040CDD28AA1BC3(158,78f, -3100,44f, 6,0019f, 100f, 0, 0, 0, 0, 0, 0, 0);
		unk_0xEC73DFE5CE55E19C(158,78f, -3100,44f, 6,0019f, 100f, 0);
		unk_0x5926A824AF54BCC3(158,78f, -3100,44f, 6,0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_45)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_45[iVar0]))
		{
			if (bParam0)
			{
				unk_0x51C8BEA2005931AB(&(iLocal_45[iVar0]));
			}
			else
			{
				unk_0xB3B56385ECA230B4(&(iLocal_45[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_26.f_0)
	{
		func_10(&(Local_26[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_27, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0x734A9F4537A31459(&(Local_44[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0xF09E30AF1B8FB379(&(Local_44[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0x8C1F7D7A31B2A38E(&(Local_44[iVar0 /*8*/]));
			}
			else
			{
				unk_0x68298CA6191CDFDB(&(Local_44[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x65CB233333D99E11(&cLocal_47))
	{
		unk_0xA6274B757A008184(&cLocal_47, bParam0);
	}
	if (iLocal_1330 != 0)
	{
		unk_0xD7B6A43ACC36D868(iLocal_1330, 0);
	}
	func_9();
}

void func_9()
{
	Global_97368 = 0;
}

void func_10(var uParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (bParam1)
		{
			unk_0x734A9F4537A31459(uParam0);
		}
		else
		{
			unk_0xF09E30AF1B8FB379(uParam0);
		}
	}
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_39 = 0;
	uParam0->f_41 = 0;
	uParam0->f_93 = 1;
	uParam0->f_102 = 0;
	uParam0->f_47 = 0;
	uParam0->f_46 = 0;
	uParam0->f_48 = 0;
	uParam0->f_37 = -1;
	uParam0->f_103 = -1;
	uParam0->f_40 = 0;
	uParam0->f_92 = -1;
	uParam0->f_43 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	uParam0->f_91 = 0;
	if (unk_0xFC8BFE4B41177C22(uParam0->f_105))
	{
		if (unk_0xA3736D76B0E93E93(uParam0->f_105))
		{
			unk_0x837D67618BF89034(uParam0->f_105, 1, 1);
		}
		if (bParam1)
		{
			unk_0x51C8BEA2005931AB(&(uParam0->f_105));
		}
		else
		{
			unk_0xB3B56385ECA230B4(&(uParam0->f_105));
		}
	}
	uParam0->f_106 = -1;
	uParam0->f_107 = 0;
	uParam0->f_109 = 0;
	uParam0->f_104 = 0;
}

void func_11()
{
	Global_21152 = 0;
	func_12();
}

void func_12()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_13(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (BitTest(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
		}
		func_16(iVar0, uParam0);
		func_15(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), iVar0);
			unk_0x8744D2E3FC95740E(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
		{
			unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[iVar0], 1);
			unk_0xD9757FAB956617BA(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 32, 1);
				unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()) && uParam0->f_17[iVar0] != unk_0x4A8C381C258A124D())
				{
					unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
				}
			}
			if (!BitTest(uParam0->f_13, 29))
			{
				unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 1);
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (bParam2)
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_14()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

void func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 16);
			break;
	}
}

void func_17(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_5))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
	}
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

int func_20(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_64167 = 0;
	if (!Global_64391[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_76261)
	{
		if (Global_76262[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_76262[iVar1 /*9*/].f_1 = 1;
			Global_76262[iVar1 /*9*/].f_2 = 0f;
			if (Global_76262[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_22(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_64179 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (iParam1 == -1 || Global_76262[iVar0 /*9*/] == iParam1)
		{
			if (Global_76262[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_76262[iVar0 /*9*/].f_6 = iParam0;
				Global_76262[iVar0 /*9*/].f_7 = 1;
				Global_76262[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_62 = 0;
		bLocal_63 = false;
		iLocal_61 = iParam0;
	}
}

int func_25()
{
	bool bVar0;
	
	if (!bLocal_63)
	{
		func_175(&uLocal_68, "SCRIPT\JWL_HA_RAID_STORE");
		func_174(&uLocal_68, joaat("s_m_m_security_01"));
		func_173(&(Local_1108[1 /*8*/]), 0, 0, 1);
		func_173(&(Local_1108[0 /*8*/]), 0, 0, 1);
		func_173(&(Local_1108[4 /*8*/]), 0, 0, 1);
		func_112(0f, 0f, 0f, 0f, 1, func_168());
		Global_97938 = 1000;
		unk_0x425BBE19F25A57AB(0,1f);
		func_111("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_63 = true;
	}
	if (bLocal_63)
	{
		switch (iLocal_62)
		{
			case 0:
				if (func_106(1) == 0)
				{
					func_13(&uLocal_1083, 1, 0);
					func_23(0, -1);
					func_105(0, -1);
				}
				else if ((func_104() && unk_0xFC8BFE4B41177C22(Local_44[func_103() /*8*/])) && unk_0xD9F5E1FEFD1329E4(Local_44[func_103() /*8*/], 0))
				{
					unk_0x23D563236A543309(0,5f);
					if (iLocal_1326 != func_103())
					{
						unk_0xA62957B100C8DE6D(5f, 10f, 4);
						func_23(Local_44[func_103() /*8*/], -1);
						func_105(Local_44[func_103() /*8*/], -1);
						iLocal_1326 = func_103();
					}
					if (func_101(&uLocal_1083, 692,8256f, -1012,544f, 21,722f, 692,9143f, -1003,556f, 21,50839f, 692,6511f, -1021,604f, 26,20675f, 9,75f, 1, Local_44[func_103() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_62++;
					}
				}
				else if (func_100())
				{
					unk_0x23D563236A543309(0,5f);
					func_56(&uLocal_1083, 692,8256f, -1012,544f, 21,722f, 0,1f, 0,1f, 0,1f, 1, iLocal_1327, "", "", "", 1, 0, 1, -1);
					if (unk_0x5105BE70DEF1F5FB(Local_44[func_55() /*8*/], 692,9143f, -1003,556f, 21,50839f, 692,6511f, -1021,604f, 26,20675f, 9,75f, 0, 1, 0))
					{
						iLocal_62++;
					}
				}
				else
				{
					func_17(&uLocal_1083);
					func_23(0, -1);
					func_105(0, -1);
				}
				break;
			
			case 1:
				if (func_104())
				{
					if (func_52(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_100())
				{
					if (func_52(iLocal_1327, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						unk_0xA62957B100C8DE6D(5f, 10f, 4);
						unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 1);
						func_51(1);
						func_50(1, 0);
						iLocal_62 = 1000;
					}
					else
					{
						unk_0xA62957B100C8DE6D(5f, 10f, 4);
						iLocal_62++;
					}
					if (func_104())
					{
						unk_0xF04751F8E604D487(Local_44[iLocal_1326 /*8*/], 0);
					}
					else if (func_100())
					{
						unk_0xF04751F8E604D487(Local_44[func_55() /*8*/], 0);
						unk_0x3B1F6012B676860B(Local_44[func_55() /*8*/], 1);
						unk_0x1750AA417BEDD270(Local_44[func_55() /*8*/]);
					}
					unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
				}
				break;
			
			case 2:
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					return 1;
				}
				break;
			
			case 1000:
				func_50(1, 0);
				if (!func_48())
				{
					func_46();
				}
				else
				{
					func_45(&uLocal_1115, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_1115, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_62++;
					}
				}
				break;
			
			case 1001:
				func_50(1, 0);
				if (func_27())
				{
					unk_0xA62957B100C8DE6D(5f, 10f, 4);
					iLocal_62++;
				}
				break;
			
			case 1002:
				func_50(1, 0);
				if (!func_27())
				{
					func_26();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 157, 1);
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98882[iVar0]))
		{
			if (!unk_0x1C2F771CDC87A3A5(Global_98882[iVar0], 0))
			{
				unk_0xD0F1DB0E50B367AD(Global_98882[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x935364B4448CD584(Global_98882[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_44042 != 0 && Global_44042 != 3) && Global_44042 != 2)
	{
		unk_0xDAE61414743C8D1D(5);
		unk_0x425BBE19F25A57AB(1f);
	}
}

int func_27()
{
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_44(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	if (iParam5 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	Global_2883585 = 0;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					func_43();
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
		if (func_42(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_41();
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
			unk_0x8744D2E3FC95740E(&Global_8802, 0);
			if (bParam2)
			{
				func_39();
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
				if (func_38())
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
			if (func_37())
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
			func_36();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_35();
		func_30();
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
		func_43();
	}
	return 0;
}

void func_30()
{
	if (!func_31())
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

int func_31()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_34())
	{
		return 0;
	}
	if (func_32(unk_0x259BE71D8A81D4FA()))
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

bool func_32(int iParam0)
{
	return func_33(iParam0, 20);
}

var func_33(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_34()
{
	return -1;
}

void func_35()
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

void func_36()
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

int func_37()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_38()
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

void func_39()
{
	if (func_40(14))
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
		Global_20930 = func_168();
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

bool func_40(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_41()
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

bool func_42(int iParam0, int iParam1)
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

void func_43()
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

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_45(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_46()
{
	Global_21152 = 0;
	func_47();
}

void func_47()
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

int func_48()
{
	if (func_49())
	{
		return 0;
	}
	if (unk_0x5994A2F6D4FFFE4D())
	{
		if (unk_0xFBA523E6F8ACE541())
		{
			return 0;
		}
	}
	return 1;
}

int func_49()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 21, 1);
	}
	unk_0x66EFB3D6110055C4(0, 25, 1);
	unk_0x66EFB3D6110055C4(0, 24, 1);
	unk_0x66EFB3D6110055C4(0, 257, 1);
	unk_0x66EFB3D6110055C4(0, 141, 1);
	unk_0x66EFB3D6110055C4(0, 140, 1);
	unk_0x66EFB3D6110055C4(0, 22, 1);
	unk_0x66EFB3D6110055C4(0, 44, 1);
	unk_0x66EFB3D6110055C4(0, 23, 1);
	unk_0x66EFB3D6110055C4(0, 47, 1);
	unk_0x66EFB3D6110055C4(0, 36, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 37, 1);
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (bParam1)
		{
			unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), 2f);
		}
		else
		{
			unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), 1f);
		}
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 102, 1);
	}
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
	}
}

void func_51(bool bParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 157, 0);
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 1);
		unk_0xF9358C41CC69C616(unk_0x4A8C381C258A124D(), 0, 0);
		if (bParam0)
		{
			unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 0);
		}
		unk_0xE4E1DBF4388028C0(unk_0x4A8C381C258A124D(), 0);
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
	}
	unk_0xDAE61414743C8D1D(0);
	unk_0x425BBE19F25A57AB(0f);
}

int func_52(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_54(bParam5, bParam6);
	func_53(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);
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

void func_53(int iParam0)
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

void func_54(bool bParam0, bool bParam1)
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

int func_55()
{
	int iVar0;
	
	if (func_100())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
			{
				if (unk_0x4A64AADF9B40D2AF(iLocal_1327, Local_44[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_56(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_57(uParam0, Param1, Param2, func_99(), func_99(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_98(), func_98(), func_98(), func_98(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_57(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam7;
	uParam0->f_17[1] = iParam8;
	uParam0->f_17[2] = iParam9;
	uParam0->f_16 = iParam7;
	func_97(uParam0);
	func_96(uParam0);
	func_95();
	if (func_79(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, uParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_78(sParam12);
		func_78(sParam13);
		func_78(sParam14);
		func_78(sParam15);
		if (unk_0x9390801B06EE998F())
		{
			bVar1 = false;
			if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
					}
					if (BitTest(uParam0->f_13, 23))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 23);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_76(uParam0, iParam21))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_78(sParam16);
				func_78(sParam19);
				func_78("MORE_SEATS");
				if (bParam18 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						func_78(sParam11);
					}
					if (unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(uParam0);
					}
					if ((!func_73(uParam0, 1) && !func_72(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_71(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_69(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), false);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_78("LOSE_WANTED");
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), true);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_73(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_69(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						if (unk_0xC450B06E5AAA0985(*uParam0))
						{
							unk_0xFE54B8568B2ABD12(uParam0);
						}
						uParam0->f_5 = func_68(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0x4C905FB262965D5D(uParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_67(uParam0->f_5, uParam0);
						}
					}
					else if (!func_66(Var3, unk_0x3CF9D442F2C902BD(uParam0->f_5), 0,1f, 0))
					{
						unk_0xDABC73EF230B6665(uParam0->f_5, Var3);
						if (bParam27)
						{
							func_67(uParam0->f_5, uParam0);
						}
					}
					if (!func_73(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 2))
						{
							func_71(uParam0, sParam11, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(uParam0->f_13, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					iVar4 = 0;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						iVar4 = 1;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, Param2, iParam5, iVar4, iVar5);
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Param3, Param4, fParam28, 0, iVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, Param2, iParam5, iVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar2], func_14()) || !func_64(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_61(uParam0))
							{
								func_78(sParam11);
								func_78(sParam16);
								func_78(sParam12);
								func_78(sParam13);
								func_78(sParam14);
								func_78(sParam15);
								func_78("LOSE_WANTED");
								func_78("MORE_SEATS");
								func_78(sParam19);
								func_13(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xFC8BFE4B41177C22(iParam10))
			{
				if ((bParam18 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && (!BitTest(uParam0->f_13, 9) && !BitTest(uParam0->f_13, 22)))
				{
					func_78(sParam16);
					func_78(sParam19);
					if (unk_0xC450B06E5AAA0985(uParam0->f_5) || unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						unk_0xFE54B8568B2ABD12(uParam0);
						func_78(sParam11);
					}
					if ((!func_73(uParam0, 1) && !func_72(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_71(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_69(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), false);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_78("LOSE_WANTED");
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), true);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_73(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_69(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xC450B06E5AAA0985(*uParam0))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_5))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
								func_78(sParam11);
							}
							*uParam0 = func_58(iParam10, 0, 0);
							unk_0xF55F62DA99DB0C2F(*uParam0, 2);
							if (!BitTest(uParam0->f_13, 4))
							{
								func_67(*uParam0, uParam0);
							}
						}
						if (!func_73(uParam0, 2))
						{
							if (!BitTest(uParam0->f_13, 3))
							{
								func_71(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (BitTest(uParam0->f_13, 9))
							{
								if (!unk_0xFF692AB7350A74D7(sParam19))
								{
									if (!BitTest(uParam0->f_13, 4))
									{
										func_71(uParam0, sParam19, 0);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
									}
								}
								else if (!BitTest(uParam0->f_13, 4))
								{
									func_71(uParam0, sParam16, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
								if (!BitTest(uParam0->f_13, 23))
								{
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
									{
										func_69(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_5))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
					func_78(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_73(uParam0, 2))
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								if (!BitTest(uParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0xC5935DFB3F39785A(0, iVar6);
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar7]))
									{
										func_69(uParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_71(uParam0, "MORE_SEATS", 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
								}
							}
							else if (!BitTest(uParam0->f_13, 3))
							{
								func_71(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								if (BitTest(uParam0->f_13, 9))
								{
									func_71(uParam0, sParam19, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_73(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 3))
						{
							func_71(uParam0, sParam16, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
						}
						else if (BitTest(uParam0->f_13, 9))
						{
							if (!unk_0xFF692AB7350A74D7(sParam19))
							{
								if (!BitTest(uParam0->f_13, 4))
								{
									func_71(uParam0, sParam19, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								func_71(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(uParam0->f_13, 0))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
		}
		func_78(sParam11);
		func_78(sParam16);
		func_78(sParam19);
		func_78(sParam16);
		func_78("LOSE_WANTED");
		if (unk_0xC450B06E5AAA0985(uParam0->f_5))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
		}
		if (unk_0xC450B06E5AAA0985(*uParam0))
		{
			unk_0xFE54B8568B2ABD12(uParam0);
		}
	}
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 11);
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 12);
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	return func_59(iParam0, !bParam1, bParam2);
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_60(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_60(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_60(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_61(var uParam0)
{
	if (BitTest(uParam0->f_13, 12))
	{
		if (func_63(unk_0x4A8C381C258A124D()))
		{
			if (func_62(1, 0, 1) || BitTest(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_62(1, 0, 1) || BitTest(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_62(bool bParam0, bool bParam1, bool bParam2)
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

int func_63(int iParam0)
{
	float fVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && iParam1)
		{
			if (func_65(unk_0x4A8C381C258A124D(), iParam0))
			{
				unk_0x316802E03D8923D8(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0xD11A63E12F198FDB(iParam0, func_14()))
		{
			unk_0x316802E03D8923D8(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x27E68848F0E5D7D9(iParam0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iParam1))
				{
					if (unk_0xF4244288C3EF3306(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_66(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

void func_67(var uParam0, var uParam1)
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if (unk_0xC450B06E5AAA0985(uParam1->f_6))
		{
			unk_0xBC64B805EE071A37(uParam1->f_6, 0);
		}
		unk_0x0F20DD0DCEB2959F(0);
		unk_0xC3C7C9791CD79114();
		uParam1->f_6 = uParam0;
		unk_0xBC64B805EE071A37(uParam0, 1);
	}
}

var func_68(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_60(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

void func_69(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_70(iParam2), 1);
}

int func_70(int iParam0)
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

void func_71(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xFF692AB7350A74D7(sParam1))
		{
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
			{
				func_111(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1DD05E817C89C737();
}

int func_72(var uParam0)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_16))
	{
		if (unk_0x912159A05BE6B52E(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_73(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x5994A2F6D4FFFE4D())
	{
		if (unk_0xFBA523E6F8ACE541())
		{
			return 1;
		}
		if (func_75(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x5994A2F6D4FFFE4D())
	{
		if (func_49() && !func_74())
		{
			return 1;
		}
	}
	return 0;
}

int func_74()
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

int func_75(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1DD05E817C89C737();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_76(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_77(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x2EEC0612337D20CE(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x22007BC82AF0074B(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x22007BC82AF0074B(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		unk_0x4E8E15513E171E54(sParam0);
	}
}

int func_79(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
			{
				unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 50f, 0, iVar16);
			if (unk_0xD9F5E1FEFD1329E4(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_21, 0))
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || !bParam17)
					{
						if (func_77(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
								{
									unk_0x4190C67D524CD0DC(uParam0->f_17[iVar0], 1f);
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
									{
										unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
									}
									if (unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle")) == 7 && !func_94(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0]))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 1);
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0, 0);
											unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
					}
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
					{
						if (func_92(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_91(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D())) && !unk_0xFC8BFE4B41177C22(iParam10))
		{
			iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar10, 0))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_73(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0xC5935DFB3F39785A(0, iVar17);
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar18]))
						{
							func_69(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_71(uParam0, "MORE_SEATS", 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 13);
			func_78("MORE_SEATS");
		}
		if (!unk_0xFC8BFE4B41177C22(iParam10))
		{
			if ((!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[1])) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && !func_73(uParam0, 2))
					{
						iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (func_90(iVar10, uParam0))
						{
							func_71(uParam0, "CMN_VEHSUIT", 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					unk_0x8744D2E3FC95740E(&(uParam0->f_13), 31);
					func_78("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
		{
			if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
			{
				if (unk_0x875A214D5EBCA509(0, 75))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
					{
						unk_0x34A9A872D3C510BF(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x34A9A872D3C510BF(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
					{
						iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (unk_0xD9F5E1FEFD1329E4(iVar10, 0))
						{
							if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
							{
								if (!func_91(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
								{
									if (!func_89(uParam0->f_17[iVar0]))
									{
										unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x1C2F771CDC87A3A5(iVar10, 0))
						{
							if (unk_0xF4244288C3EF3306(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x69799E0840A34AFB(iVar10) && !unk_0xD2A0543EC400E1A5(iVar10))
								{
									Var19 = { unk_0xD1A6A821F5AC81DB(iVar10, 1) };
									if (Var19.f_2 < -1f)
									{
										unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
					{
						if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0x6EF03BE64E058E2F(uParam0->f_17[iVar0], 0);
							if (!unk_0x1C2F771CDC87A3A5(iVar10, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iVar10))
										{
											if (unk_0xDF93B3CFAC96698F(iVar10) > 5f)
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
									{
										iVar20 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									}
									if (unk_0xD9F5E1FEFD1329E4(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0xDF93B3CFAC96698F(iVar10) > 5f)
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
					{
						iVar21 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						if (unk_0xFC8BFE4B41177C22(iVar21))
						{
							if (func_77(iVar21, uParam0, 0))
							{
								if (func_88(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_88(iVar0, uParam0))
							{
								if (unk_0x4B423FAA24E8ABF0(iVar21) == joaat("sentinel2"))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], 2);
								}
								func_87(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()) && !func_86(uParam0->f_17[iVar0], iParam10)) && !func_85(uParam0->f_17[iVar0], iParam10))
					{
						if (func_92(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
							{
								if (((!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0])) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar11 == 7)
									{
										unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
									}
									unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_14());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x1DD05E817C89C737();
								uParam0->f_1[iVar0] = func_58(uParam0->f_17[iVar0], 0, 0);
								unk_0xF55F62DA99DB0C2F(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_67(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
					{
						if (((func_64(uParam0->f_17[iVar0], 1) || func_86(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xD9F5E1FEFD1329E4(iParam10, 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
								func_78(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_67(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xF4244288C3EF3306(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
							{
								if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_64(uParam0->f_17[iVar0], 1))
										{
											if (func_63(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_leave_vehicle"));
												if (iVar11 == 7)
												{
													unk_0x092B9247AF00F5CF(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
									{
										if ((((!unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0]) && !unk_0x8BF5256C439DF778(uParam0->f_17[iVar0])) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0])) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar11 == 7 && !func_94(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0]) && !unk_0xE7895DBF72C7F282(unk_0x4A8C381C258A124D())) && !func_84(uParam0->f_17[iVar0], 2f)) && !unk_0x8BF5256C439DF778(uParam0->f_17[iVar0])) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 1);
											if (BitTest(uParam0->f_13, 10))
											{
												unk_0x4190C67D524CD0DC(uParam0->f_17[iVar0], 1f);
											}
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0, 0);
											unk_0x379E96D5D36B27DC(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_58(uParam0->f_17[iVar0], 0, 0);
										unk_0xF55F62DA99DB0C2F(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
							{
								if (func_92(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
										if (iVar11 == 7)
										{
											unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
										}
										unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 0);
										unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_14());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_14()) && !unk_0x5B702A5D1F2635BE(iParam10))
						{
							unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
					func_78(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_73(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
						{
							if (func_89(uParam0->f_17[iVar0]) || unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], unk_0x4A8C381C258A124D(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
					{
						if (!unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], unk_0x4A8C381C258A124D(), (uParam0->f_8 * 0,85f), (uParam0->f_8 * 0,85f), uParam0->f_8, 0, 1, 0) && !func_89(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1DD05E817C89C737();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_71(uParam0, sParam7, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_83(iVar0, uParam0))
									{
										if (!unk_0xFF692AB7350A74D7(uVar13[iVar0]))
										{
											if (!unk_0x1B79E937E91F40C3(uVar13[iVar0], ""))
											{
												func_81(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_80(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_83(iVar0, uParam0))
										{
											func_71(uParam0, uVar12[iVar0], 0);
											func_80(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
					func_78(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_78("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_80(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 16);
			break;
	}
}

void func_81(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xFF692AB7350A74D7(uParam1))
		{
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
			{
				func_82(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1DD05E817C89C737();
}

void func_82(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
}

int func_83(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_84(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(iParam0, 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0xDF93B3CFAC96698F(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xD11A63E12F198FDB(iParam0, func_14()))
		{
			iVar0 = unk_0x31945A289F1359A1(iParam0);
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
			{
				if (unk_0xFAA48325A90263BE(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_86(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
			{
				if (unk_0xF4244288C3EF3306(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_87(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 19);
			break;
	}
}

int func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iParam0))
			{
				iVar1 = unk_0xCDA725BC2F170795(iParam0);
				if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xFAA48325A90263BE(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_90(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xFD5C5BBD1FE92BB7(iParam0, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xFD5C5BBD1FE92BB7(iParam0, 1, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xFD5C5BBD1FE92BB7(iParam0, 2, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_91(var uParam0)
{
	int iVar0;
	
	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_77(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_92(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam1))
	{
		if (unk_0x27E68848F0E5D7D9(iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam1, 0);
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iVar0))
					{
						if (func_91(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (func_77(iVar0, uParam0, 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
						{
							if (func_93(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	float fVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			iVar0 = unk_0xCDA725BC2F170795(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		iVar0 = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			iVar1 = unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar1))
			{
				if (iVar1 != unk_0x4A8C381C258A124D())
				{
					if (unk_0x110821AE6C63DD4F(iVar1))
					{
						if (!unk_0x2E0309EF5F2EBDB1(iVar1, unk_0x4A8C381C258A124D()))
						{
							unk_0xE67051907958B5EB(iVar1, unk_0x4A8C381C258A124D(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_96(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 32, 0);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 305, 1);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 268, 1);
					unk_0x379E96D5D36B27DC(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 25);
	}
}

void func_97(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
			{
				if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
				{
					unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[iVar0], 0);
					unk_0xD9757FAB956617BA(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 0);
				unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 0);
			}
		}
	}
}

var func_98()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_99()
{
	struct<3> Var0;
	
	return Var0;
}

int func_100()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_1327) && unk_0xD9F5E1FEFD1329E4(iLocal_1327, 0))
	{
		return 1;
	}
	return 0;
}

bool func_101(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)
{
	return func_57(uParam0, Param1, func_102(), Param2, Param3, iParam5, 5, 0, 0, 0, iParam6, sParam7, func_98(), func_98(), func_98(), func_98(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_98(), func_98(), func_98(), 1, fParam4);
}

Vector3 func_102()
{
	return 0f, 0f, 2f;
}

int func_103()
{
	int iVar0;
	
	if (func_104())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_44[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_104()
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_44[iVar0 /*8*/], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_105(int iParam0, int iParam1)
{
	Global_64177 = iParam0;
	Global_64178 = iParam1;
}

int func_106(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0xFC8BFE4B41177C22(Local_44[iVar1 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar1 /*8*/], 0)) && !func_110(Local_44[iVar1 /*8*/])) && (!bParam0 || func_107(Local_44[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_107(int iParam0)
{
	if (unk_0xF8F35890F43ED2AE(iParam0) == iLocal_1284)
	{
		if (func_109(unk_0x4A8C381C258A124D(), Local_56, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_108(iParam0, unk_0x4A8C381C258A124D(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_108(int iParam0, int iParam1, int iParam2)
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

float func_109(int iParam0, struct<3> Param1, int iParam2)
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

int func_110(int iParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if ((unk_0xA24B9FF9863A909D(iParam0, 0, 7000) || unk_0xA24B9FF9863A909D(iParam0, 1, 7000)) || unk_0xA24B9FF9863A909D(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_111(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_112(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0xFC8BFE4B41177C22(Global_104530.f_4))
	{
		if (unk_0xD9F5E1FEFD1329E4(Global_104530.f_4, 0))
		{
			if (func_167(24) != Global_104530.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_164(unk_0xD1A6A821F5AC81DB(Global_104530.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_113(Global_104530.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_113(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[25]) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[25], 0))
			{
				if (Global_78179.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x9E20DC08879FF3FC(iParam0) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_163(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_158(iParam0, &Var0);
		if (func_157(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
			uParam2 = unk_0xCFC0C995455A6204(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != joaat("vehicle_gen_controller"))
			{
				Global_79167 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
			}
		}
		func_150(iParam3, &Var0, Param1, uParam2, func_156(iParam0));
		func_114(iParam3, iParam0, 0);
	}
}

void func_114(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_146(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_78179.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_78179.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_78179.f_555[0 /*21*/].f_4 != unk_0x4B423FAA24E8ABF0(iParam1))
		{
			return;
		}
	}
	if (Global_79086 != -1 && Global_79086 != iParam0)
	{
		return;
	}
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			if (!unk_0x110821AE6C63DD4F(iParam1))
			{
				unk_0xEE0BCDB1B5E36BCB(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_113969.f_32753.f_4801 = func_135();
			}
			if (iParam1 != Global_78179.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_167(iParam0);
					if ((unk_0xFC8BFE4B41177C22(iVar0) && unk_0xD9F5E1FEFD1329E4(iVar0, 0)) && iParam1 != iVar0)
					{
						func_115(iVar0, 145);
					}
				}
				Global_79085 = iParam1;
				Global_79086 = iParam0;
				Global_79087 = iParam2;
			}
		}
	}
}

void func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_116(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, -1);
		}
		if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x4FAFF4BCB7633475(iVar0))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113969.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113969.f_32753.f_5590 = iParam1;
	Global_79084 = iParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_158(iParam0, &(Global_113969.f_32753.f_5510));
}

int func_116(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_133(iParam0, 0, 0)) || func_133(iParam0, 1, 0)) || func_133(iParam0, 2, 0)) || func_156(iParam0) != 145) || func_132(iParam0)) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || !func_117(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_131(iParam0))
		{
		}
		if (func_131(iParam0))
		{
		}
		if (func_133(iParam0, 0, 0))
		{
		}
		if (func_133(iParam0, 1, 0))
		{
		}
		if (func_133(iParam0, 2, 0))
		{
		}
		if (func_156(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_117(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_118(iParam0, 0, -1))
	{
		return 0;
	}
	if (((unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0)) || unk_0xBA16CD57E37AC32A(iParam0)) || unk_0xAE447CBB33B40CA3(iParam0))
	{
		return 0;
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
		case joaat("firetruk"):
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
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_118(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F()) || (iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F())) || (iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F()))
	{
		if (!func_128())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x62B04373BFAD9B85())
		{
			if (unk_0x92EAC7DBD5D1D750(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x4BFA043D318BF9AE(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_127() && !func_126()) && !func_125()) && !func_124()) && !func_128())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_123() || unk_0x761778199FE1211C()) || func_122())
					{
					}
					else if (!func_125())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_121(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_119(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_119(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_120())
	{
		return 1;
	}
	unk_0x8A77EAFEB55D476D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
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
			return 1;
			break;
	}
	if (!unk_0xABE86AEC64720F91(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_120()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = 0;
	switch (iParam0)
	{
		case -1240172147:
			iVar1 = Global_262145.f_35588[0];
			break;
		
		case -143587026:
			iVar1 = Global_262145.f_35588[1];
			break;
		
		case 1690421418:
			iVar1 = Global_262145.f_35588[2];
			break;
		
		case 258105345:
			iVar1 = Global_262145.f_35588[3];
			break;
		
		case 1249425552:
			iVar1 = Global_262145.f_35588[4];
			break;
		
		case -986656474:
			iVar1 = Global_262145.f_35588[5];
			break;
		
		case 1307736079:
			iVar1 = Global_262145.f_35588[6];
			break;
		
		case 1737348074:
			iVar1 = Global_262145.f_35588[7];
			break;
		
		case -223461503:
			iVar1 = Global_262145.f_35588[8];
			break;
		
		case 1121330119:
			iVar1 = Global_262145.f_35588[9];
			break;
		
		case -1628000569:
			iVar1 = Global_262145.f_35588[10];
			break;
		
		case -946047670:
			iVar1 = Global_262145.f_35588[11];
			break;
		
		case 1579902654:
			iVar1 = Global_262145.f_35588[12];
			break;
		
		case -773802025:
			iVar1 = Global_262145.f_35588[13];
			break;
		
		case 1968807591:
			iVar1 = Global_262145.f_35588[14];
			break;
		
		case -1958428933:
			iVar1 = Global_262145.f_35588[15];
			break;
		
		case 1881415402:
			iVar1 = Global_262145.f_35588[16];
			break;
		
		case -999594302:
			iVar1 = Global_262145.f_35588[17];
			break;
		
		case -1896488056:
			iVar1 = Global_262145.f_35588[18];
			break;
		
		case 1452003510:
			iVar1 = Global_262145.f_35588[19];
			break;
		
		case -1444856003:
			iVar1 = Global_262145.f_35588[20];
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

var func_122()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_123()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_124()
{
	return 0;
}

int func_125()
{
	return 1;
}

int func_126()
{
	return 1;
}

int func_127()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	var uVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					uVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
					unk_0xED11291F7127888E(uVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	uVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_118(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98874[iVar0]))
		{
			if (Global_98874[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]) && unk_0xD9F5E1FEFD1329E4(Global_98844[iVar0], 0))
			{
				if (Global_98844[iVar0] == iParam0 && unk_0x4B423FAA24E8ABF0(Global_98844[iVar0]) == unk_0x4B423FAA24E8ABF0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[24]))
	{
		if (iParam0 == Global_78179.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78179.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_134(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar2], 0))
		{
			if (unk_0xFE448E8C2209CA31(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_134(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

var func_135()
{
	var uVar0;
	
	func_145(&uVar0, unk_0x4BA5A16068183C5E());
	func_144(&uVar0, unk_0x18E502A71E28968C());
	func_143(&uVar0, unk_0x5295501D0862870D());
	func_138(&uVar0, unk_0xB12880C92EA6EE15());
	func_137(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_136(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_136(var uParam0, int iParam1)
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

void func_137(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_142(*uParam0);
	iVar1 = func_140(*uParam0);
	if (iParam1 < 1 || iParam1 > func_139(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_139(int iParam0, int iParam1)
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

var func_140(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_141(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_141(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_142(var uParam0)
{
	return uParam0 & 15;
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_147(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_147(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_147(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_147(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_147(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_147(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_147(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_147(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_147(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_128())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_128())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113969.f_32753.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_157(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113969.f_32753.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113969.f_32753.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_157(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_157(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_147(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_149(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_148(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_148(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
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
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_149(int iParam0)
{
	return iParam0 < 3;
}

void func_150(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4)
{
	if (func_146(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 10))
		{
			func_155(iParam0);
			func_154(uParam1, &(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 11))
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = uParam3;
			}
			else
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_151(iParam0, 1);
		}
	}
}

void func_151(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_153(iParam0, 0))
		{
			func_152(iParam0, 1, 0);
			func_152(iParam0, 2, 0);
			func_152(iParam0, 3, 0);
			func_152(iParam0, 4, 0);
			func_152(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_152(iParam0, 0, 0);
	}
}

void func_152(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_32753[iParam0]), iParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_32753[iParam0]), bParam1);
	}
}

int func_153(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_154(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_155(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_146(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_139[iParam0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_78179.f_139[iParam0], 1, 1);
			unk_0x68298CA6191CDFDB(&(Global_78179.f_139[iParam0]));
			Global_78179.f_139[iParam0] = 0;
		}
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 13))
		{
			func_151(iParam0, 0);
		}
	}
}

int func_156(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 145;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_157(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_158(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_162(uParam1);
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
		if (uParam1->f_65 == -1 && !func_161(uParam1->f_66))
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
		func_160(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(iVar0 + 1));
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

int func_159(int iParam0)
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

int func_160(int iParam0, var uParam1, var uParam2)
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
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*iParam0))
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
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_161(int iParam0)
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

void func_162(var uParam0)
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

void func_163(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_155(iParam0);
	func_151(iParam0, 0);
}

int func_164(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_165(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827,351f, 157,785f, 68,2143f };
			*uParam3 = 85,1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992,523f, 3813,916f, 31,1008f };
			*uParam3 = 122,1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184,258f, -1496,556f, 3,3895f };
			*uParam3 = 303,2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118,1067f, -1325,906f, 28,3706f };
			*uParam3 = 123,5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18,118f, -1455,126f, 29,5004f };
			*uParam3 = 273,2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1,5947f, 543,4017f, 173,4644f };
			*uParam3 = 310,7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_165(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_96551[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_96551[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_166(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xED977E2AE2CB16EE(Param0, Global_96551[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_166(int iParam0)
{
	return BitTest(Global_113969.f_7232[iParam0], 0);
}

int func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_78179.f_139[iParam0];
}

int func_168()
{
	func_169();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_169()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_171(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_170(unk_0x4A8C381C258A124D());
			if (func_149(iVar0) && (!func_40(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_149(Global_113969.f_2366.f_539.f_4321))
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

int func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_171(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_171(int iParam0)
{
	if (func_149(iParam0))
	{
		return func_172(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_172(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_173(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x1DD05E817C89C737();
		uParam0->f_5 = unk_0x1DD05E817C89C737();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_174(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xEC9DAA34BBB4658C(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x1DD05E817C89C737();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

int func_175(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x1B79E937E91F40C3(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xD7E1DF759CD0FFF2(sParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

void func_176(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x1DD05E817C89C737() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_177()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_109(unk_0x4A8C381C258A124D(), Local_56, 1) < 70f)
	{
		unk_0xF45E267C70ACE01A();
	}
	if (iLocal_1325 == 9)
	{
		if (!iLocal_1324)
		{
			if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_1324 = 1;
			}
		}
		if (unk_0xFC8BFE4B41177C22(Local_27.f_0))
		{
			if (func_108(Local_27.f_0, unk_0x4A8C381C258A124D(), 1) > 300f)
			{
				unk_0xF09E30AF1B8FB379(&Local_27);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_1327) && unk_0xD9F5E1FEFD1329E4(iLocal_1327, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
			{
				if (unk_0x4A64AADF9B40D2AF(iLocal_1327, Local_44[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_1327 = 0;
		}
	}
	if (func_187())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
			{
				if (unk_0x4A64AADF9B40D2AF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), Local_44[iVar0 /*8*/]))
				{
					iLocal_1327 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				}
			}
			iVar0++;
		}
	}
	func_180();
	if (iLocal_61 == 0)
	{
		if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 182,9537f, -3119,884f, 101,9226f, 115f, 260f, 120f, 0, 1, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_26.f_0)
		{
			if (unk_0xFC8BFE4B41177C22(Local_26[iVar1 /*110*/]))
			{
				if ((Local_26[iVar1 /*110*/].f_5 == 5 && func_108(unk_0x4A8C381C258A124D(), Local_26[iVar1 /*110*/], 1) > 300f) && func_109(unk_0x4A8C381C258A124D(), Local_56, 1) > 300f)
				{
					unk_0x734A9F4537A31459(&(Local_26[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
				{
					unk_0x68298CA6191CDFDB(&(Local_44[iVar0 /*8*/]));
					if (unk_0xC450B06E5AAA0985(Local_44[iVar0 /*8*/].f_1))
					{
						unk_0xFE54B8568B2ABD12(&(Local_44[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_110(Local_44[iVar0 /*8*/]))
				{
					if (unk_0xC450B06E5AAA0985(Local_44[iVar0 /*8*/].f_1))
					{
						unk_0xFE54B8568B2ABD12(&(Local_44[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_107(Local_44[iVar0 /*8*/]))
				{
					if (unk_0xF8F35890F43ED2AE(Local_44[iVar0 /*8*/]) == iLocal_1284)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_1325 == 9 && func_103() != -1) && unk_0xFC8BFE4B41177C22(Local_44[func_103() /*8*/])) && unk_0xD9F5E1FEFD1329E4(Local_44[func_103() /*8*/], 0)) && !func_110(Local_44[func_103() /*8*/])) || (((iLocal_1325 == 10 && func_55() != -1) && unk_0xFC8BFE4B41177C22(Local_44[func_55() /*8*/])) && unk_0xD9F5E1FEFD1329E4(Local_44[func_55() /*8*/], 0)))
			{
				if (unk_0xC450B06E5AAA0985(Local_44[iVar0 /*8*/].f_1))
				{
					unk_0xFE54B8568B2ABD12(&(Local_44[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0)) && !func_110(Local_44[iVar0 /*8*/])) && func_107(Local_44[iVar0 /*8*/])) && iLocal_62 == 0)
			{
				if (!unk_0xC450B06E5AAA0985(Local_44[iVar0 /*8*/].f_1))
				{
					Local_44[iVar0 /*8*/].f_1 = func_179(Local_44[iVar0 /*8*/], 0, 0);
					unk_0x1456FD5C0C438B19(Local_44[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_1325 == 9 || iLocal_1325 == 10)
		{
			if (func_178("JHP1A_BKIN", 0, 0) || func_178("JHP1A_BKINANY", 0, 0))
			{
				unk_0x406CBCEA35499884();
			}
		}
		else if (iLocal_62 == 0)
		{
			if (!iLocal_1319)
			{
				if (func_106(1) == 1)
				{
					func_111("JHP1A_BKIN", 7500, 1);
				}
				iLocal_1319 = 1;
			}
		}
		if (func_106(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_305(iVar4);
			}
		}
	}
}

var func_178(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

int func_179(int iParam0, bool bParam1, bool bParam2)
{
	return func_59(iParam0, !bParam1, bParam2);
}

void func_180()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_44[3 /*8*/], 1))
		{
			iLocal_1325 = 11;
		}
		else if (func_186())
		{
			iLocal_1325 = 7;
		}
		else if (func_185())
		{
			iLocal_1325 = 6;
		}
		else if (func_104())
		{
			iLocal_1325 = 9;
			iLocal_1319 = 0;
		}
		else if (func_100())
		{
			iLocal_1325 = 10;
		}
		else if (func_184())
		{
			iLocal_1325 = 8;
		}
		else if (((unk_0xFC8BFE4B41177C22(iLocal_1328) && unk_0xD9F5E1FEFD1329E4(iLocal_1328, 0)) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_1328, 1)) && unk_0x5105BE70DEF1F5FB(iLocal_1328, Local_56, 119,7228f, -3092,472f, 13,46126f, 44f, 0, 1, 0))
		{
			iLocal_1325 = 5;
		}
		else if (((!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD())) && !func_183()) && unk_0x5105BE70DEF1F5FB(unk_0xDC8D5832207C2EAD(), Local_56, 119,7228f, -3092,472f, 13,46126f, 44f, 0, 1, 0))
		{
			iLocal_1328 = unk_0xDC8D5832207C2EAD();
			iLocal_1325 = 5;
		}
		else if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_56, 119,7228f, -3092,472f, 13,46126f, 44f, 0, 1, 0))
		{
			iLocal_1325 = 2;
		}
		else if (((unk_0xFC8BFE4B41177C22(iLocal_1328) && unk_0xD9F5E1FEFD1329E4(iLocal_1328, 0)) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_1328, 1)) && (unk_0x5105BE70DEF1F5FB(iLocal_1328, 170,8236f, -3092,406f, 4,849259f, 154,33f, -3092,45f, 9,783653f, 14,0625f, 0, 1, 0) || unk_0x65FFA94B82A71741(iLocal_1328, 115,7556f, -3092,294f, 7,576007f, 4,375f, 10,1875f, 2,5625f, 0, 1, 0)))
		{
			iLocal_1325 = 4;
		}
		else if (((!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD())) && !func_183()) && (unk_0x5105BE70DEF1F5FB(unk_0xDC8D5832207C2EAD(), 170,8236f, -3092,406f, 4,849259f, 154,33f, -3092,45f, 9,783653f, 14,0625f, 0, 1, 0) || unk_0x65FFA94B82A71741(unk_0xDC8D5832207C2EAD(), 115,7556f, -3092,294f, 7,576007f, 4,375f, 10,1875f, 2,5625f, 0, 1, 0)))
		{
			iLocal_1328 = unk_0xDC8D5832207C2EAD();
			iLocal_1325 = 4;
		}
		else if ((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && !func_183()) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_56, 119,7228f, -3092,472f, 13,46126f, 44f, 0, 1, 0))
		{
			iLocal_1328 = unk_0xDC8D5832207C2EAD();
			iLocal_1325 = 3;
		}
		else if ((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && !func_183()) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 170,8236f, -3092,406f, 4,849259f, 154,33f, -3092,45f, 9,783653f, 14,0625f, 0, 1, 0))
		{
			iLocal_1328 = unk_0xDC8D5832207C2EAD();
			iLocal_1325 = 1;
		}
		else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 115,7556f, -3092,294f, 7,576007f, 4,375f, 10,1875f, 2,5625f, 0, 1, 0))
		{
			iLocal_1325 = 1;
		}
		else
		{
			iLocal_1328 = 0;
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 159,688f, -3092,446f, 7,314032f, 4,9375f, 7,3125f, 2,3125f, 0, 1, 0))
			{
				iLocal_1325 = 0;
			}
			else if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 115,7556f, -3092,294f, 7,576007f, 4,375f, 10,1875f, 2,5625f, 0, 1, 0))
			{
				iLocal_1325 = 0;
			}
			else
			{
				iLocal_1325 = -1;
			}
		}
		if (iLocal_1325 == 1)
		{
			if (func_182(Local_26[0 /*110*/]))
			{
				func_181(Local_26[0 /*110*/], 120f, 20f, 120f, -90f, 90f, 1101004800, 1125515264);
			}
		}
		else if (func_182(Local_26[0 /*110*/]))
		{
			func_181(Local_26[0 /*110*/], 17,5f, 10f, 120f, -90f, 90f, 1101004800, 1125515264);
		}
		if (bLocal_1322)
		{
			unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 155, 1);
		}
		if ((iLocal_1325 != -1 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && unk_0x59A8C2AB2084CAF7(Vector(101,9226f, -3119,884f, 182,9537f) - Vector(108,0625f, 239,75f, 94,25f), Vector(101,9226f, -3119,884f, 182,9537f) + Vector(108,0625f, 239,75f, 94,25f)))
		{
		}
	}
}

void func_181(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		unk_0x25DBF9F9C6BDFFEA(iParam0, fParam1);
		unk_0xAF30637CFE0F3A89(iParam0, fParam2);
		unk_0xA6102F762BBA9BC9(iParam0, (fParam3 / 2f));
		unk_0x3C7306C2CE967C57(iParam0, fParam4);
		unk_0xC8DEC2468E748263(iParam0, fParam5);
		unk_0xC45887CFF81A1950(iParam0, iParam6);
		unk_0xC3AD0E1324FB3465(iParam0, 10, iParam7);
	}
}

int func_182(int iParam0)
{
	if (iParam0 != 0 && unk_0xFC8BFE4B41177C22(iParam0))
	{
		switch (unk_0x75A2D1BBA9D95D0E(iParam0))
		{
			case 1:
				if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
		{
			if (unk_0xDC8D5832207C2EAD() == Local_44[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0x9B3D4335E0EDB0BE(Local_44[iVar0 /*8*/], unk_0x4A8C381C258A124D(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_185()
{
	int iVar0;
	
	if (unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0)) && unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D()) == Local_44[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_186()
{
	int iVar0;
	
	if ((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && !unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D())) && !unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_44[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_187()
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0) && (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("towtruck") || unk_0x4B423FAA24E8ABF0(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_188()
{
	int iVar0;
	
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_305(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_26.f_0)
	{
		if (unk_0xFC8BFE4B41177C22(Local_26[iVar0 /*110*/]))
		{
			if (Local_26[iVar0 /*110*/].f_93)
			{
				if (Local_26[iVar0 /*110*/].f_102)
				{
					func_189(Local_26[iVar0 /*110*/], &(Local_26[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
				}
				else
				{
					func_189(Local_26[iVar0 /*110*/], &(Local_26[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
				}
			}
			if (!func_182(Local_26[iVar0 /*110*/]))
			{
				if (Local_26[iVar0 /*110*/].f_103 == -1)
				{
					Local_26[iVar0 /*110*/].f_103 = unk_0x1DD05E817C89C737();
				}
				else if ((unk_0x1DD05E817C89C737() - Local_26[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && Local_44[iVar0 /*8*/].f_7)
		{
			if (!func_182(Local_44[iVar0 /*8*/]))
			{
				if (unk_0xC450B06E5AAA0985(Local_44[iVar0 /*8*/].f_1))
				{
					unk_0xFE54B8568B2ABD12(&(Local_44[iVar0 /*8*/].f_1));
				}
				unk_0x68298CA6191CDFDB(&(Local_44[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_189(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6B621402486C3E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xA23AABF378361F85(iParam0))
		{
			bVar0 = true;
			if (unk_0x1F7A48429F9F64CE(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x2BF2F8E20C19583C(iParam0, 1);
				}
				else
				{
					unk_0xF42995E2FC0559E0(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0x8B185FD7C0308117(iParam0, iParam2);
				unk_0x9FFBD1A17AAE3E0D(iParam0, fParam6);
				if (unk_0xC450B06E5AAA0985(*uParam1))
				{
					unk_0x1456FD5C0C438B19(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x12022943BDF6F088(iParam0, iParam9);
		}
		unk_0xB070F32F5FE88A2A(iParam0, iParam4);
		unk_0x2A253D5DC7CA1CEC(iParam0, iParam5);
		*uParam1 = unk_0xA95E5FB2D27EECF2(iParam0);
		if (!iParam9 == -1 || iParam12)
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61183D6239A9D7B8(*uParam1, iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(iParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(iParam7);
					}
					unk_0xFB605529038475D2(*uParam1);
				}
				unk_0x1456FD5C0C438B19(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x7F420695E3F776FB(iParam0, 0))
		{
			uParam1->f_1 = unk_0x294B0261C20A78E0(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xC450B06E5AAA0985(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61183D6239A9D7B8(uParam1->f_1, iParam8);
					}
					if (!unk_0xD6F9DEE4765092A9(iParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(iParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(iParam7);
						}
						unk_0xFB605529038475D2(uParam1->f_1);
					}
					unk_0x1456FD5C0C438B19(uParam1->f_1, 7);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xC450B06E5AAA0985(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xC450B06E5AAA0985(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_190()
{
	struct<3> Var0;
	var uVar1;
	
	if (bLocal_64 == 1)
	{
		if (!unk_0x15CCE8886267624F())
		{
			if (!unk_0x78ABC1D11B34F324())
			{
				unk_0x8F72AF14CE5AACE4(1000);
			}
		}
		else
		{
			if (unk_0x0CB7695268A7F50F())
			{
				unk_0xB479965CBAA3EAE1(0);
				unk_0xDD291722ADDCBD60();
			}
			func_24(iLocal_65);
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x406CBCEA35499884();
			unk_0x428C32CC68809A35(1);
			func_8(1);
			if (!func_251())
			{
				func_250(iLocal_61, &Var0, &uVar1);
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uVar1);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
				func_248(&uLocal_68, Var0, 50f, 0);
			}
			func_247(&uLocal_68);
			switch (iLocal_61)
			{
				case 0:
					func_174(&uLocal_68, joaat("burrito2"));
					func_174(&uLocal_68, joaat("s_m_y_pestcont_01"));
					func_174(&uLocal_68, joaat("s_m_m_security_01"));
					func_174(&uLocal_68, joaat("dilettante2"));
					func_174(&uLocal_68, joaat("p_amb_clipboard_01"));
					func_246(&uLocal_68, &cLocal_57);
					func_245(&uLocal_68, "misslsdhsclipboard@base");
					func_245(&uLocal_68, "misslsdhsclipboard@idle_a");
					func_245(&uLocal_68, "misstrevor3");
					func_244(&uLocal_68, iLocal_1284);
					if (((func_243() && !unk_0xEA4F815FDC353FEF(func_242())) && !unk_0x00C6FDED3EB75117(func_242())) && !unk_0xBA16CD57E37AC32A(func_242()))
					{
						func_174(&uLocal_68, func_242());
					}
					break;
				
				case 1:
					func_174(&uLocal_68, joaat("burrito2"));
					break;
			}
			while (!func_241(&uLocal_68))
			{
				system::wait(0);
				func_188();
			}
			switch (iLocal_61)
			{
				case 0:
					if (((func_243() && !unk_0xEA4F815FDC353FEF(func_242())) && !unk_0x00C6FDED3EB75117(func_242())) && !unk_0xBA16CD57E37AC32A(func_242()))
					{
						while (!func_240())
						{
							system::wait(0);
						}
						Local_44[4 /*8*/] = func_197(189,3979f, -2932,721f, 5,6127f, 180,5455f);
					}
					if (func_251())
					{
						if (unk_0xFC8BFE4B41177C22(Local_44[4 /*8*/]))
						{
							func_194(Local_44[4 /*8*/], -1, 1);
						}
						else
						{
							func_194(0, -1, 1);
						}
					}
					else
					{
						unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
						if (unk_0xFC8BFE4B41177C22(Local_44[4 /*8*/]))
						{
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_44[4 /*8*/], -1);
						}
					}
					while (!func_191(0))
					{
						system::wait(0);
					}
					unk_0x64BB72494B9DF6DC(0f);
					unk_0xD815D4BD1AE9E85A(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_44[0 /*8*/] = unk_0x5779387E956077A6(joaat("burrito2"), 693,725f, -1006,302f, 21,8355f, 359,884f, 1, 1, 0);
						unk_0xF04751F8E604D487(Local_44[0 /*8*/], 0);
						unk_0x1DE99C193C7EC64B(Local_44[0 /*8*/], 1084227584);
					}
					if (func_251())
					{
						func_194(0, -1, 1);
					}
					else
					{
						unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
					}
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 692,067f, -1004,812f, 21,9059f, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 359,5735f);
					unk_0x64BB72494B9DF6DC(0f);
					unk_0xD815D4BD1AE9E85A(0f, 1065353216);
					break;
			}
			if (unk_0x15CCE8886267624F() || !unk_0xDDED2C93E8FD5B69())
			{
				if (!func_7(88) || iLocal_61 != 1)
				{
					unk_0x10B228D2FDB7AF16(800);
				}
			}
			bLocal_64 = false;
		}
	}
}

int func_191(bool bParam0)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98010[0]))
		{
			Local_44[0 /*8*/] = Global_98010[0];
			unk_0xEE0BCDB1B5E36BCB(Local_44[0 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010[1]))
		{
			Local_44[1 /*8*/] = Global_98010[1];
			unk_0xEE0BCDB1B5E36BCB(Local_44[1 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010[2]))
		{
			Local_44[2 /*8*/] = Global_98010[2];
			unk_0xEE0BCDB1B5E36BCB(Local_44[2 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[0]))
		{
			Local_26[1 /*110*/] = Global_98010.f_9[0];
			if (!unk_0x4FAFF4BCB7633475(Local_26[1 /*110*/]))
			{
				unk_0x788F35D395511DFE(Local_26[1 /*110*/], 0, 1);
			}
			unk_0xEE0BCDB1B5E36BCB(Local_26[1 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010.f_28[0]))
		{
			Local_26[1 /*110*/].f_105 = Global_98010.f_28[0];
			unk_0xEE0BCDB1B5E36BCB(Local_26[1 /*110*/].f_105, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[2]))
		{
			Local_26[0 /*110*/] = Global_98010.f_9[2];
			if (!unk_0x4FAFF4BCB7633475(Local_26[0 /*110*/]))
			{
				unk_0x788F35D395511DFE(Local_26[0 /*110*/], 0, 1);
			}
			unk_0xEE0BCDB1B5E36BCB(Local_26[0 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[3]))
		{
			Local_26[2 /*110*/] = Global_98010.f_9[3];
			if (!unk_0x4FAFF4BCB7633475(Local_26[3 /*110*/]))
			{
				unk_0x788F35D395511DFE(Local_26[2 /*110*/], 0, 1);
			}
			unk_0xEE0BCDB1B5E36BCB(Local_26[2 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[4]))
		{
			Local_26[3 /*110*/] = Global_98010.f_9[4];
			if (!unk_0x4FAFF4BCB7633475(Local_26[3 /*110*/]))
			{
				unk_0x788F35D395511DFE(Local_26[3 /*110*/], 0, 1);
			}
			unk_0xEE0BCDB1B5E36BCB(Local_26[3 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[5]))
		{
			Local_27.f_0 = Global_98010.f_9[5];
			if (!unk_0x4FAFF4BCB7633475(Local_27.f_0))
			{
				unk_0x788F35D395511DFE(Local_27.f_0, 0, 1);
			}
			unk_0xEE0BCDB1B5E36BCB(Local_27.f_0, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xFC8BFE4B41177C22(Global_98010[3]))
		{
			Local_44[3 /*8*/] = Global_98010[3];
			unk_0xEE0BCDB1B5E36BCB(Local_44[3 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0xFC8BFE4B41177C22(Local_44[0 /*8*/]))
		{
			Local_44[0 /*8*/] = unk_0x5779387E956077A6(joaat("burrito2"), 148,7243f, -3104,619f, 4,8962f, 179,6158f, 1, 1, 0);
		}
		if (!unk_0xFC8BFE4B41177C22(Local_44[1 /*8*/]))
		{
			Local_44[1 /*8*/] = unk_0x5779387E956077A6(joaat("burrito2"), 145,9856f, -3080f, 4,8962f, 269,0827f, 1, 1, 0);
		}
		if (!unk_0xFC8BFE4B41177C22(Local_44[2 /*8*/]))
		{
			Local_44[2 /*8*/] = unk_0x5779387E956077A6(joaat("burrito2"), 129,9696f, -3089,331f, 4,8796f, 269,9255f, 1, 1, 0);
		}
		if (!unk_0xFC8BFE4B41177C22(Local_26[1 /*110*/]))
		{
			Local_26[1 /*110*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_y_pestcont_01"), 126,2174f, -3089,383f, 4,9199f, 275,4068f, 1, 1);
			unk_0xD25E9BDC14A0B649(Local_26[1 /*110*/], 150, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[1 /*110*/], 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[1 /*110*/], 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_26[1 /*110*/], 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_26[1 /*110*/], 4, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_26[1 /*110*/], 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[1 /*110*/], 10, 1, 0, 0);
			unk_0x7F08C4791E6D6969(Local_26[1 /*110*/], 0, 1, 0, 0, 1);
			unk_0x7F08C4791E6D6969(Local_26[1 /*110*/], 1, 0, 0, 0, 1);
			unk_0x93956DF263A4A0DC(Local_26[1 /*110*/], 2f);
		}
		if (!unk_0xFC8BFE4B41177C22(Local_26[1 /*110*/].f_105))
		{
			Local_26[1 /*110*/].f_105 = unk_0x4E55EAB577C13329(joaat("p_amb_clipboard_01"), unk_0x83FDC027F0BEA202(Local_26[1 /*110*/], 60309, 0f, 0f, 0f), 1, 1, 0);
			unk_0x4D306DD94DD6FDBA(Local_26[1 /*110*/].f_105, Local_26[1 /*110*/], unk_0x72F7E39FB49FC0BA(Local_26[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1, 0);
		}
		if (!unk_0xFC8BFE4B41177C22(Local_26[0 /*110*/]))
		{
			Local_26[0 /*110*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_y_pestcont_01"), 155,74f, -3098,89f, 5,93f, 0f, 1, 1);
			unk_0xD1C578C204015E1F(Local_26[0 /*110*/], 0, 0, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[0 /*110*/], 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[0 /*110*/], 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[0 /*110*/], 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[0 /*110*/], 10, 0, 0, 0);
			unk_0x7F08C4791E6D6969(Local_26[0 /*110*/], 0, 0, 0, 0, 1);
			unk_0x93956DF263A4A0DC(Local_26[0 /*110*/], 2f);
		}
		if (!unk_0xFC8BFE4B41177C22(Local_26[2 /*110*/]))
		{
			Local_26[2 /*110*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_y_pestcont_01"), 159,8f, -3085,96f, 6f, 0f, 1, 1);
			unk_0xD1C578C204015E1F(Local_26[2 /*110*/], 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(Local_26[2 /*110*/], 3, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_26[2 /*110*/], 4, 0, 2, 0);
			unk_0xD1C578C204015E1F(Local_26[2 /*110*/], 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[2 /*110*/], 10, 1, 0, 0);
			unk_0x7F08C4791E6D6969(Local_26[2 /*110*/], 1, 0, 0, 0, 1);
			unk_0x93956DF263A4A0DC(Local_26[2 /*110*/], 2f);
		}
		if (!unk_0xFC8BFE4B41177C22(Local_26[3 /*110*/]))
		{
			Local_26[3 /*110*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_y_pestcont_01"), 159,06f, -3085f, 6,01f, 0f, 1, 1);
			unk_0xD1C578C204015E1F(Local_26[3 /*110*/], 0, 1, 1, 0);
			unk_0xD1C578C204015E1F(Local_26[3 /*110*/], 3, 0, 3, 0);
			unk_0xD1C578C204015E1F(Local_26[3 /*110*/], 4, 0, 3, 0);
			unk_0xD1C578C204015E1F(Local_26[3 /*110*/], 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(Local_26[3 /*110*/], 10, 0, 0, 0);
			unk_0x7F08C4791E6D6969(Local_26[3 /*110*/], 0, 0, 0, 0, 1);
			unk_0x93956DF263A4A0DC(Local_26[3 /*110*/], 2f);
		}
		if (!unk_0xFC8BFE4B41177C22(Local_27.f_0) && !unk_0xFC8BFE4B41177C22(Local_44[3 /*8*/]))
		{
			if (unk_0x5295501D0862870D() >= 5 && unk_0x5295501D0862870D() < 21)
			{
				Local_44[3 /*8*/] = unk_0x5779387E956077A6(joaat("dilettante2"), 144,84f, -2982,75f, 5,32f, 266,5972f, 1, 1, 0);
				Local_27.f_0 = unk_0x8728A378EF2B46B2(Local_44[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, 1);
			}
			else
			{
				Local_44[3 /*8*/] = unk_0x5779387E956077A6(joaat("dilettante2"), 169,3554f, -3110,025f, 4,8228f, 88,4411f, 1, 1, 0);
				Local_27.f_0 = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_m_security_01"), 161,7414f, -3117,074f, 4,9643f, 333,7041f, 1, 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(Local_44[0 /*8*/]))
	{
		func_193(Local_44[0 /*8*/], 0);
		unk_0x0B74F181ADFC39BF(Local_44[0 /*8*/], 7);
		unk_0xD45558BDBDE86734(Local_44[0 /*8*/], 1);
		unk_0x5FE0938FDE9B0958(Local_44[0 /*8*/], 1);
		Local_44[0 /*8*/].f_7 = 0;
	}
	if (unk_0xFC8BFE4B41177C22(Local_44[1 /*8*/]))
	{
		func_193(Local_44[1 /*8*/], 1);
		unk_0xC229299217554C78(Local_44[1 /*8*/], 1, 1, 0);
		unk_0xBDE75E2FCBF91A6C(Local_44[1 /*8*/], 4, 0);
		unk_0xBFE60A5CC0C835D8(Local_44[1 /*8*/], 0, 1, 0);
		unk_0xBFE60A5CC0C835D8(Local_44[1 /*8*/], 4, 0, 1);
		unk_0x5FE0938FDE9B0958(Local_44[1 /*8*/], 1);
		Local_44[1 /*8*/].f_7 = 0;
	}
	if (unk_0xFC8BFE4B41177C22(Local_44[2 /*8*/]))
	{
		func_193(Local_44[2 /*8*/], 2);
		unk_0xBFE60A5CC0C835D8(Local_44[2 /*8*/], 2, 1, 0);
		unk_0xBFE60A5CC0C835D8(Local_44[2 /*8*/], 3, 1, 0);
		unk_0x5FE0938FDE9B0958(Local_44[2 /*8*/], 1);
		Local_44[2 /*8*/].f_7 = 0;
	}
	if (unk_0xFC8BFE4B41177C22(Local_26[1 /*110*/]))
	{
		unk_0xEB418CA245FFE897(Local_26[1 /*110*/], &(Local_26[1 /*110*/].f_1));
		unk_0xAAA71DD7E9059338(Local_26[1 /*110*/], 1);
		unk_0x3CEA1FD137ACE2D9(Local_26[1 /*110*/], iLocal_1282);
		unk_0xFD61BB3B8F1CDB6D(Local_26[1 /*110*/], 1);
		func_181(Local_26[1 /*110*/], 20f, 5f, 90f, -90f, 90f, 1101004800, 1125515264);
		unk_0x35365D1E3ADB7109(Local_26[1 /*110*/], 50f);
		StringCopy(&(Local_26[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_26[1 /*110*/].f_42 = 20f;
		Local_26[1 /*110*/].f_86 = 1;
		Local_26[1 /*110*/].f_87 = 1;
		Local_26[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_26[1 /*110*/].f_106 = 60309;
		Local_26[1 /*110*/].f_108 = 0;
	}
	if (unk_0xFC8BFE4B41177C22(Local_26[0 /*110*/]))
	{
		unk_0xEB418CA245FFE897(Local_26[0 /*110*/], &(Local_26[0 /*110*/].f_1));
		unk_0xAAA71DD7E9059338(Local_26[0 /*110*/], 1);
		unk_0x3CEA1FD137ACE2D9(Local_26[0 /*110*/], iLocal_1282);
		unk_0xFD61BB3B8F1CDB6D(Local_26[0 /*110*/], 1);
		func_181(Local_26[0 /*110*/], 17,5f, 10f, 120f, -90f, 90f, 1101004800, 1125515264);
		unk_0x35365D1E3ADB7109(Local_26[0 /*110*/], 50f);
		StringCopy(&(Local_26[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_26[0 /*110*/].f_86 = 1;
		Local_26[0 /*110*/].f_87 = 1;
		Local_26[0 /*110*/].f_42 = 17,5f;
	}
	if (unk_0xFC8BFE4B41177C22(Local_26[2 /*110*/]))
	{
		unk_0xEB418CA245FFE897(Local_26[2 /*110*/], &(Local_26[2 /*110*/].f_1));
		unk_0xAAA71DD7E9059338(Local_26[2 /*110*/], 1);
		unk_0x3CEA1FD137ACE2D9(Local_26[2 /*110*/], iLocal_1282);
		func_181(Local_26[2 /*110*/], 20f, 5f, 90f, -90f, 90f, 1101004800, 1125515264);
		unk_0xFD61BB3B8F1CDB6D(Local_26[2 /*110*/], 1);
		unk_0x35365D1E3ADB7109(Local_26[2 /*110*/], 50f);
		StringCopy(&(Local_26[2 /*110*/].f_1), "front 1", 16);
		Local_26[2 /*110*/].f_86 = 0;
		Local_26[2 /*110*/].f_87 = 0;
		Local_26[2 /*110*/].f_42 = 17,5f;
	}
	if (unk_0xFC8BFE4B41177C22(Local_26[3 /*110*/]))
	{
		unk_0xEB418CA245FFE897(Local_26[3 /*110*/], &(Local_26[3 /*110*/].f_1));
		unk_0xAAA71DD7E9059338(Local_26[3 /*110*/], 1);
		unk_0x3CEA1FD137ACE2D9(Local_26[3 /*110*/], iLocal_1282);
		unk_0x35365D1E3ADB7109(Local_26[3 /*110*/], 50f);
		func_181(Local_26[3 /*110*/], 20f, 5f, 90f, -90f, 90f, 1101004800, 1125515264);
		unk_0xFD61BB3B8F1CDB6D(Local_26[3 /*110*/], 1);
		StringCopy(&(Local_26[3 /*110*/].f_1), "front 2", 16);
		Local_26[3 /*110*/].f_86 = 0;
		Local_26[3 /*110*/].f_87 = 0;
		Local_26[3 /*110*/].f_42 = 17,5f;
	}
	if (unk_0xFC8BFE4B41177C22(Local_27.f_0) && unk_0xFC8BFE4B41177C22(Local_44[3 /*8*/]))
	{
		unk_0xEB418CA245FFE897(Local_27.f_0, &(Local_27.f_1));
		unk_0xAAA71DD7E9059338(Local_27.f_0, 1);
		unk_0x3CEA1FD137ACE2D9(Local_27.f_0, iLocal_1282);
		unk_0x570AAA413775DFFB(Local_27.f_0, 2);
		unk_0xBE8796DB2B90A437(Local_27.f_0, 2, 0);
		unk_0xB41DEC3AAC1AA107(Local_27.f_0, joaat("weapon_nightstick"), -1, 0, 1);
		unk_0xC652B7E19CE29859(Local_27.f_0, 5);
		func_181(Local_27.f_0, 40f, 5f, 90f, -90f, 90f, 1101004800, 1125515264);
		StringCopy(&(Local_27.f_1), "sec", 16);
		Local_27.f_86 = 1;
		Local_27.f_87 = 1;
		Local_27.f_93 = 0;
		if (Global_98010.f_357 == 1)
		{
			if (!func_192(Local_27.f_0, joaat("script_task_perform_sequence"), 1))
			{
				if (unk_0x813D79A654EE13DA(203,68f, -3132,46f, 4,79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_1329 = 0;
					unk_0xB5396F1FB088FE38(&uVar2);
					unk_0x43E9B2BD3668B432(0, Local_44[3 /*8*/], &cLocal_57, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
					unk_0x23EB5FC236231892(0, Local_44[3 /*8*/], 0);
					unk_0xFC8E18D52935E5EB(0, 203,68f, -3132,46f, 4,79f, 1f, 0);
					unk_0x93C0674FC00824D0(uVar2);
					unk_0x4BD42B0527065BB6(Local_27.f_0, uVar2);
					unk_0xD0557B139A542F12(&uVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_192(Local_27.f_0, joaat("script_task_use_nearest_scenario_chain_to_pos"), 1))
		{
			if (unk_0x813D79A654EE13DA(162,69f, -3115,67f, 4,95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_1329 = 1;
				unk_0x449C7EE823FE407B(Local_27.f_0, 162,69f, -3115,67f, 4,95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0xFC8BFE4B41177C22(Local_44[0 /*8*/]) && unk_0xFC8BFE4B41177C22(Local_44[1 /*8*/])) && unk_0xFC8BFE4B41177C22(Local_44[2 /*8*/])) && unk_0xFC8BFE4B41177C22(Local_44[3 /*8*/])) && unk_0xFC8BFE4B41177C22(Local_26[1 /*110*/])) && unk_0xFC8BFE4B41177C22(Local_26[0 /*110*/])) && unk_0xFC8BFE4B41177C22(Local_26[2 /*110*/])) && unk_0xFC8BFE4B41177C22(Local_26[3 /*110*/])) && unk_0xFC8BFE4B41177C22(Local_27.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_192(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x9B5C1660CCDF7189(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_193(var uParam0, int iParam1)
{
	Global_101533.f_22[iParam1] = uParam0;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	if (func_196() && func_251())
	{
		while (Global_101528 != 6)
		{
			system::wait(0);
		}
		unk_0x98E393364463951A(0);
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xFC8BFE4B41177C22(iParam0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
					{
						if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
						{
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iParam0, iParam1);
							unk_0xD815D4BD1AE9E85A(0f, 1065353216);
							unk_0x64BB72494B9DF6DC(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
		}
		unk_0x7919995BD2B8745C();
		func_195(0);
	}
}

void func_195(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 13);
	}
}

int func_196()
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

int func_197(struct<3> Param0, float fParam1)
{
	return func_198(&(Global_107514.f_2890), Param0, fParam1, 0);
}

int func_198(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_239(uParam0))
	{
		if (func_157(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x26715B0ED6702C87(Param1, -816,8716f, 185,6238f, 71,40275f, -807,4894f, 189,3762f, 75,27323f, 6,5f, 0, 1))
			{
				Param1 = { -850,93f, 158,82f, 65,7f };
				fParam2 = 89,5f;
			}
		}
		if (func_238(uParam0))
		{
			unk_0x2094BC4B6731BA68(Param1, 5f, 1, 0, 0, 0);
			func_237(Param1, 5f, 0);
			iVar0 = unk_0x5779387E956077A6(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
				if (system::vdist2(Var1, -1151,15f, -1530,32f, 7,48925f) <= 3f)
				{
					unk_0x62C438C53BB57AFD(iVar0, Param1, 0, 0, 1);
				}
				func_207(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0xEA4F815FDC353FEF(uParam0->f_12.f_66) || unk_0xA71279EFEE0ACEB2(uParam0->f_12.f_66))
				{
					if (!unk_0x1EF8801C2AC1FE34(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iVar0)))
						{
							func_206(uParam0->f_11, 1);
						}
						else if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iVar0)))
						{
							func_206(uParam0->f_11, 2);
						}
					}
					unk_0x9BC299A7D57D7CAA(iVar0, 0);
					unk_0xC13B5C4CC421EA79(iVar0, 0);
					unk_0x5FE0938FDE9B0958(iVar0, 1);
					func_205(iVar0, uParam0->f_11);
				}
				else if ((!func_203(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x1B79E937E91F40C3(unk_0x1AF90EB93E0012D6(), "startup_positioning"))
				{
					iVar4 = func_202(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_199(iVar4);
					}
				}
				if (((Global_101533 != 13 && Global_101533 != 10) && Global_101533 != 11) && Global_101533 != 12)
				{
					if (unk_0x70E57E9927B6BA58(&(Global_101533.f_3)) == Global_79167)
					{
						if (uParam0->f_12.f_66 == Global_113969.f_32753.f_69[21 /*78*/].f_66)
						{
							func_151(24, 0);
							func_199(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_115(iVar0, uParam0->f_11);
				}
				unk_0x55098D9E9AD58806(uParam0->f_12.f_66);
				Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_199(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_146(&(Global_78179.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xD9F5E1FEFD1329E4(Global_78179.f_139[iParam0], 0))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_78179.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xEE0BCDB1B5E36BCB(Global_78179.f_139[iParam0], 1, 1);
				unk_0x8C1F7D7A31B2A38E(&(Global_78179.f_139[iParam0]));
			}
		}
		Global_78179[iParam0] = 1;
		if (BitTest(Global_78179.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_153(iParam0, 0)) && Global_79088.f_66 == 0) && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] != 0) && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] > 3) && (!func_200(0, Global_78179.f_555[0 /*21*/].f_12) || !func_200(1, Global_78179.f_555[0 /*21*/].f_12)))
			{
				func_154(&(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]), &Global_79088);
				Global_79166 = Global_113969.f_32753.f_5591;
			}
			func_151(iParam0, 0);
		}
	}
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_201(&(Global_113969.f_32753.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_118(Global_113969.f_32753.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_201(var uParam0)
{
	return *uParam0;
}

int func_202(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_78179.f_484[iVar0], 0)) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[iVar0], 0))
		{
			unk_0xFF4B16F297D9CB3E(iParam0, &iVar1, &iVar2);
			unk_0xFF4B16F297D9CB3E(Global_78179.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(Global_78179.f_484[iVar0]) && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_78179.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_203(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_204(iParam0, Global_78179.f_139[38], 0))
			{
				func_199(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_204(iParam0, Global_78179.f_139[43], 1))
			{
				func_199(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xD65B4E942A960E26(unk_0x4A8C381C258A124D(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_204(iParam0, uVar1[iVar3], 1) && func_66(unk_0xD1A6A821F5AC81DB(uVar1[iVar3], 1), 2136,133f, 4780,563f, 39,9702f, 5f, 0))
				{
					if ((!bParam2 || func_157(Param1, 0f, 0f, 0f, 0)) || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(uVar1[iVar3], 1), 1) < 10f)
					{
						unk_0x8C1F7D7A31B2A38E(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xFC8BFE4B41177C22(Global_78179.f_484[14]) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[14], 0))
			{
				if (unk_0x4B423FAA24E8ABF0(Global_78179.f_484[14]) == joaat("luxor2") && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_78179.f_484[14]))
				{
					func_199(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xFC8BFE4B41177C22(Global_78179.f_484[20]) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[20], 0))
			{
				if (unk_0x4B423FAA24E8ABF0(Global_78179.f_484[20]) == joaat("swift2") && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_78179.f_484[20]))
				{
					func_199(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_204(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xFC8BFE4B41177C22(iParam1) && !unk_0x1C2F771CDC87A3A5(iParam1, 0)) && unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xFF4B16F297D9CB3E(iParam0, &iVar0, &iVar1);
			unk_0xFF4B16F297D9CB3E(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			Global_98844[iVar0] = iParam0;
			Global_98854[iVar0] = iParam1;
			Global_98864[iVar0] = unk_0x4B423FAA24E8ABF0(iParam0);
			if (unk_0xD3CE8D1E6564B011(Global_98864[iVar0]))
			{
				Global_98892[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98892[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_206(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (iParam0 == 145 || Global_98854[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x4B423FAA24E8ABF0(Global_98844[iVar0]) == func_147(iParam0, iParam1))
				{
					if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_98844[iVar0], 0))
					{
						unk_0xEE0BCDB1B5E36BCB(Global_98844[iVar0], 0, 1);
						unk_0x8C1F7D7A31B2A38E(&(Global_98844[iVar0]));
						Global_98854[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_207(int iParam0, var uParam1, bool bParam2, bool bParam3)
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
		if (!func_228(iParam0))
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
			if (BitTest(uParam1->f_77, func_159(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_159(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_159(iVar2)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_159(iVar3)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(iVar3));
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
					if (BitTest(uParam1->f_77, func_159(iVar4)))
					{
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(iVar4));
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
				if (BitTest(uParam1->f_77, func_159(iVar5)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_159(4)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(4));
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_159(iVar6)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_159(iVar6));
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
			if (func_226(uParam1->f_5) || func_226(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_225(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_224())
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
		if (uParam1->f_65 == -1 && !func_161(uParam1->f_66))
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
						func_223(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_223(iParam0, uParam1->f_69);
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
			func_215(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xBA16CD57E37AC32A(uParam1->f_66) && !unk_0xEA4F815FDC353FEF(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_159(iVar7 + 1)))
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
		if ((((func_210() && unk_0x00C6FDED3EB75117(uParam1->f_66)) && unk_0x8EC15ED9ECD1E9D0(iParam0)) && !unk_0x2E6A27037F1DC473(iParam0, joaat("avenger"))) && !unk_0x2E6A27037F1DC473(iParam0, func_209(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_208(iParam0, 5f))
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

int func_208(int iParam0, float fParam1)
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

int func_209(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_210()
{
	if ((((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 18) || Global_4718592.f_117195 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_213(7))
	{
		if (func_212(Global_2672855.f_4.f_16) || func_211(Global_2672855.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_211(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_33(iParam0, 9);
	}
	return 0;
}

bool func_213(int iParam0)
{
	return func_214(&(Global_2672855.f_194), iParam0);
}

var func_214(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_215(int iParam0, var uParam1, var uParam2)
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
				else if (func_221(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_220(unk_0x4B423FAA24E8ABF0(*iParam0), 1) && unk_0x94C9CD3D66808551(*iParam0, 24) != func_218(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*iParam0, 24, func_218(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_217(iParam0);
	if (func_216(*iParam0))
	{
		unk_0xD05AF216D970F274(*iParam0, 1);
		unk_0x5FE0938FDE9B0958(*iParam0, 1);
	}
	return 1;
}

int func_216(int iParam0)
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

void func_217(var uParam0)
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

int func_218(int iParam0, int iParam1)
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
		iVar0 = func_219(iParam0, 38) + 1;
		iVar1 = func_219(iParam0, 24) + 1;
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

int func_219(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152860) && unk_0x2E6A27037F1DC473(iParam0, Global_152860)) && Global_152861 == iParam1)
	{
		return Global_152862;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_221(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_220(int iParam0, int iParam1)
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

int func_221(var uParam0, int iParam1, int iParam2)
{
	if (!func_222() && unk_0xAF82FE1B3E949337(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	return 0;
}

void func_223(int iParam0, var uParam1)
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

bool func_224()
{
	return unk_0x087611B922B50F13(joaat("mpindependence"));
}

int func_225(int iParam0)
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

int func_226(int iParam0)
{
	if (!func_222() && func_227(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)
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

int func_228(int iParam0)
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_235(unk_0x259BE71D8A81D4FA(), -1))
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
	if (func_230(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_229(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_229(int iParam0)
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

int func_230(int iParam0)
{
	if (func_234(iParam0) == 233)
	{
		return func_231(iParam0);
	}
	return -1;
}

int func_231(int iParam0)
{
	if (func_232(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_232(int iParam0, int iParam1)
{
	if (func_233(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(var uParam0)
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

int func_234(int iParam0)
{
	if (func_233(iParam0))
	{
		if (func_232(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_235(var uParam0, int iParam1)
{
	var uVar0;
	
	if (func_236(uParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(uParam0), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(uParam0), 0);
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

int func_236(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(uParam0))
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

void func_237(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_146(&(Global_78179.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xED977E2AE2CB16EE(Param0, Global_78179.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_199(iVar0);
			}
		}
		iVar0++;
	}
}

int func_238(var uParam0)
{
	if (func_239(uParam0))
	{
		if (unk_0x6252BC0DD8A320DB(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_239(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_118(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_66(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_240()
{
	return func_238(&(Global_107514.f_2890));
}

int func_241(var uParam0)
{
	if (func_252(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_242()
{
	return Global_107514.f_2890.f_12.f_66;
}

int func_243()
{
	return func_239(&(Global_107514.f_2890));
}

int func_244(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF8A8852F99E201DD(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_763[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_763[iVar0 /*5*/].f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x74C1590CC91B3930(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

int func_245(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x1B79E937E91F40C3(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x80813AC549A1E8AE(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

int func_246(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD6F9DEE4765092A9(cParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x1B79E937E91F40C3(uParam0->f_374[iVar0 /*5*/].f_4, cParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xD04A772C411165F2(cParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_374[iVar1 /*5*/].f_4 = cParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

void func_247(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_909[iVar0 /*5*/])
		{
			uParam0->f_909[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_960[iVar0 /*5*/])
		{
			uParam0->f_960[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_898)
	{
		uParam0->f_898.f_2 = 1;
	}
	if (uParam0->f_890)
	{
		uParam0->f_890.f_2 = 1;
	}
	if (uParam0->f_894)
	{
		uParam0->f_894.f_2 = 1;
	}
}

int func_248(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (func_249(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_898)
	{
		if (func_157(uParam0->f_898.f_4, Param1, 0) && uParam0->f_898.f_10 == fParam2)
		{
			uParam0->f_898.f_2 = 0;
			if (!uParam0->f_898.f_1)
			{
				uParam0->f_1012 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x4A3280817398D754(Param1, fParam2, iParam3);
	uParam0->f_898 = 1;
	uParam0->f_898.f_3 = unk_0x1DD05E817C89C737();
	uParam0->f_898.f_4 = { Param1 };
	uParam0->f_898.f_7 = { 0f, 0f, 0f };
	uParam0->f_898.f_10 = fParam2;
	uParam0->f_1012 = 1;
	return 1;
}

int func_249(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_250(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183,533f, -2946,199f, 5,5113f };
			*uParam2 = 177,8164f;
			break;
		
		case 1:
			*uParam1 = { 692,067f, -1004,812f, 21,9059f };
			*uParam2 = 359,5735f;
			break;
	}
}

bool func_251()
{
	return BitTest(Global_101533.f_20, 13);
}

int func_252(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1012)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x6252BC0DD8A320DB((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x55098D9E9AD58806((uParam0[iVar1 /*5*/])->f_4);
						func_254(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0xE100DD4F82A51BDE(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0x268BE77F77533D03(uParam0->f_273[iVar1 /*5*/].f_4);
						func_254(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0xA08EEC7306CF6198(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0x8943BF9E0F15EDA0(uParam0->f_374[iVar1 /*5*/].f_4);
						func_254(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0xD314260005F064BF(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_254(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x266D9DB5FCE4003B(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0x7821F942CAEEBEE1(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_254(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x92A65766A892EFC6(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0xCF56BDC3BD787B97(uParam0->f_202[iVar1 /*7*/].f_4);
						func_254(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0x16CFE70936BA84C7(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0xCE41CD0179F8640B(uParam0->f_151[iVar1 /*5*/].f_4);
						func_254(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0xD7E1DF759CD0FFF2(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0x48FA483FE4F18CFE(uParam0->f_737[iVar1 /*5*/].f_4);
						func_254(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0xD0B0D1BD29678350(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xBBB6D0F765409642(uParam0->f_763[iVar1 /*5*/].f_4);
						func_254(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xD6F9DEE4765092A9(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x097EC9C4BC1C0F2E(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_254(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xE76A989290862FBF(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0xD0B0D1BD29678350(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x60E2ADCDDFECC019(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x1DD05E817C89C737();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0xE76A989290862FBF(uParam0->f_687[iVar1 /*7*/].f_5);
							func_254(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_254(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_909[iVar1 /*5*/])
			{
				if (!uParam0->f_909[iVar1 /*5*/].f_1)
				{
					if (unk_0x6C9A2A441E73E5E6(uParam0->f_909[iVar1 /*5*/].f_4))
					{
						uParam0->f_909[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_909[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_909[iVar1 /*5*/].f_1)
					{
						unk_0xA332714024BC3F0C(uParam0->f_909[iVar1 /*5*/].f_4);
						func_254(&(uParam0->f_909[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_960[iVar1 /*5*/])
			{
				if (!uParam0->f_960[iVar1 /*5*/].f_1)
				{
					if (unk_0x0C876A2D0F41B79C(uParam0->f_960[iVar1 /*5*/].f_4))
					{
						uParam0->f_960[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_960[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_960[iVar1 /*5*/].f_1)
					{
						func_254(&(uParam0->f_960[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0xDCB78A15E5F495DC(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0xA790E8E6FD7393AC(iVar1, 1);
						func_254(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_890)
		{
			if (!uParam0->f_890.f_1)
			{
				if (unk_0x6F13318788EDDAD8())
				{
					uParam0->f_890.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_890.f_2)
			{
				if (uParam0->f_890.f_1)
				{
					unk_0xAE427DA16687F323();
					func_254(&(uParam0->f_890));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_894)
		{
			if (!uParam0->f_894.f_1)
			{
				if (unk_0xC54A9DA207D0D713())
				{
					uParam0->f_894.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_894.f_2)
			{
				if (uParam0->f_894.f_1)
				{
					unk_0xEBB9FF9FD0CF4CB2();
					func_254(&(uParam0->f_894));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_898 && unk_0x787F8EE1F6FBDC6D())
		{
			if (!uParam0->f_898.f_1)
			{
				if (unk_0x9E2D35FA908F57B4())
				{
					uParam0->f_898.f_1 = 1;
					if (uParam0->f_1013)
					{
						unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
						func_253(uParam0);
						uParam0->f_1013 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_898.f_2)
			{
				unk_0x6981C3213B841071();
				func_254(&(uParam0->f_898));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_986[iVar1 /*5*/])
			{
				if (!uParam0->f_986[iVar1 /*5*/].f_1)
				{
					if (unk_0x38D063D8CF6D1967(uParam0->f_986[iVar1 /*5*/].f_4))
					{
						uParam0->f_986[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_986[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_986[iVar1 /*5*/].f_1)
					{
						func_254(&(uParam0->f_986[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_1012 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_253(var uParam0)
{
	if (unk_0x787F8EE1F6FBDC6D())
	{
		unk_0x6981C3213B841071();
		func_254(&(uParam0->f_898));
	}
}

void func_254(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_255()
{
	if (func_256())
	{
		func_8(1);
		unk_0xBBC29EBE6E1A48FA();
	}
}

int func_256()
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

void func_257()
{
	func_275(&(Local_1108[1 /*8*/]), 57044, "AI Controller");
	func_275(&(Local_1108[0 /*8*/]), 55409, "Dialogue");
	func_275(&(Local_1108[3 /*8*/]), 54436, "Alarms & Wanted Level");
	func_275(&(Local_1108[4 /*8*/]), 53884, "Music Manager");
}

void func_258(var uParam0)
{
	if (!func_261(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0x65CB233333D99E11(&cLocal_47) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || func_22(&(Local_1108[3 /*8*/])))
			{
				unk_0x86A2BC11844DEEB3("JHP1A_ATTACK");
				func_260(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_109(unk_0x4A8C381C258A124D(), 137,7f, -3092,81f, 4,9f, 1) < 60f)
				{
					unk_0x86A2BC11844DEEB3("JHP1A_START");
					func_260(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_1325 == 3 || iLocal_1325 == 2)
				{
					unk_0x86A2BC11844DEEB3("JHP1A_WAREHOUSE");
					func_260(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_1325 == 6 || iLocal_1325 == 9)
				{
					unk_0x86A2BC11844DEEB3("JHP1A_VAN");
					func_260(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (iLocal_1325 == 9 && func_109(unk_0x4A8C381C258A124D(), 137,7f, -3092,81f, 4,9f, 1) >= 500f)
					{
						if (unk_0x16088CC55E7F218A("JHP1A_RADIO_1"))
						{
							unk_0x86A2BC11844DEEB3("JHP1A_RADIO_1");
							func_259(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x65CB233333D99E11(&cLocal_47) && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && iLocal_1321)
				{
					func_260(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0x16088CC55E7F218A("JHP1A_RADIO_2"))
					{
						unk_0x86A2BC11844DEEB3("JHP1A_RADIO_2");
						func_260(uParam0, 6, 0);
						func_259(uParam0);
					}
				}
				break;
			}
	}
	if (func_261(uParam0))
	{
		unk_0x425BBE19F25A57AB(1f);
	}
}

void func_259(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x1DD05E817C89C737();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_260(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x1DD05E817C89C737();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_261(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_262(var uParam0)
{
	if (!func_261(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_260(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0x0C876A2D0F41B79C(&cLocal_47))
				{
					unk_0x4C6BF3BC14C6F6D6(&cLocal_47, 0);
					func_265(&cLocal_1110, Local_56, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_1110, "", 32);
					func_260(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_263(&Local_27, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 2, 0);
				unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
				unk_0xDAE61414743C8D1D(2);
				unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 0);
				unk_0xD682DD0578BF5392(0);
				unk_0x489BA9F867E58A85(unk_0x259BE71D8A81D4FA());
				unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
				uParam0->f_2 = unk_0x1DD05E817C89C737() + 15000;
				func_260(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0x1DD05E817C89C737() > uParam0->f_2)
				{
					unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 1);
					unk_0xD682DD0578BF5392(1);
					unk_0xDAE61414743C8D1D(5);
					iLocal_1321 = 1;
					func_259(uParam0);
				}
				unk_0x489BA9F867E58A85(unk_0x259BE71D8A81D4FA());
				unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
				break;
			}
	}
}

int func_263(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_264(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_264(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (func_182(*uParam0))
	{
		if (!bParam5 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = unk_0x1DD05E817C89C737();
			if (iParam1 != uParam0->f_5 || !unk_0x1B79E937E91F40C3(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_17 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam7)
				{
					uParam0->f_36 = 1;
					uParam0->f_35 = 0;
				}
				else
				{
					uParam0->f_36 = 0;
					uParam0->f_35 = uParam6;
				}
				uParam0->f_47 = 0;
				uParam0->f_46 = 0;
				uParam0->f_48 = 0;
				uParam0->f_37 = unk_0x1DD05E817C89C737();
				if (!func_249(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam4 != 0 && unk_0xFC8BFE4B41177C22(iParam4))
				{
					uParam0->f_91 = iParam4;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_265(char* sParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<32> Var0;
	
	Var0.f_0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam3;
	Var0.f_26 = fParam2;
	Var0.f_29 = iParam4;
	Var0.f_30 = iParam5;
	Var0.f_31 = iParam6;
	Var0.f_23 = { Param1 };
	func_266(&Var0, 0);
}

int func_266(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xD6F9DEE4765092A9(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0xFC8BFE4B41177C22(Local_26[*uParam0 /*110*/]) || unk_0x4FAFF4BCB7633475(Local_26[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0xD6F9DEE4765092A9(&(Local_1109[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1109.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0xD6F9DEE4765092A9(iParam1) || unk_0x1B79E937E91F40C3(iParam1, &(uParam0->f_17))))
		{
			Local_1109[iVar0 /*32*/] = *uParam0;
			Local_1109[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1109[iVar0 /*32*/].f_23 = { unk_0xD1A6A821F5AC81DB(Local_26[*uParam0 /*110*/], 1) };
			}
			else
			{
				Local_1109[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1109[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1109[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1109[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1109[iVar0 /*32*/].f_27 = unk_0x1DD05E817C89C737();
			Local_1109[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1109[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_267(var uParam0)
{
	char cVar0[24];
	bool bVar1;
	struct<3> Var2;
	
	if (!func_261(uParam0))
	{
		if (func_49())
		{
			iLocal_1281 = -1;
		}
		else if (iLocal_1281 == -1)
		{
			iLocal_1281 = unk_0x1DD05E817C89C737();
			iLocal_1304 = -1;
			iLocal_1305 = 1;
		}
		if (iLocal_1285 != -1 && !unk_0xD6F9DEE4765092A9(&Local_1287))
		{
			if (((Local_26[iLocal_1285 /*110*/] != 0 && unk_0xFC8BFE4B41177C22(Local_26[iLocal_1285 /*110*/])) && !unk_0x4FAFF4BCB7633475(Local_26[iLocal_1285 /*110*/])) && !unk_0xBE65C2DD27AEFD7B(Local_26[iLocal_1285 /*110*/]))
			{
				if (!unk_0x8BF5256C439DF778(Local_26[iLocal_1285 /*110*/]))
				{
					if (func_49())
					{
						if (iLocal_1295 && (iLocal_1305 || iLocal_1286 > iLocal_1304))
						{
							if (bLocal_1306)
							{
								iLocal_1309 = iLocal_1300;
								iLocal_1310 = iLocal_1304;
								MemCopy(&Local_1311, {func_274()}, 4);
								MemCopy(&Local_1314, {func_273()}, 4);
								iLocal_1317 = iLocal_1305;
								bLocal_1318 = iLocal_1307;
							}
							if (iLocal_1296)
							{
								func_11();
							}
							else
							{
								func_46();
							}
						}
					}
					if (func_48())
					{
						if ((unk_0x1DD05E817C89C737() - iLocal_1281) > iLocal_1293)
						{
							if (func_272(iLocal_1285))
							{
								MemCopy(&cVar0, {Local_46}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_1285)
							{
								case 0:
									func_45(&uLocal_1115, 4, Local_26[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_45(&uLocal_1115, 5, Local_26[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_45(&uLocal_1115, 4, Local_26[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_45(&uLocal_1115, 3, Local_26[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (unk_0xD6F9DEE4765092A9(&cLocal_1290))
							{
								if (func_271(&uLocal_1115, &cVar0, &Local_1287, 8, 0, 0, 0))
								{
									bVar1 = true;
								}
							}
							else if (func_270(&uLocal_1115, &cVar0, &Local_1287, &cLocal_1290, 8, 0, 0))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								func_266(&(Local_26[iLocal_1285 /*110*/].f_50), &Local_1287);
								iLocal_1304 = iLocal_1286;
								iLocal_1305 = iLocal_1297;
								bLocal_1306 = iLocal_1299;
								iLocal_1307 = iLocal_1298;
								iLocal_1285 = -1;
								iLocal_1286 = -1;
								StringCopy(&Local_1287, "", 16);
								iLocal_1293 = 0;
								fLocal_1294 = 9999999f;
								iLocal_1295 = 0;
								iLocal_1296 = 0;
								iLocal_1297 = 1;
								iLocal_1299 = 0;
								iLocal_1298 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1285 = -1;
				iLocal_1286 = -1;
				StringCopy(&Local_1287, "", 16);
				iLocal_1293 = 0;
				fLocal_1294 = 9999999f;
				iLocal_1295 = 0;
				iLocal_1296 = 0;
				iLocal_1297 = 1;
				iLocal_1298 = 0;
			}
		}
		if (((func_49() && iLocal_1300 != -1) && iLocal_1307) && !unk_0xD6F9DEE4765092A9(&cLocal_1301))
		{
			Var2 = { unk_0xD1A6A821F5AC81DB(Local_26[iLocal_1300 /*110*/], 1) };
			if (func_109(unk_0x4A8C381C258A124D(), Var2, 1) >= 25f)
			{
				iLocal_1309 = iLocal_1300;
				iLocal_1310 = iLocal_1304;
				MemCopy(&Local_1311, {func_274()}, 4);
				MemCopy(&Local_1314, {func_273()}, 4);
				iLocal_1317 = iLocal_1305;
				bLocal_1318 = iLocal_1307;
				func_11();
				iLocal_1300 = -1;
				iLocal_1304 = -1;
				StringCopy(&cLocal_1301, "", 16);
				iLocal_1305 = 0;
				iLocal_1307 = 0;
			}
		}
		if (iLocal_1309 != -1 && !unk_0xD6F9DEE4765092A9(&Local_1311))
		{
			if (Local_26[iLocal_1309 /*110*/].f_5 > iLocal_1310)
			{
				iLocal_1309 = -1;
				iLocal_1310 = -1;
				StringCopy(&Local_1311, "", 16);
				StringCopy(&Local_1314, "", 16);
				iLocal_1317 = 1;
			}
		}
		if (iLocal_1285 == -1 && unk_0xD6F9DEE4765092A9(&Local_1287))
		{
			if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 10000)
			{
				if (iLocal_1309 != -1 && !unk_0xD6F9DEE4765092A9(&Local_1311))
				{
					func_269(iLocal_1309, &Local_1311, iLocal_1310, 0, 0, iLocal_1317, 0, 1, &Local_1314, bLocal_1318);
					iLocal_1309 = -1;
					iLocal_1310 = -1;
					StringCopy(&Local_1311, "", 16);
					StringCopy(&Local_1314, "", 16);
					iLocal_1317 = 1;
				}
			}
		}
	}
	func_268(bLocal_1318);
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_269(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_108(Local_26[iParam0 /*110*/], unk_0x4A8C381C258A124D(), 1);
	if ((iParam2 > iLocal_1286 || iParam2 == 4) || ((iParam2 == iLocal_1286 && (fVar0 < fLocal_1294 || (func_272(iParam0) && !func_272(iLocal_1285)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_1285 = iParam0;
			iLocal_1286 = iParam2;
			StringCopy(&Local_1287, sParam1, 16);
			StringCopy(&cLocal_1290, sParam8, 16);
			fLocal_1294 = fVar0;
			iLocal_1295 = iParam3;
			iLocal_1296 = iParam4;
			iLocal_1293 = iParam6;
			iLocal_1297 = iParam5;
			iLocal_1299 = iParam7;
			iLocal_1298 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_270(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_29(sParam2, iParam4, 0);
}

bool func_271(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_272(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_273()
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

struct<6> func_274()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

int func_275(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_276(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	
	if (!func_261(uParam0))
	{
		bLocal_1322 = true;
		if (!iLocal_1320)
		{
			if (func_184())
			{
				iLocal_1320 = 1;
				iLocal_1323 = unk_0x1DD05E817C89C737();
			}
		}
		else if ((unk_0x1DD05E817C89C737() - iLocal_1323) > 3000)
		{
			iLocal_1320 = 0;
			iLocal_1323 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_26.f_0)
		{
			if (func_182(Local_26[iVar0 /*110*/]))
			{
				func_296(&(Local_26[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_182(Local_27.f_0))
		{
			func_296(&Local_27);
		}
		iVar1 = 0;
		while (iVar1 < Local_1109.f_0)
		{
			if (!unk_0xD6F9DEE4765092A9(&(Local_1109[iVar1 /*32*/].f_1)) && Local_1109[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1109[iVar1 /*32*/].f_28 == -1 || (unk_0x1DD05E817C89C737() - Local_1109[iVar1 /*32*/].f_27) < Local_1109[iVar1 /*32*/].f_28)
				{
					if (Local_1109[iVar1 /*32*/].f_29 <= 0 || (unk_0x1DD05E817C89C737() - Local_1109[iVar1 /*32*/].f_27) > Local_1109[iVar1 /*32*/].f_29)
					{
						if (Local_1109[iVar1 /*32*/] != -1 && func_182(Local_26[Local_1109[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { unk_0xD1A6A821F5AC81DB(Local_26[Local_1109[iVar1 /*32*/] /*110*/], 1) };
							Local_1109[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1109[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1108[3 /*8*/])))
						{
							if (Local_1109[iVar1 /*32*/].f_31 && unk_0xED977E2AE2CB16EE(Var2, Local_56, 1) < 35f)
							{
								func_173(&(Local_1108[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_26.f_0)
						{
							if (Local_1109[iVar1 /*32*/] == -1 || (iVar0 != Local_1109[iVar1 /*32*/] && Local_26[Local_1109[iVar1 /*32*/] /*110*/].f_5 >= Local_26[iVar0 /*110*/].f_5))
							{
								if (unk_0xFC8BFE4B41177C22(Local_26[iVar0 /*110*/]) && !unk_0x4FAFF4BCB7633475(Local_26[iVar0 /*110*/]))
								{
									if (func_109(Local_26[iVar0 /*110*/], Var2, 1) < (Local_1109[iVar1 /*32*/].f_26 + Local_26[iVar0 /*110*/].f_42))
									{
										Local_26[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1109[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1108[3 /*8*/])))
											{
												func_173(&(Local_1108[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_1110, {Local_1109[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0x1DD05E817C89C737() - Local_1109[iVar1 /*32*/].f_27) > Local_1109[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1109[iVar1 /*32*/].f_1), "", 64);
					Local_1109[iVar1 /*32*/] = -1;
					Local_1109[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1109[iVar1 /*32*/].f_26 = 0f;
					Local_1109[iVar1 /*32*/].f_27 = -1;
					Local_1109[iVar1 /*32*/].f_28 = -1;
					Local_1109[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_26.f_0)
		{
			if (func_182(Local_26[iVar0 /*110*/]))
			{
				func_290(&(Local_26[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_182(Local_27.f_0))
		{
			func_281(&Local_27);
		}
		iVar0 = 0;
		while (iVar0 < Local_26.f_0)
		{
			if (func_182(Local_26[iVar0 /*110*/]))
			{
				func_280(&(Local_26[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_182(Local_27.f_0))
		{
			func_278(&Local_27);
		}
		iVar0 = 0;
		while (iVar0 < Local_26.f_0)
		{
			if (unk_0xFC8BFE4B41177C22(Local_26[iVar0 /*110*/].f_105))
			{
				if (((!unk_0xFC8BFE4B41177C22(Local_26[iVar0 /*110*/]) || unk_0x4FAFF4BCB7633475(Local_26[iVar0 /*110*/])) || unk_0x86521C678E8AA3FF(Local_26[iVar0 /*110*/])) || (Local_26[iVar0 /*110*/].f_108 && Local_26[iVar0 /*110*/].f_5 != 0))
				{
					bVar3 = true;
				}
				else if (Local_26[iVar0 /*110*/].f_5 != 0)
				{
					bVar4 = true;
				}
				if (bVar3 || bVar4)
				{
					if (unk_0x21478251925DBFD7(Local_26[iVar0 /*110*/].f_105, Local_26[iVar0 /*110*/]))
					{
						unk_0x837D67618BF89034(Local_26[iVar0 /*110*/].f_105, 1, 1);
					}
					if (bVar3)
					{
						unk_0xB3B56385ECA230B4(&(Local_26[iVar0 /*110*/].f_105));
					}
					else if (bVar4)
					{
						unk_0x51C8BEA2005931AB(&(Local_26[iVar0 /*110*/].f_105));
					}
					Local_26[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_26[iVar0 /*110*/].f_107 != 0 && Local_26[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_26[iVar0 /*110*/].f_109 && unk_0x6252BC0DD8A320DB(Local_26[iVar0 /*110*/].f_107))
				{
					Local_26[iVar0 /*110*/].f_105 = unk_0x4E55EAB577C13329(Local_26[iVar0 /*110*/].f_107, unk_0x83FDC027F0BEA202(Local_26[iVar0 /*110*/], Local_26[iVar0 /*110*/].f_106, 0f, 0f, 0f), 1, 1, 0);
					unk_0x4D306DD94DD6FDBA(Local_26[iVar0 /*110*/].f_105, Local_26[iVar0 /*110*/], unk_0x72F7E39FB49FC0BA(Local_26[iVar0 /*110*/], Local_26[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1, 0);
					Local_26[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_26.f_0)
		{
			if (unk_0xFC8BFE4B41177C22(Local_26[iVar1 /*110*/]) && !unk_0x4FAFF4BCB7633475(Local_26[iVar1 /*110*/]))
			{
				unk_0xE4DC7B3DD712372B(Local_26[iVar1 /*110*/]);
				unk_0x7468550652312059(Local_26[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_277();
	}
	if (func_261(uParam0))
	{
	}
}

void func_277()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_182(Local_44[iVar0 /*8*/]))
		{
			unk_0xE4DC7B3DD712372B(Local_44[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x895CE77855F9AFD2(*iParam0);
	if (func_279(*iParam0))
	{
		Local_27.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (unk_0x5295501D0862870D() >= 5 && unk_0x5295501D0862870D() < 21)
			{
				if ((!func_192(*iParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1) && !func_192(*iParam0, joaat("script_task_perform_sequence"), 1)) || iLocal_1329)
				{
					if (unk_0x81E5E9AE1379B068(203,68f, -3132,46f, 4,79f, 1f, 1))
					{
						unk_0xFC8E18D52935E5EB(*iParam0, 203,68f, -3132,46f, 4,79f, 1f, 0);
						iLocal_1329 = 0;
					}
				}
			}
			else if (!func_192(*iParam0, joaat("script_task_use_nearest_scenario_chain_to_pos"), 1) || !iLocal_1329)
			{
				if (unk_0x81E5E9AE1379B068(162,69f, -3115,67f, 4,95f, 1f, 1))
				{
					unk_0xB50A89E4C8C2A37C(*iParam0, 162,69f, -3115,67f, 4,95f, 1f, 0);
					iLocal_1329 = 1;
				}
			}
			break;
		
		case 3:
			unk_0x96A0632EBDD87FA3(*iParam0, 1, -1, "DEFAULT_ACTION");
			switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if (unk_0x66B90BA528CFEBCE(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0x4F07124B9C56ED6F(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0x66B90BA528CFEBCE(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0xB41DEC3AAC1AA107(*iParam0, joaat("weapon_nightstick"), -1, 1, 1);
					}
					if (unk_0x23B29877D0BE9547(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0x3C0F448853B71C92(*iParam0, joaat("weapon_nightstick"), 0);
						}
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (unk_0x66B90BA528CFEBCE(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0x4F07124B9C56ED6F(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0x66B90BA528CFEBCE(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0xB41DEC3AAC1AA107(*iParam0, joaat("weapon_pistol"), -1, 1, 1);
					}
					if (unk_0x23B29877D0BE9547(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0x3C0F448853B71C92(*iParam0, joaat("weapon_pistol"), 0);
						}
					}
					break;
			}
			if (!func_192(*iParam0, joaat("script_task_combat"), 1) || func_279(*iParam0))
			{
				unk_0x62A5310368A20EFA(*iParam0, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0xE67051907958B5EB(*iParam0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
			{
				case 686645495:
					if (unk_0xFC8BFE4B41177C22(iParam0->f_91))
					{
						if (!unk_0xA702E444F81F0A83(*iParam0, unk_0xD1A6A821F5AC81DB(iParam0->f_91, 1), 180f) && (unk_0x1DD05E817C89C737() - iParam0->f_37) < 5000)
						{
							if (!func_192(*iParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_279(*iParam0))
							{
								unk_0x0E95B96CFEFE7B61(*iParam0, iParam0->f_91, -1);
								unk_0xE67051907958B5EB(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_192(*iParam0, joaat("script_task_goto_entity_offset"), 1) || func_279(*iParam0))
						{
							unk_0x35CBF41D628A3871(*iParam0, iParam0->f_91, -1, 2f, -1f, 2,5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !func_66(iParam0->f_88, iParam0->f_43, 1f, 0))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_249(iParam0->f_88))
					{
						if (!unk_0xA702E444F81F0A83(*iParam0, iParam0->f_88, 90f) && (unk_0x1DD05E817C89C737() - iParam0->f_37) < 5000)
						{
							if ((!func_192(*iParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_279(*iParam0)) || iVar1)
							{
								unk_0xCD76801E1106CABE(*iParam0, iParam0->f_88, 0);
								unk_0xE237FA90A8AFEE59(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_192(*iParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1) || func_279(*iParam0)) || iVar1)
						{
							unk_0xA966E518B752B92A(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_249(iParam0->f_88))
					{
						if (!func_192(*iParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_279(*iParam0))
						{
							unk_0xCD76801E1106CABE(*iParam0, iParam0->f_88, -1);
							unk_0xE237FA90A8AFEE59(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x0FD8B5F4BB15CD71(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0xFC8BFE4B41177C22(iParam0->f_91))
					{
						if (!func_192(*iParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_279(*iParam0))
						{
							unk_0x0E95B96CFEFE7B61(*iParam0, iParam0->f_91, -1);
							unk_0xE67051907958B5EB(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x0FD8B5F4BB15CD71(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_279(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0x1B79E937E91F40C3(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	unk_0x895CE77855F9AFD2(*uParam0);
	if (func_279(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_26.f_0)
			{
				if (Local_26[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_192(*uParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1))
						{
							if (unk_0x81E5E9AE1379B068(155,74f, -3098,89f, 4,93f, 0,5f, 1))
							{
								unk_0xFC8E18D52935E5EB(*uParam0, 155,74f, -3098,89f, 4,93f, 0,5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_192(*uParam0, joaat("script_task_perform_sequence"), 1) || func_279(*uParam0)) && unk_0xE100DD4F82A51BDE("misslsdhsclipboard@base"))
						{
							if (!unk_0x13CCB1AD131C1082(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0xB5396F1FB088FE38(&uLocal_1283);
								if (!func_66(unk_0xD1A6A821F5AC81DB(*uParam0, 1), 126,8496f, -3089,249f, 4,9141f, 0,75f, 0))
								{
									unk_0xA966E518B752B92A(0, 126,8496f, -3089,249f, 4,9141f, 1f, -1, 0,5f, 0, 264,2812f);
								}
								unk_0x2280392018BC0DD3(0, 264,2812f, 0);
								unk_0x10425721983AE158(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0x93C0674FC00824D0(uLocal_1283);
								unk_0x4BD42B0527065BB6(*uParam0, uLocal_1283);
								unk_0xD0557B139A542F12(&uLocal_1283);
							}
							if (unk_0xFC8BFE4B41177C22(Local_44[2 /*8*/]))
							{
								unk_0xE237FA90A8AFEE59(*uParam0, unk_0x75DF72FC74EED046(Local_44[2 /*8*/], unk_0x365DC1E8054AF31A(Local_44[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (unk_0xE100DD4F82A51BDE("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && unk_0x89EC60A4485FD199(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && unk_0x89EC60A4485FD199(*uParam0) == 2) || uParam0->f_46 == 2) && unk_0x1DD05E817C89C737() > uParam0->f_37)
									{
										unk_0xB5396F1FB088FE38(&uLocal_1283);
										switch (unk_0xC5935DFB3F39785A(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										unk_0x10425721983AE158(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										unk_0x10425721983AE158(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										unk_0x93C0674FC00824D0(uLocal_1283);
										unk_0x4BD42B0527065BB6(*uParam0, uLocal_1283);
										unk_0xD0557B139A542F12(&uLocal_1283);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (unk_0x89EC60A4485FD199(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_192(*uParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1))
						{
							if (unk_0x81E5E9AE1379B068(159,82f, -3085,93f, 5f, 0,1f, 1))
							{
								unk_0xFC8E18D52935E5EB(*uParam0, 159,82f, -3085,93f, 5f, 0,1f, -1);
							}
							else if (unk_0x81E5E9AE1379B068(160,15f, -3084,79f, 4,99f, 0,1f, 1))
							{
								unk_0xFC8E18D52935E5EB(*uParam0, 160,15f, -3084,79f, 4,99f, 0,1f, -1);
							}
							else if (unk_0x81E5E9AE1379B068(159,09f, -3085,02f, 5,01f, 0,1f, 1))
							{
								unk_0xFC8E18D52935E5EB(*uParam0, 159,09f, -3085,02f, 5,01f, 0,1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0x70E57E9927B6BA58(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0xFC8BFE4B41177C22(uParam0->f_91))
					{
						if (!unk_0xA702E444F81F0A83(*uParam0, unk_0xD1A6A821F5AC81DB(uParam0->f_91, 1), 180f) && (unk_0x1DD05E817C89C737() - uParam0->f_37) < 5000)
						{
							if (!func_192(*uParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_279(*uParam0))
							{
								unk_0x0E95B96CFEFE7B61(*uParam0, uParam0->f_91, -1);
								unk_0xE67051907958B5EB(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_192(*uParam0, joaat("script_task_goto_entity_offset"), 1) || func_279(*uParam0))
						{
							unk_0x35CBF41D628A3871(*uParam0, uParam0->f_91, -1, 2f, -1f, 2,5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_66(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar3 = 1;
					}
					if (!func_249(uParam0->f_88))
					{
						if (!unk_0xA702E444F81F0A83(*uParam0, uParam0->f_88, 90f) && (unk_0x1DD05E817C89C737() - uParam0->f_37) < 5000)
						{
							if ((!func_192(*uParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_279(*uParam0)) || iVar3)
							{
								unk_0xCD76801E1106CABE(*uParam0, uParam0->f_88, 0);
								unk_0xE237FA90A8AFEE59(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_192(*uParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1) || func_279(*uParam0)) || iVar3)
						{
							unk_0xA966E518B752B92A(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_249(uParam0->f_88))
					{
						if (!func_192(*uParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_279(*uParam0))
						{
							unk_0xCD76801E1106CABE(*uParam0, uParam0->f_88, -1);
							unk_0xE237FA90A8AFEE59(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x0FD8B5F4BB15CD71(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0xFC8BFE4B41177C22(uParam0->f_91))
					{
						if (!func_192(*uParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_279(*uParam0))
						{
							unk_0x0E95B96CFEFE7B61(*uParam0, uParam0->f_91, -1);
							unk_0xE67051907958B5EB(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x0FD8B5F4BB15CD71(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0x1B79E937E91F40C3(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0x1B79E937E91F40C3(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0x1B79E937E91F40C3(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0x1B79E937E91F40C3(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_192(*uParam0, joaat("script_task_perform_sequence"), 1) || !unk_0x3644984C9D7B57EF(*uParam0, unk_0x4A8C381C258A124D(), 90f)) || func_279(*uParam0))
				{
					unk_0xB5396F1FB088FE38(&uLocal_1283);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					unk_0x0FD8B5F4BB15CD71(0, 2000);
					unk_0xC58DD79B4CA8487F(uLocal_1283, 1);
					unk_0x93C0674FC00824D0(uLocal_1283);
					unk_0x4BD42B0527065BB6(*uParam0, uLocal_1283);
					unk_0xD0557B139A542F12(&uLocal_1283);
					unk_0xE67051907958B5EB(*uParam0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_1328) && unk_0xD9F5E1FEFD1329E4(iLocal_1328, 0))
				{
					fVar6 = func_108(unk_0x4A8C381C258A124D(), iLocal_1328, 1);
				}
				if ((iLocal_1325 == 3 || iLocal_1325 == 2) || iLocal_1325 == 8)
				{
					iVar4 = unk_0x4A8C381C258A124D();
					fVar7 = 2f;
				}
				else if (iLocal_1325 == 0 || iLocal_1325 == 1)
				{
					iVar4 = unk_0x4A8C381C258A124D();
					fVar7 = 1f;
				}
				else if (iLocal_1325 == 5 && unk_0xFC8BFE4B41177C22(iLocal_1328))
				{
					if (fVar6 > 10f)
					{
						iVar4 = unk_0x4A8C381C258A124D();
						fVar7 = 2f;
					}
					else
					{
						iVar4 = iLocal_1328;
						fVar7 = 2f;
					}
				}
				else if (iLocal_1325 == 4 && unk_0xFC8BFE4B41177C22(iLocal_1328))
				{
					iVar4 = iLocal_1328;
					fVar7 = 1f;
				}
				if (unk_0xFC8BFE4B41177C22(iVar4))
				{
					fVar5 = func_108(*uParam0, iVar4, 1);
				}
				if (fVar5 <= 7,5f)
				{
					if (((!func_192(*uParam0, joaat("script_task_perform_sequence"), 1) && !func_192(*uParam0, joaat("script_task_go_to_entity"), 1)) || !unk_0x3644984C9D7B57EF(*uParam0, unk_0x4A8C381C258A124D(), 90f)) || func_279(*uParam0))
					{
						unk_0xB5396F1FB088FE38(&uLocal_1283);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
						unk_0x0FD8B5F4BB15CD71(0, 2000);
						unk_0xC58DD79B4CA8487F(uLocal_1283, 1);
						unk_0x93C0674FC00824D0(uLocal_1283);
						unk_0x4BD42B0527065BB6(*uParam0, uLocal_1283);
						unk_0xD0557B139A542F12(&uLocal_1283);
						unk_0xE67051907958B5EB(*uParam0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
					}
				}
				else if (!func_192(*uParam0, joaat("script_task_go_to_entity"), 1) || func_279(*uParam0))
				{
					if (fVar7 > 1f)
					{
						fVar8 = 6f;
					}
					else
					{
						fVar8 = 3f;
					}
					unk_0xAB3658A740EED98E(*uParam0, iVar4, -1, fVar8, fVar7, 1073741824, 0);
					unk_0xE67051907958B5EB(*uParam0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0x70E57E9927B6BA58(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0x23B29877D0BE9547(*uParam0, &iVar9, 1))
					{
						if (iVar9 != joaat("weapon_unarmed"))
						{
							unk_0x3C0F448853B71C92(*uParam0, joaat("weapon_unarmed"), 0);
						}
					}
					if (!func_192(*uParam0, joaat("script_task_combat"), 1))
					{
						unk_0x62A5310368A20EFA(*uParam0, unk_0x4A8C381C258A124D(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_192(*uParam0, joaat("script_task_perform_sequence"), 1) || !unk_0x3644984C9D7B57EF(*uParam0, unk_0x4A8C381C258A124D(), 90f)) || func_279(*uParam0))
					{
						unk_0xB5396F1FB088FE38(&uLocal_1283);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
						unk_0x0FD8B5F4BB15CD71(0, 2000);
						unk_0xC58DD79B4CA8487F(uLocal_1283, 1);
						unk_0x93C0674FC00824D0(uLocal_1283);
						unk_0x4BD42B0527065BB6(*uParam0, uLocal_1283);
						unk_0xD0557B139A542F12(&uLocal_1283);
						unk_0xE67051907958B5EB(*uParam0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_109(*uParam0, 177,7484f, -3240,897f, 4,6079f, 1) < 15f)
			{
				if (!func_192(*uParam0, joaat("script_task_smart_flee_ped"), 1))
				{
					unk_0xD844F5E50DAB6FF7(*uParam0, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_192(*uParam0, joaat("script_task_smart_flee_ped"), 1) && !func_192(*uParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1)) || func_279(*uParam0))
			{
				unk_0xA966E518B752B92A(*uParam0, 177,7484f, -3240,897f, 4,6079f, 3f, -1, 0,25f, 1, 40000f);
			}
			break;
		
		case 4:
			switch (unk_0x70E57E9927B6BA58(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_192(*uParam0, joaat("script_task_hands_up"), 1) || func_279(*uParam0))
					{
						unk_0x0B1A40D00F279307(*uParam0, -1, unk_0x4A8C381C258A124D(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_281(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &uVar0, 1);
	fVar1 = func_108(unk_0x4A8C381C258A124D(), *iParam0, 1);
	if (unk_0xFFF4FB66DA549D0F(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x9B3D4335E0EDB0BE(*iParam0, unk_0x4A8C381C258A124D(), 1))
	{
		if (unk_0x1AC621DBDFE4ECA0(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_288(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_263(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_263(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x613F3705BEA060B4(*iParam0, 124) || unk_0x613F3705BEA060B4(*iParam0, 125)) || unk_0x613F3705BEA060B4(*iParam0, 126)) || unk_0x613F3705BEA060B4(*iParam0, 22)) || unk_0x613F3705BEA060B4(*iParam0, 23)) || unk_0x613F3705BEA060B4(*iParam0, 88))
	{
		func_263(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_287(4))
	{
		func_263(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_286(*iParam0, 2))
	{
		func_263(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 5))
	{
		func_263(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1325 == 11)
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_285(iParam0, 1, "HEARD_SEC_CAR", Local_44[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1325 == 6)
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_285(iParam0, 1, "HEARD_VAN", Local_44[func_103() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1325 == 10)
	{
		if (iParam0->f_39)
		{
			func_285(iParam0, 3, "STEALING_VAN", Local_44[func_55() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_285(iParam0, 1, "HEARD_VAN", Local_44[func_55() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x613F3705BEA060B4(*iParam0, 42)) || unk_0x613F3705BEA060B4(*iParam0, 114)) || func_283(*iParam0, 0))
	{
		func_263(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x613F3705BEA060B4(*iParam0, 103)) || func_283(*iParam0, 1))
	{
		func_263(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_109(unk_0x4A8C381C258A124D(), Local_56, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_282(iParam0, 1, "HEARD_PLAYER", unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_263(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_263(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1109.f_0 - 1))
	{
		bVar8 = Local_1109[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x70E57E9927B6BA58(&(Local_1109[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case joaat("gunshot"):
			case 600040296:
				func_263(iParam0, 3, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_282(iParam0, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_285(iParam0, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), Local_44[func_103() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x1B79E937E91F40C3(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
			{
				case 58299323:
					if ((unk_0x1DD05E817C89C737() - iParam0->f_37) > 3000)
					{
						func_263(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x1DD05E817C89C737() - iParam0->f_37) > 4000 && func_109(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x6CDEFB59235A1FD9(*iParam0))
					{
						func_263(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0x1DD05E817C89C737() - iParam0->f_37) > 4000 && !unk_0x6B919BD9340E189A(*iParam0))
					{
						func_263(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if ((((unk_0x1DD05E817C89C737() - iParam0->f_38) > 8000 && func_109(unk_0x4A8C381C258A124D(), Local_56, 1) > 65f) && (func_108(unk_0x4A8C381C258A124D(), *iParam0, 1) > 10f || (unk_0x1DD05E817C89C737() - iParam0->f_38) > 16000)) && !unk_0x6B919BD9340E189A(*iParam0))
					{
						func_263(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_109(unk_0x4A8C381C258A124D(), Local_56, 1) > 300f && func_108(unk_0x4A8C381C258A124D(), *iParam0, 1) > 150f)
					{
						func_263(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_282(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam4, int iParam5, bool bParam6)
{
	return func_264(iParam0, iParam1, sParam2, Param3, 0, bParam4, iParam5, bParam6);
}

int func_283(struct<110> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_26.f_0)
	{
		if (func_284(Param0, Local_26[iVar0 /*110*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_284(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (unk_0xFC8BFE4B41177C22(iParam110) && unk_0x9B3D4335E0EDB0BE(iParam110, unk_0x4A8C381C258A124D(), iParam220))
	{
		if (func_108(iParam0, iParam110, 1) < 15f)
		{
			if (unk_0x300A997AE991C0A8(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_285(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_264(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_286(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0 && unk_0xFC8BFE4B41177C22(iParam0)) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), iParam110) && (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), iParam0) && (unk_0x1C751EF63BF4D501(unk_0x259BE71D8A81D4FA()) || unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA())))
	{
		return 1;
	}
	return 0;
}

int func_288(struct<110> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_26.f_0)
	{
		if (func_289(Param0, Local_26[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_26[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam1 = bVar2;
				*uParam2 = bVar3;
				*uParam3 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam1 = 1;
				}
				if (bVar3)
				{
					*uParam2 = 1;
				}
				if (bVar4)
				{
					*uParam3 = 1;
				}
			}
			if (Local_26[iVar0 /*110*/].f_85)
			{
				*uParam2 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_289(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(Param71.f_0) && unk_0x4FAFF4BCB7633475(Param71.f_0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(Param71.f_0, 0) };
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(Param0.f_0, 1), Var0, 1) < 10f)
		{
			if (unk_0x300A997AE991C0A8(Param0.f_0, Param71.f_0))
			{
				if ((unk_0x1DD05E817C89C737() - Param71.f_103) < 3000)
				{
					*uParam78 = 1;
				}
				else
				{
					*uParam78 = 0;
				}
				if (*uParam78)
				{
					iVar1 = unk_0x836392D80E4F106A(Param71.f_0);
					if (unk_0x0101C509A6E67F99(iVar1))
					{
						iVar2 = unk_0xBD545F8729E9F413(iVar1);
						if ((iVar2 == unk_0x4A8C381C258A124D() && !unk_0x4FAFF4BCB7633475(iVar2)) && Param0.f_39)
						{
							*uParam79 = 1;
						}
						else
						{
							*uParam79 = 0;
						}
					}
					else
					{
						*uParam79 = 0;
					}
				}
				else
				{
					*uParam79 = 0;
				}
				iVar3 = unk_0x6D7C109F77738F39(Param71.f_0);
				if (iVar3 == joaat("weapon_unarmed") || (iVar3 != joaat("weapon_unarmed") && unk_0x12974BA350E32306(iVar3) == 2))
				{
					*uParam80 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_290(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<6> Var12;
	bool bVar13;
	var uVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<4> Var18;
	
	unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &uVar0, 1);
	fVar1 = func_108(unk_0x4A8C381C258A124D(), *iParam0, 1);
	if (unk_0xFFF4FB66DA549D0F(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x9B3D4335E0EDB0BE(*iParam0, unk_0x4A8C381C258A124D(), 1))
	{
		if (unk_0x1AC621DBDFE4ECA0(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar5 = func_288(*iParam0, &uVar6, &bVar7, &bVar8);
	if (((iParam0->f_5 != 5 && uVar5) && uVar6) && !bVar8)
	{
		if (bVar7)
		{
			func_263(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_263(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x613F3705BEA060B4(*iParam0, 124) || unk_0x613F3705BEA060B4(*iParam0, 125)) || unk_0x613F3705BEA060B4(*iParam0, 126)) || unk_0x613F3705BEA060B4(*iParam0, 22)) || unk_0x613F3705BEA060B4(*iParam0, 23)) || unk_0x613F3705BEA060B4(*iParam0, 88))
	{
		func_263(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_287(4))
	{
		func_263(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_286(*iParam0, 2))
	{
		func_263(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 5))
	{
		func_263(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1325 == 7)
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_282(iParam0, 1, "HEARD_PLAYER", unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1325 == 6)
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_282(iParam0, 1, "HEARD_PLAYER", unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1325 == 10)
	{
		if (iParam0->f_39)
		{
			func_285(iParam0, 3, "STEALING_VAN", Local_44[func_55() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_285(iParam0, 1, "HEARD_VAN", Local_44[func_55() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x613F3705BEA060B4(*iParam0, 42)) || unk_0x613F3705BEA060B4(*iParam0, 114)) || func_283(*iParam0, 0))
	{
		func_263(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x613F3705BEA060B4(*iParam0, 103)) || func_283(*iParam0, 1))
	{
		func_263(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_109(unk_0x4A8C381C258A124D(), Local_56, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_282(iParam0, 1, "HEARD_PLAYER", unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar5)
	{
		if ((uVar6 && bVar7) && bVar8)
		{
			func_263(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar7)
		{
			func_263(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_1325 == 9) && !unk_0x1B79E937E91F40C3(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0x1B79E937E91F40C3(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0x1B79E937E91F40C3(&(iParam0->f_9), "CHECK_DRIVER")) && func_109(unk_0x4A8C381C258A124D(), Local_56, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_285(iParam0, 1, "SEE_VAN_LEAVING", Local_44[func_103() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_285(iParam0, 1, "HEARD_VAN", Local_44[func_103() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_1325 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_1325 == 0 || iLocal_1325 == 1) || iLocal_1325 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_1325 == 3 || iLocal_1325 == 2) || iLocal_1325 == 5)))
		{
			if ((iLocal_1325 == 5 || iLocal_1325 == 4) && unk_0xAD915B5E38F323E5(*iParam0, iLocal_1328, 19))
			{
				switch (iLocal_1325)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_263(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_1325)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_263(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_282(iParam0, 1, "HEARD_PLAYER", unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1109.f_0 - 1))
	{
		bVar9 = Local_1109[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x70E57E9927B6BA58(&(Local_1109[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_263(iParam0, 5, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_263(iParam0, 3, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_109(*iParam0, Local_1109[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_263(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar9);
					}
					else
					{
						func_263(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar9);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_263(iParam0, 5, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_263(iParam0, 5, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_263(iParam0, 3, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !unk_0x1B79E937E91F40C3(&(iParam0->f_9), "STEALING_VAN")) && !unk_0x1B79E937E91F40C3(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0x1B79E937E91F40C3(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_263(iParam0, 3, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case joaat("gunshot"):
				if (iParam0->f_5 != 4)
				{
					func_263(iParam0, 5, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_263(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_263(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_263(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_263(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_263(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_282(iParam0, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 0, bVar9);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_285(iParam0, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), Local_44[func_103() /*8*/], 1, 0, bVar9);
				}
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x1B79E937E91F40C3(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	iVar10 = 0;
	while (iVar10 < Local_26.f_0)
	{
		if (Local_26[iVar10 /*110*/] == *iParam0)
		{
			iVar11 = iVar10;
		}
		iVar10++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
			{
				case joaat("gunshot"):
				case 1921975061:
				case 880647822:
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
					if ((func_295(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_182(Local_27.f_0))
					{
						if ((unk_0x70E57E9927B6BA58(&(iParam0->f_9)) == joaat("gunshot") || unk_0x70E57E9927B6BA58(&(iParam0->f_9)) == 1921975061) || unk_0x70E57E9927B6BA58(&(iParam0->f_9)) == 880647822)
						{
							if (func_272(iVar11))
							{
								Var12 = { func_294(iVar11, "JS_GUN1") };
								if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_293(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_293(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_ARM2", 24);
										break;
								}
								if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_293(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_293(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0x70E57E9927B6BA58(&(iParam0->f_9)) == joaat("killed") || unk_0x70E57E9927B6BA58(&(iParam0->f_9)) == 1518302817) || unk_0x70E57E9927B6BA58(&(iParam0->f_9)) == -1298712083)
						{
							if (func_272(iVar11))
							{
								Var12 = { func_294(iVar11, "JS_KILL") };
								if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_293(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_293(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_293(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_GETSEC") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_293(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SECIN2", 24);
									break;
							}
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_293(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_286(*iParam0, 4))
					{
						func_263(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0x1DD05E817C89C737() - iParam0->f_37) > 1000)
					{
						func_263(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_286(*iParam0, 4))
					{
						func_263(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0x1DD05E817C89C737() - iParam0->f_37) > 15000 || (unk_0x1DD05E817C89C737() - iParam0->f_38) > 3000) && !unk_0x6B919BD9340E189A(*iParam0))
					{
						func_263(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_295(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_HND1") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_HND1") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar11)
			{
				case 1:
					if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 5000)
					{
						switch (iLocal_1308)
						{
							case 0:
								func_269(iVar11, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 1:
								func_269(iVar11, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 2:
								func_269(iVar11, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 3:
								func_269(iVar11, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 4:
								func_269(iVar11, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 5:
								func_269(iVar11, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 6:
								func_269(iVar11, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 7:
								func_269(iVar11, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 8:
								func_269(iVar11, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 9:
								func_269(iVar11, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308++;
								break;
							
							case 10:
								func_269(iVar11, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1308 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_269(iVar11, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_45(&uLocal_1115, 4, Local_26[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_45(&uLocal_1115, 3, Local_26[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (unk_0x1B79E937E91F40C3(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0x1B79E937E91F40C3(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var16 = { func_292(unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 0f, 1f, 0f) - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) };
				Var17 = { func_292(unk_0xD1A6A821F5AC81DB(Local_26[iVar11 /*110*/], 1) - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) };
				uVar14 = func_291(Var16, Var17);
				fVar15 = unk_0x42CDD13001C98400(uVar14);
				if ((fVar15 < 90f && fVar1 < 8f) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) < 1f)
				{
					bVar13 = true;
				}
			}
			switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_295(*iParam0) && unk_0x1B79E937E91F40C3(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_VAN_LVE1") };
							func_269(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar13)
					{
						func_285(iParam0, 1, "CHECK_DRIVER", Local_44[func_103() /*8*/], 0, 1, 0);
					}
					else if (func_109(unk_0x4A8C381C258A124D(), Local_56, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_263(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_295(*iParam0))
					{
						Var12 = { func_294(iVar11, "JS_VAN_LVE2") };
						func_269(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0x1DD05E817C89C737() - iParam0->f_37) > 3000)
					{
						func_263(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar13)
					{
						if ((unk_0x1DD05E817C89C737() - iParam0->f_37) > 2000 && !unk_0x6B919BD9340E189A(*iParam0))
						{
							func_263(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_285(iParam0, 1, "SEE_VAN_LEAVING_1", Local_44[func_103() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x1DD05E817C89C737() - iParam0->f_37) > 4000 && func_109(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x6CDEFB59235A1FD9(*iParam0))
					{
						func_263(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_295(*iParam0))
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_SND_INV") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0x1DD05E817C89C737() - iParam0->f_37) > 4000 && !unk_0x6B919BD9340E189A(*iParam0))
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_SNDLOST2") };
							func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_263(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_295(*iParam0))
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_SNDLOST1") };
							func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0x1DD05E817C89C737() - iParam0->f_38) > 8000 && func_109(unk_0x4A8C381C258A124D(), Local_56, 1) > 65f) && (func_108(unk_0x4A8C381C258A124D(), *iParam0, 1) > 10f || (unk_0x1DD05E817C89C737() - iParam0->f_38) > 16000)) && !unk_0x6B919BD9340E189A(*iParam0))
					{
						func_263(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_295(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_272(iVar11))
							{
								Var12 = { func_294(iVar11, "JS_MELE_1") };
								if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_MELE_2") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0x1DD05E817C89C737() - iParam0->f_37) > 4000)
					{
						func_263(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_295(*iParam0))
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_MELE_ESC") };
							func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0x1DD05E817C89C737() - iParam0->f_37) > 2000 && iParam0->f_39) && !unk_0x6B919BD9340E189A(*iParam0)) && iLocal_1325 != 9) && iLocal_1325 != 10)
					{
						func_263(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_295(*iParam0))
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_VAN_IN2") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 2000)
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_VAN_TK") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_295(*iParam0))
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_VAN_IN1") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 2000)
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_VAN_TK") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_295(*iParam0))
					{
						if (func_272(iVar11))
						{
							Var12 = { func_294(iVar11, "JS_VAN_IN2") };
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_293(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0x1DD05E817C89C737() - iParam0->f_38) > 5000 && !unk_0x6B919BD9340E189A(*iParam0))
			{
				if (iVar11 == 1)
				{
					func_269(iVar11, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_1308 = 0;
				}
				func_263(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((unk_0x1DD05E817C89C737() - iParam0->f_38) > 1000 && !unk_0x6B919BD9340E189A(*iParam0))
					{
						if (((unk_0x1B79E937E91F40C3(&(iParam0->f_9), "ENT_FOOT") || unk_0x1B79E937E91F40C3(&(iParam0->f_9), "ENT_VEH")) || unk_0x1B79E937E91F40C3(&(iParam0->f_9), "WH_FOOT")) || unk_0x1B79E937E91F40C3(&(iParam0->f_9), "WH_VEH"))
						{
							Var18 = { iParam0->f_9 };
							StringConCat(&Var18, "_LEAVE", 32);
							func_263(iParam0, 2, 0, &Var18, 1, 0);
						}
					}
					if ((unk_0x1B79E937E91F40C3(&(iParam0->f_9), "WH_FOOT") || unk_0x1B79E937E91F40C3(&(iParam0->f_9), "WH_VEH")) || (unk_0x1B79E937E91F40C3(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x6B919BD9340E189A(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_1281 != -1) && (unk_0x1DD05E817C89C737() - iLocal_1281) > 7000) && (unk_0x1DD05E817C89C737() - iParam0->f_38) == 0)
						{
							func_263(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0x70E57E9927B6BA58(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_295(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_272(iVar11))
								{
									if (!iParam0->f_83)
									{
										Var12 = { func_294(iVar11, "JS_ENT_F1") };
										func_269(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var12 = { func_294(iVar11, "JS_ENT_F1_P") };
										func_269(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_272(iVar11))
							{
								if (!iParam0->f_83)
								{
									Var12 = { func_294(iVar11, "JS_ENT_F2") };
									func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var12 = { func_294(iVar11, "JS_ENT_F2_P") };
									func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 5000)
						{
							if (func_272(iVar11))
							{
								if (!iParam0->f_83)
								{
									Var12 = { func_294(iVar11, "JS_ENT_F") };
									func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var12 = { func_294(iVar11, "JS_ENT_F_P") };
									func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_295(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_ENT_V1") };
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (unk_0x1B79E937E91F40C3(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_ENT_V") };
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_272(iVar11))
							{
								Var12 = { func_294(iVar11, "JS_ENT_V3") };
								if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 5000)
						{
							if (func_272(iVar11))
							{
								Var12 = { func_294(iVar11, "JS_ENT_V3") };
								func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_295(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_WH1") };
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_WH2") };
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 5000)
							{
								if (func_272(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										Var12 = { func_294(iVar11, "JS_WH") };
									}
									else
									{
										Var12 = { func_294(iVar11, "JS_WH_F") };
									}
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_295(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_WH1") };
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_WH2") };
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 5000)
							{
								if (func_272(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_294(iVar11, "JS_ENT_V4") };
										}
										else
										{
											Var12 = { func_294(iVar11, "JS_ENT_V3") };
										}
									}
									else
									{
										Var12 = { func_294(iVar11, "JS_WH_F") };
									}
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_295(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_WH1") };
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_WH2") };
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 5000)
							{
								if (func_272(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_294(iVar11, "JS_ENT_V3") };
										}
										else
										{
											Var12 = { func_294(iVar11, "JS_WH") };
										}
									}
									else
									{
										Var12 = { func_294(iVar11, "JS_WH_F") };
									}
									if (func_269(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_293(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_293(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 1000)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_ENT_V4") };
									func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var12 = { func_294(iVar11, "JS_ENT_V4") };
							}
							else
							{
								Var12 = { func_294(iVar11, "JS_ENT_V3") };
							}
							func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 1000)
							{
								if (func_272(iVar11))
								{
									if (!iParam0->f_83)
									{
										Var12 = { func_294(iVar11, "JS_ENT_F3") };
										func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var12 = { func_294(iVar11, "JS_ENT_F3_P") };
										func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_48++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x1DD05E817C89C737() - iLocal_1281) > 1000)
							{
								if (func_272(iVar11))
								{
									Var12 = { func_294(iVar11, "JS_ENT_V5") };
									func_269(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_291(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_292(struct<3> Param0)
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

void func_293(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_26.f_0)
	{
		if (Local_26[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_50 = iVar1;
	StringCopy(&(iParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_50.f_17), sParam2, 24);
	iParam0->f_50.f_28 = iParam4;
	iParam0->f_50.f_26 = fParam3;
	iParam0->f_50.f_29 = iParam5;
	iParam0->f_50.f_30 = iParam7;
	iParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_266(&(iParam0->f_50), 0);
	}
}

struct<6> func_294(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_295(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_296(int iParam0)
{
	if (unk_0x7E54CB377175F94E(*iParam0, unk_0x4A8C381C258A124D()))
	{
		iParam0->f_40 = unk_0x1DD05E817C89C737();
		iParam0->f_39 = 1;
	}
	else if ((unk_0x1DD05E817C89C737() - iParam0->f_40) > 2000 || !unk_0x3644984C9D7B57EF(*iParam0, unk_0x4A8C381C258A124D(), 90f))
	{
		iParam0->f_40 = unk_0x1DD05E817C89C737();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_1322 = false;
	}
	if (bLocal_1322)
	{
		unk_0x0FB8E752BCC547A9(*iParam0, 188, 1);
	}
	if (!func_297())
	{
		iParam0->f_41 = unk_0xC1204DBD7B8A643E(unk_0x259BE71D8A81D4FA(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		}
	}
	else
	{
		iParam0->f_41 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_102 = 1;
			break;
		
		default:
			iParam0->f_102 = 0;
			break;
	}
}

int func_297()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xFC8BFE4B41177C22(Local_44[iVar0 /*8*/]) && unk_0xD9F5E1FEFD1329E4(Local_44[iVar0 /*8*/], 0))
		{
			if (unk_0xF1298707777A950B(Local_44[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_298()
{
	struct<3> Var0;
	var uVar1;
	
	unk_0x06CD913C241C765E("BUGSTAR", &iLocal_1282);
	unk_0xD414C47AFF81382A(3, joaat("player"), iLocal_1282);
	unk_0xD414C47AFF81382A(5, iLocal_1282, joaat("player"));
	unk_0xD414C47AFF81382A(1, joaat("COP"), iLocal_1282);
	unk_0xD414C47AFF81382A(1, iLocal_1282, joaat("COP"));
	unk_0xA63572E348CC4CFB(Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f), Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f), 0, 1);
	unk_0xC4BCE90F7242F354(Vector(7,27131f, -3092,467f, 138,4268f) - Vector(2,375f, 22,75f, 19,4375f), Vector(7,27131f, -3092,467f, 138,4268f) + Vector(2,375f, 22,75f, 19,4375f), 0);
	unk_0x2094BC4B6731BA68(138,43f, -3092,47f, 4,9f, 28,375f, 1, 0, 0, 0);
	if (func_196() || func_6(0))
	{
		iLocal_65 = 0;
		if (func_196())
		{
			if (Global_95690)
			{
				iLocal_65++;
			}
		}
		if (func_196())
		{
			func_250(iLocal_65, &Var0, &uVar1);
			func_304(Var0, uVar1, 1, 0);
		}
		bLocal_64 = true;
	}
	else
	{
		while (!func_191(1))
		{
			system::wait(0);
			func_303(&uLocal_68);
		}
	}
	func_302(&uLocal_68, "JHP1A", 0);
	func_245(&uLocal_68, "misslsdhsclipboard@base");
	func_245(&uLocal_68, "misslsdhsclipboard@idle_a");
	func_245(&uLocal_68, "misstrevor3");
	func_174(&uLocal_68, joaat("p_amb_clipboard_01"));
	func_244(&uLocal_68, iLocal_1284);
	func_246(&uLocal_68, &cLocal_57);
	unk_0xF75E68D9DCB8C80B(unk_0x259BE71D8A81D4FA(), 0,15f);
	func_300(87);
	func_45(&uLocal_1115, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
	func_45(&uLocal_1115, 3, 0, "LESTER", 0, 1);
	func_268(bLocal_1280);
	func_299();
	iLocal_1284 = unk_0x0556019E7EE8EC9A(Local_56, "po1_08_warehouseint1");
	unk_0x0C876A2D0F41B79C(&cLocal_47);
	iLocal_1330 = unk_0xA7B0B03284E7503C(713,7754f, -996,4443f, 22,3085f, 715,7624f, -991,7067f, 25,6214f, 0, 1, 1, 1, 1);
	while (!unk_0xDCB78A15E5F495DC(0))
	{
		system::wait(0);
	}
}

void func_299()
{
	Global_95691 = 1;
}

void func_300(int iParam0)
{
	Global_97368 = 0;
	switch (iParam0)
	{
		case 72:
			func_301(2);
			func_301(4);
			break;
		
		case 73:
			func_301(0);
			func_301(1);
			func_301(7);
			break;
		
		case 92:
			func_301(10);
			func_301(9);
			func_301(13);
			func_301(6);
			break;
		
		case 68:
			func_301(11);
			break;
		
		case 78:
			func_301(14);
			break;
		
		case 79:
			func_301(3);
			break;
		
		default:
			break;
	}
}

void func_301(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_97368, iParam0);
}

int func_302(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x1B79E937E91F40C3(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_1012 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			unk_0x4AB15E3851FF326B(sParam1, iParam2);
		}
		else
		{
			unk_0xF2CB0224D3BE0B42(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

void func_303(var uParam0)
{
	func_252(uParam0);
}

void func_304(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	if (func_196())
	{
		unk_0xAECC5FA98C879D67(0);
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 2);
		unk_0x98E393364463951A(1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		Global_101529 = { Param0 };
		Global_101532 = uParam1;
		Global_101528 = 1;
		if (iParam2 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 14);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 24);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 24);
		}
		func_195(1);
	}
}

void func_305(int iParam0)
{
	struct<3> Var0;
	char[] cVar1[8];
	
	if (iParam0 == 6)
	{
		func_317();
		func_8(0);
		unk_0x86A2BC11844DEEB3("JHP1A_FAIL");
		unk_0xBBC29EBE6E1A48FA();
	}
	else if (!bLocal_66)
	{
		bLocal_66 = true;
		iLocal_67 = iParam0;
		switch (iLocal_67)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (unk_0xD6F9DEE4765092A9(&cVar1))
		{
			func_315(&Var0);
		}
		else
		{
			func_306(&Var0, &cVar1);
		}
		unk_0x86A2BC11844DEEB3("JHP1A_FAIL");
	}
}

void func_306(char* sParam0, char* sParam1)
{
	func_314(sParam0, sParam1);
	func_307(0);
}

void func_307(int iParam0)
{
	int iVar0;
	
	if (Global_113969.f_9088 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_308(iVar0))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
		Global_101569 = iParam0;
	}
}

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_313();
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x97915D82C999021F(5000);
	}
	iVar0 = Global_92265[iParam0 /*5*/];
	iVar1 = Global_79660.f_109[iVar0 /*4*/];
	func_312(iVar1, 1);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_309(&(Global_113969.f_2366.f_539), iVar1);
	if (Global_95688 == Global_101570)
	{
		Global_113969.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92301[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x40AC02FA167D4D0A(0);
		}
	}
	Global_113969.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_95688 = Global_101570;
	if (iParam0 == -1)
	{
		if (Global_113969.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_309(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113969.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113969.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_311(Global_113969.f_18536[iVar0], &Var2, &fVar3))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_310(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98903[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_9 = 0f;
				Global_98903[iVar0 /*29*/].f_12 = 0f;
				Global_98903[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_10 = 0f;
				Global_98903[iVar0 /*29*/].f_13 = 0f;
				Global_98903[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_11 = 0f;
				Global_98903[iVar0 /*29*/].f_14 = 0f;
				Global_98903[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_26 = 0f;
				Global_98903[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_27 = 0f;
				Global_98903[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_310(var uParam0)
{
	*uParam0 = -15;
}

int func_311(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_311(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_311(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_312(int iParam0, bool bParam1)
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

void func_313()
{
	Global_101568 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_168())
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
			switch (func_168())
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

void func_314(char* sParam0, char* sParam1)
{
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		if (unk_0x09112CCF7824FE38(sParam0) <= 16)
		{
			if (unk_0x09112CCF7824FE38(sParam1) <= 16)
			{
				StringCopy(&Global_79622, sParam0, 16);
				StringCopy(&Global_79626, sParam1, 16);
			}
		}
	}
}

void func_315(char* sParam0)
{
	func_316(sParam0);
	func_307(0);
}

void func_316(char* sParam0)
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

void func_317()
{
	int iVar0;
	
	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113969.f_9088 || func_6(0))
	{
		if (!func_318())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_308(iVar0))
				{
					return;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_313();
		}
	}
}

int func_318()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

