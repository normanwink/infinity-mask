# Infinity Mask

Here is the code to run a NeoPixel strip with a sine-like glowing pattern.  
Tested with an Arduino Nano.

## YouTube
Watch the Making-Of [here](https://youtu.be/M4eL62GatDc).

## Parameters
`PIN` (line 3) will be the digital pin which you connect to the data-in of your NeoPixels.

`NUMPIXELS` (line 4) sets the amount of pixels you use in your project.

`DEL` (line 8) will set the delay between the frames. It more or less sets the framerate of your pixel animation. Keep it low to reduce battery consumption and but high enough to prevent flickering.

`SPEED` (line 9) will set how fast each LED will flash. Actually it's very close with the framerate but it allows you a little more control.

`R`, `G` and `B` (line 11-13)... Well I think you can guess what this is. Set the desired RGB values.