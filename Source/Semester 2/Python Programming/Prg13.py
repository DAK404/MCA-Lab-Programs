############################################
#                                          #
#              Lab Program 13              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#              GUI Program 3               #
#                                          #
############################################


from superwires import games
import pygame
games.init(screen_width = 480, screen_height = 480, fps = 50)
wall_image = games.load_image("F://wall.jpg", transparent = False)
var=pygame.transform.scale(wall_image,(480,480))
games.screen.background = var
games.screen.mainloop()
