# <openPEMF>

## Description

Open source PEMF project that includes the hardware and firmware for anyone looking to build their own PEMF device

- Aren't there already some open source PEMF projects?  
    Yes, but many of them do not create the same fields used in the majority of published PEMF parameters. Most of them also have switching characteristics that cause spurious spike and oscillations that could be considered "dirty electricity"

- Why share this project?  
    Because PEMF with the right parameters has the ability to change peoples lives. From regenerating cartilage to reducing inflammation, many people get out of pain they have had for years. Something this powerful should not be stuck behind high price tags.

- What problem does it solve?  
    PEMF devices with good parameters cost a lot, cheap PEMF devices do not create magnetic fields that use the parameters used in the majority of PEMF studies

This open source PEMF project provides all the files necessary to make your own PEMF device that can be used to re-create the majority of PEMF parameters used in the majority of published PEMF studies.

PEMF has been proven to do lots of amazing things including regenerate cartilage and decrease inflammation, but don't take our word for it, go read some of the published studies and take a look at the science yourself!

The project allows you to tune your own magnetic field intensity and slew rate. This can be accomplished by either changing the voltage from the power supply, or by changing the pulse width.

Reach out with any questions or suggestions! Lets build this together and create a future where all people can access PEMF and benefit from the improved quality of life!
You can reach us at openpemf@gmail.com

## Table of Contents


- [How To Build](#How-to-build)
- [Usage](#usage)
- [Features](#features)

## How to build

The Gerber files, BOM and .POS files are already for purchase at JLCPCB.com. You should be able to upload these to JLCPCB and order complete (or mostly complete - depending on part availability) PCBs ready to run!

Once you have your PCBs, the first thing that you will want to do is upload the arduino code. The file "TEST.ino" is set up to run at 10hz and if you don't want to make any changes you can simply upload this file using the Arduino IDE. You will need to install the Raspberry Pi Pico board definitions since this design uses an RP2040 as it's processor. If you want to re-upload code, there are 2 holes in the pcb that you can bridge with a paperclip to get it into bootloader mode.

If you are not familiar with arduino or PCB ordering we can send out a kit. Email us at openpemf@gmail.com.




This board is designed to fit in this enclosure:
https://www.ebay.com/itm/266629727778?mkcid=16&mkevt=1&mkrid=711-127632-2357-0&ssspo=g7l9ZZJUQN-&sssrc=2047675&ssuid=7-kgmmceqts&widget_ver=artemis&media=COPY

![Alt text](<Readme Photos/IMG_20241211_120231669.jpg>)
![Alt text](<Readme Photos/IMG_20241211_120947249.jpg>)
![Alt text](<Readme Photos/IMG_20241211_121005525.jpg>)

You can see that we used a simple circular connector to get the PEMF power through the enclosure. Ideally a 4 pin connector would be used for larger coils/currents. A handheld drill is an okay option to add the holes. Another option would be something 3D printed or laser cut. Please contribute these if you end up making them!

The coil should be wound from some form of wire. The closer the wires are together, the more efficient the coil will be. Using regular insulated wire still works well, but you will get more magnetic field from using enameled magnet wire.

Here is what our prototype coil looked like:
![Alt text](<Readme Photos/IMG_20241211_121123863.jpg>)
![Alt text](<Readme Photos/IMG_20241211_121217290.jpg>)
![Alt text](<Readme Photos/IMG_20241211_121227975.jpg>)

This sensor is great to see what the fields look like around your coil. Simply give it power and connect it to an oscilloscope:
https://www.digikey.com/en/products/detail/asahi-kasei-microdevices-akm/EQ733L/5822654

The coil we made had around 3 mT at the center, and around 10 mT close to the wires.

You will want a power supply that can run the board well. We found that this one worked well:
https://www.digikey.com/en/products/detail/fsp-technology-inc/FSP040-DWAN3/15713237 



## Usage
Simply place the loop over any part of your body that needs improvement. We like to look up published studies to see how long to use the PEMF for. You can even wind coils that are smaller with higher intensity or larger for a larger magnetic field.


## Features

There are a lot of features to OpenPEMF! Here are a few:
* Mosfet gate slew is limited -  this prevents parasitic turn on during the falling side of the signal
* There is an RC snubber across the h-bridge, removing certain oscillations that are not wanted
* Bi-polar pulses
* Programmable frequencies

