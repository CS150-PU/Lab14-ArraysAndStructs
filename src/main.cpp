//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        8/22/2023
// Class:       CS150-xx (xx is your section number)
// Assignment:  Hello World
// Purpose:     Display the message Hello World to the screen
// Hours:       0.25
//******************************************************************************

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

const int MAX_POINTS = 100;
const double SENTINEL = -99.0;

struct Point {
	double mX, mY;
};

// TODO#4: Write the function prototype for reading a single Point

void readPoints (ifstream &inFile, Point sPoints[], int &size);
void printPoint (const Point &sPoint);
double getDistance (const Point &sPoint1, const Point &sPoint2);
Point getClosestToPoint (const Point sPoints[], int size, const Point &sPoint);

/***********************************************************************
Function:     main

Description:  Performs some calculations on points as described in the
							program's purpose.

Parameters:   None

Returned:     Exit Status
***********************************************************************/
int main () {
	ifstream inFile;
	Point sPoints[MAX_POINTS];
  Point sClosestPoint;
	int size = 0;

	// TODO#2: Create a Point variable sPoint and initialize the variable to 
	//				 (5, 2) using an initializer list

	// TODO#3: Call your function printPoint to print the Point from TODO#2

	inFile.open ("data/points.txt");
	if (inFile.fail ()) {
		cout << "Error opening file" << endl;
		exit (EXIT_FAILURE);
	}

	// TODO#7: Read in all points from the file by uncommenting the next line
	// readPoints (inFile, sPoints, size);

	// TODO#9: Find the point closest to the origin using getClosestToPoint
	//				 The Point sClosestPoint is to contain this Point for the code
	//				 below to work correctly.


	if (size > 0) {
		cout << "Point closest to origin is: ";
		printPoint (sClosestPoint);
		cout << endl;
	}

	inFile.close ();

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			printPoint

Description:	Prints a point in the form (X, Y)

Parameters:		sPoint - point to be displayed

Returned:			None
***********************************************************************/
void printPoint (const Point &sPoint) {
	// TOOD#1: Write this function
}

/***********************************************************************
Function:			readPoint

Description:	Reads a single Point from a file

Parameters:		

Returned:			None
***********************************************************************/

// TOOD#5: Write this function


/***********************************************************************
Function:			readPoints

Description:	Reads each point into an array of structs. The file is
							already open for reading.

Parameters:		infile	- stream to read from
							sPoints	- array of points
							size		- number of points read into the array

Returned:			None
***********************************************************************/
void readPoints (ifstream &inFile, Point sPoints[], int &size) {
// TOOD#6: Write this function
}


/***********************************************************************
Function:			getDistance

Description:	Calculate the distance between the points. Return distance.

Parameters:		sPoint1 - the first point
							sPoint2 - the second point

Returned:			the distance between the points
***********************************************************************/
double getDistance (const Point &sPoint1, const Point &sPoint2) {
  const double SQUARE = 2.0;

	return sqrt (pow ((sPoint2.mX - sPoint1.mX), SQUARE) + 
               pow ((sPoint2.mY - sPoint1.mY), SQUARE));
}

// TODO#8: Write the function getClosestToPoint including documentation
//				 Use the function getDistance in your solution