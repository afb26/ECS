/*

Motor Driver Functions Header File
Copyright (C) 2023 Alex Blackman
Available: https://github.com/afb26/ECS

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.


*/

#ifndef MDFUNCS
#define MDFUNCS


// TB6612
void forwardTB6612();
void backwardTB6612();
void rightTB6612();
void leftTB6612();
void stopFuncTB6612();

// L298N
void forwardL298N();
void backwardL298N();
void rightL298N();
void leftL298N();
void stopFuncL298N();


#endif // MDFUNCS
