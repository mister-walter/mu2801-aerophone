# Software Design

## Hardward module

### Solenoid
**Purpose:** Represent and control a single solenoid.  
**Data:** on/off  
**Functions:** turnon() & turnoff()

### HoleController (subclass of Solenoid)
**Purpose:** Open and close a hole using solenoid.  
**Data:** on/off & hole number  
**Functions:** open() & close()

### Valve (subclass of Solenoid)
**Purpose:** Represent and control a single valve.  
**Data:** on/off  
**Functions:** open() & close()

## Software controller module

### AerophoneInteractor
**Purpose:** Interact with aerophone using solenoids and valve  
**Data:** A list of HoleControllers and a Valve  
**Functions:**  
+ updateHoleStates(boolean[] states): Update hole states (open or close) through an array of booleans.  
+ turnValveOn(): Turn the valve on.  
+ turnValveOff(): Turn the valve off.  

### MusicPlayer
**Purpose:** play songs by controlling the `AerophoneInteractor` and using knowledge of  AerophoneKnowledge  
**Data:**
+ an instance of AerophoneInteractor  
+ an instance of AerophoneKnowledge  

**Functions:**
+ play(Song new_song)  

### AerophoneKnowledge:
**Purpose:** Produce instructions to play a note on an Aerophone given a Note object  
**Data:** Dictionary from a Note object to boolean array of states  
**Functions:**  
+ getInstruction(Note note)

## File reading module

### FileReader
**Purpose:** Read a file  
**Functions:** readFile(String fileDirectory)  

### KnowledgeReader (subclass of FileReader)
**Purpose:** Create a dictionary from Note objects to boolean arrays representing instructions about how to play aerophone from a text file  
**Functions:** absorbKnowledge(String fileDirectory)  

### SongReader (subclass of FileReader)
**Purpose:** Create a Song object from a file  
**Functions:** readSong(String fileDirectory)  

## Primitive objects

### Song
**Purpose:** Represent a song  
**Data:** a list of Notes  

### Note
**Purpose:** Represent a musical note  
**Data:** I don't know. Length, pitch.....
