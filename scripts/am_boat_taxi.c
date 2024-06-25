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
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_61 = 0f;
	struct<22> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	struct<3> Local_63[32];
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 12;
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
	var uLocal_770 = 1065353216;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	struct<3> Local_773 = { 0, 0, 0 } ;
	var uLocal_774 = 0;
	var uLocal_775 = 16;
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
	int iLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	int iLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	float fLocal_946 = 0f;
	float fLocal_947 = 0f;
	float fLocal_948 = 0f;
	float fLocal_949 = 0f;
	struct<21> Local_950 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_26 = 0f;
	fLocal_30 = -0,0375f;
	fLocal_31 = 0,17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	iLocal_943 = 15000;
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_152(ScriptParam_950))
		{
			func_147();
		}
	}
	while (true)
	{
		func_146();
		if (func_138())
		{
			func_147();
		}
		if (unk_0xF859473E4AD09F30() != iLocal_940)
		{
			func_147();
		}
		switch (func_137(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (func_136() == 1)
				{
					func_135();
					func_134();
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 1;
				}
				else if (func_136() == 4)
				{
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_102();
				if (func_136() == 1)
				{
					func_76();
				}
				else if (func_136() == 4)
				{
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
				}
				if (func_74(Local_62.f_2))
				{
					if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_62.f_2), 1), 200f, 200f, 200f, 0, 1, 0))
					{
						Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_73(&(Local_62.f_18));
				if (func_72(&(Local_62.f_18)))
				{
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
			
			case 4:
				func_147();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_136())
			{
				case 0:
					if (func_70(&(Local_62.f_16), 10000, 0))
					{
						if (!BitTest(Local_62.f_0, 12))
						{
							Local_62.f_4 = unk_0x259BE71D8A81D4FA();
							Local_62.f_5 = func_69();
							Local_62.f_10 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) + Vector(0f, 5f, 0f) };
							Local_62.f_7 = { func_67(Local_62.f_5) };
							unk_0x0B0C9A0F9AAEB7F0(&Local_62, 12);
						}
						if (func_40())
						{
							func_135();
							Local_62.f_1 = 1;
						}
					}
					func_36();
					break;
				
				case 1:
					func_35();
					func_34();
					func_32();
					func_36();
					if (func_1())
					{
						Local_62.f_1 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	var uVar0;
	var uVar1;
	
	if (func_31())
	{
		if (Local_62.f_21 >= 0 || Local_62.f_21 <= 3)
		{
			func_6(func_24(9), 7, 3, 1);
		}
		return 1;
	}
	if (Local_62.f_21 >= 0 || Local_62.f_21 <= 3)
	{
		if (unk_0x2FC2FDC413532977(Local_62.f_2))
		{
			if (!func_74(Local_62.f_2))
			{
				if (unk_0x7B8DC32252146679(Local_62.f_2, &uVar0) == unk_0x259BE71D8A81D4FA())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (unk_0x2FC2FDC413532977(Local_62.f_3))
		{
			if (func_4(Local_62.f_3))
			{
				if (unk_0x7B8DC32252146679(Local_62.f_3, &uVar1) == unk_0x259BE71D8A81D4FA())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (!func_3(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, bool bParam1, bool bParam2)
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

int func_4(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

void func_5(bool bParam0, int iParam1)
{
	if (Global_2672855.f_3729[bParam0] < iParam1)
	{
		Global_2672855.f_3729[bParam0] = iParam1;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2672855.f_3728), bParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_23(iParam1), 16);
	StringCopy(&Var1, func_22(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = joaat("service_earn_refund_backup_vagos");
			break;
		
		case 1:
			iVar2 = joaat("service_earn_refund_backup_lost");
			break;
		
		case 2:
			iVar2 = joaat("service_earn_refund_backup_families");
			break;
		
		case 3:
			iVar2 = joaat("service_earn_refund_hire_mugger");
			break;
		
		case 4:
			iVar2 = joaat("service_earn_refund_hire_mercenary");
			break;
		
		case 5:
			iVar2 = joaat("service_earn_refund_buy_cardropoff");
			break;
		
		case 6:
			iVar2 = joaat("service_earn_refund_heli_pickup");
			break;
		
		case 7:
			iVar2 = joaat("service_earn_refund_boat_pickup");
			break;
		
		case 8:
			iVar2 = joaat("service_earn_refund_clear_wanted");
			break;
		
		case 9:
			iVar2 = joaat("service_earn_refund_head_2_head");
			break;
		
		case 10:
			iVar2 = joaat("service_earn_refund_challenge");
			break;
		
		case 11:
			iVar2 = joaat("service_earn_refund_share_last_job");
			break;
		
		case 12:
			iVar2 = joaat("service_earn_refund_lottery");
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = joaat("service_earn_refundammodrop");
			break;
		
		case 15:
			iVar2 = joaat("service_earn_refund_orbital_manual");
			break;
		
		case 16:
			iVar2 = joaat("service_earn_refund_orbital_auto");
			break;
		
		case 17:
			iVar2 = joaat("service_earn_refund_arena_spec_box_entry");
			break;
	}
	if (func_21())
	{
		func_7(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4535950[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4535950[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0x9CBD6E7B088910A1(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_7(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_21())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_jobs"):
		case joaat("service_earn_betting"):
		case joaat("service_earn_lottery"):
		case joaat("service_earn_challenge_win"):
		case joaat("service_earn_property_sales"):
		case joaat("service_earn_vehicle_sales"):
		case joaat("service_earn_lester_target_kill"):
		case joaat("service_earn_bounty_collected"):
		case joaat("service_earn_crate_drop"):
		case joaat("service_earn_holdups"):
		case joaat("service_earn_import_export"):
		case joaat("service_earn_armored_trucks"):
		case joaat("service_earn_jobshare_cash"):
		case joaat("service_earn_not_badsport"):
		case joaat("service_earn_bank_interest"):
		case joaat("service_earn_debug"):
		case joaat("service_earn_cncw"):
		case joaat("service_earn_cncb"):
		case joaat("service_earn_job_bonus"):
		case joaat("service_earn_bend_job"):
		case joaat("service_earn_personal_vehicle"):
		case joaat("service_earn_daily_objectives"):
		case joaat("service_earn_ambient_job_plane_takedown"):
		case joaat("service_earn_ambient_job_distract_cops"):
		case joaat("service_earn_ambient_job_destroy_veh"):
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_gangattack_pickup"):
		case joaat("service_earn_ambient_job_hot_target_deliver"):
		case joaat("service_earn_ambient_job_hot_target_kill"):
		case joaat("service_earn_ambient_job_urban_warfare"):
		case joaat("service_earn_ambient_job_checkpoint_collection"):
		case joaat("service_earn_ambient_job_time_trial"):
		case joaat("service_earn_ambient_job_challenges"):
		case joaat("service_earn_ambient_job_heli_hot_target"):
		case joaat("service_earn_ambient_job_dead_drop"):
		case joaat("service_earn_ambient_job_penned_in"):
		case joaat("service_earn_ambient_job_pass_parcel"):
		case joaat("service_earn_ambient_job_blast"):
		case joaat("service_earn_ambient_job_hot_property"):
		case joaat("service_earn_ambient_job_king"):
		case joaat("service_earn_ambient_job_beast"):
		case joaat("service_earn_boss"):
		case joaat("service_earn_goon"):
		case joaat("service_earn_boss_agency"):
		case joaat("service_earn_from_destroying_contraband"):
		case joaat("service_earn_premium_job"):
		case joaat("service_earn_from_vehicle_export"):
		case joaat("service_earn_smuggler_agency"):
		case joaat("service_earn_wage_payment_bonus"):
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
		case joaat("service_earn_job_bonus_criminal_mastermind"):
		case joaat("service_earn_job_bonus_heist_award"):
		case joaat("service_earn_job_bonus_first_time_bonus"):
		case joaat("service_earn_refund_orbital_manual"):
		case joaat("service_earn_refund_orbital_auto"):
		case joaat("service_earn_gangops_wages"):
		case joaat("service_earn_gangops_wages_bonus"):
		case joaat("service_earn_gangops_prep_participation"):
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
		case joaat("service_earn_gangops_finale"):
		case joaat("service_earn_gangops_award_mastermind_2"):
		case joaat("service_earn_gangops_award_mastermind_3"):
		case joaat("service_earn_gangops_award_mastermind_4"):
		case joaat("service_earn_gangops_award_loyalty_award_2"):
		case joaat("service_earn_gangops_award_loyalty_award_3"):
		case joaat("service_earn_gangops_award_loyalty_award_4"):
		case joaat("service_earn_gangops_award_first_time_xm_base"):
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
		case joaat("service_earn_gangops_award_supporting"):
		case joaat("service_earn_gangops_award_order"):
		case joaat("service_earn_gangops_elite_xm_base"):
		case joaat("service_earn_gangops_elite_xm_submarine"):
		case joaat("service_earn_gangops_elite_xm_silo"):
		case joaat("service_earn_gangops_rival_delivery"):
		case joaat("service_earn_doomsday_finale_bonus"):
		case joaat("service_earn_bounty_hunter_reward"):
		case joaat("service_earn_from_business_battle"):
		case joaat("service_earn_from_club_management_participation"):
		case joaat("service_earn_from_fmbb_phonecall_mission"):
		case joaat("service_earn_from_business_hub_sell"):
		case joaat("service_earn_from_fmbb_boss_work"):
		case joaat("service_earn_fmbb_wage_bonus"):
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
		case joaat("service_earn_island_heist_prep"):
		case joaat("service_earn_island_heist_dj_mission"):
		case joaat("service_earn_tuner_robbery_prep"):
		case joaat("service_earn_tuner_robbery_finale"):
		case joaat("service_earn_tuner_car_club_membership"):
		case joaat("service_earn_tuner_daily_vehicle"):
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
		case joaat("service_earn_auto_shop_delivery_award"):
		case joaat("service_earn_agency_security_contract"):
		case joaat("service_earn_agency_payphone_hit"):
		case joaat("service_earn_agency_story_prep"):
		case joaat("service_earn_agency_story_finale"):
		case joaat("service_earn_fixer_award_sec_con"):
		case joaat("service_earn_fixer_award_phone_hit"):
		case joaat("service_earn_fixer_award_agency_story"):
		case joaat("service_earn_fixer_award_short_trip"):
		case joaat("service_earn_fixer_rival_delivery"):
		case joaat("service_earn_music_studio_short_trip"):
		case joaat("service_earn_from_contraband"):
		case joaat("service_earn_nclub_troublemaker"):
		case joaat("service_earn_sightseeing_reward"):
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_yohan_source_goods"):
		case joaat("service_earn_taxi_job"):
		case joaat("service_earn_daily_stash_house_participation"):
		case joaat("service_earn_daily_stash_house_completed"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
		case joaat("service_earn_acid_lab_setup_participation"):
		case joaat("service_earn_acid_lab_source_participation"):
		case joaat("service_earn_acid_lab_sell_participation"):
		case joaat("service_earn_smuggler_ops"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_cayo_attrition_bonus_objective"):
		case joaat("service_earn_avenger_operations"):
		case joaat("service_earn_avenger_ops_bonus"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_21())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_20()) || unk_0x34F31012FED51A0F())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x54BC5E0B6A29AE8A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar4))
		{
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_14(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_21())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD8EB47E09DFC393C();
			}
		}
		else if (!bVar0)
		{
			unk_0x1FDE21A286357401(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_11(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_11(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_12(&(uParam0->f_14));
	func_12(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_12(var uParam0)
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

int func_13(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_14(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_15(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_21())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_16(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_16(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<4> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam19;
	iVar1 = func_18(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_17();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_17()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_18(bool bParam0)
{
	var uVar0;
	
	if (func_19(bParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_19(var uParam0)
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

int func_20()
{
	return Global_1574926;
}

int func_21()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_30(iParam0) >= 0)
	{
		iVar0 = func_30(iParam0);
	}
	else
	{
		iVar0 = func_25(iParam0);
	}
	return iVar0;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_26())
			{
				return 0;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 1)
			{
				return 200;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 2)
			{
				return 400;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return 600;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 4)
			{
				return 800;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_26()
{
	return BitTest(func_27(6427, -1), 19);
}

int func_27(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_28(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_28(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_29(uParam1));
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
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

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7179;
			break;
		
		case 10:
			return Global_262145.f_3836;
			break;
		
		case 11:
			return Global_262145.f_3837;
			break;
		
		case 8:
			return Global_262145.f_3834;
			break;
		
		case 0:
			return Global_262145.f_3831;
			break;
		
		case 9:
			return Global_262145.f_3835;
			break;
		
		case 13:
			return Global_262145.f_3839;
			break;
		
		case 12:
			return Global_262145.f_3838;
			break;
		
		case 2:
			return Global_262145.f_3832;
			break;
		
		case 14:
			return Global_262145.f_3840;
			break;
		
		case 20:
			if (func_26())
			{
				return 0;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 1)
			{
				return Global_262145.f_7186;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 2)
			{
				return Global_262145.f_7187;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return Global_262145.f_7188;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 4)
			{
				return Global_262145.f_7189;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 5)
			{
				return Global_262145.f_7190;
			}
			break;
		
		case 6:
			return Global_262145.f_3833;
			break;
		
		case 22:
			return Global_262145.f_3841;
			break;
		
		case 23:
			return Global_262145.f_3842;
			break;
		
		case 24:
			return Global_262145.f_3843;
			break;
		
		case 25:
			return Global_262145.f_3844;
			break;
		
		case 26:
			return Global_262145.f_3845;
			break;
		
		case 35:
			return Global_262145.f_7872;
			break;
		
		case 15:
			return Global_262145.f_7180;
			break;
		
		case 17:
			return Global_262145.f_7180;
			break;
		
		case 18:
			return Global_262145.f_7180;
			break;
		
		case 19:
			return Global_262145.f_7180;
			break;
		
		case 21:
			return Global_262145.f_7180;
			break;
		
		case 36:
			return Global_262145.f_8339;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13326;
			break;
		
		case 41:
			return Global_262145.f_13327;
			break;
		
		case 42:
			return Global_262145.f_13328;
			break;
		
		case 43:
			return Global_262145.f_15836;
			break;
		
		case 44:
			return Global_262145.f_15837;
			break;
		
		case 57:
			return Global_262145.f_3843;
			break;
		
		case 58:
			return Global_262145.f_25373;
			break;
		
		case 62:
			return Global_262145.f_25374;
			break;
		
		case 63:
			return Global_262145.f_28760;
			break;
		
		case 64:
			return Global_262145.f_7180;
			break;
		
		case 72:
			return Global_262145.f_25374;
			break;
		
		case 73:
			return Global_262145.f_31111;
			break;
		
		case 74:
			return Global_262145.f_31113;
			break;
		
		case 75:
			return Global_262145.f_31115;
			break;
	}
	return 0;
}

bool func_31()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

void func_32()
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	if (Local_62.f_20 != 7)
	{
		if (func_4(Local_62.f_3) || !func_74(Local_62.f_2))
		{
			Local_62.f_20 = 7;
		}
		else if (!unk_0xCECDBB848D53DEB2(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0xE38610F405049F71(Local_62.f_2), 0))
		{
			Local_62.f_20 = 7;
		}
	}
	if (!func_4(Local_62.f_3) && func_74(Local_62.f_2))
	{
		if (Local_62.f_20 != 1)
		{
			if (unk_0x8D91ADE44AC79BC9(unk_0xE38610F405049F71(Local_62.f_2)) <= 600 || unk_0x8D91ADE44AC79BC9(unk_0xC35A3A4C05A4831B(Local_62.f_3)) <= 150)
			{
				Local_62.f_20 = 1;
			}
		}
		switch (Local_62.f_20)
		{
			case 2:
				if (Local_62.f_21 == 3)
				{
					Local_62.f_20 = 4;
				}
				else if (Local_62.f_21 == 5)
				{
					Local_62.f_20 = 7;
				}
				else if (!BitTest(Local_62.f_0, 7) && unk_0xFAA48325A90263BE(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_62.f_20 = 3;
				}
				break;
			
			case 4:
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 8);
				if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) <= 0)
				{
					Local_62.f_20 = 3;
					unk_0x8744D2E3FC95740E(&uLocal_64, 8);
				}
				else if (!BitTest(Local_62.f_0, 7) && unk_0x65FFA94B82A71741(unk_0xC35A3A4C05A4831B(Local_62.f_3), Local_62.f_7, 10f, 10f, 10f, 0, 1, 0))
				{
					Local_62.f_20 = 5;
				}
				break;
			
			case 5:
				if ((unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) <= 0 && !unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2))) && func_33(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 1) >= 10f)
				{
					Local_62.f_20 = 6;
				}
				break;
			
			case 3:
				if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) >= 1)
				{
					Local_62.f_20 = 4;
				}
				break;
			
			case 6:
				if ((unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) <= 0 && !unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2))) && func_33(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 1) >= 10f)
				{
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_perform_sequence")) == 1)
					{
						Local_62.f_20 = 7;
					}
				}
				break;
			
			case 1:
				if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_perform_sequence")) == 1 && func_33(unk_0x4A8C381C258A124D(), unk_0xC35A3A4C05A4831B(Local_62.f_3), 1) >= 10f)
				{
					Local_62.f_20 = 7;
				}
				break;
			
			case 7:
				break;
			}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)
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

void func_34()
{
	switch (Local_62.f_21)
	{
		case 0:
			if (BitTest(Local_62.f_0, 8) || unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) > 0)
			{
				Local_62.f_21 = 1;
			}
			break;
		
		case 1:
			if (unk_0x2FC2FDC413532977(Local_62.f_2))
			{
				if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) > 0)
				{
					Local_62.f_21 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) > 0)
			{
				Local_62.f_21 = 3;
			}
			else if (BitTest(Local_62.f_0, 10))
			{
				Local_62.f_21 = 4;
			}
			break;
		
		case 3:
			if (unk_0x2FC2FDC413532977(Local_62.f_2))
			{
				if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) <= 0)
				{
					Local_62.f_21 = 1;
				}
				else if (BitTest(Local_62.f_0, 10))
				{
					Local_62.f_21 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x2FC2FDC413532977(Local_62.f_2))
			{
				if ((unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_62.f_2), 0, 1) <= 0 && !unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2))) && func_33(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 1) >= 10f)
				{
					Local_62.f_21 = 5;
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_35()
{
	int iVar0;
	int iVar1;
	
	unk_0x8744D2E3FC95740E(&Local_62, 9);
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
			if (func_3(iVar1, 1, 1))
			{
				if (func_74(Local_62.f_2))
				{
					if (!BitTest(Local_62.f_0, 8))
					{
						if (unk_0x65FFA94B82A71741(unk_0xE38610F405049F71(Local_62.f_2), Local_62.f_10, (10f * 1,5f), (10f * 1,5f), (10f * 1,5f), 0, 1, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&Local_62, 8);
						}
					}
					if (!BitTest(Local_62.f_0, 7) || BitTest(Local_62.f_0, 11))
					{
						if (!BitTest(Local_62.f_0, 10))
						{
							if (unk_0x65FFA94B82A71741(unk_0xE38610F405049F71(Local_62.f_2), Local_62.f_7, (10f * 1,5f), (10f * 1,5f), (10f * 1,5f), 0, 1, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&Local_62, 10);
							}
						}
					}
					if (!BitTest(Local_62.f_0, 9))
					{
						if (BitTest(Local_63[iVar0 /*3*/].f_1, 6))
						{
							unk_0x0B0C9A0F9AAEB7F0(&Local_62, 9);
							unk_0x8744D2E3FC95740E(&(Local_63[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_62.f_20 != 3)
					{
						if (BitTest(Local_63[iVar0 /*3*/].f_1, 5))
						{
							Local_62.f_20 = 3;
							unk_0x8744D2E3FC95740E(&(Local_63[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_36()
{
	struct<3> Var0;
	var uVar1;
	
	if ((Local_62.f_21 <= 2 || Local_62.f_20 == 2) || Local_62.f_20 == 3)
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		if ((!unk_0x7CF3DDFB660E9328(Var0, &uVar1) || func_38()) || func_37())
		{
			Local_62.f_1 = 4;
		}
	}
}

int func_37()
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2631,833f, 4526,624f, -10f, -380,1435f, 3906,702f, 78,484f, 1200f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1731,902f, -123,8468f, 137,2596f, 2079,203f, 798,3421f, 249,3267f, 600f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 252,5025f, 855,094f, 148,1213f, -393,3539f, 695,785f, 272,1867f, 500f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), func_39(iVar0), 50f, 50f, 50f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 709,8127f, 6699,78f, 0f;
		
		case 1:
			return 1551,805f, 6686,052f, 0f;
		
		case 2:
			return 3260,507f, 5309,454f, 0f;
		
		case 3:
			return 3788,334f, 3812,693f, 0f;
		
		case 4:
			return 2945,665f, 1773,192f, 0f;
		
		case 5:
			return 2866,816f, -658,5848f, 0f;
		
		case 6:
			return 2342,881f, -2167,953f, 0f;
		
		case 7:
			return 1215,167f, -2728,054f, 0f;
		
		case 8:
			return 1305,229f, -3364,572f, 0f;
		
		case 9:
			return 293,8953f, -3361,616f, 0f;
		
		case 10:
			return -484,948f, -2940,643f, 0f;
		
		case 11:
			return -1387,61f, -1704,374f, 0f;
		
		case 12:
			return -1566,04f, -1312,232f, 0f;
		
		case 13:
			return -1920,23f, -849,6466f, 0f;
		
		case 14:
			return -2876,76f, -74,3269f, 0f;
		
		case 15:
			return -3133,45f, 604,7179f, 0f;
		
		case 16:
			return -3286,57f, 1285,372f, 0f;
		
		case 17:
			return -3205,53f, 3285,199f, 0f;
		
		case 18:
			return -2520,42f, 4240,671f, 0f;
		
		case 19:
			return -909,632f, 5830,909f, 0f;
		
		case 20:
			return -325,109f, 6584,622f, 0f;
		
		default:
	}
	return -673,5316f, 6175,048f, 0f;
}

int func_40()
{
	if (unk_0x4D64DFA5BE3B2871(1, 1, 0, 0))
	{
		if (func_66(joaat("dinghy2")) && func_66(joaat("s_m_y_blackops_01")))
		{
			if (func_43() && func_41())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_41()
{
	if ((!unk_0x2FC2FDC413532977(Local_62.f_3) && func_66(joaat("s_m_y_blackops_01"))) && unk_0x2FC2FDC413532977(Local_62.f_2))
	{
		if (func_74(Local_62.f_2))
		{
			if (func_42(&(Local_62.f_3), Local_62.f_2, 22, joaat("s_m_y_blackops_01"), -1, 1, 1, 1))
			{
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_62.f_3), 0, 0, 1, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_62.f_3), 2, 1, 0, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_62.f_3), 3, 0, 1, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_62.f_3), 4, 0, 2, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_62.f_3), 8, 1, 0, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_62.f_3), 9, 0, 0, 0);
				if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 0)
				{
					unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_62.f_3), Global_1837309);
				}
				else
				{
					unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_62.f_3), Global_1836992[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_62.f_3), 1);
				unk_0xAAA71DD7E9059338(unk_0xC35A3A4C05A4831B(Local_62.f_3), 1);
				unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_62.f_3), system::round((200f * Global_262145.f_156)), 0, 0);
				unk_0x1537AF7B62B52EB1(unk_0xC35A3A4C05A4831B(Local_62.f_3), 0);
				unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_62.f_3), 255, 1);
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_62.f_3))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(joaat("s_m_y_blackops_01"));
	return 1;
}

int func_42(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(uParam1))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xC35A3A4C05A4831B(*uParam0), iParam7);
		if (unk_0xC8D49539708A80B4(unk_0xC35A3A4C05A4831B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_43()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	
	if (!unk_0x2FC2FDC413532977(Local_62.f_2))
	{
		if (func_66(joaat("dinghy2")))
		{
			if (!BitTest(uLocal_64, 10))
			{
				func_63(&Local_773, &uLocal_774);
				if (unk_0x1EF8801C2AC1FE34(Local_773 + Vector(2f, 0f, 0f), Local_773 - Vector(10f, 0f, 0f), &Local_773))
				{
					if (func_47(Local_773, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						Var2 = { Local_773 + Vector(12f, 0f, 0f) };
						iLocal_771 = unk_0xA86260972774CF88(Var2, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, 0, 4);
						if (iLocal_771 == 0)
						{
							return 0;
						}
						else
						{
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 10);
						}
					}
				}
			}
			else if (unk_0x0E7DD1EBCA8D2DE3(iLocal_771, &iLocal_772, &uVar0, &uVar0, &uVar1) == 2)
			{
				iLocal_771 = 0;
				if (iLocal_772 == 0)
				{
					if (func_44(&(Local_62.f_2), joaat("dinghy2"), Local_773, uLocal_774, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x0B1BCFB3741AF8B2(unk_0xE38610F405049F71(Local_62.f_2), 1);
						unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_62.f_2), 1, 1, 0);
						unk_0x93C337B66C95C99B(unk_0xE38610F405049F71(Local_62.f_2), 12f);
						unk_0xA80E7D11DB73C8BA(unk_0xE38610F405049F71(Local_62.f_2), 1);
						unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(Local_62.f_2), 0);
					}
				}
				else
				{
					iLocal_772 = 0;
					unk_0x8744D2E3FC95740E(&uLocal_64, 10);
				}
			}
			else if (unk_0x0E7DD1EBCA8D2DE3(iLocal_771, &iLocal_772, &uVar0, &uVar0, &uVar1) == 0)
			{
				iLocal_771 = 0;
				unk_0x8744D2E3FC95740E(&uLocal_64, 10);
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_62.f_2))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(joaat("dinghy2"));
	return 1;
}

int func_44(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x441B9C85D0FFA9ED(iParam1))
	{
		return 0;
	}
	if (!unk_0x2E9F58AD6FE93DFF(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x60040CDD28AA1BC3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0xFC8BFE4B41177C22(iVar1))
	{
		*uParam0 = unk_0x913A6486719A87D2(iVar1);
		Global_2738934.f_6799 = iVar1;
		if (unk_0x2FC2FDC413532977(*uParam0))
		{
			if (bParam13)
			{
				unk_0x32C336953C18A3CE(iVar1, 1);
			}
			unk_0x11C125313CB8ADA2(iVar1, iParam8);
			if (unk_0xC8D49539708A80B4(iVar1))
			{
				if (bParam6)
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 1);
				}
				else
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x4C48F052678AA7EF(*uParam0, unk_0x259BE71D8A81D4FA(), 1);
				}
			}
			unk_0xD37CA6D6F8993BB9(iVar1, iParam7);
			unk_0xA133EF296C37D6E6(iVar1, 1);
			if (bParam10)
			{
				unk_0x8E18C9CFBC30C9FF(iVar1);
				unk_0x3E13A302AA0F06BF(iVar1, 5, 5, 1f);
			}
			func_45(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_45(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_46(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam3 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam2) && system::vdist(Global_2635563.f_3230[1 /*6*/], Param0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = uParam1;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam2;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam3;
	}
}

int func_46(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x1D5CD3EAAA7422B0((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (system::vdist(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_47(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2635563.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x913602ADD2D86A7A(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x2DBCF31839B069B4(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x80F249EA6DFE8476(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam11)
	{
		if (unk_0xE8D2BD34CCB74431(Param0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (fParam12 > 0f)
	{
		if (func_56(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_48(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635563.f_2++;
	return 1;
}

int func_48(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_3(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_52(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x7B780C491DEC834E(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_3(iVar1, 1, 1))
		{
			if (!func_50(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_49(iVar1) || !bParam8) && !Global_2657971[iVar1 /*465*/].f_271)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(iVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_52(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(iVar1) != iParam6 || unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_52(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

bool func_50(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_19(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_51(-1, 0) == 8;
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

int func_51(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

Vector3 func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_55() && Global_1845281[iVar0 /*883*/].f_860) && !func_54(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_53(iParam0);
}

Vector3 func_53(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_54(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_55()
{
	return Global_2684504.f_19;
}

int func_56(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam6 == 0)
		{
			if (func_3(iVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_49(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_57(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_53(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_62(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	Global_2707307 = { func_61(iParam0) };
	if (unk_0xEDD63461767A518C(&Global_2707307))
	{
		return 1;
	}
	if (func_58(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_59(iParam0);
	if (func_19(iVar0))
	{
		if (iVar0 == func_59(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_60();
}

int func_60()
{
	return -1;
}

struct<13> func_61(var uParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

int func_62(int iParam0, var uParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2707307 = { func_61(iParam0) };
		Global_2707320 = { func_61(uParam1) };
		if (unk_0xE582BF3EDDBB1A68(&Global_2707307))
		{
			if (unk_0xE582BF3EDDBB1A68(&Global_2707320))
			{
				unk_0xC07B1AA6155EC337(&Global_2707237, 35, &Global_2707307);
				unk_0xC07B1AA6155EC337(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_63(var uParam0, var uParam1)
{
	*uParam0 = { func_64(Local_62.f_10, (100f / 2f), 100f, 10f) };
	*uParam1 = unk_0x97BC40FFA2FFCCD2((Local_62.f_10 - *uParam0), (Local_62.f_10.f_1 - uParam0->f_1));
}

Vector3 func_64(struct<3> Param0, float fParam1, float fParam2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0xD2AA6F822D3A55D2(-1f, 1f), unk_0xD2AA6F822D3A55D2(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { func_65(Var0, unk_0xD2AA6F822D3A55D2(fParam1, fParam2)) };
	Var0.f_2 = unk_0xD2AA6F822D3A55D2(-fVar1, fVar1);
	return Param0 + Var0;
}

Vector3 func_65(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_66(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

Vector3 func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar3 = unk_0xED977E2AE2CB16EE(Local_62.f_10, func_39(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { func_39(iVar1) };
			Local_62.f_6 = func_68(iVar1);
			Local_62.f_6 = func_68(iVar1);
			Local_62.f_13 = { Local_62.f_10, 8000f, 0f };
			return Var2;
			break;
		
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar3 = unk_0xED977E2AE2CB16EE(Local_62.f_10, func_39(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { func_39(iVar1) };
			Local_62.f_6 = func_68(iVar1);
			Local_62.f_6 = func_68(iVar1);
			Local_62.f_13 = { 5000f, Local_62.f_10.f_1, 0f };
			return Var2;
			break;
		
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar3 = unk_0xED977E2AE2CB16EE(Local_62.f_10, func_39(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { func_39(iVar1) };
			Local_62.f_6 = func_68(iVar1);
			Local_62.f_6 = func_68(iVar1);
			Local_62.f_13 = { Local_62.f_10, -5000f, 0f };
			return Var2;
			break;
		
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar3 = unk_0xED977E2AE2CB16EE(Local_62.f_10, func_39(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { func_39(iVar1) };
			Local_62.f_6 = func_68(iVar1);
			Local_62.f_6 = func_68(iVar1);
			Local_62.f_13 = { -5000f, Local_62.f_10.f_1, 0f };
			return Var2;
			break;
	}
	return -1392,428f, -1661,61f, 0f;
}

float func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156,0512f;
		
		case 1:
			return 186,4808f;
		
		case 2:
			return 65,4787f;
		
		case 3:
			return 56,421f;
		
		case 4:
			return 76,4749f;
		
		case 5:
			return 79,1503f;
		
		case 6:
			return 24,8224f;
		
		case 7:
			return 27,7851f;
		
		case 8:
			return 32,1401f;
		
		case 9:
			return 329,6803f;
		
		case 10:
			return 328,7837f;
		
		case 11:
			return 283,9666f;
		
		case 12:
			return 295,5786f;
		
		case 13:
			return 314,4354f;
		
		case 14:
			return 0,4088f;
		
		case 15:
			return 287,0804f;
		
		case 16:
			return 249,5385f;
		
		case 17:
			return 270,7522f;
		
		case 18:
			return 260,8947f;
		
		case 19:
			return 248,4225f;
		
		case 20:
			return 233,6563f;
		
		default:
	}
	return 228,6098f;
}

int func_69()
{
	struct<3> Var0;
	
	Var0 = { func_53(unk_0x259BE71D8A81D4FA()) };
	if (Var0.f_1 >= 0f && Var0.f_0 >= 0f)
	{
		return 0;
	}
	else if (Var0.f_1 < 0f && Var0.f_0 >= 0f)
	{
		return 1;
	}
	else if (Var0.f_1 < 0f && Var0.f_0 < 0f)
	{
		return 2;
	}
	else if (Var0.f_1 >= 0f && Var0.f_0 < 0f)
	{
		return 3;
	}
	return -1;
}

int func_70(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_71(uParam0, bParam2, 0);
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

void func_71(var uParam0, bool bParam1, bool bParam2)
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

int func_72(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_71(uParam0, 0, 0);
		}
	}
}

int func_74(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_75(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_75(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
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

void func_76()
{
	if (func_3(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (Local_62.f_21 == 5)
		{
			Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 5;
		}
		switch (Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2)
		{
			case 0:
				func_99();
				if (Local_62.f_21 > 0)
				{
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
				}
				break;
			
			case 1:
				if (func_74(Local_62.f_2))
				{
					func_134();
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 0))
					{
						func_98();
						Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 3;
						unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
						unk_0x8744D2E3FC95740E(&(Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 0);
					}
				}
				break;
			
			case 2:
				if (func_74(Local_62.f_2))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 0))
					{
						Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 3;
						unk_0x8744D2E3FC95740E(&(Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 5);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 6);
						if (Local_62.f_21 >= 4)
						{
							Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_74(Local_62.f_2))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 0))
					{
						if (Local_62.f_21 >= 4)
						{
							Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 4;
						}
						func_97();
					}
					else
					{
						Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 4:
				if (func_74(Local_62.f_2))
				{
					if (!BitTest(uLocal_64, 3))
					{
						if (unk_0xDF93B3CFAC96698F(unk_0xE38610F405049F71(Local_62.f_2)) < 3f)
						{
							unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 3);
						}
					}
					if ((!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 0) && !unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2))) && func_33(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 1) >= 10f)
					{
						Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 5;
					}
				}
				break;
			
			case 5:
				func_147();
				break;
		}
		func_77();
	}
}

void func_77()
{
	int iVar0;
	struct<9> Var1;
	
	if (unk_0xA0C7B98BCF1EEF9E(uLocal_70))
	{
		if (func_92(1, 1))
		{
			if (((Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 1 || Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 2) || Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 3) || Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { func_91() };
				func_89(&uLocal_71);
				if (Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 1)
				{
					if (func_74(Local_62.f_2))
					{
						if ((unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 10f, 10f, 3f, 0, 1, 0) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !func_88(unk_0xE38610F405049F71(Local_62.f_2), 0))
						{
							func_87(unk_0xE934399D6F2C3AC5(2, 23, 1), "BTX_ENTER", &uLocal_71, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_97();
					func_86(1);
					func_78(&uLocal_70, &Var1, &uLocal_71, func_85(&uLocal_71));
				}
			}
		}
	}
	else
	{
		uLocal_70 = unk_0x8DE4F68A9728925E("instructional_buttons");
	}
}

void func_78(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x7811C74D5B749F76(2))
	{
		*uParam2 = 0;
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(0);
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
		}
		func_84(uParam2);
	}
	if (Global_1577937 < 2)
	{
		func_83(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			*uParam0 = unk_0x8DE4F68A9728925E("instructional_buttons");
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xB750FE3C9F094356(*uParam0, "CLEAR_ALL");
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_82(unk_0xE934399D6F2C3AC5(iVar1, iVar2, 1));
						if (iVar3 < 365)
						{
							func_82(unk_0xE934399D6F2C3AC5(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_82(unk_0xF761D79754BC3043(uVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_81(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					func_82(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_82(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_81(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						unk_0x557F1E2300EF1A3E(0);
						unk_0x330108B080A2132F(365);
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar0++;
			}
			unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4(uParam2->f_699);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x330108B080A2132F(false);
			unk_0xE6B753D52F4CA222();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0,05f;
	uParam2->f_696 = 0,045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_80(*uParam0, uParam1);
	}
	func_79();
}

void func_79()
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
}

void func_80(var uParam0, var uParam1)
{
	unk_0xA91A4C18A2DB01BD(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_81(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_82(char* sParam0)
{
	unk_0xCE3E870AC37B4253(sParam0);
}

void func_83(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_84(var uParam0)
{
	Global_1979636 = 0;
	uParam0->f_692 = 0;
}

int func_85(var uParam0)
{
	return (Global_1979636 || uParam0->f_692);
}

void func_86(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_87(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar1 = unk_0x2EEC0612337D20CE(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0xC39AE5D390581AD5(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0xFD5C5BBD1FE92BB7(iParam0, (iVar0 - 1), 0);
				if (unk_0x4FAFF4BCB7633475(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_89(var uParam0)
{
	func_90(uParam0);
	uParam0->f_692 = 1;
}

void func_90(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1979636 = 0;
}

struct<9> func_91()
{
	struct<9> Var0;
	
	Var0.f_0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_92(int iParam0, int iParam1)
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_96())
		{
			return 0;
		}
	}
	if (func_31())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_95(0))
		{
			return 0;
		}
	}
	if (func_94(8, -1))
	{
		return 0;
	}
	if (unk_0xEF37E704F02B50F3())
	{
		return 0;
	}
	if (func_93())
	{
		return 0;
	}
	if (Global_61347)
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (unk_0xB11671B812399BA2())
	{
		return 0;
	}
	if (Global_1574972)
	{
		return 0;
	}
	if (Global_1836451)
	{
		return 0;
	}
	return 1;
}

bool func_93()
{
	return Global_1575083;
}

bool func_94(int iParam0, int iParam1)
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

int func_95(int iParam0)
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

bool func_96()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

void func_97()
{
	Global_2750949.f_258 = 1;
}

void func_98()
{
	if (unk_0xC450B06E5AAA0985(uLocal_66))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_66);
	}
}

void func_99()
{
	var uVar0;
	
	if (!unk_0x4C705AAF75363287())
	{
		uVar0 = func_27(1191, -1);
		if (!BitTest(uVar0, 15))
		{
			func_101("BTX_HELP1", -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 15);
			func_100(1191, uVar0, -1, 1);
		}
	}
}

void func_100(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_28(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
		}
	}
}

void func_101(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_102()
{
	if (!func_4(Local_62.f_3) && func_74(Local_62.f_2))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_62.f_3) || (!unk_0xB0AB1F334666E337(Local_62.f_3) && unk_0x93E08E0F531E2C35()))
		{
			func_132();
			func_106();
			if (func_105(Local_62.f_3))
			{
				unk_0x0FB8E752BCC547A9(unk_0xC35A3A4C05A4831B(Local_62.f_3), 323, 1);
			}
			switch (Local_62.f_20)
			{
				case 0:
					break;
				
				case 2:
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_vehicle_mission")) != 0)
					{
						unk_0xDD216642D7E1AD6B(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0xE38610F405049F71(Local_62.f_2), 0, unk_0x4A8C381C258A124D(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				
				case 4:
					func_104(unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_62.f_2), 0), Local_62.f_7);
					unk_0x693ACD1AA0BDB375(fLocal_946, fLocal_948, fLocal_947, fLocal_949);
					if (unk_0xFFEB5F24B372DFF6(fLocal_946, fLocal_948, fLocal_947, fLocal_949))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_perform_sequence")) != 0)
						{
							unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_62.f_3), uLocal_69);
						}
					}
					break;
				
				case 5:
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_vehicle_mission")) != 0)
					{
						unk_0x30CCF17FEE4BDA53(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0xE38610F405049F71(Local_62.f_2), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_62.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 3:
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_vehicle_mission")) != 0)
					{
						unk_0x30CCF17FEE4BDA53(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0xE38610F405049F71(Local_62.f_2), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_62.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 1:
					if (!BitTest(Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_1, 7))
					{
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), 0) || unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2)))
						{
							unk_0x34A9A872D3C510BF(unk_0xC35A3A4C05A4831B(Local_62.f_3), 0);
							unk_0x3FF406EF0BE27DA3(unk_0xC35A3A4C05A4831B(Local_62.f_3), 0);
							unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_3), 2, 0);
							unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_62.f_3), uLocal_67);
						}
						else
						{
							unk_0x34A9A872D3C510BF(unk_0xC35A3A4C05A4831B(Local_62.f_3), 0);
							unk_0x3FF406EF0BE27DA3(unk_0xC35A3A4C05A4831B(Local_62.f_3), 0);
							unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_62.f_3), 2, 1);
							unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_62.f_3), uLocal_68);
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 7);
					}
					break;
				
				case 6:
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_62.f_3), joaat("script_task_perform_sequence")) != 0)
					{
						unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_62.f_3), uLocal_68);
					}
					break;
				
				case 7:
					if (unk_0x2FC2FDC413532977(Local_62.f_2))
					{
						func_103(&(Local_62.f_2));
					}
					if (unk_0x2FC2FDC413532977(Local_62.f_3))
					{
						unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_62.f_3), 1);
						func_103(&(Local_62.f_3));
					}
					break;
				}
			}
	}
}

void func_103(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

void func_104(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)
{
	if (Param0.f_0 < Param2.f_0)
	{
		fLocal_946 = (Param0.f_0 - 25f);
		fLocal_947 = (Param2.f_0 + 25f);
	}
	else if (Param0.f_0 > Param2.f_0)
	{
		fLocal_946 = (Param2.f_0 - 25f);
		fLocal_947 = (Param0.f_0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_948 = (Param0.f_1 - 25f);
		fLocal_949 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_948 = (Param2.f_1 - 25f);
		fLocal_949 = (Param0.f_1 + 25f);
	}
}

int func_105(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

void func_106()
{
	bool bVar0;
	struct<2> Var1;
	
	if (!BitTest(uLocal_64, 4))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xC35A3A4C05A4831B(Local_62.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_131(&uLocal_775, 8, unk_0xC35A3A4C05A4831B(Local_62.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_110(&uLocal_775, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 4);
			}
		}
	}
	if (!BitTest(uLocal_64, 6))
	{
		if (Local_62.f_20 == 4)
		{
			func_131(&uLocal_775, 8, unk_0xC35A3A4C05A4831B(Local_62.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_110(&uLocal_775, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 6);
			}
		}
	}
	if (!BitTest(uLocal_64, 5))
	{
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_62.f_7, (10f * 2f), (10f * 2f), (10f * 2f), 0, 1, 0))
		{
			func_131(&uLocal_775, 8, unk_0xC35A3A4C05A4831B(Local_62.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_110(&uLocal_775, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 5);
			}
		}
	}
	if (!BitTest(uLocal_64, 7))
	{
		if (Local_62.f_20 == 5)
		{
			func_131(&uLocal_775, 8, unk_0xC35A3A4C05A4831B(Local_62.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_110(&uLocal_775, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 7);
			}
		}
	}
	if (!BitTest(uLocal_64, 8))
	{
		func_131(&uLocal_775, 8, unk_0xC35A3A4C05A4831B(Local_62.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_110(&uLocal_775, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 8);
		}
	}
	if (Local_62.f_20 == 3)
	{
		if (func_70(&uLocal_941, 30000, 0))
		{
			func_131(&uLocal_775, 8, unk_0xC35A3A4C05A4831B(Local_62.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_110(&uLocal_775, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				func_109(&uLocal_941, 0, 0);
			}
		}
	}
	if (Local_62.f_20 == 4)
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) <= 0)
		{
			if (func_70(&uLocal_944, iLocal_943, 0))
			{
				bVar0 = unk_0xC5935DFB3F39785A(0, 17);
				StringCopy(&Var1, "", 16);
				if (!BitTest(uLocal_65, bVar0))
				{
					switch (bVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!unk_0xD6F9DEE4765092A9(&Var1))
					{
						func_131(&uLocal_775, 8, unk_0xC35A3A4C05A4831B(Local_62.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_110(&uLocal_775, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							func_109(&uLocal_944, 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, bVar0);
							unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
							iLocal_943 = (unk_0xC5935DFB3F39785A(20000, 30001) + bVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_62.f_3))
	{
		if (func_74(Local_62.f_2))
		{
			if (!unk_0x912159A05BE6B52E(unk_0xC35A3A4C05A4831B(Local_62.f_3)) && !unk_0xAD0D2187C5FE447D(unk_0xC35A3A4C05A4831B(Local_62.f_3)))
			{
				if (unk_0x9B3D4335E0EDB0BE(unk_0xE38610F405049F71(Local_62.f_2), unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(unk_0xC35A3A4C05A4831B(Local_62.f_3), unk_0x4A8C381C258A124D(), 1))
				{
					switch (unk_0xC5935DFB3F39785A(0, 6))
					{
						case 0:
							func_107(unk_0xC35A3A4C05A4831B(Local_62.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						
						case 1:
							func_107(unk_0xC35A3A4C05A4831B(Local_62.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						
						case 2:
							func_107(unk_0xC35A3A4C05A4831B(Local_62.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						
						case 3:
							func_107(unk_0xC35A3A4C05A4831B(Local_62.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						
						case 4:
							func_107(unk_0xC35A3A4C05A4831B(Local_62.f_3), "GENERIC_CURSE_MED", 3);
							break;
						
						case 5:
							func_107(unk_0xC35A3A4C05A4831B(Local_62.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					unk_0xE4DC7B3DD712372B(unk_0xE38610F405049F71(Local_62.f_2));
					unk_0xE4DC7B3DD712372B(unk_0xC35A3A4C05A4831B(Local_62.f_3));
				}
			}
			else
			{
				unk_0xE4DC7B3DD712372B(unk_0xE38610F405049F71(Local_62.f_2));
				unk_0xE4DC7B3DD712372B(unk_0xC35A3A4C05A4831B(Local_62.f_3));
			}
		}
	}
}

void func_107(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_108(iParam2), 1);
}

int func_108(int iParam0)
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

void func_109(var uParam0, bool bParam1, bool bParam2)
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

bool func_110(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_130(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_111(sParam2, iParam3, 0);
}

int func_111(char* sParam0, int iParam1, bool bParam2)
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
					func_129();
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
		if (func_94(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_128();
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
				func_120();
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
				if (func_119())
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
			if (func_118())
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
			func_117();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_116();
		func_112();
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
		func_129();
	}
	return 0;
}

void func_112()
{
	if (!func_113())
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

int func_113()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_60())
	{
		return 0;
	}
	if (func_114(unk_0x259BE71D8A81D4FA()))
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

bool func_114(int iParam0)
{
	return func_115(iParam0, 20);
}

var func_115(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

void func_116()
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

void func_117()
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

int func_118()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_119()
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

void func_120()
{
	if (func_127(14))
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
		Global_20930 = func_121();
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

var func_121()
{
	func_122();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_122()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_125(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_124(unk_0x4A8C381C258A124D());
			if (func_123(iVar0) && (!func_127(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_123(Global_113969.f_2366.f_539.f_4321))
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

bool func_123(int iParam0)
{
	return iParam0 < 3;
}

int func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_125(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_125(int iParam0)
{
	if (func_123(iParam0))
	{
		return func_126(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_126(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_127(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_128()
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

void func_129()
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

void func_130(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = uParam5;
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

void func_131(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
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

void func_132()
{
	unk_0xCFBD89D2F1F18961("MobileRadioInGame", 0);
	if (func_3(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2)) && !func_133(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_62.f_2), -1))
		{
			unk_0xCFBD89D2F1F18961("MobileRadioInGame", 1);
		}
	}
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && !unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		if (unk_0xF4244288C3EF3306(iParam0, iParam1))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_134()
{
	if (!unk_0xC450B06E5AAA0985(uLocal_66))
	{
		if (func_74(Local_62.f_2))
		{
			uLocal_66 = unk_0x18E23E031A9B798F(unk_0xE38610F405049F71(Local_62.f_2));
			unk_0x4C905FB262965D5D(uLocal_66, 356);
			unk_0x594D5D0D7071B0DE(uLocal_66, "BTX_BLIP");
			unk_0x861AC9C2D48CEA7F(uLocal_66, 1);
			unk_0x084D9FE4DB5714CF(uLocal_66, 6);
		}
	}
}

void func_135()
{
	if (func_74(Local_62.f_2))
	{
		unk_0xB5396F1FB088FE38(&uLocal_69);
		unk_0xDD216642D7E1AD6B(0, unk_0xE38610F405049F71(Local_62.f_2), 0, 0, Local_62.f_7, 4, 12f, 786469, 10f, 1071);
		unk_0x93C0674FC00824D0(uLocal_69);
		unk_0xB5396F1FB088FE38(&uLocal_68);
		unk_0x30CCF17FEE4BDA53(0, unk_0xE38610F405049F71(Local_62.f_2), Local_62.f_13, 4, 12f, 786469, 0f, 0f, 1);
		unk_0x7C8E9DE09D4AD3FF(0, unk_0xE38610F405049F71(Local_62.f_2), 12f, 786469);
		unk_0x93C0674FC00824D0(uLocal_68);
		unk_0xB5396F1FB088FE38(&uLocal_67);
		unk_0x092B9247AF00F5CF(0, 0, 64);
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0x761F56E633460973(0, 1193033728, 0);
		}
		unk_0x93C0674FC00824D0(uLocal_67);
	}
}

int func_136()
{
	return Local_62.f_1;
}

int func_137(int iParam0)
{
	return Local_63[iParam0 /*3*/];
}

int func_138()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_145())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_144())
	{
		return 1;
	}
	if (func_143(159))
	{
		if (!func_142())
		{
			return 1;
		}
	}
	if (func_143(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_139() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_139()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_139()
{
	switch (func_141())
	{
		case 0:
			return func_140();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_140()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_141()
{
	return Global_32948;
}

bool func_142()
{
	return Global_2684504.f_700;
}

int func_143(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return Global_2696172;
}

bool func_145()
{
	return Global_2684504.f_695;
}

void func_146()
{
	system::wait(0);
}

void func_147()
{
	func_98();
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (Local_62.f_20 == 7)
		{
			if (func_74(Local_62.f_2) && !func_4(Local_62.f_3))
			{
				unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_62.f_3), uLocal_68);
			}
			if (unk_0x2FC2FDC413532977(Local_62.f_2))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_62.f_2))
				{
					func_103(&(Local_62.f_2));
				}
			}
			if (unk_0x2FC2FDC413532977(Local_62.f_3))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_62.f_3))
				{
					func_103(&(Local_62.f_3));
				}
			}
		}
	}
	func_150(func_151(1, 1), 9, func_60());
	func_149();
	unk_0xD314260005F064BF(&uLocal_70);
	func_148();
}

void func_148()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_149()
{
	unk_0xD0557B139A542F12(&uLocal_67);
	unk_0xD0557B139A542F12(&uLocal_68);
	unk_0xD0557B139A542F12(&uLocal_69);
}

void func_150(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = -836944817;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 7, iParam0, Var0.f_0);
	}
}

int func_151(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_50(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_152(struct<21> Param0)
{
	func_156(32, Param0);
	unk_0x17C7D9B3979F5759(1);
	unk_0x552B3BADB43FF551(1);
	func_154(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_62, 22, 0);
	unk_0x7B13DC83218D9AF5(&Local_63, 97, 0);
	if (!func_153())
	{
		return 0;
	}
	unk_0xAECC5FA98C879D67(0);
	if (unk_0x93E08E0F531E2C35())
	{
		Local_62.f_4 = unk_0x259BE71D8A81D4FA();
		Local_62.f_5 = func_69();
		Local_62.f_10 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) + Vector(0f, 5f, 0f) };
		Local_62.f_7 = { func_67(Local_62.f_5) };
	}
	unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, 8);
	iLocal_940 = unk_0xF859473E4AD09F30();
	Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 0;
	return 1;
}

int func_153()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_145())
		{
			return 0;
		}
		if (func_143(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_154(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_148();
			}
			else
			{
				return 0;
			}
		}
		if (!func_155(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_148();
					}
					else
					{
						return 0;
					}
				}
				if (func_145())
				{
					if (!bParam2)
					{
						func_148();
					}
					else
					{
						return 0;
					}
				}
				if (func_143(157))
				{
					if (!bParam2)
					{
						func_148();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bParam2)
				{
					func_148();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0xDFF16B5B12604EFF();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (!bParam2)
			{
				func_148();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBF52D447C795492B())
	{
		if (!bParam2)
		{
			func_148();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_155(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_156(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_148();
	}
	unk_0xDB2434E51017FFCC(iParam0, 0, Param1.f_16);
}

