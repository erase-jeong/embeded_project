import pygame
import RPi.GPIO as GPIO

pygame.mixer.init()
pygame.mixer.music.load("파일경로")

GPIO.setup(15,GPIO.IN)

while True:
  if GPIO.input(15)==0:
    pygame.mixer.music.play()
