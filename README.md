# Led Library for Arduino
### Getting Started
<li>Open your terminal (CMD)
<li> go to your library folder ( /Arduino/libraries )
<li>example cd Arduino/libraries and then
<li> git clone <a><b>https://github.com/bayu275/Led</b></a>
<li> write your sketch like the code below :
<pre style=margin-top:20px;>
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