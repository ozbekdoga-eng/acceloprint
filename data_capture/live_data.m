delete(instrfindall)
clear all 
clc

% Define the serial port and baud rate
motorserialPort = 'COM6';
bluetoothport='COM3';

% Create a serial object
motor = serialport(motorserialPort,9600);
bluetooth=serialport(bluetoothport,115200);

speed_vector=[0:75:300];

dummy=[];

tic

% Example usage: sending different speed values

for i=1:length(speed_vector)
    sendSpeedCommand(motor, speed_vector(i));  % Send a positive speed command
    clf
    for j=1:1000
      response = readline(bluetooth); % Read response from PCB
      response = str2num(response);
      dummy=[dummy; response];
      
        if toc >= 0.05  % Check if 0.2 seconds have passed
            subplot(2, 1, 1)
            plot(-dummy(:, 1),'b-','LineWidth',2)
            ylabel("Centripetal Acceleration (m/s^2)")
            xlabel("Data points")
            subplot(2, 1, 2)
            plot(dummy(:, 4) * 3.3 / 1024,'r-','LineWidth',2)
            ylabel("AcceloPrint Response (V)")
            xlabel("Data points")
            drawnow
            tic; % Restart the timer after plotting
        end
        
    end
end

sendSpeedCommand(motor, 0);

% Function to send speed command
function sendSpeedCommand(serialObj, speed)
    writeline(serialObj,num2str(speed));
    pause(0.1);
end

