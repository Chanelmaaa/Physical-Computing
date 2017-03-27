I would like to build an automatic sunshade based on the temperature. 
When the temperature sensor detected the temperature higher than a specific point, the shade will automatically on and cover the plant. 

<img width="656" alt="screen shot 2017-02-27 at 12 35 14 pm" src="https://cloud.githubusercontent.com/assets/21225611/23372648/7895430c-fcea-11e6-9897-95e235d22f88.png">

The input will be the temperature, and the output will be a physical sunshade. 

Wire up
![img_2283](https://cloud.githubusercontent.com/assets/21225611/24365505/2923c464-12e4-11e7-8362-dd427b4c1ce2.JPG)


Code plan: 
1. Create servo object to control a servo.
2. Variable to read the value from the analog pin.
3. Attaches the servo on pin 3 to the servo object.
4. Reads the value of the temperature sensor, and convert it to the temperature. 
5. Set the range of temperature, if the temperature higher than 26c, the servo's position would be 0 degrees, if the temperature lower than 26c, the servo's position would be 179 degrees.   


This is the final version of my automatic sunshade. 

![img_2280 gif](https://cloud.githubusercontent.com/assets/21225611/24364916/389f5c98-12e2-11e7-8ef9-aaeebbbdacea.gif)