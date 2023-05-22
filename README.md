# Micromouse
Completely autonomous maze solving robot which could find it way from a predetermined starting position to the central area of the maze unaided

<b>Hardware Components:</b><br>
<ol>
<b>Raspberry Pi Pico RP2040:</b> This microcontroller board is based on the RP2040 chip, which offers sufficient processing power for controlling the robot's movements and decision-making processes.<br>
<b>Motors and Wheels:</b> The robot requires motor drivers and wheels for locomotion. These components enable the robot to move forward, backward, and turn.
Sensors: The robot needs sensors to detect the maze walls and navigate through the maze. You can use infrared or ultrasonic sensors to detect obstacles and walls.<br>
<b>Power Supply:</b> Provide a suitable power supply to the Raspberry Pi Pico and the motors, ensuring they receive enough power for the robot's operation.
Chassis: Construct a chassis or frame to hold all the components securely and provide stability to the robot.
</ol><br>


<b>Software Components:</b><br>
<ol>
<b>Operating System:</b> Install the Raspberry Pi OS or any other compatible operating system on the Raspberry Pi Pico RP2040. This allows you to execute programs and control the robot.<br>
<b>Motor Control:</b> Develop code to control the motors based on the input received from the sensors. The code should handle forward and backward movement, as well as turning left or right.<br>
<b>Maze Exploration:</b> Implement the flood-fill algorithm to explore the maze. The flood-fill algorithm is a recursive algorithm that systematically traverses through the maze, marking visited cells and identifying potential paths.
Define a grid to represent the maze. Each cell in the grid can be represented as a coordinate or a boolean value (visited or unvisited).
Start at the predetermined starting position in the maze.
Use the flood-fill algorithm to explore the neighboring cells and mark them as visited.
Keep track of the current position and direction of the robot as it moves through the maze.<br>
<b>Obstacle Detection:</b> Utilize the sensors to detect obstacles and maze walls. Adjust the robot's movement based on the sensor inputs.<br>
<b>Decision-Making:</b> Implement decision-making logic to guide the robot's movements through the maze. This can be done by evaluating the available paths and selecting the most promising one based on certain criteria (e.g., shortest path, fewest obstacles, etc.).
Central Area Detection: Once the flood-fill algorithm reaches the central area of the maze, the robot can detect its arrival by either using additional sensors or predefined coordinates.<br>
<b>Maze Solving:</b> After reaching the central area, implement a backtracking algorithm to find the shortest path back to the starting position. Use the recorded path or information stored during the exploration phase to navigate back.
Integration and Control: Integrate all the software components and ensure the robot executes the algorithms autonomously, making decisions and navigating the maze unaided.<br></ol>

  By combining the Raspberry Pi Pico RP2040 microcontroller board with the flood-fill algorithm, sensors, and suitable motor control, you can create a completely autonomous maze-solving robot. The robot will be capable of independently finding its way from the predetermined starting position to the central area of the maze, exploring the maze, avoiding obstacles, and backtracking to the starting position.
