#!/bin/bash
echo "Compilando..."
g++ src/.cpp -Iheader -o juego -lsfml-graphics -lsfml-window -lsfml-system
echo "Corriendo..."
./juego
