# ConformanceTest

Small CMake- & CTest-based project, designed to automate the conformance check of the most common compilers. Both language and library features are represented as a single test file, which is then built by the Travis-CI service. 

Thanks Louis Dionne for the [libawful](https://github.com/ldionne/libawful) and [this reddit discussion](https://www.reddit.com/r/cpp/comments/c3nr2a/i_added_apple_clang_columns_to_cppreference/) as an inspiration for this project.

 - [C++2a library features](#C2a-library-features)
 - [C++2a language features](#C2a-language-features)
 - [C++17 library features](#C17-library-features)
 - [C++17 language features](#C17-language-features)
 - [C++14 library features](#C14-library-features)
 - [C++14 language features](#C14-language-features)
 - [C++11 library features](#C11-library-features)
 - [C++11 language features](#C11-language-features)

## C++2a library features

WIP

## C++2a language features

WIP


## C++17 library features

WIP

## C++17 language features

WIP


## C++14 library features

WIP

## C++14 language features

WIP

## C++11 library features

WIP

## C++11 language features

WIP

| Feature                      	| Paper link                       	| clang++-7 																							| сlang++-8 																								| g++-5 																									| g++-6 																									| g++-7 																									|g++-8																										|
|------------------------------	|----------------------------------	|-----------------------------------------------------------------------------------------------------	|---------------------------------------------------------------------------------------------------------	|---------------------------------------------------------------------------------------------------------	|---------------------------------------------------------------------------------------------------------	|---------------------------------------------------------------------------------------------------------- |---------------------------------------------------------------------------------------------------------- |
| Attributes                   	| [n2761](https://wg21.link/n2761) 	| ![](https://www.dropbox.com/s/acw9ak278khpz3c/c%2B%2B11.attributes.n2761.png?raw=1) 					| ![](https://www.dropbox.com/s/28zevybxq95w5by/c%2B%2B11.attributes.n2761.png?raw=1) 						| ![](https://www.dropbox.com/s/rdmytfg210l66th/c%2B%2B11.attributes.n2761.png?raw=1) 						| ![](https://www.dropbox.com/s/xlk0a0vd9efonkg/c%2B%2B11.attributes.n2761.png?raw=1) 						| ![](https://www.dropbox.com/s/hgid43rzxj9574s/c%2B%2B11.attributes.n2761.png?raw=1) 						| ![](https://www.dropbox.com/s/bosugfz3s5hd2b8/c%2B%2B11.attributes.n2761.png?raw=1) 						|
| `decltype`           			| [n2343](https://wg21.link/n2343) 	| ![](https://www.dropbox.com/s/32gh63zm4x4b9z0/c%2B%2B11.decltype.n2343.png?raw=1) 					| ![](https://www.dropbox.com/s/k7fau51no2xh5eg/c%2B%2B11.decltype.n2343.png?raw=1) 						| ![](https://www.dropbox.com/s/kh3lnl8mfzej8ko/c%2B%2B11.decltype.n2343.png?raw=1) 						| ![](https://www.dropbox.com/s/71h63d33jcyhrzb/c%2B%2B11.decltype.n2343.png?raw=1) 						| ![](https://www.dropbox.com/s/ovfzjzac6kd3o1g/c%2B%2B11.decltype.n2343.png?raw=1) 						| ![](https://www.dropbox.com/s/hbjoq94of2u0xg7/c%2B%2B11.decltype.n2343.png?raw=1) 						|
| `decltype`                   	| [n3276](https://wg21.link/n3276) 	| ![](https://www.dropbox.com/s/bgw2smw2mlkmyx2/c%2B%2B11.decltype.n3276.png?raw=1) 					| ![](https://www.dropbox.com/s/2hb3n5x6wo5uf5i/c%2B%2B11.decltype.n3276.png?raw=1) 						| ![](https://www.dropbox.com/s/zl76odp0pm7qt5w/c%2B%2B11.decltype.n3276.png?raw=1) 						| ![](https://www.dropbox.com/s/qpi1qxug4u7gev6/c%2B%2B11.decltype.n3276.png?raw=1) 						| ![](https://www.dropbox.com/s/nysama6moid96t3/c%2B%2B11.decltype.n3276.png?raw=1) 						| ![](https://www.dropbox.com/s/t5syu4umiik8e81/c%2B%2B11.decltype.n3276.png?raw=1) 						|
| Extended friend declarations	| [n1791](https://wg21.link/n1791) 	| ![](https://www.dropbox.com/s/r6ih1sy2sggsgs2/c%2B%2B11.extended_friend_declarations.n1791.png?raw=1) | ![](https://www.dropbox.com/s/2ltsmc272h3knn7/c%2B%2B11.extended_friend_declarations.n1791.png?raw=1) 	| ![](https://www.dropbox.com/s/xpe7suze4tlj8g5/c%2B%2B11.extended_friend_declarations.n1791.png?raw=1) 	| ![](https://www.dropbox.com/s/frht4m3fi2tjugg/c%2B%2B11.extended_friend_declarations.n1791.png?raw=1) 	| ![](https://www.dropbox.com/s/y7igc0al4s8z9df/c%2B%2B11.extended_friend_declarations.n1791.png?raw=1) 	| ![](https://www.dropbox.com/s/wbc94p74lbish8z/c%2B%2B11.extended_friend_declarations.n1791.png?raw=1)		|
| `final`						| [n3206](https://wg21.link/n3206) 	| ![](https://www.dropbox.com/s/w7no9bcbv45ff3x/c%2B%2B11.final.n3206.fail.png?raw=1) 					| ![](https://www.dropbox.com/s/9x744x39lh73tum/c%2B%2B11.final.n3206.fail.png?raw=1) 						| ![](https://www.dropbox.com/s/4vc9dqku9xqfrut/c%2B%2B11.final.n3206.fail.png?raw=1) 						| ![](https://www.dropbox.com/s/pow52f8mp2us0qx/c%2B%2B11.final.n3206.fail.png?raw=1) 						| ![](https://www.dropbox.com/s/g18fm6misyxjiqz/c%2B%2B11.final.n3206.fail.png?raw=1) 						| ![](https://www.dropbox.com/s/55tncecvx4fk79g/c%2B%2B11.final.n3206.fail.png?raw=1) 						|
| Forward enum declarations 	| [n2764](https://wg21.link/n2764) 	| ![](https://www.dropbox.com/s/goi6suc2ptuvn68/c%2B%2B11.forward_enum_declarations.n2764.png?raw=1) 	| ![](https://www.dropbox.com/s/8ljglyutp5shwyk/c%2B%2B11.forward_enum_declarations.n2764.png?raw=1) 		| ![](https://www.dropbox.com/s/dts9l9y3fphufq7/c%2B%2B11.forward_enum_declarations.n2764.png?raw=1) 		| ![](https://www.dropbox.com/s/507adtkp936xh8a/c%2B%2B11.forward_enum_declarations.n2764.png?raw=1) 		| ![](https://www.dropbox.com/s/p8anokw84p1nv83/c%2B%2B11.forward_enum_declarations.n2764.png?raw=1) 		| ![](https://www.dropbox.com/s/949zce51ppx0w2j/c%2B%2B11.forward_enum_declarations.n2764.png?raw=1) 		|
| `std::initializer_list<T>`	| [n2672](https://wg21.link/n2672) 	| ![](https://www.dropbox.com/s/nzhoisr27zaoze6/c%2B%2B11.initializer_list.n2672.png?raw=1) 			| ![](https://www.dropbox.com/s/lb8ky57nez6x5vh/c%2B%2B11.initializer_list.n2672.png?raw=1) 				| ![](https://www.dropbox.com/s/4y4vtdo8omnu1o3/c%2B%2B11.initializer_list.n2672.png?raw=1) 				| ![](https://www.dropbox.com/s/bf7i1rg9vr5n1w5/c%2B%2B11.initializer_list.n2672.png?raw=1) 				| ![](https://www.dropbox.com/s/nw954paashxziid/c%2B%2B11.initializer_list.n2672.png?raw=1) 				| ![](https://www.dropbox.com/s/pm0df4u95z7uy9t/c%2B%2B11.initializer_list.n2672.png?raw=1) 				|
| `noexcept`					| [n3050](https://wg21.link/n3050) 	| ![](https://www.dropbox.com/s/q9j5464xdv6bt3o/c%2B%2B11.noexcept.n3050.png?raw=1) 					| ![](https://www.dropbox.com/s/07hd6guy60ssryv/c%2B%2B11.noexcept.n3050.png?raw=1) 						| ![](https://www.dropbox.com/s/89h2gk1l5mra2kb/c%2B%2B11.noexcept.n3050.png?raw=1) 						| ![](https://www.dropbox.com/s/61r7qj1o563751r/c%2B%2B11.noexcept.n3050.png?raw=1) 						| ![](https://www.dropbox.com/s/l8jtjh0vynxjd7i/c%2B%2B11.noexcept.n3050.png?raw=1) 						| ![](https://www.dropbox.com/s/z54uehk7gs7cigh/c%2B%2B11.noexcept.n3050.png?raw=1) 						|
| Lambda-functions 				| [n2550](https://wg21.link/n2550) 	| ![](https://www.dropbox.com/s/moe5pducviwdf45/c%2B%2B11.lambda.n2550.png?raw=1) 						| ![](https://www.dropbox.com/s/zvwqjc1wfisg3nm/c%2B%2B11.lambda.n2550.png?raw=1) 							| ![](https://www.dropbox.com/s/w9amu90s6wtqe3b/c%2B%2B11.lambda.n2550.png?raw=1) 							| ![](https://www.dropbox.com/s/mq69r7vq1pgkc1h/c%2B%2B11.lambda.n2550.png?raw=1) 							| ![](https://www.dropbox.com/s/vpsihlw19dyk29y/c%2B%2B11.lambda.n2550.png?raw=1) 							| ![](https://www.dropbox.com/s/ilc32y4afmf4os8/c%2B%2B11.lambda.n2550.png?raw=1) 							|
| Non-static initializers		| [n2756](https://wg21.link/n2756) 	| ![](https://www.dropbox.com/s/85j2efy0oaa5dsg/c%2B%2B11.non_static_initializers.n2756.png?raw=1) 		| ![](https://www.dropbox.com/s/fjz2hzvmf09mrh5/c%2B%2B11.non_static_initializers.n2756.png?raw=1) 			| ![](https://www.dropbox.com/s/prsbjwdveup76em/c%2B%2B11.non_static_initializers.n2756.png?raw=1) 			| ![](https://www.dropbox.com/s/2n1ty0l8w9kdozc/c%2B%2B11.non_static_initializers.n2756.png?raw=1) 			| ![](https://www.dropbox.com/s/jgiy3hktw7fxtg9/c%2B%2B11.non_static_initializers.n2756.png?raw=1) 			| ![](https://www.dropbox.com/s/witwn8q1m82o3n1/c%2B%2B11.non_static_initializers.n2756.png?raw=1) 			|
| `override`					| [n3272](https://wg21.link/n3272) 	| ![](https://www.dropbox.com/s/npyhrivl974l5xp/c%2B%2B11.override.n3272.png?raw=1) 					| ![](https://www.dropbox.com/s/driaa0fdcgiftwu/c%2B%2B11.override.n3272.png?raw=1) 						| ![](https://www.dropbox.com/s/jx98vbgz2qmf193/c%2B%2B11.override.n3272.png?raw=1) 						| ![](https://www.dropbox.com/s/8jy69kqtznfys7p/c%2B%2B11.override.n3272.png?raw=1) 						| ![](https://www.dropbox.com/s/ws2bdpl9yxo6bya/c%2B%2B11.override.n3272.png?raw=1) 						| ![](https://www.dropbox.com/s/w8zwrmd3wjf96cd/c%2B%2B11.override.n3272.png?raw=1) 						|
| Range-based for-loop			| [n2930](https://wg21.link/n2930) 	| ![](https://www.dropbox.com/s/cel22zgwa80x56n/c%2B%2B11.ranged_for_loop.n2930.png?raw=1) 				| ![](https://www.dropbox.com/s/w4lcskoinv849dt/c%2B%2B11.ranged_for_loop.n2930.png?raw=1) 					| ![](https://www.dropbox.com/s/v1mva3kh1top2uo/c%2B%2B11.ranged_for_loop.n2930.png?raw=1) 					| ![](https://www.dropbox.com/s/ngroutagg1mgee9/c%2B%2B11.ranged_for_loop.n2930.png?raw=1) 					| ![](https://www.dropbox.com/s/is2briesbaaummd/c%2B%2B11.ranged_for_loop.n2930.png?raw=1) 					| ![](https://www.dropbox.com/s/ll6yi525f5v1qgq/c%2B%2B11.ranged_for_loop.n2930.png?raw=1) 					|
| Right-angle brackets			| [n1757](https://wg21.link/n1757) 	| ![](https://www.dropbox.com/s/070ejr9c8tn31ts/c%2B%2B11.right_angle_brackets.n1757.png?raw=1) 		| ![](https://www.dropbox.com/s/lulbt25kccqhry5/c%2B%2B11.right_angle_brackets.n1757.png?raw=1) 			| ![](https://www.dropbox.com/s/bsclry0s9uvrs07/c%2B%2B11.right_angle_brackets.n1757.png?raw=1) 			| ![](https://www.dropbox.com/s/50ammj56pwv7wgm/c%2B%2B11.right_angle_brackets.n1757.png?raw=1) 			| ![](https://www.dropbox.com/s/32hulvhai2mqthi/c%2B%2B11.right_angle_brackets.n1757.png?raw=1) 			| ![](https://www.dropbox.com/s/in78v8evw004143/c%2B%2B11.right_angle_brackets.n1757.png?raw=1) 			|
| rvalues						| [n3053](https://wg21.link/n3053) 	| ![](https://www.dropbox.com/s/x2pa6su21t9sywk/c%2B%2B11.rvalue.n3053.png?raw=1) 						| ![](https://www.dropbox.com/s/dv7wgm6rn3l3nae/c%2B%2B11.rvalue.n3053.png?raw=1) 							| ![](https://www.dropbox.com/s/4fiyaa9pbvo8vru/c%2B%2B11.rvalue.n3053.png?raw=1) 							| ![](https://www.dropbox.com/s/0ai99hbtz4zlelv/c%2B%2B11.rvalue.n3053.png?raw=1) 							| ![](https://www.dropbox.com/s/mre334atci3kjpf/c%2B%2B11.rvalue.n3053.png?raw=1) 							| ![](https://www.dropbox.com/s/mi2nheu7b01zdn2/c%2B%2B11.rvalue.n3053.png?raw=1) 							|
| `static_assert`				| [n1720](https://wg21.link/n1720) 	| ![](https://www.dropbox.com/s/my0kdmpng9oy5ia/c%2B%2B11.static_assert.n1720.png?raw=1) 				| ![](https://www.dropbox.com/s/d5cqukoqe84yd8n/c%2B%2B11.static_assert.n1720.png?raw=1) 					| ![](https://www.dropbox.com/s/53d7zd4vllzf8cr/c%2B%2B11.static_assert.n1720.png?raw=1) 					| ![](https://www.dropbox.com/s/iomxsysx60req2y/c%2B%2B11.static_assert.n1720.png?raw=1) 					| ![](https://www.dropbox.com/s/tzok4olrajd1en8/c%2B%2B11.static_assert.n1720.png?raw=1) 					| ![](https://www.dropbox.com/s/7noua8gvr6jpo9q/c%2B%2B11.static_assert.n1720.png?raw=1) 					|
| User-defined literals			| [n2765](https://wg21.link/n2765) 	| ![](https://www.dropbox.com/s/35q23d2jxcl265d/c%2B%2B11.user_defined_literals.n2765.png?raw=1) 		| ![](https://www.dropbox.com/s/brygjodx0xi9gwa/c%2B%2B11.user_defined_literals.n2765.png?raw=1) 			| ![](https://www.dropbox.com/s/mhsqev7oo8lcf2m/c%2B%2B11.user_defined_literals.n2765.png?raw=1) 			| ![](https://www.dropbox.com/s/9bl49fcjcb0k0dg/c%2B%2B11.user_defined_literals.n2765.png?raw=1) 			| ![](https://www.dropbox.com/s/ux85ekdxp2rxfik/c%2B%2B11.user_defined_literals.n2765.png?raw=1) 			| ![](https://www.dropbox.com/s/lwmnf1ubw4dgjuh/c%2B%2B11.user_defined_literals.n2765.png?raw=1) 			|
