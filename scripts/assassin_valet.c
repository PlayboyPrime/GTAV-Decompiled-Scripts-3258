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
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<39> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_54 = 0;
	var uLocal_55 = 16;
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
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	float fLocal_228 = 0f;
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
	var uLocal_239 = 21;
	var uLocal_240 = 6;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 1132396544;
	var uLocal_247 = 1132396544;
	var uLocal_248 = 1132396544;
	var uLocal_249 = 0;
	var uLocal_250 = -1082130432;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 8;
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
	var uLocal_310 = -1;
	var uLocal_311 = 1092616192;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	bool bLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	struct<7> Local_318 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	int iLocal_323 = 0;
	float fLocal_324 = 0f;
	float fLocal_325 = 0f;
	float fLocal_326 = 0f;
	bool bLocal_327 = 0;
	bool bLocal_328 = 0;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
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
	var uLocal_372 = 3;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 1;
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
	var uLocal_393 = 2;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 13;
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
	var uLocal_411 = 13;
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
	var uLocal_620 = 13;
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
	var uLocal_829 = 13;
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
	var uLocal_843 = 13;
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
	var uLocal_857 = 13;
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
	var uLocal_871 = 13;
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
	struct<55> Local_921 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935[3] = { 0, 0, 0 };
	int iLocal_936[2] = { 0, 0 };
	int iLocal_937 = 0;
	int iLocal_938[2] = { 0, 0 };
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942[2] = { 0, 0 };
	var uLocal_943[3] = { 0, 0, 0 };
	var uLocal_944[2] = { 0, 0 };
	int iLocal_945 = 0;
	int iLocal_946 = 0;
	int iLocal_947 = 0;
	struct<8> Local_948[3];
	struct<8> Local_949[2];
	struct<8> Local_950[2];
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953[3] = { 0, 0, 0 };
	var uLocal_954[2] = { 0, 0 };
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	int iLocal_958 = 0;
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	int iLocal_961 = 0;
	bool bLocal_962 = 0;
	int iLocal_963 = 0;
	bool bLocal_964 = 0;
	int iLocal_965 = 0;
	bool bLocal_966 = 0;
	bool bLocal_967 = 0;
	bool bLocal_968 = 0;
	bool bLocal_969 = 0;
	int iLocal_970 = 0;
	bool bLocal_971 = 0;
	bool bLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	bool bLocal_976 = 0;
	bool bLocal_977 = 0;
	bool bLocal_978 = 0;
	bool bLocal_979 = 0;
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	bool bLocal_982 = 0;
	int iLocal_983 = 0;
	bool bLocal_984 = 0;
	int iLocal_985 = 0;
	bool bLocal_986 = 0;
	int iLocal_987 = 0;
	bool bLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	bool bLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	bool bLocal_994 = 0;
	int iLocal_995 = 0;
	bool bLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	bool bLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	bool bLocal_1008 = 0;
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	bool bLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	bool bLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	var uLocal_1023[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1024 = 0;
	var uLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	var uLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	int iLocal_1038 = 0;
	int iLocal_1039 = 0;
	float fLocal_1040 = 0f;
	float fLocal_1041 = 0f;
	float fLocal_1042 = 0f;
	float fLocal_1043[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_1044[5] = { 0, 0, 0, 0, 0 };
	float fLocal_1045 = 0f;
	float fLocal_1046 = 0f;
	float fLocal_1047[3] = { 0f, 0f, 0f };
	var uLocal_1048[3] = { 0, 0, 0 };
	float fLocal_1049 = 0f;
	float fLocal_1050 = 0f;
	float fLocal_1051 = 0f;
	int iLocal_1052 = 0;
	float fLocal_1053 = 0f;
	struct<3> Local_1054[3];
	struct<3> Local_1055[3];
	struct<3> Local_1056[5];
	struct<3> Local_1057 = { 0, 0, 0 } ;
	struct<3> Local_1058 = { 0, 0, 0 } ;
	struct<3> Local_1059 = { 0, 0, 0 } ;
	struct<3> Local_1060 = { 0, 0, 0 } ;
	struct<3> Local_1061 = { 0, 0, 0 } ;
	struct<3> Local_1062 = { 0, 0, 0 } ;
	struct<3> Local_1063 = { 0, 0, 0 } ;
	struct<3> Local_1064 = { 0, 0, 0 } ;
	struct<3> Local_1065 = { 0, 0, 0 } ;
	float fLocal_1066 = 0f;
	int iLocal_1067 = 0;
	int iLocal_1068 = 0;
	int iLocal_1069 = 0;
	int iLocal_1070 = 0;
	var uLocal_1071[2] = { 0, 0 };
	int iLocal_1072 = 0;
	int iLocal_1073[3] = { 0, 0, 0 };
	var uLocal_1074 = 0;
	int iLocal_1075 = 0;
	int iLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	int iLocal_1082 = 0;
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
	bool bLocal_1113 = 0;
	var uLocal_1114 = 16;
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
	var uLocal_1281 = -1;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 1000;
	var uLocal_1289 = 1000;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 8;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 4;
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
	var uLocal_1312 = 4;
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
	var uLocal_1327 = 4;
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
	var uLocal_1342 = 4;
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
	var uLocal_1357 = 4;
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
	var uLocal_1372 = 4;
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
	var uLocal_1387 = 4;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
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
	var uLocal_1402 = 4;
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
	struct<3> Local_1415 = { 0, 0, 0 } ;
	float fLocal_1416 = 0f;
	struct<3> Local_1417 = { 0, 0, 0 } ;
	float fLocal_1418 = 0f;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	struct<3> Local_1421 = { 0, 0, 0 } ;
	struct<3> Local_1422 = { 0, 0, 0 } ;
	struct<3> Local_1423 = { 0, 0, 0 } ;
	struct<3> Local_1424 = { 0, 0, 0 } ;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	int iLocal_1428 = 0;
	struct<12> Local_1429 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	Local_43 = { 500f, 500f, 500f };
	uLocal_50 = unk_0x8CC13B3BF7A9890A();
	uLocal_51 = unk_0x2A3612A4B836469E();
	iLocal_226 = -1;
	fLocal_228 = 1f;
	iLocal_335 = 100;
	iLocal_336 = 3;
	iLocal_933 = 3;
	iLocal_1032 = 37000;
	iLocal_1038 = -1;
	fLocal_1040 = 90000f;
	fLocal_1049 = 135f;
	fLocal_1051 = 0f;
	fLocal_1053 = 0f;
	Local_1060 = { -1162,985f, -161,715f, -38,221f };
	Local_1061 = { -1327,63f, -266,202f, 38,221f };
	Local_1062 = { -1236,661f, -197,316f, 39,6313f };
	Local_1063 = { -1266,027f, -218,9829f, 41,44594f };
	Local_1065 = { -1237,731f, -189,5452f, 40,63728f };
	fLocal_1066 = 40f;
	iLocal_1075 = joaat("a_m_y_beachvesp_02");
	iLocal_1076 = joaat("fbi2");
	iLocal_1077 = joaat("s_m_m_highsec_01");
	iLocal_1078 = joaat("s_m_m_highsec_02");
	iLocal_1079 = joaat("washington");
	Local_1415 = { -1263,677f, -222,2767f, 41,446f };
	fLocal_1416 = 304,201f;
	Local_1417 = { -1507,252f, -934,3307f, 8,6562f };
	fLocal_1418 = 137,9228f;
	Local_1421 = { -1510,733f, -935,96f, 10,90214f };
	Local_1422 = { 15,07491f, -0,024198f, -71,86189f };
	Local_1423 = { -1510,878f, -936,1155f, 9,798549f };
	Local_1424 = { 4,686822f, -0,024198f, -72,45972f };
	if (unk_0x96CFB880BAC634CE(3))
	{
		unk_0x86A2BC11844DEEB3("ASS1_FAIL");
		func_557(&(Global_113969.f_19966.f_1), 1024);
		func_555();
		func_550();
	}
	unk_0x925970A93719CADE(1);
	iLocal_940 = unk_0x4A8C381C258A124D();
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
	}
	if (func_549())
	{
		if (func_548())
		{
			iLocal_980 = 1;
		}
		bLocal_969 = true;
	}
	else
	{
		bLocal_969 = false;
	}
	func_547();
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	}
	func_546();
	iLocal_227 = 0;
	Local_53 = { func_544(iLocal_227) };
	unk_0xA1F44380A2D59F2B(iLocal_1077, 1);
	unk_0xA1F44380A2D59F2B(iLocal_1078, 1);
	unk_0x513E63C787EE96A7();
	if (func_549())
	{
		bLocal_328 = true;
		iLocal_1031 = func_543();
		if (Global_95690)
		{
			if (iLocal_1031 <= 1)
			{
				iLocal_1031++;
			}
		}
		func_542();
		if (iLocal_1031 == 0)
		{
			if (iLocal_980)
			{
				func_540();
				while (!func_539())
				{
					system::wait(0);
				}
				iVar0 = func_474(-1523,174f, -924,6732f, 9,1221f, 53,0177f);
				if (((!unk_0xEA4F815FDC353FEF(unk_0x4B423FAA24E8ABF0(iVar0)) && !unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iVar0))) && !unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar0))) && !unk_0x9E20DC08879FF3FC(iVar0))
				{
					unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
				}
				else
				{
					unk_0x8C1F7D7A31B2A38E(&iVar0);
				}
			}
			func_473(-1510,181f, -946,9595f, 8,2738f, 10f, 1, 0);
		}
		else if (iLocal_1031 == 1)
		{
			if (iLocal_980)
			{
				func_540();
				while (!func_539())
				{
					system::wait(0);
				}
				iVar1 = func_474(-1266,405f, -219,1991f, 41,4459f, 304,8644f);
				if (((!unk_0xEA4F815FDC353FEF(unk_0x4B423FAA24E8ABF0(iVar1)) && !unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iVar1))) && !unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar1))) && !unk_0x9E20DC08879FF3FC(iVar1))
				{
					unk_0x1DE99C193C7EC64B(iVar1, 1084227584);
				}
				else
				{
					unk_0x8C1F7D7A31B2A38E(&iVar1);
				}
			}
			func_473(-1266,173f, -214,0011f, 41,4459f, 310,0126f, 1, 0);
		}
		else if (iLocal_1031 == 2)
		{
			if (iLocal_980)
			{
				func_540();
				while (!func_539())
				{
					system::wait(0);
				}
				iVar2 = func_474(-1188,486f, -316,9884f, 36,6841f, 29,9702f);
				if (((!unk_0xEA4F815FDC353FEF(unk_0x4B423FAA24E8ABF0(iVar2)) && !unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iVar2))) && !unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar2))) && !unk_0x9E20DC08879FF3FC(iVar2))
				{
					unk_0x1DE99C193C7EC64B(iVar2, 1084227584);
				}
				else
				{
					unk_0x8C1F7D7A31B2A38E(&iVar2);
				}
			}
			func_473(-1184,244f, -319,2575f, 36,7445f, 26,0711f, 1, 0);
		}
	}
	while (true)
	{
		unk_0xECF30459397D5190("M_ASS1", 0);
		if (iLocal_970)
		{
			if (func_472())
			{
				func_471();
			}
		}
		else if (!unk_0x4FAFF4BCB7633475(iLocal_940))
		{
			func_464();
			if (iLocal_933 < 10)
			{
				Local_318.f_6 = 1;
			}
			else
			{
				Local_318.f_6 = 5;
			}
			func_154();
			func_102();
			if (iLocal_985)
			{
				func_97();
			}
			if (!bLocal_968)
			{
				if (iLocal_933 >= 9 && iLocal_933 < 11)
				{
					func_93(&uLocal_1025, &fLocal_1040, &bLocal_967, &bLocal_968);
				}
			}
			func_61();
			func_59();
			if (((iLocal_961 || bLocal_966) && iLocal_933 < 11) || (bLocal_996 && iLocal_933 < 11))
			{
				if (!func_58(&uLocal_1104) && iLocal_933 > 8)
				{
					func_55(&uLocal_1104);
				}
				else if (iLocal_933 < 8 || func_52(&uLocal_1104) > 5f)
				{
					if (iLocal_939 == 1)
					{
						func_37(1);
					}
					else if (iLocal_939 == 5)
					{
						func_37(5);
					}
					else
					{
						func_37(2);
					}
				}
				else if (func_52(&uLocal_1104) > 2,5f)
				{
					if (!iLocal_997)
					{
						if (!bLocal_1016)
						{
							iLocal_945 = func_36(70f, 0);
						}
						else
						{
							iLocal_945 = func_36(70f, 1);
						}
						if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_945))
							{
								unk_0x974022927CB47E68(iLocal_945);
								if (iLocal_939 == 1)
								{
									if (unk_0xFC8BFE4B41177C22(iLocal_1069))
									{
										if (!unk_0x7F420695E3F776FB(iLocal_945, 0))
										{
											unk_0x2433FB137DF847D2(iLocal_945, iLocal_1069, iLocal_1069, 2f, 0, 0,5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									if (unk_0xFC8BFE4B41177C22(iLocal_945) && !unk_0x4FAFF4BCB7633475(iLocal_945))
									{
										func_34(iLocal_945, 6, "OJAvaGUARD2");
										func_33(&uLocal_1114, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_939 == 8)
								{
									if (unk_0xFC8BFE4B41177C22(iLocal_1067) && unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
									{
										unk_0x2433FB137DF847D2(iLocal_945, iLocal_1067, iLocal_1067, 2f, 0, 0,5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									}
									func_34(func_31(25f), 6, "OJAvaGUARD2");
									func_33(&uLocal_1114, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									unk_0x646DE293036A3499(iLocal_945, unk_0x4A8C381C258A124D(), -1, 0);
									func_2(iLocal_945);
								}
							}
						}
						iLocal_997 = 1;
					}
				}
			}
			func_1();
		}
		system::wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(iLocal_940, 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(iLocal_940, 0);
		if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("towtruck") || unk_0x4B423FAA24E8ABF0(iVar0) == joaat("towtruck2"))
		{
			bLocal_971 = true;
		}
	}
	else
	{
		bLocal_971 = false;
	}
	if (bLocal_971)
	{
		if (unk_0x4A64AADF9B40D2AF(iVar0, iLocal_1067))
		{
			unk_0xD4BC322888F79B7E(iVar0, iLocal_1067);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1007)
	{
		if ((unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x4FAFF4BCB7633475(iParam0)) && func_29(iParam0, 1) < 50f)
		{
			if (!func_28())
			{
				if (iLocal_939 == 4)
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1114, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_939 == 8)
				{
					func_34(func_31(25f), 6, "OJAvaGUARD2");
					func_33(&uLocal_1114, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1114, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1007 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!unk_0x1B79E937E91F40C3(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_21152 = 0;
	func_4();
}

void func_4()
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

struct<6> func_5()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
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
					func_4();
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
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_25();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_13();
		func_8();
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
		func_4();
	}
	return 0;
}

void func_8()
{
	if (!func_9())
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

int func_9()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_12())
	{
		return 0;
	}
	if (func_10(unk_0x259BE71D8A81D4FA()))
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

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

var func_11(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_12()
{
	return -1;
}

void func_13()
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

void func_14()
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

int func_15()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
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

void func_17()
{
	if (func_24(14))
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
		Global_20930 = func_18();
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

int func_18()
{
	func_19();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_19()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_22(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_21(unk_0x4A8C381C258A124D());
			if (func_20(iVar0) && (!func_24(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_20(Global_113969.f_2366.f_539.f_4321))
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

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return func_23(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_23(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_24(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_25()
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

bool func_26(int iParam0, int iParam1)
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

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_28()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

float func_29(int iParam0, int iParam1)
{
	return func_30(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), iParam0, iParam1);
}

float func_30(int iParam0, int iParam1, int iParam2)
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

int func_31(float fParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_943[iVar0]))
		{
			if (func_32(uLocal_943[iVar0], Local_1059, 1) < fParam0)
			{
				return uLocal_943[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_944[iVar0]))
		{
			if (func_32(uLocal_944[iVar0], Local_1059, 1) < fParam0)
			{
				return uLocal_944[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_32(int iParam0, struct<3> Param1, int iParam2)
{
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), Param1, iParam2);
}

int func_33(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_7(sParam2, iParam4, 0);
}

void func_34(int iParam0, int iParam1, char* sParam2)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		func_35(&uLocal_1114, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_943[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x7F420695E3F776FB(uLocal_943[iVar0], 0)))
			{
				fVar1 = func_29(uLocal_943[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_943[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_944[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x7F420695E3F776FB(uLocal_944[iVar0], 0)))
			{
				fVar1 = func_29(uLocal_944[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_944[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_942[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x7F420695E3F776FB(uLocal_944[iVar0], 0)))
			{
				fVar1 = func_29(iLocal_942[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_942[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_37(int iParam0)
{
	char* sVar0;
	
	if (iLocal_970 == 0)
	{
		iLocal_939 = iParam0;
		func_3();
		unk_0x406CBCEA35499884();
		unk_0x86A2BC11844DEEB3("ASS1_FAIL");
		if (func_51())
		{
			func_49(-1698,51f, -1067,768f, 12,1417f, 316,3502f);
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			Global_101533.f_12[0] = 1;
		}
		else
		{
			Global_101533.f_12[0] = 0;
		}
		switch (iLocal_939)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_970 = 1;
		func_47(sVar0);
		func_38(0);
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	if (Global_113969.f_9088 || func_46(0))
	{
		iVar0 = func_45();
		if (!func_39(iVar0))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
		Global_101569 = iParam0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_44();
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x97915D82C999021F(5000);
	}
	iVar0 = Global_92265[iParam0 /*5*/];
	iVar1 = Global_79660.f_109[iVar0 /*4*/];
	func_43(iVar1, 1);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_40(&(Global_113969.f_2366.f_539), iVar1);
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

void func_40(var uParam0, int iParam1)
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
			if (!func_42(Global_113969.f_18536[iVar0], &Var2, &fVar3))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_41(&(uParam0->f_2296[iVar0]));
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

void func_41(var uParam0)
{
	*uParam0 = -15;
}

int func_42(int iParam0, var uParam1, float fParam2)
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
			return func_42(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_42(8, uParam1, fParam2);
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

void func_43(int iParam0, bool bParam1)
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

void func_44()
{
	Global_101568 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_18())
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
			switch (func_18())
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

int func_45()
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

int func_46(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_47(char* sParam0)
{
	func_557(&(Global_113969.f_19966.f_1), 1024);
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		func_48(sParam0);
	}
}

void func_48(char* sParam0)
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

void func_49(struct<3> Param0, float fParam1)
{
	if (func_50(Global_79630, 0f, 0f, 0f, 0))
	{
		Global_79630 = { Param0 };
		Global_79633 = fParam1;
	}
}

bool func_50(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_51()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
		{
			return 1;
		}
	}
	return 0;
}

float func_52(var uParam0)
{
	if (func_58(uParam0))
	{
		if (func_54(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_53(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_53(bool bParam0)
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

bool func_54(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_55(var uParam0)
{
	if (!func_58(uParam0))
	{
		func_56(uParam0);
	}
}

void func_56(var uParam0)
{
	func_57(uParam0, 0f);
}

void func_57(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_53(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, true);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_58(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_59()
{
	if (func_60(&iLocal_939))
	{
		func_37(6);
	}
}

int func_60(int iParam0)
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_933 > 11)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_941))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
			{
				if (unk_0xCECDBB848D53DEB2(iLocal_941, iLocal_1067, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_991)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_941))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_941))
			{
				if (func_30(iLocal_940, iLocal_941, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
						{
							if (unk_0xF6C26AE940C14749(iLocal_1067) || !unk_0xCB5CAFF0A4A8B74B(iLocal_1067))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (unk_0xF6C26AE940C14749(iLocal_941))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (unk_0xC450B06E5AAA0985(uLocal_952))
				{
					if (func_30(iLocal_940, iLocal_941, 1) >= (fVar0 * 0,5f))
					{
						if (!unk_0x4B889DE2DAC956DB(uLocal_952))
						{
							unk_0x861AC9C2D48CEA7F(uLocal_952, 1);
						}
					}
					else if (unk_0x4B889DE2DAC956DB(uLocal_952))
					{
						unk_0x861AC9C2D48CEA7F(uLocal_952, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_61()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_941))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_941))
		{
			func_62(&uLocal_1279, iLocal_941, 0, 0, 1, 1, 1);
		}
	}
}

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_63(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_63(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_64(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_64(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_92(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_65(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_65(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_91(iVar0))
	{
		func_90();
	}
	if (func_89(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
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
			if (func_84(uParam0, bParam5, bParam7, 0))
			{
				func_81(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam6)
						{
							if (!func_91(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_68(1);
								}
							}
						}
					}
				}
			}
			else if (func_70(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam6)
					{
						if (!func_91(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_68(1);
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
				if (func_91(sParam3))
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
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_92(uParam0, iVar0, 1);
				}
			}
			if (!func_84(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_67(uParam0))
				{
					func_66(uParam0);
				}
			}
		}
	}
	else
	{
		func_92(uParam0, iVar0, 0);
	}
}

void func_66(var uParam0)
{
	if (func_89(unk_0x4A8C381C258A124D()))
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

int func_67(var uParam0)
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

int func_68(bool bParam0)
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

void func_69(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_70(char* sParam0)
{
	if (!func_71(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_91(sParam0)) || func_91("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_68(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_68(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_68(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_71(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_80(0))
	{
		return 0;
	}
	if (func_79())
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
	if ((func_78() || func_77(Global_4718592.f_185586)) || func_76())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_75(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_74(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_72(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_73(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_73(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
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

int func_74(int iParam0, int iParam1)
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

int func_75(int iParam0, int iParam1)
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

var func_76()
{
	return Global_2684504.f_19;
}

bool func_77(int iParam0)
{
	return iParam0 == 51;
}

var func_78()
{
	return Global_2684504.f_18;
}

bool func_79()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_80(int iParam0)
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

void func_81(var uParam0, int iParam1, struct<3> Param2, int iParam3)
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
		func_92(uParam0, 0, 0);
	}
	if (func_50(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_82())
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

bool func_82()
{
	return func_83(unk_0x259BE71D8A81D4FA());
}

int func_83(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_67(uParam0))
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
						if (!func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_88(bParam1, bParam2, bParam3))
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
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_87(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
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
				else if (!func_88(bParam1, bParam2, bParam3))
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
						if (func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_85(bParam1, bParam2, bParam3))
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
					else if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_67(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_71(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_90();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_89(int iParam0)
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

void func_90()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

bool func_91(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_92(var uParam0, int iParam1, int iParam2)
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
		if (func_91(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_91(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_93(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = unk_0x1DD05E817C89C737();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_58(&uLocal_1101))
		{
			func_55(&uLocal_1101);
		}
		*bParam2 = 1;
	}
	if (func_58(&uLocal_1101))
	{
		fVar0 = func_52(&uLocal_1101);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1035 = system::round((*fParam1 - fVar0));
	iLocal_1035 *= 1000;
	if (iLocal_1035 < 63000)
	{
		iLocal_974 = 1;
	}
	if (iLocal_1035 < 65000)
	{
		iLocal_981 = 1;
	}
	if (iLocal_1035 < iLocal_1032)
	{
		iLocal_1004 = 1;
	}
	if (!unk_0xD7E1DF759CD0FFF2("SCRIPT\ASSASSINATION_MULTI", 0, -1))
	{
		bLocal_1113 = false;
	}
	else
	{
		bLocal_1113 = true;
	}
	if (iLocal_1035 < 30000)
	{
		iLocal_995 = 1;
		if (bLocal_1113)
		{
			if (func_58(&uLocal_1110))
			{
				if (func_52(&uLocal_1110) > 1f)
				{
					unk_0xBF3D28CA44F3BE2D(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_56(&uLocal_1110);
				}
			}
			else
			{
				unk_0xBF3D28CA44F3BE2D(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_55(&uLocal_1110);
			}
		}
		func_94(iLocal_1035, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_94(iLocal_1035, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_96(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_95(7, bVar0);
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

void func_95(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), bParam1);
}

int func_96(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

void func_97()
{
	int iVar0;
	
	switch (iLocal_1029)
	{
		case 0:
			if (!func_28())
			{
				if (!unk_0x1C2F771CDC87A3A5(uLocal_943[0], 0))
				{
					unk_0x84B06A81C98DA4B8(uLocal_943[0]);
				}
				if (!unk_0x1C2F771CDC87A3A5(uLocal_943[1], 0))
				{
					unk_0x84B06A81C98DA4B8(uLocal_943[1]);
				}
				iVar0 = func_101();
				if (bLocal_984)
				{
					if (!iLocal_1000)
					{
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1114, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_1000 = 1;
						}
					}
				}
				else if (!bLocal_991 && unk_0x4FAFF4BCB7633475(iLocal_941))
				{
					if (!iLocal_1000)
					{
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1114, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_1000 = 1;
						}
					}
				}
				if (!func_58(&uLocal_1089))
				{
					func_55(&uLocal_1089);
				}
				else
				{
					func_56(&uLocal_1089);
				}
				iLocal_1029 = 1;
			}
			break;
		
		case 1:
			iLocal_1029 = 2;
			break;
		
		case 2:
			if (iLocal_1000 || !unk_0x4FAFF4BCB7633475(iLocal_941))
			{
				if (!func_28() && !bLocal_984)
				{
					if (!iLocal_998)
					{
						iVar0 = func_101();
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1114, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_998 = 1;
						}
					}
					else if (!bLocal_1008 && unk_0x4FAFF4BCB7633475(iLocal_941))
					{
						iVar0 = func_101();
						func_100(iVar0);
					}
				}
			}
			else if (bLocal_984)
			{
				if (!iLocal_1000)
				{
					func_34(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1114, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_1000 = 1;
					}
				}
			}
			else if (!bLocal_991)
			{
				if (!iLocal_1000)
				{
					func_34(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1114, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_1000 = 1;
					}
				}
			}
			if (func_99(iLocal_940))
			{
				fLocal_1050 = 2,5f;
			}
			else
			{
				fLocal_1050 = 5f;
			}
			if (func_58(&uLocal_1089))
			{
				if ((func_52(&uLocal_1089) > fLocal_1050 && func_98()) || unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
				{
					func_3();
					if (!iLocal_961)
					{
						iLocal_961 = 1;
						iLocal_1005 = 1;
					}
					iLocal_985 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_98()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_943[iVar0]) && !unk_0x1C2F771CDC87A3A5(uLocal_943[iVar0], 0))
		{
			unk_0x0FB8E752BCC547A9(uLocal_943[iVar0], 85, 1);
			if (unk_0x7E54CB377175F94E(uLocal_943[iVar0], unk_0x4A8C381C258A124D()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_944[iVar0]) && !unk_0x1C2F771CDC87A3A5(uLocal_944[iVar0], 0))
		{
			unk_0x0FB8E752BCC547A9(uLocal_944[iVar0], 85, 1);
			if (unk_0x7E54CB377175F94E(uLocal_944[iVar0], unk_0x4A8C381C258A124D()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_942[iVar0]) && !unk_0x1C2F771CDC87A3A5(iLocal_942[iVar0], 0))
		{
			unk_0x0FB8E752BCC547A9(iLocal_942[iVar0], 85, 1);
			if (unk_0x7E54CB377175F94E(iLocal_942[iVar0], unk_0x4A8C381C258A124D()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_99(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x5105BE70DEF1F5FB(iParam0, -1252,302f, -213,9033f, 35,11222f, -1205,808f, -183,0681f, 45,32541f, 51f, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(iParam0, -1250,809f, -192,5218f, 35,33125f, -1231,866f, -161,3655f, 45,02535f, 12,8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_100(int iParam0)
{
	if (!bLocal_1008)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_941) && unk_0x4FAFF4BCB7633475(iLocal_941))
		{
			if (!func_28())
			{
				if ((unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x4FAFF4BCB7633475(iParam0)) && func_29(iParam0, 1) < 75f)
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1114, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1008 = true;
				}
			}
		}
	}
}

int func_101()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_943[iVar1]) && !unk_0x4FAFF4BCB7633475(uLocal_943[iVar1]))
		{
			iVar0 = uLocal_943[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0xFC8BFE4B41177C22(uLocal_944[iVar1]) && !unk_0x4FAFF4BCB7633475(uLocal_944[iVar1]))
			{
				iVar0 = uLocal_944[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_942[iVar1]) && !unk_0x4FAFF4BCB7633475(iLocal_942[iVar1]))
			{
				iVar0 = iLocal_942[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_102()
{
	func_109();
	if (!iLocal_985)
	{
		if (!iLocal_961)
		{
			if (func_103(&iLocal_939))
			{
				iLocal_961 = 1;
			}
		}
	}
}

int func_103(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_961)
	{
		if (iLocal_995 && !bLocal_964)
		{
			if (func_108(&iLocal_939))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (unk_0x11552FA9DCB8E126(iLocal_940, 4))
		{
			if (unk_0x65F146FF416F109F(iLocal_940))
			{
				fVar1 = func_32(unk_0x4A8C381C258A124D(), -1230,599f, -196,5408f, 38,1528f, 1);
				unk_0x23B29877D0BE9547(iLocal_940, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_941))
					{
						iLocal_985 = 1;
						iLocal_983 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_107(iLocal_1067) || func_106(iLocal_1067)) || (unk_0xFC8BFE4B41177C22(iLocal_1067) && unk_0x9B3D4335E0EDB0BE(iLocal_1067, iLocal_940, 1)))
		{
			return 1;
		}
		if (func_107(iLocal_1068) || (unk_0xFC8BFE4B41177C22(iLocal_1068) && unk_0x9B3D4335E0EDB0BE(iLocal_1068, iLocal_940, 1)))
		{
			return 1;
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_1067) && !unk_0x1C2F771CDC87A3A5(iLocal_1067, 0))
		{
			if (unk_0xCECDBB848D53DEB2(iLocal_940, iLocal_1067, 0))
			{
				unk_0xD45558BDBDE86734(iLocal_1067, 1);
				unk_0x495F6DB2481DBAEE(iLocal_1067);
				return 1;
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_1067))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
			{
				if (unk_0x7F420695E3F776FB(iLocal_940, 0))
				{
					iVar0 = unk_0x6EF03BE64E058E2F(iLocal_940, 0);
					if (unk_0x685171EED42BC4DF(iVar0, iLocal_1067) || (bLocal_971 && unk_0x4A64AADF9B40D2AF(iVar0, iLocal_1067)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_933 == 12)
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
			{
				if (func_30(iLocal_940, iLocal_1067, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_935[0] == 2 || iLocal_935[1] == 2) || iLocal_935[2] == 2)
		{
			if (func_105())
			{
				return 1;
			}
		}
		if (iLocal_933 < 11)
		{
			if (unk_0x8764A5B95AE1F967(-1, Local_1065, fLocal_1066))
			{
				return 1;
			}
		}
		else if (unk_0x8764A5B95AE1F967(-1, Local_1065, fLocal_1066))
		{
			if (func_104())
			{
				iLocal_1015 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104()
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1272,181f, -241,2545f, 62,90406f, -1300,203f, -201,3968f, 40,40408f, 44,5f, 0, 0, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1270,125f, -253,9321f, 62,90407f, -1311,414f, -193,6588f, 38,23291f, 44,5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	int iVar0;
	
	if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (unk_0x1C751EF63BF4D501(unk_0x259BE71D8A81D4FA()))
			{
				if ((unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()) && unk_0x6D05C5731A838CB3(0, 24)) || (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0x6D05C5731A838CB3(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_106(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x38A100E16C95161B(iParam0) == 3 && unk_0x31945A289F1359A1(iLocal_940) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_107(int iParam0)
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
						if (func_30(unk_0x4A8C381C258A124D(), iParam0, 1) < 40f)
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

int func_108(int iParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
	{
		if (unk_0x43F53DDC37E17FE9(unk_0x4A8C381C258A124D(), iLocal_1067, joaat("weapon_stickybomb"), -1))
		{
			if (unk_0x9F8FB43463B75A3D(-1223,024f, -187,3076f, 39,02538f, -1220,311f, -186,2481f, 40,42538f, 6,5f, joaat("weapon_stickybomb"), 0) || unk_0x9F8FB43463B75A3D(-1223,024f, -187,3076f, 38,02538f, -1220,311f, -186,2481f, 40,42538f, 4,5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_109()
{
	int iVar0;
	
	func_150();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_943[iVar0]))
		{
			if (iLocal_961 && !bLocal_994)
			{
				func_149(uLocal_943[iVar0], &(Local_948[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_944[iVar0]))
		{
			if (iLocal_961 && !bLocal_994)
			{
				func_149(uLocal_944[iVar0], &(Local_949[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_942[iVar0]))
		{
			if (iLocal_961 && !bLocal_994)
			{
				func_149(iLocal_942[iVar0], &(Local_950[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_942[iVar0]))
			{
				if (iLocal_938[iVar0] == 4)
				{
					unk_0x0FB8E752BCC547A9(iLocal_942[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1026 == 0)
	{
		func_147(0);
	}
	else if (iLocal_1026 == 1)
	{
		func_147(1);
	}
	else if (iLocal_1026 == 2)
	{
		if (iLocal_933 >= 9)
		{
			func_136(0);
		}
	}
	else if (iLocal_1026 == 3)
	{
		if (iLocal_933 >= 9)
		{
			func_136(1);
		}
	}
	else if (iLocal_1026 == 4)
	{
		if (iLocal_933 >= 9)
		{
			func_136(2);
			func_135(-1222,558f, -173,7471f, 38,32541f, -1220,101f, -169,0531f, 42,07541f, 4f);
		}
	}
	else if (iLocal_1026 == 5)
	{
		func_110(0);
		func_135(-1213,432f, -191,3261f, 38,32541f, -1208,553f, -193,8618f, 42,07534f, 4f);
	}
	else if (iLocal_1026 == 6)
	{
		func_110(1);
		func_135(-1219,14f, -202,3124f, 38,32534f, -1214,269f, -204,9035f, 42,07534f, 4f);
	}
	iLocal_1026++;
	if (iLocal_1026 > 6)
	{
		iLocal_1026 = 0;
	}
	if (iLocal_961)
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
		{
			unk_0x0FB8E752BCC547A9(iLocal_941, 120, 1);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	iVar0 = uLocal_944[iParam0];
	switch (iLocal_936[iParam0])
	{
		case 0:
			if (iLocal_974)
			{
				iLocal_936[iParam0] = 1;
			}
			else if (bLocal_972)
			{
				iLocal_936[iParam0] = 3;
			}
			break;
		
		case 1:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1068, 0))
			{
				if (func_134())
				{
					if (!unk_0x8DC9348C726B1575(iLocal_1068))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iLocal_1068, -1, 0) == uLocal_944[iParam0])
						{
							unk_0x43E9B2BD3668B432(uLocal_944[iParam0], iLocal_1068, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_936[iParam0] = 2;
				}
				else
				{
					func_133(iParam0);
				}
			}
			break;
		
		case 2:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1068, 0))
			{
				if (!unk_0x8DC9348C726B1575(iLocal_1068))
				{
					Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_1068, 1) };
					uVar2 = unk_0xCFC0C995455A6204(iLocal_1068);
					iLocal_974 = 0;
					iLocal_936[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1068, 0))
			{
				if (!unk_0x1C2F771CDC87A3A5(uLocal_944[iParam0], 0))
				{
					if (unk_0xCECDBB848D53DEB2(uLocal_944[iParam0], iLocal_1068, 0) && unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
					{
						if (!iLocal_961)
						{
							if (unk_0xFD5C5BBD1FE92BB7(iLocal_1068, -1, 0) == uLocal_944[iParam0])
							{
								if (unk_0x9B5C1660CCDF7189(uLocal_944[iParam0], joaat("script_task_vehicle_mission")) != 1)
								{
									unk_0x6AA87C4ADF4A6BFF(uLocal_944[iParam0], iLocal_1068, iLocal_1067, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (unk_0xFD5C5BBD1FE92BB7(iLocal_1068, -1, 0) == uLocal_944[iParam0])
						{
							if (!iLocal_975)
							{
								if (unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
								{
									if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										unk_0x62A5310368A20EFA(iVar0, unk_0x4A8C381C258A124D(), 0, 16);
									}
									else
									{
										iLocal_936[iParam0] = 8;
									}
								}
								else
								{
									unk_0x6AA87C4ADF4A6BFF(uLocal_944[iParam0], iLocal_1068, iLocal_1067, -1, 45f, 786981, 10f, -1, 10f);
									unk_0xF63C3F5B1BFD9CE4(iVar0, unk_0x4A8C381C258A124D());
									iLocal_975 = 1;
								}
							}
						}
						else if (!bLocal_991)
						{
							if (unk_0x9B5C1660CCDF7189(uLocal_944[iParam0], joaat("script_task_combat")) != 1)
							{
								if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
								{
									if (unk_0xDF93B3CFAC96698F(iLocal_1068) < 5f)
									{
										iLocal_936[iParam0] = 8;
									}
								}
								unk_0x62A5310368A20EFA(iVar0, unk_0x4A8C381C258A124D(), 0, 16);
							}
						}
						else if (unk_0x9B5C1660CCDF7189(uLocal_944[iParam0], joaat("script_task_combat")) != 1)
						{
							unk_0x62A5310368A20EFA(iVar0, unk_0x4A8C381C258A124D(), 0, 16);
						}
					}
					else if (!iLocal_985)
					{
						iLocal_936[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_58(&uLocal_1083))
			{
				func_56(&uLocal_1083);
			}
			func_130(&(uLocal_944[iParam0]));
			iLocal_936[iParam0] = 5;
			break;
		
		case 5:
			if (!func_99(iLocal_940))
			{
				if (func_52(&uLocal_1083) >= 27f || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (!unk_0x4FAFF4BCB7633475(iVar0))
					{
						if (unk_0xFAA48325A90263BE(iLocal_940, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_129(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_133(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_936[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_986)
			{
				unk_0xB5396F1FB088FE38(&uLocal_1074);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0xE237FA90A8AFEE59(0, func_128(), unk_0xC5935DFB3F39785A(1000, 1500), 2048, 4);
				unk_0xE237FA90A8AFEE59(0, func_128(), unk_0xC5935DFB3F39785A(2000, 2500), 2048, 4);
				unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), unk_0xC5935DFB3F39785A(10000, 11000), 30f, 1f, 1073741824, 0);
				unk_0x2868A36BD27FD939(0, unk_0x4A8C381C258A124D(), func_128(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x93C0674FC00824D0(uLocal_1074);
				if (!unk_0x4FAFF4BCB7633475(uLocal_944[iParam0]))
				{
					unk_0x4BD42B0527065BB6(uLocal_944[iParam0], uLocal_1074);
				}
				unk_0xD0557B139A542F12(&uLocal_1074);
			}
			else
			{
				unk_0xB5396F1FB088FE38(&uLocal_1074);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0xC86A930D894F8CE2(0, func_128(), unk_0xC5935DFB3F39785A(3000, 3500), 1, 0);
				unk_0xC86A930D894F8CE2(0, func_128(), unk_0xC5935DFB3F39785A(3000, 3500), 0, 0);
				unk_0xC86A930D894F8CE2(0, func_128(), unk_0xC5935DFB3F39785A(3000, 3500), 0, 0);
				unk_0xC86A930D894F8CE2(0, func_128(), unk_0xC5935DFB3F39785A(3000, 3500), 0, 0);
				unk_0xC86A930D894F8CE2(0, func_128(), -1, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_1074);
				if (!unk_0x4FAFF4BCB7633475(uLocal_944[iParam0]))
				{
					unk_0x4BD42B0527065BB6(uLocal_944[iParam0], uLocal_1074);
				}
				unk_0xD0557B139A542F12(&uLocal_1074);
			}
			iLocal_936[iParam0] = 7;
			break;
		
		case 7:
			if (!unk_0x4FAFF4BCB7633475(uLocal_944[iParam0]))
			{
				if (unk_0x9B5C1660CCDF7189(uLocal_944[iParam0], joaat("script_task_any")) != 1)
				{
					unk_0x2433FB137DF847D2(uLocal_944[iParam0], iLocal_940, iLocal_940, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 8:
			if (iLocal_939 != 4 && iLocal_939 != 5)
			{
				func_127(iVar0);
			}
			else
			{
				func_126(iVar0);
			}
			iLocal_936[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_939 != 4)
				{
					func_125(iLocal_1068, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_100(iVar0);
			break;
	}
	if (!iLocal_961)
	{
		if (iLocal_985)
		{
			if (iLocal_936[iParam0] != 6 && iLocal_936[iParam0] != 7)
			{
				iLocal_936[iParam0] = 6;
			}
		}
		else if (func_118(iVar0, iLocal_1068, &Local_318, &iLocal_323, 0, 0, 0, 1, 1) || func_117(iLocal_1068))
		{
			iVar3 = func_36(1116471296, 1);
			if (iVar3 != 0)
			{
				func_116(unk_0xD1A6A821F5AC81DB(iVar3, 1), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_961 = 1;
			}
		}
		else if (!bLocal_964)
		{
			if (func_114(iVar0, 10f))
			{
				if (iLocal_936[iParam0] != 4 && iLocal_936[iParam0] != 5)
				{
					if (!bLocal_962)
					{
						func_112(&Local_318, 4);
						iLocal_936[iParam0] = 4;
					}
					else if (!func_99(iLocal_940))
					{
						iLocal_961 = 1;
						if (!unk_0xFC8BFE4B41177C22(iLocal_941))
						{
							iLocal_939 = 5;
						}
						iLocal_936[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(iVar0))
	{
		if (unk_0xCECDBB848D53DEB2(iVar0, iLocal_1068, 0))
		{
			if (((!unk_0xD9F5E1FEFD1329E4(iLocal_1068, 0) || !unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0)) || iLocal_973) || !bLocal_964)
			{
				if (iLocal_936[iParam0] < 8)
				{
					iLocal_936[iParam0] = 8;
				}
			}
		}
		else if (iLocal_936[iParam0] < 8)
		{
			iLocal_936[iParam0] = 8;
		}
	}
	func_111(iVar0, uLocal_954[iParam0]);
}

void func_111(int iParam0, var uParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (unk_0xC450B06E5AAA0985(uParam1))
			{
				unk_0xFE54B8568B2ABD12(&uParam1);
			}
		}
	}
}

void func_112(var uParam0, int iParam1)
{
	func_113(uParam0, iParam1);
}

void func_113(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_114(int iParam0, float fParam1)
{
	if (!iLocal_961)
	{
		if (!func_99(iLocal_940))
		{
			if (unk_0xFC8BFE4B41177C22(iParam0))
			{
				if (!unk_0x4FAFF4BCB7633475(iParam0))
				{
					if (func_29(iParam0, 0) <= fParam1)
					{
						if (unk_0x3644984C9D7B57EF(iParam0, iLocal_940, 120f))
						{
							if (unk_0xAD915B5E38F323E5(iParam0, iLocal_940, 17))
							{
								if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1251,791f, -147,043f, 42,679f, -1197,245f, -212,232f, 50,679f, 35f, 1, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1259,282f, -204,172f, -60,654f, -1304,335f, -235,719f, 60,654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xFC8BFE4B41177C22(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(iParam0))
			{
				if (unk_0xFAA48325A90263BE(iLocal_940, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (unk_0x3644984C9D7B57EF(iParam0, iLocal_940, 120f))
					{
						if (unk_0xAD915B5E38F323E5(iParam0, iLocal_940, 17))
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

int func_115()
{
	if (iLocal_985 || bLocal_986)
	{
		return 1;
	}
	return 0;
}

void func_116(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xFC8BFE4B41177C22(iLocal_941))
	{
		return;
	}
	if (!unk_0xFC8BFE4B41177C22(iLocal_1067))
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(iLocal_1067, 0) || iLocal_1015)
	{
		bLocal_984 = true;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_941))
	{
		if (((unk_0x1AC621DBDFE4ECA0(iLocal_941, joaat("weapon_sniperrifle"), 0) || unk_0x1AC621DBDFE4ECA0(iLocal_941, joaat("weapon_heavysniper"), 0)) || unk_0x1AC621DBDFE4ECA0(iLocal_941, joaat("weapon_remotesniper"), 0)) || unk_0x1AC621DBDFE4ECA0(iLocal_941, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_983 = 1;
			iLocal_934 = 1;
		}
	}
	if (iLocal_323 == 4 || iLocal_323 == 8)
	{
		if (!unk_0x8DC9348C726B1575(iLocal_1067))
		{
			fParam1 = (fParam1 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_961)
	{
		if ((iLocal_983 || bLocal_984) || iVar0)
		{
			fVar1 = func_32(unk_0x4A8C381C258A124D(), Param0, 1);
			if (fVar1 > fParam1)
			{
				iLocal_985 = 1;
				if (fVar1 > fParam2)
				{
					bLocal_986 = true;
				}
			}
		}
	}
}

int func_117(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					if (unk_0xFC8BFE4B41177C22(iVar0) && unk_0xD9F5E1FEFD1329E4(iVar0, 0))
					{
						fVar1 = unk_0xDF93B3CFAC96698F(iVar0);
						if (fVar1 > 7f)
						{
							if (unk_0x685171EED42BC4DF(iVar0, iParam0) || unk_0x9B3D4335E0EDB0BE(iVar0, iParam0, 1))
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

int func_118(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (!func_124(*uParam2, 1))
		{
			if (func_123(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_124(*uParam2, 2))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_124(*uParam2, 4))
		{
			if (func_122(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_124(*uParam2, 8))
		{
			if (func_121(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_124(*uParam2, 128);
		if (bParam4)
		{
			if (func_119(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_124(*uParam2, 16))
		{
			if (func_119(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_314)
		{
			iLocal_315 = unk_0x8D91ADE44AC79BC9(iParam0);
			bLocal_314 = true;
		}
		iLocal_316 = unk_0x8D91ADE44AC79BC9(iParam0);
		iLocal_317 = (iLocal_315 - iLocal_316);
		iVar0 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_317) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_314)
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
			{
				if (IntToFloat(iLocal_317) > 100f)
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
	if (func_120(unk_0x4A8C381C258A124D(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8BF5256C439DF778(iParam0) && func_29(iParam0, 1) < 1,5f)
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

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0, int iParam1, var uParam2)
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

int func_122(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0x74CD4FE549433E92(iParam0) || func_107(iVar1))
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

int func_123(int iParam0, var uParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (unk_0x3644984C9D7B57EF(iParam0, unk_0x4A8C381C258A124D(), 90f))
				{
					if (func_29(iParam0, 1) < uParam1->f_2)
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

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_125(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x4FAFF4BCB7633475(iParam1))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (func_30(iParam1, iParam0, 0) > fParam2 && func_29(iParam1, 1) < fParam3)
				{
					if (!unk_0xCECDBB848D53DEB2(iParam1, iParam0, 0))
					{
						if (unk_0x9B5C1660CCDF7189(iParam1, joaat("script_task_enter_vehicle")) != 1)
						{
							unk_0xEBA229B2E0BB05E0(iParam1, iParam0, 20000, -1, 2f, 1, 0, 0);
						}
					}
					else if (unk_0x9B5C1660CCDF7189(iParam1, joaat("script_task_vehicle_mission")) != 1)
					{
						unk_0xB3DA477F44309390(iParam1, iParam0, unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 6, 35f, 786469, -1f, -1f, 1);
						unk_0xF63C3F5B1BFD9CE4(iParam1, unk_0x4A8C381C258A124D());
					}
				}
				else if (!unk_0xCECDBB848D53DEB2(iParam1, iParam0, 0))
				{
					if (unk_0x9B5C1660CCDF7189(iParam1, joaat("script_task_combat")) != 1)
					{
						unk_0x62A5310368A20EFA(iParam1, unk_0x4A8C381C258A124D(), 0, 16);
					}
				}
			}
			else if (unk_0xCECDBB848D53DEB2(iParam1, iParam0, 0))
			{
				if (func_29(iParam1, 1) > fParam4)
				{
					if (unk_0x9B5C1660CCDF7189(iParam1, joaat("script_task_vehicle_mission")) != 1)
					{
						unk_0x13DE13EA38996410(iParam1, iParam0, unk_0x4A8C381C258A124D(), 6, 35f, 786469, -1f, -1f, 1);
						unk_0xF63C3F5B1BFD9CE4(iParam1, unk_0x4A8C381C258A124D());
					}
				}
				else if (unk_0x9B5C1660CCDF7189(iParam1, joaat("script_task_combat")) != 1)
				{
					unk_0x62A5310368A20EFA(iParam1, unk_0x4A8C381C258A124D(), 0, 16);
				}
			}
		}
		else if (unk_0x9B5C1660CCDF7189(iParam1, joaat("script_task_combat")) != 1)
		{
			unk_0x62A5310368A20EFA(iParam1, unk_0x4A8C381C258A124D(), 0, 16);
		}
	}
}

void func_126(int iParam0)
{
	var uVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iLocal_940) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			unk_0xBE8796DB2B90A437(iParam0, 3, 1);
		}
		unk_0xD0557B139A542F12(&uVar0);
		unk_0xB5396F1FB088FE38(&uVar0);
		unk_0x092B9247AF00F5CF(0, 0, 256);
		unk_0x646DE293036A3499(0, iLocal_940, -1, 0);
		unk_0x93C0674FC00824D0(uVar0);
		unk_0x4BD42B0527065BB6(iParam0, uVar0);
		unk_0xD0557B139A542F12(&uVar0);
	}
}

void func_127(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iLocal_940, 0))
	{
		if (!unk_0x7F420695E3F776FB(iLocal_940, 0))
		{
			if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
			{
				unk_0xBE8796DB2B90A437(iParam0, 3, 1);
			}
			unk_0xD0557B139A542F12(&uLocal_1074);
			unk_0xB5396F1FB088FE38(&uLocal_1074);
			unk_0x092B9247AF00F5CF(0, 0, 256);
			unk_0x62A5310368A20EFA(0, iLocal_940, 0, 16);
			unk_0x93C0674FC00824D0(uLocal_1074);
			if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
			{
				unk_0x4BD42B0527065BB6(iParam0, uLocal_1074);
			}
			unk_0xD0557B139A542F12(&uLocal_1074);
		}
		else if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_combat")) != 1)
			{
				unk_0x974022927CB47E68(iParam0);
				unk_0x62A5310368A20EFA(iParam0, iLocal_940, 0, 16);
			}
		}
	}
}

Vector3 func_128()
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = (unk_0xC5935DFB3F39785A(0, 65535) % 3);
	switch (iVar1)
	{
		case 0:
			Var0 = { -1270,206f, -200,3586f, 40,8333f };
			break;
		
		case 1:
			Var0 = { -1268,439f, -215,9683f, 59,654f };
			break;
		
		case 2:
			Var0 = { -1241,558f, -239,3237f, 38,7884f };
			break;
	}
	return Var0;
}

void func_129(int iParam0, struct<3> Param1)
{
	if (!iLocal_961)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (unk_0xFAA48325A90263BE(iLocal_940, iParam0, Param1, 0, 1, 0))
			{
				if (unk_0x3644984C9D7B57EF(iParam0, iLocal_940, 160f))
				{
					if (unk_0xAD915B5E38F323E5(iParam0, iLocal_940, 17))
					{
						unk_0x2433FB137DF847D2(iParam0, iLocal_940, iLocal_940, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_939 = 5;
						iLocal_961 = 1;
					}
				}
			}
			else if (!unk_0x7F420695E3F776FB(iParam0, 0))
			{
				if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1)
				{
					unk_0x2433FB137DF847D2(iParam0, iLocal_940, iLocal_940, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_130(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (iLocal_945 == 0)
	{
		iLocal_945 = func_36(70f, 0);
	}
	if (!unk_0x4FAFF4BCB7633475(*iParam0))
	{
		if (!unk_0x7F420695E3F776FB(*iParam0, 0))
		{
			if (!iLocal_963)
			{
				if (*iParam0 == iLocal_945)
				{
					unk_0xD0557B139A542F12(&uVar0);
					unk_0xB5396F1FB088FE38(&uVar0);
					unk_0xAB3658A740EED98E(0, iLocal_940, 20000, 2f, 1f, 1073741824, 0);
					unk_0x0E95B96CFEFE7B61(0, iLocal_940, -1);
					unk_0x93C0674FC00824D0(uVar0);
					unk_0x4BD42B0527065BB6(*iParam0, uVar0);
					unk_0xD0557B139A542F12(&uVar0);
					iLocal_963 = 1;
					Var1 = { unk_0xD1A6A821F5AC81DB(*iParam0, 1) };
				}
				else if (unk_0x9B5C1660CCDF7189(*iParam0, joaat("script_task_go_to_entity")) != 1)
				{
					unk_0x0E95B96CFEFE7B61(*iParam0, iLocal_940, -1);
				}
			}
			else if (*iParam0 != iLocal_945)
			{
				if (unk_0x9B5C1660CCDF7189(*iParam0, joaat("script_task_go_to_entity")) != 1)
				{
					unk_0x0E95B96CFEFE7B61(*iParam0, iLocal_940, -1);
				}
			}
		}
		unk_0x3F58BFCF656F0DF1(*iParam0, 1);
		func_131();
	}
}

void func_131()
{
	int iVar0;
	
	if (!iLocal_965)
	{
		if (!bLocal_976)
		{
			if (!func_28())
			{
				iVar0 = func_36(1116471296, 1);
				func_34(iVar0, 3, "OJAvaGUARD");
				if (func_132())
				{
					func_6(&uLocal_1114, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_965 = 1;
				}
				else
				{
					func_33(&uLocal_1114, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_965 = 1;
				}
			}
		}
	}
}

int func_132()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		if (!unk_0x1C2F771CDC87A3A5(iLocal_1067, 0))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_1067, 1) };
		}
		fVar2 = system::vdist2(Var0, Var1);
		if (fVar2 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_133(int iParam0)
{
	int iVar0;
	
	bLocal_962 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!unk_0x1C2F771CDC87A3A5(uLocal_944[iParam0], 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_1068, 0))
		{
			if (!unk_0xCECDBB848D53DEB2(uLocal_944[iParam0], iLocal_1068, 0))
			{
				if (unk_0x9B5C1660CCDF7189(uLocal_944[iParam0], joaat("script_task_enter_vehicle")) != 1)
				{
					unk_0xEBA229B2E0BB05E0(uLocal_944[iParam0], iLocal_1068, 20000, iVar0, 2f, 1, 0, 0);
				}
			}
		}
	}
}

int func_134()
{
	if (!unk_0x4FAFF4BCB7633475(uLocal_944[0]) && !unk_0x4FAFF4BCB7633475(uLocal_944[1]))
	{
		if (unk_0xCECDBB848D53DEB2(uLocal_944[0], iLocal_1068, 0) && unk_0xCECDBB848D53DEB2(uLocal_944[1], iLocal_1068, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_135(struct<3> Param0, struct<3> Param1, float fParam2)
{
	if (!iLocal_961)
	{
		if (unk_0x9F8FB43463B75A3D(Param0, Param1, fParam2, joaat("weapon_stickybomb"), 0))
		{
			iLocal_961 = 1;
		}
	}
}

void func_136(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = uLocal_943[iParam0];
	switch (iLocal_935[iParam0])
	{
		case 0:
			if (!unk_0x4FAFF4BCB7633475(iVar0))
			{
				unk_0xD0557B139A542F12(&uLocal_1074);
				unk_0xB5396F1FB088FE38(&uLocal_1074);
				unk_0x30FAA55EAF29F9BE(0, Local_1056[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				unk_0x2280392018BC0DD3(0, fLocal_1043[iParam0], 0);
				unk_0x93C0674FC00824D0(uLocal_1074);
				unk_0x4BD42B0527065BB6(iVar0, uLocal_1074);
				unk_0xD0557B139A542F12(&uLocal_1074);
				iLocal_935[iParam0] = 1;
			}
			break;
		
		case 1:
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
				{
					if (!bLocal_996)
					{
						if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_play_anim")) != 1 && unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_perform_sequence")) != 1)
						{
							if (unk_0x65FFA94B82A71741(iVar0, Local_1056[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_144(iVar0, &(uLocal_1023[iParam0]), 1);
							}
							else
							{
								iLocal_935[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_58(&uLocal_1083))
			{
				func_56(&uLocal_1083);
				func_130(&iVar0);
				iLocal_935[iParam0] = 2;
			}
			else if (func_52(&uLocal_1083) > uLocal_1044[iParam0] || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				func_130(&iVar0);
				iLocal_935[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_99(iLocal_940))
			{
				iLocal_989 = 1;
				if (bLocal_988)
				{
					iLocal_935[iParam0] = 4;
					break;
				}
				else if (func_52(&uLocal_1083) >= 27f && iLocal_965)
				{
					func_129(iVar0, 15f, 15f, 3f);
				}
				else if (func_52(&uLocal_1083) >= 15f)
				{
					func_142(iVar0);
				}
			}
			else
			{
				iLocal_989 = 0;
				bLocal_962 = true;
				if (!bLocal_982)
				{
					iLocal_935[iParam0] = 0;
				}
				else
				{
					iLocal_935[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!unk_0x4FAFF4BCB7633475(iVar0))
			{
				unk_0x3F58BFCF656F0DF1(iVar0, 1);
				unk_0x0FB8E752BCC547A9(iVar0, 60, 1);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iVar0))
				{
					if (iParam0 == 0)
					{
						unk_0xE67051907958B5EB(uLocal_943[0], uLocal_943[1], -1, 0, 2);
						if (!unk_0xCECDBB848D53DEB2(iVar0, iLocal_1067, 0))
						{
							unk_0xEBA229B2E0BB05E0(iVar0, iLocal_1067, 30000, -1, 1f, 1, 0, 0);
						}
					}
					else if (iParam0 == 1)
					{
						unk_0xE67051907958B5EB(uLocal_943[1], uLocal_943[0], -1, 0, 2);
						if (!unk_0xCECDBB848D53DEB2(iVar0, iLocal_1067, 0))
						{
							unk_0xEBA229B2E0BB05E0(iVar0, iLocal_1067, 30000, 0, 1f, 1, 0, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_1068, 0))
						{
							if (!unk_0xCECDBB848D53DEB2(iVar0, iLocal_1068, 0))
							{
								unk_0xEBA229B2E0BB05E0(iVar0, iLocal_1068, 30000, 1, 1f, 1, 0, 0);
							}
						}
					}
				}
				iLocal_935[iParam0] = 5;
			}
			else
			{
				iLocal_935[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!unk_0x4FAFF4BCB7633475(iVar0))
			{
				unk_0x0FB8E752BCC547A9(iVar0, 60, 1);
			}
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_look_at_entity")) != 1)
				{
					if (iParam0 == 0)
					{
						unk_0xE67051907958B5EB(uLocal_943[iParam0], uLocal_943[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						unk_0xE67051907958B5EB(uLocal_943[iParam0], uLocal_943[0], -1, 2048, 4);
					}
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
			{
				if (!func_140())
				{
					if (iLocal_961)
					{
						if (!unk_0x4FAFF4BCB7633475(iVar0))
						{
							if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_combat")) != 1)
							{
								if (func_139(uLocal_943[0]))
								{
									unk_0x84B06A81C98DA4B8(uLocal_943[0]);
								}
								if (func_139(uLocal_943[1]))
								{
									unk_0x84B06A81C98DA4B8(uLocal_943[1]);
								}
								unk_0x62A5310368A20EFA(iVar0, iLocal_940, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_935[iParam0] = 6;
				}
			}
			else
			{
				iLocal_935[iParam0] = 10;
			}
			if (bLocal_977)
			{
				if (iLocal_935[iParam0] != 10 && iLocal_935[iParam0] != 11)
				{
					iLocal_935[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_961)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
				{
					if (unk_0xFD5C5BBD1FE92BB7(iLocal_1067, -1, 0) == iVar0)
					{
						if (!unk_0x4FAFF4BCB7633475(iVar0))
						{
							unk_0xC229299217554C78(iLocal_1067, 1, 1, 0);
							if (func_138())
							{
								unk_0x43E9B2BD3668B432(iVar0, iLocal_1067, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								unk_0x43E9B2BD3668B432(iVar0, iLocal_1067, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_935[iParam0] = 7;
				}
			}
			else
			{
				if (func_139(uLocal_943[0]))
				{
					unk_0x84B06A81C98DA4B8(uLocal_943[0]);
				}
				if (func_139(uLocal_943[1]))
				{
					unk_0x84B06A81C98DA4B8(uLocal_943[1]);
				}
				iLocal_935[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_961)
			{
				if ((unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0) && unk_0xFD5C5BBD1FE92BB7(iLocal_1067, -1, 0) == iVar0) && unk_0xFD5C5BBD1FE92BB7(iLocal_1067, 1, 0) == iLocal_941)
				{
					if (!unk_0x4FAFF4BCB7633475(iVar0))
					{
						if (bLocal_976 || (iLocal_990 && !unk_0x8DC9348C726B1575(iLocal_1067)))
						{
							unk_0x974022927CB47E68(iVar0);
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
								{
									if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_vehicle_mission")) != 1)
									{
										unk_0xB3DA477F44309390(iVar0, iLocal_1067, unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_vehicle_mission")) != 1)
								{
									unk_0x13DE13EA38996410(iVar0, iLocal_1067, unk_0x4A8C381C258A124D(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!unk_0x4FAFF4BCB7633475(iVar0))
				{
					if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_combat")) != 1)
					{
						unk_0x62A5310368A20EFA(iVar0, iLocal_940, 0, 16);
					}
				}
			}
			else if (bLocal_976 || (iLocal_990 && !unk_0x8DC9348C726B1575(iLocal_1067)))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
				{
					if (unk_0xFD5C5BBD1FE92BB7(iLocal_1067, -1, 0) == iVar0)
					{
						if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
						{
							if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_vehicle_mission")) != 1)
							{
								unk_0x30CCF17FEE4BDA53(iVar0, iLocal_1067, Local_1059, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_986)
			{
				unk_0xB5396F1FB088FE38(&uLocal_1074);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0xE237FA90A8AFEE59(0, func_128(), unk_0xC5935DFB3F39785A(1000, 1500), 2048, 4);
				unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), unk_0xC5935DFB3F39785A(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x2868A36BD27FD939(0, unk_0x4A8C381C258A124D(), func_128(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x93C0674FC00824D0(uLocal_1074);
				if (!unk_0x1C2F771CDC87A3A5(uLocal_943[iParam0], 0))
				{
					unk_0x4BD42B0527065BB6(uLocal_943[iParam0], uLocal_1074);
				}
				unk_0xD0557B139A542F12(&uLocal_1074);
			}
			else
			{
				unk_0xB5396F1FB088FE38(&uLocal_1074);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0xC86A930D894F8CE2(0, func_128(), unk_0xC5935DFB3F39785A(3000, 3500), 1, 0);
				unk_0x2868A36BD27FD939(0, unk_0x4A8C381C258A124D(), func_128(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x93C0674FC00824D0(uLocal_1074);
				if (!unk_0x1C2F771CDC87A3A5(uLocal_943[iParam0], 0))
				{
					unk_0x4BD42B0527065BB6(uLocal_943[iParam0], uLocal_1074);
				}
				unk_0xD0557B139A542F12(&uLocal_1074);
			}
			iLocal_935[iParam0] = 9;
			break;
		
		case 9:
			if (!unk_0x4FAFF4BCB7633475(uLocal_943[iParam0]))
			{
				if (unk_0x9B5C1660CCDF7189(uLocal_943[iParam0], joaat("script_task_any")) != 1)
				{
					unk_0x2433FB137DF847D2(uLocal_943[iParam0], iLocal_940, iLocal_940, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 10:
			if (iLocal_939 == 4 || iLocal_939 == 5)
			{
				func_126(iVar0);
			}
			else if (iLocal_939 != 8)
			{
				func_127(iVar0);
				iLocal_935[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_125(iLocal_1067, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_100(iVar0);
			break;
	}
	if (iLocal_933 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1046;
	}
	if (!iLocal_961)
	{
		if (iLocal_985)
		{
			if (iLocal_935[iParam0] != 8 && iLocal_935[iParam0] != 9)
			{
				iLocal_935[iParam0] = 8;
			}
		}
		else if (func_137(iVar0))
		{
			iVar2 = func_36(1116471296, 1);
			if (iVar2 != 0)
			{
				func_116(unk_0xD1A6A821F5AC81DB(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_961 = 1;
			}
		}
		else if (!bLocal_964)
		{
			if (func_114(iVar0, fVar1))
			{
				if ((iLocal_935[iParam0] != 3 && iLocal_935[iParam0] != 2) && !bLocal_988)
				{
					if (!bLocal_962)
					{
						func_112(&Local_318, 4);
						iLocal_935[iParam0] = 3;
					}
					else if (!func_99(iLocal_940))
					{
						iLocal_961 = 1;
						if (!unk_0xFC8BFE4B41177C22(iLocal_941))
						{
							iLocal_939 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_935[iParam0] != 10 && iLocal_935[iParam0] != 11) && iLocal_935[iParam0] != 7)
	{
		iLocal_935[iParam0] = 10;
	}
	func_111(iVar0, uLocal_953[iParam0]);
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (!iLocal_961)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(iParam0))
			{
				if (unk_0x7F420695E3F776FB(iParam0, 0))
				{
					iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_118(iParam0, iVar0, &Local_318, &iLocal_323, 0, 0, 0, 1, 1) || (unk_0x8BF5256C439DF778(iParam0) && func_29(iParam0, 1) < 1,5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_138()
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1034 = unk_0xD65B4E942A960E26(unk_0x4A8C381C258A124D(), &iVar1);
	uLocal_1034 = uLocal_1034;
	uLocal_1034 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xFC8BFE4B41177C22(iVar1[iVar0]) && !unk_0x1C2F771CDC87A3A5(iVar1[iVar0], 0))
		{
			if (unk_0x5105BE70DEF1F5FB(iVar1[iVar0], -1218,844f, -278,623f, 36,8196f, -1248,403f, -225,8467f, 43,15606f, 8,5f, 0, 1, 0))
			{
				iLocal_1033++;
			}
		}
		iVar0++;
	}
	if (iLocal_1033 >= 1)
	{
		iLocal_990 = 1;
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_140()
{
	if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_941))
		{
			if (!iLocal_961)
			{
				if (unk_0xCECDBB848D53DEB2(iLocal_941, iLocal_1067, 0) && func_141())
				{
					return 1;
				}
			}
			else if (unk_0xCECDBB848D53DEB2(iLocal_941, iLocal_1067, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_942[iVar0]))
		{
			if (!unk_0x7F420695E3F776FB(iLocal_942[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_142(int iParam0)
{
	switch (iLocal_1030)
	{
		case 0:
			if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
			{
				if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_aim_gun_at_entity")) != 1)
				{
					unk_0x646DE293036A3499(iParam0, unk_0x4A8C381C258A124D(), -1, 0);
				}
				func_34(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1114, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_965 = 1;
				iLocal_1030 = 1;
			}
			break;
		
		case 1:
			func_143(iParam0);
			break;
	}
}

void func_143(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (func_29(iParam0, 1) < 5f)
		{
			if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1 && unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_aim_gun_at_entity")) != 1)
			{
				unk_0x646DE293036A3499(iParam0, iLocal_940, -1, 0);
			}
		}
		else if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1)
		{
			if (iParam0 == iLocal_945)
			{
				unk_0x2433FB137DF847D2(iParam0, iLocal_940, iLocal_940, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_aim_gun_at_entity")) != 1)
			{
				unk_0x646DE293036A3499(iParam0, iLocal_940, -1, 0);
			}
		}
	}
}

void func_144(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (bParam2)
		{
			func_145(iParam0, uParam1);
		}
	}
}

void func_145(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_146(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		unk_0x10425721983AE158(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, unk_0xD2AA6F822D3A55D2(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		unk_0x10425721983AE158(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, unk_0xD2AA6F822D3A55D2(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		unk_0x10425721983AE158(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, unk_0xD2AA6F822D3A55D2(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		unk_0x10425721983AE158(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, unk_0xD2AA6F822D3A55D2(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = unk_0xC5935DFB3F39785A(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = unk_0xC5935DFB3F39785A(iParam0, iParam1);
	}
	return iVar0;
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (!unk_0xFC8BFE4B41177C22(iLocal_942[iParam0]))
	{
		return;
	}
	switch (iLocal_938[iParam0])
	{
		case 0:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
			{
				if (!unk_0x7F420695E3F776FB(iLocal_941, 0))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_942[iParam0]))
					{
						if (iParam0 == 0)
						{
							unk_0x329B82704ED2A3E3(iLocal_942[iParam0], iLocal_941, 1,5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_1068, 0))
							{
								unk_0xB5396F1FB088FE38(&uVar2);
								unk_0x30FAA55EAF29F9BE(0, -1222,992f, -191,0932f, 38,17538f, 1f, 0, 0, 786603, -1082130432);
								unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								unk_0xEBA229B2E0BB05E0(0, iLocal_1068, 30000, 2, 1f, 1, 0, 0);
								unk_0x93C0674FC00824D0(uVar2);
								unk_0x4BD42B0527065BB6(iLocal_942[iParam0], uVar2);
								unk_0xD0557B139A542F12(&uVar2);
							}
						}
						iLocal_938[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1067;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1068;
				iVar1 = 2;
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_942[iParam0], 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_942[iParam0], 0))
					{
						if (!unk_0xCECDBB848D53DEB2(iLocal_942[iParam0], iVar0, 0))
						{
							if (unk_0x7F420695E3F776FB(iLocal_941, 0))
							{
								if (unk_0x9B5C1660CCDF7189(iLocal_942[iParam0], joaat("script_task_enter_vehicle")) != 1)
								{
									unk_0xEBA229B2E0BB05E0(iLocal_942[iParam0], iVar0, 30000, iVar1, 1f, 1, 0, 0);
								}
							}
						}
						else
						{
							iLocal_938[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1067;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1068;
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_942[iParam0], 0))
				{
					if (unk_0xCECDBB848D53DEB2(iLocal_942[iParam0], iVar0, 0) && unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
					{
						if (iLocal_961)
						{
							if (!bLocal_991)
							{
								if (unk_0x9B5C1660CCDF7189(iLocal_942[iParam0], joaat("script_task_combat")) != 1)
								{
									if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										if (unk_0xDF93B3CFAC96698F(iVar0) < 5f)
										{
											iLocal_938[iParam0] = 5;
										}
									}
									unk_0x62A5310368A20EFA(iLocal_942[iParam0], unk_0x4A8C381C258A124D(), 0, 16);
								}
							}
							else if (unk_0x9B5C1660CCDF7189(iLocal_942[iParam0], joaat("script_task_combat")) != 1)
							{
								unk_0x62A5310368A20EFA(iLocal_942[iParam0], unk_0x4A8C381C258A124D(), 0, 16);
							}
						}
					}
					else if (!iLocal_985)
					{
						iLocal_938[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(iLocal_942[iParam0]))
			{
				if (unk_0x5110BDFA9CB51F2B(iLocal_942[iParam0]))
				{
					unk_0x895CE77855F9AFD2(iLocal_942[iParam0]);
				}
			}
			if (bLocal_986)
			{
				unk_0xB5396F1FB088FE38(&uLocal_1074);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0xE237FA90A8AFEE59(0, func_128(), unk_0xC5935DFB3F39785A(2000, 2500), 2048, 4);
				unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), unk_0xC5935DFB3F39785A(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x2868A36BD27FD939(0, unk_0x4A8C381C258A124D(), func_128(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x93C0674FC00824D0(uLocal_1074);
				unk_0x4BD42B0527065BB6(iLocal_942[iParam0], uLocal_1074);
				unk_0xD0557B139A542F12(&uLocal_1074);
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_942[iParam0]))
			{
				unk_0xBB4D4E549F8E6E8C(iLocal_942[iParam0], Local_1064, 15f, 0, 0);
				unk_0xD0764B65C2DFEDCA(iLocal_942[iParam0], 1);
				unk_0xBE8796DB2B90A437(iLocal_942[iParam0], 0, 1);
				unk_0x4190C67D524CD0DC(iLocal_942[iParam0], 2f);
				if (!iLocal_958 && !unk_0x7F420695E3F776FB(iLocal_942[iParam0], 0))
				{
					unk_0xB5396F1FB088FE38(&uLocal_1074);
					if (unk_0x4FAFF4BCB7633475(iLocal_941))
					{
						unk_0x10425721983AE158(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						unk_0xC86A930D894F8CE2(0, func_128(), 3000, 0, 1);
						unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), -1, 0);
					}
					else
					{
						unk_0x10425721983AE158(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						unk_0x329B82704ED2A3E3(0, iLocal_941, 1,5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					unk_0x93C0674FC00824D0(uLocal_1074);
					iLocal_958 = 1;
				}
				else
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_1067) && unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
					{
						Var4 = { unk_0x75DF72FC74EED046(iLocal_1067, unk_0x365DC1E8054AF31A(iLocal_1067, "wheel_lr")) };
						Var5 = { unk_0xD1A6A821F5AC81DB(iLocal_1067, 1) };
						Var5 = { Var4 - Var5 };
						unk_0x06AA75009161058B(iLocal_942[iParam0], iLocal_1067, Var5, 1,5f, 0);
					}
					unk_0xB5396F1FB088FE38(&uLocal_1074);
					unk_0x092B9247AF00F5CF(0, 0, 0);
					if (unk_0x4FAFF4BCB7633475(iLocal_941) && !func_50(func_148(), Var4, 0))
					{
						unk_0xB8551FB832F73124(0, Var4, func_128(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x994B4C04761C0AA0(0, Var4, -1, 0, 0,25f, 0, 0, 0, 1);
					}
					else
					{
						unk_0xC86A930D894F8CE2(0, func_128(), 1500, 1, 0);
						if (!unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
						{
							unk_0x329B82704ED2A3E3(0, iLocal_941, 0f, -1,5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					unk_0x93C0674FC00824D0(uLocal_1074);
				}
				if (!unk_0x1C2F771CDC87A3A5(iLocal_942[iParam0], 0))
				{
					unk_0x4BD42B0527065BB6(iLocal_942[iParam0], uLocal_1074);
				}
				unk_0xD0557B139A542F12(&uLocal_1074);
			}
			iLocal_938[iParam0] = 4;
			break;
		
		case 4:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_942[iParam0], 0))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_942[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = unk_0x82E64DE58A6B84A8(iLocal_942[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0,5f)
					{
						unk_0x458AA1A01F53901E(iLocal_942[iParam0], "oddjobs@assassinate@hotel@", "enter", 3,5f);
					}
					else
					{
						unk_0x458AA1A01F53901E(iLocal_942[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1067;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1068;
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_941))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_942[iParam0]))
				{
					if (unk_0x7F420695E3F776FB(iLocal_941, 0))
					{
						unk_0x62A5310368A20EFA(iLocal_942[iParam0], iLocal_940, 0, 16);
					}
					else
					{
						unk_0x2433FB137DF847D2(iLocal_942[iParam0], iLocal_941, unk_0x4A8C381C258A124D(), 3f, 1, 0,005f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
				iLocal_938[iParam0] = 6;
			}
			else if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0xDF93B3CFAC96698F(iVar0) < 5f)
				{
					func_127(iLocal_942[iParam0]);
					iLocal_938[iParam0] = 6;
				}
				else if (unk_0x9B5C1660CCDF7189(iLocal_942[iParam0], joaat("script_task_combat")) != 1)
				{
					unk_0x62A5310368A20EFA(iLocal_942[iParam0], iLocal_940, 0, 16);
				}
			}
			else
			{
				func_127(iLocal_942[iParam0]);
				iLocal_938[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_942[iParam0]);
			func_100(iLocal_942[iParam0]);
			break;
	}
	if (!iLocal_961)
	{
		if (iLocal_985)
		{
			if (iLocal_938[iParam0] != 3 && iLocal_938[iParam0] != 4)
			{
				iLocal_938[iParam0] = 3;
			}
		}
		else if (func_137(iLocal_942[iParam0]))
		{
			iLocal_961 = 1;
		}
	}
	else if (iLocal_938[iParam0] < 5)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_942[iParam0]))
		{
			if (unk_0x5110BDFA9CB51F2B(iLocal_942[iParam0]))
			{
				unk_0x895CE77855F9AFD2(iLocal_942[iParam0]);
			}
			unk_0x16C7AB5DAFB71459(iLocal_942[iParam0]);
			unk_0xD0764B65C2DFEDCA(iLocal_942[iParam0], 2);
			unk_0xBE8796DB2B90A437(iLocal_942[iParam0], 13, 1);
		}
		iLocal_938[iParam0] = 5;
	}
}

Vector3 func_148()
{
	struct<3> Var0;
	
	return Var0;
}

int func_149(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
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
				if (!unk_0xD6F9DEE4765092A9(sParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(sParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(sParam7);
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
					if (!unk_0xD6F9DEE4765092A9(sParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(sParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(sParam7);
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

void func_150()
{
	var uVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_941))
	{
		Local_1064 = { unk_0xD1A6A821F5AC81DB(iLocal_941, 0) };
	}
	switch (iLocal_937)
	{
		case 0:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0) && !unk_0x1C2F771CDC87A3A5(uLocal_943[0], 0))
				{
					if (!unk_0xCECDBB848D53DEB2(iLocal_941, iLocal_1067, 0))
					{
						if (unk_0x9B5C1660CCDF7189(iLocal_941, joaat("script_task_enter_vehicle")) != 1)
						{
							if (!iLocal_961 && !iLocal_985)
							{
								unk_0xEBA229B2E0BB05E0(iLocal_941, iLocal_1067, 30000, 1, 1f, 1, 0, 0);
							}
							else
							{
								unk_0xEBA229B2E0BB05E0(iLocal_941, iLocal_1067, 30000, 1, 2f, 1, 0, 0);
							}
							if (!func_58(&uLocal_1092))
							{
								func_55(&uLocal_1092);
							}
							else
							{
								func_56(&uLocal_1092);
							}
						}
						if (!iLocal_987)
						{
							if (func_58(&uLocal_1092))
							{
								if (func_52(&uLocal_1092) > 3,5f)
								{
									if (!unk_0x4FAFF4BCB7633475(iLocal_941))
									{
										func_35(&uLocal_1114, 4, iLocal_941, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1114, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_987 = 1;
										}
									}
								}
							}
						}
						if (func_153(iLocal_941))
						{
							func_3();
							iLocal_937 = 4;
						}
					}
					else
					{
						bLocal_964 = true;
						iLocal_937 = 1;
					}
				}
				else
				{
					iLocal_937 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_987)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_941))
				{
					func_35(&uLocal_1114, 4, iLocal_941, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1114, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_987 = 1;
					}
				}
			}
			if (!iLocal_1006)
			{
				if (func_152())
				{
					if (func_30(iLocal_941, unk_0x4A8C381C258A124D(), 1) <= 5f && !func_28())
					{
						if (func_36(25f, 1) == 0)
						{
							if (func_151())
							{
								iLocal_1006 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
			{
				if (unk_0xCECDBB848D53DEB2(iLocal_941, iLocal_1067, 0))
				{
					if (unk_0x9B5C1660CCDF7189(iLocal_941, joaat("script_task_leave_any_vehicle")) != 1)
					{
						unk_0x092B9247AF00F5CF(iLocal_941, 0, 256);
					}
				}
				else if (!bLocal_991)
				{
					unk_0x4190C67D524CD0DC(iLocal_941, 2f);
					unk_0xD0557B139A542F12(&uVar0);
					unk_0xB5396F1FB088FE38(&uVar0);
					unk_0x10425721983AE158(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0xD844F5E50DAB6FF7(0, iLocal_940, 200f, -1, 0, 0);
					unk_0x93C0674FC00824D0(uVar0);
					if (!unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
					{
						unk_0x4BD42B0527065BB6(iLocal_941, uVar0);
					}
					unk_0xD0557B139A542F12(&uVar0);
					bLocal_991 = true;
				}
				else if (unk_0x9B5C1660CCDF7189(iLocal_941, joaat("script_task_any")) != 1)
				{
					unk_0xD844F5E50DAB6FF7(iLocal_941, iLocal_940, 200f, -1, 0, 0);
				}
				if (!iLocal_1006)
				{
					if (!func_28() && !unk_0xFBA523E6F8ACE541())
					{
						func_6(&uLocal_1114, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1006 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_961)
	{
		if (iLocal_985)
		{
		}
		else if (func_137(iLocal_941) || iLocal_1015)
		{
			iVar1 = func_36(1116471296, 1);
			if (iVar1 != 0)
			{
				func_116(unk_0xD1A6A821F5AC81DB(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_961 = 1;
			}
		}
	}
}

int func_151()
{
	switch (iLocal_1036)
	{
		case 0:
			if (!func_28())
			{
				func_33(&uLocal_1114, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_56(&uLocal_1092);
				iLocal_1036++;
			}
			break;
		
		case 1:
			if (!func_28() && func_52(&uLocal_1092) > 7f)
			{
				func_33(&uLocal_1114, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_56(&uLocal_1092);
				iLocal_1036++;
			}
			break;
		
		case 2:
			if (!func_28() && func_52(&uLocal_1092) > 8f)
			{
				func_33(&uLocal_1114, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_152()
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iLocal_1067, -1, 0);
		if (iVar0 == 0 || (iVar0 != 0 && unk_0x4FAFF4BCB7633475(iVar0)))
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(iLocal_1067, 0, 0);
			if (iVar0 == 0 || (iVar0 != 0 && unk_0x4FAFF4BCB7633475(iVar0)))
			{
				iVar0 = unk_0xFD5C5BBD1FE92BB7(iLocal_1067, 2, 0);
				if (iVar0 == 0 || (iVar0 != 0 && unk_0x4FAFF4BCB7633475(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	var uVar0;
	
	if ((iLocal_961 || iLocal_985) || bLocal_986)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (func_28())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!unk_0x7F420695E3F776FB(iParam0, 0))
			{
				if (!bLocal_991)
				{
					unk_0xD0557B139A542F12(&uVar0);
					unk_0xB5396F1FB088FE38(&uVar0);
					unk_0x10425721983AE158(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0xD844F5E50DAB6FF7(0, iLocal_940, 200f, -1, 0, 0);
					unk_0x93C0674FC00824D0(uVar0);
					if (!unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
					{
						unk_0x4BD42B0527065BB6(iLocal_941, uVar0);
					}
					unk_0xD0557B139A542F12(&uVar0);
					bLocal_991 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_154()
{
	if (!iLocal_992)
	{
		if (iLocal_933 > 15)
		{
			unk_0x86A2BC11844DEEB3("ASS1_ALERT");
			iLocal_992 = 1;
		}
	}
	if (!iLocal_993)
	{
		if (iLocal_961 && !func_28())
		{
			func_463();
			iLocal_993 = 1;
			if (!iLocal_992)
			{
				unk_0x86A2BC11844DEEB3("ASS1_ALERT");
				iLocal_992 = 1;
			}
		}
	}
	func_462();
	switch (iLocal_933)
	{
		case 3:
			if (func_549())
			{
				iLocal_933 = 4;
				break;
			}
			func_461();
			func_459();
			break;
		
		case 4:
			if (func_549())
			{
				if (func_548())
				{
					iLocal_980 = 1;
				}
				bLocal_969 = true;
			}
			func_458();
			func_457();
			func_456();
			func_455(1);
			func_454();
			func_557(&Local_318, 2);
			iLocal_933 = 5;
			break;
		
		case 5:
			if (func_453())
			{
				iLocal_933 = 6;
			}
			break;
		
		case 6:
			func_452();
			func_451();
			if (bLocal_969)
			{
				if (Global_113969.f_19966.f_5 != 0f)
				{
					func_57(&uLocal_1086, Global_113969.f_19966.f_5);
				}
				iLocal_1031 = func_543();
				if (Global_95690)
				{
					if (iLocal_1031 <= 2)
					{
						iLocal_1031++;
					}
				}
				if (iLocal_1031 == 0)
				{
					func_450();
				}
				else if (iLocal_1031 == 1)
				{
					func_449();
				}
				else if (iLocal_1031 == 2)
				{
					func_445();
				}
			}
			else
			{
				if (!func_58(&uLocal_1086))
				{
					func_55(&uLocal_1086);
					Global_113969.f_19966.f_5 = 0f;
				}
				iLocal_933 = 7;
			}
			break;
		
		case 7:
			func_439();
			func_424();
			break;
		
		case 8:
			func_389();
			break;
		
		case 9:
			func_439();
			func_388();
			func_290();
			break;
		
		case 10:
			func_388();
			func_286();
			break;
		
		case 11:
			func_272();
			func_271();
			break;
		
		case 12:
			func_270();
			func_271();
			break;
		
		case 13:
			func_266();
			func_271();
			break;
		
		case 15:
			func_264();
			break;
		
		case 16:
			func_261();
			break;
		
		case 17:
			func_255();
			break;
		
		case 18:
			func_155();
			break;
	}
}

void func_155()
{
	unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
	func_156();
}

void func_156()
{
	func_254();
	switch (iLocal_1037)
	{
		case 0:
			if (!iLocal_329)
			{
				if (iLocal_934 == 1)
				{
					bLocal_327 = true;
					func_253();
				}
				Global_113969.f_19966.f_5 = func_52(&uLocal_1086);
				fLocal_324 = Global_113969.f_19966.f_5;
				func_246();
				iLocal_329 = 1;
				iLocal_1037 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1014)
			{
				unk_0xFAE22BD3C12AEFB4("FRANKLIN_BIG_01");
				iLocal_1014 = 1;
			}
			if (func_242(&uLocal_340, 1, 0) && unk_0x1FC87F78B679BE3D())
			{
				func_241(&uLocal_1291, 0, 0, 0, 1);
				func_240(&uLocal_1291, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_240(&uLocal_1291, "ES_XPAND", 2, 216, 1, 1, 0);
				system::settimera(0);
				iLocal_1037 = 2;
			}
			break;
		
		case 2:
			if (func_210(&uLocal_340, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1012 = true;
			}
			if (!bLocal_1012)
			{
				func_202(&uLocal_1291, 1128792064, 1, 0, 1, 1065353216);
			}
			if (unk_0x875A214D5EBCA509(2, 215) || unk_0xDEE3EFEA31A1F555(2, 200))
			{
				if (!bLocal_1012)
				{
					bLocal_1012 = true;
					func_201(&uLocal_340);
				}
			}
			if (bLocal_1012)
			{
				if (func_210(&uLocal_340, 0, 1065353216, 0, 0, 0))
				{
					func_199(&uLocal_340, 0);
					Global_113969.f_19966++;
					func_198();
					func_161(Local_53);
					func_159(0, 0);
					func_157();
					func_550();
				}
			}
			break;
	}
}

void func_157()
{
	func_158();
}

int func_158()
{
	if (func_46(0))
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

void func_159(bool bParam0, int iParam1)
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
		if ((func_46(0) && Global_79636.f_1 == 1) && func_160(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}
	if (Global_113969.f_9088 || func_46(0))
	{
		iVar0 = func_45();
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

int func_160(int iParam0)
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

void func_161(struct<25> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	float fVar0;
	
	fVar0 = (1f + func_197());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_124(Global_113969.f_19966.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_162(func_18(), 97, system::round(fVar0), 0, 0);
}

void func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_196(iParam0) == 3)
	{
		return;
	}
	if (func_196(iParam0) == 4)
	{
		return;
	}
	func_163(func_196(iParam0), 1, iParam1, iParam2, 0);
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

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_195();
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
					func_194(99, 1);
					func_193(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_193(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_193(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_178(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_175(5))
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
							func_193(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_193(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_193(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_175(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_193(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_193(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_193(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_193(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_193(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_193(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_193(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_193(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_193(joaat("sp2_money_spent_property"), iParam3);
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
									func_193(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_193(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_193(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_193(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_193(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_175(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_193(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_193(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_193(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_193(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_174(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_194(95, iParam3);
					break;
				
				case 1:
					func_194(97, iParam3);
					break;
				
				case 2:
					func_194(96, iParam3);
					break;
			}
			func_194(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_166(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_166(bVar1);
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
					func_193(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_193(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_193(joaat("sp2_total_cash_earned"), iParam3);
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
	func_165(iParam0);
	if (Global_44042 == 15)
	{
		func_164(0);
	}
	return 1;
}

void func_164(bool bParam0)
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

void func_165(int iParam0)
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

void func_166(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_173(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_173(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_173(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_173(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_169(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_169(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_169(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_169(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_169(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_169(8277, 0, -1, 1);
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
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_168() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113969.f_20567.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_168() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_167(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_167(bool bParam0)
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

int func_168()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_170(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_170(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_171(uParam1));
}

int func_171(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_172();
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

int func_172()
{
	return Global_1574926;
}

void func_173(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_172();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_174(int iParam0)
{
	func_194(93, iParam0);
	func_194(29, iParam0);
	func_194(30, iParam0);
}

int func_175(int iParam0)
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
		return func_177(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_177(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_177(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_177(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_176(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_176(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_176(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_176(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_176(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_176(8277, -1);
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
	return BitTest(Global_2359296[func_168() /*5570*/].f_681.f_10, iParam0);
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_170(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_177(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_172();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_178(bool bParam0)
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
		func_192(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_179(27, 1);
	return 1;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_180(iParam0, iParam1);
}

int func_180(int iParam0, int iParam1)
{
	if (func_24(14) && !func_191(iParam0))
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
	if (func_190(&Global_4543384))
	{
		if (func_188(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_181(&Global_4543384, iParam0))
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

int func_181(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_191(iParam1))
	{
		return 0;
	}
	if (func_188(uParam0, iParam1))
	{
		return 0;
	}
	if (func_187(uParam0) < 0f)
	{
		func_186(uParam0, 0);
	}
	func_184(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_182(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_182(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_191(iParam1))
	{
		return 0;
	}
	if (func_188(uParam0, iParam1))
	{
		return 0;
	}
	if (func_187(uParam0) < 0f)
	{
		func_186(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_183(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_183(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_184(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_185(uParam0, iVar0);
		iVar0++;
	}
	func_186(uParam0, (Global_4543383 - 0,5f));
}

void func_185(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_186(var uParam0, float fParam1)
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

float func_187(var uParam0)
{
	return uParam0->f_80;
}

bool func_188(var uParam0, int iParam1)
{
	return func_189(uParam0, iParam1) != -1;
}

int func_189(var uParam0, int iParam1)
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

bool func_190(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_191(int iParam0)
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

int func_192(int iParam0, int iParam1)
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

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_194(int iParam0, int iParam1)
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

void func_195()
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

int func_196(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_17;
}

float func_197()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_124(Global_113969.f_19966.f_1, 8192))
	{
		fVar0 = (fVar0 + 0,2f);
	}
	if (func_124(Global_113969.f_19966.f_1, 16384))
	{
		fVar0 = (fVar0 + 0,2f);
	}
	if (func_124(Global_113969.f_19966.f_1, 32768))
	{
		fVar0 = (fVar0 + 0,2f);
	}
	if (func_124(Global_113969.f_19966.f_1, 65536))
	{
		fVar0 = (fVar0 + 0,1f);
	}
	if (func_124(Global_113969.f_19966.f_1, 131072))
	{
		fVar0 = (fVar0 + 0,1f);
	}
	if (func_124(Global_113969.f_19966.f_1, 262144))
	{
		fVar0 = (fVar0 + 0,1f);
	}
	if (func_124(Global_113969.f_19966.f_1, 524288))
	{
		fVar0 = (fVar0 + 0,333f);
	}
	if (func_124(Global_113969.f_19966.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0,333f);
	}
	if (func_124(Global_113969.f_19966.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0,333f);
	}
	return fVar0;
}

void func_198()
{
	func_557(&(Global_113969.f_19966.f_1), 2048);
}

void func_199(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xD314260005F064BF(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x761778199FE1211C())
		{
			unk_0x88F483FBD433696A(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(false);
			unk_0xE6B753D52F4CA222();
		}
		unk_0xD314260005F064BF(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x6FF322107B12B749(0);
		uParam0->f_568 = 0;
	}
	if (!Global_79658)
	{
		if (!unk_0xD5FF242D0AFC5855(unk_0xB6B621402486C3E4()))
		{
			if (!Global_79660)
			{
				if (unk_0x15CCE8886267624F() && !func_46(0))
				{
					unk_0x10B228D2FDB7AF16(800);
				}
			}
		}
	}
	func_200(0);
}

void func_200(int iParam0)
{
	Global_79650 = iParam0;
	Global_79651 = iParam0;
}

void func_201(var uParam0)
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = (uParam0->f_576 - 1);
	}
}

void func_202(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
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
	if (!func_209(uParam0))
	{
		return;
	}
	unk_0x6B91FA4E397DAB8D();
	unk_0xA4F67CEB594AE064(iParam2);
	if (!func_208(uParam0->f_1, 256) || (func_208(uParam0->f_1, 8192) && unk_0x7811C74D5B749F76(2)))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_CLEAR_SPACE");
		unk_0x74BF156C860580D4(fParam1);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
		unk_0x74BF156C860580D4(fParam5);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE6B753D52F4CA222();
		if (unk_0x761778199FE1211C())
		{
			unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(func_208(uParam0->f_1, 4096));
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
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						iVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							uVar3 = unk_0xE934399D6F2C3AC5(iVar0, iVar1, iVar2);
						}
						else
						{
							uVar3 = unk_0xF761D79754BC3043(iVar0, iVar1, iVar2);
						}
						if (!unk_0xD6F9DEE4765092A9(uVar3))
						{
							func_207(sVar3);
						}
						bVar7++;
					}
					if (!unk_0xD6F9DEE4765092A9(uParam0->f_2[iVar6 /*15*/]))
					{
						func_206(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x761778199FE1211C())
					{
						if (func_208(uParam0->f_1, 4096))
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
		fVar8 = func_205(bParam4, func_205(func_208(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x74BF156C860580D4(fVar8);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(0f);
		unk_0x74BF156C860580D4(80f);
		unk_0xE6B753D52F4CA222();
		func_204(&(uParam0->f_1), 256);
		func_203(&(uParam0->f_1), 128);
	}
	unk_0xA91A4C18A2DB01BD(*uParam0, 255, 255, 255, 0, 0);
}

void func_203(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_204(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_205(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_206(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_207(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

bool func_208(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_209(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			func_204(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_210(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x8034325BF6D6E41F() == uParam0->f_578)
	{
		return uParam0->f_579;
	}
	uParam0->f_578 = unk_0x8034325BF6D6E41F();
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x89568FA9A6BC0B4A(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 1))
		{
			uParam0->f_579 = 1;
			return 1;
		}
		if (unk_0x7FB6C108C1694163(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4())))
		{
			uParam0->f_579 = 1;
			return 1;
		}
	}
	if (!uParam0->f_568)
	{
		if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
		{
			unk_0x6FF322107B12B749(1);
			uParam0->f_568 = 1;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
			{
				unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
			}
		}
	}
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(19);
	unk_0x66EFB3D6110055C4(2, 19, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
	unk_0x66EFB3D6110055C4(0, 21, 1);
	unk_0x66EFB3D6110055C4(0, 28, 1);
	unk_0x66EFB3D6110055C4(0, 29, 1);
	unk_0x66EFB3D6110055C4(0, 171, 1);
	func_235(0);
	if (unk_0xAE231F549813BBDF(2))
	{
		if (unk_0x3CC2AA893E5C4911() || (unk_0x15CCE8886267624F() && !unk_0xDDED2C93E8FD5B69()))
		{
			unk_0xA6DB7FC56DBDFB82();
		}
	}
	Global_44592 = 1;
	if (!uParam0->f_567)
	{
		switch (func_21(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4())))
		{
			case 1:
				unk_0xDCAFFD08A08087EB("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xDCAFFD08A08087EB("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xDCAFFD08A08087EB("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_567 = 1;
	}
	if (uParam0->f_562 == 0)
	{
		uParam0->f_562 = (uParam0->f_576 + system::floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_234(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_234(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_234((25f * 0,5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_234(30f) - func_234(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_200(1);
		uParam0->f_576 = (uParam0->f_576 + system::round((0f + (1000f * system::timestep()))));
		func_213(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0,225f) * system::timestep())));
			}
		}
		uParam0->f_30 = func_212(uParam0->f_30, 0f, 1f);
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0,75f;
					unk_0x88F483FBD433696A(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xE6B753D52F4CA222();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1,215f) * system::timestep())));
			}
		}
		uParam0->f_547 = func_212(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0,7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x88F483FBD433696A(uParam0->f_1, "TRANSITION_OUT");
			unk_0xE6B753D52F4CA222();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0,3f) * system::timestep())));
				}
			}
		}
		uParam0->f_548 = func_212(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (unk_0x7811C74D5B749F76(2))
			{
				if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_211(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x875A214D5EBCA509(2, 216) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && unk_0xA0C7B98BCF1EEF9E(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_569)
				{
					unk_0x88F483FBD433696A(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xE6B753D52F4CA222();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0,75f;
					if (uParam0->f_576 > (uParam0->f_562 - 5000))
					{
						uParam0->f_562 = uParam0->f_576 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x88F483FBD433696A(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xE6B753D52F4CA222();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0,75f;
				}
				func_211(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0,75f;
					unk_0x88F483FBD433696A(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xE6B753D52F4CA222();
				}
				uParam0->f_563 = func_212((uParam0->f_563 + (((1f / 0,3f) * uParam0->f_577) * system::timestep())), 0f, 1f);
				uParam0->f_577 = func_212((uParam0->f_577 + 0,07f), 0,75f, 1,15f);
			}
		}
		else
		{
			uParam0->f_563 = func_212((uParam0->f_563 - ((((1f / 0,3f) * uParam0->f_577) * 0,01f) * system::timestep())), 0f, 1f);
			uParam0->f_577 = func_212((uParam0->f_577 + 0,07f), 0,75f, 1,15f);
		}
		if (uParam0->f_576 > uParam0->f_562)
		{
			if (uParam0->f_565)
			{
				if (!uParam0->f_571)
				{
					if (unk_0x875A214D5EBCA509(2, 215))
					{
						uParam0->f_565 = 0;
					}
				}
			}
			else if ((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_579 = !bVar0;
		if (bParam1)
		{
			system::wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_200(0);
			}
			return !bVar0;
		}
	}
	func_200(0);
	return 1;
}

void func_211(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0->f_4, "CLEAR_ALL");
	unk_0xE6B753D52F4CA222();
	if (unk_0x761778199FE1211C())
	{
		unk_0x88F483FBD433696A(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x557F1E2300EF1A3E(true);
		unk_0xE6B753D52F4CA222();
	}
	unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(0);
	func_207(unk_0xE934399D6F2C3AC5(2, 215, 1));
	func_206("ES_HELP");
	if (unk_0x761778199FE1211C())
	{
		unk_0x557F1E2300EF1A3E(true);
		unk_0x330108B080A2132F(215);
	}
	unk_0xE6B753D52F4CA222();
	if (bParam1)
	{
		unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x330108B080A2132F(1);
		func_207(unk_0xE934399D6F2C3AC5(2, 216, 1));
		func_206("ES_XPAND");
		if (unk_0x761778199FE1211C())
		{
			unk_0x557F1E2300EF1A3E(true);
			unk_0x330108B080A2132F(216);
		}
		unk_0xE6B753D52F4CA222();
	}
	unk_0x88F483FBD433696A(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xE6B753D52F4CA222();
}

float func_212(float fParam0, float fParam1, float fParam2)
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

void func_213(var uParam0, float fParam1, bool bParam2)
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
	var uVar13;
	var uVar14;
	var uVar15;
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
	
	iVar0 = system::round((uParam0->f_547 * 255f));
	fVar1 = (func_233() * 0,25f);
	if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x88F483FBD433696A(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_206(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_232(&(uParam0->f_13));
				}
				else
				{
					func_206(&(uParam0->f_13));
				}
				if (unk_0x76CD105BCAC6EB9F())
				{
					unk_0x330108B080A2132F(150);
				}
				else
				{
					unk_0x330108B080A2132F(100);
				}
				unk_0x557F1E2300EF1A3E(true);
				if (uParam0->f_560 == 4)
				{
					unk_0x330108B080A2132F((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x330108B080A2132F(uParam0->f_56);
				}
				unk_0x557F1E2300EF1A3E(iParam2);
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
				{
					unk_0x330108B080A2132F(2);
				}
				else
				{
					unk_0x330108B080A2132F(69);
				}
				unk_0xE6B753D52F4CA222();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600)
			{
				unk_0x88F483FBD433696A(uParam0->f_1, "TRANSITION_UP");
				unk_0x74BF156C860580D4(0,15f);
				unk_0x557F1E2300EF1A3E(true);
				unk_0xE6B753D52F4CA222();
				uParam0->f_3 = 1;
			}
		}
		func_231();
		unk_0xA91A4C18A2DB01BD(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0,1388889f + func_234((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
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
		if (uParam0->f_30 >= 0,975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0,3f * func_233());
	if (uParam0->f_12)
	{
		fVar1 = 0,5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_230(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0,006f));
		}
		if (unk_0x4AE9635532D92447(0) < 1,4f)
		{
			fVar6 = (fVar6 * 1,3f);
		}
		if (!unk_0xD6F9DEE4765092A9(&(uParam0->f_554)))
		{
			fVar7 = func_229(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_230(&(uParam0->f_550));
		}
		fVar8 = (((0,119f + 0,05f) / func_233()) / 2,5f);
		if ((uParam0->f_560 == 1 || uParam0->f_560 == 0) && uParam0->f_561 != 0)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (uParam0->f_560 == 5)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1,9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0,499f - (fVar6 / 2f)) + 0,006f);
	fVar10 = ((0,499f + (fVar6 / 2f)) - 0,006f);
	unk_0x4CC1CF98851922CE(2, 215);
	unk_0x4CC1CF98851922CE(2, 216);
	unk_0x4CC1CF98851922CE(2, 200);
	unk_0x66EFB3D6110055C4(2, 200, 1);
	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0,95f) && (uParam0->f_562 - 10000) < uParam0->f_576))
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = (uParam0->f_574 * -1);
					uParam0->f_574 = (uParam0->f_576 + uParam0->f_574);
				}
				if (uParam0->f_574 > 0)
				{
					if ((uParam0->f_574 - uParam0->f_576) > 0)
					{
						func_94((uParam0->f_574 - uParam0->f_576), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = (uParam0->f_572 + (0f + ((1f / 0,166f) * system::timestep())));
					if (uParam0->f_572 > 1f)
					{
						uParam0->f_572 = 1f;
					}
				}
			}
			if (unk_0x15CCE8886267624F())
			{
				unk_0x6B91FA4E397DAB8D();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0,1f) && uParam0->f_576 <= uParam0->f_562)
			{
				unk_0x4EB223432F8FA0A0(7);
				unk_0x4EB223432F8FA0A0(8);
				unk_0x4EB223432F8FA0A0(9);
				unk_0x4EB223432F8FA0A0(6);
				unk_0xA91A4C18A2DB01BD(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_571)
			{
				unk_0x66EFB3D6110055C4(0, 140, 1);
				unk_0x66EFB3D6110055C4(0, 141, 1);
				unk_0x66EFB3D6110055C4(0, 142, 1);
				unk_0x66EFB3D6110055C4(2, 188, 1);
				if (unk_0xDEE3EFEA31A1F555(2, 188))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x66EFB3D6110055C4(2, 187, 1);
				if (unk_0xDEE3EFEA31A1F555(2, 187))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x66EFB3D6110055C4(2, 202, 1);
				if (unk_0xDEE3EFEA31A1F555(2, 202))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					unk_0xBF3D28CA44F3BE2D(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_566)
			{
				unk_0x4EB223432F8FA0A0(7);
				unk_0x4EB223432F8FA0A0(8);
				unk_0x4EB223432F8FA0A0(9);
				unk_0x4EB223432F8FA0A0(6);
				unk_0x66EFB3D6110055C4(0, 140, 1);
				unk_0x66EFB3D6110055C4(0, 141, 1);
				unk_0x66EFB3D6110055C4(0, 142, 1);
				if (unk_0x875A214D5EBCA509(2, 215) || unk_0xDEE3EFEA31A1F555(2, 200))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					unk_0xBF3D28CA44F3BE2D(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xA306E6FD2A6558E6(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0x5A18938160AE52D0(uVar13, uVar14, uVar15, iVar0);
	unk_0xE05EB1EAE7CCDC59(fVar9, fVar10);
	unk_0x2873B596E322DCDA(0);
	unk_0xBFE94E91C83D8794(1f, 0,4f);
	fVar1 = (fVar1 - func_234(6f));
	fVar1 = (fVar1 + (func_234(30f) - func_234((2f * 2f))));
	fVar11 = (fVar2 - func_234((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_212((fVar11 / (0,6f * func_234(25f))), 0f, 1f);
		func_231();
		unk_0x81645EE95A114FAE(0,5f, (fVar1 - (func_234((2f - 0,5f)) - 0,001388889f)), fVar6, func_228(1f), uVar13, uVar14, uVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_234((2f * 0,3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_234((25f * 0,2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_233())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_212((fVar11 / (0,8f * func_234(25f))), 0f, 1f);
			func_225(uParam0, iVar17, (fVar1 + func_234(2f)), fVar9, fVar10, system::round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_234(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_234((25f * 0,2f)));
				fVar11 = (fVar2 - (fVar1 - (0,3f * func_233())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_234(2f));
					fVar12 = func_212((fVar11 / (0,6f * func_234(25f))), 0f, 1f);
					func_231();
					unk_0x81645EE95A114FAE(0,5f, (fVar1 + func_234((2f * 0,5f))), fVar6, func_228(1f), uVar13, uVar14, uVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_234((2f * 0,3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_234((25f * 0,2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_560 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_234((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_233())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_234(2f));
			fVar12 = func_212((fVar11 / (0,6f * func_234(25f))), 0f, 1f);
			func_231();
			unk_0x81645EE95A114FAE(0,5f, (fVar1 + func_234((2f * 0,5f))), fVar6, func_228(1f), uVar13, uVar14, uVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_234((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_233())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_212((fVar11 / (0,8f * func_234(25f))), 0f, 1f);
			unk_0x5A18938160AE52D0(uVar13, uVar14, uVar15, system::round((fVar12 * IntToFloat(iVar0))));
			func_217(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x8608526719A575EE() == 0)
			{
				fVar20 = (fVar9 + ((0,119f / func_233()) / 2,5f));
				fVar21 = (fVar10 - ((0,119f / func_233()) / 2,5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0,119f + 0,05f) / func_233()) / 2,5f));
					fVar21 = (fVar10 - (((0,119f + 0,05f) / func_233()) / 2,5f));
				}
			}
			if (uParam0->f_561 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0,28f) + 0,006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0,28f) + 0,006f) / 2f));
			}
			if (uParam0->f_560 != 3)
			{
				unk_0xE05EB1EAE7CCDC59(fVar20, fVar21);
				unk_0x2873B596E322DCDA(1);
			}
			else
			{
				fVar20 = 0,5f;
				unk_0x2873B596E322DCDA(0);
			}
			unk_0xBFE94E91C83D8794(1f, 0,4f);
			if (unk_0xD6F9DEE4765092A9(&(uParam0->f_554)))
			{
				func_216(&(uParam0->f_550), fVar20, (fVar1 + func_234((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_215(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_234((2f * 2f))), 0, 0);
			}
			unk_0xE05EB1EAE7CCDC59(fVar20, fVar21);
			unk_0x2873B596E322DCDA(2);
			unk_0xBFE94E91C83D8794(1f, 0,4f);
			unk_0xEAF65721ACB2FDFB(0);
			func_231();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0,28f) + 0,006f));
			unk_0xE05EB1EAE7CCDC59(fVar20, fVar22);
			unk_0x5A18938160AE52D0(uVar13, uVar14, uVar15, system::round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_560)
			{
				case 0:
					unk_0xEAEB6E7D3FAEBD5B("PERCENTAGE");
					unk_0x511D14ED2DA887E1(uParam0->f_558);
					unk_0x25DD447A6EB3A86F(fVar20, (fVar1 + func_234((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xEAEB6E7D3FAEBD5B("FO_TWO_NUM");
					unk_0x511D14ED2DA887E1(uParam0->f_558);
					unk_0x511D14ED2DA887E1(uParam0->f_559);
					unk_0x25DD447A6EB3A86F(fVar20, (fVar1 + func_234((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xEAEB6E7D3FAEBD5B("MTPHPER_XPNO");
					unk_0x511D14ED2DA887E1(uParam0->f_558);
					unk_0x25DD447A6EB3A86F(fVar20, (fVar1 + func_234((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0xEAEB6E7D3FAEBD5B("ESDOLLA");
					unk_0xB5DF3215F3864B3F(uParam0->f_558, 1);
					unk_0x25DD447A6EB3A86F(fVar20, (fVar1 + func_234((2f * 2f))), 0);
					break;
			}
			unk_0xD0D00ED689D6CA81(&cVar23, 0);
			if (uParam0->f_561 != 0 && unk_0x38D063D8CF6D1967(&cVar23))
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_561)
				{
					case 1:
						unk_0xA306E6FD2A6558E6(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0xA306E6FD2A6558E6(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0xA306E6FD2A6558E6(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0,001388889f * 5f);
				fVar30 = ((0,00078125f * 16f) * 2f);
				fVar31 = ((0,001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_214(4f)) - 0,006f);
				fVar33 = ((fVar1 + func_234(10f)) + fVar29);
				if (uParam0->f_560 == -1)
				{
					fVar32 = (fVar32 - (0,006f * 6f));
				}
				fVar30 = (fVar30 * 0,65f);
				fVar31 = (fVar31 * 0,65f);
				unk_0xFFA2B456A81EA1EB(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, system::round((fVar12 * IntToFloat(iVar0))), 0, 0);
			}
			fVar1 = (fVar1 + (func_234(30f) - 2f));
		}
	}
}

float func_214(float fParam0)
{
	return (fParam0 * 0,00078125f);
}

void func_215(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5)
{
	unk_0xEAF65721ACB2FDFB(iParam4);
	unk_0x8413CD3BCEEAD8DC(iParam5);
	func_231();
	unk_0xEAEB6E7D3FAEBD5B(sParam0);
	unk_0x60D332F23943B34F(sParam1);
	unk_0x25DD447A6EB3A86F(fParam2, fParam3, 0);
}

void func_216(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xEAF65721ACB2FDFB(iParam3);
	unk_0x8413CD3BCEEAD8DC(iParam5);
	func_231();
	if (bParam4)
	{
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(sParam0);
	}
	else
	{
		unk_0xEAEB6E7D3FAEBD5B(sParam0);
	}
	unk_0x25DD447A6EB3A86F(fParam1, fParam2, 0);
}

int func_217(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_224(iParam0), 64);
	StringCopy(&cVar1, func_221(iParam0, bParam1), 64);
	if (unk_0x70E57E9927B6BA58(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_219(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x32D86930C15E1159(&cVar0, &cVar1) };
		fVar6 = (func_218(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x485ADB2D2728D748() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_218(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0,5f;
			break;
		
		case 64:
			return 0,8f;
			break;
	}
	return 1f;
}

void func_219(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x5949C3C031610A30(uParam1, uParam2);
		return;
	}
	unk_0x21564F65F997D833(uParam1, uParam2);
	fVar0 = system::to_float(*uParam1);
	fVar1 = system::to_float(*uParam2);
	fVar2 = unk_0x4AE9635532D92447(0);
	if (func_220(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = system::round((fVar1 * fVar2));
		*uParam2 = system::round(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = system::round((fVar0 / *fParam3));
	*uParam2 = system::round((fVar1 / *fParam3));
}

bool func_220(int iParam0, int iParam1)
{
	return (system::to_float(iParam0) / system::to_float(iParam1)) > 3,5f;
}

var func_221(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var2 = { func_223(unk_0x259BE71D8A81D4FA()) };
			if (unk_0xE460920F3D75C34D(&Var2, &uVar1))
			{
				return func_222(&uVar1);
			}
		}
		else
		{
			return func_222(&(Global_23831.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_222(var uParam0)
{
	return uParam0;
}

struct<13> func_223(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

char* func_224(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var1 = { func_223(unk_0x259BE71D8A81D4FA()) };
			unk_0xE460920F3D75C34D(&Var1, &uVar0);
			return func_222(&uVar0);
		}
		else
		{
			return func_222(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_225(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xA306E6FD2A6558E6(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0x5A18938160AE52D0(uVar0, uVar1, uVar2, iParam5);
	unk_0xE05EB1EAE7CCDC59(fParam3, fParam4);
	unk_0x2873B596E322DCDA(1);
	unk_0xBFE94E91C83D8794(1f, func_227(14f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0x8413CD3BCEEAD8DC(0);
	func_231();
	if (uParam0->f_531[iParam1])
	{
		unk_0xEAEB6E7D3FAEBD5B("STRING");
		unk_0x60D332F23943B34F(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xEAEB6E7D3FAEBD5B(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x511D14ED2DA887E1(uParam0->f_489[iParam1]);
		}
	}
	unk_0x25DD447A6EB3A86F(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_217(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", func_221(7, 0), (fParam4 - 0,006f), ((fParam2 + func_234(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 2:
			func_217(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", func_221(5, 0), (fParam4 - 0,006f), ((fParam2 + func_234(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 3:
			func_217(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", func_221(6, 0), (fParam4 - 0,006f), ((fParam2 + func_234(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x2873B596E322DCDA(1);
	}
	else
	{
		unk_0x2873B596E322DCDA(2);
	}
	unk_0xBFE94E91C83D8794(1f, func_227(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xE05EB1EAE7CCDC59(fParam3, (fVar4 - (0,00078125f * 3f)));
	}
	else
	{
		unk_0xE05EB1EAE7CCDC59(fParam3, (fVar4 + (0,00078125f * 2f)));
	}
	unk_0x5A18938160AE52D0(uVar0, uVar1, uVar2, iParam5);
	func_226(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_226(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0xEAF65721ACB2FDFB(0);
	unk_0x8413CD3BCEEAD8DC(0);
	func_231();
	fVar1 = 0f;
	fVar2 = (8f * 0,00078125f);
	fVar3 = (16f * 0,001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xBFE94E91C83D8794(1f, func_227(18f));
			unk_0x8413CD3BCEEAD8DC(4);
			if (iParam0 < 0)
			{
				unk_0x282D5DA1EE14950F("ESMINDOLLA");
				unk_0xB5DF3215F3864B3F((-1 * iParam0), 1);
				fVar1 = unk_0x43026780D77E3DC0(0);
			}
			else
			{
				unk_0x282D5DA1EE14950F("ESDOLLA");
				unk_0xB5DF3215F3864B3F(iParam0, 1);
				fVar1 = unk_0x43026780D77E3DC0(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0,00078125f));
			unk_0xFFA2B456A81EA1EB("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0,5f)) - (0,00078125f * 2f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), (fVar1 - (fVar2 * 0,5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xFFA2B456A81EA1EB("CommonMenu", "BettingBox_Right", (fParam2 - (0,00078125f * 4f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xBFE94E91C83D8794(1f, func_227(14f));
			break;
	}
	unk_0x4E5A3D96808F7F84(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xEAEB6E7D3FAEBD5B("PERCENTAGE");
			unk_0x511D14ED2DA887E1(iParam0);
			break;
		
		case 1:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("FO_NUM");
			unk_0x511D14ED2DA887E1(iParam0);
			break;
		
		case 2:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("FO_TWO_NUM");
			unk_0x511D14ED2DA887E1(iParam0);
			unk_0x511D14ED2DA887E1(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xBFE94E91C83D8794(1f, func_227(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xEAEB6E7D3FAEBD5B("ESMINDOLLA");
				unk_0xB5DF3215F3864B3F((-1 * iParam0), 1);
			}
			else
			{
				unk_0xEAEB6E7D3FAEBD5B("ESDOLLA");
				unk_0xB5DF3215F3864B3F(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			break;
		
		case 7:
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0x60D332F23943B34F(sParam4);
			break;
		
		case 8:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0xBD34A69071611974(iParam0, 14);
			break;
		
		case 9:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0xBD34A69071611974(iParam0, 6);
			break;
		
		case 10:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0xBD34A69071611974(iParam0, 2055);
			break;
		
		case 18:
			unk_0x8413CD3BCEEAD8DC(5);
			unk_0xEAEB6E7D3FAEBD5B("STRING");
			unk_0xBD34A69071611974(iParam0, 2055);
			break;
		
		case 12:
			unk_0xEAEB6E7D3FAEBD5B("AHD_DIST");
			unk_0x511D14ED2DA887E1(iParam0);
			break;
		
		case 13:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			unk_0x511D14ED2DA887E1(iParam0);
			unk_0x511D14ED2DA887E1(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			unk_0x511D14ED2DA887E1(iParam0);
			unk_0x511D14ED2DA887E1(iParam1);
			break;
		
		case 16:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			unk_0x511D14ED2DA887E1(iParam1);
			break;
		
		case 20:
			unk_0xEAEB6E7D3FAEBD5B(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x25DD447A6EB3A86F((fParam2 - (0,00078125f * 4f)), fParam3, 0);
			unk_0xBFE94E91C83D8794(1f, func_227(14f));
		}
		else
		{
			unk_0x25DD447A6EB3A86F(fParam2, fParam3, 0);
		}
	}
}

float func_227(float fParam0)
{
	return (fParam0 * 0,025f);
}

float func_228(float fParam0)
{
	return (fParam0 * 0,0009259259f);
}

float func_229(char* sParam0, char* sParam1)
{
	unk_0x282D5DA1EE14950F(sParam0);
	unk_0x60D332F23943B34F(uParam1);
	return (unk_0x43026780D77E3DC0(1) / 2f);
}

float func_230(char* sParam0)
{
	unk_0x282D5DA1EE14950F(sParam0);
	return (unk_0x43026780D77E3DC0(1) / 2f);
}

void func_231()
{
	unk_0xA4F67CEB594AE064(1);
	if (unk_0x78ABC1D11B34F324() || unk_0x15CCE8886267624F())
	{
		unk_0xA4F67CEB594AE064(7);
	}
	unk_0xA66AC5949E305457(0);
}

void func_232(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

float func_233()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x761778199FE1211C())
	{
	}
	return fVar0;
}

float func_234(float fParam0)
{
	return (fParam0 * 0,001388889f);
}

void func_235(int iParam0)
{
	if (func_239())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_80(0))
		{
			func_236(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_236(int iParam0)
{
	if (func_239())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_238())
		{
			func_237(1, 1);
		}
		else
		{
			func_237(0, 0);
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
	if (!func_15())
	{
		Global_20930.f_1 = 3;
	}
}

void func_237(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0))
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

bool func_238()
{
	return BitTest(Global_1956920, 5);
}

bool func_239()
{
	return BitTest(Global_1956920, 19);
}

int func_240(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_241(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x5AF05959A6F22BB4("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_204(&(uParam0->f_1), 32);
	}
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_204(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x2EE4366DBD59BB7A(*uParam0, 1);
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (bParam3)
		{
			func_204(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_204(&(uParam0->f_1), 8192);
	}
}

int func_242(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_245(uParam0);
	func_244(uParam0);
	if (unk_0x1B79E937E91F40C3(&(uParam0->f_550), "SPR_RESULT") || (unk_0x1B79E937E91F40C3(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_570 = 1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xD0D00ED689D6CA81("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xD0D00ED689D6CA81("CommonMenu", 0);
		unk_0xD0D00ED689D6CA81("MPLeaderboard", 0);
		unk_0xD0D00ED689D6CA81("MPHud", 0);
		uParam0->f_1 = unk_0x8DE4F68A9728925E("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x5AF05959A6F22BB4("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xA0C7B98BCF1EEF9E(uParam0->f_1) || !unk_0x38D063D8CF6D1967("CommonMenu")) || !unk_0x38D063D8CF6D1967("MPLeaderboard")) || !unk_0x38D063D8CF6D1967("MPHud"))
		{
			system::wait(0);
		}
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_4))
			{
				system::wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0xA0C7B98BCF1EEF9E(uParam0->f_1) || !unk_0x38D063D8CF6D1967("CommonMenu")) || !unk_0x38D063D8CF6D1967("MPLeaderboard")) || !unk_0x38D063D8CF6D1967("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_566)
		{
			if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_566)
	{
		if (uParam0->f_571)
		{
			func_243(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_211(uParam0, 1);
		}
		else
		{
			func_211(uParam0, 0);
		}
	}
	Global_79651 = 1;
	return 1;
}

void func_243(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0->f_4, "CLEAR_ALL");
	unk_0xE6B753D52F4CA222();
	if (unk_0x761778199FE1211C())
	{
		unk_0x88F483FBD433696A(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x557F1E2300EF1A3E(true);
		unk_0xE6B753D52F4CA222();
	}
	unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(2);
	func_207(unk_0xE934399D6F2C3AC5(2, 188, 1));
	func_206("ES_HELP_TU");
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(1);
	func_207(unk_0xE934399D6F2C3AC5(2, 187, 1));
	func_206("ES_HELP_TD");
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(0);
	func_207(unk_0xE934399D6F2C3AC5(2, 202, 1));
	func_206("ES_HELP_AB");
	unk_0xE6B753D52F4CA222();
	unk_0x88F483FBD433696A(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xE6B753D52F4CA222();
}

void func_244(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x2873B596E322DCDA(0);
	unk_0xBFE94E91C83D8794(1f, func_227(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x282D5DA1EE14950F("STRING");
			unk_0x60D332F23943B34F(&(uParam0->f_13));
			fVar0 = unk_0x43026780D77E3DC0(1);
		}
		else
		{
			unk_0x282D5DA1EE14950F(&(uParam0->f_13));
			fVar0 = unk_0x43026780D77E3DC0(1);
		}
	}
	else
	{
		unk_0x282D5DA1EE14950F("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x511D14ED2DA887E1(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xACF853FB3F6EA7D4(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x60D332F23943B34F(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x43026780D77E3DC0(1);
	}
	if (fVar0 > ((0,1125f * 2f) - (0,006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0,006f * 2f));
	}
}

void func_245(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

void func_246()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_329)
	{
		func_252(&uLocal_340, &Local_921, &Global_64181, 0);
		fLocal_324 = (fLocal_324 * 1000f);
		if (Global_95690)
		{
			func_251(&uLocal_340, 6, &(Local_921.f_12), "MTPHPERSKI", system::floor(fLocal_324), 0, 3, 0);
			func_251(&uLocal_340, 6, &(Local_921.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_251(&uLocal_340, 6, &(Local_921.f_30), "MTPHPERSKI", system::round((fLocal_326 + fLocal_325)), 0, 3, 0);
			func_250();
		}
		else
		{
			if (bLocal_328)
			{
				func_251(&uLocal_340, 6, &(Local_921.f_12), "MTPHPERRET", system::floor(fLocal_324), 0, 3, 0);
			}
			else
			{
				func_251(&uLocal_340, 9, &(Local_921.f_12), "", system::floor(fLocal_324), 0, 0, 0);
			}
			if (!unk_0xD6F9DEE4765092A9(&(Local_921.f_18)))
			{
				if (bLocal_327)
				{
					func_251(&uLocal_340, 6, &(Local_921.f_24), "", 0, 0, 2, 0);
					func_251(&uLocal_340, 3, &(Local_921.f_30), "", system::round((fLocal_326 + fLocal_325)), 0, 2, 0);
				}
				else
				{
					func_251(&uLocal_340, 6, &(Local_921.f_24), "", 0, 0, 1, 0);
					func_251(&uLocal_340, 3, &(Local_921.f_30), "", system::round(fLocal_325), 0, 0, 0);
				}
			}
			else
			{
				func_251(&uLocal_340, 3, &(Local_921.f_30), "", system::round(fLocal_325), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_95690)
		{
			iVar1 = 0;
			while (iVar1 < Global_76261)
			{
				if (Global_76262[iVar1 /*9*/] >= 0 && !Global_64391[Global_76262[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_76262[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_335 = 50;
			iLocal_336 = 1;
			func_249(&uLocal_340, 1, &(Local_921.f_48), iLocal_335, 0, 0, 1, 0);
		}
		else if (bLocal_327)
		{
			if (bLocal_328)
			{
				iLocal_335 = 75;
				iLocal_336 = 2;
				func_249(&uLocal_340, 1, &(Local_921.f_42), iLocal_335, 0, 0, 2, 0);
			}
			else
			{
				iLocal_335 = 100;
				iLocal_336 = 3;
				func_249(&uLocal_340, 1, &(Local_921.f_36), iLocal_335, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_327 && !bLocal_328)
		{
			iLocal_335 = 75;
			iLocal_336 = 2;
			func_249(&uLocal_340, 1, &(Local_921.f_42), iLocal_335, 0, 0, 2, 0);
		}
		else
		{
			iLocal_335 = 50;
			iLocal_336 = 1;
			func_249(&uLocal_340, 1, &(Local_921.f_48), iLocal_335, 0, 0, 1, 0);
		}
		func_247();
		iLocal_329 = 1;
	}
}

void func_247()
{
	if (unk_0x486FF5D06E9659F1(joaat("assassin_valet")) == 1)
	{
		func_248(38, system::floor(fLocal_324), 1);
		if (bLocal_327)
		{
			func_248(39, 1, 1);
		}
		else
		{
			func_248(39, 0, 1);
		}
		if (bLocal_327)
		{
			func_248(40, system::round((fLocal_326 + fLocal_325)), 1);
		}
		else
		{
			func_248(40, system::round(fLocal_325), 1);
		}
		func_248(41, iLocal_335, 1);
		func_248(42, iLocal_336, 1);
	}
	else if (unk_0x486FF5D06E9659F1(joaat("assassin_multi")) == 1)
	{
		func_248(52, system::floor(fLocal_324), 1);
		if (bLocal_327)
		{
			func_248(53, 1, 1);
		}
		else
		{
			func_248(53, 0, 1);
		}
		if (bLocal_327)
		{
			func_248(56, system::round((fLocal_326 + fLocal_325)), 1);
		}
		else
		{
			func_248(56, system::round(fLocal_325), 1);
		}
		func_248(54, iLocal_335, 1);
		func_248(55, iLocal_336, 1);
	}
	else if (unk_0x486FF5D06E9659F1(joaat("assassin_hooker")) == 1)
	{
		func_248(66, system::floor(fLocal_324), 1);
		if (bLocal_327)
		{
			func_248(67, 1, 1);
		}
		else
		{
			func_248(67, 0, 1);
		}
		if (bLocal_327)
		{
			func_248(68, system::round((fLocal_326 + fLocal_325)), 1);
		}
		else
		{
			func_248(68, system::round(fLocal_325), 1);
		}
		func_248(69, iLocal_335, 1);
		func_248(70, iLocal_336, 1);
	}
	else if (unk_0x486FF5D06E9659F1(joaat("assassin_bus")) == 1)
	{
		func_248(81, system::floor(fLocal_324), 1);
		if (bLocal_327)
		{
			func_248(82, 1, 1);
		}
		else
		{
			func_248(82, 0, 1);
		}
		if (bLocal_327)
		{
			func_248(83, system::round((fLocal_326 + fLocal_325)), 1);
		}
		else
		{
			func_248(83, system::round(fLocal_325), 1);
		}
		func_248(84, iLocal_335, 1);
		func_248(85, iLocal_336, 1);
	}
	else if (unk_0x486FF5D06E9659F1(joaat("assassin_construction")) == 1)
	{
		func_248(97, system::floor(fLocal_324), 1);
		if (bLocal_327)
		{
			func_248(98, 1, 1);
		}
		else
		{
			func_248(98, 0, 1);
		}
		if (bLocal_327)
		{
			func_248(99, system::round((fLocal_326 + fLocal_325)), 1);
		}
		else
		{
			func_248(99, system::round(fLocal_325), 1);
		}
		func_248(100, iLocal_335, 1);
		func_248(101, iLocal_336, 1);
	}
}

void func_248(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (Global_76262[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_76262[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_76262[iVar0 /*9*/].f_1 = (Global_76262[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_76262[iVar0 /*9*/] != -1)
	{
		if (Global_64391[Global_76262[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_76262[iVar0 /*9*/].f_1 > 1)
			{
				Global_76262[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_76262[iVar0 /*9*/].f_1 < 0)
			{
				Global_76262[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_249(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_250()
{
	Global_95689 = 0;
	Global_95690 = 0;
}

void func_251(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_252(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_253()
{
	func_557(&(Global_113969.f_19966.f_1), 4194304);
}

void func_254()
{
	int iVar0;
	
	if (!bLocal_1002)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x1C2F771CDC87A3A5(iVar0, 0))
				{
					if (unk_0x182BD9AD1675B5DE(iVar0))
					{
						if (unk_0x16088CC55E7F218A("ASS1_LOST"))
						{
							bLocal_1002 = true;
						}
					}
				}
			}
		}
	}
}

void func_255()
{
	float fVar0;
	
	if (!iLocal_999)
	{
		if (!unk_0xFBA523E6F8ACE541())
		{
			if (!func_28())
			{
				func_260("ASS_VA_GO", 7500, -1);
				iLocal_999 = 1;
			}
		}
	}
	func_259(&iLocal_1011, &uLocal_1114, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1020)
	{
		case 0:
			iLocal_1020++;
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				fVar0 = func_32(unk_0x4A8C381C258A124D(), Local_1062, 1);
				if (fVar0 > 155f && func_36(1116471296, 1) == 0)
				{
					bLocal_994 = true;
					func_257();
					iLocal_1020++;
				}
				else
				{
					unk_0x75690DF4B79CDDCC(unk_0x259BE71D8A81D4FA());
				}
			}
			break;
		
		case 2:
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (func_36(1116471296, 1) == 0)
				{
					func_254();
					if (func_256())
					{
						iLocal_933 = 18;
					}
				}
			}
			else if (!iLocal_1010)
			{
				if (!func_28())
				{
					if (!unk_0xFBA523E6F8ACE541())
					{
						func_260("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1020++;
						iLocal_1010 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				iLocal_1020 = 2;
			}
			break;
	}
}

int func_256()
{
	if (bLocal_1002)
	{
		unk_0x86A2BC11844DEEB3("ASS1_LOST");
		iLocal_1003 = 1;
	}
	func_257();
	return 1;
}

void func_257()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_942[iVar0]))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_942[iVar0]))
			{
				func_258(&(Local_950[iVar0 /*8*/]));
				unk_0x974022927CB47E68(iLocal_942[iVar0]);
				unk_0xF09E30AF1B8FB379(&(iLocal_942[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_941))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_941))
		{
			unk_0x974022927CB47E68(iLocal_941);
			unk_0xF09E30AF1B8FB379(&iLocal_941);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_943[iVar0]))
		{
			if (!unk_0x4FAFF4BCB7633475(uLocal_943[iVar0]))
			{
				func_258(&(Local_948[iVar0 /*8*/]));
				unk_0x974022927CB47E68(uLocal_943[iVar0]);
				unk_0xF09E30AF1B8FB379(&(uLocal_943[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_944[iVar0]))
		{
			if (!unk_0x4FAFF4BCB7633475(uLocal_944[iVar0]))
			{
				func_258(&(Local_949[iVar0 /*8*/]));
				unk_0x974022927CB47E68(uLocal_944[iVar0]);
				unk_0xF09E30AF1B8FB379(&(uLocal_944[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0x55098D9E9AD58806(iLocal_1075);
}

void func_258(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
		bVar0 = true;
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_1))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_7))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_7, 0))
		{
			if (unk_0xA23AABF378361F85(uParam0->f_7))
			{
				unk_0x2BF2F8E20C19583C(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_259(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_260(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_261()
{
	func_259(&iLocal_1011, &uLocal_1114, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1020)
	{
		case 0:
			if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (!iLocal_1010)
				{
					if (!func_28())
					{
						if (!unk_0xFBA523E6F8ACE541())
						{
							func_260("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1020++;
							iLocal_1010 = 1;
						}
					}
				}
			}
			else if (func_36(1116471296, 1) != 0)
			{
				if (!iLocal_999)
				{
					if (!func_28())
					{
						if (!unk_0xFBA523E6F8ACE541())
						{
							func_260("ASS_VA_GO", 7500, -1);
							iLocal_1020++;
							iLocal_999 = 1;
						}
					}
				}
			}
			else if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) && func_36(125f, 1) == 0)
			{
				iLocal_1020++;
			}
			break;
		
		case 1:
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) && func_36(125f, 1) == 0)
			{
				func_254();
				func_257();
				func_263(1);
				func_262();
				iLocal_1020++;
			}
			break;
		
		case 2:
			func_254();
			iLocal_933 = 18;
			break;
	}
}

void func_262()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_1067))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
		{
			unk_0x0B74F181ADFC39BF(iLocal_1067, 1);
		}
		unk_0x68298CA6191CDFDB(&iLocal_1067);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_1068))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_1068, 0))
		{
			if ((unk_0xCB5CAFF0A4A8B74B(iLocal_1068) && !unk_0xF6C26AE940C14749(iLocal_1068)) && !unk_0x15CCE8886267624F())
			{
				unk_0x68298CA6191CDFDB(&iLocal_1068);
			}
			else
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_944[0]) && !unk_0x1C2F771CDC87A3A5(uLocal_944[0], 0))
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_1068, 0))
					{
						if (unk_0xCECDBB848D53DEB2(uLocal_944[0], iLocal_1068, 0))
						{
							unk_0x19626F992DC71FB9(uLocal_944[0]);
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(uLocal_944[1]) && !unk_0x1C2F771CDC87A3A5(uLocal_944[1], 0))
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_1068, 0))
					{
						if (unk_0xCECDBB848D53DEB2(uLocal_944[1], iLocal_1068, 0))
						{
							unk_0x19626F992DC71FB9(uLocal_944[1]);
						}
					}
				}
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_1068, 0))
					{
						unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
					}
				}
				unk_0x68298CA6191CDFDB(&iLocal_1068);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_1071[0]))
	{
		unk_0x68298CA6191CDFDB(&(uLocal_1071[0]));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_1071[1]))
	{
		unk_0x68298CA6191CDFDB(&(uLocal_1071[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_1072) && !unk_0x1C2F771CDC87A3A5(iLocal_1072, 0))
	{
		if (unk_0x110821AE6C63DD4F(iLocal_1072) && unk_0x7C9905528EE2C3AB(iLocal_1072, 1))
		{
			unk_0x68298CA6191CDFDB(&iLocal_1072);
		}
	}
}

void func_263(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_952))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_952);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_953[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_953[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_954[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_954[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_954[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_954[iVar0]));
		}
		iVar0++;
	}
}

void func_264()
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_1060, Local_1061, fLocal_1049, 1, 0, 0))
	{
		bLocal_979 = true;
	}
	else
	{
		bLocal_979 = false;
	}
	if (unk_0xC450B06E5AAA0985(uLocal_952))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_952);
	}
	unk_0x425BBE19F25A57AB(0,5f);
	if (bLocal_979)
	{
		func_265();
		iLocal_933 = 17;
	}
	else
	{
		func_265();
		iLocal_933 = 16;
	}
	func_92(&uLocal_1279, 0, 0);
}

void func_265()
{
	iLocal_1020 = 0;
}

void func_266()
{
	if (!bLocal_976)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_1067))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
			{
				unk_0x0B74F181ADFC39BF(iLocal_1067, 3);
				if (func_268(iLocal_1067, 5f))
				{
					bLocal_976 = true;
				}
			}
		}
	}
	if (!iLocal_973)
	{
		if (func_267(iLocal_1067, 10000))
		{
			iLocal_973 = 1;
		}
	}
}

int func_267(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (((unk_0xA24B9FF9863A909D(iParam0, 0, iParam1) || unk_0xA24B9FF9863A909D(iParam0, 2, iParam1)) || unk_0xA24B9FF9863A909D(iParam0, 3, iParam1)) || unk_0xA24B9FF9863A909D(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0, float fParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (func_269(iParam0, -1217,442f, -281,5099f, 36,7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_269(int iParam0, struct<3> Param1, int iParam2)
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

void func_270()
{
	switch (iLocal_1020)
	{
		case 0:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
			{
				if (func_140())
				{
					if (!unk_0x4FAFF4BCB7633475(uLocal_943[0]))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
						{
							if (unk_0xCECDBB848D53DEB2(uLocal_943[0], iLocal_1067, 0))
							{
								bLocal_972 = true;
								func_265();
								iLocal_933 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_271()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_941))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_941))
		{
			if (unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
			{
				bLocal_977 = true;
				if (unk_0xC450B06E5AAA0985(uLocal_952))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_952);
				}
				func_116(Local_1064, 1097859072, 1116471296);
			}
			unk_0xA62957B100C8DE6D(3f, 1073741824, 3);
			func_265();
			iLocal_933 = 15;
		}
	}
}

void func_272()
{
	func_263(0);
	func_279();
	func_277();
	func_274();
	func_273();
	func_260("ASS_VA_KILL", 7500, -1);
	system::settimera(0);
	bLocal_988 = true;
	func_265();
	iLocal_933 = 12;
}

void func_273()
{
	unk_0x55098D9E9AD58806(iLocal_1077);
	unk_0x55098D9E9AD58806(iLocal_1078);
}

void func_274()
{
	func_276(&(Local_1429.f_4));
	func_275(&(Local_1429[0]));
	func_275(&(Local_1429[1]));
	func_275(&(Local_1429.f_8[0]));
	func_275(&(Local_1429.f_8[1]));
	func_275(&(Local_1429.f_5[0]));
	func_275(&(Local_1429.f_5[1]));
	func_275(&(Local_1429.f_3));
}

void func_275(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0xF6C26AE940C14749(*uParam0))
		{
			unk_0x734A9F4537A31459(uParam0);
		}
		else
		{
			unk_0xF09E30AF1B8FB379(uParam0);
		}
	}
}

void func_276(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0xF6C26AE940C14749(*uParam0))
		{
			unk_0x68298CA6191CDFDB(uParam0);
		}
	}
}

void func_277()
{
	struct<3> Var0[2];
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_941) && !unk_0x1C2F771CDC87A3A5(iLocal_941, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_941, 1) };
		fVar2 = unk_0xCFC0C995455A6204(iLocal_941);
	}
	Var0[0 /*3*/] = { unk_0xF10F2A2453AF1DFB(Var1, fVar2, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { unk_0xF10F2A2453AF1DFB(Var1, fVar2, -1f, -1f, 0f) };
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (iVar3 == 0)
		{
			iLocal_942[iVar3] = unk_0xB1DBFEB95C0EFB88(26, iLocal_1077, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38,3253f, uLocal_1048[iLocal_1024], 1, 1);
		}
		else
		{
			iLocal_942[iVar3] = unk_0xB1DBFEB95C0EFB88(26, iLocal_1078, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38,3253f, uLocal_1048[iLocal_1024], 1, 1);
		}
		unk_0x788F35D395511DFE(iLocal_942[iVar3], 1, 1);
		unk_0x77EFA99E6A8FFC43(iLocal_942[iVar3]);
		unk_0xBE8796DB2B90A437(iLocal_942[iVar3], 3, 0);
		unk_0xBE8796DB2B90A437(iLocal_942[iVar3], 23, 1);
		unk_0xBE8796DB2B90A437(iLocal_942[iVar3], 30, 0);
		unk_0xBE8796DB2B90A437(iLocal_942[iVar3], 13, 1);
		unk_0x570AAA413775DFFB(iLocal_942[iVar3], 2);
		unk_0x44FB298D6382876D(iLocal_942[iVar3], 1);
		func_278(iLocal_942[iVar3], 1);
		unk_0x70FF391C9D345B04(iLocal_942[iVar3], 1);
		iVar3++;
	}
}

void func_278(int iParam0, bool bParam1)
{
	if (iParam0 != iLocal_941)
	{
		unk_0xB41DEC3AAC1AA107(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!bParam1)
	{
		unk_0xD0764B65C2DFEDCA(iParam0, 1);
		unk_0xBE8796DB2B90A437(iParam0, 0, 1);
	}
	else
	{
		unk_0xD0764B65C2DFEDCA(iParam0, 2);
		unk_0xBE8796DB2B90A437(iParam0, 13, 1);
	}
	unk_0xC652B7E19CE29859(iParam0, 60);
	unk_0x139711196A42A037(iParam0, 2);
	unk_0xAAA71DD7E9059338(iParam0, 1);
	unk_0x4BD214FCF7332FF6(iParam0, 1);
	unk_0x3CEA1FD137ACE2D9(iParam0, iLocal_1082);
}

void func_279()
{
	func_281();
	iLocal_1024 = unk_0xC5935DFB3F39785A(0, iLocal_1022);
	iLocal_941 = unk_0xB1DBFEB95C0EFB88(26, iLocal_1075, Local_1055[iLocal_1024 /*3*/], uLocal_1048[iLocal_1024], 1, 1);
	unk_0x788F35D395511DFE(iLocal_941, 1, 1);
	unk_0x77EFA99E6A8FFC43(iLocal_941);
	func_278(iLocal_941, 1);
	unk_0x55098D9E9AD58806(iLocal_1075);
	if (!unk_0xC450B06E5AAA0985(uLocal_952))
	{
		uLocal_952 = func_280(iLocal_941, 0, 0);
	}
	unk_0x5D3946F818C6B331(uLocal_952, 1f);
}

int func_280(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_205(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, iParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_205(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, iParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_205(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

void func_281()
{
	int iVar0;
	
	iLocal_1022 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x7B780C491DEC834E(Local_1054[iVar0 /*3*/], 5f) && !func_285(iVar0, 6f))
		{
			Local_1055[iLocal_1022 /*3*/] = { Local_1054[iVar0 /*3*/] };
			uLocal_1048[iLocal_1022] = fLocal_1047[iVar0];
			iLocal_1022++;
		}
		iVar0++;
	}
	if (iLocal_1022 == 0)
	{
		if (func_104())
		{
			Local_1055[0 /*3*/] = { Local_1054[1 /*3*/] };
			uLocal_1048[0] = fLocal_1047[1];
			iLocal_1022++;
		}
		else if (func_284())
		{
			Local_1055[0 /*3*/] = { Local_1054[0 /*3*/] };
			uLocal_1048[0] = fLocal_1047[0];
			iLocal_1022++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_283(Local_1054[iVar0 /*3*/], 1) > 30f && !func_285(iVar0, 6f))
				{
					Local_1055[iLocal_1022 /*3*/] = { Local_1054[iVar0 /*3*/] };
					uLocal_1048[iLocal_1022] = fLocal_1047[iVar0];
					iLocal_1022++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1022 == 0)
	{
		func_282();
	}
}

void func_282()
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar2 = system::vdist(Var1, Local_1054[iVar0 /*3*/]);
		if (fVar2 > fLocal_1053)
		{
			fLocal_1053 = fVar2;
			iLocal_1052 = iVar0;
		}
		iVar0++;
	}
	Local_1055[0 /*3*/] = { Local_1054[iLocal_1052 /*3*/] };
	uLocal_1048[0] = fLocal_1047[iLocal_1052];
}

float func_283(struct<3> Param0, int iParam1)
{
	return func_32(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), Param0, iParam1);
}

int func_284()
{
	if (func_32(unk_0x4A8C381C258A124D(), -1237,566f, -156,8824f, 39,41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0, float fParam1)
{
	if (unk_0x913602ADD2D86A7A(Local_1054[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_286()
{
	switch (iLocal_1020)
	{
		case 0:
			if (!iLocal_989)
			{
				func_112(&Local_318, 4);
				func_289();
				system::settimera(0);
				iLocal_1020++;
			}
			break;
		
		case 1:
			if (((bLocal_968 && !bLocal_966) && func_288()) && func_287())
			{
				func_265();
				iLocal_933 = 11;
			}
			break;
	}
}

int func_287()
{
	int iVar0;
	
	unk_0xEC9DAA34BBB4658C(iLocal_1075);
	if (unk_0x6252BC0DD8A320DB(iLocal_1075))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_288()
{
	if (((unk_0xFC8BFE4B41177C22(uLocal_943[0]) && unk_0xFC8BFE4B41177C22(uLocal_943[1])) && !unk_0x4FAFF4BCB7633475(uLocal_943[0])) && !unk_0x4FAFF4BCB7633475(uLocal_943[1]))
	{
		if (unk_0xCECDBB848D53DEB2(uLocal_943[0], iLocal_1067, 0) && unk_0xCECDBB848D53DEB2(uLocal_943[1], iLocal_1067, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_935[iVar0] = 4;
		iVar0++;
	}
	bLocal_982 = true;
}

void func_290()
{
	switch (iLocal_1020)
	{
		case 0:
			func_312(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_112(&Local_318, 2);
			if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
			{
				unk_0xC229299217554C78(iLocal_1067, 0, 1, 0);
			}
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_1072) && !unk_0x1C2F771CDC87A3A5(iLocal_1072, 0))
					{
						func_298(iLocal_1072);
					}
				}
			}
			func_295();
			func_294();
			unk_0x86A2BC11844DEEB3("ASS1_START");
			unk_0x0B0C9A0F9AAEB7F0(&Local_318, 4);
			func_260("ASS_VA_PLANT", 7500, 1);
			iLocal_1020++;
			break;
		
		case 1:
			if (iLocal_995)
			{
				if (((!func_293(&iLocal_1069) && !func_292(&(iLocal_1073[0]), &bLocal_1016)) && !func_292(&(iLocal_1073[1]), &bLocal_1016)) && !func_292(&(iLocal_1073[2]), &bLocal_1016))
				{
					system::settimera(0);
					func_265();
					iLocal_933 = 10;
				}
				else
				{
					func_291();
				}
			}
			break;
	}
}

void func_291()
{
	iLocal_939 = 1;
	bLocal_966 = true;
}

int func_292(var uParam0, int iParam1)
{
	if (!unk_0xFC8BFE4B41177C22(*uParam0))
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(iLocal_1068))
	{
		return 0;
	}
	if (func_30(*uParam0, iLocal_1068, 1) <= 5f)
	{
		iLocal_1069 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_293(var uParam0)
{
	struct<3> Var0;
	
	*uParam0 = unk_0xF0CA45A211FFDCD9(-1221,954f, -210,746f, 38,638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1067) && *uParam0 != iLocal_1068) && *uParam0 != Local_1429.f_4)
	{
		if (unk_0xFC8BFE4B41177C22(*uParam0) && !unk_0x1C2F771CDC87A3A5(*uParam0, 0))
		{
			if (unk_0xFD5C5BBD1FE92BB7(*uParam0, -1, 0) == 0)
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(*uParam0, 1) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1072 != 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_1072) && !unk_0x1C2F771CDC87A3A5(iLocal_1072, 0))
		{
			if (!func_99(iLocal_1072))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_1072, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_294()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_943[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1078;
			}
			else
			{
				iVar0 = iLocal_1077;
			}
			uLocal_943[iVar1] = unk_0xB1DBFEB95C0EFB88(26, iVar0, Local_1056[iVar1 /*3*/], fLocal_1043[iVar1], 1, 1);
			if (iVar1 == 0)
			{
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 0, 0, 2, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 3, 0, 0, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 4, 0, 1, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 8, 0, 0, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 0, 1, 2, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 3, 0, 1, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 4, 0, 0, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 8, 0, 0, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 0, 1, 2, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 3, 0, 2, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 4, 0, 1, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 8, 0, 0, 0);
				unk_0xD1C578C204015E1F(uLocal_943[iVar1], 11, 1, 1, 0);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(uLocal_943[iVar1]))
		{
			unk_0x3F58BFCF656F0DF1(uLocal_943[iVar1], 0);
			unk_0x44FB298D6382876D(uLocal_943[iVar1], 1);
			unk_0xBE8796DB2B90A437(uLocal_943[iVar1], 23, 1);
			unk_0xBE8796DB2B90A437(uLocal_943[iVar1], 30, 0);
			unk_0x570AAA413775DFFB(uLocal_943[iVar1], 2);
			unk_0x0428AFDCAA63B06E(uLocal_943[iVar1], 104, 1);
			func_278(uLocal_943[iVar1], 1);
		}
		iVar1++;
	}
}

void func_295()
{
	func_297();
	func_296();
	unk_0x55098D9E9AD58806(iLocal_1079);
}

void func_296()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_944[iVar0]))
		{
			if (iVar0 == 0)
			{
				uLocal_944[iVar0] = unk_0x8728A378EF2B46B2(iLocal_1068, 26, iLocal_1077, -1, 1, 1);
			}
			else if (iVar0 == 1)
			{
				uLocal_944[iVar0] = unk_0x8728A378EF2B46B2(iLocal_1068, 26, iLocal_1078, 0, 1, 1);
			}
			func_278(uLocal_944[iVar0], 1);
			unk_0xBE8796DB2B90A437(uLocal_944[iVar0], 3, 0);
			unk_0xBE8796DB2B90A437(uLocal_944[iVar0], 23, 1);
			unk_0xBE8796DB2B90A437(uLocal_944[iVar0], 30, 0);
			unk_0x570AAA413775DFFB(uLocal_944[iVar0], 2);
			unk_0x44FB298D6382876D(uLocal_944[iVar0], 1);
		}
		iVar0++;
	}
}

void func_297()
{
	if (!unk_0xFC8BFE4B41177C22(iLocal_1068))
	{
		iLocal_1068 = unk_0x5779387E956077A6(iLocal_1079, Local_1057, fLocal_1045, 1, 1, 0);
		unk_0x20DD46D27530FAC7(iLocal_1068, 0);
	}
}

void func_298(int iParam0)
{
	func_299(&(Global_107514.f_2890), &Global_107514, iParam0, 1);
}

int func_299(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0))
	{
		func_301(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_300(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_101533.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_301(var uParam0, int iParam1, int iParam2)
{
	func_307(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_304(iParam1, 145, 0);
	uParam0->f_11 = func_303(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_302(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		uParam0->f_6 = unk_0xCFC0C995455A6204(iParam1);
		uParam0->f_3 = { unk_0xE5741C6B6539231F(iParam1) };
		if (unk_0x5105BE70DEF1F5FB(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_79084 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_302(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]))
		{
			if (iParam0 == Global_78179.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_303(int iParam0)
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

int func_304(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_98854[iVar0])
				{
					if (iParam2 == 0 || unk_0x4B423FAA24E8ABF0(iParam0) == func_305(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_305(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_20(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_306(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_306(int iParam0, var uParam1, int iParam2)
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

void func_307(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_311(uParam1);
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
		if (uParam1->f_65 == -1 && !func_310(uParam1->f_66))
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
		func_309(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(iVar0 + 1));
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

int func_308(int iParam0)
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

int func_309(int iParam0, var uParam1, var uParam2)
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

int func_310(int iParam0)
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

void func_311(var uParam0)
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

void func_312(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x1B79E937E91F40C3("FinaleC2", unk_0x1AF90EB93E0012D6()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_101570)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_101570)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_164(1);
		if (iParam0 <= Global_101570)
		{
		}
		iVar1 = func_386(unk_0x1AF90EB93E0012D6(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113969.f_9088.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_384(iVar1);
			cVar3 = { Global_92301[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113969.f_9088.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x375B1B37EF136A49(&cVar3, uVar2, Global_101570, iParam0);
		}
		else
		{
			iVar4 = func_379(unk_0x1AF90EB93E0012D6(), 1);
			if (iVar4 != -1)
			{
				Global_113969.f_18577[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_378(iVar4)}, 4);
				unk_0x375B1B37EF136A49(&uVar5, 0, Global_101570, iParam0);
			}
			else
			{
				iVar6 = func_377(&(Global_101533.f_3));
				if (iVar6 > -1)
				{
					Global_113969.f_24989.f_4[iVar6] = 0;
				}
			}
		}
		Global_95691 = iParam2;
		Global_101570 = iParam0;
		func_313(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x1B79E937E91F40C3(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_101570)
	{
	}
}

void func_313(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_314(&Global_107514, unk_0x1AF90EB93E0012D6(), iParam0, uParam1, iParam3, iParam2);
}

void func_314(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_18();
	uParam0->f_1 = func_366();
	unk_0x239D73A1DE006629(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_334(&(uParam0->f_2884), 0);
		func_333(unk_0x4A8C381C258A124D());
		func_326(unk_0x4A8C381C258A124D(), 0);
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113969.f_2366.f_539.f_294[iVar1];
		if (iVar1 == func_325())
		{
			func_320(unk_0x4A8C381C258A124D(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_101258[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_101258[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_101258[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_101258[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_101258[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_101258[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_101258[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_101258[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_101258[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_101258[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113969.f_20567.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_61340[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113969.f_2366[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xDF7F16323520B858(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0xDF7F16323520B858(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0xDF7F16323520B858(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_316(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_315(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_315(var uParam0)
{
	*uParam0 = Global_97362;
	uParam0->f_1 = Global_97363;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_316(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x4A8C381C258A124D();
	}
	if (unk_0xFC8BFE4B41177C22(iParam2))
	{
		uParam1->f_5 = func_21(iParam2);
	}
	if (func_317(iParam2, &iVar0, iParam3, iParam5))
	{
		func_299(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x2E6A27037F1DC473(iVar0, joaat("skylift")) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
			{
				func_299(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_317(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				*uParam1 = unk_0xDC8D5832207C2EAD();
			}
			else
			{
				*uParam1 = unk_0x6EF03BE64E058E2F(iParam0, 1);
			}
			if (unk_0xFC8BFE4B41177C22(*uParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(*uParam1, 1), unk_0xD1A6A821F5AC81DB(iParam0, 1), 1) < 100f)
					{
						if (unk_0x2E6A27037F1DC473(*uParam1, joaat("taxi")))
						{
							if (unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != iParam0 && unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_318(*uParam1, func_18(), 1))
						{
							sVar0 = unk_0x1AF90EB93E0012D6();
							if (!unk_0x1B79E937E91F40C3(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x7F420695E3F776FB(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xD130E7CDEE903624(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x3F40AE65F056B43D(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x2E6A27037F1DC473(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_318(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_319(iParam1, iVar0, &sVar1, &iVar2))
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

int func_319(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_320(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = func_21(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_324(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_323(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_20(iVar0))
		{
			uParam1->f_59 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113969.f_2366.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			if (func_321(161, iParam3))
			{
				uParam1->f_59 = func_176(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_176(753, iParam3);
			}
			uParam1->f_60 = func_176(754, iParam3);
			uParam1->f_61 = func_176(755, iParam3);
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			if (func_321(161, iParam3))
			{
				uParam1->f_59 = func_176(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_176(753, iParam3);
			}
		}
	}
}

int func_321(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_322(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_322(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_171(uParam1));
}

void func_323(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
		*uParam3 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6DBAC05AFA907A23(iParam0) && unk_0xB34A70D5AC13FB8C(iParam0) != -1)
				{
					*uParam2 = unk_0xB34A70D5AC13FB8C(iParam0);
					*uParam3 = unk_0xAA6E5BB6733B4BB0(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_324(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC0120BBCC298EA2F(iParam0, iParam1);
		*uParam3 = unk_0xD6AED6BFCC58AF7F(iParam0, iParam1);
		*uParam4 = unk_0xDAF263B0E792EAEC(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_325()
{
	func_19();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_326(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_21(iParam0);
	if (func_20(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam0 == unk_0x4A8C381C258A124D())
		{
			func_327(iParam0, &(Global_113969.f_2366.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0xFCFCA9D377ED6568(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xAE146ED24909CAF4();
					if (Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113969.f_2366.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x755C848B9B13C696(unk_0x259BE71D8A81D4FA(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x1164A75E490C27B6(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x1164A75E490C27B6(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x1164A75E490C27B6(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_327(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	bool bVar10;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_332(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBCEDAE6CA2B2046E(iParam0, func_332(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_330(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, iVar2))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_330(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0xAFA659708600A8CD();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xA40B513DA7201333(iVar5, &Var7) && !func_329(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0x4BFA043D318BF9AE(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					bVar10 = false;
					bVar1 = false;
					while (bVar1 < unk_0x0A334014DFD4952C(iVar5))
					{
						if (unk_0x38A1582CAC3F4E95(iVar5, bVar1, &Var8))
						{
							if (!func_328(Var8.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), bVar10);
								}
								bVar10++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_329(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case joaat("weapon_pistolxm3"):
			case joaat("weapon_candycane"):
			case joaat("weapon_railgunxm3"):
			case 350597077:
			case joaat("weapon_battlerifle"):
			case joaat("weapon_snowlauncher"):
			case -624951259:
				return 1;
				break;
			}
	}
	return 0;
}

int func_330(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
				
				case 5:
					iVar0 = 1400690398;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
				
				case 7:
					iVar0 = joaat("component_microsmg_varmod_xm3");
					break;
				
				case 8:
					iVar0 = 1694268374;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
				
				case 10:
					iVar0 = 1605520746;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 4:
					iVar0 = 221907180;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
				
				case 8:
					iVar0 = 302671608;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1240142720;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -292433650;
					break;
				
				case 1:
					iVar0 = 494808810;
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1675905033;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_331(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_328(Var5.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_331(int iParam0, var uParam1)
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

int func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (func_20(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		Global_113969.f_2366.f_539.f_294[iVar0] = unk_0xE5E6F6EFCE07789A(iParam0);
	}
}

void func_334(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	uParam0->f_3 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
	uParam0->f_5 = unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D());
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		uParam0->f_4 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
	}
	if (system::vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (system::vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (system::vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (BitTest(Global_79638, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (BitTest(Global_79638, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (BitTest(Global_79638, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (BitTest(Global_79638, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0556019E7EE8EC9A(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, 1, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (system::vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (system::vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (system::vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_337(&iVar0))
		{
			if (func_336(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, 1, 0))
		{
			iVar3 = func_18();
			if (iVar3 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, 1, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_335(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_335(struct<3> Param0, char* sParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7830326EF9D54DBB(Param0))
	{
		iVar0 = unk_0x0556019E7EE8EC9A(Param2, sParam1);
		if (!unk_0xF8A8852F99E201DD(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x91398220755C14BF(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_336(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_50(*uParam1, 0f, 0f, 0f, 0);
}

int func_337(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_365())
		{
			*uParam0 = func_343(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 6, -1, 0, 1, -1);
			if (func_342(*uParam0) && !func_338(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_338(int iParam0)
{
	return func_339(iParam0, 0, 1);
}

int func_339(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_341() == 0)
		{
			return BitTest(func_176(func_340(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_341()
{
	return Global_32948;
}

int func_342(int iParam0)
{
	return func_339(iParam0, 5, 1);
}

int func_343(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam1 == 6 || iParam1 == func_364(iVar0))
		{
			if (!bParam3 || func_363(iVar0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(Param0, func_344(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_344(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_360(Global_103686);
			break;
		
		case 46:
			if (Global_1845111 != func_12())
			{
				if (func_359(Global_1845111))
				{
					return func_352(2, 2);
				}
				else if (func_351(Global_1845111))
				{
					return func_352(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_349(-9,9f, -0,5f, 1f);
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1964427;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159,901f, 1075,213f, -25,36174f;
			break;
		
		case 55:
			return -2194,123f, 1103,805f, -24,2451f;
			break;
		
		case 56:
			switch (func_348())
			{
				case 155:
					return 379,4285f, -53,6067f, 111,7088f;
					break;
				
				case 156:
					return -1029,166f, -426,3766f, 72,2069f;
					break;
				
				case 157:
					return -581,9924f, -721,3945f, 121,3509f;
					break;
				
				case 158:
					return -1013,718f, -768,3539f, 69,4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_345();
			break;
		
		case 59:
			return 560f, -405f, -69,6591f;
			break;
		
		case 60:
			return -1299,691f, -3017,165f, -48,2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_345()
{
	if (!func_347(Global_1949748))
	{
		return Global_1949748;
	}
	switch (func_346())
	{
		case 0:
			return -29,532f, 6435,136f, 31,162f;
		
		case 1:
			return 1705,214f, 4819,167f, 41,75f;
		
		case 2:
			return 1795,522f, 3899,753f, 33,869f;
		
		case 3:
			return 1335,536f, 2758,746f, 51,099f;
		
		case 4:
			return 795,583f, 1210,78f, 338,962f;
		
		case 5:
			return -3192,67f, 1077,205f, 20,594f;
		
		case 6:
			return -789,719f, 5400,921f, 33,915f;
		
		case 7:
			return -24,384f, 3048,167f, 40,703f;
		
		case 8:
			return 2666,786f, 1469,324f, 24,237f;
		
		case 9:
			return -1454,966f, 2667,503f, 3,2f;
		
		case 10:
			return 2340,418f, 3054,188f, 47,888f;
		
		case 11:
			return 1509,183f, -2146,795f, 76,853f;
		
		case 12:
			return 1137,404f, -1358,654f, 34,322f;
		
		case 13:
			return -57,208f, -2658,793f, 5,737f;
		
		case 14:
			return 1905,017f, 565,222f, 175,558f;
		
		case 15:
			return 974,484f, -1718,798f, 30,296f;
		
		case 16:
			return 779,077f, -3266,297f, 5,719f;
		
		case 17:
			return -587,728f, -1637,208f, 19,611f;
		
		case 18:
			return 733,99f, -736,803f, 26,165f;
		
		case 19:
			return -1694,632f, -454,082f, 40,712f;
		
		case 20:
			return -1330,726f, -1163,948f, 4,313f;
		
		case 21:
			return -496,618f, 40,231f, 52,316f;
		
		case 22:
			return 275,527f, 66,509f, 94,108f;
		
		case 23:
			return 260,928f, -763,35f, 30,559f;
		
		case 24:
			return -478,025f, -741,45f, 30,299f;
		
		case 25:
			return 894,94f, 3603,911f, 32,56f;
		
		case 26:
			return -2166,511f, 4289,503f, 48,733f;
		
		case 27:
			return 1465,633f, 6553,67f, 13,771f;
		
		case 28:
			return 1101,032f, -335,172f, 66,944f;
		
		case 29:
			return 149,683f, -1655,674f, 29,028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_346()
{
	return Global_2652592.f_2671;
}

int func_347(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_348()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

Vector3 func_349(struct<3> Param0)
{
	return unk_0xF10F2A2453AF1DFB(func_350(), 0f, Param0);
}

Vector3 func_350()
{
	return -880f, -2770f, -50f;
}

int func_351(int iParam0)
{
	if (iParam0 != func_12())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 0) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 1)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_352(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845111 != func_12())
	{
		if (iParam1 == 3)
		{
			if (func_353(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 4))
			{
				if (func_353(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 5))
			{
				if (func_353(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_353(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_358(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_358(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_356(iParam0) };
	}
	else
	{
		Var2 = { func_355(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_354(Var3, -Var0.f_3.f_2) };
	Var3 = { func_354(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_354(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_355(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_356(int iParam0)
{
	return func_357(iParam0);
}

struct<6> func_357(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_358(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 != func_12())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 3) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 4)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_360(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return func_350();
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_361() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_361()
{
	return func_362(unk_0x259BE71D8A81D4FA());
}

var func_362(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_363(int iParam0)
{
	return func_339(iParam0, 0, 0);
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

bool func_365()
{
	return Global_101585.f_393 > 0;
}

var func_366()
{
	var uVar0;
	
	func_376(&uVar0, unk_0x4BA5A16068183C5E());
	func_375(&uVar0, unk_0x18E502A71E28968C());
	func_374(&uVar0, unk_0x5295501D0862870D());
	func_369(&uVar0, unk_0xB12880C92EA6EE15());
	func_368(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_367(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_367(var uParam0, int iParam1)
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

void func_368(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_369(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_373(*uParam0);
	iVar1 = func_371(*uParam0);
	if (iParam1 < 1 || iParam1 > func_370(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_370(int iParam0, int iParam1)
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

var func_371(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_372(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_372(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_373(var uParam0)
{
	return uParam0 & 15;
}

void func_374(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_375(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_376(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_377(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3("BailBond1", sParam0))
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

struct<2> func_378(int iParam0)
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

int func_379(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x70E57E9927B6BA58(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_380(iVar0, &sVar1);
		if (unk_0x70E57E9927B6BA58(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_380(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_381(uParam1, "Abigail1", func_383(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 1:
			func_381(uParam1, "Abigail2", func_383(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 2:
			func_381(uParam1, "Barry1", func_383(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 3:
			func_381(uParam1, "Barry2", func_383(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 4:
			func_381(uParam1, "Barry3", func_383(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 5:
			func_381(uParam1, "Barry3A", func_383(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 6:
			func_381(uParam1, "Barry3C", func_383(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 7:
			func_381(uParam1, "Barry4", func_383(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_382(iParam0), 0, 0);
			break;
		
		case 8:
			func_381(uParam1, "Dreyfuss1", func_383(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 9:
			func_381(uParam1, "Epsilon1", func_383(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 10:
			func_381(uParam1, "Epsilon2", func_383(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 11:
			func_381(uParam1, "Epsilon3", func_383(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 12:
			func_381(uParam1, "Epsilon4", func_383(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 13:
			func_381(uParam1, "Epsilon5", func_383(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 14:
			func_381(uParam1, "Epsilon6", func_383(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 15:
			func_381(uParam1, "Epsilon7", func_383(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 16:
			func_381(uParam1, "Epsilon8", func_383(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 17:
			func_381(uParam1, "Extreme1", func_383(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 18:
			func_381(uParam1, "Extreme2", func_383(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 19:
			func_381(uParam1, "Extreme3", func_383(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 20:
			func_381(uParam1, "Extreme4", func_383(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 21:
			func_381(uParam1, "Fanatic1", func_383(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_382(iParam0), 1, 0);
			break;
		
		case 22:
			func_381(uParam1, "Fanatic2", func_383(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_382(iParam0), 1, 0);
			break;
		
		case 23:
			func_381(uParam1, "Fanatic3", func_383(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_382(iParam0), 0, 1);
			break;
		
		case 24:
			func_381(uParam1, "Hao1", func_383(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_382(iParam0), 0, 1);
			break;
		
		case 25:
			func_381(uParam1, "Hunting1", func_383(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 26:
			func_381(uParam1, "Hunting2", func_383(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 27:
			func_381(uParam1, "Josh1", func_383(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 28:
			func_381(uParam1, "Josh2", func_383(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 29:
			func_381(uParam1, "Josh3", func_383(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 30:
			func_381(uParam1, "Josh4", func_383(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 31:
			func_381(uParam1, "Maude1", func_383(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 32:
			func_381(uParam1, "Minute1", func_383(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 33:
			func_381(uParam1, "Minute2", func_383(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 34:
			func_381(uParam1, "Minute3", func_383(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 35:
			func_381(uParam1, "MrsPhilips1", func_383(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 36:
			func_381(uParam1, "MrsPhilips2", func_383(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 37:
			func_381(uParam1, "Nigel1", func_383(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 38:
			func_381(uParam1, "Nigel1A", func_383(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 39:
			func_381(uParam1, "Nigel1B", func_383(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_382(iParam0), 1, 1);
			break;
		
		case 40:
			func_381(uParam1, "Nigel1C", func_383(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_382(iParam0), 1, 1);
			break;
		
		case 41:
			func_381(uParam1, "Nigel1D", func_383(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_382(iParam0), 1, 1);
			break;
		
		case 42:
			func_381(uParam1, "Nigel2", func_383(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 43:
			func_381(uParam1, "Nigel3", func_383(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 1, 1);
			break;
		
		case 44:
			func_381(uParam1, "Omega1", func_383(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 45:
			func_381(uParam1, "Omega2", func_383(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 46:
			func_381(uParam1, "Paparazzo1", func_383(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 47:
			func_381(uParam1, "Paparazzo2", func_383(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 48:
			func_381(uParam1, "Paparazzo3", func_383(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 49:
			func_381(uParam1, "Paparazzo3A", func_383(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 50:
			func_381(uParam1, "Paparazzo3B", func_383(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 51:
			func_381(uParam1, "Paparazzo4", func_383(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 52:
			func_381(uParam1, "Rampage1", func_383(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 54:
			func_381(uParam1, "Rampage3", func_383(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 55:
			func_381(uParam1, "Rampage4", func_383(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 56:
			func_381(uParam1, "Rampage5", func_383(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_382(iParam0), 0, 0);
			break;
		
		case 53:
			func_381(uParam1, "Rampage2", func_383(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_382(iParam0), 1, 0);
			break;
		
		case 57:
			func_381(uParam1, "TheLastOne", func_383(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 58:
			func_381(uParam1, "Tonya1", func_383(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 59:
			func_381(uParam1, "Tonya2", func_383(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 60:
			func_381(uParam1, "Tonya3", func_383(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 61:
			func_381(uParam1, "Tonya4", func_383(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		case 62:
			func_381(uParam1, "Tonya5", func_383(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_382(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_381(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_382(int iParam0)
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

struct<2> func_383(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_378(iParam0) };
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

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_385(Global_113969.f_9088.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_385(Global_113969.f_9088.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_385(Global_113969.f_9088.f_99.f_205[11]);
			break;
		
		case 90:
			return func_385(Global_113969.f_9088.f_99.f_205[7]);
			break;
		
		case 93:
			return func_385(Global_113969.f_9088.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_386(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x70E57E9927B6BA58(sParam0);
	iVar1 = func_387(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_387(int iParam0, bool bParam1)
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

void func_388()
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			if (unk_0x5105BE70DEF1F5FB(iVar0, -1214,517f, -158,91f, -39,165f, -1243,589f, -238,784f, 39,165f, 15f, 0, 0, 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
			{
				if (unk_0xDF93B3CFAC96698F(iVar0) <= 0,5f)
				{
					if (!func_58(&uLocal_1095))
					{
						func_55(&uLocal_1095);
					}
				}
				else if (func_58(&uLocal_1095))
				{
					func_56(&uLocal_1095);
				}
				if (func_58(&uLocal_1095))
				{
					if (func_52(&uLocal_1095) > 10f)
					{
						func_37(2);
					}
				}
			}
			else if (func_58(&uLocal_1095))
			{
				func_56(&uLocal_1095);
			}
		}
	}
}

void func_389()
{
	switch (iLocal_1020)
	{
		case 0:
			if (func_420(1084227584, 1) || (bLocal_978 && unk_0xE945B67B28139DA2(uLocal_957)))
			{
				func_419(-1248,398f, -183,366f, 37,72881f, -1216,437f, -196,8727f, 44,07541f, 59,25f, Local_1415, fLocal_1416, 1, 1, 1, 0, 0);
				unk_0x60040CDD28AA1BC3(-1220,57f, -185,96f, 38,4f, 50f, 0, 0, 0, 0, 0, 0, 0);
				unk_0xEC73DFE5CE55E19C(-1220,57f, -185,96f, 38,4f, 50f, 0);
				func_418();
				func_417();
				if (!unk_0x1C2F771CDC87A3A5(iLocal_1067, 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
					{
						unk_0x88556DA0593A0748(iLocal_1067, 107, "ASSOJva", 1);
						unk_0x8BCD7C11D27FB9A1(iLocal_1067, 2500f);
					}
				}
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						unk_0x38911F7BA2D48F10(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), "OFF");
					}
				}
				iLocal_1020++;
			}
			else if (unk_0xE945B67B28139DA2(uLocal_957))
			{
			}
			break;
		
		case 1:
			if (func_390())
			{
				iLocal_1021 = 0;
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
				func_542();
				func_265();
				iLocal_933 = 9;
			}
			break;
	}
}

int func_390()
{
	int iVar0;
	
	switch (iLocal_1021)
	{
		case 0:
			func_416(0, 0, 1);
			func_415();
			unk_0x2A09425009DAD0F5(uLocal_1080, "HAND_SHAKE", 0,2f);
			unk_0x2A09425009DAD0F5(uLocal_1081, "HAND_SHAKE", 0,2f);
			unk_0xB56F35D8A770F80F(uLocal_1081, uLocal_1080, 6000, 0, 0);
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			unk_0x428C32CC68809A35(1);
			unk_0x406CBCEA35499884();
			func_260("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_978)
			{
				func_414();
				unk_0x64BB72494B9DF6DC(0);
				unk_0xD815D4BD1AE9E85A(0, 1065353216);
			}
			else
			{
				func_406();
			}
			system::settimera(0);
			iLocal_1021++;
			break;
		
		case 1:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_1067, 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
				{
					if (system::timera() > 6000)
					{
						if (unk_0x050D073F91C5243C(iLocal_1067))
						{
							unk_0x1D2DAF2A41FFC4A0(iLocal_1067);
						}
						unk_0x88556DA0593A0748(iLocal_1067, 102, "ASSOJva", 1);
						unk_0x8BCD7C11D27FB9A1(iLocal_1067, 4500f);
						unk_0x44A13535A15C20E0(iLocal_1067, 1);
						func_260("ASS_VA_SNIPE2", 7500, 1);
						unk_0xA3774254665BAA82(uLocal_1080, -1218,861f, -191,0496f, 38,83616f, 3,519839f, -0,000706f, 42,27108f, 38f, 0, 1, 1, 2);
						unk_0x1991568378B6C0D0(uLocal_1080, 0,5f);
						unk_0x12DA57732DE5D8BB(uLocal_1080, 7f);
						unk_0x2A09425009DAD0F5(uLocal_1080, "HAND_SHAKE", 0,2f);
						unk_0xA3774254665BAA82(uLocal_1081, -1218,91f, -190,8791f, 38,84585f, 3,519839f, -0,000706f, 43,33815f, 38f, 0, 1, 1, 2);
						unk_0x1991568378B6C0D0(uLocal_1081, 0,7f);
						unk_0x12DA57732DE5D8BB(uLocal_1081, 10f);
						unk_0x2A09425009DAD0F5(uLocal_1081, "HAND_SHAKE", 0,2f);
						unk_0xB56F35D8A770F80F(uLocal_1081, uLocal_1080, 2000, 3, 3);
						iLocal_1021++;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_1067, 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_1067) >= 7000f)
					{
						unk_0x36D3AD4491CD32BA(iLocal_1067);
						iLocal_1019 = 0;
						while (iLocal_1019 < 3)
						{
							if (!unk_0x1C2F771CDC87A3A5(uLocal_943[iLocal_1019], 0))
							{
								if (iLocal_1019 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1019 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (unk_0x9B5C1660CCDF7189(uLocal_943[iLocal_1019], joaat("script_task_perform_sequence")) != 1)
								{
									unk_0xD0557B139A542F12(&uLocal_1074);
									unk_0xB5396F1FB088FE38(&uLocal_1074);
									unk_0x092B9247AF00F5CF(0, iVar0, 0);
									unk_0xA966E518B752B92A(0, Local_1054[iLocal_1019 /*3*/], 1f, 20000, 0,25f, 0, 1193033728);
									unk_0x93C0674FC00824D0(uLocal_1074);
									unk_0x4BD42B0527065BB6(uLocal_943[iLocal_1019], uLocal_1074);
									unk_0xD0557B139A542F12(&uLocal_1074);
								}
							}
							iLocal_1019++;
						}
						system::settimera(0);
						iLocal_1021++;
					}
				}
			}
			break;
		
		case 3:
			if (system::timera() >= 2000)
			{
				if (unk_0x3B5989D5DB08A155() == 4)
				{
					unk_0xA3774254665BAA82(uLocal_1080, -1265,549f, -213,4919f, 43,0913f, -0,055f, 0,0543f, -50,0795f, 38f, 0, 1, 1, 2);
					unk_0x2A09425009DAD0F5(uLocal_1080, "HAND_SHAKE", 0,2f);
					unk_0xA3774254665BAA82(uLocal_1081, -1266,063f, -213,922f, 43,0918f, -0,055f, 0,0543f, -50,0795f, 38f, 0, 1, 1, 2);
					unk_0x2A09425009DAD0F5(uLocal_1081, "HAND_SHAKE", 0,2f);
					unk_0xB56F35D8A770F80F(uLocal_1081, uLocal_1080, 4000, 3, 3);
					iLocal_1039 = 4000;
				}
				else
				{
					unk_0xA3774254665BAA82(uLocal_1080, -1266,193f, -215,217f, 43,2442f, -3,1088f, 0,0498f, -48,5594f, 38f, 0, 1, 1, 2);
					unk_0x2A09425009DAD0F5(uLocal_1080, "HAND_SHAKE", 0,2f);
					unk_0xA3774254665BAA82(uLocal_1081, -1267,53f, -215,7824f, 43,1067f, -9,2365f, 0,0498f, -48,3561f, 38f, 0, 1, 1, 2);
					unk_0x2A09425009DAD0F5(uLocal_1081, "HAND_SHAKE", 0,2f);
					unk_0xB56F35D8A770F80F(uLocal_1081, uLocal_1080, 4000, 3, 3);
					iLocal_1039 = 4000;
				}
				system::settimera(0);
				iLocal_1021++;
			}
			break;
		
		case 4:
			if (!iLocal_1017)
			{
				if (unk_0x3B5989D5DB08A155() == 4)
				{
					if (system::timera() >= (iLocal_1039 - 300))
					{
						unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
						unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1017 = 1;
					}
				}
			}
			if (system::timera() >= iLocal_1039)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_1067))
					{
						unk_0x1D2DAF2A41FFC4A0(iLocal_1067);
					}
				}
				unk_0x7821F942CAEEBEE1(102, "ASSOJva");
				unk_0x7821F942CAEEBEE1(107, "ASSOJva");
				unk_0x6515021478088FBC(iLocal_1067, 1, 1);
				unk_0x6515021478088FBC(iLocal_1067, 0, 1);
				unk_0x6515021478088FBC(iLocal_1067, 2, 1);
				unk_0x428C32CC68809A35(1);
				if (unk_0x3B5989D5DB08A155() == 4)
				{
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0xC289B882CEF4CAC9(1, 0f, 1, 0);
				}
				func_395(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_393(iLocal_334))
	{
		unk_0x428C32CC68809A35(1);
		func_391(1);
		return 1;
	}
	return 0;
}

void func_391(bool bParam0)
{
	unk_0x64BB72494B9DF6DC(0);
	unk_0xD815D4BD1AE9E85A(0, 1065353216);
	if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
	{
		if (unk_0x050D073F91C5243C(iLocal_1067))
		{
			unk_0x1D2DAF2A41FFC4A0(iLocal_1067);
		}
		unk_0x7821F942CAEEBEE1(102, "ASSOJva");
		unk_0x7821F942CAEEBEE1(107, "ASSOJva");
		unk_0xB2BD5837A8D3CEDA(iLocal_1067, Local_1059, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(iLocal_1067, fLocal_1042);
		unk_0x6515021478088FBC(iLocal_1067, 0, 1);
		unk_0x6515021478088FBC(iLocal_1067, 1, 1);
		unk_0x6515021478088FBC(iLocal_1067, 2, 1);
		unk_0x6515021478088FBC(iLocal_1067, 2, 1);
		iLocal_1021 = 0;
		unk_0x406CBCEA35499884();
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		func_395(1, 1, 1);
		if (bParam0)
		{
			func_392();
		}
	}
}

void func_392()
{
	unk_0x10B228D2FDB7AF16(1000);
	while (!unk_0x9390801B06EE998F())
	{
		system::wait(0);
	}
}

int func_393(int iParam0)
{
	if (func_394() && unk_0x1DD05E817C89C737() >= iParam0 + 1000)
	{
		unk_0x8F72AF14CE5AACE4(500);
		while (!unk_0x15CCE8886267624F())
		{
			system::wait(0);
		}
		func_236(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_394()
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

void func_395(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 1, 0);
	}
	unk_0x9C22AADBAF330B36(1);
	func_397(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x37B894853929BF1A(1);
		unk_0x747786364137DC63(1);
	}
	func_396(23, 0);
}

void func_396(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33197, bParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_33197, bParam0);
	}
}

void func_397(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_405(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_15())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_404(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_405(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_404(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_402(unk_0x259BE71D8A81D4FA())) && !func_399(unk_0x259BE71D8A81D4FA(), 0)) && !func_398()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_402(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_398()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_399(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_400(-1, 0) == 8;
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

int func_400(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_172();
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

int func_401(var uParam0)
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

int func_402(int iParam0)
{
	if (func_399(iParam0, 0))
	{
		return 1;
	}
	if (func_403())
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

bool func_403()
{
	return BitTest(Global_2621446, 3);
}

int func_404(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_405(int iParam0)
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

void func_406()
{
	func_407(-1252,463f, -227,5894f, 39,03287f, -1267,239f, -207,9924f, 44,67352f, 17f, -1266,405f, -219,1991f, 41,4459f, 304,8644f, func_413(), 1, 1, 1, 0, 0);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1266,173f, -214,0011f, 41,4459f, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 310,0126f);
	}
}

void func_407(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_408(Param0, Param1, fParam2, Param3, fParam4, Param5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_408(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xDC8D5832207C2EAD();
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!unk_0x110821AE6C63DD4F(iVar0))
		{
			unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			if (bParam10)
			{
				func_412(iVar0);
			}
			if (unk_0x5105BE70DEF1F5FB(iVar0, Param0, Param1, fParam2, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (func_409(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x2E6A27037F1DC473(iVar0, joaat("taxi")))
				{
					if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D() && unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != 0)
					{
						if (unk_0xED977E2AE2CB16EE(Param0 + Param1 / Vector(2f, 2f, 2f), unk_0xD1A6A821F5AC81DB(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_318(iVar0, func_18(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_347(Param5))
				{
					if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
					{
						iVar7 = unk_0x4B423FAA24E8ABF0(iVar0);
						unk_0xB07407B3B153C760(iVar0, &Var4, &Var5);
						if (unk_0xBA16CD57E37AC32A(iVar7))
						{
							Param5.f_0 = (Param5.f_0 + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1,1f, 1,1f, 1,1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1,2f, 1,2f, 1,2f) };
						}
						if ((Var5.f_0 - Var4.f_0) > Param5.f_0)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x60040CDD28AA1BC3(Param3, 5f, 0, 0, 0, 0, 0, 0, 0);
						unk_0x5C96CEA06531AB03(iVar0, fParam4);
						unk_0xB2BD5837A8D3CEDA(iVar0, Param3, 1, 0, 0, 1);
						unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xC229299217554C78(iVar0, 0, 1, 0);
							unk_0xC3680B85B2D7086A(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x110821AE6C63DD4F(iVar0) || !unk_0x7C9905528EE2C3AB(iVar0, 1))
						{
							unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 1);
						}
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
						{
							unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x8C1F7D7A31B2A38E(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x6F3435F85C932A08(Param0, Param1, fParam2, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (unk_0x110821AE6C63DD4F(iVar0))
					{
						unk_0x68298CA6191CDFDB(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x110821AE6C63DD4F(iVar0))
			{
				unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 0);
			}
			iVar8 = unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar8) && !unk_0x4FAFF4BCB7633475(iVar8))
			{
				unk_0xB2BD5837A8D3CEDA(iVar8, unk_0xD1A6A821F5AC81DB(iVar8, 1), 1, 0, 0, 1);
			}
			iVar9 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0);
				if (unk_0xFC8BFE4B41177C22(iVar8) && !unk_0x4FAFF4BCB7633475(iVar8))
				{
					unk_0xB2BD5837A8D3CEDA(iVar8, unk_0xD1A6A821F5AC81DB(iVar8, 1), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0xFD5C5BBD1FE92BB7(iVar0, 1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar8) && !unk_0x4FAFF4BCB7633475(iVar8))
				{
					unk_0xB2BD5837A8D3CEDA(iVar8, unk_0xD1A6A821F5AC81DB(iVar8, 1), 1, 0, 0, 1);
				}
				iVar8 = unk_0xFD5C5BBD1FE92BB7(iVar0, 2, 0);
				if (unk_0xFC8BFE4B41177C22(iVar8) && !unk_0x4FAFF4BCB7633475(iVar8))
				{
					unk_0xB2BD5837A8D3CEDA(iVar8, unk_0xD1A6A821F5AC81DB(iVar8, 1), 1, 0, 0, 1);
				}
			}
			unk_0x8C1F7D7A31B2A38E(&iVar0);
		}
	}
}

int func_409(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_411(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.f_0 = -Var1.f_1;
		Var0.f_1 = Var1.f_0;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var7.f_0, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var7.f_0, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var8.f_0, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { unk_0x0D1381B6E0F3987D(iParam0, Var8.f_0, Var8.f_1, 0f) };
		if (((((((((((((((func_410(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_410(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_410(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_410(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_410(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_410(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_410(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_410(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_410(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_410(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_410(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_410(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_410(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_410(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_410(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_410(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_410(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param2.f_0;
	fVar3 = Param2.f_1;
	fVar4 = Param4.f_0;
	fVar5 = Param4.f_1;
	fVar6 = Param6.f_0;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_411(struct<3> Param0)
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

void func_412(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x4C7724D572378B05(iParam0) <= 200f)
			{
				unk_0x2AEBE39F6BF7D6BC(iParam0, 500f);
			}
			if (unk_0x31B58D7972181BFA(iParam0) <= 700f)
			{
				unk_0x2AEBE39F6BF7D6BC(iParam0, 900f);
			}
			if (unk_0x8D91ADE44AC79BC9(iParam0) < 200)
			{
				unk_0x2AEBE39F6BF7D6BC(iParam0, 500f);
			}
		}
	}
}

Vector3 func_413()
{
	return 2,55f, 5,665f, 2,55f;
}

void func_414()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_1063, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 299,4985f);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_1070))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_1070, 0))
		{
			unk_0xC229299217554C78(iLocal_1070, 0, 1, 0);
			unk_0xB2BD5837A8D3CEDA(iLocal_1070, -1251,873f, -256,7999f, 38,2695f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(iLocal_1070, 296,7603f);
			unk_0x1DE99C193C7EC64B(iLocal_1070, 1084227584);
		}
	}
}

int func_415()
{
	iLocal_334 = unk_0x1DD05E817C89C737();
	return iLocal_334;
}

void func_416(int iParam0, int iParam1, int iParam2)
{
	unk_0x4686BC3BFDBB5348(unk_0xB6B621402486C3E4(), 0, iParam0);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xD7ABE01242C5B8E3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 15f);
	}
	unk_0x9C22AADBAF330B36(iParam1);
	func_236(0);
	func_397(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_396(23, 1);
}

void func_417()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_1067))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_1067, 0))
		{
			iLocal_1019 = 0;
			while (iLocal_1019 < 3)
			{
				if (!unk_0xFC8BFE4B41177C22(uLocal_943[iLocal_1019]))
				{
					if (iLocal_1019 == 0)
					{
						uLocal_943[iLocal_1019] = unk_0x8728A378EF2B46B2(iLocal_1067, 26, iLocal_1077, -1, 1, 1);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 0, 0, 2, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 3, 0, 0, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 4, 0, 1, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 8, 0, 0, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 11, 0, 0, 0);
					}
					else if (iLocal_1019 == 1)
					{
						uLocal_943[iLocal_1019] = unk_0x8728A378EF2B46B2(iLocal_1067, 26, iLocal_1077, 0, 1, 1);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 0, 1, 2, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 3, 0, 1, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 4, 0, 0, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 8, 0, 0, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 11, 0, 2, 0);
					}
					else if (iLocal_1019 == 2)
					{
						uLocal_943[iLocal_1019] = unk_0x8728A378EF2B46B2(iLocal_1067, 26, iLocal_1078, 1, 1, 1);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 0, 1, 2, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 3, 0, 2, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 4, 0, 1, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 8, 0, 0, 0);
						unk_0xD1C578C204015E1F(uLocal_943[iLocal_1019], 11, 1, 1, 0);
					}
				}
				iLocal_1019++;
			}
		}
	}
}

void func_418()
{
	if (!unk_0xFC8BFE4B41177C22(iLocal_1067))
	{
		iLocal_1067 = unk_0x5779387E956077A6(iLocal_1076, Local_1058, fLocal_1041, 1, 1, 0);
		unk_0x55098D9E9AD58806(iLocal_1076);
		unk_0x3B1F6012B676860B(iLocal_1067, 1);
		unk_0x788F35D395511DFE(iLocal_1067, 1, 1);
		unk_0x0248EA593ACD1C87(iLocal_1067, 1);
	}
}

void func_419(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_408(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

int func_420(int iParam0, int iParam1)
{
	int iVar0;
	
	if (((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && func_421(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), iParam0, 1, 1056964608, 0, 1, 0)) && !unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_58(&uLocal_319))
		{
			func_56(&uLocal_319);
			if (unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD()))
			{
				iVar0 = unk_0xDC8D5832207C2EAD();
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					unk_0x93C337B66C95C99B(iVar0, 0f);
				}
			}
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		else if (func_52(&uLocal_319) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_421(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_423(bParam5, bParam6);
	func_422(iParam0);
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

void func_422(int iParam0)
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

void func_423(bool bParam0, bool bParam1)
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

void func_424()
{
	int iVar0;
	
	switch (iLocal_1020)
	{
		case 0:
			func_438(500);
			func_312(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				func_260("ASS_VA_LOSECOPS", 7500, 1);
			}
			unk_0x60040CDD28AA1BC3(-1220,57f, -185,96f, 38,4f, 50f, 0, 0, 0, 0, 0, 0, 0);
			iLocal_1020++;
			break;
		
		case 1:
			func_437();
			if (!unk_0xFC8BFE4B41177C22(iLocal_1072))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
						{
							iLocal_1072 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
							if (unk_0xFC8BFE4B41177C22(iLocal_1072) && !unk_0x1C2F771CDC87A3A5(iLocal_1072, 0))
							{
								func_298(iLocal_1072);
							}
						}
					}
				}
			}
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (!func_434())
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_951))
					{
						uLocal_951 = func_433(Local_1063, 1);
						unk_0x594D5D0D7071B0DE(uLocal_951, "ASS_VA_DESTBLIP");
						func_432(&uLocal_951, -1234,307f, -250,6783f, 38,2238f, 28,914f);
						if (!iLocal_960)
						{
							func_260("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_960 = 1;
						}
						else if (func_431("ASS_VA_LOSECOPS", 0, 0))
						{
							unk_0x406CBCEA35499884();
						}
					}
				}
				else if (unk_0xE945B67B28139DA2(uLocal_957) && func_430())
				{
					func_429();
					func_265();
					iLocal_933 = 8;
				}
			}
			else if (!func_434())
			{
				func_428(uLocal_951, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_37(3);
			}
			func_425();
			break;
	}
}

void func_425()
{
	if (!iLocal_959)
	{
		if (func_283(Local_1063, 1) <= 100f)
		{
			func_427();
			uLocal_957 = unk_0x4F6F8824BE43F1F7(-1244,344f, -251,566f, 50,3194f, -9,2001f, 0,0498f, 6,3064f, 80f, 12, 127);
			iLocal_959 = 1;
		}
	}
	else if (func_283(Local_1063, 1) > 120f)
	{
		if (unk_0x5561E31B168FA823(uLocal_957))
		{
			unk_0x6C730FCE8A68AF6F(uLocal_957);
			func_273();
			iLocal_959 = 0;
		}
	}
	else if (!unk_0x5561E31B168FA823(uLocal_957))
	{
		if (!func_426())
		{
			iLocal_959 = 0;
		}
	}
}

int func_426()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("taxi")))
		{
			if (unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), -1, 0) != unk_0x4A8C381C258A124D())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_427()
{
	unk_0xEC9DAA34BBB4658C(iLocal_1077);
	unk_0xEC9DAA34BBB4658C(iLocal_1078);
}

void func_428(var uParam0, char* sParam1)
{
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (unk_0xC450B06E5AAA0985(uParam0))
		{
			unk_0xFE54B8568B2ABD12(&uParam0);
			unk_0x406CBCEA35499884();
			func_260(sParam1, 7500, 1);
		}
	}
}

void func_429()
{
	if (unk_0xC450B06E5AAA0985(uLocal_951))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_951);
	}
}

int func_430()
{
	int iVar0;
	
	func_427();
	if (unk_0x6252BC0DD8A320DB(iLocal_1077) && unk_0x6252BC0DD8A320DB(iLocal_1078))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_431(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

void func_432(var uParam0, struct<3> Param1, float fParam2)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		Global_113005 = *uParam0;
		Global_113010 = { Param1 };
		Global_113014 = fParam2;
	}
}

var func_433(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_205(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

int func_434()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_32(iLocal_940, Local_1063, 1);
	if (fVar0 < 200f)
	{
		func_436();
	}
	if (func_435())
	{
		if (unk_0x65FFA94B82A71741(iLocal_940, Local_1063, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
	{
		if ((fVar0 < 2f || unk_0x65FFA94B82A71741(iLocal_940, Local_1063, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1141,085f, -192,66f, 75,756f, -1246,085f, -192,66f, 100,756f, 115f, 0, 1, 0))
			{
				if (func_435() && iVar1)
				{
					return 1;
				}
				else if (!unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_435()
{
	int iVar0;
	
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()) || unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
	{
		iLocal_1070 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		iVar0 = unk_0x4B423FAA24E8ABF0(iLocal_1070);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_978 = true;
			return 1;
		}
	}
	return 0;
}

void func_436()
{
	var uVar0;
	
	switch (iLocal_1027)
	{
		case 0:
			unk_0xEC9DAA34BBB4658C(joaat("a_m_m_bevhills_01"));
			unk_0xEC9DAA34BBB4658C(joaat("a_f_m_bevhills_01"));
			unk_0xEC9DAA34BBB4658C(joaat("a_f_m_bevhills_02"));
			unk_0xEC9DAA34BBB4658C(joaat("a_m_y_hipster_01"));
			unk_0xEC9DAA34BBB4658C(joaat("taxi"));
			unk_0xD04A772C411165F2("OJAS_HotelTaxi01");
			unk_0x80813AC549A1E8AE("oddjobs@assassinate@hotel@");
			if ((((((unk_0x6252BC0DD8A320DB(joaat("a_m_m_bevhills_01")) && unk_0x6252BC0DD8A320DB(joaat("a_f_m_bevhills_01"))) && unk_0x6252BC0DD8A320DB(joaat("a_f_m_bevhills_02"))) && unk_0x6252BC0DD8A320DB(joaat("taxi"))) && unk_0x6252BC0DD8A320DB(joaat("a_m_y_hipster_01"))) && unk_0xE100DD4F82A51BDE("oddjobs@assassinate@hotel@")) && unk_0xA08EEC7306CF6198("OJAS_HotelTaxi01"))
			{
				iLocal_1027++;
			}
			break;
		
		case 1:
			Local_1429[0] = unk_0xB1DBFEB95C0EFB88(4, joaat("a_f_m_bevhills_01"), -1220,679f, -203,2689f, 38,3251f, 321,2841f, 1, 1);
			Local_1429[1] = unk_0xB1DBFEB95C0EFB88(4, joaat("a_f_m_bevhills_02"), -1219,596f, -201,3663f, 38,3251f, 110,7199f, 1, 1);
			unk_0xAAA71DD7E9059338(Local_1429[0], 1);
			unk_0xAAA71DD7E9059338(Local_1429[1], 1);
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0xE67051907958B5EB(0, Local_1429[1], -1, 0, 2);
			unk_0x634E47EF112F3802(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220,679f, -203,2689f, 38,3251f, 321,2841f, 0, 0, 1);
			unk_0x93C0674FC00824D0(uVar0);
			if (!unk_0x1C2F771CDC87A3A5(Local_1429[0], 0))
			{
				unk_0x4BD42B0527065BB6(Local_1429[0], uVar0);
			}
			unk_0xD0557B139A542F12(&uVar0);
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0xE67051907958B5EB(0, Local_1429[0], -1, 0, 2);
			unk_0x634E47EF112F3802(0, "WORLD_HUMAN_TOURIST_MAP", -1219,596f, -201,3663f, 38,3251f, 110,7199f, 0, 0, 1);
			unk_0x93C0674FC00824D0(uVar0);
			if (!unk_0x1C2F771CDC87A3A5(Local_1429[1], 0))
			{
				unk_0x4BD42B0527065BB6(Local_1429[1], uVar0);
			}
			unk_0xD0557B139A542F12(&uVar0);
			Local_1429.f_4 = unk_0x5779387E956077A6(joaat("taxi"), -1221,73f, -199,0665f, 38,1751f, 152,5038f, 1, 1, 0);
			unk_0x1DE99C193C7EC64B(Local_1429.f_4, 1084227584);
			Local_1429.f_3 = unk_0x8728A378EF2B46B2(Local_1429.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
			unk_0xAAA71DD7E9059338(Local_1429.f_3, 1);
			unk_0xE67051907958B5EB(Local_1429.f_3, Local_1429[0], -1, 0, 2);
			Local_1429.f_8[0] = unk_0xB1DBFEB95C0EFB88(4, joaat("a_m_m_bevhills_01"), -1211,597f, -184,5331f, 38,3255f, 4,5193f, 1, 1);
			Local_1429.f_8[1] = unk_0xB1DBFEB95C0EFB88(4, joaat("a_m_y_hipster_01"), -1211,654f, -182,7625f, 38,3255f, 166,2532f, 1, 1);
			unk_0xAAA71DD7E9059338(Local_1429.f_8[0], 1);
			unk_0xAAA71DD7E9059338(Local_1429.f_8[1], 1);
			unk_0x10425721983AE158(Local_1429.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x10425721983AE158(Local_1429.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1429.f_5[0] = unk_0xB1DBFEB95C0EFB88(4, joaat("a_m_m_bevhills_01"), -1229,099f, -176,3197f, 38,3255f, 231,8036f, 1, 1);
			Local_1429.f_5[1] = unk_0xB1DBFEB95C0EFB88(4, joaat("a_f_m_bevhills_02"), -1249,779f, -162,4767f, 39,4131f, 220,1651f, 1, 1);
			unk_0xAAA71DD7E9059338(Local_1429.f_5[0], 1);
			unk_0xAAA71DD7E9059338(Local_1429.f_5[1], 1);
			unk_0x10425721983AE158(Local_1429.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x10425721983AE158(Local_1429.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1429.f_11 = 1;
			unk_0x55098D9E9AD58806(joaat("a_m_m_bevhills_01"));
			unk_0x55098D9E9AD58806(joaat("a_f_m_bevhills_01"));
			unk_0x55098D9E9AD58806(joaat("a_f_m_bevhills_02"));
			unk_0x55098D9E9AD58806(joaat("a_m_y_hipster_01"));
			unk_0x55098D9E9AD58806(joaat("taxi"));
			iLocal_1027++;
			break;
		
		case 2:
			break;
	}
}

void func_437()
{
	struct<3> Var0;
	
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
	{
		iLocal_1013 = 1;
		return;
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	if (iLocal_1013)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			fLocal_1051 = system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_1063);
			iLocal_1013 = 0;
		}
	}
	else if (fLocal_1051 == 0f)
	{
		fLocal_1051 = system::vdist(-1510,291f, -946,9932f, 8,278f, Local_1063);
	}
	if (system::vdist(Var0, Local_1063) > (fLocal_1051 + 400f))
	{
		func_37(7);
	}
	else if (system::vdist(Var0, Local_1063) > (fLocal_1051 + 200f))
	{
		if (!iLocal_1009)
		{
			func_260("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1009 = 1;
		}
	}
}

void func_438(int iParam0)
{
	if (!unk_0x9390801B06EE998F())
	{
		unk_0x10B228D2FDB7AF16(iParam0);
		while (!unk_0x9390801B06EE998F())
		{
			system::wait(0);
		}
	}
}

void func_439()
{
	var uVar0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_946))
	{
		func_444();
		if (!unk_0x4FAFF4BCB7633475(iLocal_946))
		{
			fVar1 = func_29(iLocal_946, 1);
			unk_0xC1BC1B8A5AA67C6B(iLocal_946, 0);
			unk_0xD9757FAB956617BA(iLocal_946, 0);
			unk_0x3F58BFCF656F0DF1(iLocal_946, 0);
			unk_0x72B18C9612CF3DA0(iLocal_946, 16);
			unk_0x0428AFDCAA63B06E(iLocal_946, 208, 1);
			if (fVar1 < 5f)
			{
				if (func_58(&uLocal_1107))
				{
					if (!func_28())
					{
						if (func_441(&uLocal_1107, 10f))
						{
							func_35(&uLocal_1114, 3, iLocal_946, "LESTER", 0, 1);
							func_6(&uLocal_1114, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (unk_0xF6C26AE940C14749(iLocal_946) || !unk_0xCB5CAFF0A4A8B74B(iLocal_946))
				{
					func_440();
				}
			}
			switch (iLocal_1018)
			{
				case 0:
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						if ((unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()) || (unk_0xFC8BFE4B41177C22(iLocal_946) && unk_0x9B3D4335E0EDB0BE(iLocal_946, unk_0x4A8C381C258A124D(), 1))) || unk_0x9B3D4335E0EDB0BE(iLocal_1428, unk_0x4A8C381C258A124D(), 1))
						{
							if (unk_0x9B3D4335E0EDB0BE(iLocal_1428, unk_0x4A8C381C258A124D(), 1))
							{
							}
							unk_0x4669032A1DFBB449(iLocal_946, "move_lester_CaneUp", 1048576000);
							unk_0x10425721983AE158(iLocal_946, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1018 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x13CCB1AD131C1082(iLocal_946, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (unk_0x82E64DE58A6B84A8(iLocal_946, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0,376f)
						{
							unk_0xB5396F1FB088FE38(&uVar0);
							unk_0xA966E518B752B92A(0, -1502,029f, -948,687f, 7,65061f, 1f, 20000, 1f, 1, 1193033728);
							unk_0xA966E518B752B92A(0, -1462,339f, -964,178f, 6,3394f, 1f, -1, 1f, 1, 1193033728);
							unk_0x761F56E633460973(0, unk_0xCFC0C995455A6204(iLocal_946), 0);
							unk_0x93C0674FC00824D0(uVar0);
							unk_0x4BD42B0527065BB6(iLocal_946, uVar0);
							unk_0xD0557B139A542F12(&uVar0);
							unk_0x717804C8C8DA67BF(iLocal_946, joaat("MotionState_Walk"), 0, 0, 0);
							iLocal_1018 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_440()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_946))
	{
		unk_0x734A9F4537A31459(&iLocal_946);
	}
}

int func_441(var uParam0, float fParam1)
{
	if (func_443(uParam0, fParam1))
	{
		func_442(uParam0);
		return 1;
	}
	return 0;
}

void func_442(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_443(var uParam0, float fParam1)
{
	if (func_58(uParam0))
	{
		if (func_52(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_444()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_946))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_946, unk_0x4A8C381C258A124D(), 1))
		{
			func_37(9);
		}
	}
}

void func_445()
{
	unk_0x86A2BC11844DEEB3("ASS1_STOP");
	if (!BitTest(Global_101533.f_20, 13))
	{
		func_542();
	}
	func_446(0, -1, 1);
	unk_0x64BB72494B9DF6DC(0);
	unk_0xD815D4BD1AE9E85A(0, 1065353216);
	iLocal_933 = 18;
	func_438(500);
}

void func_446(int iParam0, int iParam1, int iParam2)
{
	if (func_549() && func_448())
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
		func_447(0);
	}
}

void func_447(int iParam0)
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

var func_448()
{
	return BitTest(Global_101533.f_20, 13);
}

void func_449()
{
	while (iLocal_1027 < 2)
	{
		func_436();
		system::wait(0);
	}
	func_418();
	func_391(0);
	if (!BitTest(Global_101533.f_20, 13))
	{
		func_542();
	}
	iLocal_987 = 0;
	iLocal_1011 = 0;
	unk_0x60040CDD28AA1BC3(-1220,57f, -185,96f, 38,4f, 50f, 0, 0, 0, 0, 0, 0, 0);
	unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
	unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
	unk_0x86A2BC11844DEEB3("ASS1_RESTART1");
	while (!func_430())
	{
		system::wait(0);
	}
	func_446(0, -1, 1);
	unk_0x64BB72494B9DF6DC(0);
	unk_0xD815D4BD1AE9E85A(0, 1065353216);
	iLocal_933 = 9;
	func_438(500);
}

void func_450()
{
	func_446(0, -1, 1);
	unk_0x64BB72494B9DF6DC(0);
	unk_0xD815D4BD1AE9E85A(0, 1065353216);
	func_438(500);
	iLocal_933 = 7;
}

void func_451()
{
	uLocal_1071[0] = unk_0x5779387E956077A6(iLocal_1079, -1270,045f, -251,4953f, 41,4459f, 214,63f, 1, 1, 0);
	uLocal_1071[1] = unk_0x5779387E956077A6(iLocal_1079, -1265,199f, -218,4823f, 45,9981f, 127,85f, 1, 1, 0);
}

void func_452()
{
	uLocal_1080 = unk_0x96A32328480B485C(26379945, -1244,344f, -251,566f, 50,3194f, -9,2001f, 0,0498f, 6,3064f, 38f, 0, 2);
	uLocal_1081 = unk_0x96A32328480B485C(26379945, -1243,588f, -251,4826f, 50,3187f, -9,2001f, 0,0498f, 6,3064f, 38f, 0, 2);
}

int func_453()
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((unk_0x6252BC0DD8A320DB(iLocal_1076) && unk_0x6252BC0DD8A320DB(iLocal_1079)) && unk_0x266D9DB5FCE4003B(102, "ASSOJva")) && unk_0x266D9DB5FCE4003B(107, "ASSOJva")) && unk_0xA08EEC7306CF6198("OJASva_101")) && unk_0xA08EEC7306CF6198("OJASva_101a")) && unk_0xA08EEC7306CF6198("OJASva_104")) && unk_0xE100DD4F82A51BDE("ODDJOBS@ASSASSINATE@GUARD")) && unk_0xE100DD4F82A51BDE("oddjobs@assassinate@hotel@")) && unk_0xDCB78A15E5F495DC(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_454()
{
	unk_0xEC9DAA34BBB4658C(iLocal_1076);
	unk_0xEC9DAA34BBB4658C(iLocal_1079);
	unk_0x80813AC549A1E8AE("ODDJOBS@ASSASSINATE@GUARD");
	unk_0x80813AC549A1E8AE("oddjobs@assassinate@hotel@");
	unk_0xF2CB0224D3BE0B42("ASS_VA", 3);
	unk_0xD772E6694B8472A6(102, "ASSOJva");
	unk_0xD772E6694B8472A6(107, "ASSOJva");
	unk_0xD04A772C411165F2("OJASva_101");
	unk_0xD04A772C411165F2("OJASva_101a");
	unk_0xD04A772C411165F2("OJASva_104");
}

void func_455(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA63572E348CC4CFB(Vector(39,1642f, -193,934f, -1237,397f) - Vector(150f, 150f, 150f), Vector(39,1642f, -193,934f, -1237,397f) + Vector(150f, 150f, 150f), 0, 1);
		unk_0xD1B0AF388B711EBC(-1349,176f, -39,0123f, -100,7554f, -1173,215f, -297,7677f, 100,8606f, 0, 1);
	}
	else
	{
		unk_0xA63572E348CC4CFB(-1340,905f, -68,1138f, -100,7554f, -1176,622f, -287,8646f, 100,8606f, 1, 1);
		unk_0x33B6B083EA6305A5(-1349,176f, -39,0123f, -100,7554f, -1173,215f, -297,7677f, 100,8606f, 1);
	}
}

void func_456()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { -1220,344f, -193,4014f, 38,1754f };
	Var1 = { -1279,658f, -222,0533f, 41,446f };
	func_35(&uLocal_1114, 1, iLocal_940, "FRANKLIN", 0, 1);
	unk_0x425BBE19F25A57AB(0,2f);
	unk_0x06CD913C241C765E("Guards", &iLocal_1082);
	unk_0xD414C47AFF81382A(1, joaat("COP"), iLocal_1082);
	unk_0xD414C47AFF81382A(1, iLocal_1082, joaat("COP"));
	unk_0xD414C47AFF81382A(5, iLocal_1082, joaat("player"));
	unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_1082);
	unk_0x2094BC4B6731BA68(-1220,57f, -185,96f, 38,4f, 200f, 1, 0, 0, 0);
	unk_0x89C4F1335B4A6633(-1298,684f, -324,0442f, -35,578f, -1113,372f, -46,1583f, 55,609f);
	uLocal_955 = unk_0xA7B0B03284E7503C(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), 0, 1, 1, 1, 1);
	uLocal_956 = unk_0xA7B0B03284E7503C(Var1 - Vector(45f, 35f, 35f), Var1 + Vector(45f, 35f, 35f), 0, 1, 1, 1, 1);
}

void func_457()
{
	StringCopy(&Local_921, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_921.f_6), {Global_64181}, 6);
	StringCopy(&(Local_921.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_921.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_921.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_921.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_921.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_921.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_921.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_921.f_54), "ASS_VA_COMP", 24);
}

void func_458()
{
	Local_1057 = { -1343,493f, -153,199f, 47,1825f };
	fLocal_1045 = 260,3612f;
	Local_1058 = { -1242,213f, -241,5975f, 38,71f };
	fLocal_1041 = 96,8755f;
	Local_1059 = { -1221,631f, -186,8819f, 38,7996f };
	fLocal_1042 = 201,0763f;
	fLocal_1046 = 40f;
	Local_318.f_2 = 40f;
	Local_1054[0 /*3*/] = { -1221,154f, -170,9907f, 38,3253f };
	Local_1054[1 /*3*/] = { -1210,556f, -192,882f, 38,3253f };
	Local_1054[2 /*3*/] = { -1216,369f, -203,6806f, 38,3253f };
	fLocal_1047[0] = 157,3177f;
	fLocal_1047[1] = 58,3594f;
	fLocal_1047[2] = 65,6443f;
	Local_1056[0 /*3*/] = { -1220,377f, -169,407f, 38,3253f };
	Local_1056[1 /*3*/] = { -1208,963f, -193,8791f, 38,3253f };
	Local_1056[2 /*3*/] = { -1214,955f, -205,0824f, 38,3253f };
	Local_1056[3 /*3*/] = { -1217,518f, -197,13f, 38,3254f };
	Local_1056[4 /*3*/] = { -1231,892f, -194,382f, 38,1753f };
	fLocal_1043[0] = 160,0748f;
	fLocal_1043[1] = 58,3365f;
	fLocal_1043[2] = 58,0214f;
	fLocal_1043[3] = 97,6664f;
	fLocal_1043[4] = 225,8689f;
	iLocal_1019 = 0;
	while (iLocal_1019 <= 4)
	{
		uLocal_1044[iLocal_1019] = unk_0xD2AA6F822D3A55D2(0f, 2f);
		iLocal_1019++;
	}
	fLocal_325 = 7000f;
	fLocal_326 = 2000f;
	iLocal_939 = 0;
	iLocal_1007 = 0;
	bLocal_1008 = false;
	iLocal_993 = 0;
	bLocal_1016 = false;
	iLocal_1015 = 0;
}

void func_459()
{
	switch (iLocal_1020)
	{
		case 0:
			unk_0x839AD252B0708F35("ASS_INT_2_ALT1", 8);
			unk_0xEC9DAA34BBB4658C(joaat("ig_lestercrest"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_cs_walking_stick"));
			unk_0x80813AC549A1E8AE("oddjobs@assassinate@hotel@leadin");
			unk_0x80813AC549A1E8AE("oddjobs@assassinate@hotel@leaning@");
			unk_0x73DEEAB0747FB17C("move_lester_CaneUp");
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			if ((((unk_0x6252BC0DD8A320DB(joaat("ig_lestercrest")) && unk_0x6252BC0DD8A320DB(joaat("prop_cs_walking_stick"))) && unk_0xE100DD4F82A51BDE("oddjobs@assassinate@hotel@leadin")) && unk_0xE100DD4F82A51BDE("oddjobs@assassinate@hotel@leaning@")) && unk_0x8175BC6D49412468("move_lester_CaneUp"))
			{
				iLocal_1020++;
			}
			break;
		
		case 1:
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				func_416(56, 0, 1);
				func_419(-1514,611f, -927,4667f, 7,133712f, -1496,948f, -942,224f, 16,18723f, 30f, -1523,174f, -924,6732f, 9,1221f, 53,0177f, 1, 1, 1, 1, 0);
				unk_0x2094BC4B6731BA68(-1507,715f, -941,1313f, 8,37286f, 10f, 1, 0, 0, 0);
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_1417, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fLocal_1418);
				unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
				unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!unk_0x78411E34CF90EA8C(uLocal_1419))
				{
					uLocal_1419 = unk_0x96A32328480B485C(26379945, Local_1421, Local_1422, 42,2032f, 1, 2);
					unk_0x2A09425009DAD0F5(uLocal_1419, "HAND_SHAKE", 0,3f);
				}
				if (!unk_0x78411E34CF90EA8C(uLocal_1420))
				{
					uLocal_1420 = unk_0x96A32328480B485C(26379945, Local_1423, Local_1424, 42,2032f, 0, 2);
					unk_0xB56F35D8A770F80F(uLocal_1420, uLocal_1419, 5000, 1, 1);
					unk_0x2A09425009DAD0F5(uLocal_1419, "HAND_SHAKE", 0,3f);
				}
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				if (func_46(0))
				{
					unk_0x10B228D2FDB7AF16(800);
				}
				iLocal_1020++;
			}
			break;
		
		case 2:
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_58(&uLocal_1425))
					{
						func_55(&uLocal_1425);
					}
				}
				if (func_58(&uLocal_1425))
				{
					if (func_52(&uLocal_1425) > 6f)
					{
						iLocal_1020++;
					}
				}
			}
			break;
		
		case 3:
			if (func_460())
			{
				iLocal_1020++;
			}
			break;
		
		case 4:
			func_397(1, 1, 1, 0, 0, 0, 0);
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "Franklin", 0, 0, 0);
			}
			unk_0xF293D66D4452C854(iLocal_946, "Lester", 2, joaat("ig_lestercrest"), 0);
			unk_0xF293D66D4452C854(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			unk_0xED65412F8B26ED99(0);
			unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			iLocal_1020++;
			break;
		
		case 5:
			if (unk_0xFD216000DC314A92())
			{
				unk_0x3AA8CFEBC938A945(0);
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				iLocal_1020++;
			}
			break;
		
		case 6:
			if (unk_0xE37AC296E66C33AF())
			{
				unk_0x3C44EF9027A21847(0);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_946))
			{
				if (unk_0x24CAD023099769B1("Lester", 0))
				{
					if (unk_0xFC8BFE4B41177C22(unk_0x4240B5D04F91480C("Lester", 0)))
					{
						iLocal_946 = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("Lester", 0));
					}
				}
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_947))
			{
				if (unk_0x24CAD023099769B1("WalkingStick_Lester", 0))
				{
					if (unk_0xFC8BFE4B41177C22(unk_0x4240B5D04F91480C("WalkingStick_Lester", 0)))
					{
						iLocal_947 = unk_0x4240B5D04F91480C("WalkingStick_Lester", 0);
					}
				}
			}
			unk_0x64BB72494B9DF6DC(0);
			unk_0xD815D4BD1AE9E85A(0, 1065353216);
			if (unk_0xD8FC13DA1BA1DBA2("Franklin", 0))
			{
			}
			if (unk_0xFC8BFE4B41177C22(unk_0x4240B5D04F91480C("Lester", 0)))
			{
				if (unk_0xD8FC13DA1BA1DBA2("Lester", 0))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_946) && !unk_0x4FAFF4BCB7633475(iLocal_946))
					{
						unk_0xB2BD5837A8D3CEDA(iLocal_946, -1509,458f, -948,195f, 7,75f, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(iLocal_946, -11f);
						unk_0x10425721983AE158(iLocal_946, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						unk_0xD8ED11B32DF72E0B(iLocal_946, 0, 0);
					}
				}
			}
			if (unk_0xFC8BFE4B41177C22(unk_0x4240B5D04F91480C("Lester", 0)))
			{
				if (unk_0xD8FC13DA1BA1DBA2("WalkingStick_Lester", 0))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_946) && !unk_0x4FAFF4BCB7633475(iLocal_946))
					{
						unk_0x4D306DD94DD6FDBA(iLocal_947, iLocal_946, unk_0x72F7E39FB49FC0BA(iLocal_946, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					}
				}
			}
			if (unk_0xC9BA6D804FA4FAAA() && !unk_0xFD216000DC314A92())
			{
				func_397(0, 1, 1, 0, 0, 0, 0);
				if (!unk_0x4FAFF4BCB7633475(iLocal_946))
				{
					unk_0xD0F1DB0E50B367AD(iLocal_946, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x9FF00EA9A61211D2(iLocal_946, 1);
				}
				unk_0x64BB72494B9DF6DC(0);
				unk_0xD815D4BD1AE9E85A(0, 1065353216);
				if (unk_0x15CCE8886267624F())
				{
					system::wait(0);
					unk_0x10B228D2FDB7AF16(500);
				}
				func_395(1, 1, 1);
				iLocal_1020++;
			}
			break;
		
		case 7:
			func_56(&uLocal_1107);
			func_265();
			iLocal_933 = 4;
			break;
	}
}

bool func_460()
{
	bool bVar0;
	
	bVar0 = unk_0x0DDDD9D153BCF51F();
	if (!Global_79388)
	{
		if (!bVar0)
		{
			Global_79388 = 1;
		}
	}
	return bVar0;
}

void func_461()
{
	if (!unk_0xFC8BFE4B41177C22(iLocal_1428))
	{
		iLocal_1428 = unk_0x8366ABB82B1ABC59(-1510,103f, -947,7194f, 8,2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_462()
{
	int iVar0;
	
	if (iLocal_933 > 7)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0x1D25F777D0165BF3();
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
					{
						if ((iVar0 != iLocal_1073[0] && iVar0 != iLocal_1073[1]) && iVar0 != iLocal_1073[2])
						{
							if (iLocal_1038 >= 2)
							{
								iLocal_1038 = -1;
							}
							iLocal_1073[iLocal_1038 + 1] = iVar0;
							unk_0xEE0BCDB1B5E36BCB(iLocal_1073[iLocal_1038 + 1], 1, 0);
							unk_0xE8EF17ECD68C900D(iLocal_1073[iLocal_1038 + 1], 0);
							iLocal_1038++;
						}
					}
				}
			}
		}
	}
}

void func_463()
{
	int iVar0;
	
	if (iLocal_1005)
	{
		iVar0 = func_36(1116471296, 1);
		if (!unk_0x4FAFF4BCB7633475(iVar0))
		{
			func_34(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1114, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_464()
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1429.f_11)
	{
		if (!bLocal_996)
		{
			if (iLocal_933 < 10)
			{
				if (func_470())
				{
					iVar0 = func_36(1116471296, 1);
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(iVar0, 0))
					{
						if (func_29(iVar0, 0) < 10f)
						{
							Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
							Var1 = { Var1 };
							func_35(&uLocal_1114, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1114, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_469();
					bLocal_996 = true;
				}
				if (iLocal_961)
				{
					func_469();
					bLocal_996 = true;
				}
				else
				{
					func_468();
					func_465();
				}
			}
		}
	}
}

void func_465()
{
	if (bLocal_967)
	{
		if (IntToFloat(iLocal_1035) < (IntToFloat(iLocal_1032) - 5f))
		{
			func_467(Local_1429.f_8[0], 1);
			func_467(Local_1429.f_8[1], 1);
			func_467(Local_1429.f_5[0], 1);
			func_467(Local_1429.f_5[1], 1);
		}
		else
		{
			if ((func_29(Local_1429.f_8[0], 0) < 1f || func_29(Local_1429.f_8[1], 0) < 1f) || iLocal_965)
			{
				func_466(Local_1429.f_8[0], 1);
				func_466(Local_1429.f_8[1], 1);
			}
			if (!iLocal_965)
			{
				func_466(Local_1429.f_5[0], 0);
				func_466(Local_1429.f_5[1], 0);
			}
			else
			{
				func_466(Local_1429.f_5[0], 1);
				func_466(Local_1429.f_5[1], 1);
			}
		}
	}
}

void func_466(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_perform_sequence")) != 1)
		{
			if (func_29(iParam0, 0) < 1f || iParam1)
			{
				func_467(iParam0, 1);
			}
		}
	}
}

void func_467(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if ((bParam1 && unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_perform_sequence")) != 1) || !bParam1)
		{
			unk_0xB5396F1FB088FE38(&uVar0);
			unk_0x30FAA55EAF29F9BE(0, -1214,343f, -132,1107f, 40,2416f, 1f, 0, 0, 786603, -1082130432);
			unk_0x761F56E633460973(0, 1193033728, 0);
			unk_0x93C0674FC00824D0(uVar0);
			unk_0x4BD42B0527065BB6(iParam0, uVar0);
			unk_0xD0557B139A542F12(&uVar0);
		}
	}
}

void func_468()
{
	int iVar0;
	
	switch (iLocal_1028)
	{
		case 0:
			if (((iLocal_981 || iLocal_965) || func_29(Local_1429[0], 0) < 1f) || func_29(Local_1429[1], 0) < 1f)
			{
				if (!unk_0x1C2F771CDC87A3A5(Local_1429[0], 0) && !unk_0x1C2F771CDC87A3A5(Local_1429[1], 0))
				{
					unk_0xE67051907958B5EB(Local_1429[0], Local_1429[1], -1, 0, 2);
					unk_0xE67051907958B5EB(Local_1429[1], Local_1429[0], -1, 0, 2);
				}
				if (((unk_0xFC8BFE4B41177C22(Local_1429[1]) && unk_0xFC8BFE4B41177C22(Local_1429.f_4)) && !unk_0x4FAFF4BCB7633475(Local_1429[1])) && unk_0xD9F5E1FEFD1329E4(Local_1429.f_4, 0))
				{
					unk_0x974022927CB47E68(Local_1429[1]);
					unk_0xEBA229B2E0BB05E0(Local_1429[1], Local_1429.f_4, 20000, 2, 1f, 1, 0, 0);
				}
				if (!func_58(&uLocal_1098))
				{
					func_55(&uLocal_1098);
				}
				iLocal_1028++;
			}
			break;
		
		case 1:
			if (!iLocal_1001)
			{
				if (func_58(&uLocal_1098))
				{
					if (func_52(&uLocal_1098) > 3f)
					{
						if (((unk_0xFC8BFE4B41177C22(Local_1429[0]) && unk_0xFC8BFE4B41177C22(Local_1429.f_4)) && !unk_0x4FAFF4BCB7633475(Local_1429[0])) && unk_0xD9F5E1FEFD1329E4(Local_1429.f_4, 0))
						{
							if (unk_0x9B5C1660CCDF7189(Local_1429[0], joaat("script_task_enter_vehicle")) != 1)
							{
								unk_0x974022927CB47E68(Local_1429[0]);
								unk_0xEBA229B2E0BB05E0(Local_1429[0], Local_1429.f_4, 20000, 1, 1f, 1, 0, 0);
								iLocal_1001 = 1;
							}
						}
					}
				}
				else
				{
					func_55(&uLocal_1098);
				}
			}
			if (!unk_0x4FAFF4BCB7633475(Local_1429[0]) && !unk_0x4FAFF4BCB7633475(Local_1429[1]))
			{
				if (unk_0xCECDBB848D53DEB2(Local_1429[0], Local_1429.f_4, 0) && unk_0xCECDBB848D53DEB2(Local_1429[1], Local_1429.f_4, 0))
				{
					if (!unk_0x1C2F771CDC87A3A5(Local_1429.f_3, 0) && !unk_0x1C2F771CDC87A3A5(Local_1429.f_4, 0))
					{
						unk_0x84B06A81C98DA4B8(Local_1429.f_3);
						func_56(&uLocal_1098);
					}
					iLocal_1028++;
				}
			}
			break;
		
		case 2:
			if (func_58(&uLocal_1098))
			{
				if (func_52(&uLocal_1098) > 3f)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_1429.f_3) && unk_0xD9F5E1FEFD1329E4(Local_1429.f_4, 0))
					{
						unk_0x43E9B2BD3668B432(Local_1429.f_3, Local_1429.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1028++;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x1C2F771CDC87A3A5(Local_1429.f_3, 0) && !unk_0x1C2F771CDC87A3A5(Local_1429.f_4, 0))
			{
				if (!unk_0x8DC9348C726B1575(Local_1429.f_4) || iLocal_1004)
				{
					unk_0x7C8E9DE09D4AD3FF(Local_1429.f_3, Local_1429.f_4, 10f, 786603);
					iLocal_1028++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1004)
			{
				if (!unk_0x4FAFF4BCB7633475(uLocal_944[0]))
				{
					iVar0 = uLocal_944[0];
				}
				else
				{
					iVar0 = func_31(25f);
				}
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (!unk_0x4FAFF4BCB7633475(iVar0))
					{
						if (!func_28())
						{
							func_34(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1114, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_56(&uLocal_1098);
				iLocal_1028++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_469()
{
	if ((unk_0xFC8BFE4B41177C22(Local_1429.f_3) && !unk_0x1C2F771CDC87A3A5(Local_1429.f_3, 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD844F5E50DAB6FF7(Local_1429.f_3, unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
	}
	if ((unk_0xFC8BFE4B41177C22(Local_1429[0]) && !unk_0x1C2F771CDC87A3A5(Local_1429[0], 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD844F5E50DAB6FF7(Local_1429[0], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
		unk_0x1CA08719184AFC6F(Local_1429[0], 2, 0);
	}
	if ((unk_0xFC8BFE4B41177C22(Local_1429[1]) && !unk_0x1C2F771CDC87A3A5(Local_1429[1], 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD844F5E50DAB6FF7(Local_1429[1], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
		unk_0x1CA08719184AFC6F(Local_1429[1], 2, 0);
	}
	if ((unk_0xFC8BFE4B41177C22(Local_1429.f_8[0]) && !unk_0x1C2F771CDC87A3A5(Local_1429.f_8[0], 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD844F5E50DAB6FF7(Local_1429.f_8[0], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
	}
	if ((unk_0xFC8BFE4B41177C22(Local_1429.f_8[1]) && !unk_0x1C2F771CDC87A3A5(Local_1429.f_8[1], 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD844F5E50DAB6FF7(Local_1429.f_8[1], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
	}
	if ((unk_0xFC8BFE4B41177C22(Local_1429.f_5[0]) && !unk_0x1C2F771CDC87A3A5(Local_1429.f_5[0], 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD844F5E50DAB6FF7(Local_1429.f_5[0], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
	}
	if ((unk_0xFC8BFE4B41177C22(Local_1429.f_5[1]) && !unk_0x1C2F771CDC87A3A5(Local_1429.f_5[1], 0)) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xD844F5E50DAB6FF7(Local_1429.f_5[1], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
	}
}

int func_470()
{
	if (!unk_0x1C2F771CDC87A3A5(Local_1429.f_3, 0))
	{
		if (unk_0xA6534E6C7AE314D6(Local_1429.f_3))
		{
			if (unk_0xC1089D3918F03D33(Local_1429.f_3) == unk_0x4A8C381C258A124D())
			{
				return 1;
			}
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(Local_1429.f_4, 0))
	{
		if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_1429.f_4, 0))
		{
			return 1;
		}
	}
	if (func_118(Local_1429[0], 0, &Local_318, &iLocal_323, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1429[1], 0, &Local_318, &iLocal_323, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1429.f_8[0], 0, &Local_318, &iLocal_323, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1429.f_8[1], 0, &Local_318, &iLocal_323, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1429.f_5[0], 0, &Local_318, &iLocal_323, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1429.f_5[1], 0, &Local_318, &iLocal_323, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_117(Local_1429.f_4))
	{
		return 1;
	}
	if (unk_0x8764A5B95AE1F967(-1, -1231,326f, -201,7195f, 38,2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_471()
{
	func_550();
}

int func_472()
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

void func_473(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_549())
	{
		unk_0xAECC5FA98C879D67(0);
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 2);
		unk_0x98E393364463951A(1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		Global_101529 = { Param0 };
		Global_101532 = fParam1;
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
		func_447(1);
	}
}

int func_474(struct<3> Param0, float fParam1)
{
	return func_475(&(Global_107514.f_2890), Param0, fParam1, 0);
}

int func_475(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_538(uParam0))
	{
		if (func_50(Param1, 0f, 0f, 0f, 0))
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
		if (func_537(uParam0))
		{
			unk_0x2094BC4B6731BA68(Param1, 5f, 1, 0, 0, 0);
			func_536(Param1, 5f, 0);
			iVar0 = unk_0x5779387E956077A6(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
				if (system::vdist2(Var1, -1151,15f, -1530,32f, 7,48925f) <= 3f)
				{
					unk_0x62C438C53BB57AFD(iVar0, Param1, 0, 0, 1);
				}
				func_508(iVar0, &(uParam0->f_12), 0, 1);
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
							func_507(uParam0->f_11, 1);
						}
						else if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iVar0)))
						{
							func_507(uParam0->f_11, 2);
						}
					}
					unk_0x9BC299A7D57D7CAA(iVar0, 0);
					unk_0xC13B5C4CC421EA79(iVar0, 0);
					unk_0x5FE0938FDE9B0958(iVar0, 1);
					func_506(iVar0, uParam0->f_11);
				}
				else if ((!func_503(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x1B79E937E91F40C3(unk_0x1AF90EB93E0012D6(), "startup_positioning"))
				{
					iVar4 = func_502(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_497(iVar4);
					}
				}
				if (((Global_101533 != 13 && Global_101533 != 10) && Global_101533 != 11) && Global_101533 != 12)
				{
					if (unk_0x70E57E9927B6BA58(&(Global_101533.f_3)) == Global_79167)
					{
						if (uParam0->f_12.f_66 == Global_113969.f_32753.f_69[21 /*78*/].f_66)
						{
							func_494(24, 0);
							func_497(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_476(iVar0, uParam0->f_11);
				}
				unk_0x55098D9E9AD58806(uParam0->f_12.f_66);
				Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_476(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_477(iParam0))
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
	func_307(iParam0, &(Global_113969.f_32753.f_5510));
}

int func_477(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_318(iParam0, 0, 0)) || func_318(iParam0, 1, 0)) || func_318(iParam0, 2, 0)) || func_303(iParam0) != 145) || func_493(iParam0)) || func_492(iParam0)) || func_491(iParam0)) || func_490(iParam0)) || !func_478(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_492(iParam0))
		{
		}
		if (func_492(iParam0))
		{
		}
		if (func_318(iParam0, 0, 0))
		{
		}
		if (func_318(iParam0, 1, 0))
		{
		}
		if (func_318(iParam0, 2, 0))
		{
		}
		if (func_303(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_478(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_479(iParam0, 0, -1))
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

int func_479(int iParam0, bool bParam1, int iParam2)
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
		if (!func_489())
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
					if ((((!func_488() && !func_487()) && !func_486()) && !func_485()) && !func_489())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_484() || unk_0x761778199FE1211C()) || func_483())
					{
					}
					else if (!func_486())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_482(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_480(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_480(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_481())
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

int func_481()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_482(int iParam0, int iParam1)
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

var func_483()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_484()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_485()
{
	return 0;
}

int func_486()
{
	return 1;
}

int func_487()
{
	return 1;
}

int func_488()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_489()
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
					iVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
					unk_0xED11291F7127888E(iVar0);
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

int func_490(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	uVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_479(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_491(int iParam0)
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

int func_492(int iParam0)
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

int func_493(int iParam0)
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

void func_494(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_496(iParam0, 0))
		{
			func_495(iParam0, 1, 0);
			func_495(iParam0, 2, 0);
			func_495(iParam0, 3, 0);
			func_495(iParam0, 4, 0);
			func_495(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_495(iParam0, 0, 0);
	}
}

void func_495(int iParam0, bool bParam1, bool bParam2)
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

int func_496(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_497(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_501(&(Global_78179.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_496(iParam0, 0)) && Global_79088.f_66 == 0) && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] != 0) && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] > 3) && (!func_499(0, Global_78179.f_555[0 /*21*/].f_12) || !func_499(1, Global_78179.f_555[0 /*21*/].f_12)))
			{
				func_498(&(Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]), &Global_79088);
				Global_79166 = Global_113969.f_32753.f_5591;
			}
			func_494(iParam0, 0);
		}
	}
}

void func_498(var uParam0, var uParam1)
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

int func_499(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_500(&(Global_113969.f_32753.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_479(Global_113969.f_32753.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_500(var uParam0)
{
	return *uParam0;
}

int func_501(var uParam0, int iParam1)
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
			uParam0->f_4 = func_305(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_305(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_305(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_305(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_305(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_305(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_305(2, 1);
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
			if (func_489())
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
			if (func_489())
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
		if (!func_50(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_50(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_50(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_502(int iParam0)
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
			unk_0xFF4B16F297D9CB3E(uParam0, &iVar1, &iVar2);
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

int func_503(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_505(iParam0, Global_78179.f_139[38], 0))
			{
				func_497(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_505(iParam0, Global_78179.f_139[43], 1))
			{
				func_497(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xD65B4E942A960E26(unk_0x4A8C381C258A124D(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_505(iParam0, uVar1[iVar3], 1) && func_504(unk_0xD1A6A821F5AC81DB(uVar1[iVar3], 1), 2136,133f, 4780,563f, 39,9702f, 5f, 0))
				{
					if ((!bParam2 || func_50(Param1, 0f, 0f, 0f, 0)) || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(uVar1[iVar3], 1), 1) < 10f)
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
					func_497(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xFC8BFE4B41177C22(Global_78179.f_484[20]) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0xD9F5E1FEFD1329E4(Global_78179.f_484[20], 0))
			{
				if (unk_0x4B423FAA24E8ABF0(Global_78179.f_484[20]) == joaat("swift2") && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_78179.f_484[20]))
				{
					func_497(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_504(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

int func_505(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xFC8BFE4B41177C22(uParam1) && !unk_0x1C2F771CDC87A3A5(iParam1, 0)) && unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xFF4B16F297D9CB3E(uParam0, &iVar0, &iVar1);
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

void func_506(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			Global_98844[iVar0] = uParam0;
			Global_98854[iVar0] = iParam1;
			Global_98864[iVar0] = unk_0x4B423FAA24E8ABF0(uParam0);
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

void func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (iParam0 == 145 || Global_98854[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x4B423FAA24E8ABF0(Global_98844[iVar0]) == func_305(iParam0, iParam1))
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

void func_508(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_529(iParam0))
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
			if (BitTest(uParam1->f_77, func_308(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_308(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_308(iVar2)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_308(iVar3)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(iVar3));
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
					if (BitTest(uParam1->f_77, func_308(iVar4)))
					{
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(iVar4));
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
				if (BitTest(uParam1->f_77, func_308(iVar5)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_308(4)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(4));
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_308(iVar6)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_308(iVar6));
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
			if (func_527(uParam1->f_5) || func_527(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_526(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_525())
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
		if (uParam1->f_65 == -1 && !func_310(uParam1->f_66))
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
						func_524(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_524(iParam0, uParam1->f_69);
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
			func_516(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xBA16CD57E37AC32A(uParam1->f_66) && !unk_0xEA4F815FDC353FEF(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_308(iVar7 + 1)))
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
		if ((((func_511() && unk_0x00C6FDED3EB75117(uParam1->f_66)) && unk_0x8EC15ED9ECD1E9D0(iParam0)) && !unk_0x2E6A27037F1DC473(iParam0, joaat("avenger"))) && !unk_0x2E6A27037F1DC473(iParam0, func_510(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_509(iParam0, 5f))
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

int func_509(int iParam0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
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

int func_510(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_511()
{
	if ((((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 18) || Global_4718592.f_117195 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_514(7))
	{
		if (func_513(Global_2672855.f_4.f_16) || func_512(Global_2672855.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_512(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

int func_513(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_11(iParam0, 9);
	}
	return 0;
}

bool func_514(int iParam0)
{
	return func_515(&(Global_2672855.f_194), iParam0);
}

var func_515(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_516(var uParam0, var uParam1, var uParam2)
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
	unk_0xB5AD06DDA85E2E8F(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xF5501FF9869DAC7C(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xF5501FF9869DAC7C(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x89D1FDCA3735A1E0(*uParam0, 255);
				}
				else
				{
					unk_0x89D1FDCA3735A1E0(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xF5501FF9869DAC7C(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x94C9CD3D66808551(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xC87E4FAD00AEDD4B(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_522(*uParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_521(unk_0x4B423FAA24E8ABF0(*uParam0), 1) && unk_0x94C9CD3D66808551(*uParam0, 24) != func_519(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*uParam0, 24, func_519(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_518(uParam0);
	if (func_517(*uParam0))
	{
		unk_0xD05AF216D970F274(*uParam0, 1);
		unk_0x5FE0938FDE9B0958(*uParam0, 1);
	}
	return 1;
}

int func_517(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
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

void func_518(var uParam0)
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

int func_519(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
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
		iVar0 = func_520(iParam0, 38) + 1;
		iVar1 = func_520(iParam0, 24) + 1;
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

int func_520(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152860) && unk_0x2E6A27037F1DC473(uParam0, Global_152860)) && Global_152861 == iParam1)
	{
		return Global_152862;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_522(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_521(int iParam0, int iParam1)
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

int func_522(var uParam0, int iParam1, int iParam2)
{
	if (!func_523() && unk_0xAF82FE1B3E949337(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_523()
{
	return 0;
}

void func_524(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x90E3EAFF8AAA1A42(uParam0) > 0)
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

bool func_525()
{
	return unk_0x087611B922B50F13(joaat("mpindependence"));
}

int func_526(int iParam0)
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
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

int func_527(int iParam0)
{
	if (!func_523() && func_528(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0)
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

int func_529(int iParam0)
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_535(unk_0x259BE71D8A81D4FA(), -1))
		{
			uParam0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0))
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
	if (func_531(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_530(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_530(int iParam0)
{
	if (unk_0x77B62CAA5DF0922A("FMDeliverableID", 3))
	{
		if (unk_0xD130E7CDEE903624(uParam0, "FMDeliverableID"))
		{
			return unk_0xE2F6FE9B61232165(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_531(int iParam0)
{
	if (func_534(iParam0) == 233)
	{
		return func_532(iParam0);
	}
	return -1;
}

int func_532(int iParam0)
{
	if (func_533(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_533(int iParam0, int iParam1)
{
	if (func_401(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_534(int iParam0)
{
	if (func_401(iParam0))
	{
		if (func_533(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_535(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_73(uParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(uParam0), 0))
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

void func_536(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_501(&(Global_78179.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xED977E2AE2CB16EE(Param0, Global_78179.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_497(iVar0);
			}
		}
		iVar0++;
	}
}

int func_537(var uParam0)
{
	if (func_538(uParam0))
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

int func_538(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_479(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_504(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_539()
{
	return func_537(&(Global_107514.f_2890));
}

void func_540()
{
	func_541(&(Global_107514.f_2890));
}

void func_541(var uParam0)
{
	if (func_538(uParam0))
	{
		unk_0xEC9DAA34BBB4658C(uParam0->f_12.f_66);
	}
}

void func_542()
{
	if (unk_0x5561E31B168FA823(uLocal_957))
	{
		unk_0x6C730FCE8A68AF6F(uLocal_957);
	}
}

int func_543()
{
	if (!Global_101533 == 10 && !Global_101533 == 9)
	{
		return 0;
	}
	return Global_101533.f_2;
}

struct<39> func_544(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0.f_0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_545(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700,015f, -1066,335f, 12,144f };
		Var0.f_28 = { -1691,564f, -1066,514f, 12,076f };
		Var0.f_31 = 35,4714f;
		Var0.f_10 = { -1700,467f, -1066,672f, 13,8795f };
		Var0.f_13 = { -4,8332f, 0f, -177,1283f };
		Var0.f_16 = { -1700,467f, -1066,672f, 13,8795f };
		Var0.f_19 = { -4,8332f, 0f, -177,1283f };
		Var0.f_33 = { -1700,098f, -1067,939f, 12,1547f };
		Var0.f_36 = 162,4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -699,3992f, -917,5043f, 18,2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_545(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700,1855f, -917,9558f, 18,2143f };
		Var0.f_28 = { -699,9455f, -921,7786f, 18,0144f };
		Var0.f_31 = 78,0874f;
		Var0.f_10 = { -697,8064f, -921,4629f, 20,5104f };
		Var0.f_13 = { -13,5249f, 0f, 30,6033f };
		Var0.f_16 = { -702,4851f, -921,2747f, 21,1235f };
		Var0.f_19 = { -22,5196f, 0f, -43,0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 215,1206f, -853,3143f, 29,3684f };
		Var0.f_4 = { 0f, 0f, 87,1787f };
		Var0.f_7 = { func_545(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213,7994f, -853,9389f, 29,3929f };
		Var0.f_28 = { 205,2641f, -847,2667f, 29,4903f };
		Var0.f_31 = 140,1039f;
		Var0.f_10 = { 216,7391f, -856,0031f, 32,7127f };
		Var0.f_13 = { -25,1365f, 0f, 41,3912f };
		Var0.f_16 = { 210,4668f, -851,3092f, 32,1099f };
		Var0.f_19 = { -16,3326f, 0f, -127,0114f };
		Var0.f_33 = { 213,8733f, -853,8161f, 29,3922f };
		Var0.f_36 = 344,0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -22,5499f, -107,3546f, 56,0161f };
		Var0.f_4 = { 0f, 0f, 269,7924f };
		Var0.f_7 = { func_545(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22,3125f, -108,9183f, 56,0068f };
		Var0.f_28 = { -17,2677f, -118,5915f, 55,8734f };
		Var0.f_31 = 1,4374f;
		Var0.f_10 = { -26,1094f, -108,0298f, 59,052f };
		Var0.f_13 = { -21,2059f, 0f, -109,0176f };
		Var0.f_16 = { -20,1189f, -111,9639f, 59,4377f };
		Var0.f_19 = { -27,0037f, 0f, 29,464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 806,1469f, -1070,21f, 27,3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_545(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804,9559f, -1070,46f, 27,3361f };
		Var0.f_28 = { 799,8408f, -1079,142f, 27,321f };
		Var0.f_31 = 69,6524f;
		Var0.f_10 = { 801,8048f, -1068,068f, 30,3496f };
		Var0.f_13 = { -20,8953f, 0f, -132,9451f };
		Var0.f_16 = { 805,8168f, -1074,496f, 28,9803f };
		Var0.f_19 = { -1,5585f, 0f, 6,9143f };
		Var0.f_33 = { 804,8776f, -1070,523f, 27,3416f };
		Var0.f_36 = 287,8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_545(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704,427f, -1077,316f, 12,1111f;
		
		case 1:
			return -700,429f, -916,7467f, 18,2143f;
		
		case 2:
			return 214,1641f, -852,8006f, 29,3929f;
		
		case 3:
			return -21,9871f, -107,4823f, 55,997f;
		
		case 4:
			return 806,1469f, -1070,21f, 27,3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_546()
{
	bool bVar0;
	
	bVar0 = func_124(Global_113969.f_19966.f_1, 4096);
	Global_113969.f_19966.f_1 = 0;
	if (bVar0)
	{
		func_557(&(Global_113969.f_19966.f_1), 4096);
	}
}

void func_547()
{
}

bool func_548()
{
	return func_538(&(Global_107514.f_2890));
}

int func_549()
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

void func_550()
{
	if (func_58(&uLocal_1086))
	{
		Global_113969.f_19966.f_5 = func_52(&uLocal_1086);
	}
	if (!iLocal_1003)
	{
		unk_0x86A2BC11844DEEB3("ASS1_LOST");
	}
	unk_0x48FA483FE4F18CFE("SCRIPT\ASSASSINATION_MULTI");
	func_274();
	func_257();
	func_262();
	func_263(1);
	func_429();
	func_554();
	func_455(0);
	func_3();
	if (unk_0xFC8BFE4B41177C22(Global_98010.f_28[0]))
	{
		unk_0xEE0BCDB1B5E36BCB(Global_98010.f_28[0], 1, 1);
		unk_0xB3B56385ECA230B4(&(Global_98010.f_28[0]));
	}
	unk_0xD7B6A43ACC36D868(uLocal_955, 0);
	unk_0xD7B6A43ACC36D868(uLocal_956, 0);
	func_542();
	func_92(&uLocal_1279, 0, 0);
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		func_552(unk_0x4A8C381C258A124D(), 1);
		unk_0x96A0632EBDD87FA3(unk_0x4A8C381C258A124D(), 0, -1, 0);
	}
	unk_0x425BBE19F25A57AB(1f);
	unk_0x93586F94C370857F();
	unk_0xA1F44380A2D59F2B(iLocal_1077, 0);
	unk_0xA1F44380A2D59F2B(iLocal_1078, 0);
	func_551();
	unk_0xBBC29EBE6E1A48FA();
}

void func_551()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_283(Local_1054[iVar0 /*3*/], 1) < 5f)
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1223,185f, -185,4723f, 38,1753f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 119,5633f);
			}
		}
		iVar0++;
	}
}

void func_552(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x23B29877D0BE9547(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_553(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_101570 > 0)
	{
		Global_107514.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_104530.f_21[iParam1] = iVar0;
	}
}

int func_553(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_101570 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_107514.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_107514.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_107514.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_107514.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_104530.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_104530.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_104530.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_104530.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_554()
{
	unk_0x7821F942CAEEBEE1(102, "ASSOJva");
	unk_0x7821F942CAEEBEE1(107, "ASSOJva");
	unk_0x8943BF9E0F15EDA0("OJASva_101");
	unk_0x8943BF9E0F15EDA0("OJASva_101a");
	unk_0x8943BF9E0F15EDA0("OJASva_104");
}

void func_555()
{
	int iVar0;
	
	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113969.f_9088 || func_46(0))
	{
		if (!func_556())
		{
			iVar0 = func_45();
			if (iVar0 != -1)
			{
				if (!func_39(iVar0))
				{
					return;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_44();
		}
	}
}

int func_556()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

void func_557(var uParam0, int iParam1)
{
	func_558(uParam0, iParam1);
}

void func_558(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

