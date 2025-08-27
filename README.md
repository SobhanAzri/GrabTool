# A Grab/Release - Scale/Rotate Game Mechanics Showcase
This repository contains a robust and reusable component developed in Unreal Engine 5 using C++ and Blueprints. It demonstrates a physics-based grab system with scale and rotation mechanics, designed to be easily integrated into any character blueprint.

it is Actually a Component That You Can Add to A Character.

Just Know That Art or Design of the game was not my Target and i jst wanted to Showcase the Core C++ Logic and Mechanics.


## Project Overview
This project showcases a **Grabber Component** that allows characters to grab, hold, rotate, and scale objects in a 3D environment. Built with performance and flexibility in mind, the component is ideal for developers looking to implement interactive object manipulation in their Unreal Engine projects. keep in mind that i made this Component as the Only Component Which Casts a Trace or Checks for Interactable Items. So be aware to not use everything without optimizing according tou your game. if you have another component that casts Trace , you can modify or use parts of this code to achieve the Grabber Mechanics.


## Key Features
- **Physics-Based Grab System:**
  - Implemented a System for Grabbing and Holding Objects.
  - It Completely Keeps the Object's Base Rotation & Scale.you Can Rotate or Scale the Grabbed Item Yourself.

- **Enhanced Input System:**
  - This Grabber Components Completely Uses Unreal Engine 5 Enhanced Input System to handle The Controls , Providing a Smooth and Responsive feel.

- **Blueprint-Friendly Design:**
  - this is a Component. So You Can Add Grabber to Any Character Blueprint You Want in the Add Components Tab.

- **Visual Feedback:** 
  - Objects within reach display a highlighted outline, providing clear visual cues for interaction.

- **Custom C++ Logic:**
  - The Core Mechanics of this Project is Written in C++ for Performance and Showing my Understanding of this Language and Engine.


## Technical Details
- **Engine :** Unreal Engine 5.6.1
- **Language:** C++ & Blueprint
- **Source Location:** the Grab System Sources are located in Source/Public/Components/Grabber


## Future Plans
i will create other Repositories for Other Game Mechanics As Well , and After That, i Plan to Make a full game with this mechanics and i will upload the whole Game's Source to another repo.


## How to Use

1. Clone this repository to your local machine.
2. Make Sure You Have Unreal Engine And VS or Rider Installed.
3. Open The Project Folder and Right-Click on the .uproject and click Generate Project Files
4. Open the .Sln File in Visual Studio and Build & Run.
5. Test the Grab/Release - Scale/Rotate Mechanics and Enjoy!
