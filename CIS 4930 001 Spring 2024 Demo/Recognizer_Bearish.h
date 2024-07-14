// Stock Data Analysis Project
// CIS 4930 Project 3
// Name: Daishak Patel
// U-Number: U84709314

#pragma once
#include "Recognizer.h"
using namespace System;
using namespace System::IO;
using namespace System::Globalization;
using namespace System::Collections::Generic;

/// <summary>
/// Subclass responsible for identifying bearish candlestick patterns
/// </summary>
public ref class Recognizer_Bearish : Recognizer
{
public:

	// Constructor
	Recognizer_Bearish() : Recognizer("Bearish", 1) {}

	// Recognize a bearish candlestick
	bool Recognize(List<SmartCandlestick^>^ lscs, int index) override;

};