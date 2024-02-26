keys not firing

```md
╭───────────────────────────╮ ╭─────────────────────╮
│ LT4  LT3 (LT2) LT1  (LT0) │ │ RT0 RT1 RT2 RT3 RT4 │
│ LM4  LM3  LM2  LM1  (LM0) │ │ RM0 RM1 RM2 RM3 RM4 │
│ LB4 (LB3) LB2  LB1  (LB0) │ │ RB0 RB1 RB2 RB3 RB4 │
╰───────────╮   (LH1) (LH0) │ │ RH0 RH1 ╭───────────╯
            ╰───────────────╯ ╰─────────╯

       ╭──────────────╮ ╭──────────────╮
       │ 0  1  2  3  4│ │ 5  6  7  8  9│
       │10 11 12 13 14│ │15 16 17 18 19│
       │20 21 22 23 24│ │25 26 27 28 29│
       ╰────────╮30 31│ │32 33╭────────╯
                ╰─────╯ ╰─────╯
```

qw(f)p(b)
arst(g)
z(x)cd(v)z
(alt)(ctrl)

jluy'
mneio
kh,.?


qw(f)p(b)
arst(g)
z(x)cd(v)

<({)([)(\()
 @(#)$(esc)
 (`)_%(\)
    (~)
  
jluy'
mneio
kh,.?

)]}>
[tab]^*/
|&+-
=

Depending on the blink, it could be any of the following:
1. slow blink - In bootloader 
2. fast continuous blink of maybe .5ms period - Bad cable, bad port, bad computer, or some other MCU to host communication issue 
3. irregular blink (Maybe 2 fast then a pause and looping forever) - A short causing the nano to reboot constantly or the nano is installed upside down in the shield, which shorts pins that aren't supposed to be shorted. 
    - When powered off, check for shorts between any two pins on the nano...GND is expected to short to GND and B- while RAW is expected to short to B+. Any other short is bad.

Blue: Status LED, programmable by firmware and the bootloader uses it.
    - Double flash happens on reset of the nano. Slow pulse means the bootloader is connected to the host computer.
    - Fast pulse means it's waiting for a USB connection to the host device or it could be writing to the flash if you just dragged a uf2 file over.
Orange: Only true for v1
    - Blinking means no battery is connected usually.
    - Solid means that the battery is charging.
    - Off means the battery is fully charged or you're not charging
