# Battle-Tank
An open world head-to-head tank fight with simple AI, terrain, and advanced control system in Unreal Engine 4

### Game Development Document
- **Rules**
	- Tanks can move anywhere in the terrain, which is surrounded by mountains.
	- Players start with finite health and ammo.
	- The last stand wins.

- **Requirements**
	- SFX: Gun firing, explosion, barrel moving, turret moving, and engine sound.
	- BGM: Create tension during battle.
	- Static Mesh: Simple tank comprising tracks, body, turret, and barrel.
	- Textures: Visual flare.
	- Physics: Accelerate, turn, and suspension of the tank.

An-Hung Tai

### Commit
* Setting up a GitHub repo
* Landscape setup
* Low poly landscape
* Configuring a tank
* Third person camera setup
* Main Menu, UI setup
* Delegating to components
* AI controller cpp setup
* Finished DeprojectScreenToWorld
* Finished AimAt method
* Introduce barrel c++ static mesh
* Barrel/ Turret moving with aiming
* Projectile prototype
* AI tank fires
* Complete manual tank movement
* Finished AI moving
* Refactoring I: fixing aiming UI
* Refactoring II: fixing aiming & firing
* Setup sideway forces
* Avoid flying throttle
* Tweaking tank AI
* Ammo left display
* Auto mortar setup
* Launch blast setup
* Impact blast setup
* Hitting impulse setup
* Take damage detect
* Health bar & end game detect
* Fixed tank forward vector
* Fixed mortar forward vector
* Constrain camera angle via BP
* Setup physics constraint wheel
* SpawnActorDeferred introduce
* Setup constraint wheels
* Snowy weather
* Tweaking snow parameter
* Setup projectile sound
* Refine projectile sound & setup dust kickup trail
* Refine dust kickup trail
* Setup engine sound
* Alternative way solving UI overlapping problem
* Introducing compass, crosshair and notification
* AI tanks are marked on compass
* Improve gamemode, start & end game etc.
* Refactor blueprint & AI tank destroyed method
* Debug hot reload losing issue
* Setup tutorial level and gamemode
* Continue tutorial game flow design
* Setup destructible meshes
* Update user interface
* Update to UE4.22.0
*