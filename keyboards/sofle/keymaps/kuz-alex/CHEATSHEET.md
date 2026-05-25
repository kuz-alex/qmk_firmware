# Sofle — kuz-alex Keymap Cheatsheet

**Keyboard:** Sofle (split ergonomic, 58 keys + 2 rotary encoders)
**Firmware:** QMK — `keyboards/sofle/keymaps/kuz-alex`

---

## Layer Overview

| # | Name       | Activation                              |
|---|------------|-----------------------------------------|
| 0 | Base       | Default (QWERTY)                        |
| 1 | Raise      | Hold `[L1]` — left thumb               |
| 2 | Lower      | Hold `[L2]` — right thumb              |
| 3 | Adjust     | Hold `[L1]` + `[L2]` simultaneously    |

---

## Layer 0 — Base

```
┌──────┬──────┬──────┬──────┬──────┬──────┐          ┌──────┬──────┬──────┬──────┬──────┬──────┐
│  `   │  1   │  2   │  3   │  4   │  5   │          │  6   │  7   │  8   │  9   │  0   │ DEL  │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ESC  │  Q   │  W   │  E   │  R   │  T   │          │  Y   │  U   │  I   │  O   │  P   │ BSPC │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ TAB  │  A   │  S   │  D   │  F   │  G   │          │  H   │  J   │  K   │  L   │  ;   │  '   │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ LSFT │  Z   │  X   │  C   │  V   │  B   │          │  N   │  M   │  ,   │  .   │  /   │ RSFT │
└──────┴──────┴──────┴──────┴──────┴──────┘          └──────┴──────┴──────┴──────┴──────┴──────┘
         ┌──────┬──────┬──────┬──────┬──────┐    ┌──────┬──────┬──────┬──────┬──────┐
         │ LCTL │ LALT │ LGUI │ [L1] │ SPC  │    │ ENT  │ [L2] │ RGUI │ RALT │ RCTL │
         └──────┴──────┴──────┴──────┴──────┘    └──────┴──────┴──────┴──────┴──────┘
```

**Encoders:** Left CCW/CW = Vol− / Vol+  ·  Left press = **MUTE**
             Right CCW/CW = PgDn / PgUp  ·  Right press = (none)

---

## Layer 1 — Raise

Hold `[L1]` (left thumb). Numbers on the left, arrows and navigation on the right.
Home row left becomes modifier cluster. Hold `[L3]` (right thumb) to reach Layer 3.

```
┌──────┬──────┬──────┬──────┬──────┬──────┐          ┌──────┬──────┬──────┬──────┬──────┬──────┐
│ ---- │ ---- │ ---- │ ---- │ ---- │ ---- │          │ ---- │ ---- │ ---- │ ---- │ ---- │ ---- │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│  `   │  1   │  2   │  3   │  4   │  5   │          │  6   │  7   │  8   │  9   │  0   │ BSPC │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ LSFT │ LCTL │ LALT │ RGUI │  $   │ CAPS │          │  ←   │  ↓   │  ↑   │  →   │  )   │  |   │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ LSFT │ UNDO │ CUT  │ COPY │ PSTE │ ---- │          │ HOME │ PgDn │ PgUp │ END  │  \   │ RSFT │
└──────┴──────┴──────┴──────┴──────┴──────┘          └──────┴──────┴──────┴──────┴──────┴──────┘
         ┌──────┬──────┬──────┬──────┬──────┐    ┌──────┬──────┬──────┬──────┬──────┐
         │ LCTL │ LALT │ LGUI │([L1])│ SPC  │    │ ENT  │ [L3] │ RGUI │ RALT │ RCTL │
         └──────┴──────┴──────┴──────┴──────┘    └──────┴──────┴──────┴──────┴──────┘
```

**Encoders:** Same as Layer 0 (transparent) — Vol± / PgDn/PgUp  ·  Left press = **MUTE**

---

## Layer 2 — Lower

Hold `[L2]` (right thumb). Full symbol row on the left, bracket/operator pairs on the right.
Hold `[L3]` (left thumb) to reach Layer 3.

```
┌──────┬──────┬──────┬──────┬──────┬──────┐          ┌──────┬──────┬──────┬──────┬──────┬──────┐
│ ---- │ ---- │ ---- │ ---- │ ---- │ ---- │          │ ---- │ ---- │ ---- │ ---- │ ---- │ ---- │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ESC  │  !   │  @   │  #   │  $   │  %   │          │  ^   │  &   │  *   │  (   │  )   │ BSPC │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ LSFT │ LCTL │ LALT │ LGUI │ PgDn │ CAPS │          │  -   │  =   │  {   │  }   │  |   │  `   │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ LSFT │ UNDO │ CUT  │ COPY │ PSTE │ BLTG │          │  _   │  +   │  [   │  ]   │  \   │  ~   │
└──────┴──────┴──────┴──────┴──────┴──────┘          └──────┴──────┴──────┴──────┴──────┴──────┘
         ┌──────┬──────┬──────┬──────┬──────┐    ┌──────┬──────┬──────┬──────┬──────┐
         │ LCTL │ LALT │ LGUI │ [L3] │ SPC  │    │ ENT  │([L2])│ RGUI │ RALT │ RCTL │
         └──────┴──────┴──────┴──────┴──────┘    └──────┴──────┴──────┴──────┴──────┘
