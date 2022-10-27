# Accessibility in Video Games

This project was an exercise in developing and implementing common accessibility features in a video game.  The features in this project are far from exhaustive.

## Accessibility Features

The project includes visual, auditory, motor, and cognitive accessibility.  Features are configurable via _presets_ for each accessibility category, providing an easy setup during the first-time user-experience.

### Visual Features

- HUD Scale
- Screen Shake
- Crosshair Style
- Crosshair Colour
- Text Colour
- Text Background Colour
- Font
- Font Size
- Line Spacing

![Visual Accessibility Features](/Images/Options_Visual.PNG)

### Auditory Features
- Music Volume
- SFX Volume
- Narration Volume

![Auditory Accessibility Features](/Images/Options_Auditory.PNG)

### Motor Features
- Primary and Secondary Key Binding

![Motor Accessibility Features](/Images/Options_Motor.PNG)

### Cognitive Features
- Player Health Points
- Health Regeneration
- Invincibility
- Enemy Health Points

![Cognitive Accessibility Features](/Images/Options_Cognitive.PNG)

## Development
The project was created using Unreal Engine (4.26).  Code was written using Blueprint and a little C++ in order to extend the behaviour of the default TextBox widget (specifically, to add LineSpacing options).  The projects makes use of Structs and Enums to support option types, option choices, accessibility presets, and player preferences.  The player options system provides scalability and flexibility and would support further development and additional accessibility features.

The implementation of the features _in-game_ uses a simple level.  A basic non-player character which can fire and be fired upon which makes use of the cognitive accessibility features.  _Points of interest_ are placed in the level which implement both visual and auditory features, in additional to music and sound effects in the game.  Basic player movement implements the motor features.   

The focus of this project was to develop and implement accessibility features and offer a first-time user experience to the player which would incorporate _presets_.  The aesthetics of the level and the user-interfaces were not the main feature and as such may appear _basic_.

![Game](/Images/Game.PNG)

