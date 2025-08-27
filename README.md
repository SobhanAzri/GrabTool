# A Grab/Release - Scale/Rotate Game Mechanics Showcase

This repository contains a robust and reusable component developed in Unreal Engine 5 using C++ and Blueprints. It demonstrates a physics-based grab system with scale and rotation mechanics, designed to be easily integrated into any character blueprint.

It is actually a **component** that you can add to a character.

⚠️ Just know that art or design of the game was not my target — I only wanted to showcase the **core C++ logic and mechanics**.

---

## Project Overview
This project showcases a **Grabber Component** that allows characters to grab, hold, rotate, and scale objects in a 3D environment. Built with performance and flexibility in mind, the component is ideal for developers looking to implement interactive object manipulation in their Unreal Engine projects.  

Keep in mind that I made this component as the **only component which casts a trace or checks for interactable items**. So be aware not to use everything without optimizing according to your game. If you already have another component that casts a trace, you can modify or use parts of this code to achieve the Grabber mechanics.

---

## Key Features
- **Physics-Based Grab System**
  - System for grabbing and holding objects.
  - Keeps the object’s base rotation & scale. You can rotate or scale the grabbed item yourself.

- **Enhanced Input System**
  - Uses Unreal Engine 5’s Enhanced Input System for smooth and responsive controls.

- **Blueprint-Friendly Design**
  - As a component, you can add Grabber to any Character Blueprint from the *Add Components* tab.

- **Visual Feedback**
  - Objects within reach display a highlighted outline, providing clear visual cues for interaction.

- **Custom C++ Logic**
  - Core mechanics are written in C++ for performance and to showcase my understanding of Unreal Engine and C++.

---

## Technical Details
- **Engine:** Unreal Engine 5.6.1  
- **Language:** C++ & Blueprint  
- **Source Location:** `Source/GrabTool/Public/Components/GrabTool`

---

## Future Plans
I will create other repositories for different game mechanics as well.  
After that, I plan to make a **full game** using these mechanics and upload the complete source to another repo.

---

## How to Use
1. Clone this repository to your local machine.  
2. Make sure you have Unreal Engine and Visual Studio (or Rider) installed.  
3. Open the project folder, right-click on the `.uproject` file, and select **Generate Project Files**.  
4. Open the `.sln` file in Visual Studio, then **Build & Run**.  
5. Test the Grab/Release - Scale/Rotate mechanics and enjoy!  