```

**Encoders:** Left CCW/CW = RGB Hue− / RGB Hue+  ·  Left press = **MUTE**
             Right CCW/CW = RGB Sat− / RGB Sat+  ·  Right press = (none)

---

## Layer 3 — Adjust

Hold `[L1]` + `[L2]` simultaneously. Function keys, media controls, RGB and backlight.

```
┌──────┬──────┬──────┬──────┬──────┬──────┐          ┌──────┬──────┬──────┬──────┬──────┬──────┐
│  `   │ ---- │ ---- │ ---- │ ---- │ ---- │          │ ---- │ ---- │ ---- │ ---- │ ---- │ DEL  │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ MPRV │  F1  │  F2  │  F3  │  F4  │  F5  │          │  F6  │  F7  │  F8  │  F9  │ F10  │ F11  │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ RMOD │ MPLY │ MNXT │ MUTE │ VOL- │ VOL+ │          │ INS  │ HOME │ PgUp │ ---- │ ---- │ F12  │
├──────┼──────┼──────┼──────┼──────┼──────┤          ├──────┼──────┼──────┼──────┼──────┼──────┤
│ RREV │ BRI- │ BRI+ │ BLST │ RTOG │ BLTG │          │ DEL  │ END  │ PgDn │ ---- │ ---- │ RSFT │
└──────┴──────┴──────┴──────┴──────┴──────┘          └──────┴──────┴──────┴──────┴──────┴──────┘
         ┌──────┬──────┬──────┬──────┬──────┐    ┌──────┬──────┬──────┬──────┬──────┐
         │ LCTL │ LALT │ LGUI │([L1])│ ---- │    │ ---- │([L2])│ RGUI │ RALT │ RCTL │
         └──────┴──────┴──────┴──────┴──────┘    └──────┴──────┴──────┴──────┴──────┘
```

**Encoders:** Left CCW/CW = RGB Val− / RGB Val+  ·  Encoder presses = (none)
             Right CCW/CW = RGB Mode← / RGB Mode→

---

## Encoder Summary

| Layer       | Left CCW   | Left CW    | Left Press | Right CCW    | Right CW    | Right Press |
|-------------|------------|------------|------------|--------------|-------------|-------------|
| 0 Base      | Vol−       | Vol+       | Mute       | Page Down    | Page Up     | —           |
| 1 Raise     | Vol−       | Vol+       | Mute       | Page Down    | Page Up     | —           |
| 2 Lower     | RGB Hue−   | RGB Hue+   | Mute       | RGB Sat−     | RGB Sat+    | —           |
| 3 Adjust    | RGB Val−   | RGB Val+   | —          | RGB Mode←    | RGB Mode→   | —           |

---

## Key Legend

| Key    | Meaning                                      |
|--------|----------------------------------------------|
| `----` | No key / disabled (XXXXXXX)                  |
| `([L1])` | Layer key currently held                   |
| `[L1]` | Hold for Layer 1 (Raise)                     |
| `[L2]` | Hold for Layer 2 (Lower)                     |
| `[L3]` | Hold for Layer 3 (Adjust)                    |
| `BLTG` | Backlight Toggle                             |
| `BLST` | Backlight Step (cycle brightness levels)     |
| `RTOG` | RGB Matrix Toggle                            |
| `RMOD` | RGB Mode — next                              |
| `RREV` | RGB Mode — previous                         |
| `UNDO` | Undo (KC_UNDO)                               |
| `CUT`  | Cut (KC_CUT)                                 |
| `COPY` | Copy (KC_COPY)                               |
| `PSTE` | Paste (KC_PSTE)                              |
| `MPRV` | Media Previous Track                         |
| `MPLY` | Media Play / Pause                           |
| `MNXT` | Media Next Track                             |
| `VOL-` | Volume Down                                  |
| `VOL+` | Volume Up                                    |
| `BRI-` | Screen Brightness Down                       |
| `BRI+` | Screen Brightness Up                         |
| `INS`  | Insert                                       |
| `CAPS` | Caps Lock                                    |
| `LGUI` | Left GUI (Cmd / Win)                         |
| `RGUI` | Right GUI (Cmd / Win)                        |
| `LALT` | Left Alt / Option                            |
| `RALT` | Right Alt / Option                           |
| `LCTL` | Left Control                                 |
| `RCTL` | Right Control                                |
| `LSFT` | Left Shift                                   |
| `RSFT` | Right Shift                                  |

