# Led Library for Arduino
### Getting Started
<li>Open your terminal (CMD)
<li> go to your library folder ( /Arduino/libraries )
<li>example <b>cd Arduino/libraries</b> and then
<li>write your terminal or cmd <b>git clone https://github.com/bayu275/Led</b>
<li> write your sketch like the code below :
<br></br>
<pre>
<code>
#include "Led.h"
Led led13(13);
void setup() {
    // your code here
}
void loop() {
    Led(11).on();
    Led(12).of();
    led13.blink(1000); // 1 second
}
</code>
</pre>
<li> Verify & Upload your code to Arduino.