/*
	만든이 : 장성훈
	만든날 : 2018.05.02
*/

function print(msg) {
    if(typeof document !== 'undefined' && typeof msg === 'string')
        document.write(msg.replace(/\n/g,'<br/>') + '<br/>') ;
    console.log(msg) ;
}

try {
	var i = 0
    i = 0x0000000000000F;       print("i 04 =  0x0000000000000F = " + i) ;
    i = 0x000000000000FF;       print("i 08 =  0x000000000000FF = " + i) ;
    i = 0x00000000000FFF;       print("i 12 =  0x00000000000FFF = " + i) ;
    i = 0x0000000000FFFF;       print("i 16 =  0x0000000000FFFF = " + i) ;
    i = 0x000000000FFFFF;       print("i 20 =  0x000000000FFFFF = " + i) ;
    i = 0x00000000FFFFFF;       print("i 24 =  0x00000000FFFFFF = " + i) ;
    i = 0x0000000FFFFFFF;       print("i 28 =  0x0000000FFFFFFF = " + i) ;
    i = 0x000000FFFFFFFF;       print("i 32 =  0x000000FFFFFFFF = " + i) ;
    i = 0x00000FFFFFFFFF;       print("i 36 =  0x00000FFFFFFFFF = " + i) ;
    i = 0x0000FFFFFFFFFF;       print("i 40 =  0x0000FFFFFFFFFF = " + i) ;
    i = 0x000FFFFFFFFFFF;       print("i 44 =  0x000FFFFFFFFFFF = " + i) ;
    i = 0x00FFFFFFFFFFFF;       print("i 48 =  0x00FFFFFFFFFFFF = " + i) ;
    i = 0x01000000000000;       print("i 48 =  0x01000000000000 = " + i) ;
    i = 0x0FFFFFFFFFFFFE;       print("i 52 =  0x0FFFFFFFFFFFFE = " + i) ;
    i = 0x0FFFFFFFFFFFFF;       print("i 52 =  0x0FFFFFFFFFFFFF = " + i) ;
    i = 0x10000000000000;       print("i 53 =  0x10000000000000 = " + i) ;
    i = 0x1FFFFFFFFFFFFE;       print("i 53 =  0x1FFFFFFFFFFFFE = " + i) ;
    i = 0x1FFFFFFFFFFFFF;       print("i 53 =  0x1FFFFFFFFFFFFF = " + i) ;
    i = 0x20000000000000;       print("i 54 =  0x20000000000000 = " + i) ;
    i = 0x3FFFFFFFFFFFFE;       print("i 54 =  0x3FFFFFFFFFFFFE = " + i) ;
    i = 0x3FFFFFFFFFFFFF;       print("i 54 =  0x3FFFFFFFFFFFFF = " + i) ;
    i = 0x40000000000000;       print("i 55 =  0x40000000000000 = " + i) ;
    i = 0xFFFFFFFFFFFFFF;       print("i 56 =  0xFFFFFFFFFFFFFF = " + i) ;
    i = 0x100000000000000;      print("i 56 = 0x100000000000000 = " + i) ;
    i = 0xFFFFFFFFFFFFFFF;      print("i 60 = 0xFFFFFFFFFFFFFFF = " + i) ;
    
} catch(e) {
    print(e) ;
}