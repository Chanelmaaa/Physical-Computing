I would like to build an automatic sunshade based on the temperature. 
When the temperature sensor detected the temperature higher than a specific point, the shade will automatically on and cover the plant. 

<img width="656" alt="screen shot 2017-02-27 at 12 35 14 pm" src="https://cloud.githubusercontent.com/assets/21225611/23372648/7895430c-fcea-11e6-9897-95e235d22f88.png">

The input will be the temperature, and the output will be a physical sunshade. 


Code plan: 
1. Create servo object to control a servo.
2. Variable to read the value from the analog pin.
3. Attaches the servo on pin 3 to the servo object.
4. Reads the value of the tempreture sensor, and convert it to the tempreture. 
5. Set the range of tempreture, if the tempreture higher than 26c, the servo's position would be 0 degree, if the tempreture lower than 26c, the servo's position would be 179 degree.   


This is the final version of my automatic sunshade. 

![img_2280 gif](https://cloud.githubusercontent.com/assets/21225611/24364916/389f5c98-12e2-11e7-8ef9-aaeebbbdacea.gif)