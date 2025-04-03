◆概要

秋月のドット抜け御免マトリクスLEDを STM32F4xx-Nucleo64 で動作確認するプログラム

◆参考資料

https://akizukidenshi.com/img/contents/kairo/%E3%83%87%E3%83%BC%E3%82%BF/%E8%A1%A8%E7%A4%BA%E8%A3%85%E7%BD%AE/LED%E9%9B%BB%E5%85%89%E6%8E%B2%E7%A4%BA.pdf

◆参考情報２

https://x.com/YI_Studio/status/1842111760213663799

https://x.com/YI_Studio/status/1893488568930025907


◆ピンアサイン

マトリクスLEDモジュールと接続するピンは以下の通り。

#define SIN1PIN         3

#define SIN2PIN         4

#define SIN3PIN         5

#define CLKPIN          6

#define LATPIN          7

#define BTNPIN          PC13

◆免責

　著作者は，提供するプログラムを用いることで生じるいかなる損害に関して，一切の責任を負わないものとします．

　たとえ，著作者が損害の生じる可能性を知らされていた場合も同様に一切の責任を負わないものとします．
