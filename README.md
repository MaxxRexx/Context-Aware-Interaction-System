# Context-Aware Interaction Plugin Documentation

## Overview
The **Context-Aware Interaction Plugin** is a Unreal Engine 5.2.1 plugin designed to enhance interaction mechanics in games by focusing on context sensitivity. Its primary function is to improve interactivity by allowing actors (player or AI) to engage dynamically with interactable elements in the environment based on criteria like proximity, facing direction, and more. The plugin is modular, extensible, and built following Unreal Engine's component-based architecture.

---

## Primary Component: `UContextAwareInteractionComponent`

The **`UContextAwareInteractionComponent`** is the core of this plugin, responsible for managing interaction logic. It needs to be attached to the interacting actors (e.g., player characters, NPCs) that will perform interactions with other actors or objects in the game world.

---

### Key Features

1. **Context-Sensitive Interaction:**
   - The plugin handles interaction based on actor proximity, facing direction, and custom user-defined parameters.

2. **Flexible Criteria Validation:**
   - Developers can configure and validate interaction conditions dynamically, such as angle tolerances or custom logic for interactable eligibility.

3. **Efficient Performance:**
   - Designed to minimize performance overhead, even in scenarios with multiple interacting and interactable actors.

---

### Core Functions

The **`UContextAwareInteractionComponent`** provides several key methods to control the interaction behavior, as summarized below:

#### 1. Constructor: 
- **`UContextAwareInteractionComponent::UContextAwareInteractionComponent()`**
  - Initializes component properties and sets up default parameters.

#### 2. Core Lifecycle:
- **`BeginPlay()`**
  - Executes initialization when the game begins, ensuring any preconfigured state or dependencies are accounted for.

#### 3. Interaction Checks:
- **`PerformInteractionCheck()`**
  - Main function to validate whether an interaction is possible with objects in range.
- **`PerformInteractionCheck_ContextAware()`**
  - A specialized interaction check with additional context-specific logic.

#### 4. Interaction Execution:
- **`TryInteract() const`**
  - Attempts to trigger interaction with the closest valid interactable actor.

#### 5. Interaction Management:
- **`ClearInteractionTimer()`**
  - Clears any timers associated with periodic interaction checks, ensuring no unnecessary logic executes.

---

### Advanced Features

#### Directional Validation:
- **`AreActorsFacingEachOther()`**
  - Validates whether two actors are facing each other, with tolerances for interaction based on angles and actor orientations.
  - Parameters:
    - **Input**: `InteractingActor`, `InteractableActor`, `AngleTolerance`.
    - **Output**: `ResultingAngleInteracting`, `ResultingAngleInteractable.

#### Dynamic Interactable Actor Management:
- **`AttemptToAddInteractableActorToArray()`**
  - Dynamically adds new potential interactable actors into an internal array.
- **`WasTheAttemptToAddInteractableActorToArraySuccessful()`**
  - Validates whether a recent attempt to add an interactable actor succeeded.
- **`RemoveInteractableActorsThatAreOutOfInteractionRangeInArray()`**
  - Handles cleanup of actors that are no longer within interaction range.

---

### Potential Use Cases

1. **Player Character Interaction:**
   - Triggering interactions such as opening doors, picking up items, or talking to NPCs.

2. **NPC Interaction Systems:**
   - AI-controlled characters interacting with the game world, like picking up items or triggering events.

3. **Custom Scenarios:**
   - Games that require fine-grained interaction logic, such as stealthy takedowns (based on angle and proximity).

---

### Advantages of Using the Plugin

- **Ease of Use:** Attach the `UContextAwareInteractionComponent` to any actor to quickly integrate interaction capabilities.
- **Performance:** Carefully optimized and designed for real-time interaction checks.
- **Extensibility:** Modular code allows game developers to implement custom interaction conditions and expand upon the existing logic.

---

### Getting Started

1. **Add the Component:**
   In your actor's header file:
```c++
#include "UContextAwareInteractionComponent.h"
```
   Then add it to the actor's constructor:
```c++
UContextAwareInteractionComponent* InteractionComponent;
   InteractionComponent = CreateDefaultSubobject<UContextAwareInteractionComponent>(TEXT("InteractionComponent"));
```

For Blueprints, just add the CAIS component to your actor.

2. **Configure Parameters:**
   Define interaction parameters (e.g., range, angle tolerance) in the editor or through code.

3. **Perform Interaction:**
   Call the `TryInteract()` function when the actor attempts an interaction, passing the components for validation.

---

### Extensibility Ideas

1. **Custom Interaction Logic:**
   Override core methods like `PerformInteractionCheck()` or create new subclasses to extend behavior with game-specific interaction checks.

2. **Interaction Feedback:**
   Integrate UI notifications, animations, or audio cues when interactions are performed successfully or fail.

3. **Multiple Interaction Types:**
   Expand the system to support different types of interactions (context-menu interactions, radial menus, etc.).

---

### Conclusion

The Context-Aware Interaction Plugin is a robust tool for creating immersive gameplay mechanics. Its modular design and focus on performance make it suitable for both small and complex projects. By integrating the `UContextAwareInteractionComponent`, developers can quickly implement intuitive and dynamic interaction systems in Unreal Engine.