---

## OLED Displays

| Side          | Content                                          |
|---------------|--------------------------------------------------|
| Left (master) | Layer name + Caps Lock indicator                 |
| Right         | QMK logo                                         |

Layer names on left OLED:

| Layer | Mode label | Layer label |
|-------|------------|-------------|
| 0     | `Qwrt`     | `Base`      |
| 1     | `Mod`      | `Raise`     |
| 2     | `Mod`      | `Lower`     |
| 3     | `Mod`      | `Undef`     |

---

## macOS vs Windows

### Modifier key names

| Key on board | macOS        | Windows         |
|--------------|--------------|-----------------|
| `LGUI`       | ⌘ Command    | ⊞ Windows       |
| `RGUI`       | ⌘ Command    | ⊞ Windows       |
| `LALT`       | ⌥ Option     | Alt             |
| `RALT`       | ⌥ Option     | Alt             |
| `LCTL`       | Control      | Ctrl            |
| `RCTL`       | Control      | Ctrl            |

### Primary app modifier

The keymap has `LGUI` on the base layer thumb cluster and both home rows (Layers 1 & 2).

- **macOS** — `LGUI` (⌘) is the primary modifier for almost all app shortcuts
- **Windows** — `LCTL` is the primary modifier; `LGUI` (⊞) is for OS-level shortcuts only

Both `LGUI` and `LCTL` are on the left-thumb cluster in the base layer, so both are always reachable without a layer switch.

### UNDO / CUT / COPY / PSTE keys

These use QMK's dedicated HID keyboard keycodes (`KC_UNDO` etc.), which both operating systems recognise natively:

| Key   | macOS sends | Windows sends |
|-------|-------------|---------------|
| UNDO  | ⌘Z          | Ctrl+Z        |
| CUT   | ⌘X          | Ctrl+X        |
| COPY  | ⌘C          | Ctrl+C        |
| PSTE  | ⌘V          | Ctrl+V        |

No remapping needed — these work correctly on both platforms out of the box.

### Common shortcut reference

| Action           | macOS keys          | Windows keys        | How to type on this board               |
|------------------|---------------------|---------------------|-----------------------------------------|
| Copy             | ⌘C                  | Ctrl+C              | `COPY` key (L1 or L2, bottom row)       |
| Cut              | ⌘X                  | Ctrl+X              | `CUT` key (L1 or L2, bottom row)        |
| Paste            | ⌘V                  | Ctrl+V              | `PSTE` key (L1 or L2, bottom row)       |
| Undo             | ⌘Z                  | Ctrl+Z              | `UNDO` key (L1 or L2, bottom row)       |
| Select all       | ⌘A                  | Ctrl+A              | `LGUI+A` (Mac)  /  `LCTL+A` (Win)      |
| Save             | ⌘S                  | Ctrl+S              | `LGUI+S` (Mac)  /  `LCTL+S` (Win)      |
| Find             | ⌘F                  | Ctrl+F              | `LGUI+F` (Mac)  /  `LCTL+F` (Win)      |
| New tab          | ⌘T                  | Ctrl+T              | `LGUI+T` (Mac)  /  `LCTL+T` (Win)      |
| Close tab/window | ⌘W                  | Ctrl+W              | `LGUI+W` (Mac)  /  `LCTL+W` (Win)      |
| App switcher     | ⌘Tab                | Alt+Tab             | `LGUI+TAB` (Mac)  /  `LALT+TAB` (Win)  |
| Spotlight/Search | ⌘Space              | ⊞+S                 | `LGUI+SPC` (Mac)  /  `LGUI+S` (Win)    |
| Lock screen      | ⌘Ctrl+Q             | ⊞+L                 | `LGUI+LCTL+Q` (Mac)  /  `LGUI+L` (Win) |
| Screenshot       | ⌘⇧3 / ⌘⇧4          | ⊞+PrtSc             | `LGUI+LSFT+3` (Mac)  /  `LGUI+PrtSc` (Win) |

### Keys with platform-specific behaviour

| Key    | macOS                              | Windows                                      |
|--------|------------------------------------|----------------------------------------------|
| `BRI-` | Lowers display brightness natively | Driver-dependent; may not work on all setups |
| `BRI+` | Raises display brightness natively | Driver-dependent; may not work on all setups |
| `LGUI` | Opens Spotlight, Cmd shortcuts     | Opens Start menu, Windows shortcuts          |
| `LALT` | Option — types accented chars, shortcuts | Alt — menu bar access, Alt+Tab, Alt+F4  |

---

## RGB Matrix

- **Driver:** WS2812, 36 LEDs per half (72 total)
- **Default:** Blue (Hue 170, full saturation)
- **Max brightness:** 50 (capped in firmware)
- **Effects enabled:** Typing Heatmap, Solid Reactive, Solid Reactive Simple
- Turns off automatically when USB is suspended
